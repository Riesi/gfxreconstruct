/*
** Copyright (c) 2018-2020 Valve Corporation
** Copyright (c) 2018-2021 LunarG, Inc.
** Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#ifndef GFXRECON_ENCODE_CAPTURE_MANAGER_H
#define GFXRECON_ENCODE_CAPTURE_MANAGER_H

#include "encode/capture_settings.h"
#include "encode/handle_unwrap_memory.h"
#include "encode/parameter_encoder.h"
#include "format/api_call_id.h"
#include "format/format.h"
#include "format/platform_types.h"
#include "util/compressor.h"
#include "util/defines.h"
#include "util/file_output_stream.h"
#include "util/keyboard.h"
#include "util/memory_output_stream.h"

#include <atomic>
#include <cassert>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

class CaptureManager
{
  public:
    static format::HandleId GetUniqueId() { return ++unique_id_counter_; }

    HandleUnwrapMemory* GetHandleUnwrapMemory()
    {
        auto thread_data = GetThreadData();
        assert(thread_data != nullptr);
        thread_data->handle_unwrap_memory_.Reset();
        return &thread_data->handle_unwrap_memory_;
    }

    ParameterEncoder* BeginTrackedApiCallCapture(format::ApiCallId call_id)
    {
        if (capture_mode_ != kModeDisabled)
        {
            return InitApiCallCapture(call_id);
        }

        return nullptr;
    }

    ParameterEncoder* BeginApiCallCapture(format::ApiCallId call_id)
    {
        if ((capture_mode_ & kModeWrite) == kModeWrite)
        {
            return InitApiCallCapture(call_id);
        }

        return nullptr;
    }

    ParameterEncoder* BeginMethodCallCapture(format::ApiCallId call_id, format::HandleId object_id)
    {
        if ((capture_mode_ & kModeWrite) == kModeWrite)
        {
            return InitMethodCallCapture(call_id, object_id);
        }

        return nullptr;
    }

    void EndApiCallCapture(ParameterEncoder* encoder);

    void EndMethodCallCapture(ParameterEncoder* encoder);

    void EndFrame();

    void CheckContinueCaptureForWriteMode();

    void CheckStartCaptureForTrackMode();

    bool IsTrimHotkeyPressed();

    void WriteDisplayMessageCmd(const char* message);

  protected:
    enum CaptureModeFlags : uint32_t
    {
        kModeDisabled      = 0x0,
        kModeWrite         = 0x01,
        kModeTrack         = 0x02,
        kModeWriteAndTrack = (kModeWrite | kModeTrack)
    };

    enum PageGuardMemoryMode : uint32_t
    {
        kMemoryModeDisabled,
        kMemoryModeShadowInternal,   // Internally managed shadow memory allocations.
        kMemoryModeShadowPersistent, // Externally managed shadow memory allocations.
        kMemoryModeExternal          // Imported host memory without shadow allocations.
    };

    typedef uint32_t CaptureMode;

    class ThreadData
    {
      public:
        ThreadData();

        ~ThreadData() {}

      public:
        const format::ThreadId                    thread_id_;
        format::ApiCallId                         call_id_;
        format::HandleId                          object_id_;
        std::unique_ptr<util::MemoryOutputStream> parameter_buffer_;
        std::unique_ptr<ParameterEncoder>         parameter_encoder_;
        std::vector<uint8_t>                      compressed_buffer_;
        HandleUnwrapMemory                        handle_unwrap_memory_;

      private:
        static format::ThreadId GetThreadId();

      private:
        static std::mutex                                     count_lock_;
        static format::ThreadId                               thread_count_;
        static std::unordered_map<uint64_t, format::ThreadId> id_map_;
    };

  protected:
    static bool CreateInstance(std::function<CaptureManager*()> GetInstanceFunc, std::function<void()> NewInstanceFunc);

    static void DestroyInstance(std::function<const CaptureManager*()> GetInstanceFunc,
                                std::function<void()>                  DeleteInstanceFunc);

    CaptureManager(format::ApiFamilyId api_family);

    virtual ~CaptureManager();

    bool Initialize(std::string base_filename, const CaptureSettings::TraceSettings& trace_settings);

    virtual void CreateStateTracker()                          = 0;
    virtual void DestroyStateTracker()                         = 0;
    virtual void WriteTrackedState(format::ThreadId thread_id) = 0;

    ThreadData* GetThreadData()
    {
        if (!thread_data_)
        {
            thread_data_ = std::make_unique<ThreadData>();
        }
        return thread_data_.get();
    }

    bool                                GetForceFileFlush() const { return force_file_flush_; }
    CaptureSettings::MemoryTrackingMode GetMemoryTrackingMode() const { return memory_tracking_mode_; }
    bool                                GetPageGuardAlignBufferSizes() const { return page_guard_align_buffer_sizes_; }
    bool                                GetPageGuardTrackAhbMemory() const { return page_guard_track_ahb_memory_; }
    PageGuardMemoryMode                 GetPageGuardMemoryMode() const { return page_guard_memory_mode_; }
    const std::string&                  GetTrimKey() const { return trim_key_; }
    uint32_t                            GetCurrentFrame() const { return current_frame_; }
    CaptureMode                         GetCaptureMode() const { return capture_mode_; }
    bool                                GetDebugLayer() const { return debug_layer_; }

    std::string CreateTrimFilename(const std::string& base_filename, const CaptureSettings::TrimRange& trim_range);
    bool        CreateCaptureFile(const std::string& base_filename);
    void        ActivateTrimming();

    void WriteFileHeader();
    void BuildOptionList(const format::EnabledOptions&        enabled_options,
                         std::vector<format::FileOptionPair>* option_list);

    ParameterEncoder* InitApiCallCapture(format::ApiCallId call_id);

    ParameterEncoder* InitMethodCallCapture(format::ApiCallId call_id, format::HandleId object_id);

    void WriteResizeWindowCmd(format::HandleId surface_id, uint32_t width, uint32_t height);

    void WriteFillMemoryCmd(format::HandleId memory_id, uint64_t offset, uint64_t size, const void* data);

    void WriteCreateHeapAllocationCmd(uint64_t allocation_id, uint64_t allocation_size);

  protected:
    std::unique_ptr<util::FileOutputStream> file_stream_;
    std::mutex                              file_lock_;
    std::unique_ptr<util::Compressor>       compressor_;
    std::mutex                              mapped_memory_lock_;
    util::Keyboard                          keyboard_;

  private:
    static uint32_t                                 instance_count_;
    static std::mutex                               instance_lock_;
    static thread_local std::unique_ptr<ThreadData> thread_data_;
    static std::atomic<format::HandleId>            unique_id_counter_;

    const format::ApiFamilyId api_family_;

    format::EnabledOptions                  file_options_;
    std::string                             base_filename_;
    bool                                    timestamp_filename_;
    bool                                    force_file_flush_;
    CaptureSettings::MemoryTrackingMode     memory_tracking_mode_;
    bool                                    page_guard_align_buffer_sizes_;
    bool                                    page_guard_track_ahb_memory_;
    PageGuardMemoryMode                     page_guard_memory_mode_;
    bool                                    trim_enabled_;
    std::vector<CaptureSettings::TrimRange> trim_ranges_;
    std::string                             trim_key_;
    size_t                                  trim_current_range_;
    uint32_t                                current_frame_;
    CaptureMode                             capture_mode_;
    bool                                    previous_hotkey_state_;
    bool                                    debug_layer_;
};

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_ENCODE_CAPTURE_MANAGER_H
