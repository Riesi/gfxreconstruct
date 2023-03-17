/*
** Copyright (c) 2018-2021 Valve Corporation
** Copyright (c) 2018-2022 LunarG, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "generated_vulkan_enum_to_string.h"
#include "util/custom_vulkan_to_string.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
template <> std::string ToString<StdVideoDecodeH264FieldOrderCount>(const StdVideoDecodeH264FieldOrderCount& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_TOP: return "STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_TOP";
    case STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_BOTTOM: return "STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_BOTTOM";
    case STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_INVALID: return "STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_INVALID";
    default: break;
    }
    return "Unhandled StdVideoDecodeH264FieldOrderCount";
}

template <> std::string ToString<StdVideoH264AspectRatioIdc>(const StdVideoH264AspectRatioIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_UNSPECIFIED: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_UNSPECIFIED";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_SQUARE: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_SQUARE";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_12_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_12_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_10_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_10_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_16_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_16_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_40_33: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_40_33";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_24_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_24_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_20_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_20_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_32_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_32_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_80_33: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_80_33";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_18_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_18_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_15_11: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_15_11";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_64_33: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_64_33";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_160_99: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_160_99";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_4_3: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_4_3";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_3_2: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_3_2";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_2_1: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_2_1";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_EXTENDED_SAR: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_EXTENDED_SAR";
    case STD_VIDEO_H264_ASPECT_RATIO_IDC_INVALID: return "STD_VIDEO_H264_ASPECT_RATIO_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264AspectRatioIdc";
}

template <> std::string ToString<StdVideoH264CabacInitIdc>(const StdVideoH264CabacInitIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_CABAC_INIT_IDC_0: return "STD_VIDEO_H264_CABAC_INIT_IDC_0";
    case STD_VIDEO_H264_CABAC_INIT_IDC_1: return "STD_VIDEO_H264_CABAC_INIT_IDC_1";
    case STD_VIDEO_H264_CABAC_INIT_IDC_2: return "STD_VIDEO_H264_CABAC_INIT_IDC_2";
    case STD_VIDEO_H264_CABAC_INIT_IDC_INVALID: return "STD_VIDEO_H264_CABAC_INIT_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264CabacInitIdc";
}

template <> std::string ToString<StdVideoH264ChromaFormatIdc>(const StdVideoH264ChromaFormatIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_CHROMA_FORMAT_IDC_MONOCHROME: return "STD_VIDEO_H264_CHROMA_FORMAT_IDC_MONOCHROME";
    case STD_VIDEO_H264_CHROMA_FORMAT_IDC_420: return "STD_VIDEO_H264_CHROMA_FORMAT_IDC_420";
    case STD_VIDEO_H264_CHROMA_FORMAT_IDC_422: return "STD_VIDEO_H264_CHROMA_FORMAT_IDC_422";
    case STD_VIDEO_H264_CHROMA_FORMAT_IDC_444: return "STD_VIDEO_H264_CHROMA_FORMAT_IDC_444";
    case STD_VIDEO_H264_CHROMA_FORMAT_IDC_INVALID: return "STD_VIDEO_H264_CHROMA_FORMAT_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264ChromaFormatIdc";
}

template <> std::string ToString<StdVideoH264DisableDeblockingFilterIdc>(const StdVideoH264DisableDeblockingFilterIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_DISABLED: return "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_DISABLED";
    case STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_ENABLED: return "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_ENABLED";
    case STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_PARTIAL: return "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_PARTIAL";
    case STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_INVALID: return "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264DisableDeblockingFilterIdc";
}

template <> std::string ToString<StdVideoH264LevelIdc>(const StdVideoH264LevelIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_LEVEL_IDC_1_0: return "STD_VIDEO_H264_LEVEL_IDC_1_0";
    case STD_VIDEO_H264_LEVEL_IDC_1_1: return "STD_VIDEO_H264_LEVEL_IDC_1_1";
    case STD_VIDEO_H264_LEVEL_IDC_1_2: return "STD_VIDEO_H264_LEVEL_IDC_1_2";
    case STD_VIDEO_H264_LEVEL_IDC_1_3: return "STD_VIDEO_H264_LEVEL_IDC_1_3";
    case STD_VIDEO_H264_LEVEL_IDC_2_0: return "STD_VIDEO_H264_LEVEL_IDC_2_0";
    case STD_VIDEO_H264_LEVEL_IDC_2_1: return "STD_VIDEO_H264_LEVEL_IDC_2_1";
    case STD_VIDEO_H264_LEVEL_IDC_2_2: return "STD_VIDEO_H264_LEVEL_IDC_2_2";
    case STD_VIDEO_H264_LEVEL_IDC_3_0: return "STD_VIDEO_H264_LEVEL_IDC_3_0";
    case STD_VIDEO_H264_LEVEL_IDC_3_1: return "STD_VIDEO_H264_LEVEL_IDC_3_1";
    case STD_VIDEO_H264_LEVEL_IDC_3_2: return "STD_VIDEO_H264_LEVEL_IDC_3_2";
    case STD_VIDEO_H264_LEVEL_IDC_4_0: return "STD_VIDEO_H264_LEVEL_IDC_4_0";
    case STD_VIDEO_H264_LEVEL_IDC_4_1: return "STD_VIDEO_H264_LEVEL_IDC_4_1";
    case STD_VIDEO_H264_LEVEL_IDC_4_2: return "STD_VIDEO_H264_LEVEL_IDC_4_2";
    case STD_VIDEO_H264_LEVEL_IDC_5_0: return "STD_VIDEO_H264_LEVEL_IDC_5_0";
    case STD_VIDEO_H264_LEVEL_IDC_5_1: return "STD_VIDEO_H264_LEVEL_IDC_5_1";
    case STD_VIDEO_H264_LEVEL_IDC_5_2: return "STD_VIDEO_H264_LEVEL_IDC_5_2";
    case STD_VIDEO_H264_LEVEL_IDC_6_0: return "STD_VIDEO_H264_LEVEL_IDC_6_0";
    case STD_VIDEO_H264_LEVEL_IDC_6_1: return "STD_VIDEO_H264_LEVEL_IDC_6_1";
    case STD_VIDEO_H264_LEVEL_IDC_6_2: return "STD_VIDEO_H264_LEVEL_IDC_6_2";
    case STD_VIDEO_H264_LEVEL_IDC_INVALID: return "STD_VIDEO_H264_LEVEL_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264LevelIdc";
}

template <> std::string ToString<StdVideoH264MemMgmtControlOp>(const StdVideoH264MemMgmtControlOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_END: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_END";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_SHORT_TERM: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_SHORT_TERM";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_LONG_TERM: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_LONG_TERM";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_MARK_LONG_TERM: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_MARK_LONG_TERM";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_SET_MAX_LONG_TERM_INDEX: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_SET_MAX_LONG_TERM_INDEX";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_ALL: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_ALL";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_MARK_CURRENT_AS_LONG_TERM: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_MARK_CURRENT_AS_LONG_TERM";
    case STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_INVALID: return "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264MemMgmtControlOp";
}

template <> std::string ToString<StdVideoH264ModificationOfPicNumsIdc>(const StdVideoH264ModificationOfPicNumsIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_SHORT_TERM_SUBTRACT: return "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_SHORT_TERM_SUBTRACT";
    case STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_SHORT_TERM_ADD: return "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_SHORT_TERM_ADD";
    case STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_LONG_TERM: return "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_LONG_TERM";
    case STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_END: return "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_END";
    case STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_INVALID: return "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264ModificationOfPicNumsIdc";
}

template <> std::string ToString<StdVideoH264NonVclNaluType>(const StdVideoH264NonVclNaluType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_SPS: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_SPS";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_PPS: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_PPS";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_AUD: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_AUD";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_PREFIX: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_PREFIX";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_END_OF_SEQUENCE: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_END_OF_SEQUENCE";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_END_OF_STREAM: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_END_OF_STREAM";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_PRECODED: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_PRECODED";
    case STD_VIDEO_H264_NON_VCL_NALU_TYPE_INVALID: return "STD_VIDEO_H264_NON_VCL_NALU_TYPE_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264NonVclNaluType";
}

template <> std::string ToString<StdVideoH264PictureType>(const StdVideoH264PictureType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_PICTURE_TYPE_P: return "STD_VIDEO_H264_PICTURE_TYPE_P";
    case STD_VIDEO_H264_PICTURE_TYPE_B: return "STD_VIDEO_H264_PICTURE_TYPE_B";
    case STD_VIDEO_H264_PICTURE_TYPE_I: return "STD_VIDEO_H264_PICTURE_TYPE_I";
    case STD_VIDEO_H264_PICTURE_TYPE_IDR: return "STD_VIDEO_H264_PICTURE_TYPE_IDR";
    case STD_VIDEO_H264_PICTURE_TYPE_INVALID: return "STD_VIDEO_H264_PICTURE_TYPE_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264PictureType";
}

template <> std::string ToString<StdVideoH264PocType>(const StdVideoH264PocType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_POC_TYPE_0: return "STD_VIDEO_H264_POC_TYPE_0";
    case STD_VIDEO_H264_POC_TYPE_1: return "STD_VIDEO_H264_POC_TYPE_1";
    case STD_VIDEO_H264_POC_TYPE_2: return "STD_VIDEO_H264_POC_TYPE_2";
    case STD_VIDEO_H264_POC_TYPE_INVALID: return "STD_VIDEO_H264_POC_TYPE_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264PocType";
}

template <> std::string ToString<StdVideoH264ProfileIdc>(const StdVideoH264ProfileIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_PROFILE_IDC_BASELINE: return "STD_VIDEO_H264_PROFILE_IDC_BASELINE";
    case STD_VIDEO_H264_PROFILE_IDC_MAIN: return "STD_VIDEO_H264_PROFILE_IDC_MAIN";
    case STD_VIDEO_H264_PROFILE_IDC_HIGH: return "STD_VIDEO_H264_PROFILE_IDC_HIGH";
    case STD_VIDEO_H264_PROFILE_IDC_HIGH_444_PREDICTIVE: return "STD_VIDEO_H264_PROFILE_IDC_HIGH_444_PREDICTIVE";
    case STD_VIDEO_H264_PROFILE_IDC_INVALID: return "STD_VIDEO_H264_PROFILE_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264ProfileIdc";
}

template <> std::string ToString<StdVideoH264SliceType>(const StdVideoH264SliceType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_SLICE_TYPE_P: return "STD_VIDEO_H264_SLICE_TYPE_P";
    case STD_VIDEO_H264_SLICE_TYPE_B: return "STD_VIDEO_H264_SLICE_TYPE_B";
    case STD_VIDEO_H264_SLICE_TYPE_I: return "STD_VIDEO_H264_SLICE_TYPE_I";
    case STD_VIDEO_H264_SLICE_TYPE_INVALID: return "STD_VIDEO_H264_SLICE_TYPE_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264SliceType";
}

template <> std::string ToString<StdVideoH264WeightedBipredIdc>(const StdVideoH264WeightedBipredIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_DEFAULT: return "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_DEFAULT";
    case STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_EXPLICIT: return "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_EXPLICIT";
    case STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_IMPLICIT: return "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_IMPLICIT";
    case STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_INVALID: return "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH264WeightedBipredIdc";
}

template <> std::string ToString<StdVideoH265AspectRatioIdc>(const StdVideoH265AspectRatioIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_UNSPECIFIED: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_UNSPECIFIED";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_SQUARE: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_SQUARE";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_12_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_12_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_10_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_10_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_16_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_16_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_40_33: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_40_33";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_24_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_24_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_20_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_20_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_32_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_32_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_80_33: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_80_33";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_18_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_18_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_15_11: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_15_11";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_64_33: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_64_33";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_160_99: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_160_99";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_4_3: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_4_3";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_3_2: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_3_2";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_2_1: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_2_1";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_EXTENDED_SAR: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_EXTENDED_SAR";
    case STD_VIDEO_H265_ASPECT_RATIO_IDC_INVALID: return "STD_VIDEO_H265_ASPECT_RATIO_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH265AspectRatioIdc";
}

template <> std::string ToString<StdVideoH265ChromaFormatIdc>(const StdVideoH265ChromaFormatIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H265_CHROMA_FORMAT_IDC_MONOCHROME: return "STD_VIDEO_H265_CHROMA_FORMAT_IDC_MONOCHROME";
    case STD_VIDEO_H265_CHROMA_FORMAT_IDC_420: return "STD_VIDEO_H265_CHROMA_FORMAT_IDC_420";
    case STD_VIDEO_H265_CHROMA_FORMAT_IDC_422: return "STD_VIDEO_H265_CHROMA_FORMAT_IDC_422";
    case STD_VIDEO_H265_CHROMA_FORMAT_IDC_444: return "STD_VIDEO_H265_CHROMA_FORMAT_IDC_444";
    case STD_VIDEO_H265_CHROMA_FORMAT_IDC_INVALID: return "STD_VIDEO_H265_CHROMA_FORMAT_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH265ChromaFormatIdc";
}

template <> std::string ToString<StdVideoH265LevelIdc>(const StdVideoH265LevelIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H265_LEVEL_IDC_1_0: return "STD_VIDEO_H265_LEVEL_IDC_1_0";
    case STD_VIDEO_H265_LEVEL_IDC_2_0: return "STD_VIDEO_H265_LEVEL_IDC_2_0";
    case STD_VIDEO_H265_LEVEL_IDC_2_1: return "STD_VIDEO_H265_LEVEL_IDC_2_1";
    case STD_VIDEO_H265_LEVEL_IDC_3_0: return "STD_VIDEO_H265_LEVEL_IDC_3_0";
    case STD_VIDEO_H265_LEVEL_IDC_3_1: return "STD_VIDEO_H265_LEVEL_IDC_3_1";
    case STD_VIDEO_H265_LEVEL_IDC_4_0: return "STD_VIDEO_H265_LEVEL_IDC_4_0";
    case STD_VIDEO_H265_LEVEL_IDC_4_1: return "STD_VIDEO_H265_LEVEL_IDC_4_1";
    case STD_VIDEO_H265_LEVEL_IDC_5_0: return "STD_VIDEO_H265_LEVEL_IDC_5_0";
    case STD_VIDEO_H265_LEVEL_IDC_5_1: return "STD_VIDEO_H265_LEVEL_IDC_5_1";
    case STD_VIDEO_H265_LEVEL_IDC_5_2: return "STD_VIDEO_H265_LEVEL_IDC_5_2";
    case STD_VIDEO_H265_LEVEL_IDC_6_0: return "STD_VIDEO_H265_LEVEL_IDC_6_0";
    case STD_VIDEO_H265_LEVEL_IDC_6_1: return "STD_VIDEO_H265_LEVEL_IDC_6_1";
    case STD_VIDEO_H265_LEVEL_IDC_6_2: return "STD_VIDEO_H265_LEVEL_IDC_6_2";
    case STD_VIDEO_H265_LEVEL_IDC_INVALID: return "STD_VIDEO_H265_LEVEL_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH265LevelIdc";
}

template <> std::string ToString<StdVideoH265PictureType>(const StdVideoH265PictureType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H265_PICTURE_TYPE_P: return "STD_VIDEO_H265_PICTURE_TYPE_P";
    case STD_VIDEO_H265_PICTURE_TYPE_B: return "STD_VIDEO_H265_PICTURE_TYPE_B";
    case STD_VIDEO_H265_PICTURE_TYPE_I: return "STD_VIDEO_H265_PICTURE_TYPE_I";
    case STD_VIDEO_H265_PICTURE_TYPE_IDR: return "STD_VIDEO_H265_PICTURE_TYPE_IDR";
    case STD_VIDEO_H265_PICTURE_TYPE_INVALID: return "STD_VIDEO_H265_PICTURE_TYPE_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH265PictureType";
}

template <> std::string ToString<StdVideoH265ProfileIdc>(const StdVideoH265ProfileIdc& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H265_PROFILE_IDC_MAIN: return "STD_VIDEO_H265_PROFILE_IDC_MAIN";
    case STD_VIDEO_H265_PROFILE_IDC_MAIN_10: return "STD_VIDEO_H265_PROFILE_IDC_MAIN_10";
    case STD_VIDEO_H265_PROFILE_IDC_MAIN_STILL_PICTURE: return "STD_VIDEO_H265_PROFILE_IDC_MAIN_STILL_PICTURE";
    case STD_VIDEO_H265_PROFILE_IDC_FORMAT_RANGE_EXTENSIONS: return "STD_VIDEO_H265_PROFILE_IDC_FORMAT_RANGE_EXTENSIONS";
    case STD_VIDEO_H265_PROFILE_IDC_SCC_EXTENSIONS: return "STD_VIDEO_H265_PROFILE_IDC_SCC_EXTENSIONS";
    case STD_VIDEO_H265_PROFILE_IDC_INVALID: return "STD_VIDEO_H265_PROFILE_IDC_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH265ProfileIdc";
}

template <> std::string ToString<StdVideoH265SliceType>(const StdVideoH265SliceType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case STD_VIDEO_H265_SLICE_TYPE_B: return "STD_VIDEO_H265_SLICE_TYPE_B";
    case STD_VIDEO_H265_SLICE_TYPE_P: return "STD_VIDEO_H265_SLICE_TYPE_P";
    case STD_VIDEO_H265_SLICE_TYPE_I: return "STD_VIDEO_H265_SLICE_TYPE_I";
    case STD_VIDEO_H265_SLICE_TYPE_INVALID: return "STD_VIDEO_H265_SLICE_TYPE_INVALID";
    default: break;
    }
    return "Unhandled StdVideoH265SliceType";
}

template <> std::string ToString<VkAccessFlagBits>(const VkAccessFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCESS_INDIRECT_COMMAND_READ_BIT: return "VK_ACCESS_INDIRECT_COMMAND_READ_BIT";
    case VK_ACCESS_INDEX_READ_BIT: return "VK_ACCESS_INDEX_READ_BIT";
    case VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT: return "VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT";
    case VK_ACCESS_UNIFORM_READ_BIT: return "VK_ACCESS_UNIFORM_READ_BIT";
    case VK_ACCESS_INPUT_ATTACHMENT_READ_BIT: return "VK_ACCESS_INPUT_ATTACHMENT_READ_BIT";
    case VK_ACCESS_SHADER_READ_BIT: return "VK_ACCESS_SHADER_READ_BIT";
    case VK_ACCESS_SHADER_WRITE_BIT: return "VK_ACCESS_SHADER_WRITE_BIT";
    case VK_ACCESS_COLOR_ATTACHMENT_READ_BIT: return "VK_ACCESS_COLOR_ATTACHMENT_READ_BIT";
    case VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT: return "VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT";
    case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT: return "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT";
    case VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT: return "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT";
    case VK_ACCESS_TRANSFER_READ_BIT: return "VK_ACCESS_TRANSFER_READ_BIT";
    case VK_ACCESS_TRANSFER_WRITE_BIT: return "VK_ACCESS_TRANSFER_WRITE_BIT";
    case VK_ACCESS_HOST_READ_BIT: return "VK_ACCESS_HOST_READ_BIT";
    case VK_ACCESS_HOST_WRITE_BIT: return "VK_ACCESS_HOST_WRITE_BIT";
    case VK_ACCESS_MEMORY_READ_BIT: return "VK_ACCESS_MEMORY_READ_BIT";
    case VK_ACCESS_MEMORY_WRITE_BIT: return "VK_ACCESS_MEMORY_WRITE_BIT";
    case VK_ACCESS_NONE: return "VK_ACCESS_NONE";
    case VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT: return "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT";
    case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT: return "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT";
    case VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT: return "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT";
    case VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT: return "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT";
    case VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT: return "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT";
    case VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR: return "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR";
    case VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR: return "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR";
    case VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT: return "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT";
    case VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR: return "VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR";
    case VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV: return "VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV";
    case VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV: return "VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV";
    default: break;
    }
    return "Unhandled VkAccessFlagBits";
}

template <> std::string ToString<VkAccessFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkAccessFlagBits>(vkFlags);
}

template <> std::string ToString<VkAttachmentDescriptionFlagBits>(const VkAttachmentDescriptionFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT: return "VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT";
    default: break;
    }
    return "Unhandled VkAttachmentDescriptionFlagBits";
}

template <> std::string ToString<VkAttachmentDescriptionFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkAttachmentDescriptionFlagBits>(vkFlags);
}

template <> std::string ToString<VkAttachmentLoadOp>(const VkAttachmentLoadOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ATTACHMENT_LOAD_OP_LOAD: return "VK_ATTACHMENT_LOAD_OP_LOAD";
    case VK_ATTACHMENT_LOAD_OP_CLEAR: return "VK_ATTACHMENT_LOAD_OP_CLEAR";
    case VK_ATTACHMENT_LOAD_OP_DONT_CARE: return "VK_ATTACHMENT_LOAD_OP_DONT_CARE";
    case VK_ATTACHMENT_LOAD_OP_NONE_EXT: return "VK_ATTACHMENT_LOAD_OP_NONE_EXT";
    default: break;
    }
    return "Unhandled VkAttachmentLoadOp";
}

template <> std::string ToString<VkAttachmentStoreOp>(const VkAttachmentStoreOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ATTACHMENT_STORE_OP_STORE: return "VK_ATTACHMENT_STORE_OP_STORE";
    case VK_ATTACHMENT_STORE_OP_DONT_CARE: return "VK_ATTACHMENT_STORE_OP_DONT_CARE";
    case VK_ATTACHMENT_STORE_OP_NONE: return "VK_ATTACHMENT_STORE_OP_NONE";
    default: break;
    }
    return "Unhandled VkAttachmentStoreOp";
}

template <> std::string ToString<VkBlendFactor>(const VkBlendFactor& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BLEND_FACTOR_ZERO: return "VK_BLEND_FACTOR_ZERO";
    case VK_BLEND_FACTOR_ONE: return "VK_BLEND_FACTOR_ONE";
    case VK_BLEND_FACTOR_SRC_COLOR: return "VK_BLEND_FACTOR_SRC_COLOR";
    case VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR: return "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR";
    case VK_BLEND_FACTOR_DST_COLOR: return "VK_BLEND_FACTOR_DST_COLOR";
    case VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR: return "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR";
    case VK_BLEND_FACTOR_SRC_ALPHA: return "VK_BLEND_FACTOR_SRC_ALPHA";
    case VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA: return "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA";
    case VK_BLEND_FACTOR_DST_ALPHA: return "VK_BLEND_FACTOR_DST_ALPHA";
    case VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA: return "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA";
    case VK_BLEND_FACTOR_CONSTANT_COLOR: return "VK_BLEND_FACTOR_CONSTANT_COLOR";
    case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR: return "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR";
    case VK_BLEND_FACTOR_CONSTANT_ALPHA: return "VK_BLEND_FACTOR_CONSTANT_ALPHA";
    case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA: return "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA";
    case VK_BLEND_FACTOR_SRC_ALPHA_SATURATE: return "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE";
    case VK_BLEND_FACTOR_SRC1_COLOR: return "VK_BLEND_FACTOR_SRC1_COLOR";
    case VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR: return "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR";
    case VK_BLEND_FACTOR_SRC1_ALPHA: return "VK_BLEND_FACTOR_SRC1_ALPHA";
    case VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA: return "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA";
    default: break;
    }
    return "Unhandled VkBlendFactor";
}

template <> std::string ToString<VkBlendOp>(const VkBlendOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BLEND_OP_ADD: return "VK_BLEND_OP_ADD";
    case VK_BLEND_OP_SUBTRACT: return "VK_BLEND_OP_SUBTRACT";
    case VK_BLEND_OP_REVERSE_SUBTRACT: return "VK_BLEND_OP_REVERSE_SUBTRACT";
    case VK_BLEND_OP_MIN: return "VK_BLEND_OP_MIN";
    case VK_BLEND_OP_MAX: return "VK_BLEND_OP_MAX";
    case VK_BLEND_OP_ZERO_EXT: return "VK_BLEND_OP_ZERO_EXT";
    case VK_BLEND_OP_SRC_EXT: return "VK_BLEND_OP_SRC_EXT";
    case VK_BLEND_OP_DST_EXT: return "VK_BLEND_OP_DST_EXT";
    case VK_BLEND_OP_SRC_OVER_EXT: return "VK_BLEND_OP_SRC_OVER_EXT";
    case VK_BLEND_OP_DST_OVER_EXT: return "VK_BLEND_OP_DST_OVER_EXT";
    case VK_BLEND_OP_SRC_IN_EXT: return "VK_BLEND_OP_SRC_IN_EXT";
    case VK_BLEND_OP_DST_IN_EXT: return "VK_BLEND_OP_DST_IN_EXT";
    case VK_BLEND_OP_SRC_OUT_EXT: return "VK_BLEND_OP_SRC_OUT_EXT";
    case VK_BLEND_OP_DST_OUT_EXT: return "VK_BLEND_OP_DST_OUT_EXT";
    case VK_BLEND_OP_SRC_ATOP_EXT: return "VK_BLEND_OP_SRC_ATOP_EXT";
    case VK_BLEND_OP_DST_ATOP_EXT: return "VK_BLEND_OP_DST_ATOP_EXT";
    case VK_BLEND_OP_XOR_EXT: return "VK_BLEND_OP_XOR_EXT";
    case VK_BLEND_OP_MULTIPLY_EXT: return "VK_BLEND_OP_MULTIPLY_EXT";
    case VK_BLEND_OP_SCREEN_EXT: return "VK_BLEND_OP_SCREEN_EXT";
    case VK_BLEND_OP_OVERLAY_EXT: return "VK_BLEND_OP_OVERLAY_EXT";
    case VK_BLEND_OP_DARKEN_EXT: return "VK_BLEND_OP_DARKEN_EXT";
    case VK_BLEND_OP_LIGHTEN_EXT: return "VK_BLEND_OP_LIGHTEN_EXT";
    case VK_BLEND_OP_COLORDODGE_EXT: return "VK_BLEND_OP_COLORDODGE_EXT";
    case VK_BLEND_OP_COLORBURN_EXT: return "VK_BLEND_OP_COLORBURN_EXT";
    case VK_BLEND_OP_HARDLIGHT_EXT: return "VK_BLEND_OP_HARDLIGHT_EXT";
    case VK_BLEND_OP_SOFTLIGHT_EXT: return "VK_BLEND_OP_SOFTLIGHT_EXT";
    case VK_BLEND_OP_DIFFERENCE_EXT: return "VK_BLEND_OP_DIFFERENCE_EXT";
    case VK_BLEND_OP_EXCLUSION_EXT: return "VK_BLEND_OP_EXCLUSION_EXT";
    case VK_BLEND_OP_INVERT_EXT: return "VK_BLEND_OP_INVERT_EXT";
    case VK_BLEND_OP_INVERT_RGB_EXT: return "VK_BLEND_OP_INVERT_RGB_EXT";
    case VK_BLEND_OP_LINEARDODGE_EXT: return "VK_BLEND_OP_LINEARDODGE_EXT";
    case VK_BLEND_OP_LINEARBURN_EXT: return "VK_BLEND_OP_LINEARBURN_EXT";
    case VK_BLEND_OP_VIVIDLIGHT_EXT: return "VK_BLEND_OP_VIVIDLIGHT_EXT";
    case VK_BLEND_OP_LINEARLIGHT_EXT: return "VK_BLEND_OP_LINEARLIGHT_EXT";
    case VK_BLEND_OP_PINLIGHT_EXT: return "VK_BLEND_OP_PINLIGHT_EXT";
    case VK_BLEND_OP_HARDMIX_EXT: return "VK_BLEND_OP_HARDMIX_EXT";
    case VK_BLEND_OP_HSL_HUE_EXT: return "VK_BLEND_OP_HSL_HUE_EXT";
    case VK_BLEND_OP_HSL_SATURATION_EXT: return "VK_BLEND_OP_HSL_SATURATION_EXT";
    case VK_BLEND_OP_HSL_COLOR_EXT: return "VK_BLEND_OP_HSL_COLOR_EXT";
    case VK_BLEND_OP_HSL_LUMINOSITY_EXT: return "VK_BLEND_OP_HSL_LUMINOSITY_EXT";
    case VK_BLEND_OP_PLUS_EXT: return "VK_BLEND_OP_PLUS_EXT";
    case VK_BLEND_OP_PLUS_CLAMPED_EXT: return "VK_BLEND_OP_PLUS_CLAMPED_EXT";
    case VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT: return "VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT";
    case VK_BLEND_OP_PLUS_DARKER_EXT: return "VK_BLEND_OP_PLUS_DARKER_EXT";
    case VK_BLEND_OP_MINUS_EXT: return "VK_BLEND_OP_MINUS_EXT";
    case VK_BLEND_OP_MINUS_CLAMPED_EXT: return "VK_BLEND_OP_MINUS_CLAMPED_EXT";
    case VK_BLEND_OP_CONTRAST_EXT: return "VK_BLEND_OP_CONTRAST_EXT";
    case VK_BLEND_OP_INVERT_OVG_EXT: return "VK_BLEND_OP_INVERT_OVG_EXT";
    case VK_BLEND_OP_RED_EXT: return "VK_BLEND_OP_RED_EXT";
    case VK_BLEND_OP_GREEN_EXT: return "VK_BLEND_OP_GREEN_EXT";
    case VK_BLEND_OP_BLUE_EXT: return "VK_BLEND_OP_BLUE_EXT";
    default: break;
    }
    return "Unhandled VkBlendOp";
}

template <> std::string ToString<VkBorderColor>(const VkBorderColor& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK: return "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK";
    case VK_BORDER_COLOR_INT_TRANSPARENT_BLACK: return "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK";
    case VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK: return "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK";
    case VK_BORDER_COLOR_INT_OPAQUE_BLACK: return "VK_BORDER_COLOR_INT_OPAQUE_BLACK";
    case VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE: return "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE";
    case VK_BORDER_COLOR_INT_OPAQUE_WHITE: return "VK_BORDER_COLOR_INT_OPAQUE_WHITE";
    case VK_BORDER_COLOR_FLOAT_CUSTOM_EXT: return "VK_BORDER_COLOR_FLOAT_CUSTOM_EXT";
    case VK_BORDER_COLOR_INT_CUSTOM_EXT: return "VK_BORDER_COLOR_INT_CUSTOM_EXT";
    default: break;
    }
    return "Unhandled VkBorderColor";
}

template <> std::string ToString<VkBufferCreateFlagBits>(const VkBufferCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BUFFER_CREATE_SPARSE_BINDING_BIT: return "VK_BUFFER_CREATE_SPARSE_BINDING_BIT";
    case VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT: return "VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT";
    case VK_BUFFER_CREATE_SPARSE_ALIASED_BIT: return "VK_BUFFER_CREATE_SPARSE_ALIASED_BIT";
    case VK_BUFFER_CREATE_PROTECTED_BIT: return "VK_BUFFER_CREATE_PROTECTED_BIT";
    case VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT: return "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT";
    case VK_BUFFER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT: return "VK_BUFFER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
    default: break;
    }
    return "Unhandled VkBufferCreateFlagBits";
}

template <> std::string ToString<VkBufferCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkBufferCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkBufferUsageFlagBits>(const VkBufferUsageFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BUFFER_USAGE_TRANSFER_SRC_BIT: return "VK_BUFFER_USAGE_TRANSFER_SRC_BIT";
    case VK_BUFFER_USAGE_TRANSFER_DST_BIT: return "VK_BUFFER_USAGE_TRANSFER_DST_BIT";
    case VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT: return "VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT";
    case VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT: return "VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT";
    case VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT: return "VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT";
    case VK_BUFFER_USAGE_STORAGE_BUFFER_BIT: return "VK_BUFFER_USAGE_STORAGE_BUFFER_BIT";
    case VK_BUFFER_USAGE_INDEX_BUFFER_BIT: return "VK_BUFFER_USAGE_INDEX_BUFFER_BIT";
    case VK_BUFFER_USAGE_VERTEX_BUFFER_BIT: return "VK_BUFFER_USAGE_VERTEX_BUFFER_BIT";
    case VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT: return "VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT";
    case VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT: return "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT";
    case VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR: return "VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR";
    case VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR: return "VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR";
    case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT: return "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT";
    case VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT: return "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT";
    case VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT: return "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT";
    case VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR: return "VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR";
    case VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR: return "VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR";
    case VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR: return "VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR";
    case VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR: return "VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR";
    case VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR: return "VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR";
    case VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT: return "VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT";
    case VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT: return "VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT";
    case VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT: return "VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT";
    case VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT: return "VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT";
    case VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT: return "VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT";
    default: break;
    }
    return "Unhandled VkBufferUsageFlagBits";
}

template <> std::string ToString<VkBufferUsageFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkBufferUsageFlagBits>(vkFlags);
}

template <> std::string ToString<VkColorComponentFlagBits>(const VkColorComponentFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COLOR_COMPONENT_R_BIT: return "VK_COLOR_COMPONENT_R_BIT";
    case VK_COLOR_COMPONENT_G_BIT: return "VK_COLOR_COMPONENT_G_BIT";
    case VK_COLOR_COMPONENT_B_BIT: return "VK_COLOR_COMPONENT_B_BIT";
    case VK_COLOR_COMPONENT_A_BIT: return "VK_COLOR_COMPONENT_A_BIT";
    default: break;
    }
    return "Unhandled VkColorComponentFlagBits";
}

template <> std::string ToString<VkColorComponentFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkColorComponentFlagBits>(vkFlags);
}

template <> std::string ToString<VkCommandBufferLevel>(const VkCommandBufferLevel& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMMAND_BUFFER_LEVEL_PRIMARY: return "VK_COMMAND_BUFFER_LEVEL_PRIMARY";
    case VK_COMMAND_BUFFER_LEVEL_SECONDARY: return "VK_COMMAND_BUFFER_LEVEL_SECONDARY";
    default: break;
    }
    return "Unhandled VkCommandBufferLevel";
}

template <> std::string ToString<VkCommandBufferResetFlagBits>(const VkCommandBufferResetFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT: return "VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT";
    default: break;
    }
    return "Unhandled VkCommandBufferResetFlagBits";
}

template <> std::string ToString<VkCommandBufferResetFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkCommandBufferResetFlagBits>(vkFlags);
}

template <> std::string ToString<VkCommandBufferUsageFlagBits>(const VkCommandBufferUsageFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT: return "VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT";
    case VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT: return "VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT";
    case VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT: return "VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT";
    default: break;
    }
    return "Unhandled VkCommandBufferUsageFlagBits";
}

template <> std::string ToString<VkCommandBufferUsageFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkCommandBufferUsageFlagBits>(vkFlags);
}

template <> std::string ToString<VkCommandPoolCreateFlagBits>(const VkCommandPoolCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMMAND_POOL_CREATE_TRANSIENT_BIT: return "VK_COMMAND_POOL_CREATE_TRANSIENT_BIT";
    case VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT: return "VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT";
    case VK_COMMAND_POOL_CREATE_PROTECTED_BIT: return "VK_COMMAND_POOL_CREATE_PROTECTED_BIT";
    default: break;
    }
    return "Unhandled VkCommandPoolCreateFlagBits";
}

template <> std::string ToString<VkCommandPoolCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkCommandPoolCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkCommandPoolResetFlagBits>(const VkCommandPoolResetFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT: return "VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT";
    default: break;
    }
    return "Unhandled VkCommandPoolResetFlagBits";
}

template <> std::string ToString<VkCommandPoolResetFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkCommandPoolResetFlagBits>(vkFlags);
}

template <> std::string ToString<VkCompareOp>(const VkCompareOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMPARE_OP_NEVER: return "VK_COMPARE_OP_NEVER";
    case VK_COMPARE_OP_LESS: return "VK_COMPARE_OP_LESS";
    case VK_COMPARE_OP_EQUAL: return "VK_COMPARE_OP_EQUAL";
    case VK_COMPARE_OP_LESS_OR_EQUAL: return "VK_COMPARE_OP_LESS_OR_EQUAL";
    case VK_COMPARE_OP_GREATER: return "VK_COMPARE_OP_GREATER";
    case VK_COMPARE_OP_NOT_EQUAL: return "VK_COMPARE_OP_NOT_EQUAL";
    case VK_COMPARE_OP_GREATER_OR_EQUAL: return "VK_COMPARE_OP_GREATER_OR_EQUAL";
    case VK_COMPARE_OP_ALWAYS: return "VK_COMPARE_OP_ALWAYS";
    default: break;
    }
    return "Unhandled VkCompareOp";
}

template <> std::string ToString<VkComponentSwizzle>(const VkComponentSwizzle& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMPONENT_SWIZZLE_IDENTITY: return "VK_COMPONENT_SWIZZLE_IDENTITY";
    case VK_COMPONENT_SWIZZLE_ZERO: return "VK_COMPONENT_SWIZZLE_ZERO";
    case VK_COMPONENT_SWIZZLE_ONE: return "VK_COMPONENT_SWIZZLE_ONE";
    case VK_COMPONENT_SWIZZLE_R: return "VK_COMPONENT_SWIZZLE_R";
    case VK_COMPONENT_SWIZZLE_G: return "VK_COMPONENT_SWIZZLE_G";
    case VK_COMPONENT_SWIZZLE_B: return "VK_COMPONENT_SWIZZLE_B";
    case VK_COMPONENT_SWIZZLE_A: return "VK_COMPONENT_SWIZZLE_A";
    default: break;
    }
    return "Unhandled VkComponentSwizzle";
}

template <> std::string ToString<VkCullModeFlagBits>(const VkCullModeFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_CULL_MODE_NONE: return "VK_CULL_MODE_NONE";
    case VK_CULL_MODE_FRONT_BIT: return "VK_CULL_MODE_FRONT_BIT";
    case VK_CULL_MODE_BACK_BIT: return "VK_CULL_MODE_BACK_BIT";
    case VK_CULL_MODE_FRONT_AND_BACK: return "VK_CULL_MODE_FRONT_AND_BACK";
    default: break;
    }
    return "Unhandled VkCullModeFlagBits";
}

template <> std::string ToString<VkCullModeFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkCullModeFlagBits>(vkFlags);
}

template <> std::string ToString<VkDependencyFlagBits>(const VkDependencyFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEPENDENCY_BY_REGION_BIT: return "VK_DEPENDENCY_BY_REGION_BIT";
    case VK_DEPENDENCY_DEVICE_GROUP_BIT: return "VK_DEPENDENCY_DEVICE_GROUP_BIT";
    case VK_DEPENDENCY_VIEW_LOCAL_BIT: return "VK_DEPENDENCY_VIEW_LOCAL_BIT";
    case VK_DEPENDENCY_FEEDBACK_LOOP_BIT_EXT: return "VK_DEPENDENCY_FEEDBACK_LOOP_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDependencyFlagBits";
}

template <> std::string ToString<VkDependencyFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDependencyFlagBits>(vkFlags);
}

template <> std::string ToString<VkDescriptorPoolCreateFlagBits>(const VkDescriptorPoolCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT: return "VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT";
    case VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT: return "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT";
    case VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_EXT: return "VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDescriptorPoolCreateFlagBits";
}

template <> std::string ToString<VkDescriptorPoolCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDescriptorPoolCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkDescriptorSetLayoutCreateFlagBits>(const VkDescriptorSetLayoutCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT: return "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT";
    case VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR: return "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR";
    case VK_DESCRIPTOR_SET_LAYOUT_CREATE_DESCRIPTOR_BUFFER_BIT_EXT: return "VK_DESCRIPTOR_SET_LAYOUT_CREATE_DESCRIPTOR_BUFFER_BIT_EXT";
    case VK_DESCRIPTOR_SET_LAYOUT_CREATE_EMBEDDED_IMMUTABLE_SAMPLERS_BIT_EXT: return "VK_DESCRIPTOR_SET_LAYOUT_CREATE_EMBEDDED_IMMUTABLE_SAMPLERS_BIT_EXT";
    case VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT: return "VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDescriptorSetLayoutCreateFlagBits";
}

template <> std::string ToString<VkDescriptorSetLayoutCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDescriptorSetLayoutCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkDescriptorType>(const VkDescriptorType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DESCRIPTOR_TYPE_SAMPLER: return "VK_DESCRIPTOR_TYPE_SAMPLER";
    case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER: return "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER";
    case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE: return "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE";
    case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE: return "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE";
    case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER: return "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER";
    case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER: return "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER";
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER: return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER";
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER: return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER";
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC: return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC";
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC: return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC";
    case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT: return "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT";
    case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK: return "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK";
    case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR: return "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR";
    case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV: return "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV";
    case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM: return "VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM";
    case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM: return "VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM";
    case VK_DESCRIPTOR_TYPE_MUTABLE_EXT: return "VK_DESCRIPTOR_TYPE_MUTABLE_EXT";
    default: break;
    }
    return "Unhandled VkDescriptorType";
}

template <> std::string ToString<VkDeviceQueueCreateFlagBits>(const VkDeviceQueueCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT: return "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT";
    default: break;
    }
    return "Unhandled VkDeviceQueueCreateFlagBits";
}

template <> std::string ToString<VkDeviceQueueCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDeviceQueueCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkDynamicState>(const VkDynamicState& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DYNAMIC_STATE_VIEWPORT: return "VK_DYNAMIC_STATE_VIEWPORT";
    case VK_DYNAMIC_STATE_SCISSOR: return "VK_DYNAMIC_STATE_SCISSOR";
    case VK_DYNAMIC_STATE_LINE_WIDTH: return "VK_DYNAMIC_STATE_LINE_WIDTH";
    case VK_DYNAMIC_STATE_DEPTH_BIAS: return "VK_DYNAMIC_STATE_DEPTH_BIAS";
    case VK_DYNAMIC_STATE_BLEND_CONSTANTS: return "VK_DYNAMIC_STATE_BLEND_CONSTANTS";
    case VK_DYNAMIC_STATE_DEPTH_BOUNDS: return "VK_DYNAMIC_STATE_DEPTH_BOUNDS";
    case VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK: return "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK";
    case VK_DYNAMIC_STATE_STENCIL_WRITE_MASK: return "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK";
    case VK_DYNAMIC_STATE_STENCIL_REFERENCE: return "VK_DYNAMIC_STATE_STENCIL_REFERENCE";
    case VK_DYNAMIC_STATE_CULL_MODE: return "VK_DYNAMIC_STATE_CULL_MODE";
    case VK_DYNAMIC_STATE_FRONT_FACE: return "VK_DYNAMIC_STATE_FRONT_FACE";
    case VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY: return "VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY";
    case VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT: return "VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT";
    case VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT: return "VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT";
    case VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE: return "VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE";
    case VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE: return "VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE";
    case VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE: return "VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE";
    case VK_DYNAMIC_STATE_DEPTH_COMPARE_OP: return "VK_DYNAMIC_STATE_DEPTH_COMPARE_OP";
    case VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE: return "VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE";
    case VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE: return "VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE";
    case VK_DYNAMIC_STATE_STENCIL_OP: return "VK_DYNAMIC_STATE_STENCIL_OP";
    case VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE: return "VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE";
    case VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE: return "VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE";
    case VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE: return "VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE";
    case VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV: return "VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV";
    case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT: return "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT";
    case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_ENABLE_EXT: return "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_ENABLE_EXT";
    case VK_DYNAMIC_STATE_DISCARD_RECTANGLE_MODE_EXT: return "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_MODE_EXT";
    case VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT: return "VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT";
    case VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR: return "VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR";
    case VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV: return "VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV";
    case VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV: return "VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV";
    case VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_ENABLE_NV: return "VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_ENABLE_NV";
    case VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV: return "VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV";
    case VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR: return "VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR";
    case VK_DYNAMIC_STATE_LINE_STIPPLE_EXT: return "VK_DYNAMIC_STATE_LINE_STIPPLE_EXT";
    case VK_DYNAMIC_STATE_VERTEX_INPUT_EXT: return "VK_DYNAMIC_STATE_VERTEX_INPUT_EXT";
    case VK_DYNAMIC_STATE_PATCH_CONTROL_POINTS_EXT: return "VK_DYNAMIC_STATE_PATCH_CONTROL_POINTS_EXT";
    case VK_DYNAMIC_STATE_LOGIC_OP_EXT: return "VK_DYNAMIC_STATE_LOGIC_OP_EXT";
    case VK_DYNAMIC_STATE_COLOR_WRITE_ENABLE_EXT: return "VK_DYNAMIC_STATE_COLOR_WRITE_ENABLE_EXT";
    case VK_DYNAMIC_STATE_TESSELLATION_DOMAIN_ORIGIN_EXT: return "VK_DYNAMIC_STATE_TESSELLATION_DOMAIN_ORIGIN_EXT";
    case VK_DYNAMIC_STATE_DEPTH_CLAMP_ENABLE_EXT: return "VK_DYNAMIC_STATE_DEPTH_CLAMP_ENABLE_EXT";
    case VK_DYNAMIC_STATE_POLYGON_MODE_EXT: return "VK_DYNAMIC_STATE_POLYGON_MODE_EXT";
    case VK_DYNAMIC_STATE_RASTERIZATION_SAMPLES_EXT: return "VK_DYNAMIC_STATE_RASTERIZATION_SAMPLES_EXT";
    case VK_DYNAMIC_STATE_SAMPLE_MASK_EXT: return "VK_DYNAMIC_STATE_SAMPLE_MASK_EXT";
    case VK_DYNAMIC_STATE_ALPHA_TO_COVERAGE_ENABLE_EXT: return "VK_DYNAMIC_STATE_ALPHA_TO_COVERAGE_ENABLE_EXT";
    case VK_DYNAMIC_STATE_ALPHA_TO_ONE_ENABLE_EXT: return "VK_DYNAMIC_STATE_ALPHA_TO_ONE_ENABLE_EXT";
    case VK_DYNAMIC_STATE_LOGIC_OP_ENABLE_EXT: return "VK_DYNAMIC_STATE_LOGIC_OP_ENABLE_EXT";
    case VK_DYNAMIC_STATE_COLOR_BLEND_ENABLE_EXT: return "VK_DYNAMIC_STATE_COLOR_BLEND_ENABLE_EXT";
    case VK_DYNAMIC_STATE_COLOR_BLEND_EQUATION_EXT: return "VK_DYNAMIC_STATE_COLOR_BLEND_EQUATION_EXT";
    case VK_DYNAMIC_STATE_COLOR_WRITE_MASK_EXT: return "VK_DYNAMIC_STATE_COLOR_WRITE_MASK_EXT";
    case VK_DYNAMIC_STATE_RASTERIZATION_STREAM_EXT: return "VK_DYNAMIC_STATE_RASTERIZATION_STREAM_EXT";
    case VK_DYNAMIC_STATE_CONSERVATIVE_RASTERIZATION_MODE_EXT: return "VK_DYNAMIC_STATE_CONSERVATIVE_RASTERIZATION_MODE_EXT";
    case VK_DYNAMIC_STATE_EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT: return "VK_DYNAMIC_STATE_EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT";
    case VK_DYNAMIC_STATE_DEPTH_CLIP_ENABLE_EXT: return "VK_DYNAMIC_STATE_DEPTH_CLIP_ENABLE_EXT";
    case VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_ENABLE_EXT: return "VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_ENABLE_EXT";
    case VK_DYNAMIC_STATE_COLOR_BLEND_ADVANCED_EXT: return "VK_DYNAMIC_STATE_COLOR_BLEND_ADVANCED_EXT";
    case VK_DYNAMIC_STATE_PROVOKING_VERTEX_MODE_EXT: return "VK_DYNAMIC_STATE_PROVOKING_VERTEX_MODE_EXT";
    case VK_DYNAMIC_STATE_LINE_RASTERIZATION_MODE_EXT: return "VK_DYNAMIC_STATE_LINE_RASTERIZATION_MODE_EXT";
    case VK_DYNAMIC_STATE_LINE_STIPPLE_ENABLE_EXT: return "VK_DYNAMIC_STATE_LINE_STIPPLE_ENABLE_EXT";
    case VK_DYNAMIC_STATE_DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT: return "VK_DYNAMIC_STATE_DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT";
    case VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_ENABLE_NV: return "VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_ENABLE_NV";
    case VK_DYNAMIC_STATE_VIEWPORT_SWIZZLE_NV: return "VK_DYNAMIC_STATE_VIEWPORT_SWIZZLE_NV";
    case VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_ENABLE_NV: return "VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_ENABLE_NV";
    case VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_LOCATION_NV: return "VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_LOCATION_NV";
    case VK_DYNAMIC_STATE_COVERAGE_MODULATION_MODE_NV: return "VK_DYNAMIC_STATE_COVERAGE_MODULATION_MODE_NV";
    case VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_ENABLE_NV: return "VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_ENABLE_NV";
    case VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_NV: return "VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_NV";
    case VK_DYNAMIC_STATE_SHADING_RATE_IMAGE_ENABLE_NV: return "VK_DYNAMIC_STATE_SHADING_RATE_IMAGE_ENABLE_NV";
    case VK_DYNAMIC_STATE_REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV: return "VK_DYNAMIC_STATE_REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV";
    case VK_DYNAMIC_STATE_COVERAGE_REDUCTION_MODE_NV: return "VK_DYNAMIC_STATE_COVERAGE_REDUCTION_MODE_NV";
    default: break;
    }
    return "Unhandled VkDynamicState";
}

template <> std::string ToString<VkEventCreateFlagBits>(const VkEventCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EVENT_CREATE_DEVICE_ONLY_BIT: return "VK_EVENT_CREATE_DEVICE_ONLY_BIT";
    default: break;
    }
    return "Unhandled VkEventCreateFlagBits";
}

template <> std::string ToString<VkEventCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkEventCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkFenceCreateFlagBits>(const VkFenceCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FENCE_CREATE_SIGNALED_BIT: return "VK_FENCE_CREATE_SIGNALED_BIT";
    default: break;
    }
    return "Unhandled VkFenceCreateFlagBits";
}

template <> std::string ToString<VkFenceCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkFenceCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkFilter>(const VkFilter& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FILTER_NEAREST: return "VK_FILTER_NEAREST";
    case VK_FILTER_LINEAR: return "VK_FILTER_LINEAR";
    case VK_FILTER_CUBIC_EXT: return "VK_FILTER_CUBIC_EXT";
    default: break;
    }
    return "Unhandled VkFilter";
}

template <> std::string ToString<VkFormat>(const VkFormat& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FORMAT_UNDEFINED: return "VK_FORMAT_UNDEFINED";
    case VK_FORMAT_R4G4_UNORM_PACK8: return "VK_FORMAT_R4G4_UNORM_PACK8";
    case VK_FORMAT_R4G4B4A4_UNORM_PACK16: return "VK_FORMAT_R4G4B4A4_UNORM_PACK16";
    case VK_FORMAT_B4G4R4A4_UNORM_PACK16: return "VK_FORMAT_B4G4R4A4_UNORM_PACK16";
    case VK_FORMAT_R5G6B5_UNORM_PACK16: return "VK_FORMAT_R5G6B5_UNORM_PACK16";
    case VK_FORMAT_B5G6R5_UNORM_PACK16: return "VK_FORMAT_B5G6R5_UNORM_PACK16";
    case VK_FORMAT_R5G5B5A1_UNORM_PACK16: return "VK_FORMAT_R5G5B5A1_UNORM_PACK16";
    case VK_FORMAT_B5G5R5A1_UNORM_PACK16: return "VK_FORMAT_B5G5R5A1_UNORM_PACK16";
    case VK_FORMAT_A1R5G5B5_UNORM_PACK16: return "VK_FORMAT_A1R5G5B5_UNORM_PACK16";
    case VK_FORMAT_R8_UNORM: return "VK_FORMAT_R8_UNORM";
    case VK_FORMAT_R8_SNORM: return "VK_FORMAT_R8_SNORM";
    case VK_FORMAT_R8_USCALED: return "VK_FORMAT_R8_USCALED";
    case VK_FORMAT_R8_SSCALED: return "VK_FORMAT_R8_SSCALED";
    case VK_FORMAT_R8_UINT: return "VK_FORMAT_R8_UINT";
    case VK_FORMAT_R8_SINT: return "VK_FORMAT_R8_SINT";
    case VK_FORMAT_R8_SRGB: return "VK_FORMAT_R8_SRGB";
    case VK_FORMAT_R8G8_UNORM: return "VK_FORMAT_R8G8_UNORM";
    case VK_FORMAT_R8G8_SNORM: return "VK_FORMAT_R8G8_SNORM";
    case VK_FORMAT_R8G8_USCALED: return "VK_FORMAT_R8G8_USCALED";
    case VK_FORMAT_R8G8_SSCALED: return "VK_FORMAT_R8G8_SSCALED";
    case VK_FORMAT_R8G8_UINT: return "VK_FORMAT_R8G8_UINT";
    case VK_FORMAT_R8G8_SINT: return "VK_FORMAT_R8G8_SINT";
    case VK_FORMAT_R8G8_SRGB: return "VK_FORMAT_R8G8_SRGB";
    case VK_FORMAT_R8G8B8_UNORM: return "VK_FORMAT_R8G8B8_UNORM";
    case VK_FORMAT_R8G8B8_SNORM: return "VK_FORMAT_R8G8B8_SNORM";
    case VK_FORMAT_R8G8B8_USCALED: return "VK_FORMAT_R8G8B8_USCALED";
    case VK_FORMAT_R8G8B8_SSCALED: return "VK_FORMAT_R8G8B8_SSCALED";
    case VK_FORMAT_R8G8B8_UINT: return "VK_FORMAT_R8G8B8_UINT";
    case VK_FORMAT_R8G8B8_SINT: return "VK_FORMAT_R8G8B8_SINT";
    case VK_FORMAT_R8G8B8_SRGB: return "VK_FORMAT_R8G8B8_SRGB";
    case VK_FORMAT_B8G8R8_UNORM: return "VK_FORMAT_B8G8R8_UNORM";
    case VK_FORMAT_B8G8R8_SNORM: return "VK_FORMAT_B8G8R8_SNORM";
    case VK_FORMAT_B8G8R8_USCALED: return "VK_FORMAT_B8G8R8_USCALED";
    case VK_FORMAT_B8G8R8_SSCALED: return "VK_FORMAT_B8G8R8_SSCALED";
    case VK_FORMAT_B8G8R8_UINT: return "VK_FORMAT_B8G8R8_UINT";
    case VK_FORMAT_B8G8R8_SINT: return "VK_FORMAT_B8G8R8_SINT";
    case VK_FORMAT_B8G8R8_SRGB: return "VK_FORMAT_B8G8R8_SRGB";
    case VK_FORMAT_R8G8B8A8_UNORM: return "VK_FORMAT_R8G8B8A8_UNORM";
    case VK_FORMAT_R8G8B8A8_SNORM: return "VK_FORMAT_R8G8B8A8_SNORM";
    case VK_FORMAT_R8G8B8A8_USCALED: return "VK_FORMAT_R8G8B8A8_USCALED";
    case VK_FORMAT_R8G8B8A8_SSCALED: return "VK_FORMAT_R8G8B8A8_SSCALED";
    case VK_FORMAT_R8G8B8A8_UINT: return "VK_FORMAT_R8G8B8A8_UINT";
    case VK_FORMAT_R8G8B8A8_SINT: return "VK_FORMAT_R8G8B8A8_SINT";
    case VK_FORMAT_R8G8B8A8_SRGB: return "VK_FORMAT_R8G8B8A8_SRGB";
    case VK_FORMAT_B8G8R8A8_UNORM: return "VK_FORMAT_B8G8R8A8_UNORM";
    case VK_FORMAT_B8G8R8A8_SNORM: return "VK_FORMAT_B8G8R8A8_SNORM";
    case VK_FORMAT_B8G8R8A8_USCALED: return "VK_FORMAT_B8G8R8A8_USCALED";
    case VK_FORMAT_B8G8R8A8_SSCALED: return "VK_FORMAT_B8G8R8A8_SSCALED";
    case VK_FORMAT_B8G8R8A8_UINT: return "VK_FORMAT_B8G8R8A8_UINT";
    case VK_FORMAT_B8G8R8A8_SINT: return "VK_FORMAT_B8G8R8A8_SINT";
    case VK_FORMAT_B8G8R8A8_SRGB: return "VK_FORMAT_B8G8R8A8_SRGB";
    case VK_FORMAT_A8B8G8R8_UNORM_PACK32: return "VK_FORMAT_A8B8G8R8_UNORM_PACK32";
    case VK_FORMAT_A8B8G8R8_SNORM_PACK32: return "VK_FORMAT_A8B8G8R8_SNORM_PACK32";
    case VK_FORMAT_A8B8G8R8_USCALED_PACK32: return "VK_FORMAT_A8B8G8R8_USCALED_PACK32";
    case VK_FORMAT_A8B8G8R8_SSCALED_PACK32: return "VK_FORMAT_A8B8G8R8_SSCALED_PACK32";
    case VK_FORMAT_A8B8G8R8_UINT_PACK32: return "VK_FORMAT_A8B8G8R8_UINT_PACK32";
    case VK_FORMAT_A8B8G8R8_SINT_PACK32: return "VK_FORMAT_A8B8G8R8_SINT_PACK32";
    case VK_FORMAT_A8B8G8R8_SRGB_PACK32: return "VK_FORMAT_A8B8G8R8_SRGB_PACK32";
    case VK_FORMAT_A2R10G10B10_UNORM_PACK32: return "VK_FORMAT_A2R10G10B10_UNORM_PACK32";
    case VK_FORMAT_A2R10G10B10_SNORM_PACK32: return "VK_FORMAT_A2R10G10B10_SNORM_PACK32";
    case VK_FORMAT_A2R10G10B10_USCALED_PACK32: return "VK_FORMAT_A2R10G10B10_USCALED_PACK32";
    case VK_FORMAT_A2R10G10B10_SSCALED_PACK32: return "VK_FORMAT_A2R10G10B10_SSCALED_PACK32";
    case VK_FORMAT_A2R10G10B10_UINT_PACK32: return "VK_FORMAT_A2R10G10B10_UINT_PACK32";
    case VK_FORMAT_A2R10G10B10_SINT_PACK32: return "VK_FORMAT_A2R10G10B10_SINT_PACK32";
    case VK_FORMAT_A2B10G10R10_UNORM_PACK32: return "VK_FORMAT_A2B10G10R10_UNORM_PACK32";
    case VK_FORMAT_A2B10G10R10_SNORM_PACK32: return "VK_FORMAT_A2B10G10R10_SNORM_PACK32";
    case VK_FORMAT_A2B10G10R10_USCALED_PACK32: return "VK_FORMAT_A2B10G10R10_USCALED_PACK32";
    case VK_FORMAT_A2B10G10R10_SSCALED_PACK32: return "VK_FORMAT_A2B10G10R10_SSCALED_PACK32";
    case VK_FORMAT_A2B10G10R10_UINT_PACK32: return "VK_FORMAT_A2B10G10R10_UINT_PACK32";
    case VK_FORMAT_A2B10G10R10_SINT_PACK32: return "VK_FORMAT_A2B10G10R10_SINT_PACK32";
    case VK_FORMAT_R16_UNORM: return "VK_FORMAT_R16_UNORM";
    case VK_FORMAT_R16_SNORM: return "VK_FORMAT_R16_SNORM";
    case VK_FORMAT_R16_USCALED: return "VK_FORMAT_R16_USCALED";
    case VK_FORMAT_R16_SSCALED: return "VK_FORMAT_R16_SSCALED";
    case VK_FORMAT_R16_UINT: return "VK_FORMAT_R16_UINT";
    case VK_FORMAT_R16_SINT: return "VK_FORMAT_R16_SINT";
    case VK_FORMAT_R16_SFLOAT: return "VK_FORMAT_R16_SFLOAT";
    case VK_FORMAT_R16G16_UNORM: return "VK_FORMAT_R16G16_UNORM";
    case VK_FORMAT_R16G16_SNORM: return "VK_FORMAT_R16G16_SNORM";
    case VK_FORMAT_R16G16_USCALED: return "VK_FORMAT_R16G16_USCALED";
    case VK_FORMAT_R16G16_SSCALED: return "VK_FORMAT_R16G16_SSCALED";
    case VK_FORMAT_R16G16_UINT: return "VK_FORMAT_R16G16_UINT";
    case VK_FORMAT_R16G16_SINT: return "VK_FORMAT_R16G16_SINT";
    case VK_FORMAT_R16G16_SFLOAT: return "VK_FORMAT_R16G16_SFLOAT";
    case VK_FORMAT_R16G16B16_UNORM: return "VK_FORMAT_R16G16B16_UNORM";
    case VK_FORMAT_R16G16B16_SNORM: return "VK_FORMAT_R16G16B16_SNORM";
    case VK_FORMAT_R16G16B16_USCALED: return "VK_FORMAT_R16G16B16_USCALED";
    case VK_FORMAT_R16G16B16_SSCALED: return "VK_FORMAT_R16G16B16_SSCALED";
    case VK_FORMAT_R16G16B16_UINT: return "VK_FORMAT_R16G16B16_UINT";
    case VK_FORMAT_R16G16B16_SINT: return "VK_FORMAT_R16G16B16_SINT";
    case VK_FORMAT_R16G16B16_SFLOAT: return "VK_FORMAT_R16G16B16_SFLOAT";
    case VK_FORMAT_R16G16B16A16_UNORM: return "VK_FORMAT_R16G16B16A16_UNORM";
    case VK_FORMAT_R16G16B16A16_SNORM: return "VK_FORMAT_R16G16B16A16_SNORM";
    case VK_FORMAT_R16G16B16A16_USCALED: return "VK_FORMAT_R16G16B16A16_USCALED";
    case VK_FORMAT_R16G16B16A16_SSCALED: return "VK_FORMAT_R16G16B16A16_SSCALED";
    case VK_FORMAT_R16G16B16A16_UINT: return "VK_FORMAT_R16G16B16A16_UINT";
    case VK_FORMAT_R16G16B16A16_SINT: return "VK_FORMAT_R16G16B16A16_SINT";
    case VK_FORMAT_R16G16B16A16_SFLOAT: return "VK_FORMAT_R16G16B16A16_SFLOAT";
    case VK_FORMAT_R32_UINT: return "VK_FORMAT_R32_UINT";
    case VK_FORMAT_R32_SINT: return "VK_FORMAT_R32_SINT";
    case VK_FORMAT_R32_SFLOAT: return "VK_FORMAT_R32_SFLOAT";
    case VK_FORMAT_R32G32_UINT: return "VK_FORMAT_R32G32_UINT";
    case VK_FORMAT_R32G32_SINT: return "VK_FORMAT_R32G32_SINT";
    case VK_FORMAT_R32G32_SFLOAT: return "VK_FORMAT_R32G32_SFLOAT";
    case VK_FORMAT_R32G32B32_UINT: return "VK_FORMAT_R32G32B32_UINT";
    case VK_FORMAT_R32G32B32_SINT: return "VK_FORMAT_R32G32B32_SINT";
    case VK_FORMAT_R32G32B32_SFLOAT: return "VK_FORMAT_R32G32B32_SFLOAT";
    case VK_FORMAT_R32G32B32A32_UINT: return "VK_FORMAT_R32G32B32A32_UINT";
    case VK_FORMAT_R32G32B32A32_SINT: return "VK_FORMAT_R32G32B32A32_SINT";
    case VK_FORMAT_R32G32B32A32_SFLOAT: return "VK_FORMAT_R32G32B32A32_SFLOAT";
    case VK_FORMAT_R64_UINT: return "VK_FORMAT_R64_UINT";
    case VK_FORMAT_R64_SINT: return "VK_FORMAT_R64_SINT";
    case VK_FORMAT_R64_SFLOAT: return "VK_FORMAT_R64_SFLOAT";
    case VK_FORMAT_R64G64_UINT: return "VK_FORMAT_R64G64_UINT";
    case VK_FORMAT_R64G64_SINT: return "VK_FORMAT_R64G64_SINT";
    case VK_FORMAT_R64G64_SFLOAT: return "VK_FORMAT_R64G64_SFLOAT";
    case VK_FORMAT_R64G64B64_UINT: return "VK_FORMAT_R64G64B64_UINT";
    case VK_FORMAT_R64G64B64_SINT: return "VK_FORMAT_R64G64B64_SINT";
    case VK_FORMAT_R64G64B64_SFLOAT: return "VK_FORMAT_R64G64B64_SFLOAT";
    case VK_FORMAT_R64G64B64A64_UINT: return "VK_FORMAT_R64G64B64A64_UINT";
    case VK_FORMAT_R64G64B64A64_SINT: return "VK_FORMAT_R64G64B64A64_SINT";
    case VK_FORMAT_R64G64B64A64_SFLOAT: return "VK_FORMAT_R64G64B64A64_SFLOAT";
    case VK_FORMAT_B10G11R11_UFLOAT_PACK32: return "VK_FORMAT_B10G11R11_UFLOAT_PACK32";
    case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32: return "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32";
    case VK_FORMAT_D16_UNORM: return "VK_FORMAT_D16_UNORM";
    case VK_FORMAT_X8_D24_UNORM_PACK32: return "VK_FORMAT_X8_D24_UNORM_PACK32";
    case VK_FORMAT_D32_SFLOAT: return "VK_FORMAT_D32_SFLOAT";
    case VK_FORMAT_S8_UINT: return "VK_FORMAT_S8_UINT";
    case VK_FORMAT_D16_UNORM_S8_UINT: return "VK_FORMAT_D16_UNORM_S8_UINT";
    case VK_FORMAT_D24_UNORM_S8_UINT: return "VK_FORMAT_D24_UNORM_S8_UINT";
    case VK_FORMAT_D32_SFLOAT_S8_UINT: return "VK_FORMAT_D32_SFLOAT_S8_UINT";
    case VK_FORMAT_BC1_RGB_UNORM_BLOCK: return "VK_FORMAT_BC1_RGB_UNORM_BLOCK";
    case VK_FORMAT_BC1_RGB_SRGB_BLOCK: return "VK_FORMAT_BC1_RGB_SRGB_BLOCK";
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK: return "VK_FORMAT_BC1_RGBA_UNORM_BLOCK";
    case VK_FORMAT_BC1_RGBA_SRGB_BLOCK: return "VK_FORMAT_BC1_RGBA_SRGB_BLOCK";
    case VK_FORMAT_BC2_UNORM_BLOCK: return "VK_FORMAT_BC2_UNORM_BLOCK";
    case VK_FORMAT_BC2_SRGB_BLOCK: return "VK_FORMAT_BC2_SRGB_BLOCK";
    case VK_FORMAT_BC3_UNORM_BLOCK: return "VK_FORMAT_BC3_UNORM_BLOCK";
    case VK_FORMAT_BC3_SRGB_BLOCK: return "VK_FORMAT_BC3_SRGB_BLOCK";
    case VK_FORMAT_BC4_UNORM_BLOCK: return "VK_FORMAT_BC4_UNORM_BLOCK";
    case VK_FORMAT_BC4_SNORM_BLOCK: return "VK_FORMAT_BC4_SNORM_BLOCK";
    case VK_FORMAT_BC5_UNORM_BLOCK: return "VK_FORMAT_BC5_UNORM_BLOCK";
    case VK_FORMAT_BC5_SNORM_BLOCK: return "VK_FORMAT_BC5_SNORM_BLOCK";
    case VK_FORMAT_BC6H_UFLOAT_BLOCK: return "VK_FORMAT_BC6H_UFLOAT_BLOCK";
    case VK_FORMAT_BC6H_SFLOAT_BLOCK: return "VK_FORMAT_BC6H_SFLOAT_BLOCK";
    case VK_FORMAT_BC7_UNORM_BLOCK: return "VK_FORMAT_BC7_UNORM_BLOCK";
    case VK_FORMAT_BC7_SRGB_BLOCK: return "VK_FORMAT_BC7_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK: return "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK: return "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK: return "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK: return "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK: return "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK: return "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
    case VK_FORMAT_EAC_R11_UNORM_BLOCK: return "VK_FORMAT_EAC_R11_UNORM_BLOCK";
    case VK_FORMAT_EAC_R11_SNORM_BLOCK: return "VK_FORMAT_EAC_R11_SNORM_BLOCK";
    case VK_FORMAT_EAC_R11G11_UNORM_BLOCK: return "VK_FORMAT_EAC_R11G11_UNORM_BLOCK";
    case VK_FORMAT_EAC_R11G11_SNORM_BLOCK: return "VK_FORMAT_EAC_R11G11_SNORM_BLOCK";
    case VK_FORMAT_ASTC_4x4_UNORM_BLOCK: return "VK_FORMAT_ASTC_4x4_UNORM_BLOCK";
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK: return "VK_FORMAT_ASTC_4x4_SRGB_BLOCK";
    case VK_FORMAT_ASTC_5x4_UNORM_BLOCK: return "VK_FORMAT_ASTC_5x4_UNORM_BLOCK";
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK: return "VK_FORMAT_ASTC_5x4_SRGB_BLOCK";
    case VK_FORMAT_ASTC_5x5_UNORM_BLOCK: return "VK_FORMAT_ASTC_5x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK: return "VK_FORMAT_ASTC_5x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_6x5_UNORM_BLOCK: return "VK_FORMAT_ASTC_6x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK: return "VK_FORMAT_ASTC_6x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_6x6_UNORM_BLOCK: return "VK_FORMAT_ASTC_6x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK: return "VK_FORMAT_ASTC_6x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x5_UNORM_BLOCK: return "VK_FORMAT_ASTC_8x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK: return "VK_FORMAT_ASTC_8x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x6_UNORM_BLOCK: return "VK_FORMAT_ASTC_8x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK: return "VK_FORMAT_ASTC_8x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x8_UNORM_BLOCK: return "VK_FORMAT_ASTC_8x8_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK: return "VK_FORMAT_ASTC_8x8_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x5_UNORM_BLOCK: return "VK_FORMAT_ASTC_10x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK: return "VK_FORMAT_ASTC_10x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x6_UNORM_BLOCK: return "VK_FORMAT_ASTC_10x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK: return "VK_FORMAT_ASTC_10x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x8_UNORM_BLOCK: return "VK_FORMAT_ASTC_10x8_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK: return "VK_FORMAT_ASTC_10x8_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x10_UNORM_BLOCK: return "VK_FORMAT_ASTC_10x10_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK: return "VK_FORMAT_ASTC_10x10_SRGB_BLOCK";
    case VK_FORMAT_ASTC_12x10_UNORM_BLOCK: return "VK_FORMAT_ASTC_12x10_UNORM_BLOCK";
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK: return "VK_FORMAT_ASTC_12x10_SRGB_BLOCK";
    case VK_FORMAT_ASTC_12x12_UNORM_BLOCK: return "VK_FORMAT_ASTC_12x12_UNORM_BLOCK";
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK: return "VK_FORMAT_ASTC_12x12_SRGB_BLOCK";
    case VK_FORMAT_G8B8G8R8_422_UNORM: return "VK_FORMAT_G8B8G8R8_422_UNORM";
    case VK_FORMAT_B8G8R8G8_422_UNORM: return "VK_FORMAT_B8G8R8G8_422_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM: return "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM: return "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM: return "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM: return "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM: return "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM";
    case VK_FORMAT_R10X6_UNORM_PACK16: return "VK_FORMAT_R10X6_UNORM_PACK16";
    case VK_FORMAT_R10X6G10X6_UNORM_2PACK16: return "VK_FORMAT_R10X6G10X6_UNORM_2PACK16";
    case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16: return "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
    case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16: return "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
    case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16: return "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16: return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16: return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16: return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16: return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16: return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_R12X4_UNORM_PACK16: return "VK_FORMAT_R12X4_UNORM_PACK16";
    case VK_FORMAT_R12X4G12X4_UNORM_2PACK16: return "VK_FORMAT_R12X4G12X4_UNORM_2PACK16";
    case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16: return "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
    case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16: return "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
    case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16: return "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16: return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16: return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16: return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16: return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16: return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_G16B16G16R16_422_UNORM: return "VK_FORMAT_G16B16G16R16_422_UNORM";
    case VK_FORMAT_B16G16R16G16_422_UNORM: return "VK_FORMAT_B16G16R16G16_422_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM: return "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM";
    case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM: return "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM: return "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM";
    case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM: return "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM: return "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_444_UNORM: return "VK_FORMAT_G8_B8R8_2PLANE_444_UNORM";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16: return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16: return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_G16_B16R16_2PLANE_444_UNORM: return "VK_FORMAT_G16_B16R16_2PLANE_444_UNORM";
    case VK_FORMAT_A4R4G4B4_UNORM_PACK16: return "VK_FORMAT_A4R4G4B4_UNORM_PACK16";
    case VK_FORMAT_A4B4G4R4_UNORM_PACK16: return "VK_FORMAT_A4B4G4R4_UNORM_PACK16";
    case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK: return "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK";
    case VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG: return "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG: return "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG: return "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG: return "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG: return "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG: return "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG: return "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG: return "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_R16G16_S10_5_NV: return "VK_FORMAT_R16G16_S10_5_NV";
    default: break;
    }
    return "Unhandled VkFormat";
}

template <> std::string ToString<VkFormatFeatureFlagBits>(const VkFormatFeatureFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT";
    case VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT: return "VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT";
    case VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT: return "VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT";
    case VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT: return "VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT";
    case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT: return "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT";
    case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT: return "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT";
    case VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT: return "VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT";
    case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT: return "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT";
    case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT: return "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT";
    case VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT: return "VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT";
    case VK_FORMAT_FEATURE_BLIT_SRC_BIT: return "VK_FORMAT_FEATURE_BLIT_SRC_BIT";
    case VK_FORMAT_FEATURE_BLIT_DST_BIT: return "VK_FORMAT_FEATURE_BLIT_DST_BIT";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT";
    case VK_FORMAT_FEATURE_TRANSFER_SRC_BIT: return "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT";
    case VK_FORMAT_FEATURE_TRANSFER_DST_BIT: return "VK_FORMAT_FEATURE_TRANSFER_DST_BIT";
    case VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT: return "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT";
    case VK_FORMAT_FEATURE_DISJOINT_BIT: return "VK_FORMAT_FEATURE_DISJOINT_BIT";
    case VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT: return "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT";
    case VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR: return "VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR";
    case VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR: return "VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR";
    case VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR: return "VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR";
    case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT: return "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT";
    case VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT: return "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT";
    case VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    case VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR: return "VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR";
    case VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR: return "VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR";
    default: break;
    }
    return "Unhandled VkFormatFeatureFlagBits";
}

template <> std::string ToString<VkFormatFeatureFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkFormatFeatureFlagBits>(vkFlags);
}

template <> std::string ToString<VkFramebufferCreateFlagBits>(const VkFramebufferCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT: return "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT";
    default: break;
    }
    return "Unhandled VkFramebufferCreateFlagBits";
}

template <> std::string ToString<VkFramebufferCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkFramebufferCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkFrontFace>(const VkFrontFace& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FRONT_FACE_COUNTER_CLOCKWISE: return "VK_FRONT_FACE_COUNTER_CLOCKWISE";
    case VK_FRONT_FACE_CLOCKWISE: return "VK_FRONT_FACE_CLOCKWISE";
    default: break;
    }
    return "Unhandled VkFrontFace";
}

template <> std::string ToString<VkImageAspectFlagBits>(const VkImageAspectFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_ASPECT_COLOR_BIT: return "VK_IMAGE_ASPECT_COLOR_BIT";
    case VK_IMAGE_ASPECT_DEPTH_BIT: return "VK_IMAGE_ASPECT_DEPTH_BIT";
    case VK_IMAGE_ASPECT_STENCIL_BIT: return "VK_IMAGE_ASPECT_STENCIL_BIT";
    case VK_IMAGE_ASPECT_METADATA_BIT: return "VK_IMAGE_ASPECT_METADATA_BIT";
    case VK_IMAGE_ASPECT_PLANE_0_BIT: return "VK_IMAGE_ASPECT_PLANE_0_BIT";
    case VK_IMAGE_ASPECT_PLANE_1_BIT: return "VK_IMAGE_ASPECT_PLANE_1_BIT";
    case VK_IMAGE_ASPECT_PLANE_2_BIT: return "VK_IMAGE_ASPECT_PLANE_2_BIT";
    case VK_IMAGE_ASPECT_NONE: return "VK_IMAGE_ASPECT_NONE";
    case VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT: return "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT";
    case VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT: return "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT";
    case VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT: return "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT";
    case VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT: return "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT";
    default: break;
    }
    return "Unhandled VkImageAspectFlagBits";
}

template <> std::string ToString<VkImageAspectFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkImageAspectFlagBits>(vkFlags);
}

template <> std::string ToString<VkImageCreateFlagBits>(const VkImageCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_CREATE_SPARSE_BINDING_BIT: return "VK_IMAGE_CREATE_SPARSE_BINDING_BIT";
    case VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT: return "VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT";
    case VK_IMAGE_CREATE_SPARSE_ALIASED_BIT: return "VK_IMAGE_CREATE_SPARSE_ALIASED_BIT";
    case VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT: return "VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT";
    case VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT: return "VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT";
    case VK_IMAGE_CREATE_ALIAS_BIT: return "VK_IMAGE_CREATE_ALIAS_BIT";
    case VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT: return "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT";
    case VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT: return "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT";
    case VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT: return "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT";
    case VK_IMAGE_CREATE_EXTENDED_USAGE_BIT: return "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT";
    case VK_IMAGE_CREATE_PROTECTED_BIT: return "VK_IMAGE_CREATE_PROTECTED_BIT";
    case VK_IMAGE_CREATE_DISJOINT_BIT: return "VK_IMAGE_CREATE_DISJOINT_BIT";
    case VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV: return "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV";
    case VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT: return "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT";
    case VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT: return "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT";
    case VK_IMAGE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT: return "VK_IMAGE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
    case VK_IMAGE_CREATE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT: return "VK_IMAGE_CREATE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT";
    case VK_IMAGE_CREATE_2D_VIEW_COMPATIBLE_BIT_EXT: return "VK_IMAGE_CREATE_2D_VIEW_COMPATIBLE_BIT_EXT";
    case VK_IMAGE_CREATE_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM: return "VK_IMAGE_CREATE_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM";
    default: break;
    }
    return "Unhandled VkImageCreateFlagBits";
}

template <> std::string ToString<VkImageCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkImageCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkImageLayout>(const VkImageLayout& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_LAYOUT_UNDEFINED: return "VK_IMAGE_LAYOUT_UNDEFINED";
    case VK_IMAGE_LAYOUT_GENERAL: return "VK_IMAGE_LAYOUT_GENERAL";
    case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL: return "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL: return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL: return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL: return "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL: return "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL";
    case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL: return "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL";
    case VK_IMAGE_LAYOUT_PREINITIALIZED: return "VK_IMAGE_LAYOUT_PREINITIALIZED";
    case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL: return "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL: return "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL: return "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL: return "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL: return "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL: return "VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL: return "VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL: return "VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR: return "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR";
    case VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR: return "VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR";
    case VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR: return "VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR";
    case VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR: return "VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR";
    case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR: return "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR";
    case VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT: return "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT";
    case VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR: return "VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR";
    case VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR: return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR";
    case VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR: return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR";
    case VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR: return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR";
    case VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT: return "VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT";
    default: break;
    }
    return "Unhandled VkImageLayout";
}

template <> std::string ToString<VkImageTiling>(const VkImageTiling& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_TILING_OPTIMAL: return "VK_IMAGE_TILING_OPTIMAL";
    case VK_IMAGE_TILING_LINEAR: return "VK_IMAGE_TILING_LINEAR";
    case VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT: return "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT";
    default: break;
    }
    return "Unhandled VkImageTiling";
}

template <> std::string ToString<VkImageType>(const VkImageType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_TYPE_1D: return "VK_IMAGE_TYPE_1D";
    case VK_IMAGE_TYPE_2D: return "VK_IMAGE_TYPE_2D";
    case VK_IMAGE_TYPE_3D: return "VK_IMAGE_TYPE_3D";
    default: break;
    }
    return "Unhandled VkImageType";
}

template <> std::string ToString<VkImageUsageFlagBits>(const VkImageUsageFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_USAGE_TRANSFER_SRC_BIT: return "VK_IMAGE_USAGE_TRANSFER_SRC_BIT";
    case VK_IMAGE_USAGE_TRANSFER_DST_BIT: return "VK_IMAGE_USAGE_TRANSFER_DST_BIT";
    case VK_IMAGE_USAGE_SAMPLED_BIT: return "VK_IMAGE_USAGE_SAMPLED_BIT";
    case VK_IMAGE_USAGE_STORAGE_BIT: return "VK_IMAGE_USAGE_STORAGE_BIT";
    case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT: return "VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT";
    case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT: return "VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT";
    case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT: return "VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT";
    case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT: return "VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT";
    case VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR: return "VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR";
    case VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR: return "VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR";
    case VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR: return "VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR";
    case VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT: return "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT";
    case VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    case VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR: return "VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR";
    case VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR: return "VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR";
    case VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR: return "VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR";
    case VK_IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT: return "VK_IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
    case VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI: return "VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI";
    case VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM: return "VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM";
    case VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM: return "VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM";
    default: break;
    }
    return "Unhandled VkImageUsageFlagBits";
}

template <> std::string ToString<VkImageUsageFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkImageUsageFlagBits>(vkFlags);
}

template <> std::string ToString<VkImageViewCreateFlagBits>(const VkImageViewCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT: return "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT";
    case VK_IMAGE_VIEW_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT: return "VK_IMAGE_VIEW_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
    case VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT: return "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT";
    default: break;
    }
    return "Unhandled VkImageViewCreateFlagBits";
}

template <> std::string ToString<VkImageViewCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkImageViewCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkImageViewType>(const VkImageViewType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_VIEW_TYPE_1D: return "VK_IMAGE_VIEW_TYPE_1D";
    case VK_IMAGE_VIEW_TYPE_2D: return "VK_IMAGE_VIEW_TYPE_2D";
    case VK_IMAGE_VIEW_TYPE_3D: return "VK_IMAGE_VIEW_TYPE_3D";
    case VK_IMAGE_VIEW_TYPE_CUBE: return "VK_IMAGE_VIEW_TYPE_CUBE";
    case VK_IMAGE_VIEW_TYPE_1D_ARRAY: return "VK_IMAGE_VIEW_TYPE_1D_ARRAY";
    case VK_IMAGE_VIEW_TYPE_2D_ARRAY: return "VK_IMAGE_VIEW_TYPE_2D_ARRAY";
    case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY: return "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY";
    default: break;
    }
    return "Unhandled VkImageViewType";
}

template <> std::string ToString<VkIndexType>(const VkIndexType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_INDEX_TYPE_UINT16: return "VK_INDEX_TYPE_UINT16";
    case VK_INDEX_TYPE_UINT32: return "VK_INDEX_TYPE_UINT32";
    case VK_INDEX_TYPE_NONE_KHR: return "VK_INDEX_TYPE_NONE_KHR";
    case VK_INDEX_TYPE_UINT8_EXT: return "VK_INDEX_TYPE_UINT8_EXT";
    default: break;
    }
    return "Unhandled VkIndexType";
}

template <> std::string ToString<VkInstanceCreateFlagBits>(const VkInstanceCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR: return "VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR";
    default: break;
    }
    return "Unhandled VkInstanceCreateFlagBits";
}

template <> std::string ToString<VkInstanceCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkInstanceCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkInternalAllocationType>(const VkInternalAllocationType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE: return "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE";
    default: break;
    }
    return "Unhandled VkInternalAllocationType";
}

template <> std::string ToString<VkLogicOp>(const VkLogicOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_LOGIC_OP_CLEAR: return "VK_LOGIC_OP_CLEAR";
    case VK_LOGIC_OP_AND: return "VK_LOGIC_OP_AND";
    case VK_LOGIC_OP_AND_REVERSE: return "VK_LOGIC_OP_AND_REVERSE";
    case VK_LOGIC_OP_COPY: return "VK_LOGIC_OP_COPY";
    case VK_LOGIC_OP_AND_INVERTED: return "VK_LOGIC_OP_AND_INVERTED";
    case VK_LOGIC_OP_NO_OP: return "VK_LOGIC_OP_NO_OP";
    case VK_LOGIC_OP_XOR: return "VK_LOGIC_OP_XOR";
    case VK_LOGIC_OP_OR: return "VK_LOGIC_OP_OR";
    case VK_LOGIC_OP_NOR: return "VK_LOGIC_OP_NOR";
    case VK_LOGIC_OP_EQUIVALENT: return "VK_LOGIC_OP_EQUIVALENT";
    case VK_LOGIC_OP_INVERT: return "VK_LOGIC_OP_INVERT";
    case VK_LOGIC_OP_OR_REVERSE: return "VK_LOGIC_OP_OR_REVERSE";
    case VK_LOGIC_OP_COPY_INVERTED: return "VK_LOGIC_OP_COPY_INVERTED";
    case VK_LOGIC_OP_OR_INVERTED: return "VK_LOGIC_OP_OR_INVERTED";
    case VK_LOGIC_OP_NAND: return "VK_LOGIC_OP_NAND";
    case VK_LOGIC_OP_SET: return "VK_LOGIC_OP_SET";
    default: break;
    }
    return "Unhandled VkLogicOp";
}

template <> std::string ToString<VkMemoryHeapFlagBits>(const VkMemoryHeapFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_MEMORY_HEAP_DEVICE_LOCAL_BIT: return "VK_MEMORY_HEAP_DEVICE_LOCAL_BIT";
    case VK_MEMORY_HEAP_MULTI_INSTANCE_BIT: return "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT";
    default: break;
    }
    return "Unhandled VkMemoryHeapFlagBits";
}

template <> std::string ToString<VkMemoryHeapFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkMemoryHeapFlagBits>(vkFlags);
}

template <> std::string ToString<VkMemoryPropertyFlagBits>(const VkMemoryPropertyFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT: return "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT";
    case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT: return "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT";
    case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT: return "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT";
    case VK_MEMORY_PROPERTY_HOST_CACHED_BIT: return "VK_MEMORY_PROPERTY_HOST_CACHED_BIT";
    case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT: return "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT";
    case VK_MEMORY_PROPERTY_PROTECTED_BIT: return "VK_MEMORY_PROPERTY_PROTECTED_BIT";
    case VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD: return "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD";
    case VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD: return "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD";
    case VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV: return "VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV";
    default: break;
    }
    return "Unhandled VkMemoryPropertyFlagBits";
}

template <> std::string ToString<VkMemoryPropertyFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkMemoryPropertyFlagBits>(vkFlags);
}

template <> std::string ToString<VkObjectType>(const VkObjectType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OBJECT_TYPE_UNKNOWN: return "VK_OBJECT_TYPE_UNKNOWN";
    case VK_OBJECT_TYPE_INSTANCE: return "VK_OBJECT_TYPE_INSTANCE";
    case VK_OBJECT_TYPE_PHYSICAL_DEVICE: return "VK_OBJECT_TYPE_PHYSICAL_DEVICE";
    case VK_OBJECT_TYPE_DEVICE: return "VK_OBJECT_TYPE_DEVICE";
    case VK_OBJECT_TYPE_QUEUE: return "VK_OBJECT_TYPE_QUEUE";
    case VK_OBJECT_TYPE_SEMAPHORE: return "VK_OBJECT_TYPE_SEMAPHORE";
    case VK_OBJECT_TYPE_COMMAND_BUFFER: return "VK_OBJECT_TYPE_COMMAND_BUFFER";
    case VK_OBJECT_TYPE_FENCE: return "VK_OBJECT_TYPE_FENCE";
    case VK_OBJECT_TYPE_DEVICE_MEMORY: return "VK_OBJECT_TYPE_DEVICE_MEMORY";
    case VK_OBJECT_TYPE_BUFFER: return "VK_OBJECT_TYPE_BUFFER";
    case VK_OBJECT_TYPE_IMAGE: return "VK_OBJECT_TYPE_IMAGE";
    case VK_OBJECT_TYPE_EVENT: return "VK_OBJECT_TYPE_EVENT";
    case VK_OBJECT_TYPE_QUERY_POOL: return "VK_OBJECT_TYPE_QUERY_POOL";
    case VK_OBJECT_TYPE_BUFFER_VIEW: return "VK_OBJECT_TYPE_BUFFER_VIEW";
    case VK_OBJECT_TYPE_IMAGE_VIEW: return "VK_OBJECT_TYPE_IMAGE_VIEW";
    case VK_OBJECT_TYPE_SHADER_MODULE: return "VK_OBJECT_TYPE_SHADER_MODULE";
    case VK_OBJECT_TYPE_PIPELINE_CACHE: return "VK_OBJECT_TYPE_PIPELINE_CACHE";
    case VK_OBJECT_TYPE_PIPELINE_LAYOUT: return "VK_OBJECT_TYPE_PIPELINE_LAYOUT";
    case VK_OBJECT_TYPE_RENDER_PASS: return "VK_OBJECT_TYPE_RENDER_PASS";
    case VK_OBJECT_TYPE_PIPELINE: return "VK_OBJECT_TYPE_PIPELINE";
    case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT: return "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT";
    case VK_OBJECT_TYPE_SAMPLER: return "VK_OBJECT_TYPE_SAMPLER";
    case VK_OBJECT_TYPE_DESCRIPTOR_POOL: return "VK_OBJECT_TYPE_DESCRIPTOR_POOL";
    case VK_OBJECT_TYPE_DESCRIPTOR_SET: return "VK_OBJECT_TYPE_DESCRIPTOR_SET";
    case VK_OBJECT_TYPE_FRAMEBUFFER: return "VK_OBJECT_TYPE_FRAMEBUFFER";
    case VK_OBJECT_TYPE_COMMAND_POOL: return "VK_OBJECT_TYPE_COMMAND_POOL";
    case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION: return "VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION";
    case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE: return "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE";
    case VK_OBJECT_TYPE_PRIVATE_DATA_SLOT: return "VK_OBJECT_TYPE_PRIVATE_DATA_SLOT";
    case VK_OBJECT_TYPE_SURFACE_KHR: return "VK_OBJECT_TYPE_SURFACE_KHR";
    case VK_OBJECT_TYPE_SWAPCHAIN_KHR: return "VK_OBJECT_TYPE_SWAPCHAIN_KHR";
    case VK_OBJECT_TYPE_DISPLAY_KHR: return "VK_OBJECT_TYPE_DISPLAY_KHR";
    case VK_OBJECT_TYPE_DISPLAY_MODE_KHR: return "VK_OBJECT_TYPE_DISPLAY_MODE_KHR";
    case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT: return "VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT";
    case VK_OBJECT_TYPE_VIDEO_SESSION_KHR: return "VK_OBJECT_TYPE_VIDEO_SESSION_KHR";
    case VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR: return "VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR";
    case VK_OBJECT_TYPE_CU_MODULE_NVX: return "VK_OBJECT_TYPE_CU_MODULE_NVX";
    case VK_OBJECT_TYPE_CU_FUNCTION_NVX: return "VK_OBJECT_TYPE_CU_FUNCTION_NVX";
    case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT: return "VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT";
    case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR: return "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR";
    case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT: return "VK_OBJECT_TYPE_VALIDATION_CACHE_EXT";
    case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV: return "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV";
    case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL: return "VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL";
    case VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR: return "VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR";
    case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV: return "VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV";
    case VK_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA: return "VK_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA";
    case VK_OBJECT_TYPE_MICROMAP_EXT: return "VK_OBJECT_TYPE_MICROMAP_EXT";
    case VK_OBJECT_TYPE_OPTICAL_FLOW_SESSION_NV: return "VK_OBJECT_TYPE_OPTICAL_FLOW_SESSION_NV";
    default: break;
    }
    return "Unhandled VkObjectType";
}

template <> std::string ToString<VkPhysicalDeviceType>(const VkPhysicalDeviceType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PHYSICAL_DEVICE_TYPE_OTHER: return "VK_PHYSICAL_DEVICE_TYPE_OTHER";
    case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: return "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU";
    case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU: return "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU";
    case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU: return "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU";
    case VK_PHYSICAL_DEVICE_TYPE_CPU: return "VK_PHYSICAL_DEVICE_TYPE_CPU";
    default: break;
    }
    return "Unhandled VkPhysicalDeviceType";
}

template <> std::string ToString<VkPipelineBindPoint>(const VkPipelineBindPoint& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_BIND_POINT_GRAPHICS: return "VK_PIPELINE_BIND_POINT_GRAPHICS";
    case VK_PIPELINE_BIND_POINT_COMPUTE: return "VK_PIPELINE_BIND_POINT_COMPUTE";
    case VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR: return "VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR";
    case VK_PIPELINE_BIND_POINT_SUBPASS_SHADING_HUAWEI: return "VK_PIPELINE_BIND_POINT_SUBPASS_SHADING_HUAWEI";
    default: break;
    }
    return "Unhandled VkPipelineBindPoint";
}

template <> std::string ToString<VkPipelineCacheCreateFlagBits>(const VkPipelineCacheCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT: return "VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT";
    default: break;
    }
    return "Unhandled VkPipelineCacheCreateFlagBits";
}

template <> std::string ToString<VkPipelineCacheCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineCacheCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPipelineCacheHeaderVersion>(const VkPipelineCacheHeaderVersion& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_CACHE_HEADER_VERSION_ONE: return "VK_PIPELINE_CACHE_HEADER_VERSION_ONE";
    default: break;
    }
    return "Unhandled VkPipelineCacheHeaderVersion";
}

template <> std::string ToString<VkPipelineColorBlendStateCreateFlagBits>(const VkPipelineColorBlendStateCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT: return "VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPipelineColorBlendStateCreateFlagBits";
}

template <> std::string ToString<VkPipelineColorBlendStateCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineColorBlendStateCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPipelineCreateFlagBits>(const VkPipelineCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT: return "VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT";
    case VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT: return "VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT";
    case VK_PIPELINE_CREATE_DERIVATIVE_BIT: return "VK_PIPELINE_CREATE_DERIVATIVE_BIT";
    case VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT: return "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT";
    case VK_PIPELINE_CREATE_DISPATCH_BASE_BIT: return "VK_PIPELINE_CREATE_DISPATCH_BASE_BIT";
    case VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT: return "VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT";
    case VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT: return "VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT";
    case VK_PIPELINE_CREATE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "VK_PIPELINE_CREATE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    case VK_PIPELINE_CREATE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT: return "VK_PIPELINE_CREATE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT";
    case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR";
    case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR";
    case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR";
    case VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR";
    case VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR";
    case VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR";
    case VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR: return "VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR";
    case VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV: return "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV";
    case VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR: return "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR";
    case VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR: return "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR";
    case VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV: return "VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV";
    case VK_PIPELINE_CREATE_LIBRARY_BIT_KHR: return "VK_PIPELINE_CREATE_LIBRARY_BIT_KHR";
    case VK_PIPELINE_CREATE_DESCRIPTOR_BUFFER_BIT_EXT: return "VK_PIPELINE_CREATE_DESCRIPTOR_BUFFER_BIT_EXT";
    case VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT: return "VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT";
    case VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT: return "VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT";
    case VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV: return "VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV";
    case VK_PIPELINE_CREATE_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT: return "VK_PIPELINE_CREATE_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
    case VK_PIPELINE_CREATE_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT: return "VK_PIPELINE_CREATE_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
    case VK_PIPELINE_CREATE_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT: return "VK_PIPELINE_CREATE_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT";
    case VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT_EXT: return "VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT_EXT";
    case VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT_EXT: return "VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPipelineCreateFlagBits";
}

template <> std::string ToString<VkPipelineCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPipelineDepthStencilStateCreateFlagBits>(const VkPipelineDepthStencilStateCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT: return "VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT";
    case VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT: return "VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPipelineDepthStencilStateCreateFlagBits";
}

template <> std::string ToString<VkPipelineDepthStencilStateCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineDepthStencilStateCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPipelineLayoutCreateFlagBits>(const VkPipelineLayoutCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_LAYOUT_CREATE_INDEPENDENT_SETS_BIT_EXT: return "VK_PIPELINE_LAYOUT_CREATE_INDEPENDENT_SETS_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPipelineLayoutCreateFlagBits";
}

template <> std::string ToString<VkPipelineLayoutCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineLayoutCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPipelineShaderStageCreateFlagBits>(const VkPipelineShaderStageCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT: return "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT";
    case VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT: return "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT";
    default: break;
    }
    return "Unhandled VkPipelineShaderStageCreateFlagBits";
}

template <> std::string ToString<VkPipelineShaderStageCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineShaderStageCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPipelineStageFlagBits>(const VkPipelineStageFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT: return "VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT";
    case VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT: return "VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT";
    case VK_PIPELINE_STAGE_VERTEX_INPUT_BIT: return "VK_PIPELINE_STAGE_VERTEX_INPUT_BIT";
    case VK_PIPELINE_STAGE_VERTEX_SHADER_BIT: return "VK_PIPELINE_STAGE_VERTEX_SHADER_BIT";
    case VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT: return "VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT";
    case VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT: return "VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT";
    case VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT: return "VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT";
    case VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT: return "VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT";
    case VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT: return "VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT";
    case VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT: return "VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT";
    case VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT: return "VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT";
    case VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT: return "VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT";
    case VK_PIPELINE_STAGE_TRANSFER_BIT: return "VK_PIPELINE_STAGE_TRANSFER_BIT";
    case VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT: return "VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT";
    case VK_PIPELINE_STAGE_HOST_BIT: return "VK_PIPELINE_STAGE_HOST_BIT";
    case VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT: return "VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT";
    case VK_PIPELINE_STAGE_ALL_COMMANDS_BIT: return "VK_PIPELINE_STAGE_ALL_COMMANDS_BIT";
    case VK_PIPELINE_STAGE_NONE: return "VK_PIPELINE_STAGE_NONE";
    case VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT: return "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT";
    case VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT: return "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT";
    case VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR: return "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR";
    case VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR: return "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR";
    case VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT: return "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT";
    case VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    case VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV: return "VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV";
    case VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT: return "VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT";
    case VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT: return "VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPipelineStageFlagBits";
}

template <> std::string ToString<VkPipelineStageFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineStageFlagBits>(vkFlags);
}

template <> std::string ToString<VkPolygonMode>(const VkPolygonMode& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_POLYGON_MODE_FILL: return "VK_POLYGON_MODE_FILL";
    case VK_POLYGON_MODE_LINE: return "VK_POLYGON_MODE_LINE";
    case VK_POLYGON_MODE_POINT: return "VK_POLYGON_MODE_POINT";
    case VK_POLYGON_MODE_FILL_RECTANGLE_NV: return "VK_POLYGON_MODE_FILL_RECTANGLE_NV";
    default: break;
    }
    return "Unhandled VkPolygonMode";
}

template <> std::string ToString<VkPrimitiveTopology>(const VkPrimitiveTopology& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PRIMITIVE_TOPOLOGY_POINT_LIST: return "VK_PRIMITIVE_TOPOLOGY_POINT_LIST";
    case VK_PRIMITIVE_TOPOLOGY_LINE_LIST: return "VK_PRIMITIVE_TOPOLOGY_LINE_LIST";
    case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP: return "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP";
    case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST: return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST";
    case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP: return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP";
    case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN: return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN";
    case VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY: return "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY";
    case VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY: return "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY";
    case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY: return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY";
    case VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY: return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY";
    case VK_PRIMITIVE_TOPOLOGY_PATCH_LIST: return "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST";
    default: break;
    }
    return "Unhandled VkPrimitiveTopology";
}

template <> std::string ToString<VkQueryControlFlagBits>(const VkQueryControlFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUERY_CONTROL_PRECISE_BIT: return "VK_QUERY_CONTROL_PRECISE_BIT";
    default: break;
    }
    return "Unhandled VkQueryControlFlagBits";
}

template <> std::string ToString<VkQueryControlFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkQueryControlFlagBits>(vkFlags);
}

template <> std::string ToString<VkQueryPipelineStatisticFlagBits>(const VkQueryPipelineStatisticFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT: return "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT: return "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT: return "VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT: return "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT: return "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT: return "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT: return "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT: return "VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT: return "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT: return "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT: return "VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT";
    case VK_QUERY_PIPELINE_STATISTIC_TASK_SHADER_INVOCATIONS_BIT_EXT: return "VK_QUERY_PIPELINE_STATISTIC_TASK_SHADER_INVOCATIONS_BIT_EXT";
    case VK_QUERY_PIPELINE_STATISTIC_MESH_SHADER_INVOCATIONS_BIT_EXT: return "VK_QUERY_PIPELINE_STATISTIC_MESH_SHADER_INVOCATIONS_BIT_EXT";
    case VK_QUERY_PIPELINE_STATISTIC_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI: return "VK_QUERY_PIPELINE_STATISTIC_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI";
    default: break;
    }
    return "Unhandled VkQueryPipelineStatisticFlagBits";
}

template <> std::string ToString<VkQueryPipelineStatisticFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkQueryPipelineStatisticFlagBits>(vkFlags);
}

template <> std::string ToString<VkQueryResultFlagBits>(const VkQueryResultFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUERY_RESULT_64_BIT: return "VK_QUERY_RESULT_64_BIT";
    case VK_QUERY_RESULT_WAIT_BIT: return "VK_QUERY_RESULT_WAIT_BIT";
    case VK_QUERY_RESULT_WITH_AVAILABILITY_BIT: return "VK_QUERY_RESULT_WITH_AVAILABILITY_BIT";
    case VK_QUERY_RESULT_PARTIAL_BIT: return "VK_QUERY_RESULT_PARTIAL_BIT";
    case VK_QUERY_RESULT_WITH_STATUS_BIT_KHR: return "VK_QUERY_RESULT_WITH_STATUS_BIT_KHR";
    default: break;
    }
    return "Unhandled VkQueryResultFlagBits";
}

template <> std::string ToString<VkQueryResultFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkQueryResultFlagBits>(vkFlags);
}

template <> std::string ToString<VkQueryType>(const VkQueryType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUERY_TYPE_OCCLUSION: return "VK_QUERY_TYPE_OCCLUSION";
    case VK_QUERY_TYPE_PIPELINE_STATISTICS: return "VK_QUERY_TYPE_PIPELINE_STATISTICS";
    case VK_QUERY_TYPE_TIMESTAMP: return "VK_QUERY_TYPE_TIMESTAMP";
    case VK_QUERY_TYPE_RESULT_STATUS_ONLY_KHR: return "VK_QUERY_TYPE_RESULT_STATUS_ONLY_KHR";
    case VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT: return "VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT";
    case VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR: return "VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR";
    case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR: return "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR";
    case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR: return "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR";
    case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV: return "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV";
    case VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL: return "VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL";
    case VK_QUERY_TYPE_VIDEO_ENCODE_FEEDBACK_KHR: return "VK_QUERY_TYPE_VIDEO_ENCODE_FEEDBACK_KHR";
    case VK_QUERY_TYPE_MESH_PRIMITIVES_GENERATED_EXT: return "VK_QUERY_TYPE_MESH_PRIMITIVES_GENERATED_EXT";
    case VK_QUERY_TYPE_PRIMITIVES_GENERATED_EXT: return "VK_QUERY_TYPE_PRIMITIVES_GENERATED_EXT";
    case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR: return "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR";
    case VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SIZE_KHR: return "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SIZE_KHR";
    case VK_QUERY_TYPE_MICROMAP_SERIALIZATION_SIZE_EXT: return "VK_QUERY_TYPE_MICROMAP_SERIALIZATION_SIZE_EXT";
    case VK_QUERY_TYPE_MICROMAP_COMPACTED_SIZE_EXT: return "VK_QUERY_TYPE_MICROMAP_COMPACTED_SIZE_EXT";
    default: break;
    }
    return "Unhandled VkQueryType";
}

template <> std::string ToString<VkQueueFlagBits>(const VkQueueFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUEUE_GRAPHICS_BIT: return "VK_QUEUE_GRAPHICS_BIT";
    case VK_QUEUE_COMPUTE_BIT: return "VK_QUEUE_COMPUTE_BIT";
    case VK_QUEUE_TRANSFER_BIT: return "VK_QUEUE_TRANSFER_BIT";
    case VK_QUEUE_SPARSE_BINDING_BIT: return "VK_QUEUE_SPARSE_BINDING_BIT";
    case VK_QUEUE_PROTECTED_BIT: return "VK_QUEUE_PROTECTED_BIT";
    case VK_QUEUE_VIDEO_DECODE_BIT_KHR: return "VK_QUEUE_VIDEO_DECODE_BIT_KHR";
    case VK_QUEUE_VIDEO_ENCODE_BIT_KHR: return "VK_QUEUE_VIDEO_ENCODE_BIT_KHR";
    case VK_QUEUE_OPTICAL_FLOW_BIT_NV: return "VK_QUEUE_OPTICAL_FLOW_BIT_NV";
    default: break;
    }
    return "Unhandled VkQueueFlagBits";
}

template <> std::string ToString<VkQueueFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkQueueFlagBits>(vkFlags);
}

template <> std::string ToString<VkRenderPassCreateFlagBits>(const VkRenderPassCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM: return "VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM";
    default: break;
    }
    return "Unhandled VkRenderPassCreateFlagBits";
}

template <> std::string ToString<VkRenderPassCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkRenderPassCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkResult>(const VkResult& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SUCCESS: return "VK_SUCCESS";
    case VK_NOT_READY: return "VK_NOT_READY";
    case VK_TIMEOUT: return "VK_TIMEOUT";
    case VK_EVENT_SET: return "VK_EVENT_SET";
    case VK_EVENT_RESET: return "VK_EVENT_RESET";
    case VK_INCOMPLETE: return "VK_INCOMPLETE";
    case VK_ERROR_OUT_OF_HOST_MEMORY: return "VK_ERROR_OUT_OF_HOST_MEMORY";
    case VK_ERROR_OUT_OF_DEVICE_MEMORY: return "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    case VK_ERROR_INITIALIZATION_FAILED: return "VK_ERROR_INITIALIZATION_FAILED";
    case VK_ERROR_DEVICE_LOST: return "VK_ERROR_DEVICE_LOST";
    case VK_ERROR_MEMORY_MAP_FAILED: return "VK_ERROR_MEMORY_MAP_FAILED";
    case VK_ERROR_LAYER_NOT_PRESENT: return "VK_ERROR_LAYER_NOT_PRESENT";
    case VK_ERROR_EXTENSION_NOT_PRESENT: return "VK_ERROR_EXTENSION_NOT_PRESENT";
    case VK_ERROR_FEATURE_NOT_PRESENT: return "VK_ERROR_FEATURE_NOT_PRESENT";
    case VK_ERROR_INCOMPATIBLE_DRIVER: return "VK_ERROR_INCOMPATIBLE_DRIVER";
    case VK_ERROR_TOO_MANY_OBJECTS: return "VK_ERROR_TOO_MANY_OBJECTS";
    case VK_ERROR_FORMAT_NOT_SUPPORTED: return "VK_ERROR_FORMAT_NOT_SUPPORTED";
    case VK_ERROR_FRAGMENTED_POOL: return "VK_ERROR_FRAGMENTED_POOL";
    case VK_ERROR_UNKNOWN: return "VK_ERROR_UNKNOWN";
    case VK_ERROR_OUT_OF_POOL_MEMORY: return "VK_ERROR_OUT_OF_POOL_MEMORY";
    case VK_ERROR_INVALID_EXTERNAL_HANDLE: return "VK_ERROR_INVALID_EXTERNAL_HANDLE";
    case VK_ERROR_FRAGMENTATION: return "VK_ERROR_FRAGMENTATION";
    case VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS: return "VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
    case VK_PIPELINE_COMPILE_REQUIRED: return "VK_PIPELINE_COMPILE_REQUIRED";
    case VK_ERROR_SURFACE_LOST_KHR: return "VK_ERROR_SURFACE_LOST_KHR";
    case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: return "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
    case VK_SUBOPTIMAL_KHR: return "VK_SUBOPTIMAL_KHR";
    case VK_ERROR_OUT_OF_DATE_KHR: return "VK_ERROR_OUT_OF_DATE_KHR";
    case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: return "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
    case VK_ERROR_VALIDATION_FAILED_EXT: return "VK_ERROR_VALIDATION_FAILED_EXT";
    case VK_ERROR_INVALID_SHADER_NV: return "VK_ERROR_INVALID_SHADER_NV";
    case VK_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR: return "VK_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR";
    case VK_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR: return "VK_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR";
    case VK_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR: return "VK_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR";
    case VK_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR: return "VK_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR";
    case VK_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR: return "VK_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR";
    case VK_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR: return "VK_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR";
    case VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT: return "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
    case VK_ERROR_NOT_PERMITTED_KHR: return "VK_ERROR_NOT_PERMITTED_KHR";
    case VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT: return "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
    case VK_THREAD_IDLE_KHR: return "VK_THREAD_IDLE_KHR";
    case VK_THREAD_DONE_KHR: return "VK_THREAD_DONE_KHR";
    case VK_OPERATION_DEFERRED_KHR: return "VK_OPERATION_DEFERRED_KHR";
    case VK_OPERATION_NOT_DEFERRED_KHR: return "VK_OPERATION_NOT_DEFERRED_KHR";
    case VK_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR: return "VK_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR";
    case VK_ERROR_COMPRESSION_EXHAUSTED_EXT: return "VK_ERROR_COMPRESSION_EXHAUSTED_EXT";
    default: break;
    }
    return "Unhandled VkResult";
}

template <> std::string ToString<VkSampleCountFlagBits>(const VkSampleCountFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLE_COUNT_1_BIT: return "VK_SAMPLE_COUNT_1_BIT";
    case VK_SAMPLE_COUNT_2_BIT: return "VK_SAMPLE_COUNT_2_BIT";
    case VK_SAMPLE_COUNT_4_BIT: return "VK_SAMPLE_COUNT_4_BIT";
    case VK_SAMPLE_COUNT_8_BIT: return "VK_SAMPLE_COUNT_8_BIT";
    case VK_SAMPLE_COUNT_16_BIT: return "VK_SAMPLE_COUNT_16_BIT";
    case VK_SAMPLE_COUNT_32_BIT: return "VK_SAMPLE_COUNT_32_BIT";
    case VK_SAMPLE_COUNT_64_BIT: return "VK_SAMPLE_COUNT_64_BIT";
    default: break;
    }
    return "Unhandled VkSampleCountFlagBits";
}

template <> std::string ToString<VkSampleCountFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSampleCountFlagBits>(vkFlags);
}

template <> std::string ToString<VkSamplerAddressMode>(const VkSamplerAddressMode& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLER_ADDRESS_MODE_REPEAT: return "VK_SAMPLER_ADDRESS_MODE_REPEAT";
    case VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT: return "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT";
    case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE: return "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE";
    case VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER: return "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER";
    case VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE: return "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE";
    default: break;
    }
    return "Unhandled VkSamplerAddressMode";
}

template <> std::string ToString<VkSamplerCreateFlagBits>(const VkSamplerCreateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT: return "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT";
    case VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT: return "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT";
    case VK_SAMPLER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT: return "VK_SAMPLER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
    case VK_SAMPLER_CREATE_NON_SEAMLESS_CUBE_MAP_BIT_EXT: return "VK_SAMPLER_CREATE_NON_SEAMLESS_CUBE_MAP_BIT_EXT";
    case VK_SAMPLER_CREATE_IMAGE_PROCESSING_BIT_QCOM: return "VK_SAMPLER_CREATE_IMAGE_PROCESSING_BIT_QCOM";
    default: break;
    }
    return "Unhandled VkSamplerCreateFlagBits";
}

template <> std::string ToString<VkSamplerCreateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSamplerCreateFlagBits>(vkFlags);
}

template <> std::string ToString<VkSamplerMipmapMode>(const VkSamplerMipmapMode& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLER_MIPMAP_MODE_NEAREST: return "VK_SAMPLER_MIPMAP_MODE_NEAREST";
    case VK_SAMPLER_MIPMAP_MODE_LINEAR: return "VK_SAMPLER_MIPMAP_MODE_LINEAR";
    default: break;
    }
    return "Unhandled VkSamplerMipmapMode";
}

template <> std::string ToString<VkShaderStageFlagBits>(const VkShaderStageFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SHADER_STAGE_VERTEX_BIT: return "VK_SHADER_STAGE_VERTEX_BIT";
    case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT: return "VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT";
    case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT: return "VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT";
    case VK_SHADER_STAGE_GEOMETRY_BIT: return "VK_SHADER_STAGE_GEOMETRY_BIT";
    case VK_SHADER_STAGE_FRAGMENT_BIT: return "VK_SHADER_STAGE_FRAGMENT_BIT";
    case VK_SHADER_STAGE_COMPUTE_BIT: return "VK_SHADER_STAGE_COMPUTE_BIT";
    case VK_SHADER_STAGE_ALL_GRAPHICS: return "VK_SHADER_STAGE_ALL_GRAPHICS";
    case VK_SHADER_STAGE_ALL: return "VK_SHADER_STAGE_ALL";
    case VK_SHADER_STAGE_RAYGEN_BIT_KHR: return "VK_SHADER_STAGE_RAYGEN_BIT_KHR";
    case VK_SHADER_STAGE_ANY_HIT_BIT_KHR: return "VK_SHADER_STAGE_ANY_HIT_BIT_KHR";
    case VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR: return "VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR";
    case VK_SHADER_STAGE_MISS_BIT_KHR: return "VK_SHADER_STAGE_MISS_BIT_KHR";
    case VK_SHADER_STAGE_INTERSECTION_BIT_KHR: return "VK_SHADER_STAGE_INTERSECTION_BIT_KHR";
    case VK_SHADER_STAGE_CALLABLE_BIT_KHR: return "VK_SHADER_STAGE_CALLABLE_BIT_KHR";
    case VK_SHADER_STAGE_TASK_BIT_EXT: return "VK_SHADER_STAGE_TASK_BIT_EXT";
    case VK_SHADER_STAGE_MESH_BIT_EXT: return "VK_SHADER_STAGE_MESH_BIT_EXT";
    case VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI: return "VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI";
    case VK_SHADER_STAGE_CLUSTER_CULLING_BIT_HUAWEI: return "VK_SHADER_STAGE_CLUSTER_CULLING_BIT_HUAWEI";
    default: break;
    }
    return "Unhandled VkShaderStageFlagBits";
}

template <> std::string ToString<VkShaderStageFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkShaderStageFlagBits>(vkFlags);
}

template <> std::string ToString<VkSharingMode>(const VkSharingMode& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SHARING_MODE_EXCLUSIVE: return "VK_SHARING_MODE_EXCLUSIVE";
    case VK_SHARING_MODE_CONCURRENT: return "VK_SHARING_MODE_CONCURRENT";
    default: break;
    }
    return "Unhandled VkSharingMode";
}

template <> std::string ToString<VkSparseImageFormatFlagBits>(const VkSparseImageFormatFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT: return "VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT";
    case VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT: return "VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT";
    case VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT: return "VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT";
    default: break;
    }
    return "Unhandled VkSparseImageFormatFlagBits";
}

template <> std::string ToString<VkSparseImageFormatFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSparseImageFormatFlagBits>(vkFlags);
}

template <> std::string ToString<VkSparseMemoryBindFlagBits>(const VkSparseMemoryBindFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SPARSE_MEMORY_BIND_METADATA_BIT: return "VK_SPARSE_MEMORY_BIND_METADATA_BIT";
    default: break;
    }
    return "Unhandled VkSparseMemoryBindFlagBits";
}

template <> std::string ToString<VkSparseMemoryBindFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSparseMemoryBindFlagBits>(vkFlags);
}

template <> std::string ToString<VkStencilFaceFlagBits>(const VkStencilFaceFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_STENCIL_FACE_FRONT_BIT: return "VK_STENCIL_FACE_FRONT_BIT";
    case VK_STENCIL_FACE_BACK_BIT: return "VK_STENCIL_FACE_BACK_BIT";
    case VK_STENCIL_FACE_FRONT_AND_BACK: return "VK_STENCIL_FACE_FRONT_AND_BACK";
    default: break;
    }
    return "Unhandled VkStencilFaceFlagBits";
}

template <> std::string ToString<VkStencilFaceFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkStencilFaceFlagBits>(vkFlags);
}

template <> std::string ToString<VkStencilOp>(const VkStencilOp& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_STENCIL_OP_KEEP: return "VK_STENCIL_OP_KEEP";
    case VK_STENCIL_OP_ZERO: return "VK_STENCIL_OP_ZERO";
    case VK_STENCIL_OP_REPLACE: return "VK_STENCIL_OP_REPLACE";
    case VK_STENCIL_OP_INCREMENT_AND_CLAMP: return "VK_STENCIL_OP_INCREMENT_AND_CLAMP";
    case VK_STENCIL_OP_DECREMENT_AND_CLAMP: return "VK_STENCIL_OP_DECREMENT_AND_CLAMP";
    case VK_STENCIL_OP_INVERT: return "VK_STENCIL_OP_INVERT";
    case VK_STENCIL_OP_INCREMENT_AND_WRAP: return "VK_STENCIL_OP_INCREMENT_AND_WRAP";
    case VK_STENCIL_OP_DECREMENT_AND_WRAP: return "VK_STENCIL_OP_DECREMENT_AND_WRAP";
    default: break;
    }
    return "Unhandled VkStencilOp";
}

template <> std::string ToString<VkStructureType>(const VkStructureType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_STRUCTURE_TYPE_APPLICATION_INFO: return "VK_STRUCTURE_TYPE_APPLICATION_INFO";
    case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: return "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: return "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: return "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_SUBMIT_INFO: return "VK_STRUCTURE_TYPE_SUBMIT_INFO";
    case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: return "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE";
    case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: return "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO";
    case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: return "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: return "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: return "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO";
    case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: return "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO";
    case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: return "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO";
    case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: return "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO";
    case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: return "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO";
    case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: return "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: return "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: return "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO";
    case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: return "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: return "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET";
    case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: return "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET";
    case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: return "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO";
    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: return "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO";
    case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: return "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO";
    case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: return "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO";
    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: return "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER";
    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: return "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER";
    case VK_STRUCTURE_TYPE_MEMORY_BARRIER: return "VK_STRUCTURE_TYPE_MEMORY_BARRIER";
    case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: return "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: return "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES";
    case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO: return "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO";
    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO: return "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES";
    case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: return "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS";
    case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: return "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO";
    case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: return "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO";
    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: return "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2: return "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2";
    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2: return "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2";
    case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2: return "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2";
    case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2: return "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2";
    case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2: return "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2";
    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: return "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2";
    case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2: return "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2";
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2: return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2";
    case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2: return "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES";
    case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: return "VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: return "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES";
    case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: return "VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES";
    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2: return "VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2";
    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO: return "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO";
    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: return "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO";
    case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: return "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO";
    case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: return "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES";
    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: return "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO";
    case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: return "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO";
    case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES: return "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES";
    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: return "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO";
    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: return "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO";
    case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES: return "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES";
    case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: return "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: return "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO";
    case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES: return "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES";
    case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: return "VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO";
    case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2: return "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2";
    case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2: return "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2";
    case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2: return "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2";
    case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2: return "VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2";
    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2: return "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2";
    case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO: return "VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO";
    case VK_STRUCTURE_TYPE_SUBPASS_END_INFO: return "VK_STRUCTURE_TYPE_SUBPASS_END_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES";
    case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: return "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES";
    case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: return "VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES";
    case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: return "VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES";
    case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: return "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO";
    case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO: return "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO";
    case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: return "VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES";
    case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: return "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT";
    case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: return "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES";
    case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: return "VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: return "VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO";
    case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO: return "VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO";
    case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO: return "VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES";
    case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO: return "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO";
    case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: return "VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO";
    case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: return "VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO";
    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO: return "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES";
    case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES";
    case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO: return "VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO: return "VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES";
    case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2: return "VK_STRUCTURE_TYPE_MEMORY_BARRIER_2";
    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2: return "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2";
    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2: return "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2";
    case VK_STRUCTURE_TYPE_DEPENDENCY_INFO: return "VK_STRUCTURE_TYPE_DEPENDENCY_INFO";
    case VK_STRUCTURE_TYPE_SUBMIT_INFO_2: return "VK_STRUCTURE_TYPE_SUBMIT_INFO_2";
    case VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO: return "VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES";
    case VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2: return "VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2";
    case VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2: return "VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2";
    case VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2: return "VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2";
    case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2: return "VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2";
    case VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2: return "VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2";
    case VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2: return "VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2";
    case VK_STRUCTURE_TYPE_BUFFER_COPY_2: return "VK_STRUCTURE_TYPE_BUFFER_COPY_2";
    case VK_STRUCTURE_TYPE_IMAGE_COPY_2: return "VK_STRUCTURE_TYPE_IMAGE_COPY_2";
    case VK_STRUCTURE_TYPE_IMAGE_BLIT_2: return "VK_STRUCTURE_TYPE_IMAGE_BLIT_2";
    case VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2: return "VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2";
    case VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2: return "VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES";
    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES";
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK: return "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO: return "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES";
    case VK_STRUCTURE_TYPE_RENDERING_INFO: return "VK_STRUCTURE_TYPE_RENDERING_INFO";
    case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO: return "VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO";
    case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO: return "VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES";
    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3: return "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES";
    case VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS: return "VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS";
    case VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS: return "VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: return "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: return "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR";
    case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: return "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR";
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR";
    case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD";
    case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT";
    case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT";
    case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR: return "VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR";
    case VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR: return "VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR";
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR";
    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: return "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX: return "VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX";
    case VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX: return "VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX";
    case VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX: return "VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_VCL_FRAME_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_VCL_FRAME_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_VCL_FRAME_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_VCL_FRAME_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_EXT: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_EXT";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR";
    case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: return "VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD";
    case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: return "VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR";
    case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT: return "VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT";
    case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD: return "VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD";
    case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX: return "VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX";
    case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: return "VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV";
    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: return "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV";
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: return "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV";
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: return "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV";
    case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: return "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV";
    case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: return "VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT";
    case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: return "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: return "VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR";
    case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: return "VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR";
    case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: return "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR";
    case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: return "VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR";
    case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: return "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR";
    case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: return "VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: return "VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT";
    case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: return "VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: return "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT";
    case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: return "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT";
    case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: return "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT";
    case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: return "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: return "VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: return "VK_STRUCTURE_TYPE_HDR_METADATA_EXT";
    case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: return "VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: return "VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR";
    case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: return "VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: return "VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR";
    case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: return "VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR";
    case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: return "VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR";
    case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: return "VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR";
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: return "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR";
    case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: return "VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR";
    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: return "VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR";
    case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK: return "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK";
    case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK: return "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK";
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT";
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT";
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: return "VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT";
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: return "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT";
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID: return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID";
    case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID: return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID";
    case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID: return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID";
    case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: return "VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID";
    case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: return "VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID";
    case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: return "VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID";
    case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID: return "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID";
    case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: return "VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT";
    case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: return "VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: return "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR";
    case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: return "VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR";
    case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: return "VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR";
    case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: return "VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: return "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT: return "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT";
    case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_GEOMETRY_NV: return "VK_STRUCTURE_TYPE_GEOMETRY_NV";
    case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: return "VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV";
    case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV: return "VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV";
    case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV: return "VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV";
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV: return "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT";
    case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: return "VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT";
    case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: return "VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD";
    case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: return "VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR";
    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: return "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: return "VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV";
    case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: return "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV";
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL";
    case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: return "VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL";
    case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: return "VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL";
    case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: return "VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL";
    case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: return "VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL";
    case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: return "VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL";
    case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: return "VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: return "VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: return "VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD";
    case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: return "VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: return "VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: return "VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV";
    case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: return "VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: return "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: return "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: return "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT";
    case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR";
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT: return "VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT: return "VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT";
    case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT: return "VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT: return "VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT: return "VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT: return "VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: return "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV";
    case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: return "VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV";
    case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: return "VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM";
    case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: return "VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT: return "VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV";
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV: return "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV";
    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_PRESENT_ID_KHR: return "VK_STRUCTURE_TYPE_PRESENT_ID_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR";
    case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR: return "VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR";
    case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR: return "VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV";
    case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV: return "VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECTS_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECTS_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT: return "VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT: return "VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT: return "VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT";
    case VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT: return "VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT: return "VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT";
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV: return "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV";
    case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV: return "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT: return "VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT: return "VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT";
    case VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT: return "VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT: return "VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
    case VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT: return "VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
    case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT: return "VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT: return "VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM: return "VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT: return "VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT";
    case VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_EXT: return "VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_EXT: return "VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT: return "VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT";
    case VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT: return "VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT: return "VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT";
    case VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT: return "VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT: return "VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA: return "VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA";
    case VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CREATE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CREATE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA: return "VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA";
    case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_PROPERTIES_FUCHSIA: return "VK_STRUCTURE_TYPE_BUFFER_COLLECTION_PROPERTIES_FUCHSIA";
    case VK_STRUCTURE_TYPE_BUFFER_CONSTRAINTS_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_BUFFER_CONSTRAINTS_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_IMAGE_CONSTRAINTS_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_IMAGE_CONSTRAINTS_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_SYSMEM_COLOR_SPACE_FUCHSIA: return "VK_STRUCTURE_TYPE_SYSMEM_COLOR_SPACE_FUCHSIA";
    case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA: return "VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA";
    case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI: return "VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI";
    case VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV: return "VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT: return "VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT";
    case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT: return "VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX: return "VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT: return "VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT";
    case VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT: return "VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT";
    case VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT: return "VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT";
    case VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT: return "VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT";
    case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT: return "VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT: return "VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT";
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT: return "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE";
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE: return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM";
    case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM: return "VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM";
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM: return "VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT: return "VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT";
    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG: return "VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG";
    case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG: return "VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT";
    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT: return "VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV: return "VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV";
    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV: return "VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV";
    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV: return "VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV";
    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV: return "VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM";
    case VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM: return "VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC";
    case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC: return "VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT: return "VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT";
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: return "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM";
    case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM: return "VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM";
    default: break;
    }
    return "Unhandled VkStructureType";
}

template <> std::string ToString<VkSubpassContents>(const VkSubpassContents& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SUBPASS_CONTENTS_INLINE: return "VK_SUBPASS_CONTENTS_INLINE";
    case VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS: return "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS";
    default: break;
    }
    return "Unhandled VkSubpassContents";
}

template <> std::string ToString<VkSubpassDescriptionFlagBits>(const VkSubpassDescriptionFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX: return "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX";
    case VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX: return "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX";
    case VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM: return "VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM";
    case VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM: return "VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM";
    case VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT: return "VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT";
    case VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT: return "VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT";
    case VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT: return "VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT";
    case VK_SUBPASS_DESCRIPTION_ENABLE_LEGACY_DITHERING_BIT_EXT: return "VK_SUBPASS_DESCRIPTION_ENABLE_LEGACY_DITHERING_BIT_EXT";
    default: break;
    }
    return "Unhandled VkSubpassDescriptionFlagBits";
}

template <> std::string ToString<VkSubpassDescriptionFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSubpassDescriptionFlagBits>(vkFlags);
}

template <> std::string ToString<VkSystemAllocationScope>(const VkSystemAllocationScope& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SYSTEM_ALLOCATION_SCOPE_COMMAND: return "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND";
    case VK_SYSTEM_ALLOCATION_SCOPE_OBJECT: return "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT";
    case VK_SYSTEM_ALLOCATION_SCOPE_CACHE: return "VK_SYSTEM_ALLOCATION_SCOPE_CACHE";
    case VK_SYSTEM_ALLOCATION_SCOPE_DEVICE: return "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE";
    case VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE: return "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE";
    default: break;
    }
    return "Unhandled VkSystemAllocationScope";
}

template <> std::string ToString<VkVendorId>(const VkVendorId& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VENDOR_ID_VIV: return "VK_VENDOR_ID_VIV";
    case VK_VENDOR_ID_VSI: return "VK_VENDOR_ID_VSI";
    case VK_VENDOR_ID_KAZAN: return "VK_VENDOR_ID_KAZAN";
    case VK_VENDOR_ID_CODEPLAY: return "VK_VENDOR_ID_CODEPLAY";
    case VK_VENDOR_ID_MESA: return "VK_VENDOR_ID_MESA";
    case VK_VENDOR_ID_POCL: return "VK_VENDOR_ID_POCL";
    case VK_VENDOR_ID_MOBILEYE: return "VK_VENDOR_ID_MOBILEYE";
    default: break;
    }
    return "Unhandled VkVendorId";
}

template <> std::string ToString<VkVertexInputRate>(const VkVertexInputRate& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VERTEX_INPUT_RATE_VERTEX: return "VK_VERTEX_INPUT_RATE_VERTEX";
    case VK_VERTEX_INPUT_RATE_INSTANCE: return "VK_VERTEX_INPUT_RATE_INSTANCE";
    default: break;
    }
    return "Unhandled VkVertexInputRate";
}

template <> std::string ToString<VkChromaLocation>(const VkChromaLocation& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_CHROMA_LOCATION_COSITED_EVEN: return "VK_CHROMA_LOCATION_COSITED_EVEN";
    case VK_CHROMA_LOCATION_MIDPOINT: return "VK_CHROMA_LOCATION_MIDPOINT";
    default: break;
    }
    return "Unhandled VkChromaLocation";
}

template <> std::string ToString<VkDescriptorUpdateTemplateType>(const VkDescriptorUpdateTemplateType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET: return "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET";
    case VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR: return "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR";
    default: break;
    }
    return "Unhandled VkDescriptorUpdateTemplateType";
}

template <> std::string ToString<VkExternalFenceFeatureFlagBits>(const VkExternalFenceFeatureFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT: return "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT";
    case VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT: return "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT";
    default: break;
    }
    return "Unhandled VkExternalFenceFeatureFlagBits";
}

template <> std::string ToString<VkExternalFenceFeatureFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalFenceFeatureFlagBits>(vkFlags);
}

template <> std::string ToString<VkExternalFenceHandleTypeFlagBits>(const VkExternalFenceHandleTypeFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT: return "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT";
    case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT: return "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT";
    case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT: return "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT";
    case VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT: return "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT";
    default: break;
    }
    return "Unhandled VkExternalFenceHandleTypeFlagBits";
}

template <> std::string ToString<VkExternalFenceHandleTypeFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalFenceHandleTypeFlagBits>(vkFlags);
}

template <> std::string ToString<VkExternalMemoryFeatureFlagBits>(const VkExternalMemoryFeatureFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT: return "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT";
    case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT: return "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT";
    case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT: return "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT";
    default: break;
    }
    return "Unhandled VkExternalMemoryFeatureFlagBits";
}

template <> std::string ToString<VkExternalMemoryFeatureFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalMemoryFeatureFlagBits>(vkFlags);
}

template <> std::string ToString<VkExternalMemoryHandleTypeFlagBits>(const VkExternalMemoryHandleTypeFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_ZIRCON_VMO_BIT_FUCHSIA: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_ZIRCON_VMO_BIT_FUCHSIA";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_RDMA_ADDRESS_BIT_NV: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_RDMA_ADDRESS_BIT_NV";
    default: break;
    }
    return "Unhandled VkExternalMemoryHandleTypeFlagBits";
}

template <> std::string ToString<VkExternalMemoryHandleTypeFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalMemoryHandleTypeFlagBits>(vkFlags);
}

template <> std::string ToString<VkExternalSemaphoreFeatureFlagBits>(const VkExternalSemaphoreFeatureFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT: return "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT";
    case VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT: return "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT";
    default: break;
    }
    return "Unhandled VkExternalSemaphoreFeatureFlagBits";
}

template <> std::string ToString<VkExternalSemaphoreFeatureFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalSemaphoreFeatureFlagBits>(vkFlags);
}

template <> std::string ToString<VkExternalSemaphoreHandleTypeFlagBits>(const VkExternalSemaphoreHandleTypeFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT: return "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT";
    case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT: return "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT";
    case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT: return "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT";
    case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT: return "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT";
    case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT: return "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT";
    case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA: return "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA";
    default: break;
    }
    return "Unhandled VkExternalSemaphoreHandleTypeFlagBits";
}

template <> std::string ToString<VkExternalSemaphoreHandleTypeFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalSemaphoreHandleTypeFlagBits>(vkFlags);
}

template <> std::string ToString<VkFenceImportFlagBits>(const VkFenceImportFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FENCE_IMPORT_TEMPORARY_BIT: return "VK_FENCE_IMPORT_TEMPORARY_BIT";
    default: break;
    }
    return "Unhandled VkFenceImportFlagBits";
}

template <> std::string ToString<VkFenceImportFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkFenceImportFlagBits>(vkFlags);
}

template <> std::string ToString<VkMemoryAllocateFlagBits>(const VkMemoryAllocateFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT: return "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT";
    case VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT: return "VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT";
    case VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT: return "VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT";
    default: break;
    }
    return "Unhandled VkMemoryAllocateFlagBits";
}

template <> std::string ToString<VkMemoryAllocateFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkMemoryAllocateFlagBits>(vkFlags);
}

template <> std::string ToString<VkPeerMemoryFeatureFlagBits>(const VkPeerMemoryFeatureFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT: return "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT";
    case VK_PEER_MEMORY_FEATURE_COPY_DST_BIT: return "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT";
    case VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT: return "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT";
    case VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT: return "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT";
    default: break;
    }
    return "Unhandled VkPeerMemoryFeatureFlagBits";
}

template <> std::string ToString<VkPeerMemoryFeatureFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPeerMemoryFeatureFlagBits>(vkFlags);
}

template <> std::string ToString<VkPointClippingBehavior>(const VkPointClippingBehavior& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES: return "VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES";
    case VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY: return "VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY";
    default: break;
    }
    return "Unhandled VkPointClippingBehavior";
}

template <> std::string ToString<VkSamplerYcbcrModelConversion>(const VkSamplerYcbcrModelConversion& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY: return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY";
    case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY: return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY";
    case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709: return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709";
    case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601: return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601";
    case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020: return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020";
    default: break;
    }
    return "Unhandled VkSamplerYcbcrModelConversion";
}

template <> std::string ToString<VkSamplerYcbcrRange>(const VkSamplerYcbcrRange& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLER_YCBCR_RANGE_ITU_FULL: return "VK_SAMPLER_YCBCR_RANGE_ITU_FULL";
    case VK_SAMPLER_YCBCR_RANGE_ITU_NARROW: return "VK_SAMPLER_YCBCR_RANGE_ITU_NARROW";
    default: break;
    }
    return "Unhandled VkSamplerYcbcrRange";
}

template <> std::string ToString<VkSemaphoreImportFlagBits>(const VkSemaphoreImportFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SEMAPHORE_IMPORT_TEMPORARY_BIT: return "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT";
    default: break;
    }
    return "Unhandled VkSemaphoreImportFlagBits";
}

template <> std::string ToString<VkSemaphoreImportFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSemaphoreImportFlagBits>(vkFlags);
}

template <> std::string ToString<VkSubgroupFeatureFlagBits>(const VkSubgroupFeatureFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SUBGROUP_FEATURE_BASIC_BIT: return "VK_SUBGROUP_FEATURE_BASIC_BIT";
    case VK_SUBGROUP_FEATURE_VOTE_BIT: return "VK_SUBGROUP_FEATURE_VOTE_BIT";
    case VK_SUBGROUP_FEATURE_ARITHMETIC_BIT: return "VK_SUBGROUP_FEATURE_ARITHMETIC_BIT";
    case VK_SUBGROUP_FEATURE_BALLOT_BIT: return "VK_SUBGROUP_FEATURE_BALLOT_BIT";
    case VK_SUBGROUP_FEATURE_SHUFFLE_BIT: return "VK_SUBGROUP_FEATURE_SHUFFLE_BIT";
    case VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT: return "VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT";
    case VK_SUBGROUP_FEATURE_CLUSTERED_BIT: return "VK_SUBGROUP_FEATURE_CLUSTERED_BIT";
    case VK_SUBGROUP_FEATURE_QUAD_BIT: return "VK_SUBGROUP_FEATURE_QUAD_BIT";
    case VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV: return "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV";
    default: break;
    }
    return "Unhandled VkSubgroupFeatureFlagBits";
}

template <> std::string ToString<VkSubgroupFeatureFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSubgroupFeatureFlagBits>(vkFlags);
}

template <> std::string ToString<VkTessellationDomainOrigin>(const VkTessellationDomainOrigin& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT: return "VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT";
    case VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT: return "VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT";
    default: break;
    }
    return "Unhandled VkTessellationDomainOrigin";
}

template <> std::string ToString<VkDescriptorBindingFlagBits>(const VkDescriptorBindingFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT: return "VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT";
    case VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT: return "VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT";
    case VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT: return "VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT";
    case VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT: return "VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT";
    default: break;
    }
    return "Unhandled VkDescriptorBindingFlagBits";
}

template <> std::string ToString<VkDescriptorBindingFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDescriptorBindingFlagBits>(vkFlags);
}

template <> std::string ToString<VkDriverId>(const VkDriverId& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DRIVER_ID_AMD_PROPRIETARY: return "VK_DRIVER_ID_AMD_PROPRIETARY";
    case VK_DRIVER_ID_AMD_OPEN_SOURCE: return "VK_DRIVER_ID_AMD_OPEN_SOURCE";
    case VK_DRIVER_ID_MESA_RADV: return "VK_DRIVER_ID_MESA_RADV";
    case VK_DRIVER_ID_NVIDIA_PROPRIETARY: return "VK_DRIVER_ID_NVIDIA_PROPRIETARY";
    case VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS: return "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS";
    case VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA: return "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA";
    case VK_DRIVER_ID_IMAGINATION_PROPRIETARY: return "VK_DRIVER_ID_IMAGINATION_PROPRIETARY";
    case VK_DRIVER_ID_QUALCOMM_PROPRIETARY: return "VK_DRIVER_ID_QUALCOMM_PROPRIETARY";
    case VK_DRIVER_ID_ARM_PROPRIETARY: return "VK_DRIVER_ID_ARM_PROPRIETARY";
    case VK_DRIVER_ID_GOOGLE_SWIFTSHADER: return "VK_DRIVER_ID_GOOGLE_SWIFTSHADER";
    case VK_DRIVER_ID_GGP_PROPRIETARY: return "VK_DRIVER_ID_GGP_PROPRIETARY";
    case VK_DRIVER_ID_BROADCOM_PROPRIETARY: return "VK_DRIVER_ID_BROADCOM_PROPRIETARY";
    case VK_DRIVER_ID_MESA_LLVMPIPE: return "VK_DRIVER_ID_MESA_LLVMPIPE";
    case VK_DRIVER_ID_MOLTENVK: return "VK_DRIVER_ID_MOLTENVK";
    case VK_DRIVER_ID_COREAVI_PROPRIETARY: return "VK_DRIVER_ID_COREAVI_PROPRIETARY";
    case VK_DRIVER_ID_JUICE_PROPRIETARY: return "VK_DRIVER_ID_JUICE_PROPRIETARY";
    case VK_DRIVER_ID_VERISILICON_PROPRIETARY: return "VK_DRIVER_ID_VERISILICON_PROPRIETARY";
    case VK_DRIVER_ID_MESA_TURNIP: return "VK_DRIVER_ID_MESA_TURNIP";
    case VK_DRIVER_ID_MESA_V3DV: return "VK_DRIVER_ID_MESA_V3DV";
    case VK_DRIVER_ID_MESA_PANVK: return "VK_DRIVER_ID_MESA_PANVK";
    case VK_DRIVER_ID_SAMSUNG_PROPRIETARY: return "VK_DRIVER_ID_SAMSUNG_PROPRIETARY";
    case VK_DRIVER_ID_MESA_VENUS: return "VK_DRIVER_ID_MESA_VENUS";
    case VK_DRIVER_ID_MESA_DOZEN: return "VK_DRIVER_ID_MESA_DOZEN";
    case VK_DRIVER_ID_MESA_NVK: return "VK_DRIVER_ID_MESA_NVK";
    case VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA: return "VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA";
    default: break;
    }
    return "Unhandled VkDriverId";
}

template <> std::string ToString<VkResolveModeFlagBits>(const VkResolveModeFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_RESOLVE_MODE_NONE: return "VK_RESOLVE_MODE_NONE";
    case VK_RESOLVE_MODE_SAMPLE_ZERO_BIT: return "VK_RESOLVE_MODE_SAMPLE_ZERO_BIT";
    case VK_RESOLVE_MODE_AVERAGE_BIT: return "VK_RESOLVE_MODE_AVERAGE_BIT";
    case VK_RESOLVE_MODE_MIN_BIT: return "VK_RESOLVE_MODE_MIN_BIT";
    case VK_RESOLVE_MODE_MAX_BIT: return "VK_RESOLVE_MODE_MAX_BIT";
    default: break;
    }
    return "Unhandled VkResolveModeFlagBits";
}

template <> std::string ToString<VkResolveModeFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkResolveModeFlagBits>(vkFlags);
}

template <> std::string ToString<VkSamplerReductionMode>(const VkSamplerReductionMode& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE: return "VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE";
    case VK_SAMPLER_REDUCTION_MODE_MIN: return "VK_SAMPLER_REDUCTION_MODE_MIN";
    case VK_SAMPLER_REDUCTION_MODE_MAX: return "VK_SAMPLER_REDUCTION_MODE_MAX";
    default: break;
    }
    return "Unhandled VkSamplerReductionMode";
}

template <> std::string ToString<VkSemaphoreType>(const VkSemaphoreType& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SEMAPHORE_TYPE_BINARY: return "VK_SEMAPHORE_TYPE_BINARY";
    case VK_SEMAPHORE_TYPE_TIMELINE: return "VK_SEMAPHORE_TYPE_TIMELINE";
    default: break;
    }
    return "Unhandled VkSemaphoreType";
}

template <> std::string ToString<VkSemaphoreWaitFlagBits>(const VkSemaphoreWaitFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SEMAPHORE_WAIT_ANY_BIT: return "VK_SEMAPHORE_WAIT_ANY_BIT";
    default: break;
    }
    return "Unhandled VkSemaphoreWaitFlagBits";
}

template <> std::string ToString<VkSemaphoreWaitFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSemaphoreWaitFlagBits>(vkFlags);
}

template <> std::string ToString<VkShaderFloatControlsIndependence>(const VkShaderFloatControlsIndependence& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY: return "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY";
    case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL: return "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL";
    case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE: return "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE";
    default: break;
    }
    return "Unhandled VkShaderFloatControlsIndependence";
}

std::string VkAccessFlagBits2ToString(const VkAccessFlagBits2 value)
{
    switch (value) {
    case VK_ACCESS_2_NONE: return "VK_ACCESS_2_NONE";
    case VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT: return "VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT";
    case VK_ACCESS_2_INDEX_READ_BIT: return "VK_ACCESS_2_INDEX_READ_BIT";
    case VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT: return "VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT";
    case VK_ACCESS_2_UNIFORM_READ_BIT: return "VK_ACCESS_2_UNIFORM_READ_BIT";
    case VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT: return "VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT";
    case VK_ACCESS_2_SHADER_READ_BIT: return "VK_ACCESS_2_SHADER_READ_BIT";
    case VK_ACCESS_2_SHADER_WRITE_BIT: return "VK_ACCESS_2_SHADER_WRITE_BIT";
    case VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT: return "VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT";
    case VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT: return "VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT";
    case VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT: return "VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT";
    case VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT: return "VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT";
    case VK_ACCESS_2_TRANSFER_READ_BIT: return "VK_ACCESS_2_TRANSFER_READ_BIT";
    case VK_ACCESS_2_TRANSFER_WRITE_BIT: return "VK_ACCESS_2_TRANSFER_WRITE_BIT";
    case VK_ACCESS_2_HOST_READ_BIT: return "VK_ACCESS_2_HOST_READ_BIT";
    case VK_ACCESS_2_HOST_WRITE_BIT: return "VK_ACCESS_2_HOST_WRITE_BIT";
    case VK_ACCESS_2_MEMORY_READ_BIT: return "VK_ACCESS_2_MEMORY_READ_BIT";
    case VK_ACCESS_2_MEMORY_WRITE_BIT: return "VK_ACCESS_2_MEMORY_WRITE_BIT";
    case VK_ACCESS_2_SHADER_SAMPLED_READ_BIT: return "VK_ACCESS_2_SHADER_SAMPLED_READ_BIT";
    case VK_ACCESS_2_SHADER_STORAGE_READ_BIT: return "VK_ACCESS_2_SHADER_STORAGE_READ_BIT";
    case VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT: return "VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT";
    case VK_ACCESS_2_VIDEO_DECODE_READ_BIT_KHR: return "VK_ACCESS_2_VIDEO_DECODE_READ_BIT_KHR";
    case VK_ACCESS_2_VIDEO_DECODE_WRITE_BIT_KHR: return "VK_ACCESS_2_VIDEO_DECODE_WRITE_BIT_KHR";
    case VK_ACCESS_2_VIDEO_ENCODE_READ_BIT_KHR: return "VK_ACCESS_2_VIDEO_ENCODE_READ_BIT_KHR";
    case VK_ACCESS_2_VIDEO_ENCODE_WRITE_BIT_KHR: return "VK_ACCESS_2_VIDEO_ENCODE_WRITE_BIT_KHR";
    case VK_ACCESS_2_TRANSFORM_FEEDBACK_WRITE_BIT_EXT: return "VK_ACCESS_2_TRANSFORM_FEEDBACK_WRITE_BIT_EXT";
    case VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT: return "VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT";
    case VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT: return "VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT";
    case VK_ACCESS_2_CONDITIONAL_RENDERING_READ_BIT_EXT: return "VK_ACCESS_2_CONDITIONAL_RENDERING_READ_BIT_EXT";
    case VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_NV: return "VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_NV";
    case VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_NV: return "VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_NV";
    case VK_ACCESS_2_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR: return "VK_ACCESS_2_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR";
    case VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_KHR: return "VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_KHR";
    case VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_KHR: return "VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_KHR";
    case VK_ACCESS_2_FRAGMENT_DENSITY_MAP_READ_BIT_EXT: return "VK_ACCESS_2_FRAGMENT_DENSITY_MAP_READ_BIT_EXT";
    case VK_ACCESS_2_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT: return "VK_ACCESS_2_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT";
    case VK_ACCESS_2_DESCRIPTOR_BUFFER_READ_BIT_EXT: return "VK_ACCESS_2_DESCRIPTOR_BUFFER_READ_BIT_EXT";
    case VK_ACCESS_2_INVOCATION_MASK_READ_BIT_HUAWEI: return "VK_ACCESS_2_INVOCATION_MASK_READ_BIT_HUAWEI";
    case VK_ACCESS_2_SHADER_BINDING_TABLE_READ_BIT_KHR: return "VK_ACCESS_2_SHADER_BINDING_TABLE_READ_BIT_KHR";
    case VK_ACCESS_2_MICROMAP_READ_BIT_EXT: return "VK_ACCESS_2_MICROMAP_READ_BIT_EXT";
    case VK_ACCESS_2_MICROMAP_WRITE_BIT_EXT: return "VK_ACCESS_2_MICROMAP_WRITE_BIT_EXT";
    case VK_ACCESS_2_OPTICAL_FLOW_READ_BIT_NV: return "VK_ACCESS_2_OPTICAL_FLOW_READ_BIT_NV";
    case VK_ACCESS_2_OPTICAL_FLOW_WRITE_BIT_NV: return "VK_ACCESS_2_OPTICAL_FLOW_WRITE_BIT_NV";
    default: break;
    }
    return "Unhandled VkAccessFlagBits2";
}

std::string VkAccessFlags2ToString(VkFlags64 vkFlags)
{
    std::string   str;
    VkFlags64     index = 0U;
    while (vkFlags)
    {
        if (vkFlags & 1U)
        {
            if (!str.empty())
            {
                str += '|';
            }
            str.append(VkAccessFlagBits2ToString(static_cast<VkAccessFlagBits2>(1U) << index));
        }
        ++index;
        vkFlags >>= 1U;
    }
    if (str.empty())
    {
        str.append(VkAccessFlagBits2ToString(0U));
    }
    return str;
}

std::string VkFormatFeatureFlagBits2ToString(const VkFormatFeatureFlagBits2 value)
{
    switch (value) {
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT";
    case VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT: return "VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT";
    case VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT: return "VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT";
    case VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT: return "VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT";
    case VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT: return "VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT";
    case VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT: return "VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT";
    case VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT: return "VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT";
    case VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT: return "VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT";
    case VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT: return "VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT";
    case VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT: return "VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT";
    case VK_FORMAT_FEATURE_2_BLIT_SRC_BIT: return "VK_FORMAT_FEATURE_2_BLIT_SRC_BIT";
    case VK_FORMAT_FEATURE_2_BLIT_DST_BIT: return "VK_FORMAT_FEATURE_2_BLIT_DST_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT";
    case VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT: return "VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT";
    case VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT: return "VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT";
    case VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT: return "VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT";
    case VK_FORMAT_FEATURE_2_DISJOINT_BIT: return "VK_FORMAT_FEATURE_2_DISJOINT_BIT";
    case VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT: return "VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT";
    case VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT: return "VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT";
    case VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT: return "VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT";
    case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT: return "VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT";
    case VK_FORMAT_FEATURE_2_VIDEO_DECODE_OUTPUT_BIT_KHR: return "VK_FORMAT_FEATURE_2_VIDEO_DECODE_OUTPUT_BIT_KHR";
    case VK_FORMAT_FEATURE_2_VIDEO_DECODE_DPB_BIT_KHR: return "VK_FORMAT_FEATURE_2_VIDEO_DECODE_DPB_BIT_KHR";
    case VK_FORMAT_FEATURE_2_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR: return "VK_FORMAT_FEATURE_2_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR";
    case VK_FORMAT_FEATURE_2_FRAGMENT_DENSITY_MAP_BIT_EXT: return "VK_FORMAT_FEATURE_2_FRAGMENT_DENSITY_MAP_BIT_EXT";
    case VK_FORMAT_FEATURE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "VK_FORMAT_FEATURE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    case VK_FORMAT_FEATURE_2_VIDEO_ENCODE_INPUT_BIT_KHR: return "VK_FORMAT_FEATURE_2_VIDEO_ENCODE_INPUT_BIT_KHR";
    case VK_FORMAT_FEATURE_2_VIDEO_ENCODE_DPB_BIT_KHR: return "VK_FORMAT_FEATURE_2_VIDEO_ENCODE_DPB_BIT_KHR";
    case VK_FORMAT_FEATURE_2_LINEAR_COLOR_ATTACHMENT_BIT_NV: return "VK_FORMAT_FEATURE_2_LINEAR_COLOR_ATTACHMENT_BIT_NV";
    case VK_FORMAT_FEATURE_2_WEIGHT_IMAGE_BIT_QCOM: return "VK_FORMAT_FEATURE_2_WEIGHT_IMAGE_BIT_QCOM";
    case VK_FORMAT_FEATURE_2_WEIGHT_SAMPLED_IMAGE_BIT_QCOM: return "VK_FORMAT_FEATURE_2_WEIGHT_SAMPLED_IMAGE_BIT_QCOM";
    case VK_FORMAT_FEATURE_2_BLOCK_MATCHING_BIT_QCOM: return "VK_FORMAT_FEATURE_2_BLOCK_MATCHING_BIT_QCOM";
    case VK_FORMAT_FEATURE_2_BOX_FILTER_SAMPLED_BIT_QCOM: return "VK_FORMAT_FEATURE_2_BOX_FILTER_SAMPLED_BIT_QCOM";
    case VK_FORMAT_FEATURE_2_OPTICAL_FLOW_IMAGE_BIT_NV: return "VK_FORMAT_FEATURE_2_OPTICAL_FLOW_IMAGE_BIT_NV";
    case VK_FORMAT_FEATURE_2_OPTICAL_FLOW_VECTOR_BIT_NV: return "VK_FORMAT_FEATURE_2_OPTICAL_FLOW_VECTOR_BIT_NV";
    case VK_FORMAT_FEATURE_2_OPTICAL_FLOW_COST_BIT_NV: return "VK_FORMAT_FEATURE_2_OPTICAL_FLOW_COST_BIT_NV";
    default: break;
    }
    return "Unhandled VkFormatFeatureFlagBits2";
}

std::string VkFormatFeatureFlags2ToString(VkFlags64 vkFlags)
{
    std::string   str;
    VkFlags64     index = 0U;
    while (vkFlags)
    {
        if (vkFlags & 1U)
        {
            if (!str.empty())
            {
                str += '|';
            }
            str.append(VkFormatFeatureFlagBits2ToString(static_cast<VkFormatFeatureFlagBits2>(1U) << index));
        }
        ++index;
        vkFlags >>= 1U;
    }
    if (str.empty())
    {
        str.append(VkFormatFeatureFlagBits2ToString(0U));
    }
    return str;
}

template <> std::string ToString<VkPipelineCreationFeedbackFlagBits>(const VkPipelineCreationFeedbackFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT: return "VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT";
    case VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT: return "VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT";
    case VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT: return "VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT";
    default: break;
    }
    return "Unhandled VkPipelineCreationFeedbackFlagBits";
}

template <> std::string ToString<VkPipelineCreationFeedbackFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineCreationFeedbackFlagBits>(vkFlags);
}

std::string VkPipelineStageFlagBits2ToString(const VkPipelineStageFlagBits2 value)
{
    switch (value) {
    case VK_PIPELINE_STAGE_2_NONE: return "VK_PIPELINE_STAGE_2_NONE";
    case VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT: return "VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT";
    case VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT: return "VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT";
    case VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT: return "VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT";
    case VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT: return "VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT";
    case VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT: return "VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT";
    case VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT: return "VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT";
    case VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT: return "VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT";
    case VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT: return "VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT";
    case VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT: return "VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT";
    case VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT: return "VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT";
    case VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT: return "VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT";
    case VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT: return "VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT";
    case VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT: return "VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT";
    case VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT: return "VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT";
    case VK_PIPELINE_STAGE_2_HOST_BIT: return "VK_PIPELINE_STAGE_2_HOST_BIT";
    case VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT: return "VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT";
    case VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT: return "VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT";
    case VK_PIPELINE_STAGE_2_COPY_BIT: return "VK_PIPELINE_STAGE_2_COPY_BIT";
    case VK_PIPELINE_STAGE_2_RESOLVE_BIT: return "VK_PIPELINE_STAGE_2_RESOLVE_BIT";
    case VK_PIPELINE_STAGE_2_BLIT_BIT: return "VK_PIPELINE_STAGE_2_BLIT_BIT";
    case VK_PIPELINE_STAGE_2_CLEAR_BIT: return "VK_PIPELINE_STAGE_2_CLEAR_BIT";
    case VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT: return "VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT";
    case VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT: return "VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT";
    case VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT: return "VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT";
    case VK_PIPELINE_STAGE_2_VIDEO_DECODE_BIT_KHR: return "VK_PIPELINE_STAGE_2_VIDEO_DECODE_BIT_KHR";
    case VK_PIPELINE_STAGE_2_VIDEO_ENCODE_BIT_KHR: return "VK_PIPELINE_STAGE_2_VIDEO_ENCODE_BIT_KHR";
    case VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT: return "VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT";
    case VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT: return "VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT";
    case VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV: return "VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV";
    case VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR: return "VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    case VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR: return "VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR";
    case VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR: return "VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR";
    case VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT: return "VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT";
    case VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_EXT: return "VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_EXT";
    case VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_EXT: return "VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_EXT";
    case VK_PIPELINE_STAGE_2_SUBPASS_SHADING_BIT_HUAWEI: return "VK_PIPELINE_STAGE_2_SUBPASS_SHADING_BIT_HUAWEI";
    case VK_PIPELINE_STAGE_2_INVOCATION_MASK_BIT_HUAWEI: return "VK_PIPELINE_STAGE_2_INVOCATION_MASK_BIT_HUAWEI";
    case VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_COPY_BIT_KHR: return "VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_COPY_BIT_KHR";
    case VK_PIPELINE_STAGE_2_MICROMAP_BUILD_BIT_EXT: return "VK_PIPELINE_STAGE_2_MICROMAP_BUILD_BIT_EXT";
    case VK_PIPELINE_STAGE_2_CLUSTER_CULLING_SHADER_BIT_HUAWEI: return "VK_PIPELINE_STAGE_2_CLUSTER_CULLING_SHADER_BIT_HUAWEI";
    case VK_PIPELINE_STAGE_2_OPTICAL_FLOW_BIT_NV: return "VK_PIPELINE_STAGE_2_OPTICAL_FLOW_BIT_NV";
    default: break;
    }
    return "Unhandled VkPipelineStageFlagBits2";
}

std::string VkPipelineStageFlags2ToString(VkFlags64 vkFlags)
{
    std::string   str;
    VkFlags64     index = 0U;
    while (vkFlags)
    {
        if (vkFlags & 1U)
        {
            if (!str.empty())
            {
                str += '|';
            }
            str.append(VkPipelineStageFlagBits2ToString(static_cast<VkPipelineStageFlagBits2>(1U) << index));
        }
        ++index;
        vkFlags >>= 1U;
    }
    if (str.empty())
    {
        str.append(VkPipelineStageFlagBits2ToString(0U));
    }
    return str;
}

template <> std::string ToString<VkRenderingFlagBits>(const VkRenderingFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT: return "VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT";
    case VK_RENDERING_SUSPENDING_BIT: return "VK_RENDERING_SUSPENDING_BIT";
    case VK_RENDERING_RESUMING_BIT: return "VK_RENDERING_RESUMING_BIT";
    case VK_RENDERING_ENABLE_LEGACY_DITHERING_BIT_EXT: return "VK_RENDERING_ENABLE_LEGACY_DITHERING_BIT_EXT";
    default: break;
    }
    return "Unhandled VkRenderingFlagBits";
}

template <> std::string ToString<VkRenderingFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkRenderingFlagBits>(vkFlags);
}

template <> std::string ToString<VkSubmitFlagBits>(const VkSubmitFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SUBMIT_PROTECTED_BIT: return "VK_SUBMIT_PROTECTED_BIT";
    default: break;
    }
    return "Unhandled VkSubmitFlagBits";
}

template <> std::string ToString<VkSubmitFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSubmitFlagBits>(vkFlags);
}

template <> std::string ToString<VkToolPurposeFlagBits>(const VkToolPurposeFlagBits& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_TOOL_PURPOSE_VALIDATION_BIT: return "VK_TOOL_PURPOSE_VALIDATION_BIT";
    case VK_TOOL_PURPOSE_PROFILING_BIT: return "VK_TOOL_PURPOSE_PROFILING_BIT";
    case VK_TOOL_PURPOSE_TRACING_BIT: return "VK_TOOL_PURPOSE_TRACING_BIT";
    case VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT: return "VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT";
    case VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT: return "VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT";
    case VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT: return "VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT";
    case VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT: return "VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT";
    default: break;
    }
    return "Unhandled VkToolPurposeFlagBits";
}

template <> std::string ToString<VkToolPurposeFlagBits>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkToolPurposeFlagBits>(vkFlags);
}

template <> std::string ToString<VkColorSpaceKHR>(const VkColorSpaceKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR: return "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR";
    case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT: return "VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT";
    case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT: return "VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT";
    case VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT: return "VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT";
    case VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT: return "VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT";
    case VK_COLOR_SPACE_BT709_LINEAR_EXT: return "VK_COLOR_SPACE_BT709_LINEAR_EXT";
    case VK_COLOR_SPACE_BT709_NONLINEAR_EXT: return "VK_COLOR_SPACE_BT709_NONLINEAR_EXT";
    case VK_COLOR_SPACE_BT2020_LINEAR_EXT: return "VK_COLOR_SPACE_BT2020_LINEAR_EXT";
    case VK_COLOR_SPACE_HDR10_ST2084_EXT: return "VK_COLOR_SPACE_HDR10_ST2084_EXT";
    case VK_COLOR_SPACE_DOLBYVISION_EXT: return "VK_COLOR_SPACE_DOLBYVISION_EXT";
    case VK_COLOR_SPACE_HDR10_HLG_EXT: return "VK_COLOR_SPACE_HDR10_HLG_EXT";
    case VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT: return "VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT";
    case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT: return "VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT";
    case VK_COLOR_SPACE_PASS_THROUGH_EXT: return "VK_COLOR_SPACE_PASS_THROUGH_EXT";
    case VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT: return "VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT";
    case VK_COLOR_SPACE_DISPLAY_NATIVE_AMD: return "VK_COLOR_SPACE_DISPLAY_NATIVE_AMD";
    default: break;
    }
    return "Unhandled VkColorSpaceKHR";
}

template <> std::string ToString<VkCompositeAlphaFlagBitsKHR>(const VkCompositeAlphaFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR: return "VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR";
    case VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR: return "VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR";
    case VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR: return "VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR";
    case VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR: return "VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR";
    default: break;
    }
    return "Unhandled VkCompositeAlphaFlagBitsKHR";
}

template <> std::string ToString<VkCompositeAlphaFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkCompositeAlphaFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkPresentModeKHR>(const VkPresentModeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PRESENT_MODE_IMMEDIATE_KHR: return "VK_PRESENT_MODE_IMMEDIATE_KHR";
    case VK_PRESENT_MODE_MAILBOX_KHR: return "VK_PRESENT_MODE_MAILBOX_KHR";
    case VK_PRESENT_MODE_FIFO_KHR: return "VK_PRESENT_MODE_FIFO_KHR";
    case VK_PRESENT_MODE_FIFO_RELAXED_KHR: return "VK_PRESENT_MODE_FIFO_RELAXED_KHR";
    case VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR: return "VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR";
    case VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR: return "VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR";
    default: break;
    }
    return "Unhandled VkPresentModeKHR";
}

template <> std::string ToString<VkSurfaceTransformFlagBitsKHR>(const VkSurfaceTransformFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR: return "VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR";
    case VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR: return "VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR";
    case VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR: return "VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR";
    case VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR: return "VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR";
    case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR: return "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR";
    case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR: return "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR";
    case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR: return "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR";
    case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR: return "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR";
    case VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR: return "VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR";
    default: break;
    }
    return "Unhandled VkSurfaceTransformFlagBitsKHR";
}

template <> std::string ToString<VkSurfaceTransformFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSurfaceTransformFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkDeviceGroupPresentModeFlagBitsKHR>(const VkDeviceGroupPresentModeFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR: return "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR";
    case VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR: return "VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR";
    case VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR: return "VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR";
    case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR: return "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR";
    default: break;
    }
    return "Unhandled VkDeviceGroupPresentModeFlagBitsKHR";
}

template <> std::string ToString<VkDeviceGroupPresentModeFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDeviceGroupPresentModeFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkSwapchainCreateFlagBitsKHR>(const VkSwapchainCreateFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR: return "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR";
    case VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR: return "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR";
    case VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR: return "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR";
    case VK_SWAPCHAIN_CREATE_DEFERRED_MEMORY_ALLOCATION_BIT_EXT: return "VK_SWAPCHAIN_CREATE_DEFERRED_MEMORY_ALLOCATION_BIT_EXT";
    default: break;
    }
    return "Unhandled VkSwapchainCreateFlagBitsKHR";
}

template <> std::string ToString<VkSwapchainCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSwapchainCreateFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkDisplayPlaneAlphaFlagBitsKHR>(const VkDisplayPlaneAlphaFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR: return "VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR";
    case VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR: return "VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR";
    case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR: return "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR";
    case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR: return "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR";
    default: break;
    }
    return "Unhandled VkDisplayPlaneAlphaFlagBitsKHR";
}

template <> std::string ToString<VkDisplayPlaneAlphaFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDisplayPlaneAlphaFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkQueryResultStatusKHR>(const VkQueryResultStatusKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUERY_RESULT_STATUS_ERROR_KHR: return "VK_QUERY_RESULT_STATUS_ERROR_KHR";
    case VK_QUERY_RESULT_STATUS_NOT_READY_KHR: return "VK_QUERY_RESULT_STATUS_NOT_READY_KHR";
    case VK_QUERY_RESULT_STATUS_COMPLETE_KHR: return "VK_QUERY_RESULT_STATUS_COMPLETE_KHR";
    default: break;
    }
    return "Unhandled VkQueryResultStatusKHR";
}

template <> std::string ToString<VkVideoCapabilityFlagBitsKHR>(const VkVideoCapabilityFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_CAPABILITY_PROTECTED_CONTENT_BIT_KHR: return "VK_VIDEO_CAPABILITY_PROTECTED_CONTENT_BIT_KHR";
    case VK_VIDEO_CAPABILITY_SEPARATE_REFERENCE_IMAGES_BIT_KHR: return "VK_VIDEO_CAPABILITY_SEPARATE_REFERENCE_IMAGES_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoCapabilityFlagBitsKHR";
}

template <> std::string ToString<VkVideoCapabilityFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoCapabilityFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoChromaSubsamplingFlagBitsKHR>(const VkVideoChromaSubsamplingFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_CHROMA_SUBSAMPLING_INVALID_KHR: return "VK_VIDEO_CHROMA_SUBSAMPLING_INVALID_KHR";
    case VK_VIDEO_CHROMA_SUBSAMPLING_MONOCHROME_BIT_KHR: return "VK_VIDEO_CHROMA_SUBSAMPLING_MONOCHROME_BIT_KHR";
    case VK_VIDEO_CHROMA_SUBSAMPLING_420_BIT_KHR: return "VK_VIDEO_CHROMA_SUBSAMPLING_420_BIT_KHR";
    case VK_VIDEO_CHROMA_SUBSAMPLING_422_BIT_KHR: return "VK_VIDEO_CHROMA_SUBSAMPLING_422_BIT_KHR";
    case VK_VIDEO_CHROMA_SUBSAMPLING_444_BIT_KHR: return "VK_VIDEO_CHROMA_SUBSAMPLING_444_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoChromaSubsamplingFlagBitsKHR";
}

template <> std::string ToString<VkVideoChromaSubsamplingFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoChromaSubsamplingFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoCodecOperationFlagBitsKHR>(const VkVideoCodecOperationFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_CODEC_OPERATION_NONE_KHR: return "VK_VIDEO_CODEC_OPERATION_NONE_KHR";
    case VK_VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_EXT: return "VK_VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_EXT";
    case VK_VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_EXT: return "VK_VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_EXT";
    case VK_VIDEO_CODEC_OPERATION_DECODE_H264_BIT_KHR: return "VK_VIDEO_CODEC_OPERATION_DECODE_H264_BIT_KHR";
    case VK_VIDEO_CODEC_OPERATION_DECODE_H265_BIT_KHR: return "VK_VIDEO_CODEC_OPERATION_DECODE_H265_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoCodecOperationFlagBitsKHR";
}

template <> std::string ToString<VkVideoCodecOperationFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoCodecOperationFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoCodingControlFlagBitsKHR>(const VkVideoCodingControlFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_CODING_CONTROL_RESET_BIT_KHR: return "VK_VIDEO_CODING_CONTROL_RESET_BIT_KHR";
    case VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_BIT_KHR: return "VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_BIT_KHR";
    case VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_LAYER_BIT_KHR: return "VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_LAYER_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoCodingControlFlagBitsKHR";
}

template <> std::string ToString<VkVideoCodingControlFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoCodingControlFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoComponentBitDepthFlagBitsKHR>(const VkVideoComponentBitDepthFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_COMPONENT_BIT_DEPTH_INVALID_KHR: return "VK_VIDEO_COMPONENT_BIT_DEPTH_INVALID_KHR";
    case VK_VIDEO_COMPONENT_BIT_DEPTH_8_BIT_KHR: return "VK_VIDEO_COMPONENT_BIT_DEPTH_8_BIT_KHR";
    case VK_VIDEO_COMPONENT_BIT_DEPTH_10_BIT_KHR: return "VK_VIDEO_COMPONENT_BIT_DEPTH_10_BIT_KHR";
    case VK_VIDEO_COMPONENT_BIT_DEPTH_12_BIT_KHR: return "VK_VIDEO_COMPONENT_BIT_DEPTH_12_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoComponentBitDepthFlagBitsKHR";
}

template <> std::string ToString<VkVideoComponentBitDepthFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoComponentBitDepthFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoSessionCreateFlagBitsKHR>(const VkVideoSessionCreateFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_SESSION_CREATE_PROTECTED_CONTENT_BIT_KHR: return "VK_VIDEO_SESSION_CREATE_PROTECTED_CONTENT_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoSessionCreateFlagBitsKHR";
}

template <> std::string ToString<VkVideoSessionCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoSessionCreateFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoDecodeCapabilityFlagBitsKHR>(const VkVideoDecodeCapabilityFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_COINCIDE_BIT_KHR: return "VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_COINCIDE_BIT_KHR";
    case VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_DISTINCT_BIT_KHR: return "VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_DISTINCT_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoDecodeCapabilityFlagBitsKHR";
}

template <> std::string ToString<VkVideoDecodeCapabilityFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoDecodeCapabilityFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoDecodeUsageFlagBitsKHR>(const VkVideoDecodeUsageFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_DECODE_USAGE_DEFAULT_KHR: return "VK_VIDEO_DECODE_USAGE_DEFAULT_KHR";
    case VK_VIDEO_DECODE_USAGE_TRANSCODING_BIT_KHR: return "VK_VIDEO_DECODE_USAGE_TRANSCODING_BIT_KHR";
    case VK_VIDEO_DECODE_USAGE_OFFLINE_BIT_KHR: return "VK_VIDEO_DECODE_USAGE_OFFLINE_BIT_KHR";
    case VK_VIDEO_DECODE_USAGE_STREAMING_BIT_KHR: return "VK_VIDEO_DECODE_USAGE_STREAMING_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoDecodeUsageFlagBitsKHR";
}

template <> std::string ToString<VkVideoDecodeUsageFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoDecodeUsageFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoDecodeH264PictureLayoutFlagBitsKHR>(const VkVideoDecodeH264PictureLayoutFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_PROGRESSIVE_KHR: return "VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_PROGRESSIVE_KHR";
    case VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_INTERLEAVED_LINES_BIT_KHR: return "VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_INTERLEAVED_LINES_BIT_KHR";
    case VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_SEPARATE_PLANES_BIT_KHR: return "VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_SEPARATE_PLANES_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoDecodeH264PictureLayoutFlagBitsKHR";
}

template <> std::string ToString<VkVideoDecodeH264PictureLayoutFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoDecodeH264PictureLayoutFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkAcquireProfilingLockFlagBitsKHR>(const VkAcquireProfilingLockFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    return "Unhandled VkAcquireProfilingLockFlagBitsKHR";
}

template <> std::string ToString<VkAcquireProfilingLockFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkAcquireProfilingLockFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkPerformanceCounterDescriptionFlagBitsKHR>(const VkPerformanceCounterDescriptionFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR: return "VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR";
    case VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR: return "VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR";
    default: break;
    }
    return "Unhandled VkPerformanceCounterDescriptionFlagBitsKHR";
}

template <> std::string ToString<VkPerformanceCounterDescriptionFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPerformanceCounterDescriptionFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkPerformanceCounterScopeKHR>(const VkPerformanceCounterScopeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR: return "VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR";
    case VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR: return "VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR";
    case VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR: return "VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR";
    default: break;
    }
    return "Unhandled VkPerformanceCounterScopeKHR";
}

template <> std::string ToString<VkPerformanceCounterStorageKHR>(const VkPerformanceCounterStorageKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR: return "VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR";
    case VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR: return "VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR";
    case VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR: return "VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR";
    case VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR: return "VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR";
    case VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR: return "VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR";
    case VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR: return "VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR";
    default: break;
    }
    return "Unhandled VkPerformanceCounterStorageKHR";
}

template <> std::string ToString<VkPerformanceCounterUnitKHR>(const VkPerformanceCounterUnitKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR";
    case VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR: return "VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR";
    default: break;
    }
    return "Unhandled VkPerformanceCounterUnitKHR";
}

template <> std::string ToString<VkQueueGlobalPriorityKHR>(const VkQueueGlobalPriorityKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUEUE_GLOBAL_PRIORITY_LOW_KHR: return "VK_QUEUE_GLOBAL_PRIORITY_LOW_KHR";
    case VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_KHR: return "VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_KHR";
    case VK_QUEUE_GLOBAL_PRIORITY_HIGH_KHR: return "VK_QUEUE_GLOBAL_PRIORITY_HIGH_KHR";
    case VK_QUEUE_GLOBAL_PRIORITY_REALTIME_KHR: return "VK_QUEUE_GLOBAL_PRIORITY_REALTIME_KHR";
    default: break;
    }
    return "Unhandled VkQueueGlobalPriorityKHR";
}

template <> std::string ToString<VkFragmentShadingRateCombinerOpKHR>(const VkFragmentShadingRateCombinerOpKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR: return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR";
    case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR: return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR";
    case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR: return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR";
    case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR: return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR";
    case VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR: return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR";
    default: break;
    }
    return "Unhandled VkFragmentShadingRateCombinerOpKHR";
}

template <> std::string ToString<VkPipelineExecutableStatisticFormatKHR>(const VkPipelineExecutableStatisticFormatKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR: return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR";
    case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR: return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR";
    case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR: return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR";
    case VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR: return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR";
    default: break;
    }
    return "Unhandled VkPipelineExecutableStatisticFormatKHR";
}

template <> std::string ToString<VkVideoEncodeCapabilityFlagBitsKHR>(const VkVideoEncodeCapabilityFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_CAPABILITY_PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR: return "VK_VIDEO_ENCODE_CAPABILITY_PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoEncodeCapabilityFlagBitsKHR";
}

template <> std::string ToString<VkVideoEncodeCapabilityFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeCapabilityFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeContentFlagBitsKHR>(const VkVideoEncodeContentFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_CONTENT_DEFAULT_KHR: return "VK_VIDEO_ENCODE_CONTENT_DEFAULT_KHR";
    case VK_VIDEO_ENCODE_CONTENT_CAMERA_BIT_KHR: return "VK_VIDEO_ENCODE_CONTENT_CAMERA_BIT_KHR";
    case VK_VIDEO_ENCODE_CONTENT_DESKTOP_BIT_KHR: return "VK_VIDEO_ENCODE_CONTENT_DESKTOP_BIT_KHR";
    case VK_VIDEO_ENCODE_CONTENT_RENDERED_BIT_KHR: return "VK_VIDEO_ENCODE_CONTENT_RENDERED_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoEncodeContentFlagBitsKHR";
}

template <> std::string ToString<VkVideoEncodeContentFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeContentFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeFeedbackFlagBitsKHR>(const VkVideoEncodeFeedbackFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BUFFER_OFFSET_BIT_KHR: return "VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BUFFER_OFFSET_BIT_KHR";
    case VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BYTES_WRITTEN_BIT_KHR: return "VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BYTES_WRITTEN_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoEncodeFeedbackFlagBitsKHR";
}

template <> std::string ToString<VkVideoEncodeFeedbackFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeFeedbackFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeRateControlModeFlagBitsKHR>(const VkVideoEncodeRateControlModeFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DEFAULT_KHR: return "VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DEFAULT_KHR";
    case VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DISABLED_BIT_KHR: return "VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DISABLED_BIT_KHR";
    case VK_VIDEO_ENCODE_RATE_CONTROL_MODE_CBR_BIT_KHR: return "VK_VIDEO_ENCODE_RATE_CONTROL_MODE_CBR_BIT_KHR";
    case VK_VIDEO_ENCODE_RATE_CONTROL_MODE_VBR_BIT_KHR: return "VK_VIDEO_ENCODE_RATE_CONTROL_MODE_VBR_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoEncodeRateControlModeFlagBitsKHR";
}

template <> std::string ToString<VkVideoEncodeRateControlModeFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeRateControlModeFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeTuningModeKHR>(const VkVideoEncodeTuningModeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_TUNING_MODE_DEFAULT_KHR: return "VK_VIDEO_ENCODE_TUNING_MODE_DEFAULT_KHR";
    case VK_VIDEO_ENCODE_TUNING_MODE_HIGH_QUALITY_KHR: return "VK_VIDEO_ENCODE_TUNING_MODE_HIGH_QUALITY_KHR";
    case VK_VIDEO_ENCODE_TUNING_MODE_LOW_LATENCY_KHR: return "VK_VIDEO_ENCODE_TUNING_MODE_LOW_LATENCY_KHR";
    case VK_VIDEO_ENCODE_TUNING_MODE_ULTRA_LOW_LATENCY_KHR: return "VK_VIDEO_ENCODE_TUNING_MODE_ULTRA_LOW_LATENCY_KHR";
    case VK_VIDEO_ENCODE_TUNING_MODE_LOSSLESS_KHR: return "VK_VIDEO_ENCODE_TUNING_MODE_LOSSLESS_KHR";
    default: break;
    }
    return "Unhandled VkVideoEncodeTuningModeKHR";
}

template <> std::string ToString<VkVideoEncodeUsageFlagBitsKHR>(const VkVideoEncodeUsageFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_USAGE_DEFAULT_KHR: return "VK_VIDEO_ENCODE_USAGE_DEFAULT_KHR";
    case VK_VIDEO_ENCODE_USAGE_TRANSCODING_BIT_KHR: return "VK_VIDEO_ENCODE_USAGE_TRANSCODING_BIT_KHR";
    case VK_VIDEO_ENCODE_USAGE_STREAMING_BIT_KHR: return "VK_VIDEO_ENCODE_USAGE_STREAMING_BIT_KHR";
    case VK_VIDEO_ENCODE_USAGE_RECORDING_BIT_KHR: return "VK_VIDEO_ENCODE_USAGE_RECORDING_BIT_KHR";
    case VK_VIDEO_ENCODE_USAGE_CONFERENCING_BIT_KHR: return "VK_VIDEO_ENCODE_USAGE_CONFERENCING_BIT_KHR";
    default: break;
    }
    return "Unhandled VkVideoEncodeUsageFlagBitsKHR";
}

template <> std::string ToString<VkVideoEncodeUsageFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeUsageFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkDebugReportFlagBitsEXT>(const VkDebugReportFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEBUG_REPORT_INFORMATION_BIT_EXT: return "VK_DEBUG_REPORT_INFORMATION_BIT_EXT";
    case VK_DEBUG_REPORT_WARNING_BIT_EXT: return "VK_DEBUG_REPORT_WARNING_BIT_EXT";
    case VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT: return "VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT";
    case VK_DEBUG_REPORT_ERROR_BIT_EXT: return "VK_DEBUG_REPORT_ERROR_BIT_EXT";
    case VK_DEBUG_REPORT_DEBUG_BIT_EXT: return "VK_DEBUG_REPORT_DEBUG_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDebugReportFlagBitsEXT";
}

template <> std::string ToString<VkDebugReportFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDebugReportFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkDebugReportObjectTypeEXT>(const VkDebugReportObjectTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_CU_MODULE_NVX_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_CU_MODULE_NVX_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_CU_FUNCTION_NVX_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_CU_FUNCTION_NVX_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT";
    case VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA_EXT: return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA_EXT";
    default: break;
    }
    return "Unhandled VkDebugReportObjectTypeEXT";
}

template <> std::string ToString<VkRasterizationOrderAMD>(const VkRasterizationOrderAMD& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_RASTERIZATION_ORDER_STRICT_AMD: return "VK_RASTERIZATION_ORDER_STRICT_AMD";
    case VK_RASTERIZATION_ORDER_RELAXED_AMD: return "VK_RASTERIZATION_ORDER_RELAXED_AMD";
    default: break;
    }
    return "Unhandled VkRasterizationOrderAMD";
}

template <> std::string ToString<VkVideoEncodeH264CapabilityFlagBitsEXT>(const VkVideoEncodeH264CapabilityFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DIRECT_8X8_INFERENCE_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DIRECT_8X8_INFERENCE_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DIRECT_8X8_INFERENCE_DISABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DIRECT_8X8_INFERENCE_DISABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_SEPARATE_COLOUR_PLANE_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_SEPARATE_COLOUR_PLANE_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_QPPRIME_Y_ZERO_TRANSFORM_BYPASS_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_QPPRIME_Y_ZERO_TRANSFORM_BYPASS_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_SCALING_LISTS_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_SCALING_LISTS_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_HRD_COMPLIANCE_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_HRD_COMPLIANCE_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_CHROMA_QP_OFFSET_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_CHROMA_QP_OFFSET_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_SECOND_CHROMA_QP_OFFSET_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_SECOND_CHROMA_QP_OFFSET_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_PIC_INIT_QP_MINUS26_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_PIC_INIT_QP_MINUS26_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_PRED_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_PRED_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_BIPRED_EXPLICIT_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_BIPRED_EXPLICIT_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_BIPRED_IMPLICIT_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_BIPRED_IMPLICIT_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_PRED_NO_TABLE_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_PRED_NO_TABLE_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_TRANSFORM_8X8_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_TRANSFORM_8X8_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_CABAC_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_CABAC_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_CAVLC_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_CAVLC_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_DISABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_DISABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_PARTIAL_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_PARTIAL_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DISABLE_DIRECT_SPATIAL_MV_PRED_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DISABLE_DIRECT_SPATIAL_MV_PRED_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_MULTIPLE_SLICE_PER_FRAME_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_MULTIPLE_SLICE_PER_FRAME_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_SLICE_MB_COUNT_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_SLICE_MB_COUNT_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_ROW_UNALIGNED_SLICE_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_ROW_UNALIGNED_SLICE_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DIFFERENT_SLICE_TYPE_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DIFFERENT_SLICE_TYPE_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_EXT";
    case VK_VIDEO_ENCODE_H264_CAPABILITY_DIFFERENT_REFERENCE_FINAL_LISTS_BIT_EXT: return "VK_VIDEO_ENCODE_H264_CAPABILITY_DIFFERENT_REFERENCE_FINAL_LISTS_BIT_EXT";
    default: break;
    }
    return "Unhandled VkVideoEncodeH264CapabilityFlagBitsEXT";
}

template <> std::string ToString<VkVideoEncodeH264CapabilityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeH264CapabilityFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeH264RateControlStructureEXT>(const VkVideoEncodeH264RateControlStructureEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_H264_RATE_CONTROL_STRUCTURE_UNKNOWN_EXT: return "VK_VIDEO_ENCODE_H264_RATE_CONTROL_STRUCTURE_UNKNOWN_EXT";
    case VK_VIDEO_ENCODE_H264_RATE_CONTROL_STRUCTURE_FLAT_EXT: return "VK_VIDEO_ENCODE_H264_RATE_CONTROL_STRUCTURE_FLAT_EXT";
    case VK_VIDEO_ENCODE_H264_RATE_CONTROL_STRUCTURE_DYADIC_EXT: return "VK_VIDEO_ENCODE_H264_RATE_CONTROL_STRUCTURE_DYADIC_EXT";
    default: break;
    }
    return "Unhandled VkVideoEncodeH264RateControlStructureEXT";
}

template <> std::string ToString<VkVideoEncodeH265CapabilityFlagBitsEXT>(const VkVideoEncodeH265CapabilityFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_H265_CAPABILITY_SEPARATE_COLOUR_PLANE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_SEPARATE_COLOUR_PLANE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_SCALING_LISTS_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_SCALING_LISTS_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_SAMPLE_ADAPTIVE_OFFSET_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_SAMPLE_ADAPTIVE_OFFSET_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_PCM_ENABLE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_PCM_ENABLE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_SPS_TEMPORAL_MVP_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_SPS_TEMPORAL_MVP_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_HRD_COMPLIANCE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_HRD_COMPLIANCE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_INIT_QP_MINUS26_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_INIT_QP_MINUS26_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_SIGN_DATA_HIDING_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_SIGN_DATA_HIDING_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_TRANSFORM_SKIP_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_TRANSFORM_SKIP_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_TRANSFORM_SKIP_DISABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_TRANSFORM_SKIP_DISABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_WEIGHTED_PRED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_WEIGHTED_PRED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_WEIGHTED_BIPRED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_WEIGHTED_BIPRED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_WEIGHTED_PRED_NO_TABLE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_WEIGHTED_PRED_NO_TABLE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_TRANSQUANT_BYPASS_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_TRANSQUANT_BYPASS_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_ENTROPY_CODING_SYNC_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_ENTROPY_CODING_SYNC_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_DEBLOCKING_FILTER_OVERRIDE_ENABLED_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_DEBLOCKING_FILTER_OVERRIDE_ENABLED_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_TILE_PER_FRAME_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_TILE_PER_FRAME_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_SLICE_PER_TILE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_SLICE_PER_TILE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_TILE_PER_SLICE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_TILE_PER_SLICE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_SLICE_SEGMENT_CTB_COUNT_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_SLICE_SEGMENT_CTB_COUNT_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_ROW_UNALIGNED_SLICE_SEGMENT_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_ROW_UNALIGNED_SLICE_SEGMENT_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_DEPENDENT_SLICE_SEGMENT_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_DEPENDENT_SLICE_SEGMENT_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_DIFFERENT_SLICE_TYPE_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_DIFFERENT_SLICE_TYPE_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CAPABILITY_DIFFERENT_REFERENCE_FINAL_LISTS_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CAPABILITY_DIFFERENT_REFERENCE_FINAL_LISTS_BIT_EXT";
    default: break;
    }
    return "Unhandled VkVideoEncodeH265CapabilityFlagBitsEXT";
}

template <> std::string ToString<VkVideoEncodeH265CapabilityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeH265CapabilityFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeH265CtbSizeFlagBitsEXT>(const VkVideoEncodeH265CtbSizeFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_H265_CTB_SIZE_16_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CTB_SIZE_16_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CTB_SIZE_32_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CTB_SIZE_32_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_CTB_SIZE_64_BIT_EXT: return "VK_VIDEO_ENCODE_H265_CTB_SIZE_64_BIT_EXT";
    default: break;
    }
    return "Unhandled VkVideoEncodeH265CtbSizeFlagBitsEXT";
}

template <> std::string ToString<VkVideoEncodeH265CtbSizeFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeH265CtbSizeFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkVideoEncodeH265RateControlStructureEXT>(const VkVideoEncodeH265RateControlStructureEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_H265_RATE_CONTROL_STRUCTURE_UNKNOWN_EXT: return "VK_VIDEO_ENCODE_H265_RATE_CONTROL_STRUCTURE_UNKNOWN_EXT";
    case VK_VIDEO_ENCODE_H265_RATE_CONTROL_STRUCTURE_FLAT_EXT: return "VK_VIDEO_ENCODE_H265_RATE_CONTROL_STRUCTURE_FLAT_EXT";
    case VK_VIDEO_ENCODE_H265_RATE_CONTROL_STRUCTURE_DYADIC_EXT: return "VK_VIDEO_ENCODE_H265_RATE_CONTROL_STRUCTURE_DYADIC_EXT";
    default: break;
    }
    return "Unhandled VkVideoEncodeH265RateControlStructureEXT";
}

template <> std::string ToString<VkVideoEncodeH265TransformBlockSizeFlagBitsEXT>(const VkVideoEncodeH265TransformBlockSizeFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_4_BIT_EXT: return "VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_4_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_8_BIT_EXT: return "VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_8_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_16_BIT_EXT: return "VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_16_BIT_EXT";
    case VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_32_BIT_EXT: return "VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_32_BIT_EXT";
    default: break;
    }
    return "Unhandled VkVideoEncodeH265TransformBlockSizeFlagBitsEXT";
}

template <> std::string ToString<VkVideoEncodeH265TransformBlockSizeFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkVideoEncodeH265TransformBlockSizeFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkShaderInfoTypeAMD>(const VkShaderInfoTypeAMD& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SHADER_INFO_TYPE_STATISTICS_AMD: return "VK_SHADER_INFO_TYPE_STATISTICS_AMD";
    case VK_SHADER_INFO_TYPE_BINARY_AMD: return "VK_SHADER_INFO_TYPE_BINARY_AMD";
    case VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD: return "VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD";
    default: break;
    }
    return "Unhandled VkShaderInfoTypeAMD";
}

template <> std::string ToString<VkExternalMemoryFeatureFlagBitsNV>(const VkExternalMemoryFeatureFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV: return "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV";
    case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV: return "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV";
    case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV: return "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV";
    default: break;
    }
    return "Unhandled VkExternalMemoryFeatureFlagBitsNV";
}

template <> std::string ToString<VkExternalMemoryFeatureFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalMemoryFeatureFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkExternalMemoryHandleTypeFlagBitsNV>(const VkExternalMemoryHandleTypeFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV";
    case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV: return "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV";
    default: break;
    }
    return "Unhandled VkExternalMemoryHandleTypeFlagBitsNV";
}

template <> std::string ToString<VkExternalMemoryHandleTypeFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkExternalMemoryHandleTypeFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkValidationCheckEXT>(const VkValidationCheckEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VALIDATION_CHECK_ALL_EXT: return "VK_VALIDATION_CHECK_ALL_EXT";
    case VK_VALIDATION_CHECK_SHADERS_EXT: return "VK_VALIDATION_CHECK_SHADERS_EXT";
    default: break;
    }
    return "Unhandled VkValidationCheckEXT";
}

template <> std::string ToString<VkPipelineRobustnessBufferBehaviorEXT>(const VkPipelineRobustnessBufferBehaviorEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT_EXT: return "VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT_EXT";
    case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED_EXT: return "VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED_EXT";
    case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_EXT: return "VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_EXT";
    case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2_EXT: return "VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2_EXT";
    default: break;
    }
    return "Unhandled VkPipelineRobustnessBufferBehaviorEXT";
}

template <> std::string ToString<VkPipelineRobustnessImageBehaviorEXT>(const VkPipelineRobustnessImageBehaviorEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT_EXT: return "VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT_EXT";
    case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED_EXT: return "VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED_EXT";
    case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_EXT: return "VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_EXT";
    case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2_EXT: return "VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2_EXT";
    default: break;
    }
    return "Unhandled VkPipelineRobustnessImageBehaviorEXT";
}

template <> std::string ToString<VkConditionalRenderingFlagBitsEXT>(const VkConditionalRenderingFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT: return "VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT";
    default: break;
    }
    return "Unhandled VkConditionalRenderingFlagBitsEXT";
}

template <> std::string ToString<VkConditionalRenderingFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkConditionalRenderingFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkSurfaceCounterFlagBitsEXT>(const VkSurfaceCounterFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SURFACE_COUNTER_VBLANK_BIT_EXT: return "VK_SURFACE_COUNTER_VBLANK_BIT_EXT";
    default: break;
    }
    return "Unhandled VkSurfaceCounterFlagBitsEXT";
}

template <> std::string ToString<VkSurfaceCounterFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkSurfaceCounterFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkDeviceEventTypeEXT>(const VkDeviceEventTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT: return "VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT";
    default: break;
    }
    return "Unhandled VkDeviceEventTypeEXT";
}

template <> std::string ToString<VkDisplayEventTypeEXT>(const VkDisplayEventTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT: return "VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT";
    default: break;
    }
    return "Unhandled VkDisplayEventTypeEXT";
}

template <> std::string ToString<VkDisplayPowerStateEXT>(const VkDisplayPowerStateEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DISPLAY_POWER_STATE_OFF_EXT: return "VK_DISPLAY_POWER_STATE_OFF_EXT";
    case VK_DISPLAY_POWER_STATE_SUSPEND_EXT: return "VK_DISPLAY_POWER_STATE_SUSPEND_EXT";
    case VK_DISPLAY_POWER_STATE_ON_EXT: return "VK_DISPLAY_POWER_STATE_ON_EXT";
    default: break;
    }
    return "Unhandled VkDisplayPowerStateEXT";
}

template <> std::string ToString<VkViewportCoordinateSwizzleNV>(const VkViewportCoordinateSwizzleNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV";
    case VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV: return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV";
    default: break;
    }
    return "Unhandled VkViewportCoordinateSwizzleNV";
}

template <> std::string ToString<VkDiscardRectangleModeEXT>(const VkDiscardRectangleModeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT: return "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT";
    case VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT: return "VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT";
    default: break;
    }
    return "Unhandled VkDiscardRectangleModeEXT";
}

template <> std::string ToString<VkConservativeRasterizationModeEXT>(const VkConservativeRasterizationModeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT: return "VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT";
    case VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT: return "VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT";
    case VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT: return "VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT";
    default: break;
    }
    return "Unhandled VkConservativeRasterizationModeEXT";
}

template <> std::string ToString<VkDebugUtilsMessageSeverityFlagBitsEXT>(const VkDebugUtilsMessageSeverityFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT";
    case VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT";
    case VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT";
    case VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDebugUtilsMessageSeverityFlagBitsEXT";
}

template <> std::string ToString<VkDebugUtilsMessageSeverityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDebugUtilsMessageSeverityFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkDebugUtilsMessageTypeFlagBitsEXT>(const VkDebugUtilsMessageTypeFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT";
    case VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT";
    case VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT";
    case VK_DEBUG_UTILS_MESSAGE_TYPE_DEVICE_ADDRESS_BINDING_BIT_EXT: return "VK_DEBUG_UTILS_MESSAGE_TYPE_DEVICE_ADDRESS_BINDING_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDebugUtilsMessageTypeFlagBitsEXT";
}

template <> std::string ToString<VkDebugUtilsMessageTypeFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDebugUtilsMessageTypeFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkBlendOverlapEXT>(const VkBlendOverlapEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BLEND_OVERLAP_UNCORRELATED_EXT: return "VK_BLEND_OVERLAP_UNCORRELATED_EXT";
    case VK_BLEND_OVERLAP_DISJOINT_EXT: return "VK_BLEND_OVERLAP_DISJOINT_EXT";
    case VK_BLEND_OVERLAP_CONJOINT_EXT: return "VK_BLEND_OVERLAP_CONJOINT_EXT";
    default: break;
    }
    return "Unhandled VkBlendOverlapEXT";
}

template <> std::string ToString<VkCoverageModulationModeNV>(const VkCoverageModulationModeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COVERAGE_MODULATION_MODE_NONE_NV: return "VK_COVERAGE_MODULATION_MODE_NONE_NV";
    case VK_COVERAGE_MODULATION_MODE_RGB_NV: return "VK_COVERAGE_MODULATION_MODE_RGB_NV";
    case VK_COVERAGE_MODULATION_MODE_ALPHA_NV: return "VK_COVERAGE_MODULATION_MODE_ALPHA_NV";
    case VK_COVERAGE_MODULATION_MODE_RGBA_NV: return "VK_COVERAGE_MODULATION_MODE_RGBA_NV";
    default: break;
    }
    return "Unhandled VkCoverageModulationModeNV";
}

template <> std::string ToString<VkValidationCacheHeaderVersionEXT>(const VkValidationCacheHeaderVersionEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT: return "VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT";
    default: break;
    }
    return "Unhandled VkValidationCacheHeaderVersionEXT";
}

template <> std::string ToString<VkCoarseSampleOrderTypeNV>(const VkCoarseSampleOrderTypeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV: return "VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV";
    case VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV: return "VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV";
    case VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV: return "VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV";
    case VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV: return "VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV";
    default: break;
    }
    return "Unhandled VkCoarseSampleOrderTypeNV";
}

template <> std::string ToString<VkShadingRatePaletteEntryNV>(const VkShadingRatePaletteEntryNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV";
    case VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV: return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV";
    default: break;
    }
    return "Unhandled VkShadingRatePaletteEntryNV";
}

template <> std::string ToString<VkAccelerationStructureMemoryRequirementsTypeNV>(const VkAccelerationStructureMemoryRequirementsTypeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV: return "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV";
    case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV: return "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV";
    case VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV: return "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV";
    default: break;
    }
    return "Unhandled VkAccelerationStructureMemoryRequirementsTypeNV";
}

template <> std::string ToString<VkAccelerationStructureTypeKHR>(const VkAccelerationStructureTypeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR: return "VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR";
    case VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR: return "VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR";
    case VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR: return "VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR";
    default: break;
    }
    return "Unhandled VkAccelerationStructureTypeKHR";
}

template <> std::string ToString<VkBuildAccelerationStructureFlagBitsKHR>(const VkBuildAccelerationStructureFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR";
    case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR";
    case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR";
    case VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR";
    case VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR";
    case VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV: return "VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV";
    case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_EXT: return "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_EXT";
    case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT: return "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT";
    case VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT: return "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT";
    default: break;
    }
    return "Unhandled VkBuildAccelerationStructureFlagBitsKHR";
}

template <> std::string ToString<VkBuildAccelerationStructureFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkBuildAccelerationStructureFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkCopyAccelerationStructureModeKHR>(const VkCopyAccelerationStructureModeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR: return "VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR";
    case VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR: return "VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR";
    case VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR: return "VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR";
    case VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR: return "VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR";
    default: break;
    }
    return "Unhandled VkCopyAccelerationStructureModeKHR";
}

template <> std::string ToString<VkGeometryFlagBitsKHR>(const VkGeometryFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_GEOMETRY_OPAQUE_BIT_KHR: return "VK_GEOMETRY_OPAQUE_BIT_KHR";
    case VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR: return "VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR";
    default: break;
    }
    return "Unhandled VkGeometryFlagBitsKHR";
}

template <> std::string ToString<VkGeometryFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkGeometryFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkGeometryInstanceFlagBitsKHR>(const VkGeometryInstanceFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR: return "VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR";
    case VK_GEOMETRY_INSTANCE_TRIANGLE_FLIP_FACING_BIT_KHR: return "VK_GEOMETRY_INSTANCE_TRIANGLE_FLIP_FACING_BIT_KHR";
    case VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR: return "VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR";
    case VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR: return "VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR";
    case VK_GEOMETRY_INSTANCE_FORCE_OPACITY_MICROMAP_2_STATE_EXT: return "VK_GEOMETRY_INSTANCE_FORCE_OPACITY_MICROMAP_2_STATE_EXT";
    case VK_GEOMETRY_INSTANCE_DISABLE_OPACITY_MICROMAPS_EXT: return "VK_GEOMETRY_INSTANCE_DISABLE_OPACITY_MICROMAPS_EXT";
    default: break;
    }
    return "Unhandled VkGeometryInstanceFlagBitsKHR";
}

template <> std::string ToString<VkGeometryInstanceFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkGeometryInstanceFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkGeometryTypeKHR>(const VkGeometryTypeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_GEOMETRY_TYPE_TRIANGLES_KHR: return "VK_GEOMETRY_TYPE_TRIANGLES_KHR";
    case VK_GEOMETRY_TYPE_AABBS_KHR: return "VK_GEOMETRY_TYPE_AABBS_KHR";
    case VK_GEOMETRY_TYPE_INSTANCES_KHR: return "VK_GEOMETRY_TYPE_INSTANCES_KHR";
    default: break;
    }
    return "Unhandled VkGeometryTypeKHR";
}

template <> std::string ToString<VkRayTracingShaderGroupTypeKHR>(const VkRayTracingShaderGroupTypeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR: return "VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR";
    case VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR: return "VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR";
    case VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR: return "VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR";
    default: break;
    }
    return "Unhandled VkRayTracingShaderGroupTypeKHR";
}

template <> std::string ToString<VkPipelineCompilerControlFlagBitsAMD>(const VkPipelineCompilerControlFlagBitsAMD& value, ToStringFlags, uint32_t, uint32_t)
{
    return "Unhandled VkPipelineCompilerControlFlagBitsAMD";
}

template <> std::string ToString<VkPipelineCompilerControlFlagBitsAMD>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPipelineCompilerControlFlagBitsAMD>(vkFlags);
}

template <> std::string ToString<VkTimeDomainEXT>(const VkTimeDomainEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_TIME_DOMAIN_DEVICE_EXT: return "VK_TIME_DOMAIN_DEVICE_EXT";
    case VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT: return "VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT";
    case VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT: return "VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT";
    case VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT: return "VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT";
    default: break;
    }
    return "Unhandled VkTimeDomainEXT";
}

template <> std::string ToString<VkMemoryOverallocationBehaviorAMD>(const VkMemoryOverallocationBehaviorAMD& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD: return "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD";
    case VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD: return "VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD";
    case VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD: return "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD";
    default: break;
    }
    return "Unhandled VkMemoryOverallocationBehaviorAMD";
}

template <> std::string ToString<VkPerformanceConfigurationTypeINTEL>(const VkPerformanceConfigurationTypeINTEL& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL: return "VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL";
    default: break;
    }
    return "Unhandled VkPerformanceConfigurationTypeINTEL";
}

template <> std::string ToString<VkPerformanceOverrideTypeINTEL>(const VkPerformanceOverrideTypeINTEL& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL: return "VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL";
    case VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL: return "VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL";
    default: break;
    }
    return "Unhandled VkPerformanceOverrideTypeINTEL";
}

template <> std::string ToString<VkPerformanceParameterTypeINTEL>(const VkPerformanceParameterTypeINTEL& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL: return "VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL";
    case VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL: return "VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL";
    default: break;
    }
    return "Unhandled VkPerformanceParameterTypeINTEL";
}

template <> std::string ToString<VkPerformanceValueTypeINTEL>(const VkPerformanceValueTypeINTEL& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL: return "VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL";
    case VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL: return "VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL";
    case VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL: return "VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL";
    case VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL: return "VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL";
    case VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL: return "VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL";
    default: break;
    }
    return "Unhandled VkPerformanceValueTypeINTEL";
}

template <> std::string ToString<VkQueryPoolSamplingModeINTEL>(const VkQueryPoolSamplingModeINTEL& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL: return "VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL";
    default: break;
    }
    return "Unhandled VkQueryPoolSamplingModeINTEL";
}

template <> std::string ToString<VkShaderCorePropertiesFlagBitsAMD>(const VkShaderCorePropertiesFlagBitsAMD& value, ToStringFlags, uint32_t, uint32_t)
{
    return "Unhandled VkShaderCorePropertiesFlagBitsAMD";
}

template <> std::string ToString<VkShaderCorePropertiesFlagBitsAMD>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkShaderCorePropertiesFlagBitsAMD>(vkFlags);
}

template <> std::string ToString<VkValidationFeatureDisableEXT>(const VkValidationFeatureDisableEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VALIDATION_FEATURE_DISABLE_ALL_EXT: return "VK_VALIDATION_FEATURE_DISABLE_ALL_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT: return "VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT: return "VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT: return "VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT: return "VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT: return "VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT: return "VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT";
    case VK_VALIDATION_FEATURE_DISABLE_SHADER_VALIDATION_CACHE_EXT: return "VK_VALIDATION_FEATURE_DISABLE_SHADER_VALIDATION_CACHE_EXT";
    default: break;
    }
    return "Unhandled VkValidationFeatureDisableEXT";
}

template <> std::string ToString<VkValidationFeatureEnableEXT>(const VkValidationFeatureEnableEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT: return "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT";
    case VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT: return "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT";
    case VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT: return "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT";
    case VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT: return "VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT";
    case VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT: return "VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT";
    default: break;
    }
    return "Unhandled VkValidationFeatureEnableEXT";
}

template <> std::string ToString<VkComponentTypeNV>(const VkComponentTypeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COMPONENT_TYPE_FLOAT16_NV: return "VK_COMPONENT_TYPE_FLOAT16_NV";
    case VK_COMPONENT_TYPE_FLOAT32_NV: return "VK_COMPONENT_TYPE_FLOAT32_NV";
    case VK_COMPONENT_TYPE_FLOAT64_NV: return "VK_COMPONENT_TYPE_FLOAT64_NV";
    case VK_COMPONENT_TYPE_SINT8_NV: return "VK_COMPONENT_TYPE_SINT8_NV";
    case VK_COMPONENT_TYPE_SINT16_NV: return "VK_COMPONENT_TYPE_SINT16_NV";
    case VK_COMPONENT_TYPE_SINT32_NV: return "VK_COMPONENT_TYPE_SINT32_NV";
    case VK_COMPONENT_TYPE_SINT64_NV: return "VK_COMPONENT_TYPE_SINT64_NV";
    case VK_COMPONENT_TYPE_UINT8_NV: return "VK_COMPONENT_TYPE_UINT8_NV";
    case VK_COMPONENT_TYPE_UINT16_NV: return "VK_COMPONENT_TYPE_UINT16_NV";
    case VK_COMPONENT_TYPE_UINT32_NV: return "VK_COMPONENT_TYPE_UINT32_NV";
    case VK_COMPONENT_TYPE_UINT64_NV: return "VK_COMPONENT_TYPE_UINT64_NV";
    default: break;
    }
    return "Unhandled VkComponentTypeNV";
}

template <> std::string ToString<VkScopeNV>(const VkScopeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SCOPE_DEVICE_NV: return "VK_SCOPE_DEVICE_NV";
    case VK_SCOPE_WORKGROUP_NV: return "VK_SCOPE_WORKGROUP_NV";
    case VK_SCOPE_SUBGROUP_NV: return "VK_SCOPE_SUBGROUP_NV";
    case VK_SCOPE_QUEUE_FAMILY_NV: return "VK_SCOPE_QUEUE_FAMILY_NV";
    default: break;
    }
    return "Unhandled VkScopeNV";
}

template <> std::string ToString<VkCoverageReductionModeNV>(const VkCoverageReductionModeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COVERAGE_REDUCTION_MODE_MERGE_NV: return "VK_COVERAGE_REDUCTION_MODE_MERGE_NV";
    case VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV: return "VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV";
    default: break;
    }
    return "Unhandled VkCoverageReductionModeNV";
}

template <> std::string ToString<VkProvokingVertexModeEXT>(const VkProvokingVertexModeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PROVOKING_VERTEX_MODE_FIRST_VERTEX_EXT: return "VK_PROVOKING_VERTEX_MODE_FIRST_VERTEX_EXT";
    case VK_PROVOKING_VERTEX_MODE_LAST_VERTEX_EXT: return "VK_PROVOKING_VERTEX_MODE_LAST_VERTEX_EXT";
    default: break;
    }
    return "Unhandled VkProvokingVertexModeEXT";
}

template <> std::string ToString<VkFullScreenExclusiveEXT>(const VkFullScreenExclusiveEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT: return "VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT";
    case VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT: return "VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT";
    case VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT: return "VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT";
    case VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT: return "VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT";
    default: break;
    }
    return "Unhandled VkFullScreenExclusiveEXT";
}

template <> std::string ToString<VkLineRasterizationModeEXT>(const VkLineRasterizationModeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT: return "VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT";
    case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT: return "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT";
    case VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT: return "VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT";
    case VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT: return "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT";
    default: break;
    }
    return "Unhandled VkLineRasterizationModeEXT";
}

template <> std::string ToString<VkPresentGravityFlagBitsEXT>(const VkPresentGravityFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PRESENT_GRAVITY_MIN_BIT_EXT: return "VK_PRESENT_GRAVITY_MIN_BIT_EXT";
    case VK_PRESENT_GRAVITY_MAX_BIT_EXT: return "VK_PRESENT_GRAVITY_MAX_BIT_EXT";
    case VK_PRESENT_GRAVITY_CENTERED_BIT_EXT: return "VK_PRESENT_GRAVITY_CENTERED_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPresentGravityFlagBitsEXT";
}

template <> std::string ToString<VkPresentGravityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPresentGravityFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkPresentScalingFlagBitsEXT>(const VkPresentScalingFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_PRESENT_SCALING_ONE_TO_ONE_BIT_EXT: return "VK_PRESENT_SCALING_ONE_TO_ONE_BIT_EXT";
    case VK_PRESENT_SCALING_ASPECT_RATIO_STRETCH_BIT_EXT: return "VK_PRESENT_SCALING_ASPECT_RATIO_STRETCH_BIT_EXT";
    case VK_PRESENT_SCALING_STRETCH_BIT_EXT: return "VK_PRESENT_SCALING_STRETCH_BIT_EXT";
    default: break;
    }
    return "Unhandled VkPresentScalingFlagBitsEXT";
}

template <> std::string ToString<VkPresentScalingFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkPresentScalingFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkIndirectCommandsLayoutUsageFlagBitsNV>(const VkIndirectCommandsLayoutUsageFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV: return "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV";
    case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV: return "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV";
    case VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV: return "VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV";
    default: break;
    }
    return "Unhandled VkIndirectCommandsLayoutUsageFlagBitsNV";
}

template <> std::string ToString<VkIndirectCommandsLayoutUsageFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkIndirectCommandsLayoutUsageFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkIndirectCommandsTokenTypeNV>(const VkIndirectCommandsTokenTypeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV";
    case VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV: return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV";
    default: break;
    }
    return "Unhandled VkIndirectCommandsTokenTypeNV";
}

template <> std::string ToString<VkIndirectStateFlagBitsNV>(const VkIndirectStateFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV: return "VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV";
    default: break;
    }
    return "Unhandled VkIndirectStateFlagBitsNV";
}

template <> std::string ToString<VkIndirectStateFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkIndirectStateFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkDeviceMemoryReportEventTypeEXT>(const VkDeviceMemoryReportEventTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT: return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT";
    case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT: return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT";
    case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT: return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT";
    case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT: return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT";
    case VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT: return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT";
    default: break;
    }
    return "Unhandled VkDeviceMemoryReportEventTypeEXT";
}

template <> std::string ToString<VkDeviceDiagnosticsConfigFlagBitsNV>(const VkDeviceDiagnosticsConfigFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV: return "VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV";
    case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV: return "VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV";
    case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV: return "VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV";
    case VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_ERROR_REPORTING_BIT_NV: return "VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_ERROR_REPORTING_BIT_NV";
    default: break;
    }
    return "Unhandled VkDeviceDiagnosticsConfigFlagBitsNV";
}

template <> std::string ToString<VkDeviceDiagnosticsConfigFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDeviceDiagnosticsConfigFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkGraphicsPipelineLibraryFlagBitsEXT>(const VkGraphicsPipelineLibraryFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_EXT: return "VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_EXT";
    case VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_EXT: return "VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_EXT";
    case VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_EXT: return "VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_EXT";
    case VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT: return "VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT";
    default: break;
    }
    return "Unhandled VkGraphicsPipelineLibraryFlagBitsEXT";
}

template <> std::string ToString<VkGraphicsPipelineLibraryFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkGraphicsPipelineLibraryFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkFragmentShadingRateNV>(const VkFragmentShadingRateNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV";
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV";
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV";
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV";
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV";
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV";
    case VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV: return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV";
    case VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV: return "VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV";
    case VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV: return "VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV";
    case VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV: return "VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV";
    case VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV: return "VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV";
    case VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV: return "VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV";
    default: break;
    }
    return "Unhandled VkFragmentShadingRateNV";
}

template <> std::string ToString<VkFragmentShadingRateTypeNV>(const VkFragmentShadingRateTypeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV: return "VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV";
    case VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV: return "VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV";
    default: break;
    }
    return "Unhandled VkFragmentShadingRateTypeNV";
}

template <> std::string ToString<VkAccelerationStructureMotionInstanceTypeNV>(const VkAccelerationStructureMotionInstanceTypeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_STATIC_NV: return "VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_STATIC_NV";
    case VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MATRIX_MOTION_NV: return "VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MATRIX_MOTION_NV";
    case VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_SRT_MOTION_NV: return "VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_SRT_MOTION_NV";
    default: break;
    }
    return "Unhandled VkAccelerationStructureMotionInstanceTypeNV";
}

template <> std::string ToString<VkImageCompressionFixedRateFlagBitsEXT>(const VkImageCompressionFixedRateFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_COMPRESSION_FIXED_RATE_NONE_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_NONE_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_1BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_1BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_2BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_2BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_3BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_3BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_4BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_4BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_5BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_5BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_6BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_6BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_7BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_7BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_8BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_8BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_9BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_9BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_10BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_10BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_11BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_11BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_12BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_12BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_13BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_13BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_14BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_14BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_15BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_15BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_16BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_16BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_17BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_17BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_18BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_18BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_19BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_19BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_20BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_20BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_21BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_21BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_22BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_22BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_23BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_23BPC_BIT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_24BPC_BIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_24BPC_BIT_EXT";
    default: break;
    }
    return "Unhandled VkImageCompressionFixedRateFlagBitsEXT";
}

template <> std::string ToString<VkImageCompressionFixedRateFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkImageCompressionFixedRateFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkImageCompressionFlagBitsEXT>(const VkImageCompressionFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_IMAGE_COMPRESSION_DEFAULT_EXT: return "VK_IMAGE_COMPRESSION_DEFAULT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_DEFAULT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_DEFAULT_EXT";
    case VK_IMAGE_COMPRESSION_FIXED_RATE_EXPLICIT_EXT: return "VK_IMAGE_COMPRESSION_FIXED_RATE_EXPLICIT_EXT";
    case VK_IMAGE_COMPRESSION_DISABLED_EXT: return "VK_IMAGE_COMPRESSION_DISABLED_EXT";
    default: break;
    }
    return "Unhandled VkImageCompressionFlagBitsEXT";
}

template <> std::string ToString<VkImageCompressionFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkImageCompressionFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkDeviceFaultAddressTypeEXT>(const VkDeviceFaultAddressTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_FAULT_ADDRESS_TYPE_NONE_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_NONE_EXT";
    case VK_DEVICE_FAULT_ADDRESS_TYPE_READ_INVALID_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_READ_INVALID_EXT";
    case VK_DEVICE_FAULT_ADDRESS_TYPE_WRITE_INVALID_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_WRITE_INVALID_EXT";
    case VK_DEVICE_FAULT_ADDRESS_TYPE_EXECUTE_INVALID_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_EXECUTE_INVALID_EXT";
    case VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_UNKNOWN_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_UNKNOWN_EXT";
    case VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_INVALID_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_INVALID_EXT";
    case VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_FAULT_EXT: return "VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_FAULT_EXT";
    default: break;
    }
    return "Unhandled VkDeviceFaultAddressTypeEXT";
}

template <> std::string ToString<VkDeviceFaultVendorBinaryHeaderVersionEXT>(const VkDeviceFaultVendorBinaryHeaderVersionEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_FAULT_VENDOR_BINARY_HEADER_VERSION_ONE_EXT: return "VK_DEVICE_FAULT_VENDOR_BINARY_HEADER_VERSION_ONE_EXT";
    default: break;
    }
    return "Unhandled VkDeviceFaultVendorBinaryHeaderVersionEXT";
}

template <> std::string ToString<VkDeviceAddressBindingFlagBitsEXT>(const VkDeviceAddressBindingFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_ADDRESS_BINDING_INTERNAL_OBJECT_BIT_EXT: return "VK_DEVICE_ADDRESS_BINDING_INTERNAL_OBJECT_BIT_EXT";
    default: break;
    }
    return "Unhandled VkDeviceAddressBindingFlagBitsEXT";
}

template <> std::string ToString<VkDeviceAddressBindingFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkDeviceAddressBindingFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkDeviceAddressBindingTypeEXT>(const VkDeviceAddressBindingTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DEVICE_ADDRESS_BINDING_TYPE_BIND_EXT: return "VK_DEVICE_ADDRESS_BINDING_TYPE_BIND_EXT";
    case VK_DEVICE_ADDRESS_BINDING_TYPE_UNBIND_EXT: return "VK_DEVICE_ADDRESS_BINDING_TYPE_UNBIND_EXT";
    default: break;
    }
    return "Unhandled VkDeviceAddressBindingTypeEXT";
}

template <> std::string ToString<VkAccelerationStructureBuildTypeKHR>(const VkAccelerationStructureBuildTypeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR: return "VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR";
    case VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR: return "VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR";
    case VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR: return "VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR";
    default: break;
    }
    return "Unhandled VkAccelerationStructureBuildTypeKHR";
}

template <> std::string ToString<VkAccelerationStructureCompatibilityKHR>(const VkAccelerationStructureCompatibilityKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR: return "VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR";
    case VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR: return "VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR";
    default: break;
    }
    return "Unhandled VkAccelerationStructureCompatibilityKHR";
}

template <> std::string ToString<VkBuildMicromapFlagBitsEXT>(const VkBuildMicromapFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BUILD_MICROMAP_PREFER_FAST_TRACE_BIT_EXT: return "VK_BUILD_MICROMAP_PREFER_FAST_TRACE_BIT_EXT";
    case VK_BUILD_MICROMAP_PREFER_FAST_BUILD_BIT_EXT: return "VK_BUILD_MICROMAP_PREFER_FAST_BUILD_BIT_EXT";
    case VK_BUILD_MICROMAP_ALLOW_COMPACTION_BIT_EXT: return "VK_BUILD_MICROMAP_ALLOW_COMPACTION_BIT_EXT";
    default: break;
    }
    return "Unhandled VkBuildMicromapFlagBitsEXT";
}

template <> std::string ToString<VkBuildMicromapFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkBuildMicromapFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkBuildMicromapModeEXT>(const VkBuildMicromapModeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BUILD_MICROMAP_MODE_BUILD_EXT: return "VK_BUILD_MICROMAP_MODE_BUILD_EXT";
    default: break;
    }
    return "Unhandled VkBuildMicromapModeEXT";
}

template <> std::string ToString<VkCopyMicromapModeEXT>(const VkCopyMicromapModeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_COPY_MICROMAP_MODE_CLONE_EXT: return "VK_COPY_MICROMAP_MODE_CLONE_EXT";
    case VK_COPY_MICROMAP_MODE_SERIALIZE_EXT: return "VK_COPY_MICROMAP_MODE_SERIALIZE_EXT";
    case VK_COPY_MICROMAP_MODE_DESERIALIZE_EXT: return "VK_COPY_MICROMAP_MODE_DESERIALIZE_EXT";
    case VK_COPY_MICROMAP_MODE_COMPACT_EXT: return "VK_COPY_MICROMAP_MODE_COMPACT_EXT";
    default: break;
    }
    return "Unhandled VkCopyMicromapModeEXT";
}

template <> std::string ToString<VkMicromapCreateFlagBitsEXT>(const VkMicromapCreateFlagBitsEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_MICROMAP_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT: return "VK_MICROMAP_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT";
    default: break;
    }
    return "Unhandled VkMicromapCreateFlagBitsEXT";
}

template <> std::string ToString<VkMicromapCreateFlagBitsEXT>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkMicromapCreateFlagBitsEXT>(vkFlags);
}

template <> std::string ToString<VkMicromapTypeEXT>(const VkMicromapTypeEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_MICROMAP_TYPE_OPACITY_MICROMAP_EXT: return "VK_MICROMAP_TYPE_OPACITY_MICROMAP_EXT";
    default: break;
    }
    return "Unhandled VkMicromapTypeEXT";
}

template <> std::string ToString<VkOpacityMicromapFormatEXT>(const VkOpacityMicromapFormatEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPACITY_MICROMAP_FORMAT_2_STATE_EXT: return "VK_OPACITY_MICROMAP_FORMAT_2_STATE_EXT";
    case VK_OPACITY_MICROMAP_FORMAT_4_STATE_EXT: return "VK_OPACITY_MICROMAP_FORMAT_4_STATE_EXT";
    default: break;
    }
    return "Unhandled VkOpacityMicromapFormatEXT";
}

template <> std::string ToString<VkOpacityMicromapSpecialIndexEXT>(const VkOpacityMicromapSpecialIndexEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_TRANSPARENT_EXT: return "VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_TRANSPARENT_EXT";
    case VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_OPAQUE_EXT: return "VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_OPAQUE_EXT";
    case VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_TRANSPARENT_EXT: return "VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_TRANSPARENT_EXT";
    case VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_OPAQUE_EXT: return "VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_OPAQUE_EXT";
    default: break;
    }
    return "Unhandled VkOpacityMicromapSpecialIndexEXT";
}

template <> std::string ToString<VkSubpassMergeStatusEXT>(const VkSubpassMergeStatusEXT& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SUBPASS_MERGE_STATUS_MERGED_EXT: return "VK_SUBPASS_MERGE_STATUS_MERGED_EXT";
    case VK_SUBPASS_MERGE_STATUS_DISALLOWED_EXT: return "VK_SUBPASS_MERGE_STATUS_DISALLOWED_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SIDE_EFFECTS_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SIDE_EFFECTS_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SAMPLES_MISMATCH_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SAMPLES_MISMATCH_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_VIEWS_MISMATCH_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_VIEWS_MISMATCH_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_ALIASING_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_ALIASING_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPENDENCIES_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPENDENCIES_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INSUFFICIENT_STORAGE_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INSUFFICIENT_STORAGE_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPTH_STENCIL_COUNT_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPTH_STENCIL_COUNT_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SINGLE_SUBPASS_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SINGLE_SUBPASS_EXT";
    case VK_SUBPASS_MERGE_STATUS_NOT_MERGED_UNSPECIFIED_EXT: return "VK_SUBPASS_MERGE_STATUS_NOT_MERGED_UNSPECIFIED_EXT";
    default: break;
    }
    return "Unhandled VkSubpassMergeStatusEXT";
}

template <> std::string ToString<VkDirectDriverLoadingModeLUNARG>(const VkDirectDriverLoadingModeLUNARG& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_DIRECT_DRIVER_LOADING_MODE_EXCLUSIVE_LUNARG: return "VK_DIRECT_DRIVER_LOADING_MODE_EXCLUSIVE_LUNARG";
    case VK_DIRECT_DRIVER_LOADING_MODE_INCLUSIVE_LUNARG: return "VK_DIRECT_DRIVER_LOADING_MODE_INCLUSIVE_LUNARG";
    default: break;
    }
    return "Unhandled VkDirectDriverLoadingModeLUNARG";
}

template <> std::string ToString<VkOpticalFlowExecuteFlagBitsNV>(const VkOpticalFlowExecuteFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPTICAL_FLOW_EXECUTE_DISABLE_TEMPORAL_HINTS_BIT_NV: return "VK_OPTICAL_FLOW_EXECUTE_DISABLE_TEMPORAL_HINTS_BIT_NV";
    default: break;
    }
    return "Unhandled VkOpticalFlowExecuteFlagBitsNV";
}

template <> std::string ToString<VkOpticalFlowExecuteFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkOpticalFlowExecuteFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkOpticalFlowGridSizeFlagBitsNV>(const VkOpticalFlowGridSizeFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPTICAL_FLOW_GRID_SIZE_UNKNOWN_NV: return "VK_OPTICAL_FLOW_GRID_SIZE_UNKNOWN_NV";
    case VK_OPTICAL_FLOW_GRID_SIZE_1X1_BIT_NV: return "VK_OPTICAL_FLOW_GRID_SIZE_1X1_BIT_NV";
    case VK_OPTICAL_FLOW_GRID_SIZE_2X2_BIT_NV: return "VK_OPTICAL_FLOW_GRID_SIZE_2X2_BIT_NV";
    case VK_OPTICAL_FLOW_GRID_SIZE_4X4_BIT_NV: return "VK_OPTICAL_FLOW_GRID_SIZE_4X4_BIT_NV";
    case VK_OPTICAL_FLOW_GRID_SIZE_8X8_BIT_NV: return "VK_OPTICAL_FLOW_GRID_SIZE_8X8_BIT_NV";
    default: break;
    }
    return "Unhandled VkOpticalFlowGridSizeFlagBitsNV";
}

template <> std::string ToString<VkOpticalFlowGridSizeFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkOpticalFlowGridSizeFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkOpticalFlowPerformanceLevelNV>(const VkOpticalFlowPerformanceLevelNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_UNKNOWN_NV: return "VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_UNKNOWN_NV";
    case VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_SLOW_NV: return "VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_SLOW_NV";
    case VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_MEDIUM_NV: return "VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_MEDIUM_NV";
    case VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_FAST_NV: return "VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_FAST_NV";
    default: break;
    }
    return "Unhandled VkOpticalFlowPerformanceLevelNV";
}

template <> std::string ToString<VkOpticalFlowSessionBindingPointNV>(const VkOpticalFlowSessionBindingPointNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_UNKNOWN_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_UNKNOWN_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_INPUT_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_INPUT_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_REFERENCE_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_REFERENCE_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_HINT_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_HINT_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_FLOW_VECTOR_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_FLOW_VECTOR_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_FLOW_VECTOR_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_FLOW_VECTOR_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_COST_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_COST_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_COST_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_COST_NV";
    case VK_OPTICAL_FLOW_SESSION_BINDING_POINT_GLOBAL_FLOW_NV: return "VK_OPTICAL_FLOW_SESSION_BINDING_POINT_GLOBAL_FLOW_NV";
    default: break;
    }
    return "Unhandled VkOpticalFlowSessionBindingPointNV";
}

template <> std::string ToString<VkOpticalFlowSessionCreateFlagBitsNV>(const VkOpticalFlowSessionCreateFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_HINT_BIT_NV: return "VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_HINT_BIT_NV";
    case VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_COST_BIT_NV: return "VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_COST_BIT_NV";
    case VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_GLOBAL_FLOW_BIT_NV: return "VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_GLOBAL_FLOW_BIT_NV";
    case VK_OPTICAL_FLOW_SESSION_CREATE_ALLOW_REGIONS_BIT_NV: return "VK_OPTICAL_FLOW_SESSION_CREATE_ALLOW_REGIONS_BIT_NV";
    case VK_OPTICAL_FLOW_SESSION_CREATE_BOTH_DIRECTIONS_BIT_NV: return "VK_OPTICAL_FLOW_SESSION_CREATE_BOTH_DIRECTIONS_BIT_NV";
    default: break;
    }
    return "Unhandled VkOpticalFlowSessionCreateFlagBitsNV";
}

template <> std::string ToString<VkOpticalFlowSessionCreateFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkOpticalFlowSessionCreateFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkOpticalFlowUsageFlagBitsNV>(const VkOpticalFlowUsageFlagBitsNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_OPTICAL_FLOW_USAGE_UNKNOWN_NV: return "VK_OPTICAL_FLOW_USAGE_UNKNOWN_NV";
    case VK_OPTICAL_FLOW_USAGE_INPUT_BIT_NV: return "VK_OPTICAL_FLOW_USAGE_INPUT_BIT_NV";
    case VK_OPTICAL_FLOW_USAGE_OUTPUT_BIT_NV: return "VK_OPTICAL_FLOW_USAGE_OUTPUT_BIT_NV";
    case VK_OPTICAL_FLOW_USAGE_HINT_BIT_NV: return "VK_OPTICAL_FLOW_USAGE_HINT_BIT_NV";
    case VK_OPTICAL_FLOW_USAGE_COST_BIT_NV: return "VK_OPTICAL_FLOW_USAGE_COST_BIT_NV";
    case VK_OPTICAL_FLOW_USAGE_GLOBAL_FLOW_BIT_NV: return "VK_OPTICAL_FLOW_USAGE_GLOBAL_FLOW_BIT_NV";
    default: break;
    }
    return "Unhandled VkOpticalFlowUsageFlagBitsNV";
}

template <> std::string ToString<VkOpticalFlowUsageFlagBitsNV>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkOpticalFlowUsageFlagBitsNV>(vkFlags);
}

template <> std::string ToString<VkRayTracingInvocationReorderModeNV>(const VkRayTracingInvocationReorderModeNV& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_RAY_TRACING_INVOCATION_REORDER_MODE_NONE_NV: return "VK_RAY_TRACING_INVOCATION_REORDER_MODE_NONE_NV";
    case VK_RAY_TRACING_INVOCATION_REORDER_MODE_REORDER_NV: return "VK_RAY_TRACING_INVOCATION_REORDER_MODE_REORDER_NV";
    default: break;
    }
    return "Unhandled VkRayTracingInvocationReorderModeNV";
}

template <> std::string ToString<VkAccelerationStructureCreateFlagBitsKHR>(const VkAccelerationStructureCreateFlagBitsKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR: return "VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR";
    case VK_ACCELERATION_STRUCTURE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT: return "VK_ACCELERATION_STRUCTURE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
    case VK_ACCELERATION_STRUCTURE_CREATE_MOTION_BIT_NV: return "VK_ACCELERATION_STRUCTURE_CREATE_MOTION_BIT_NV";
    default: break;
    }
    return "Unhandled VkAccelerationStructureCreateFlagBitsKHR";
}

template <> std::string ToString<VkAccelerationStructureCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags, uint32_t, uint32_t)
{
    return BitmaskToString<VkAccelerationStructureCreateFlagBitsKHR>(vkFlags);
}

template <> std::string ToString<VkBuildAccelerationStructureModeKHR>(const VkBuildAccelerationStructureModeKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR";
    case VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR: return "VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR";
    default: break;
    }
    return "Unhandled VkBuildAccelerationStructureModeKHR";
}

template <> std::string ToString<VkShaderGroupShaderKHR>(const VkShaderGroupShaderKHR& value, ToStringFlags, uint32_t, uint32_t)
{
    switch (value) {
    case VK_SHADER_GROUP_SHADER_GENERAL_KHR: return "VK_SHADER_GROUP_SHADER_GENERAL_KHR";
    case VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR: return "VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR";
    case VK_SHADER_GROUP_SHADER_ANY_HIT_KHR: return "VK_SHADER_GROUP_SHADER_ANY_HIT_KHR";
    case VK_SHADER_GROUP_SHADER_INTERSECTION_KHR: return "VK_SHADER_GROUP_SHADER_INTERSECTION_KHR";
    default: break;
    }
    return "Unhandled VkShaderGroupShaderKHR";
}

GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)
