/*
** Copyright (c) 2021 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to
** deal in the Software without restriction, including without limitation the
** rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
** sell copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
** IN THE SOFTWARE.
*/

/*
** This file is generated from dx12_replay_consumer_header_generator.py.
**
*/

#ifndef  GFXRECON_GENERATED_DX12_REPLAY_CONSUMER_H
#define  GFXRECON_GENERATED_DX12_REPLAY_CONSUMER_H


#include "decode/dx12_replay_consumer_base.h"


GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class Dx12ReplayConsumer : public Dx12ReplayConsumerBase
{
  public:
    Dx12ReplayConsumer(std::shared_ptr<application::Application> application, const DxReplayOptions& options) : Dx12ReplayConsumerBase(application, options) {}
    virtual ~Dx12ReplayConsumer() override {}
/*
** This part is generated from dxgi.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_CreateDXGIFactory(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFactory);

    virtual void Process_CreateDXGIFactory1(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFactory);

    virtual void Process_IDXGIObject_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID Name,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_IDXGIObject_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID Name,
        format::HandleId pUnknown);

    virtual void Process_IDXGIObject_GetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID Name,
        PointerDecoder<UINT>* pDataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_IDXGIObject_GetParent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppParent);

    virtual void Process_IDXGIDeviceSubObject_GetDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppDevice);

    virtual void Process_IDXGIResource_GetSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pSharedHandle);

    virtual void Process_IDXGIResource_GetUsage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<DXGI_USAGE>* pUsage);

    virtual void Process_IDXGIResource_SetEvictionPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT EvictionPriority);

    virtual void Process_IDXGIResource_GetEvictionPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pEvictionPriority);

    virtual void Process_IDXGIKeyedMutex_AcquireSync(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Key,
        DWORD dwMilliseconds);

    virtual void Process_IDXGIKeyedMutex_ReleaseSync(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Key);

    virtual void Process_IDXGISurface_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SURFACE_DESC>* pDesc);

    virtual void Process_IDXGISurface_Map(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MAPPED_RECT>* pLockedRect,
        UINT MapFlags);

    virtual void Process_IDXGISurface_Unmap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_IDXGISurface1_GetDC(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL Discard,
        PointerDecoder<uint64_t, void*>* phdc);

    virtual void Process_IDXGISurface1_ReleaseDC(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pDirtyRect);

    virtual void Process_IDXGIAdapter_EnumOutputs(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Output,
        HandlePointerDecoder<IDXGIOutput*>* ppOutput);

    virtual void Process_IDXGIAdapter_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC>* pDesc);

    virtual void Process_IDXGIAdapter_CheckInterfaceSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID InterfaceName,
        StructPointerDecoder<Decoded_LARGE_INTEGER>* pUMDVersion);

    virtual void Process_IDXGIOutput_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_OUTPUT_DESC>* pDesc);

    virtual void Process_IDXGIOutput_GetDisplayModeList(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT EnumFormat,
        UINT Flags,
        PointerDecoder<UINT>* pNumModes,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pDesc);

    virtual void Process_IDXGIOutput_FindClosestMatchingMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pModeToMatch,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pClosestMatch,
        format::HandleId pConcernedDevice);

    virtual void Process_IDXGIOutput_WaitForVBlank(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_IDXGIOutput_TakeOwnership(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        BOOL Exclusive);

    virtual void Process_IDXGIOutput_ReleaseOwnership(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_IDXGIOutput_GetGammaControlCapabilities(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_GAMMA_CONTROL_CAPABILITIES>* pGammaCaps);

    virtual void Process_IDXGIOutput_SetGammaControl(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_GAMMA_CONTROL>* pArray);

    virtual void Process_IDXGIOutput_GetGammaControl(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_GAMMA_CONTROL>* pArray);

    virtual void Process_IDXGIOutput_SetDisplaySurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pScanoutSurface);

    virtual void Process_IDXGIOutput_GetDisplaySurfaceData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDestination);

    virtual void Process_IDXGIOutput_GetFrameStatistics(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_FRAME_STATISTICS>* pStats);

    virtual void Process_IDXGISwapChain_Present(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SyncInterval,
        UINT Flags);

    virtual void Process_IDXGISwapChain_GetBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Buffer,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppSurface);

    virtual void Process_IDXGISwapChain_SetFullscreenState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL Fullscreen,
        format::HandleId pTarget);

    virtual void Process_IDXGISwapChain_GetFullscreenState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<BOOL>* pFullscreen,
        HandlePointerDecoder<IDXGIOutput*>* ppTarget);

    virtual void Process_IDXGISwapChain_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC>* pDesc);

    virtual void Process_IDXGISwapChain_ResizeBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT BufferCount,
        UINT Width,
        UINT Height,
        DXGI_FORMAT NewFormat,
        UINT SwapChainFlags);

    virtual void Process_IDXGISwapChain_ResizeTarget(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC>* pNewTargetParameters);

    virtual void Process_IDXGISwapChain_GetContainingOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IDXGIOutput*>* ppOutput);

    virtual void Process_IDXGISwapChain_GetFrameStatistics(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_FRAME_STATISTICS>* pStats);

    virtual void Process_IDXGISwapChain_GetLastPresentCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pLastPresentCount);

    virtual void Process_IDXGIFactory_EnumAdapters(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Adapter,
        HandlePointerDecoder<IDXGIAdapter*>* ppAdapter);

    virtual void Process_IDXGIFactory_MakeWindowAssociation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t WindowHandle,
        UINT Flags);

    virtual void Process_IDXGIFactory_GetWindowAssociation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pWindowHandle);

    virtual void Process_IDXGIFactory_CreateSwapChain(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC>* pDesc,
        HandlePointerDecoder<IDXGISwapChain*>* ppSwapChain);

    virtual void Process_IDXGIFactory_CreateSoftwareAdapter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t Module,
        HandlePointerDecoder<IDXGIAdapter*>* ppAdapter);

    virtual void Process_IDXGIDevice_GetAdapter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IDXGIAdapter*>* pAdapter);

    virtual void Process_IDXGIDevice_CreateSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SURFACE_DESC>* pDesc,
        UINT NumSurfaces,
        DXGI_USAGE Usage,
        StructPointerDecoder<Decoded_DXGI_SHARED_RESOURCE>* pSharedResource,
        HandlePointerDecoder<IDXGISurface*>* ppSurface);

    virtual void Process_IDXGIDevice_QueryResourceResidency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IUnknown*>* ppResources,
        PointerDecoder<DXGI_RESIDENCY>* pResidencyStatus,
        UINT NumResources);

    virtual void Process_IDXGIDevice_SetGPUThreadPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        INT Priority);

    virtual void Process_IDXGIDevice_GetGPUThreadPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<INT>* pPriority);

    virtual void Process_IDXGIFactory1_EnumAdapters1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Adapter,
        HandlePointerDecoder<IDXGIAdapter1*>* ppAdapter);

    virtual void Process_IDXGIFactory1_IsCurrent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_IDXGIAdapter1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC1>* pDesc);

    virtual void Process_IDXGIDevice1_SetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT MaxLatency);

    virtual void Process_IDXGIDevice1_GetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pMaxLatency);

/*
** This part is generated from dxgi1_2.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_IDXGIDisplayControl_IsStereoEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_IDXGIDisplayControl_SetStereoEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL enabled);

    virtual void Process_IDXGIOutputDuplication_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_DESC>* pDesc);

    virtual void Process_IDXGIOutputDuplication_AcquireNextFrame(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT TimeoutInMilliseconds,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_FRAME_INFO>* pFrameInfo,
        HandlePointerDecoder<IDXGIResource*>* ppDesktopResource);

    virtual void Process_IDXGIOutputDuplication_GetFrameDirtyRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT DirtyRectsBufferSize,
        StructPointerDecoder<Decoded_tagRECT>* pDirtyRectsBuffer,
        PointerDecoder<UINT>* pDirtyRectsBufferSizeRequired);

    virtual void Process_IDXGIOutputDuplication_GetFrameMoveRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT MoveRectsBufferSize,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_MOVE_RECT>* pMoveRectBuffer,
        PointerDecoder<UINT>* pMoveRectsBufferSizeRequired);

    virtual void Process_IDXGIOutputDuplication_GetFramePointerShape(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT PointerShapeBufferSize,
        PointerDecoder<uint8_t>* pPointerShapeBuffer,
        PointerDecoder<UINT>* pPointerShapeBufferSizeRequired,
        StructPointerDecoder<Decoded_DXGI_OUTDUPL_POINTER_SHAPE_INFO>* pPointerShapeInfo);

    virtual void Process_IDXGIOutputDuplication_MapDesktopSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MAPPED_RECT>* pLockedRect);

    virtual void Process_IDXGIOutputDuplication_UnMapDesktopSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_IDXGIOutputDuplication_ReleaseFrame(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_IDXGISurface2_GetResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppParentResource,
        PointerDecoder<UINT>* pSubresourceIndex);

    virtual void Process_IDXGIResource1_CreateSubresourceSurface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT index,
        HandlePointerDecoder<IDXGISurface2*>* ppSurface);

    virtual void Process_IDXGIResource1_CreateSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded__SECURITY_ATTRIBUTES>* pAttributes,
        DWORD dwAccess,
        WStringDecoder* lpName,
        PointerDecoder<uint64_t, void*>* pHandle);

    virtual void Process_IDXGIDevice2_OfferResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        DXGI_OFFER_RESOURCE_PRIORITY Priority);

    virtual void Process_IDXGIDevice2_ReclaimResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        PointerDecoder<BOOL>* pDiscarded);

    virtual void Process_IDXGIDevice2_EnqueueSetEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent);

    virtual void Process_IDXGISwapChain1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc);

    virtual void Process_IDXGISwapChain1_GetFullscreenDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC>* pDesc);

    virtual void Process_IDXGISwapChain1_GetHwnd(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pHwnd);

    virtual void Process_IDXGISwapChain1_GetCoreWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID refiid,
        HandlePointerDecoder<void*>* ppUnk);

    virtual void Process_IDXGISwapChain1_Present1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SyncInterval,
        UINT PresentFlags,
        StructPointerDecoder<Decoded_DXGI_PRESENT_PARAMETERS>* pPresentParameters);

    virtual void Process_IDXGISwapChain1_IsTemporaryMonoSupported(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_IDXGISwapChain1_GetRestrictToOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<IDXGIOutput*>* ppRestrictToOutput);

    virtual void Process_IDXGISwapChain1_SetBackgroundColor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3DCOLORVALUE>* pColor);

    virtual void Process_IDXGISwapChain1_GetBackgroundColor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3DCOLORVALUE>* pColor);

    virtual void Process_IDXGISwapChain1_SetRotation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_MODE_ROTATION Rotation);

    virtual void Process_IDXGISwapChain1_GetRotation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<DXGI_MODE_ROTATION>* pRotation);

    virtual void Process_IDXGIFactory2_IsWindowedStereoEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_IDXGIFactory2_CreateSwapChainForHwnd(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        uint64_t hWnd,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC>* pFullscreenDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain);

    virtual void Process_IDXGIFactory2_CreateSwapChainForCoreWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        format::HandleId pWindow,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain);

    virtual void Process_IDXGIFactory2_GetSharedResourceAdapterLuid(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hResource,
        StructPointerDecoder<Decoded_LUID>* pLuid);

    virtual void Process_IDXGIFactory2_RegisterStereoStatusWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t WindowHandle,
        UINT wMsg,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIFactory2_RegisterStereoStatusEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIFactory2_UnregisterStereoStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie);

    virtual void Process_IDXGIFactory2_RegisterOcclusionStatusWindow(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t WindowHandle,
        UINT wMsg,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIFactory2_RegisterOcclusionStatusEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIFactory2_UnregisterOcclusionStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie);

    virtual void Process_IDXGIFactory2_CreateSwapChainForComposition(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain);

    virtual void Process_IDXGIAdapter2_GetDesc2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC2>* pDesc);

    virtual void Process_IDXGIOutput1_GetDisplayModeList1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT EnumFormat,
        UINT Flags,
        PointerDecoder<UINT>* pNumModes,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC1>* pDesc);

    virtual void Process_IDXGIOutput1_FindClosestMatchingMode1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC1>* pModeToMatch,
        StructPointerDecoder<Decoded_DXGI_MODE_DESC1>* pClosestMatch,
        format::HandleId pConcernedDevice);

    virtual void Process_IDXGIOutput1_GetDisplaySurfaceData1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDestination);

    virtual void Process_IDXGIOutput1_DuplicateOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        HandlePointerDecoder<IDXGIOutputDuplication*>* ppOutputDuplication);

/*
** This part is generated from dxgi1_3.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_CreateDXGIFactory2(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        UINT Flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFactory);

    virtual void Process_DXGIGetDebugInterface1(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        UINT Flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* pDebug);

    virtual void Process_IDXGIDevice3_Trim(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_IDXGISwapChain2_SetSourceSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Width,
        UINT Height);

    virtual void Process_IDXGISwapChain2_GetSourceSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pWidth,
        PointerDecoder<UINT>* pHeight);

    virtual void Process_IDXGISwapChain2_SetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT MaxLatency);

    virtual void Process_IDXGISwapChain2_GetMaximumFrameLatency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pMaxLatency);

    virtual void Process_IDXGISwapChain2_GetFrameLatencyWaitableObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        uint64_t return_value);

    virtual void Process_IDXGISwapChain2_SetMatrixTransform(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MATRIX_3X2_F>* pMatrix);

    virtual void Process_IDXGISwapChain2_GetMatrixTransform(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_MATRIX_3X2_F>* pMatrix);

    virtual void Process_IDXGIOutput2_SupportsOverlays(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_IDXGIFactory3_GetCreationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_IDXGIDecodeSwapChain_PresentBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT BufferToPresent,
        UINT SyncInterval,
        UINT Flags);

    virtual void Process_IDXGIDecodeSwapChain_SetSourceRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_IDXGIDecodeSwapChain_SetTargetRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_IDXGIDecodeSwapChain_SetDestSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Width,
        UINT Height);

    virtual void Process_IDXGIDecodeSwapChain_GetSourceRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_IDXGIDecodeSwapChain_GetTargetRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_IDXGIDecodeSwapChain_GetDestSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pWidth,
        PointerDecoder<UINT>* pHeight);

    virtual void Process_IDXGIDecodeSwapChain_SetColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace);

    virtual void Process_IDXGIDecodeSwapChain_GetColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS return_value);

    virtual void Process_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        uint64_t hSurface,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC1>* pDesc,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGISwapChain1*>* ppSwapChain);

    virtual void Process_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        uint64_t hSurface,
        StructPointerDecoder<Decoded_DXGI_DECODE_SWAP_CHAIN_DESC>* pDesc,
        format::HandleId pYuvDecodeBuffers,
        format::HandleId pRestrictToOutput,
        HandlePointerDecoder<IDXGIDecodeSwapChain*>* ppSwapChain);

    virtual void Process_IDXGISwapChainMedia_GetFrameStatisticsMedia(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_FRAME_STATISTICS_MEDIA>* pStats);

    virtual void Process_IDXGISwapChainMedia_SetPresentDuration(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Duration);

    virtual void Process_IDXGISwapChainMedia_CheckPresentDurationSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT DesiredPresentDuration,
        PointerDecoder<UINT>* pClosestSmallerPresentDuration,
        PointerDecoder<UINT>* pClosestLargerPresentDuration);

    virtual void Process_IDXGIOutput3_CheckOverlaySupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT EnumFormat,
        format::HandleId pConcernedDevice,
        PointerDecoder<UINT>* pFlags);

/*
** This part is generated from dxgi1_4.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_IDXGISwapChain3_GetCurrentBackBufferIndex(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_IDXGISwapChain3_CheckColorSpaceSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_COLOR_SPACE_TYPE ColorSpace,
        PointerDecoder<UINT>* pColorSpaceSupport);

    virtual void Process_IDXGISwapChain3_SetColorSpace1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_COLOR_SPACE_TYPE ColorSpace);

    virtual void Process_IDXGISwapChain3_ResizeBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT BufferCount,
        UINT Width,
        UINT Height,
        DXGI_FORMAT Format,
        UINT SwapChainFlags,
        PointerDecoder<UINT>* pCreationNodeMask,
        HandlePointerDecoder<IUnknown*>* ppPresentQueue);

    virtual void Process_IDXGIOutput4_CheckOverlayColorSpaceSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT Format,
        DXGI_COLOR_SPACE_TYPE ColorSpace,
        format::HandleId pConcernedDevice,
        PointerDecoder<UINT>* pFlags);

    virtual void Process_IDXGIFactory4_EnumAdapterByLuid(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_LUID AdapterLuid,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvAdapter);

    virtual void Process_IDXGIFactory4_EnumWarpAdapter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvAdapter);

    virtual void Process_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie);

    virtual void Process_IDXGIAdapter3_QueryVideoMemoryInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NodeIndex,
        DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
        StructPointerDecoder<Decoded_DXGI_QUERY_VIDEO_MEMORY_INFO>* pVideoMemoryInfo);

    virtual void Process_IDXGIAdapter3_SetVideoMemoryReservation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NodeIndex,
        DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
        UINT64 Reservation);

    virtual void Process_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie);

/*
** This part is generated from dxgi1_5.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_IDXGIOutput5_DuplicateOutput1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDevice,
        UINT Flags,
        UINT SupportedFormatsCount,
        PointerDecoder<DXGI_FORMAT>* pSupportedFormats,
        HandlePointerDecoder<IDXGIOutputDuplication*>* ppOutputDuplication);

    virtual void Process_IDXGISwapChain4_SetHDRMetaData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_HDR_METADATA_TYPE Type,
        UINT Size,
        PointerDecoder<uint8_t>* pMetaData);

    virtual void Process_IDXGIDevice4_OfferResources1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        DXGI_OFFER_RESOURCE_PRIORITY Priority,
        UINT Flags);

    virtual void Process_IDXGIDevice4_ReclaimResources1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumResources,
        HandlePointerDecoder<IDXGIResource*>* ppResources,
        PointerDecoder<DXGI_RECLAIM_RESOURCE_RESULTS>* pResults);

/*
** This part is generated from dxgi1_6.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_DXGIDeclareAdapterRemovalSupport(
        const ApiCallInfo& call_info,
        HRESULT return_value);

    virtual void Process_IDXGIAdapter4_GetDesc3(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_ADAPTER_DESC3>* pDesc);

    virtual void Process_IDXGIOutput6_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_DXGI_OUTPUT_DESC1>* pDesc);

    virtual void Process_IDXGIOutput6_CheckHardwareCompositionSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pFlags);

    virtual void Process_IDXGIFactory6_EnumAdapterByGpuPreference(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Adapter,
        DXGI_GPU_PREFERENCE GpuPreference,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvAdapter);

    virtual void Process_IDXGIFactory7_RegisterAdaptersChangedEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_IDXGIFactory7_UnregisterAdaptersChangedEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DWORD dwCookie);

/*
** This part is generated from d3d12.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_D3D12SerializeRootSignature(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_ROOT_SIGNATURE_DESC>* pRootSignature,
        D3D_ROOT_SIGNATURE_VERSION Version,
        HandlePointerDecoder<ID3D10Blob*>* ppBlob,
        HandlePointerDecoder<ID3D10Blob*>* ppErrorBlob);

    virtual void Process_D3D12CreateRootSignatureDeserializer(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pSrcData,
        SIZE_T SrcDataSizeInBytes,
        Decoded_GUID pRootSignatureDeserializerInterface,
        HandlePointerDecoder<void*>* ppRootSignatureDeserializer);

    virtual void Process_D3D12SerializeVersionedRootSignature(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* pRootSignature,
        HandlePointerDecoder<ID3D10Blob*>* ppBlob,
        HandlePointerDecoder<ID3D10Blob*>* ppErrorBlob);

    virtual void Process_D3D12CreateVersionedRootSignatureDeserializer(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pSrcData,
        SIZE_T SrcDataSizeInBytes,
        Decoded_GUID pRootSignatureDeserializerInterface,
        HandlePointerDecoder<void*>* ppRootSignatureDeserializer);

    virtual void Process_D3D12CreateDevice(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        format::HandleId pAdapter,
        D3D_FEATURE_LEVEL MinimumFeatureLevel,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppDevice);

    virtual void Process_D3D12GetDebugInterface(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDebug);

    virtual void Process_D3D12EnableExperimentalFeatures(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        UINT NumFeatures,
        StructPointerDecoder<Decoded_GUID>* pIIDs,
        PointerDecoder<uint8_t>* pConfigurationStructs,
        PointerDecoder<UINT>* pConfigurationStructSizes);

    virtual void Process_D3D12GetInterface(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        Decoded_GUID rclsid,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDebug);

    virtual void Process_ID3D12Object_GetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        PointerDecoder<UINT>* pDataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D12Object_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D12Object_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        format::HandleId pData);

    virtual void Process_ID3D12Object_SetName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* Name);

    virtual void Process_ID3D12DeviceChild_GetDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDevice);

    virtual void Process_ID3D12RootSignatureDeserializer_GetRootSignatureDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_ROOT_SIGNATURE_DESC>* return_value);

    virtual void Process_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D_ROOT_SIGNATURE_VERSION convertToVersion,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* ppDesc);

    virtual void Process_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* return_value);

    virtual void Process_ID3D12Heap_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_HEAP_DESC return_value);

    virtual void Process_ID3D12Resource_Map(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Subresource,
        StructPointerDecoder<Decoded_D3D12_RANGE>* pReadRange,
        PointerDecoder<uint64_t, void*>* ppData);

    virtual void Process_ID3D12Resource_Unmap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Subresource,
        StructPointerDecoder<Decoded_D3D12_RANGE>* pWrittenRange);

    virtual void Process_ID3D12Resource_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_DESC return_value);

    virtual void Process_ID3D12Resource_GetGPUVirtualAddress(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_VIRTUAL_ADDRESS return_value);

    virtual void Process_ID3D12Resource_ReadFromSubresource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t pDstData,
        UINT DstRowPitch,
        UINT DstDepthPitch,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_D3D12_BOX>* pSrcBox);

    virtual void Process_ID3D12Resource_GetHeapProperties(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        PointerDecoder<D3D12_HEAP_FLAGS>* pHeapFlags);

    virtual void Process_ID3D12CommandAllocator_Reset(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12Fence_GetCompletedValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12Fence_SetEventOnCompletion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Value,
        uint64_t hEvent);

    virtual void Process_ID3D12Fence_Signal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Value);

    virtual void Process_ID3D12Fence1_GetCreationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_FENCE_FLAGS return_value);

    virtual void Process_ID3D12PipelineState_GetCachedBlob(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<ID3D10Blob*>* ppBlob);

    virtual void Process_ID3D12DescriptorHeap_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_DESCRIPTOR_HEAP_DESC return_value);

    virtual void Process_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE return_value);

    virtual void Process_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE return_value);

    virtual void Process_ID3D12CommandList_GetType(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_COMMAND_LIST_TYPE return_value);

    virtual void Process_ID3D12GraphicsCommandList_Close(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12GraphicsCommandList_Reset(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pAllocator,
        format::HandleId pInitialState);

    virtual void Process_ID3D12GraphicsCommandList_ClearState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pPipelineState);

    virtual void Process_ID3D12GraphicsCommandList_DrawInstanced(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT VertexCountPerInstance,
        UINT InstanceCount,
        UINT StartVertexLocation,
        UINT StartInstanceLocation);

    virtual void Process_ID3D12GraphicsCommandList_DrawIndexedInstanced(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT IndexCountPerInstance,
        UINT InstanceCount,
        UINT StartIndexLocation,
        INT BaseVertexLocation,
        UINT StartInstanceLocation);

    virtual void Process_ID3D12GraphicsCommandList_Dispatch(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT ThreadGroupCountX,
        UINT ThreadGroupCountY,
        UINT ThreadGroupCountZ);

    virtual void Process_ID3D12GraphicsCommandList_CopyBufferRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT64 DstOffset,
        format::HandleId pSrcBuffer,
        UINT64 SrcOffset,
        UINT64 NumBytes);

    virtual void Process_ID3D12GraphicsCommandList_CopyTextureRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pDst,
        UINT DstX,
        UINT DstY,
        UINT DstZ,
        StructPointerDecoder<Decoded_D3D12_TEXTURE_COPY_LOCATION>* pSrc,
        StructPointerDecoder<Decoded_D3D12_BOX>* pSrcBox);

    virtual void Process_ID3D12GraphicsCommandList_CopyResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        format::HandleId pSrcResource);

    virtual void Process_ID3D12GraphicsCommandList_CopyTiles(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pTileRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>* pTileRegionSize,
        format::HandleId pBuffer,
        UINT64 BufferStartOffsetInBytes,
        D3D12_TILE_COPY_FLAGS Flags);

    virtual void Process_ID3D12GraphicsCommandList_ResolveSubresource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        DXGI_FORMAT Format);

    virtual void Process_ID3D12GraphicsCommandList_IASetPrimitiveTopology(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D_PRIMITIVE_TOPOLOGY PrimitiveTopology);

    virtual void Process_ID3D12GraphicsCommandList_RSSetViewports(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumViewports,
        StructPointerDecoder<Decoded_D3D12_VIEWPORT>* pViewports);

    virtual void Process_ID3D12GraphicsCommandList_RSSetScissorRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D12GraphicsCommandList_OMSetBlendFactor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<FLOAT> BlendFactor [4]);

    virtual void Process_ID3D12GraphicsCommandList_OMSetStencilRef(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StencilRef);

    virtual void Process_ID3D12GraphicsCommandList_SetPipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pPipelineState);

    virtual void Process_ID3D12GraphicsCommandList_ResourceBarrier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumBarriers,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_BARRIER>* pBarriers);

    virtual void Process_ID3D12GraphicsCommandList_ExecuteBundle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCommandList);

    virtual void Process_ID3D12GraphicsCommandList_SetDescriptorHeaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumDescriptorHeaps,
        HandlePointerDecoder<ID3D12DescriptorHeap*>* ppDescriptorHeaps);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pRootSignature);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pRootSignature);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT SrcData,
        UINT DestOffsetIn32BitValues);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT SrcData,
        UINT DestOffsetIn32BitValues);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT Num32BitValuesToSet,
        PointerDecoder<uint8_t>* pSrcData,
        UINT DestOffsetIn32BitValues);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        UINT Num32BitValuesToSet,
        PointerDecoder<uint8_t>* pSrcData,
        UINT DestOffsetIn32BitValues);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);

    virtual void Process_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);

    virtual void Process_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT RootParameterIndex,
        D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);

    virtual void Process_ID3D12GraphicsCommandList_IASetIndexBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_INDEX_BUFFER_VIEW>* pView);

    virtual void Process_ID3D12GraphicsCommandList_IASetVertexBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        StructPointerDecoder<Decoded_D3D12_VERTEX_BUFFER_VIEW>* pViews);

    virtual void Process_ID3D12GraphicsCommandList_SOSetTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        StructPointerDecoder<Decoded_D3D12_STREAM_OUTPUT_BUFFER_VIEW>* pViews);

    virtual void Process_ID3D12GraphicsCommandList_OMSetRenderTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRenderTargetDescriptors,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pRenderTargetDescriptors,
        BOOL RTsSingleHandleToDescriptorRange,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pDepthStencilDescriptor);

    virtual void Process_ID3D12GraphicsCommandList_ClearDepthStencilView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
        D3D12_CLEAR_FLAGS ClearFlags,
        FLOAT Depth,
        UINT8 Stencil,
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D12GraphicsCommandList_ClearRenderTargetView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
        PointerDecoder<FLOAT> ColorRGBA [4],
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
        format::HandleId pResource,
        PointerDecoder<UINT> Values [4],
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
        format::HandleId pResource,
        PointerDecoder<FLOAT> Values [4],
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D12GraphicsCommandList_DiscardResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_DISCARD_REGION>* pRegion);

    virtual void Process_ID3D12GraphicsCommandList_BeginQuery(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pQueryHeap,
        D3D12_QUERY_TYPE Type,
        UINT Index);

    virtual void Process_ID3D12GraphicsCommandList_EndQuery(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pQueryHeap,
        D3D12_QUERY_TYPE Type,
        UINT Index);

    virtual void Process_ID3D12GraphicsCommandList_ResolveQueryData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pQueryHeap,
        D3D12_QUERY_TYPE Type,
        UINT StartIndex,
        UINT NumQueries,
        format::HandleId pDestinationBuffer,
        UINT64 AlignedDestinationBufferOffset);

    virtual void Process_ID3D12GraphicsCommandList_SetPredication(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pBuffer,
        UINT64 AlignedBufferOffset,
        D3D12_PREDICATION_OP Operation);

    virtual void Process_ID3D12GraphicsCommandList_SetMarker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size);

    virtual void Process_ID3D12GraphicsCommandList_BeginEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size);

    virtual void Process_ID3D12GraphicsCommandList_EndEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12GraphicsCommandList_ExecuteIndirect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCommandSignature,
        UINT MaxCommandCount,
        format::HandleId pArgumentBuffer,
        UINT64 ArgumentBufferOffset,
        format::HandleId pCountBuffer,
        UINT64 CountBufferOffset);

    virtual void Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT64 DstOffset,
        format::HandleId pSrcBuffer,
        UINT64 SrcOffset,
        UINT Dependencies,
        HandlePointerDecoder<ID3D12Resource*>* ppDependentResources,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_RANGE_UINT64>* pDependentSubresourceRanges);

    virtual void Process_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT64 DstOffset,
        format::HandleId pSrcBuffer,
        UINT64 SrcOffset,
        UINT Dependencies,
        HandlePointerDecoder<ID3D12Resource*>* ppDependentResources,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_RANGE_UINT64>* pDependentSubresourceRanges);

    virtual void Process_ID3D12GraphicsCommandList1_OMSetDepthBounds(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        FLOAT Min,
        FLOAT Max);

    virtual void Process_ID3D12GraphicsCommandList1_SetSamplePositions(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumSamplesPerPixel,
        UINT NumPixels,
        StructPointerDecoder<Decoded_D3D12_SAMPLE_POSITION>* pSamplePositions);

    virtual void Process_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        UINT DstX,
        UINT DstY,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_tagRECT>* pSrcRect,
        DXGI_FORMAT Format,
        D3D12_RESOLVE_MODE ResolveMode);

    virtual void Process_ID3D12GraphicsCommandList1_SetViewInstanceMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Mask);

    virtual void Process_ID3D12GraphicsCommandList2_WriteBufferImmediate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Count,
        StructPointerDecoder<Decoded_D3D12_WRITEBUFFERIMMEDIATE_PARAMETER>* pParams,
        PointerDecoder<D3D12_WRITEBUFFERIMMEDIATE_MODE>* pModes);

    virtual void Process_ID3D12CommandQueue_UpdateTileMappings(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT NumResourceRegions,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pResourceRegionStartCoordinates,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>* pResourceRegionSizes,
        format::HandleId pHeap,
        UINT NumRanges,
        PointerDecoder<D3D12_TILE_RANGE_FLAGS>* pRangeFlags,
        PointerDecoder<UINT>* pHeapRangeStartOffsets,
        PointerDecoder<UINT>* pRangeTileCounts,
        D3D12_TILE_MAPPING_FLAGS Flags);

    virtual void Process_ID3D12CommandQueue_CopyTileMappings(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pDstRegionStartCoordinate,
        format::HandleId pSrcResource,
        StructPointerDecoder<Decoded_D3D12_TILED_RESOURCE_COORDINATE>* pSrcRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D12_TILE_REGION_SIZE>* pRegionSize,
        D3D12_TILE_MAPPING_FLAGS Flags);

    virtual void Process_ID3D12CommandQueue_ExecuteCommandLists(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumCommandLists,
        HandlePointerDecoder<ID3D12CommandList*>* ppCommandLists);

    virtual void Process_ID3D12CommandQueue_SetMarker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size);

    virtual void Process_ID3D12CommandQueue_BeginEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT Metadata,
        PointerDecoder<uint8_t>* pData,
        UINT Size);

    virtual void Process_ID3D12CommandQueue_EndEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12CommandQueue_Signal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 Value);

    virtual void Process_ID3D12CommandQueue_Wait(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 Value);

    virtual void Process_ID3D12CommandQueue_GetTimestampFrequency(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT64>* pFrequency);

    virtual void Process_ID3D12CommandQueue_GetClockCalibration(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT64>* pGpuTimestamp,
        PointerDecoder<UINT64>* pCpuTimestamp);

    virtual void Process_ID3D12CommandQueue_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_COMMAND_QUEUE_DESC return_value);

    virtual void Process_ID3D12Device_GetNodeCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D12Device_CreateCommandQueue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMMAND_QUEUE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandQueue);

    virtual void Process_ID3D12Device_CreateCommandAllocator(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_COMMAND_LIST_TYPE type,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandAllocator);

    virtual void Process_ID3D12Device_CreateGraphicsPipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState);

    virtual void Process_ID3D12Device_CreateComputePipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState);

    virtual void Process_ID3D12Device_CreateCommandList(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT nodeMask,
        D3D12_COMMAND_LIST_TYPE type,
        format::HandleId pCommandAllocator,
        format::HandleId pInitialState,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandList);

    virtual void Process_ID3D12Device_CreateDescriptorHeap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DESCRIPTOR_HEAP_DESC>* pDescriptorHeapDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap);

    virtual void Process_ID3D12Device_GetDescriptorHandleIncrementSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value,
        D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);

    virtual void Process_ID3D12Device_CreateRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT nodeMask,
        PointerDecoder<uint8_t>* pBlobWithRootSignature,
        SIZE_T blobLengthInBytes,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvRootSignature);

    virtual void Process_ID3D12Device_CreateConstantBufferView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_CONSTANT_BUFFER_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device_CreateShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_SHADER_RESOURCE_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device_CreateUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        format::HandleId pCounterResource,
        StructPointerDecoder<Decoded_D3D12_UNORDERED_ACCESS_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device_CreateRenderTargetView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_RENDER_TARGET_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device_CreateDepthStencilView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D12_DEPTH_STENCIL_VIEW_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device_CreateSampler(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_SAMPLER_DESC>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device_CopyDescriptors(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumDestDescriptorRanges,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pDestDescriptorRangeStarts,
        PointerDecoder<UINT>* pDestDescriptorRangeSizes,
        UINT NumSrcDescriptorRanges,
        StructPointerDecoder<Decoded_D3D12_CPU_DESCRIPTOR_HANDLE>* pSrcDescriptorRangeStarts,
        PointerDecoder<UINT>* pSrcDescriptorRangeSizes,
        D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

    virtual void Process_ID3D12Device_CopyDescriptorsSimple(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumDescriptors,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
        D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

    virtual void Process_ID3D12Device_GetResourceAllocationInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_ALLOCATION_INFO return_value,
        UINT visibleMask,
        UINT numResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pResourceDescs);

    virtual void Process_ID3D12Device_GetCustomHeapProperties(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_HEAP_PROPERTIES return_value,
        UINT nodeMask,
        D3D12_HEAP_TYPE heapType);

    virtual void Process_ID3D12Device_CreateCommittedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialResourceState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device_CreateHeap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap);

    virtual void Process_ID3D12Device_CreatePlacedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pHeap,
        UINT64 HeapOffset,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device_CreateReservedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device_CreateSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pObject,
        StructPointerDecoder<Decoded__SECURITY_ATTRIBUTES>* pAttributes,
        DWORD Access,
        WStringDecoder* Name,
        PointerDecoder<uint64_t, void*>* pHandle);

    virtual void Process_ID3D12Device_OpenSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t NTHandle,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvObj);

    virtual void Process_ID3D12Device_OpenSharedHandleByName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* Name,
        DWORD Access,
        PointerDecoder<uint64_t, void*>* pNTHandle);

    virtual void Process_ID3D12Device_MakeResident(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects);

    virtual void Process_ID3D12Device_Evict(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects);

    virtual void Process_ID3D12Device_CreateFence(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 InitialValue,
        D3D12_FENCE_FLAGS Flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFence);

    virtual void Process_ID3D12Device_GetDeviceRemovedReason(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12Device_GetCopyableFootprints(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pResourceDesc,
        UINT FirstSubresource,
        UINT NumSubresources,
        UINT64 BaseOffset,
        StructPointerDecoder<Decoded_D3D12_PLACED_SUBRESOURCE_FOOTPRINT>* pLayouts,
        PointerDecoder<UINT>* pNumRows,
        PointerDecoder<UINT64>* pRowSizeInBytes,
        PointerDecoder<UINT64>* pTotalBytes);

    virtual void Process_ID3D12Device_CreateQueryHeap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_QUERY_HEAP_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap);

    virtual void Process_ID3D12Device_SetStablePowerState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL Enable);

    virtual void Process_ID3D12Device_CreateCommandSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMMAND_SIGNATURE_DESC>* pDesc,
        format::HandleId pRootSignature,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvCommandSignature);

    virtual void Process_ID3D12Device_GetResourceTiling(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResource,
        PointerDecoder<UINT>* pNumTilesForEntireResource,
        StructPointerDecoder<Decoded_D3D12_PACKED_MIP_INFO>* pPackedMipDesc,
        StructPointerDecoder<Decoded_D3D12_TILE_SHAPE>* pStandardTileShapeForNonPackedMips,
        PointerDecoder<UINT>* pNumSubresourceTilings,
        UINT FirstSubresourceTilingToGet,
        StructPointerDecoder<Decoded_D3D12_SUBRESOURCE_TILING>* pSubresourceTilingsForNonPackedMips);

    virtual void Process_ID3D12Device_GetAdapterLuid(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_LUID return_value);

    virtual void Process_ID3D12PipelineLibrary_StorePipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        format::HandleId pPipeline);

    virtual void Process_ID3D12PipelineLibrary_LoadGraphicsPipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        StructPointerDecoder<Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState);

    virtual void Process_ID3D12PipelineLibrary_LoadComputePipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        StructPointerDecoder<Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState);

    virtual void Process_ID3D12PipelineLibrary_GetSerializedSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        SIZE_T return_value);

    virtual void Process_ID3D12PipelineLibrary_Serialize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pData,
        SIZE_T DataSizeInBytes);

    virtual void Process_ID3D12PipelineLibrary1_LoadPipeline(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* pName,
        StructPointerDecoder<Decoded_D3D12_PIPELINE_STATE_STREAM_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState);

    virtual void Process_ID3D12Device1_CreatePipelineLibrary(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pLibraryBlob,
        SIZE_T BlobLength,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineLibrary);

    virtual void Process_ID3D12Device1_SetEventOnMultipleFenceCompletion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<ID3D12Fence*>* ppFences,
        PointerDecoder<UINT64>* pFenceValues,
        UINT NumFences,
        D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
        uint64_t hEvent);

    virtual void Process_ID3D12Device1_SetResidencyPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects,
        PointerDecoder<D3D12_RESIDENCY_PRIORITY>* pPriorities);

    virtual void Process_ID3D12Device2_CreatePipelineState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_PIPELINE_STATE_STREAM_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppPipelineState);

    virtual void Process_ID3D12Device3_OpenExistingHeapFromAddress(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t pAddress,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap);

    virtual void Process_ID3D12Device3_OpenExistingHeapFromFileMapping(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hFileMapping,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap);

    virtual void Process_ID3D12Device3_EnqueueMakeResident(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_RESIDENCY_FLAGS Flags,
        UINT NumObjects,
        HandlePointerDecoder<ID3D12Pageable*>* ppObjects,
        format::HandleId pFenceToSignal,
        UINT64 FenceValueToSignal);

    virtual void Process_ID3D12ProtectedSession_GetStatusFence(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppFence);

    virtual void Process_ID3D12ProtectedSession_GetSessionStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_PROTECTED_SESSION_STATUS return_value);

    virtual void Process_ID3D12ProtectedResourceSession_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC return_value);

    virtual void Process_ID3D12Device4_CreateCommandList1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT nodeMask,
        D3D12_COMMAND_LIST_TYPE type,
        D3D12_COMMAND_LIST_FLAGS flags,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandList);

    virtual void Process_ID3D12Device4_CreateProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppSession);

    virtual void Process_ID3D12Device4_CreateCommittedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialResourceState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device4_CreateHeap1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_DESC>* pDesc,
        format::HandleId pProtectedSession,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvHeap);

    virtual void Process_ID3D12Device4_CreateReservedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device4_GetResourceAllocationInfo1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_ALLOCATION_INFO return_value,
        UINT visibleMask,
        UINT numResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_ALLOCATION_INFO1>* pResourceAllocationInfo1);

    virtual void Process_ID3D12LifetimeOwner_LifetimeStateUpdated(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_LIFETIME_STATE NewState);

    virtual void Process_ID3D12SwapChainAssistant_GetLUID(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_LUID return_value);

    virtual void Process_ID3D12SwapChainAssistant_GetSwapChainObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppv);

    virtual void Process_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource,
        Decoded_GUID riidQueue,
        HandlePointerDecoder<void*>* ppvQueue);

    virtual void Process_ID3D12SwapChainAssistant_InsertImplicitSync(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12LifetimeTracker_DestroyOwnedObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pObject);

    virtual void Process_ID3D12StateObjectProperties_GetShaderIdentifier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<uint8_t>* return_value,
        WStringDecoder* pExportName);

    virtual void Process_ID3D12StateObjectProperties_GetShaderStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value,
        WStringDecoder* pExportName);

    virtual void Process_ID3D12StateObjectProperties_GetPipelineStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12StateObjectProperties_SetPipelineStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 PipelineStackSizeInBytes);

    virtual void Process_ID3D12Device5_CreateLifetimeTracker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pOwner,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvTracker);

    virtual void Process_ID3D12Device5_RemoveDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12Device5_EnumerateMetaCommands(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pNumMetaCommands,
        StructPointerDecoder<Decoded_D3D12_META_COMMAND_DESC>* pDescs);

    virtual void Process_ID3D12Device5_EnumerateMetaCommandParameters(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID CommandId,
        D3D12_META_COMMAND_PARAMETER_STAGE Stage,
        PointerDecoder<UINT>* pTotalStructureSizeInBytes,
        PointerDecoder<UINT>* pParameterCount,
        StructPointerDecoder<Decoded_D3D12_META_COMMAND_PARAMETER_DESC>* pParameterDescs);

    virtual void Process_ID3D12Device5_CreateMetaCommand(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID CommandId,
        UINT NodeMask,
        PointerDecoder<uint8_t>* pCreationParametersData,
        SIZE_T CreationParametersDataSizeInBytes,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppMetaCommand);

    virtual void Process_ID3D12Device5_CreateStateObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_STATE_OBJECT_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppStateObject);

    virtual void Process_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS>* pDesc,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO>* pInfo);

    virtual void Process_ID3D12Device5_CheckDriverMatchingIdentifier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS return_value,
        D3D12_SERIALIZED_DATA_TYPE SerializedDataType,
        StructPointerDecoder<Decoded_D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER>* pIdentifierToCheck);

    virtual void Process_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement);

    virtual void Process_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement);

    virtual void Process_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement);

    virtual void Process_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_ENABLEMENT Enablement);

    virtual void Process_ID3D12DeviceRemovedExtendedDataSettings2_UseMarkersOnlyAutoBreadcrumbs(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL MarkersOnly);

    virtual void Process_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT>* pOutput);

    virtual void Process_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT>* pOutput);

    virtual void Process_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT1>* pOutput);

    virtual void Process_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT1>* pOutput);

    virtual void Process_ID3D12DeviceRemovedExtendedData2_GetPageFaultAllocationOutput2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT2>* pOutput);

    virtual void Process_ID3D12DeviceRemovedExtendedData2_GetDeviceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DRED_DEVICE_STATE return_value);

    virtual void Process_ID3D12Device6_SetBackgroundProcessingMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_BACKGROUND_PROCESSING_MODE Mode,
        D3D12_MEASUREMENTS_ACTION MeasurementsAction,
        uint64_t hEventToSignalUponCompletion,
        PointerDecoder<BOOL>* pbFurtherMeasurementsDesired);

    virtual void Process_ID3D12ProtectedResourceSession1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC1 return_value);

    virtual void Process_ID3D12Device7_AddToStateObject(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_STATE_OBJECT_DESC>* pAddition,
        format::HandleId pStateObjectToGrowFrom,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppNewStateObject);

    virtual void Process_ID3D12Device7_CreateProtectedResourceSession1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC1>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppSession);

    virtual void Process_ID3D12Device8_GetResourceAllocationInfo2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_ALLOCATION_INFO return_value,
        UINT visibleMask,
        UINT numResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pResourceDescs,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_ALLOCATION_INFO1>* pResourceAllocationInfo1);

    virtual void Process_ID3D12Device8_CreateCommittedResource2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_RESOURCE_STATES InitialResourceState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device8_CreatePlacedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pHeap,
        UINT64 HeapOffset,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_RESOURCE_STATES InitialState,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTargetedResource,
        format::HandleId pFeedbackResource,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12Device8_GetCopyableFootprints1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pResourceDesc,
        UINT FirstSubresource,
        UINT NumSubresources,
        UINT64 BaseOffset,
        StructPointerDecoder<Decoded_D3D12_PLACED_SUBRESOURCE_FOOTPRINT>* pLayouts,
        PointerDecoder<UINT>* pNumRows,
        PointerDecoder<UINT64>* pRowSizeInBytes,
        PointerDecoder<UINT64>* pTotalBytes);

    virtual void Process_ID3D12Resource1_GetProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppProtectedSession);

    virtual void Process_ID3D12Resource2_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_RESOURCE_DESC1 return_value);

    virtual void Process_ID3D12Heap1_GetProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppProtectedSession);

    virtual void Process_ID3D12GraphicsCommandList3_SetProtectedResourceSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pProtectedResourceSession);

    virtual void Process_ID3D12MetaCommand_GetRequiredParameterResourceSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value,
        D3D12_META_COMMAND_PARAMETER_STAGE Stage,
        UINT ParameterIndex);

    virtual void Process_ID3D12GraphicsCommandList4_BeginRenderPass(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRenderTargets,
        StructPointerDecoder<Decoded_D3D12_RENDER_PASS_RENDER_TARGET_DESC>* pRenderTargets,
        StructPointerDecoder<Decoded_D3D12_RENDER_PASS_DEPTH_STENCIL_DESC>* pDepthStencil,
        D3D12_RENDER_PASS_FLAGS Flags);

    virtual void Process_ID3D12GraphicsCommandList4_EndRenderPass(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12GraphicsCommandList4_InitializeMetaCommand(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pMetaCommand,
        PointerDecoder<uint8_t>* pInitializationParametersData,
        SIZE_T InitializationParametersDataSizeInBytes);

    virtual void Process_ID3D12GraphicsCommandList4_ExecuteMetaCommand(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pMetaCommand,
        PointerDecoder<uint8_t>* pExecutionParametersData,
        SIZE_T ExecutionParametersDataSizeInBytes);

    virtual void Process_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>* pDesc,
        UINT NumPostbuildInfoDescs,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC>* pPostbuildInfoDescs);

    virtual void Process_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC>* pDesc,
        UINT NumSourceAccelerationStructures,
        PointerDecoder<D3D12_GPU_VIRTUAL_ADDRESS>* pSourceAccelerationStructureData);

    virtual void Process_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData,
        D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode);

    virtual void Process_ID3D12GraphicsCommandList4_SetPipelineState1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pStateObject);

    virtual void Process_ID3D12GraphicsCommandList4_DispatchRays(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_DISPATCH_RAYS_DESC>* pDesc);

    virtual void Process_ID3D12ShaderCacheSession_FindValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pKey,
        UINT KeySize,
        PointerDecoder<uint8_t>* pValue,
        PointerDecoder<UINT>* pValueSize);

    virtual void Process_ID3D12ShaderCacheSession_StoreValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pKey,
        UINT KeySize,
        PointerDecoder<uint8_t>* pValue,
        UINT ValueSize);

    virtual void Process_ID3D12ShaderCacheSession_SetDeleteOnDestroy(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12ShaderCacheSession_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_SHADER_CACHE_SESSION_DESC return_value);

    virtual void Process_ID3D12Device9_CreateShaderCacheSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_SHADER_CACHE_SESSION_DESC>* pDesc,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvSession);

    virtual void Process_ID3D12Device9_ShaderCacheControl(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_SHADER_CACHE_KIND_FLAGS Kinds,
        D3D12_SHADER_CACHE_CONTROL_FLAGS Control);

    virtual void Process_ID3D12Device9_CreateCommandQueue1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_COMMAND_QUEUE_DESC>* pDesc,
        Decoded_GUID CreatorID,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppCommandQueue);

    virtual void Process_ID3D12Device10_CreateCommittedResource3(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_HEAP_PROPERTIES>* pHeapProperties,
        D3D12_HEAP_FLAGS HeapFlags,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_BARRIER_LAYOUT InitialLayout,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        UINT32 NumCastableFormats,
        PointerDecoder<DXGI_FORMAT>* pCastableFormats,
        Decoded_GUID riidResource,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device10_CreatePlacedResource2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pHeap,
        UINT64 HeapOffset,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC1>* pDesc,
        D3D12_BARRIER_LAYOUT InitialLayout,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        UINT32 NumCastableFormats,
        PointerDecoder<DXGI_FORMAT>* pCastableFormats,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device10_CreateReservedResource2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_RESOURCE_DESC>* pDesc,
        D3D12_BARRIER_LAYOUT InitialLayout,
        StructPointerDecoder<Decoded_D3D12_CLEAR_VALUE>* pOptimizedClearValue,
        format::HandleId pProtectedSession,
        UINT32 NumCastableFormats,
        PointerDecoder<DXGI_FORMAT>* pCastableFormats,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource);

    virtual void Process_ID3D12Device11_CreateSampler2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D12_SAMPLER_DESC2>* pDesc,
        Decoded_D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);

    virtual void Process_ID3D12VirtualizationGuestDevice_ShareWithHost(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pObject,
        PointerDecoder<uint64_t, void*>* pHandle);

    virtual void Process_ID3D12VirtualizationGuestDevice_CreateFenceFd(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 FenceValue,
        PointerDecoder<int>* pFenceFd);

    virtual void Process_ID3D12Tools_EnableShaderInstrumentation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL bEnable);

    virtual void Process_ID3D12Tools_ShaderInstrumentationEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_ID3D12SDKConfiguration_SetSDKVersion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SDKVersion,
        StringDecoder* SDKPath);

    virtual void Process_ID3D12SDKConfiguration1_CreateDeviceFactory(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT SDKVersion,
        StringDecoder* SDKPath,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvFactory);

    virtual void Process_ID3D12SDKConfiguration1_FreeUnusedSDKs(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12DeviceFactory_InitializeFromGlobalState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12DeviceFactory_ApplyToGlobalState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12DeviceFactory_SetFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEVICE_FACTORY_FLAGS flags);

    virtual void Process_ID3D12DeviceFactory_GetFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DEVICE_FACTORY_FLAGS return_value);

    virtual void Process_ID3D12DeviceFactory_GetConfigurationInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID clsid,
        Decoded_GUID iid,
        HandlePointerDecoder<void*>* ppv);

    virtual void Process_ID3D12DeviceFactory_EnableExperimentalFeatures(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT NumFeatures,
        StructPointerDecoder<Decoded_GUID>* pIIDs,
        PointerDecoder<uint8_t>* pConfigurationStructs,
        PointerDecoder<UINT>* pConfigurationStructSizes);

    virtual void Process_ID3D12DeviceFactory_CreateDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId adapter,
        D3D_FEATURE_LEVEL FeatureLevel,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDevice);

    virtual void Process_ID3D12DeviceConfiguration_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_D3D12_DEVICE_CONFIGURATION_DESC return_value);

    virtual void Process_ID3D12DeviceConfiguration_GetEnabledExperimentalFeatures(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pGuids,
        UINT NumGuids);

    virtual void Process_ID3D12DeviceConfiguration_SerializeVersionedRootSignature(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC>* pDesc,
        HandlePointerDecoder<ID3D10Blob*>* ppResult,
        HandlePointerDecoder<ID3D10Blob*>* ppError);

    virtual void Process_ID3D12DeviceConfiguration_CreateVersionedRootSignatureDeserializer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pBlob,
        SIZE_T Size,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDeserializer);

    virtual void Process_ID3D12GraphicsCommandList5_RSSetShadingRate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_SHADING_RATE baseShadingRate,
        PointerDecoder<D3D12_SHADING_RATE_COMBINER>* combiners);

    virtual void Process_ID3D12GraphicsCommandList5_RSSetShadingRateImage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId shadingRateImage);

    virtual void Process_ID3D12GraphicsCommandList6_DispatchMesh(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT ThreadGroupCountX,
        UINT ThreadGroupCountY,
        UINT ThreadGroupCountZ);

    virtual void Process_ID3D12GraphicsCommandList7_Barrier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT32 NumBarrierGroups,
        StructPointerDecoder<Decoded_D3D12_BARRIER_GROUP>* pBarrierGroups);

    virtual void Process_ID3D12GraphicsCommandList8_OMSetFrontAndBackStencilRef(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT FrontStencilRef,
        UINT BackStencilRef);

/*
** This part is generated from d3dcommon.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_ID3D10Blob_GetBufferPointer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        uint64_t return_value);

    virtual void Process_ID3D10Blob_GetBufferSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        SIZE_T return_value);

    virtual void Process_ID3DDestructionNotifier_RegisterDestructionCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t callbackFn,
        uint64_t pData,
        PointerDecoder<UINT>* pCallbackID);

    virtual void Process_ID3DDestructionNotifier_UnregisterDestructionCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT callbackID);

/*
** This part is generated from d3d12sdklayers.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_ID3D12Debug_EnableDebugLayer(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12Debug1_EnableDebugLayer(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12Debug1_SetEnableGPUBasedValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable);

    virtual void Process_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable);

    virtual void Process_ID3D12Debug2_SetGPUBasedValidationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_BASED_VALIDATION_FLAGS Flags);

    virtual void Process_ID3D12Debug3_SetEnableGPUBasedValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable);

    virtual void Process_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable);

    virtual void Process_ID3D12Debug3_SetGPUBasedValidationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_GPU_BASED_VALIDATION_FLAGS Flags);

    virtual void Process_ID3D12Debug4_DisableDebugLayer(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12Debug5_SetEnableAutoName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable);

    virtual void Process_ID3D12Debug6_SetForceLegacyBarrierValidation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL Enable);

    virtual void Process_ID3D12DebugDevice1_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugDevice1_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugDevice1_ReportLiveDeviceObjects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_RLDO_FLAGS Flags);

    virtual void Process_ID3D12DebugDevice_SetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_FEATURE Mask);

    virtual void Process_ID3D12DebugDevice_GetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DEBUG_FEATURE return_value);

    virtual void Process_ID3D12DebugDevice_ReportLiveDeviceObjects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_RLDO_FLAGS Flags);

    virtual void Process_ID3D12DebugDevice2_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugDevice2_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_DEVICE_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugCommandQueue_AssertResourceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        format::HandleId pResource,
        UINT Subresource,
        UINT State);

    virtual void Process_ID3D12DebugCommandQueue1_AssertResourceAccess(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_ACCESS Access);

    virtual void Process_ID3D12DebugCommandQueue1_AssertTextureLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_LAYOUT Layout);

    virtual void Process_ID3D12DebugCommandList1_AssertResourceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        format::HandleId pResource,
        UINT Subresource,
        UINT State);

    virtual void Process_ID3D12DebugCommandList1_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugCommandList1_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugCommandList_AssertResourceState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        format::HandleId pResource,
        UINT Subresource,
        UINT State);

    virtual void Process_ID3D12DebugCommandList_SetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_FEATURE Mask);

    virtual void Process_ID3D12DebugCommandList_GetFeatureMask(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D12_DEBUG_FEATURE return_value);

    virtual void Process_ID3D12DebugCommandList2_SetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugCommandList2_GetDebugParameter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_DEBUG_COMMAND_LIST_PARAMETER_TYPE Type,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize);

    virtual void Process_ID3D12DebugCommandList3_AssertResourceAccess(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_ACCESS Access);

    virtual void Process_ID3D12DebugCommandList3_AssertTextureLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        D3D12_BARRIER_LAYOUT Layout);

    virtual void Process_ID3D12SharingContract_Present(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource,
        uint64_t window);

    virtual void Process_ID3D12SharingContract_SharedFenceSignal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pFence,
        UINT64 FenceValue);

    virtual void Process_ID3D12SharingContract_BeginCapturableWork(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_GUID guid);

    virtual void Process_ID3D12SharingContract_EndCapturableWork(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        Decoded_GUID guid);

    virtual void Process_ID3D12InfoQueue_SetMessageCountLimit(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 MessageCountLimit);

    virtual void Process_ID3D12InfoQueue_ClearStoredMessages(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12InfoQueue_GetMessage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 MessageIndex,
        StructPointerDecoder<Decoded_D3D12_MESSAGE>* pMessage,
        PointerDecoder<SIZE_T>* pMessageByteLength);

    virtual void Process_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12InfoQueue_GetNumStoredMessages(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12InfoQueue_GetMessageCountLimit(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D12InfoQueue_AddStorageFilterEntries(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter);

    virtual void Process_ID3D12InfoQueue_GetStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter,
        PointerDecoder<SIZE_T>* pFilterByteLength);

    virtual void Process_ID3D12InfoQueue_ClearStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12InfoQueue_PushEmptyStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12InfoQueue_PushCopyOfStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12InfoQueue_PushStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter);

    virtual void Process_ID3D12InfoQueue_PopStorageFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12InfoQueue_GetStorageFilterStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D12InfoQueue_AddRetrievalFilterEntries(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter);

    virtual void Process_ID3D12InfoQueue_GetRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter,
        PointerDecoder<SIZE_T>* pFilterByteLength);

    virtual void Process_ID3D12InfoQueue_ClearRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12InfoQueue_PushEmptyRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12InfoQueue_PushCopyOfRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D12InfoQueue_PushRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D12_INFO_QUEUE_FILTER>* pFilter);

    virtual void Process_ID3D12InfoQueue_PopRetrievalFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D12InfoQueue_GetRetrievalFilterStackSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D12InfoQueue_AddMessage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_CATEGORY Category,
        D3D12_MESSAGE_SEVERITY Severity,
        D3D12_MESSAGE_ID ID,
        StringDecoder* pDescription);

    virtual void Process_ID3D12InfoQueue_AddApplicationMessage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_SEVERITY Severity,
        StringDecoder* pDescription);

    virtual void Process_ID3D12InfoQueue_SetBreakOnCategory(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_CATEGORY Category,
        BOOL bEnable);

    virtual void Process_ID3D12InfoQueue_SetBreakOnSeverity(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_SEVERITY Severity,
        BOOL bEnable);

    virtual void Process_ID3D12InfoQueue_SetBreakOnID(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D12_MESSAGE_ID ID,
        BOOL bEnable);

    virtual void Process_ID3D12InfoQueue_GetBreakOnCategory(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        D3D12_MESSAGE_CATEGORY Category);

    virtual void Process_ID3D12InfoQueue_GetBreakOnSeverity(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        D3D12_MESSAGE_SEVERITY Severity);

    virtual void Process_ID3D12InfoQueue_GetBreakOnID(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        D3D12_MESSAGE_ID ID);

    virtual void Process_ID3D12InfoQueue_SetMuteDebugOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL bMute);

    virtual void Process_ID3D12InfoQueue_GetMuteDebugOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_ID3D12InfoQueue1_RegisterMessageCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t CallbackFunc,
        D3D12_MESSAGE_CALLBACK_FLAGS CallbackFilterFlags,
        uint64_t pContext,
        PointerDecoder<DWORD>* pCallbackCookie);

    virtual void Process_ID3D12InfoQueue1_UnregisterMessageCallback(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DWORD CallbackCookie);

/*
** This part is generated from d3d11.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_D3D11CreateDevice(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        format::HandleId pAdapter,
        D3D_DRIVER_TYPE DriverType,
        uint64_t Software,
        UINT Flags,
        PointerDecoder<D3D_FEATURE_LEVEL>* pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        HandlePointerDecoder<ID3D11Device*>* ppDevice,
        PointerDecoder<D3D_FEATURE_LEVEL>* pFeatureLevel,
        HandlePointerDecoder<ID3D11DeviceContext*>* ppImmediateContext);

    virtual void Process_D3D11CreateDeviceAndSwapChain(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        format::HandleId pAdapter,
        D3D_DRIVER_TYPE DriverType,
        uint64_t Software,
        UINT Flags,
        PointerDecoder<D3D_FEATURE_LEVEL>* pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        StructPointerDecoder<Decoded_DXGI_SWAP_CHAIN_DESC>* pSwapChainDesc,
        HandlePointerDecoder<IDXGISwapChain*>* ppSwapChain,
        HandlePointerDecoder<ID3D11Device*>* ppDevice,
        PointerDecoder<D3D_FEATURE_LEVEL>* pFeatureLevel,
        HandlePointerDecoder<ID3D11DeviceContext*>* ppImmediateContext);

    virtual void Process_ID3D11DeviceChild_GetDevice(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11Device*>* ppDevice);

    virtual void Process_ID3D11DeviceChild_GetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        PointerDecoder<UINT>* pDataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11DeviceChild_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11DeviceChild_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        format::HandleId pData);

    virtual void Process_ID3D11DepthStencilState_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_DEPTH_STENCIL_DESC>* pDesc);

    virtual void Process_ID3D11BlendState_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_BLEND_DESC>* pDesc);

    virtual void Process_ID3D11RasterizerState_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_RASTERIZER_DESC>* pDesc);

    virtual void Process_ID3D11Resource_GetType(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<D3D11_RESOURCE_DIMENSION>* pResourceDimension);

    virtual void Process_ID3D11Resource_SetEvictionPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT EvictionPriority);

    virtual void Process_ID3D11Resource_GetEvictionPriority(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D11Buffer_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_BUFFER_DESC>* pDesc);

    virtual void Process_ID3D11Texture1D_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_TEXTURE1D_DESC>* pDesc);

    virtual void Process_ID3D11Texture2D_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_TEXTURE2D_DESC>* pDesc);

    virtual void Process_ID3D11Texture3D_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_TEXTURE3D_DESC>* pDesc);

    virtual void Process_ID3D11View_GetResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11Resource*>* ppResource);

    virtual void Process_ID3D11ShaderResourceView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_SHADER_RESOURCE_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11RenderTargetView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_RENDER_TARGET_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11DepthStencilView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_DEPTH_STENCIL_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11UnorderedAccessView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_UNORDERED_ACCESS_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11SamplerState_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_SAMPLER_DESC>* pDesc);

    virtual void Process_ID3D11Asynchronous_GetDataSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D11Query_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_QUERY_DESC>* pDesc);

    virtual void Process_ID3D11Counter_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_COUNTER_DESC>* pDesc);

    virtual void Process_ID3D11ClassInstance_GetClassLinkage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11ClassLinkage*>* ppLinkage);

    virtual void Process_ID3D11ClassInstance_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_CLASS_INSTANCE_DESC>* pDesc);

    virtual void Process_ID3D11ClassInstance_GetInstanceName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StringDecoder* pInstanceName,
        PointerDecoder<SIZE_T>* pBufferLength);

    virtual void Process_ID3D11ClassInstance_GetTypeName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StringDecoder* pTypeName,
        PointerDecoder<SIZE_T>* pBufferLength);

    virtual void Process_ID3D11ClassLinkage_GetClassInstance(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StringDecoder* pClassInstanceName,
        UINT InstanceIndex,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppInstance);

    virtual void Process_ID3D11ClassLinkage_CreateClassInstance(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StringDecoder* pClassTypeName,
        UINT ConstantBufferOffset,
        UINT ConstantVectorOffset,
        UINT TextureOffset,
        UINT SamplerOffset,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppInstance);

    virtual void Process_ID3D11CommandList_GetContextFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D11DeviceContext_VSSetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_PSSetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_PSSetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pPixelShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        UINT NumClassInstances);

    virtual void Process_ID3D11DeviceContext_PSSetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_VSSetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVertexShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        UINT NumClassInstances);

    virtual void Process_ID3D11DeviceContext_DrawIndexed(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT IndexCount,
        UINT StartIndexLocation,
        INT BaseVertexLocation);

    virtual void Process_ID3D11DeviceContext_Draw(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT VertexCount,
        UINT StartVertexLocation);

    virtual void Process_ID3D11DeviceContext_Map(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        UINT Subresource,
        D3D11_MAP MapType,
        UINT MapFlags,
        StructPointerDecoder<Decoded_D3D11_MAPPED_SUBRESOURCE>* pMappedResource);

    virtual void Process_ID3D11DeviceContext_Unmap(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        UINT Subresource);

    virtual void Process_ID3D11DeviceContext_PSSetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_IASetInputLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pInputLayout);

    virtual void Process_ID3D11DeviceContext_IASetVertexBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppVertexBuffers,
        PointerDecoder<UINT>* pStrides,
        PointerDecoder<UINT>* pOffsets);

    virtual void Process_ID3D11DeviceContext_IASetIndexBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pIndexBuffer,
        DXGI_FORMAT Format,
        UINT Offset);

    virtual void Process_ID3D11DeviceContext_DrawIndexedInstanced(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT IndexCountPerInstance,
        UINT InstanceCount,
        UINT StartIndexLocation,
        INT BaseVertexLocation,
        UINT StartInstanceLocation);

    virtual void Process_ID3D11DeviceContext_DrawInstanced(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT VertexCountPerInstance,
        UINT InstanceCount,
        UINT StartVertexLocation,
        UINT StartInstanceLocation);

    virtual void Process_ID3D11DeviceContext_GSSetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_GSSetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        UINT NumClassInstances);

    virtual void Process_ID3D11DeviceContext_IASetPrimitiveTopology(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D_PRIMITIVE_TOPOLOGY Topology);

    virtual void Process_ID3D11DeviceContext_VSSetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_VSSetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_Begin(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pAsync);

    virtual void Process_ID3D11DeviceContext_End(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pAsync);

    virtual void Process_ID3D11DeviceContext_GetData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pAsync,
        PointerDecoder<uint8_t>* pData,
        UINT DataSize,
        UINT GetDataFlags);

    virtual void Process_ID3D11DeviceContext_SetPredication(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pPredicate,
        BOOL PredicateValue);

    virtual void Process_ID3D11DeviceContext_GSSetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_GSSetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_OMSetRenderTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumViews,
        HandlePointerDecoder<ID3D11RenderTargetView*>* ppRenderTargetViews,
        format::HandleId pDepthStencilView);

    virtual void Process_ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRTVs,
        HandlePointerDecoder<ID3D11RenderTargetView*>* ppRenderTargetViews,
        format::HandleId pDepthStencilView,
        UINT UAVStartSlot,
        UINT NumUAVs,
        HandlePointerDecoder<ID3D11UnorderedAccessView*>* ppUnorderedAccessViews,
        PointerDecoder<UINT>* pUAVInitialCounts);

    virtual void Process_ID3D11DeviceContext_OMSetBlendState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pBlendState,
        PointerDecoder<FLOAT> BlendFactor [4],
        UINT SampleMask);

    virtual void Process_ID3D11DeviceContext_OMSetDepthStencilState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDepthStencilState,
        UINT StencilRef);

    virtual void Process_ID3D11DeviceContext_SOSetTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppSOTargets,
        PointerDecoder<UINT>* pOffsets);

    virtual void Process_ID3D11DeviceContext_DrawAuto(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D11DeviceContext_DrawIndexedInstancedIndirect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pBufferForArgs,
        UINT AlignedByteOffsetForArgs);

    virtual void Process_ID3D11DeviceContext_DrawInstancedIndirect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pBufferForArgs,
        UINT AlignedByteOffsetForArgs);

    virtual void Process_ID3D11DeviceContext_Dispatch(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT ThreadGroupCountX,
        UINT ThreadGroupCountY,
        UINT ThreadGroupCountZ);

    virtual void Process_ID3D11DeviceContext_DispatchIndirect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pBufferForArgs,
        UINT AlignedByteOffsetForArgs);

    virtual void Process_ID3D11DeviceContext_RSSetState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pRasterizerState);

    virtual void Process_ID3D11DeviceContext_RSSetViewports(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumViewports,
        StructPointerDecoder<Decoded_D3D11_VIEWPORT>* pViewports);

    virtual void Process_ID3D11DeviceContext_RSSetScissorRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D11DeviceContext_CopySubresourceRegion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        UINT DstX,
        UINT DstY,
        UINT DstZ,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_D3D11_BOX>* pSrcBox);

    virtual void Process_ID3D11DeviceContext_CopyResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        format::HandleId pSrcResource);

    virtual void Process_ID3D11DeviceContext_CopyStructureCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstBuffer,
        UINT DstAlignedByteOffset,
        format::HandleId pSrcView);

    virtual void Process_ID3D11DeviceContext_ClearRenderTargetView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pRenderTargetView,
        PointerDecoder<FLOAT> ColorRGBA [4]);

    virtual void Process_ID3D11DeviceContext_ClearUnorderedAccessViewUint(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pUnorderedAccessView,
        PointerDecoder<UINT> Values [4]);

    virtual void Process_ID3D11DeviceContext_ClearUnorderedAccessViewFloat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pUnorderedAccessView,
        PointerDecoder<FLOAT> Values [4]);

    virtual void Process_ID3D11DeviceContext_ClearDepthStencilView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDepthStencilView,
        UINT ClearFlags,
        FLOAT Depth,
        UINT8 Stencil);

    virtual void Process_ID3D11DeviceContext_GenerateMips(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pShaderResourceView);

    virtual void Process_ID3D11DeviceContext_SetResourceMinLOD(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource,
        FLOAT MinLOD);

    virtual void Process_ID3D11DeviceContext_GetResourceMinLOD(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        FLOAT return_value,
        format::HandleId pResource);

    virtual void Process_ID3D11DeviceContext_ResolveSubresource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        DXGI_FORMAT Format);

    virtual void Process_ID3D11DeviceContext_ExecuteCommandList(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCommandList,
        BOOL RestoreContextState);

    virtual void Process_ID3D11DeviceContext_HSSetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_HSSetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pHullShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        UINT NumClassInstances);

    virtual void Process_ID3D11DeviceContext_HSSetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_HSSetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_DSSetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_DSSetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDomainShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        UINT NumClassInstances);

    virtual void Process_ID3D11DeviceContext_DSSetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_DSSetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_CSSetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_CSSetUnorderedAccessViews(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumUAVs,
        HandlePointerDecoder<ID3D11UnorderedAccessView*>* ppUnorderedAccessViews,
        PointerDecoder<UINT>* pUAVInitialCounts);

    virtual void Process_ID3D11DeviceContext_CSSetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pComputeShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        UINT NumClassInstances);

    virtual void Process_ID3D11DeviceContext_CSSetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_CSSetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_VSGetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_PSGetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_PSGetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11PixelShader*>* ppPixelShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        PointerDecoder<UINT>* pNumClassInstances);

    virtual void Process_ID3D11DeviceContext_PSGetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_VSGetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11VertexShader*>* ppVertexShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        PointerDecoder<UINT>* pNumClassInstances);

    virtual void Process_ID3D11DeviceContext_PSGetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_IAGetInputLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11InputLayout*>* ppInputLayout);

    virtual void Process_ID3D11DeviceContext_IAGetVertexBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppVertexBuffers,
        PointerDecoder<UINT>* pStrides,
        PointerDecoder<UINT>* pOffsets);

    virtual void Process_ID3D11DeviceContext_IAGetIndexBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11Buffer*>* pIndexBuffer,
        PointerDecoder<DXGI_FORMAT>* Format,
        PointerDecoder<UINT>* Offset);

    virtual void Process_ID3D11DeviceContext_GSGetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_GSGetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11GeometryShader*>* ppGeometryShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        PointerDecoder<UINT>* pNumClassInstances);

    virtual void Process_ID3D11DeviceContext_IAGetPrimitiveTopology(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<D3D_PRIMITIVE_TOPOLOGY>* pTopology);

    virtual void Process_ID3D11DeviceContext_VSGetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_VSGetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_GetPredication(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11Predicate*>* ppPredicate,
        PointerDecoder<BOOL>* pPredicateValue);

    virtual void Process_ID3D11DeviceContext_GSGetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_GSGetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_OMGetRenderTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumViews,
        HandlePointerDecoder<ID3D11RenderTargetView*>* ppRenderTargetViews,
        HandlePointerDecoder<ID3D11DepthStencilView*>* ppDepthStencilView);

    virtual void Process_ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumRTVs,
        HandlePointerDecoder<ID3D11RenderTargetView*>* ppRenderTargetViews,
        HandlePointerDecoder<ID3D11DepthStencilView*>* ppDepthStencilView,
        UINT UAVStartSlot,
        UINT NumUAVs,
        HandlePointerDecoder<ID3D11UnorderedAccessView*>* ppUnorderedAccessViews);

    virtual void Process_ID3D11DeviceContext_OMGetBlendState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11BlendState*>* ppBlendState,
        PointerDecoder<FLOAT> BlendFactor [4],
        PointerDecoder<UINT>* pSampleMask);

    virtual void Process_ID3D11DeviceContext_OMGetDepthStencilState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11DepthStencilState*>* ppDepthStencilState,
        PointerDecoder<UINT>* pStencilRef);

    virtual void Process_ID3D11DeviceContext_SOGetTargets(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppSOTargets);

    virtual void Process_ID3D11DeviceContext_RSGetState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11RasterizerState*>* ppRasterizerState);

    virtual void Process_ID3D11DeviceContext_RSGetViewports(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<UINT>* pNumViewports,
        StructPointerDecoder<Decoded_D3D11_VIEWPORT>* pViewports);

    virtual void Process_ID3D11DeviceContext_RSGetScissorRects(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<UINT>* pNumRects,
        StructPointerDecoder<Decoded_tagRECT>* pRects);

    virtual void Process_ID3D11DeviceContext_HSGetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_HSGetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11HullShader*>* ppHullShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        PointerDecoder<UINT>* pNumClassInstances);

    virtual void Process_ID3D11DeviceContext_HSGetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_HSGetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_DSGetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_DSGetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11DomainShader*>* ppDomainShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        PointerDecoder<UINT>* pNumClassInstances);

    virtual void Process_ID3D11DeviceContext_DSGetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_DSGetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_CSGetShaderResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumViews,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppShaderResourceViews);

    virtual void Process_ID3D11DeviceContext_CSGetUnorderedAccessViews(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumUAVs,
        HandlePointerDecoder<ID3D11UnorderedAccessView*>* ppUnorderedAccessViews);

    virtual void Process_ID3D11DeviceContext_CSGetShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11ComputeShader*>* ppComputeShader,
        HandlePointerDecoder<ID3D11ClassInstance*>* ppClassInstances,
        PointerDecoder<UINT>* pNumClassInstances);

    virtual void Process_ID3D11DeviceContext_CSGetSamplers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumSamplers,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplers);

    virtual void Process_ID3D11DeviceContext_CSGetConstantBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers);

    virtual void Process_ID3D11DeviceContext_ClearState(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D11DeviceContext_Flush(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D11DeviceContext_GetType(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D11_DEVICE_CONTEXT_TYPE return_value);

    virtual void Process_ID3D11DeviceContext_GetContextFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D11DeviceContext_FinishCommandList(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        BOOL RestoreDeferredContextState,
        HandlePointerDecoder<ID3D11CommandList*>* ppCommandList);

    virtual void Process_ID3D11VideoDecoder_GetCreationParameters(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_DESC>* pVideoDesc,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_CONFIG>* pConfig);

    virtual void Process_ID3D11VideoDecoder_GetDriverHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint64_t, void*>* pDriverHandle);

    virtual void Process_ID3D11VideoProcessorEnumerator_GetVideoProcessorContentDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_CONTENT_DESC>* pContentDesc);

    virtual void Process_ID3D11VideoProcessorEnumerator_CheckVideoProcessorFormat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT Format,
        PointerDecoder<UINT>* pFlags);

    virtual void Process_ID3D11VideoProcessorEnumerator_GetVideoProcessorCaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_CAPS>* pCaps);

    virtual void Process_ID3D11VideoProcessorEnumerator_GetVideoProcessorRateConversionCaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT TypeIndex,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS>* pCaps);

    virtual void Process_ID3D11VideoProcessorEnumerator_GetVideoProcessorCustomRate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT TypeIndex,
        UINT CustomRateIndex,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_CUSTOM_RATE>* pRate);

    virtual void Process_ID3D11VideoProcessorEnumerator_GetVideoProcessorFilterRange(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D11_VIDEO_PROCESSOR_FILTER Filter,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_FILTER_RANGE>* pRange);

    virtual void Process_ID3D11VideoProcessor_GetContentDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_CONTENT_DESC>* pDesc);

    virtual void Process_ID3D11VideoProcessor_GetRateConversionCaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS>* pCaps);

    virtual void Process_ID3D11AuthenticatedChannel_GetCertificateSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pCertificateSize);

    virtual void Process_ID3D11AuthenticatedChannel_GetCertificate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT CertificateSize,
        PointerDecoder<BYTE>* pCertificate);

    virtual void Process_ID3D11AuthenticatedChannel_GetChannelHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<uint64_t, void*>* pChannelHandle);

    virtual void Process_ID3D11CryptoSession_GetCryptoType(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_GUID>* pCryptoType);

    virtual void Process_ID3D11CryptoSession_GetDecoderProfile(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile);

    virtual void Process_ID3D11CryptoSession_GetCertificateSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<UINT>* pCertificateSize);

    virtual void Process_ID3D11CryptoSession_GetCertificate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT CertificateSize,
        PointerDecoder<BYTE>* pCertificate);

    virtual void Process_ID3D11CryptoSession_GetCryptoSessionHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<uint64_t, void*>* pCryptoSessionHandle);

    virtual void Process_ID3D11VideoDecoderOutputView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11VideoProcessorInputView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11VideoProcessorOutputView_GetDesc(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC>* pDesc);

    virtual void Process_ID3D11VideoContext_GetDecoderBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        D3D11_VIDEO_DECODER_BUFFER_TYPE Type,
        PointerDecoder<UINT>* pBufferSize,
        PointerDecoder<uint8_t, void*>* ppBuffer);

    virtual void Process_ID3D11VideoContext_ReleaseDecoderBuffer(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        D3D11_VIDEO_DECODER_BUFFER_TYPE Type);

    virtual void Process_ID3D11VideoContext_DecoderBeginFrame(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        format::HandleId pView,
        UINT ContentKeySize,
        PointerDecoder<uint8_t>* pContentKey);

    virtual void Process_ID3D11VideoContext_DecoderEndFrame(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder);

    virtual void Process_ID3D11VideoContext_SubmitDecoderBuffers(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        UINT NumBuffers,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC>* pBufferDesc);

    virtual void Process_ID3D11VideoContext_DecoderExtension(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_EXTENSION>* pExtensionData);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputTargetRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        BOOL Enable,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputBackgroundColor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        BOOL YCbCr,
        StructPointerDecoder<Decoded_D3D11_VIDEO_COLOR>* pColor);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_COLOR_SPACE>* pColorSpace);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputAlphaFillMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode,
        UINT StreamIndex);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputConstriction(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        BOOL Enable,
        Decoded_tagSIZE Size);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputStereoMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        BOOL Enable);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetOutputExtension(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pVideoProcessor,
        StructPointerDecoder<Decoded_GUID>* pExtensionGuid,
        UINT DataSize,
        uint64_t pData);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputTargetRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<BOOL>* Enabled,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputBackgroundColor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<BOOL>* pYCbCr,
        StructPointerDecoder<Decoded_D3D11_VIDEO_COLOR>* pColor);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_COLOR_SPACE>* pColorSpace);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputAlphaFillMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE>* pAlphaFillMode,
        PointerDecoder<UINT>* pStreamIndex);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputConstriction(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<BOOL>* pEnabled,
        StructPointerDecoder<Decoded_tagSIZE>* pSize);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputStereoMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<BOOL>* pEnabled);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetOutputExtension(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pVideoProcessor,
        StructPointerDecoder<Decoded_GUID>* pExtensionGuid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamFrameFormat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        D3D11_VIDEO_FRAME_FORMAT FrameFormat);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_COLOR_SPACE>* pColorSpace);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamOutputRate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate,
        BOOL RepeatFrame,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pCustomRate);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamSourceRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamDestRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamAlpha(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        FLOAT Alpha);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamPalette(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        UINT Count,
        PointerDecoder<UINT>* pEntries);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamPixelAspectRatio(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pSourceAspectRatio,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pDestinationAspectRatio);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamLumaKey(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        FLOAT Lower,
        FLOAT Upper);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamStereoFormat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format,
        BOOL LeftViewFrame0,
        BOOL BaseViewFrame0,
        D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode,
        int MonoOffset);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamAutoProcessingMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        D3D11_VIDEO_PROCESSOR_FILTER Filter,
        BOOL Enable,
        int Level);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamExtension(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        StructPointerDecoder<Decoded_GUID>* pExtensionGuid,
        UINT DataSize,
        uint64_t pData);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamFrameFormat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<D3D11_VIDEO_FRAME_FORMAT>* pFrameFormat);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamColorSpace(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_COLOR_SPACE>* pColorSpace);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamOutputRate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<D3D11_VIDEO_PROCESSOR_OUTPUT_RATE>* pOutputRate,
        PointerDecoder<BOOL>* pRepeatFrame,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pCustomRate);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamSourceRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnabled,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamDestRect(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnabled,
        StructPointerDecoder<Decoded_tagRECT>* pRect);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamAlpha(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnabled,
        PointerDecoder<FLOAT>* pAlpha);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamPalette(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        UINT Count,
        PointerDecoder<UINT>* pEntries);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamPixelAspectRatio(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnabled,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pSourceAspectRatio,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pDestinationAspectRatio);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamLumaKey(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnabled,
        PointerDecoder<FLOAT>* pLower,
        PointerDecoder<FLOAT>* pUpper);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamStereoFormat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnable,
        PointerDecoder<D3D11_VIDEO_PROCESSOR_STEREO_FORMAT>* pFormat,
        PointerDecoder<BOOL>* pLeftViewFrame0,
        PointerDecoder<BOOL>* pBaseViewFrame0,
        PointerDecoder<D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE>* pFlipMode,
        PointerDecoder<int>* MonoOffset);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamAutoProcessingMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnabled);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamFilter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        D3D11_VIDEO_PROCESSOR_FILTER Filter,
        PointerDecoder<BOOL>* pEnabled,
        PointerDecoder<int>* pLevel);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamExtension(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        StructPointerDecoder<Decoded_GUID>* pExtensionGuid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11VideoContext_VideoProcessorBlt(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pVideoProcessor,
        format::HandleId pView,
        UINT OutputFrame,
        UINT StreamCount,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_STREAM>* pStreams);

    virtual void Process_ID3D11VideoContext_NegotiateCryptoSessionKeyExchange(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pCryptoSession,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11VideoContext_EncryptionBlt(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCryptoSession,
        format::HandleId pSrcSurface,
        format::HandleId pDstSurface,
        UINT IVSize,
        PointerDecoder<uint8_t>* pIV);

    virtual void Process_ID3D11VideoContext_DecryptionBlt(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCryptoSession,
        format::HandleId pSrcSurface,
        format::HandleId pDstSurface,
        StructPointerDecoder<Decoded_D3D11_ENCRYPTED_BLOCK_INFO>* pEncryptedBlockInfo,
        UINT ContentKeySize,
        PointerDecoder<uint8_t>* pContentKey,
        UINT IVSize,
        PointerDecoder<uint8_t>* pIV);

    virtual void Process_ID3D11VideoContext_StartSessionKeyRefresh(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCryptoSession,
        UINT RandomNumberSize,
        PointerDecoder<uint8_t>* pRandomNumber);

    virtual void Process_ID3D11VideoContext_FinishSessionKeyRefresh(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pCryptoSession);

    virtual void Process_ID3D11VideoContext_GetEncryptionBltKey(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pCryptoSession,
        UINT KeySize,
        PointerDecoder<uint8_t>* pReadbackKey);

    virtual void Process_ID3D11VideoContext_NegotiateAuthenticatedChannelKeyExchange(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pChannel,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11VideoContext_QueryAuthenticatedChannel(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pChannel,
        UINT InputSize,
        PointerDecoder<uint8_t>* pInput,
        UINT OutputSize,
        PointerDecoder<uint8_t>* pOutput);

    virtual void Process_ID3D11VideoContext_ConfigureAuthenticatedChannel(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pChannel,
        UINT InputSize,
        PointerDecoder<uint8_t>* pInput,
        StructPointerDecoder<Decoded_D3D11_AUTHENTICATED_CONFIGURE_OUTPUT>* pOutput);

    virtual void Process_ID3D11VideoContext_VideoProcessorSetStreamRotation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        D3D11_VIDEO_PROCESSOR_ROTATION Rotation);

    virtual void Process_ID3D11VideoContext_VideoProcessorGetStreamRotation(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnable,
        PointerDecoder<D3D11_VIDEO_PROCESSOR_ROTATION>* pRotation);

    virtual void Process_ID3D11VideoDevice_CreateVideoDecoder(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_DESC>* pVideoDesc,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_CONFIG>* pConfig,
        HandlePointerDecoder<ID3D11VideoDecoder*>* ppDecoder);

    virtual void Process_ID3D11VideoDevice_CreateVideoProcessor(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pEnum,
        UINT RateConversionIndex,
        HandlePointerDecoder<ID3D11VideoProcessor*>* ppVideoProcessor);

    virtual void Process_ID3D11VideoDevice_CreateAuthenticatedChannel(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType,
        HandlePointerDecoder<ID3D11AuthenticatedChannel*>* ppAuthenticatedChannel);

    virtual void Process_ID3D11VideoDevice_CreateCryptoSession(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pCryptoType,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile,
        StructPointerDecoder<Decoded_GUID>* pKeyExchangeType,
        HandlePointerDecoder<ID3D11CryptoSession*>* ppCryptoSession);

    virtual void Process_ID3D11VideoDevice_CreateVideoDecoderOutputView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11VideoDecoderOutputView*>* ppVDOVView);

    virtual void Process_ID3D11VideoDevice_CreateVideoProcessorInputView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        format::HandleId pEnum,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11VideoProcessorInputView*>* ppVPIView);

    virtual void Process_ID3D11VideoDevice_CreateVideoProcessorOutputView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        format::HandleId pEnum,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11VideoProcessorOutputView*>* ppVPOView);

    virtual void Process_ID3D11VideoDevice_CreateVideoProcessorEnumerator(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_CONTENT_DESC>* pDesc,
        HandlePointerDecoder<ID3D11VideoProcessorEnumerator*>* ppEnum);

    virtual void Process_ID3D11VideoDevice_GetVideoDecoderProfileCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D11VideoDevice_GetVideoDecoderProfile(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Index,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile);

    virtual void Process_ID3D11VideoDevice_CheckVideoDecoderFormat(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile,
        DXGI_FORMAT Format,
        PointerDecoder<BOOL>* pSupported);

    virtual void Process_ID3D11VideoDevice_GetVideoDecoderConfigCount(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_DESC>* pDesc,
        PointerDecoder<UINT>* pCount);

    virtual void Process_ID3D11VideoDevice_GetVideoDecoderConfig(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_DESC>* pDesc,
        UINT Index,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_CONFIG>* pConfig);

    virtual void Process_ID3D11VideoDevice_GetContentProtectionCaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pCryptoType,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile,
        StructPointerDecoder<Decoded_D3D11_VIDEO_CONTENT_PROTECTION_CAPS>* pCaps);

    virtual void Process_ID3D11VideoDevice_CheckCryptoKeyExchange(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pCryptoType,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile,
        UINT Index,
        StructPointerDecoder<Decoded_GUID>* pKeyExchangeType);

    virtual void Process_ID3D11VideoDevice_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11VideoDevice_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        format::HandleId pData);

    virtual void Process_ID3D11Device_CreateShaderResourceView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_SHADER_RESOURCE_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11ShaderResourceView*>* ppSRView);

    virtual void Process_ID3D11Device_CreateUnorderedAccessView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_UNORDERED_ACCESS_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11UnorderedAccessView*>* ppUAView);

    virtual void Process_ID3D11Device_CreateRenderTargetView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_RENDER_TARGET_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11RenderTargetView*>* ppRTView);

    virtual void Process_ID3D11Device_CreateDepthStencilView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_DEPTH_STENCIL_VIEW_DESC>* pDesc,
        HandlePointerDecoder<ID3D11DepthStencilView*>* ppDepthStencilView);

    virtual void Process_ID3D11Device_CreateInputLayout(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_INPUT_ELEMENT_DESC>* pInputElementDescs,
        UINT NumElements,
        PointerDecoder<uint8_t>* pShaderBytecodeWithInputSignature,
        SIZE_T BytecodeLength,
        HandlePointerDecoder<ID3D11InputLayout*>* ppInputLayout);

    virtual void Process_ID3D11Device_CreateVertexShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11VertexShader*>* ppVertexShader);

    virtual void Process_ID3D11Device_CreateGeometryShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11GeometryShader*>* ppGeometryShader);

    virtual void Process_ID3D11Device_CreateGeometryShaderWithStreamOutput(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        StructPointerDecoder<Decoded_D3D11_SO_DECLARATION_ENTRY>* pSODeclaration,
        UINT NumEntries,
        PointerDecoder<UINT>* pBufferStrides,
        UINT NumStrides,
        UINT RasterizedStream,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11GeometryShader*>* ppGeometryShader);

    virtual void Process_ID3D11Device_CreatePixelShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11PixelShader*>* ppPixelShader);

    virtual void Process_ID3D11Device_CreateHullShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11HullShader*>* ppHullShader);

    virtual void Process_ID3D11Device_CreateDomainShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11DomainShader*>* ppDomainShader);

    virtual void Process_ID3D11Device_CreateComputeShader(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        PointerDecoder<uint8_t>* pShaderBytecode,
        SIZE_T BytecodeLength,
        format::HandleId pClassLinkage,
        HandlePointerDecoder<ID3D11ComputeShader*>* ppComputeShader);

    virtual void Process_ID3D11Device_CreateClassLinkage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        HandlePointerDecoder<ID3D11ClassLinkage*>* ppLinkage);

    virtual void Process_ID3D11Device_CreateBlendState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_BLEND_DESC>* pBlendStateDesc,
        HandlePointerDecoder<ID3D11BlendState*>* ppBlendState);

    virtual void Process_ID3D11Device_CreateDepthStencilState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_DEPTH_STENCIL_DESC>* pDepthStencilDesc,
        HandlePointerDecoder<ID3D11DepthStencilState*>* ppDepthStencilState);

    virtual void Process_ID3D11Device_CreateRasterizerState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_RASTERIZER_DESC>* pRasterizerDesc,
        HandlePointerDecoder<ID3D11RasterizerState*>* ppRasterizerState);

    virtual void Process_ID3D11Device_CreateSamplerState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_SAMPLER_DESC>* pSamplerDesc,
        HandlePointerDecoder<ID3D11SamplerState*>* ppSamplerState);

    virtual void Process_ID3D11Device_CreateQuery(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_QUERY_DESC>* pQueryDesc,
        HandlePointerDecoder<ID3D11Query*>* ppQuery);

    virtual void Process_ID3D11Device_CreatePredicate(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_QUERY_DESC>* pPredicateDesc,
        HandlePointerDecoder<ID3D11Predicate*>* ppPredicate);

    virtual void Process_ID3D11Device_CreateCounter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_COUNTER_DESC>* pCounterDesc,
        HandlePointerDecoder<ID3D11Counter*>* ppCounter);

    virtual void Process_ID3D11Device_CreateDeferredContext(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT ContextFlags,
        HandlePointerDecoder<ID3D11DeviceContext*>* ppDeferredContext);

    virtual void Process_ID3D11Device_OpenSharedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hResource,
        Decoded_GUID ReturnedInterface,
        HandlePointerDecoder<void*>* ppResource);

    virtual void Process_ID3D11Device_CheckFormatSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT Format,
        PointerDecoder<UINT>* pFormatSupport);

    virtual void Process_ID3D11Device_CheckMultisampleQualityLevels(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT Format,
        UINT SampleCount,
        PointerDecoder<UINT>* pNumQualityLevels);

    virtual void Process_ID3D11Device_CheckCounterInfo(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_COUNTER_INFO>* pCounterInfo);

    virtual void Process_ID3D11Device_CheckCounter(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_COUNTER_DESC>* pDesc,
        PointerDecoder<D3D11_COUNTER_TYPE>* pType,
        PointerDecoder<UINT>* pActiveCounters,
        StringDecoder* szName,
        PointerDecoder<UINT>* pNameLength,
        StringDecoder* szUnits,
        PointerDecoder<UINT>* pUnitsLength,
        StringDecoder* szDescription,
        PointerDecoder<UINT>* pDescriptionLength);

    virtual void Process_ID3D11Device_GetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        PointerDecoder<UINT>* pDataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11Device_SetPrivateData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11Device_SetPrivateDataInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID guid,
        format::HandleId pData);

    virtual void Process_ID3D11Device_GetFeatureLevel(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D_FEATURE_LEVEL return_value);

    virtual void Process_ID3D11Device_GetCreationFlags(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

    virtual void Process_ID3D11Device_GetDeviceRemovedReason(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value);

    virtual void Process_ID3D11Device_GetImmediateContext(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11DeviceContext*>* ppImmediateContext);

    virtual void Process_ID3D11Device_SetExceptionMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT RaiseFlags);

    virtual void Process_ID3D11Device_GetExceptionMode(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT return_value);

/*
** This part is generated from d3d11_1.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_ID3D11BlendState1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_BLEND_DESC1>* pDesc);

    virtual void Process_ID3D11RasterizerState1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_RASTERIZER_DESC1>* pDesc);

    virtual void Process_ID3D11DeviceContext1_CopySubresourceRegion1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDstResource,
        UINT DstSubresource,
        UINT DstX,
        UINT DstY,
        UINT DstZ,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_D3D11_BOX>* pSrcBox,
        UINT CopyFlags);

    virtual void Process_ID3D11DeviceContext1_DiscardResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResource);

    virtual void Process_ID3D11DeviceContext1_DiscardView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResourceView);

    virtual void Process_ID3D11DeviceContext1_VSSetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_HSSetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_DSSetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_GSSetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_PSSetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_CSSetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_VSGetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_HSGetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_DSGetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_GSGetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_PSGetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_CSGetConstantBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT StartSlot,
        UINT NumBuffers,
        HandlePointerDecoder<ID3D11Buffer*>* ppConstantBuffers,
        PointerDecoder<UINT>* pFirstConstant,
        PointerDecoder<UINT>* pNumConstants);

    virtual void Process_ID3D11DeviceContext1_SwapDeviceContextState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pState,
        HandlePointerDecoder<ID3DDeviceContextState*>* ppPreviousState);

    virtual void Process_ID3D11DeviceContext1_ClearView(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pView,
        PointerDecoder<FLOAT> Color [4],
        StructPointerDecoder<Decoded_tagRECT>* pRect,
        UINT NumRects);

    virtual void Process_ID3D11DeviceContext1_DiscardView1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pResourceView,
        StructPointerDecoder<Decoded_tagRECT>* pRects,
        UINT NumRects);

    virtual void Process_ID3D11VideoContext1_SubmitDecoderBuffers1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        UINT NumBuffers,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC1>* pBufferDesc);

    virtual void Process_ID3D11VideoContext1_GetDataForNewHardwareKey(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pCryptoSession,
        UINT PrivateInputSize,
        PointerDecoder<uint8_t>* pPrivatInputData,
        PointerDecoder<UINT64>* pPrivateOutputData);

    virtual void Process_ID3D11VideoContext1_CheckCryptoSessionStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pCryptoSession,
        PointerDecoder<D3D11_CRYPTO_SESSION_STATUS>* pStatus);

    virtual void Process_ID3D11VideoContext1_DecoderEnableDownsampling(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        DXGI_COLOR_SPACE_TYPE InputColorSpace,
        StructPointerDecoder<Decoded_D3D11_VIDEO_SAMPLE_DESC>* pOutputDesc,
        UINT ReferenceFrameCount);

    virtual void Process_ID3D11VideoContext1_DecoderUpdateDownsampling(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        StructPointerDecoder<Decoded_D3D11_VIDEO_SAMPLE_DESC>* pOutputDesc);

    virtual void Process_ID3D11VideoContext1_VideoProcessorSetOutputColorSpace1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        DXGI_COLOR_SPACE_TYPE ColorSpace);

    virtual void Process_ID3D11VideoContext1_VideoProcessorSetOutputShaderUsage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        BOOL ShaderUsage);

    virtual void Process_ID3D11VideoContext1_VideoProcessorGetOutputColorSpace1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<DXGI_COLOR_SPACE_TYPE>* pColorSpace);

    virtual void Process_ID3D11VideoContext1_VideoProcessorGetOutputShaderUsage(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<BOOL>* pShaderUsage);

    virtual void Process_ID3D11VideoContext1_VideoProcessorSetStreamColorSpace1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        DXGI_COLOR_SPACE_TYPE ColorSpace);

    virtual void Process_ID3D11VideoContext1_VideoProcessorSetStreamMirror(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        BOOL Enable,
        BOOL FlipHorizontal,
        BOOL FlipVertical);

    virtual void Process_ID3D11VideoContext1_VideoProcessorGetStreamColorSpace1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<DXGI_COLOR_SPACE_TYPE>* pColorSpace);

    virtual void Process_ID3D11VideoContext1_VideoProcessorGetStreamMirror(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<BOOL>* pEnable,
        PointerDecoder<BOOL>* pFlipHorizontal,
        PointerDecoder<BOOL>* pFlipVertical);

    virtual void Process_ID3D11VideoContext1_VideoProcessorGetBehaviorHints(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pVideoProcessor,
        UINT OutputWidth,
        UINT OutputHeight,
        DXGI_FORMAT OutputFormat,
        UINT StreamCount,
        StructPointerDecoder<Decoded_D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT>* pStreams,
        PointerDecoder<UINT>* pBehaviorHints);

    virtual void Process_ID3D11VideoDevice1_GetCryptoSessionPrivateDataSize(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pCryptoType,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile,
        StructPointerDecoder<Decoded_GUID>* pKeyExchangeType,
        PointerDecoder<UINT>* pPrivateInputSize,
        PointerDecoder<UINT>* pPrivateOutputSize);

    virtual void Process_ID3D11VideoDevice1_GetVideoDecoderCaps(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_GUID>* pDecoderProfile,
        UINT SampleWidth,
        UINT SampleHeight,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pFrameRate,
        UINT BitRate,
        StructPointerDecoder<Decoded_GUID>* pCryptoType,
        PointerDecoder<UINT>* pDecoderCaps);

    virtual void Process_ID3D11VideoDevice1_CheckVideoDecoderDownsampling(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_DESC>* pInputDesc,
        DXGI_COLOR_SPACE_TYPE InputColorSpace,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_CONFIG>* pInputConfig,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pFrameRate,
        StructPointerDecoder<Decoded_D3D11_VIDEO_SAMPLE_DESC>* pOutputDesc,
        PointerDecoder<BOOL>* pSupported,
        PointerDecoder<BOOL>* pRealTimeHint);

    virtual void Process_ID3D11VideoDevice1_RecommendVideoDecoderDownsampleParameters(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_DESC>* pInputDesc,
        DXGI_COLOR_SPACE_TYPE InputColorSpace,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_CONFIG>* pInputConfig,
        StructPointerDecoder<Decoded_DXGI_RATIONAL>* pFrameRate,
        StructPointerDecoder<Decoded_D3D11_VIDEO_SAMPLE_DESC>* pRecommendedOutputDesc);

    virtual void Process_ID3D11VideoProcessorEnumerator1_CheckVideoProcessorFormatConversion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT InputFormat,
        DXGI_COLOR_SPACE_TYPE InputColorSpace,
        DXGI_FORMAT OutputFormat,
        DXGI_COLOR_SPACE_TYPE OutputColorSpace,
        PointerDecoder<BOOL>* pSupported);

    virtual void Process_ID3D11Device1_GetImmediateContext1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11DeviceContext1*>* ppImmediateContext);

    virtual void Process_ID3D11Device1_CreateDeferredContext1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT ContextFlags,
        HandlePointerDecoder<ID3D11DeviceContext1*>* ppDeferredContext);

    virtual void Process_ID3D11Device1_CreateBlendState1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_BLEND_DESC1>* pBlendStateDesc,
        HandlePointerDecoder<ID3D11BlendState1*>* ppBlendState);

    virtual void Process_ID3D11Device1_CreateRasterizerState1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_RASTERIZER_DESC1>* pRasterizerDesc,
        HandlePointerDecoder<ID3D11RasterizerState1*>* ppRasterizerState);

    virtual void Process_ID3D11Device1_CreateDeviceContextState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT Flags,
        PointerDecoder<D3D_FEATURE_LEVEL>* pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        Decoded_GUID EmulatedInterface,
        PointerDecoder<D3D_FEATURE_LEVEL>* pChosenFeatureLevel,
        HandlePointerDecoder<ID3DDeviceContextState*>* ppContextState);

    virtual void Process_ID3D11Device1_OpenSharedResource1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hResource,
        Decoded_GUID returnedInterface,
        HandlePointerDecoder<void*>* ppResource);

    virtual void Process_ID3D11Device1_OpenSharedResourceByName(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        WStringDecoder* lpName,
        DWORD dwDesiredAccess,
        Decoded_GUID returnedInterface,
        HandlePointerDecoder<void*>* ppResource);

    virtual void Process_ID3DUserDefinedAnnotation_BeginEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        INT return_value,
        WStringDecoder* Name);

    virtual void Process_ID3DUserDefinedAnnotation_EndEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        INT return_value);

    virtual void Process_ID3DUserDefinedAnnotation_SetMarker(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        WStringDecoder* Name);

    virtual void Process_ID3DUserDefinedAnnotation_GetStatus(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

/*
** This part is generated from d3d11_2.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_ID3D11DeviceContext2_UpdateTileMappings(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pTiledResource,
        UINT NumTiledResourceRegions,
        StructPointerDecoder<Decoded_D3D11_TILED_RESOURCE_COORDINATE>* pTiledResourceRegionStartCoordinates,
        StructPointerDecoder<Decoded_D3D11_TILE_REGION_SIZE>* pTiledResourceRegionSizes,
        format::HandleId pTilePool,
        UINT NumRanges,
        PointerDecoder<UINT>* pRangeFlags,
        PointerDecoder<UINT>* pTilePoolStartOffsets,
        PointerDecoder<UINT>* pRangeTileCounts,
        UINT Flags);

    virtual void Process_ID3D11DeviceContext2_CopyTileMappings(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDestTiledResource,
        StructPointerDecoder<Decoded_D3D11_TILED_RESOURCE_COORDINATE>* pDestRegionStartCoordinate,
        format::HandleId pSourceTiledResource,
        StructPointerDecoder<Decoded_D3D11_TILED_RESOURCE_COORDINATE>* pSourceRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D11_TILE_REGION_SIZE>* pTileRegionSize,
        UINT Flags);

    virtual void Process_ID3D11DeviceContext2_CopyTiles(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResource,
        StructPointerDecoder<Decoded_D3D11_TILED_RESOURCE_COORDINATE>* pTileRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D11_TILE_REGION_SIZE>* pTileRegionSize,
        format::HandleId pBuffer,
        UINT64 BufferStartOffsetInBytes,
        UINT Flags);

    virtual void Process_ID3D11DeviceContext2_UpdateTiles(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pDestTiledResource,
        StructPointerDecoder<Decoded_D3D11_TILED_RESOURCE_COORDINATE>* pDestTileRegionStartCoordinate,
        StructPointerDecoder<Decoded_D3D11_TILE_REGION_SIZE>* pDestTileRegionSize,
        uint64_t pSourceTileData,
        UINT Flags);

    virtual void Process_ID3D11DeviceContext2_ResizeTilePool(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pTilePool,
        UINT64 NewSizeInBytes);

    virtual void Process_ID3D11DeviceContext2_TiledResourceBarrier(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResourceOrViewAccessBeforeBarrier,
        format::HandleId pTiledResourceOrViewAccessAfterBarrier);

    virtual void Process_ID3D11DeviceContext2_IsAnnotationEnabled(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_ID3D11DeviceContext2_SetMarkerInt(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        WStringDecoder* pLabel,
        INT Data);

    virtual void Process_ID3D11DeviceContext2_BeginEventInt(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        WStringDecoder* pLabel,
        INT Data);

    virtual void Process_ID3D11DeviceContext2_EndEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D11Device2_GetImmediateContext2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11DeviceContext2*>* ppImmediateContext);

    virtual void Process_ID3D11Device2_CreateDeferredContext2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT ContextFlags,
        HandlePointerDecoder<ID3D11DeviceContext2*>* ppDeferredContext);

    virtual void Process_ID3D11Device2_GetResourceTiling(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pTiledResource,
        PointerDecoder<UINT>* pNumTilesForEntireResource,
        StructPointerDecoder<Decoded_D3D11_PACKED_MIP_DESC>* pPackedMipDesc,
        StructPointerDecoder<Decoded_D3D11_TILE_SHAPE>* pStandardTileShapeForNonPackedMips,
        PointerDecoder<UINT>* pNumSubresourceTilings,
        UINT FirstSubresourceTilingToGet,
        StructPointerDecoder<Decoded_D3D11_SUBRESOURCE_TILING>* pSubresourceTilingsForNonPackedMips);

    virtual void Process_ID3D11Device2_CheckMultisampleQualityLevels1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        DXGI_FORMAT Format,
        UINT SampleCount,
        UINT Flags,
        PointerDecoder<UINT>* pNumQualityLevels);

/*
** This part is generated from d3d11_3.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_ID3D11Texture2D1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_TEXTURE2D_DESC1>* pDesc);

    virtual void Process_ID3D11Texture3D1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_TEXTURE3D_DESC1>* pDesc);

    virtual void Process_ID3D11RasterizerState2_GetDesc2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_RASTERIZER_DESC2>* pDesc);

    virtual void Process_ID3D11ShaderResourceView1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_SHADER_RESOURCE_VIEW_DESC1>* pDesc1);

    virtual void Process_ID3D11RenderTargetView1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_RENDER_TARGET_VIEW_DESC1>* pDesc1);

    virtual void Process_ID3D11UnorderedAccessView1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_UNORDERED_ACCESS_VIEW_DESC1>* pDesc1);

    virtual void Process_ID3D11Query1_GetDesc1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        StructPointerDecoder<Decoded_D3D11_QUERY_DESC1>* pDesc1);

    virtual void Process_ID3D11DeviceContext3_Flush1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        D3D11_CONTEXT_TYPE ContextType,
        uint64_t hEvent);

    virtual void Process_ID3D11DeviceContext3_SetHardwareProtectionState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL HwProtectionEnable);

    virtual void Process_ID3D11DeviceContext3_GetHardwareProtectionState(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        PointerDecoder<BOOL>* pHwProtectionEnable);

    virtual void Process_ID3D11Fence_CreateSharedHandle(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded__SECURITY_ATTRIBUTES>* pAttributes,
        DWORD dwAccess,
        WStringDecoder* lpName,
        PointerDecoder<uint64_t, void*>* pHandle);

    virtual void Process_ID3D11Fence_GetCompletedValue(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        UINT64 return_value);

    virtual void Process_ID3D11Fence_SetEventOnCompletion(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 Value,
        uint64_t hEvent);

    virtual void Process_ID3D11DeviceContext4_Signal(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 Value);

    virtual void Process_ID3D11DeviceContext4_Wait(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pFence,
        UINT64 Value);

    virtual void Process_ID3D11Device3_CreateRasterizerState2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_RASTERIZER_DESC2>* pRasterizerDesc,
        HandlePointerDecoder<ID3D11RasterizerState2*>* ppRasterizerState);

    virtual void Process_ID3D11Device3_CreateShaderResourceView1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_SHADER_RESOURCE_VIEW_DESC1>* pDesc1,
        HandlePointerDecoder<ID3D11ShaderResourceView1*>* ppSRView1);

    virtual void Process_ID3D11Device3_CreateUnorderedAccessView1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_UNORDERED_ACCESS_VIEW_DESC1>* pDesc1,
        HandlePointerDecoder<ID3D11UnorderedAccessView1*>* ppUAView1);

    virtual void Process_ID3D11Device3_CreateRenderTargetView1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource,
        StructPointerDecoder<Decoded_D3D11_RENDER_TARGET_VIEW_DESC1>* pDesc1,
        HandlePointerDecoder<ID3D11RenderTargetView1*>* ppRTView1);

    virtual void Process_ID3D11Device3_CreateQuery1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        StructPointerDecoder<Decoded_D3D11_QUERY_DESC1>* pQueryDesc1,
        HandlePointerDecoder<ID3D11Query1*>* ppQuery1);

    virtual void Process_ID3D11Device3_GetImmediateContext3(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11DeviceContext3*>* ppImmediateContext);

    virtual void Process_ID3D11Device3_CreateDeferredContext3(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT ContextFlags,
        HandlePointerDecoder<ID3D11DeviceContext3*>* ppDeferredContext);

    virtual void Process_ID3D11Device3_ReadFromSubresource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        uint64_t pDstData,
        UINT DstRowPitch,
        UINT DstDepthPitch,
        format::HandleId pSrcResource,
        UINT SrcSubresource,
        StructPointerDecoder<Decoded_D3D11_BOX>* pSrcBox);

/*
** This part is generated from d3d11_4.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_ID3D11Device4_RegisterDeviceRemovedEvent(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hEvent,
        PointerDecoder<DWORD>* pdwCookie);

    virtual void Process_ID3D11Device4_UnregisterDeviceRemoved(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        DWORD dwCookie);

    virtual void Process_ID3D11Device5_OpenSharedFence(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        uint64_t hFence,
        Decoded_GUID ReturnedInterface,
        HandlePointerDecoder<void*>* ppFence);

    virtual void Process_ID3D11Device5_CreateFence(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        UINT64 InitialValue,
        D3D11_FENCE_FLAG Flags,
        Decoded_GUID ReturnedInterface,
        HandlePointerDecoder<void*>* ppFence);

    virtual void Process_ID3D11Multithread_Enter(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D11Multithread_Leave(
        const ApiCallInfo& call_info,
        format::HandleId object_id);

    virtual void Process_ID3D11Multithread_SetMultithreadProtected(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value,
        BOOL bMTProtect);

    virtual void Process_ID3D11Multithread_GetMultithreadProtected(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        BOOL return_value);

    virtual void Process_ID3D11VideoContext2_VideoProcessorSetOutputHDRMetaData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        DXGI_HDR_METADATA_TYPE Type,
        UINT Size,
        PointerDecoder<uint8_t>* pHDRMetaData);

    virtual void Process_ID3D11VideoContext2_VideoProcessorGetOutputHDRMetaData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        PointerDecoder<DXGI_HDR_METADATA_TYPE>* pType,
        UINT Size,
        PointerDecoder<uint8_t>* pMetaData);

    virtual void Process_ID3D11VideoContext2_VideoProcessorSetStreamHDRMetaData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        DXGI_HDR_METADATA_TYPE Type,
        UINT Size,
        PointerDecoder<uint8_t>* pHDRMetaData);

    virtual void Process_ID3D11VideoContext2_VideoProcessorGetStreamHDRMetaData(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        format::HandleId pVideoProcessor,
        UINT StreamIndex,
        PointerDecoder<DXGI_HDR_METADATA_TYPE>* pType,
        UINT Size,
        PointerDecoder<uint8_t>* pMetaData);

    virtual void Process_ID3D11VideoDevice2_CheckFeatureSupport(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        D3D11_FEATURE_VIDEO Feature,
        PointerDecoder<uint8_t>* pFeatureSupportData,
        UINT FeatureSupportDataSize);

    virtual void Process_ID3D11VideoDevice2_NegotiateCryptoSessionKeyExchangeMT(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pCryptoSession,
        D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS flags,
        UINT DataSize,
        PointerDecoder<uint8_t>* pData);

    virtual void Process_ID3D11VideoContext3_DecoderBeginFrame1(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        format::HandleId pView,
        UINT ContentKeySize,
        PointerDecoder<uint8_t>* pContentKey,
        UINT NumComponentHistograms,
        PointerDecoder<UINT>* pHistogramOffsets,
        HandlePointerDecoder<ID3D11Buffer*>* ppHistogramBuffers);

    virtual void Process_ID3D11VideoContext3_SubmitDecoderBuffers2(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pDecoder,
        UINT NumBuffers,
        StructPointerDecoder<Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC2>* pBufferDesc);

/*
** This part is generated from d3d11on12.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_D3D11On12CreateDevice(
        const ApiCallInfo& call_info,
        HRESULT return_value,
        format::HandleId pDevice,
        UINT Flags,
        PointerDecoder<D3D_FEATURE_LEVEL>* pFeatureLevels,
        UINT FeatureLevels,
        HandlePointerDecoder<IUnknown*>* ppCommandQueues,
        UINT NumQueues,
        UINT NodeMask,
        HandlePointerDecoder<ID3D11Device*>* ppDevice,
        HandlePointerDecoder<ID3D11DeviceContext*>* ppImmediateContext,
        PointerDecoder<D3D_FEATURE_LEVEL>* pChosenFeatureLevel);

    virtual void Process_ID3D11On12Device_CreateWrappedResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource12,
        StructPointerDecoder<Decoded_D3D11_RESOURCE_FLAGS>* pFlags11,
        D3D12_RESOURCE_STATES InState,
        D3D12_RESOURCE_STATES OutState,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppResource11);

    virtual void Process_ID3D11On12Device_ReleaseWrappedResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11Resource*>* ppResources,
        UINT NumResources);

    virtual void Process_ID3D11On12Device_AcquireWrappedResources(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HandlePointerDecoder<ID3D11Resource*>* ppResources,
        UINT NumResources);

    virtual void Process_ID3D11On12Device1_GetD3D12Device(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvDevice);

    virtual void Process_ID3D11On12Device2_UnwrapUnderlyingResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource11,
        format::HandleId pCommandQueue,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvResource12);

    virtual void Process_ID3D11On12Device2_ReturnUnderlyingResource(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        format::HandleId pResource11,
        UINT NumSync,
        PointerDecoder<UINT64>* pSignalValues,
        HandlePointerDecoder<ID3D12Fence*>* ppFences);

/*
** This part is generated from Unknwnbase.h in Windows SDK: 10.0.20348.0
**
*/
    virtual void Process_IUnknown_QueryInterface(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        HRESULT return_value,
        Decoded_GUID riid,
        HandlePointerDecoder<void*>* ppvObject);

    virtual void Process_IUnknown_AddRef(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        ULONG return_value);

    virtual void Process_IUnknown_Release(
        const ApiCallInfo& call_info,
        format::HandleId object_id,
        ULONG return_value);

};


GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
