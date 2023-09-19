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
** This file is generated from dx12_struct_decoders_forward_generator.py.
**
*/

#ifndef  GFXRECON_GENERATED_DX12_STRUCT_DECODERS_FORWARD_H
#define  GFXRECON_GENERATED_DX12_STRUCT_DECODERS_FORWARD_H

#include "util/defines.h"

#include <cstdint>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

struct Decoded_DXGI_FRAME_STATISTICS;
struct Decoded_DXGI_MAPPED_RECT;
struct Decoded_LUID;
struct Decoded_DXGI_ADAPTER_DESC;
struct Decoded_DXGI_OUTPUT_DESC;
struct Decoded_DXGI_SHARED_RESOURCE;
struct Decoded_DXGI_SURFACE_DESC;
struct Decoded_DXGI_SWAP_CHAIN_DESC;
struct Decoded_DXGI_ADAPTER_DESC1;
struct Decoded_DXGI_DISPLAY_COLOR_SPACE;
struct Decoded_DXGI_OUTDUPL_MOVE_RECT;
struct Decoded_DXGI_OUTDUPL_DESC;
struct Decoded_DXGI_OUTDUPL_POINTER_POSITION;
struct Decoded_DXGI_OUTDUPL_POINTER_SHAPE_INFO;
struct Decoded_DXGI_OUTDUPL_FRAME_INFO;
struct Decoded_DXGI_MODE_DESC1;
struct Decoded_DXGI_SWAP_CHAIN_DESC1;
struct Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC;
struct Decoded_DXGI_PRESENT_PARAMETERS;
struct Decoded_DXGI_ADAPTER_DESC2;
struct Decoded_DXGI_MATRIX_3X2_F;
struct Decoded_DXGI_DECODE_SWAP_CHAIN_DESC;
struct Decoded_DXGI_FRAME_STATISTICS_MEDIA;
struct Decoded_DXGI_QUERY_VIDEO_MEMORY_INFO;
struct Decoded_DXGI_HDR_METADATA_HDR10;
struct Decoded_DXGI_HDR_METADATA_HDR10PLUS;
struct Decoded_DXGI_ADAPTER_DESC3;
struct Decoded_DXGI_OUTPUT_DESC1;
struct Decoded_DXGI_RATIONAL;
struct Decoded_DXGI_SAMPLE_DESC;
struct Decoded_DXGI_RGB;
struct Decoded_D3DCOLORVALUE;
struct Decoded_DXGI_GAMMA_CONTROL;
struct Decoded_DXGI_GAMMA_CONTROL_CAPABILITIES;
struct Decoded_DXGI_MODE_DESC;
struct Decoded_DXGI_JPEG_DC_HUFFMAN_TABLE;
struct Decoded_DXGI_JPEG_AC_HUFFMAN_TABLE;
struct Decoded_DXGI_JPEG_QUANTIZATION_TABLE;
struct Decoded_D3D12_COMMAND_QUEUE_DESC;
struct Decoded_D3D12_INPUT_ELEMENT_DESC;
struct Decoded_D3D12_SO_DECLARATION_ENTRY;
struct Decoded_D3D12_VIEWPORT;
struct Decoded_D3D12_BOX;
struct Decoded_D3D12_DEPTH_STENCILOP_DESC;
struct Decoded_D3D12_DEPTH_STENCIL_DESC;
struct Decoded_D3D12_DEPTH_STENCIL_DESC1;
struct Decoded_D3D12_DEPTH_STENCILOP_DESC1;
struct Decoded_D3D12_DEPTH_STENCIL_DESC2;
struct Decoded_D3D12_RENDER_TARGET_BLEND_DESC;
struct Decoded_D3D12_BLEND_DESC;
struct Decoded_D3D12_RASTERIZER_DESC;
struct Decoded_D3D12_SHADER_BYTECODE;
struct Decoded_D3D12_STREAM_OUTPUT_DESC;
struct Decoded_D3D12_INPUT_LAYOUT_DESC;
struct Decoded_D3D12_CACHED_PIPELINE_STATE;
struct Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC;
struct Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC;
struct Decoded_D3D12_RT_FORMAT_ARRAY;
struct Decoded_D3D12_PIPELINE_STATE_STREAM_DESC;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS1;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS2;
struct Decoded_D3D12_FEATURE_DATA_ROOT_SIGNATURE;
struct Decoded_D3D12_FEATURE_DATA_ARCHITECTURE;
struct Decoded_D3D12_FEATURE_DATA_ARCHITECTURE1;
struct Decoded_D3D12_FEATURE_DATA_FEATURE_LEVELS;
struct Decoded_D3D12_FEATURE_DATA_SHADER_MODEL;
struct Decoded_D3D12_FEATURE_DATA_FORMAT_SUPPORT;
struct Decoded_D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS;
struct Decoded_D3D12_FEATURE_DATA_FORMAT_INFO;
struct Decoded_D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT;
struct Decoded_D3D12_FEATURE_DATA_SHADER_CACHE;
struct Decoded_D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS3;
struct Decoded_D3D12_FEATURE_DATA_EXISTING_HEAPS;
struct Decoded_D3D12_FEATURE_DATA_DISPLAYABLE;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS4;
struct Decoded_D3D12_FEATURE_DATA_SERIALIZATION;
struct Decoded_D3D12_FEATURE_DATA_CROSS_NODE;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS5;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS6;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS7;
struct Decoded_D3D12_FEATURE_DATA_QUERY_META_COMMAND;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS8;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS9;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS10;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS11;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS12;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS13;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS14;
struct Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS15;
struct Decoded_D3D12_RESOURCE_ALLOCATION_INFO;
struct Decoded_D3D12_RESOURCE_ALLOCATION_INFO1;
struct Decoded_D3D12_HEAP_PROPERTIES;
struct Decoded_D3D12_HEAP_DESC;
struct Decoded_D3D12_MIP_REGION;
struct Decoded_D3D12_RESOURCE_DESC;
struct Decoded_D3D12_RESOURCE_DESC1;
struct Decoded_D3D12_DEPTH_STENCIL_VALUE;
struct Decoded_D3D12_CLEAR_VALUE;
struct Decoded_D3D12_RANGE;
struct Decoded_D3D12_RANGE_UINT64;
struct Decoded_D3D12_SUBRESOURCE_RANGE_UINT64;
struct Decoded_D3D12_SUBRESOURCE_INFO;
struct Decoded_D3D12_TILED_RESOURCE_COORDINATE;
struct Decoded_D3D12_TILE_REGION_SIZE;
struct Decoded_D3D12_SUBRESOURCE_TILING;
struct Decoded_D3D12_TILE_SHAPE;
struct Decoded_D3D12_PACKED_MIP_INFO;
struct Decoded_D3D12_RESOURCE_TRANSITION_BARRIER;
struct Decoded_D3D12_RESOURCE_ALIASING_BARRIER;
struct Decoded_D3D12_RESOURCE_UAV_BARRIER;
struct Decoded_D3D12_RESOURCE_BARRIER;
struct Decoded_D3D12_SUBRESOURCE_FOOTPRINT;
struct Decoded_D3D12_PLACED_SUBRESOURCE_FOOTPRINT;
struct Decoded_D3D12_TEXTURE_COPY_LOCATION;
struct Decoded_D3D12_SAMPLE_POSITION;
struct Decoded_D3D12_VIEW_INSTANCE_LOCATION;
struct Decoded_D3D12_VIEW_INSTANCING_DESC;
struct Decoded_D3D12_BUFFER_SRV;
struct Decoded_D3D12_TEX1D_SRV;
struct Decoded_D3D12_TEX1D_ARRAY_SRV;
struct Decoded_D3D12_TEX2D_SRV;
struct Decoded_D3D12_TEX2D_ARRAY_SRV;
struct Decoded_D3D12_TEX3D_SRV;
struct Decoded_D3D12_TEXCUBE_SRV;
struct Decoded_D3D12_TEXCUBE_ARRAY_SRV;
struct Decoded_D3D12_TEX2DMS_SRV;
struct Decoded_D3D12_TEX2DMS_ARRAY_SRV;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV;
struct Decoded_D3D12_SHADER_RESOURCE_VIEW_DESC;
struct Decoded_D3D12_CONSTANT_BUFFER_VIEW_DESC;
struct Decoded_D3D12_SAMPLER_DESC;
struct Decoded_D3D12_SAMPLER_DESC2;
struct Decoded_D3D12_BUFFER_UAV;
struct Decoded_D3D12_TEX1D_UAV;
struct Decoded_D3D12_TEX1D_ARRAY_UAV;
struct Decoded_D3D12_TEX2D_UAV;
struct Decoded_D3D12_TEX2D_ARRAY_UAV;
struct Decoded_D3D12_TEX2DMS_UAV;
struct Decoded_D3D12_TEX2DMS_ARRAY_UAV;
struct Decoded_D3D12_TEX3D_UAV;
struct Decoded_D3D12_UNORDERED_ACCESS_VIEW_DESC;
struct Decoded_D3D12_BUFFER_RTV;
struct Decoded_D3D12_TEX1D_RTV;
struct Decoded_D3D12_TEX1D_ARRAY_RTV;
struct Decoded_D3D12_TEX2D_RTV;
struct Decoded_D3D12_TEX2DMS_RTV;
struct Decoded_D3D12_TEX2D_ARRAY_RTV;
struct Decoded_D3D12_TEX2DMS_ARRAY_RTV;
struct Decoded_D3D12_TEX3D_RTV;
struct Decoded_D3D12_RENDER_TARGET_VIEW_DESC;
struct Decoded_D3D12_TEX1D_DSV;
struct Decoded_D3D12_TEX1D_ARRAY_DSV;
struct Decoded_D3D12_TEX2D_DSV;
struct Decoded_D3D12_TEX2D_ARRAY_DSV;
struct Decoded_D3D12_TEX2DMS_DSV;
struct Decoded_D3D12_TEX2DMS_ARRAY_DSV;
struct Decoded_D3D12_DEPTH_STENCIL_VIEW_DESC;
struct Decoded_D3D12_DESCRIPTOR_HEAP_DESC;
struct Decoded_D3D12_DESCRIPTOR_RANGE;
struct Decoded_D3D12_ROOT_DESCRIPTOR_TABLE;
struct Decoded_D3D12_ROOT_CONSTANTS;
struct Decoded_D3D12_ROOT_DESCRIPTOR;
struct Decoded_D3D12_ROOT_PARAMETER;
struct Decoded_D3D12_STATIC_SAMPLER_DESC;
struct Decoded_D3D12_ROOT_SIGNATURE_DESC;
struct Decoded_D3D12_DESCRIPTOR_RANGE1;
struct Decoded_D3D12_ROOT_DESCRIPTOR_TABLE1;
struct Decoded_D3D12_ROOT_DESCRIPTOR1;
struct Decoded_D3D12_ROOT_PARAMETER1;
struct Decoded_D3D12_ROOT_SIGNATURE_DESC1;
struct Decoded_D3D12_VERSIONED_ROOT_SIGNATURE_DESC;
struct Decoded_D3D12_CPU_DESCRIPTOR_HANDLE;
struct Decoded_D3D12_GPU_DESCRIPTOR_HANDLE;
struct Decoded_D3D12_DISCARD_REGION;
struct Decoded_D3D12_QUERY_HEAP_DESC;
struct Decoded_D3D12_QUERY_DATA_PIPELINE_STATISTICS;
struct Decoded_D3D12_QUERY_DATA_PIPELINE_STATISTICS1;
struct Decoded_D3D12_QUERY_DATA_SO_STATISTICS;
struct Decoded_D3D12_STREAM_OUTPUT_BUFFER_VIEW;
struct Decoded_D3D12_DRAW_ARGUMENTS;
struct Decoded_D3D12_DRAW_INDEXED_ARGUMENTS;
struct Decoded_D3D12_DISPATCH_ARGUMENTS;
struct Decoded_D3D12_VERTEX_BUFFER_VIEW;
struct Decoded_D3D12_INDEX_BUFFER_VIEW;
struct Decoded_D3D12_INDIRECT_ARGUMENT_DESC;
struct Decoded_D3D12_COMMAND_SIGNATURE_DESC;
struct Decoded_D3D12_WRITEBUFFERIMMEDIATE_PARAMETER;
struct Decoded_D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT;
struct Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC;
struct Decoded_D3D12_META_COMMAND_PARAMETER_DESC;
struct Decoded_D3D12_META_COMMAND_DESC;
struct Decoded_D3D12_STATE_SUBOBJECT;
struct Decoded_D3D12_STATE_OBJECT_CONFIG;
struct Decoded_D3D12_GLOBAL_ROOT_SIGNATURE;
struct Decoded_D3D12_LOCAL_ROOT_SIGNATURE;
struct Decoded_D3D12_NODE_MASK;
struct Decoded_D3D12_EXPORT_DESC;
struct Decoded_D3D12_DXIL_LIBRARY_DESC;
struct Decoded_D3D12_EXISTING_COLLECTION_DESC;
struct Decoded_D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
struct Decoded_D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
struct Decoded_D3D12_HIT_GROUP_DESC;
struct Decoded_D3D12_RAYTRACING_SHADER_CONFIG;
struct Decoded_D3D12_RAYTRACING_PIPELINE_CONFIG;
struct Decoded_D3D12_RAYTRACING_PIPELINE_CONFIG1;
struct Decoded_D3D12_STATE_OBJECT_DESC;
struct Decoded_D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE;
struct Decoded_D3D12_GPU_VIRTUAL_ADDRESS_RANGE;
struct Decoded_D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE;
struct Decoded_D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC;
struct Decoded_D3D12_RAYTRACING_AABB;
struct Decoded_D3D12_RAYTRACING_GEOMETRY_AABBS_DESC;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_COMPACTED_SIZE_DESC;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TOOLS_VISUALIZATION_DESC;
struct Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_TOOLS_VISUALIZATION_HEADER;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION_DESC;
struct Decoded_D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER;
struct Decoded_D3D12_SERIALIZED_RAYTRACING_ACCELERATION_STRUCTURE_HEADER;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_CURRENT_SIZE_DESC;
struct Decoded_D3D12_RAYTRACING_INSTANCE_DESC;
struct Decoded_D3D12_RAYTRACING_GEOMETRY_DESC;
struct Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS;
struct Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC;
struct Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO;
struct Decoded_D3D12_AUTO_BREADCRUMB_NODE;
struct Decoded_D3D12_DRED_BREADCRUMB_CONTEXT;
struct Decoded_D3D12_AUTO_BREADCRUMB_NODE1;
struct Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA;
struct Decoded_D3D12_DRED_ALLOCATION_NODE;
struct Decoded_D3D12_DRED_ALLOCATION_NODE1;
struct Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT;
struct Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT1;
struct Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT;
struct Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT1;
struct Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT2;
struct Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA1;
struct Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA2;
struct Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA3;
struct Decoded_D3D12_VERSIONED_DEVICE_REMOVED_EXTENDED_DATA;
struct Decoded_D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPE_COUNT;
struct Decoded_D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES;
struct Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC1;
struct Decoded_D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS;
struct Decoded_D3D12_RENDER_PASS_BEGINNING_ACCESS;
struct Decoded_D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_SUBRESOURCE_PARAMETERS;
struct Decoded_D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS;
struct Decoded_D3D12_RENDER_PASS_ENDING_ACCESS;
struct Decoded_D3D12_RENDER_PASS_RENDER_TARGET_DESC;
struct Decoded_D3D12_RENDER_PASS_DEPTH_STENCIL_DESC;
struct Decoded_D3D12_DISPATCH_RAYS_DESC;
struct Decoded_D3D12_SHADER_CACHE_SESSION_DESC;
struct Decoded_D3D12_BARRIER_SUBRESOURCE_RANGE;
struct Decoded_D3D12_GLOBAL_BARRIER;
struct Decoded_D3D12_TEXTURE_BARRIER;
struct Decoded_D3D12_BUFFER_BARRIER;
struct Decoded_D3D12_BARRIER_GROUP;
struct Decoded_D3D12_SUBRESOURCE_DATA;
struct Decoded_D3D12_MEMCPY_DEST;
struct Decoded_D3D12_DEVICE_CONFIGURATION_DESC;
struct Decoded_D3D12_DISPATCH_MESH_ARGUMENTS;
struct Decoded_D3D_SHADER_MACRO;
struct Decoded_D3D12_DEBUG_DEVICE_GPU_BASED_VALIDATION_SETTINGS;
struct Decoded_D3D12_DEBUG_DEVICE_GPU_SLOWDOWN_PERFORMANCE_FACTOR;
struct Decoded_D3D12_DEBUG_COMMAND_LIST_GPU_BASED_VALIDATION_SETTINGS;
struct Decoded_D3D12_MESSAGE;
struct Decoded_D3D12_INFO_QUEUE_FILTER_DESC;
struct Decoded_D3D12_INFO_QUEUE_FILTER;
struct Decoded_D3D11_INPUT_ELEMENT_DESC;
struct Decoded_D3D11_SO_DECLARATION_ENTRY;
struct Decoded_D3D11_VIEWPORT;
struct Decoded_D3D11_DRAW_INSTANCED_INDIRECT_ARGS;
struct Decoded_D3D11_DRAW_INDEXED_INSTANCED_INDIRECT_ARGS;
struct Decoded_D3D11_BOX;
struct Decoded_D3D11_DEPTH_STENCILOP_DESC;
struct Decoded_D3D11_DEPTH_STENCIL_DESC;
struct Decoded_D3D11_RENDER_TARGET_BLEND_DESC;
struct Decoded_D3D11_BLEND_DESC;
struct Decoded_D3D11_RASTERIZER_DESC;
struct Decoded_D3D11_SUBRESOURCE_DATA;
struct Decoded_D3D11_MAPPED_SUBRESOURCE;
struct Decoded_D3D11_BUFFER_DESC;
struct Decoded_D3D11_TEXTURE1D_DESC;
struct Decoded_D3D11_TEXTURE2D_DESC;
struct Decoded_D3D11_TEXTURE3D_DESC;
struct Decoded_D3D11_BUFFER_SRV;
struct Decoded_D3D11_BUFFEREX_SRV;
struct Decoded_D3D11_TEX1D_SRV;
struct Decoded_D3D11_TEX1D_ARRAY_SRV;
struct Decoded_D3D11_TEX2D_SRV;
struct Decoded_D3D11_TEX2D_ARRAY_SRV;
struct Decoded_D3D11_TEX3D_SRV;
struct Decoded_D3D11_TEXCUBE_SRV;
struct Decoded_D3D11_TEXCUBE_ARRAY_SRV;
struct Decoded_D3D11_TEX2DMS_SRV;
struct Decoded_D3D11_TEX2DMS_ARRAY_SRV;
struct Decoded_D3D11_SHADER_RESOURCE_VIEW_DESC;
struct Decoded_D3D11_BUFFER_RTV;
struct Decoded_D3D11_TEX1D_RTV;
struct Decoded_D3D11_TEX1D_ARRAY_RTV;
struct Decoded_D3D11_TEX2D_RTV;
struct Decoded_D3D11_TEX2DMS_RTV;
struct Decoded_D3D11_TEX2D_ARRAY_RTV;
struct Decoded_D3D11_TEX2DMS_ARRAY_RTV;
struct Decoded_D3D11_TEX3D_RTV;
struct Decoded_D3D11_RENDER_TARGET_VIEW_DESC;
struct Decoded_D3D11_TEX1D_DSV;
struct Decoded_D3D11_TEX1D_ARRAY_DSV;
struct Decoded_D3D11_TEX2D_DSV;
struct Decoded_D3D11_TEX2D_ARRAY_DSV;
struct Decoded_D3D11_TEX2DMS_DSV;
struct Decoded_D3D11_TEX2DMS_ARRAY_DSV;
struct Decoded_D3D11_DEPTH_STENCIL_VIEW_DESC;
struct Decoded_D3D11_BUFFER_UAV;
struct Decoded_D3D11_TEX1D_UAV;
struct Decoded_D3D11_TEX1D_ARRAY_UAV;
struct Decoded_D3D11_TEX2D_UAV;
struct Decoded_D3D11_TEX2D_ARRAY_UAV;
struct Decoded_D3D11_TEX3D_UAV;
struct Decoded_D3D11_UNORDERED_ACCESS_VIEW_DESC;
struct Decoded_D3D11_SAMPLER_DESC;
struct Decoded_D3D11_QUERY_DESC;
struct Decoded_D3D11_QUERY_DATA_TIMESTAMP_DISJOINT;
struct Decoded_D3D11_QUERY_DATA_PIPELINE_STATISTICS;
struct Decoded_D3D11_QUERY_DATA_SO_STATISTICS;
struct Decoded_D3D11_COUNTER_DESC;
struct Decoded_D3D11_COUNTER_INFO;
struct Decoded_D3D11_CLASS_INSTANCE_DESC;
struct Decoded_D3D11_FEATURE_DATA_THREADING;
struct Decoded_D3D11_FEATURE_DATA_DOUBLES;
struct Decoded_D3D11_FEATURE_DATA_FORMAT_SUPPORT;
struct Decoded_D3D11_FEATURE_DATA_FORMAT_SUPPORT2;
struct Decoded_D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS;
struct Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS;
struct Decoded_D3D11_FEATURE_DATA_ARCHITECTURE_INFO;
struct Decoded_D3D11_FEATURE_DATA_D3D9_OPTIONS;
struct Decoded_D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT;
struct Decoded_D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT;
struct Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS1;
struct Decoded_D3D11_FEATURE_DATA_D3D9_SIMPLE_INSTANCING_SUPPORT;
struct Decoded_D3D11_FEATURE_DATA_MARKER_SUPPORT;
struct Decoded_D3D11_FEATURE_DATA_D3D9_OPTIONS1;
struct Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS2;
struct Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS3;
struct Decoded_D3D11_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT;
struct Decoded_D3D11_FEATURE_DATA_SHADER_CACHE;
struct Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS5;
struct Decoded_CD3D11_VIDEO_DEFAULT;
struct Decoded_D3D11_VIDEO_DECODER_DESC;
struct Decoded_D3D11_VIDEO_DECODER_CONFIG;
struct Decoded_D3D11_AES_CTR_IV;
struct Decoded_D3D11_ENCRYPTED_BLOCK_INFO;
struct Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC;
struct Decoded_D3D11_VIDEO_DECODER_EXTENSION;
struct Decoded_D3D11_VIDEO_PROCESSOR_CAPS;
struct Decoded_D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS;
struct Decoded_D3D11_VIDEO_CONTENT_PROTECTION_CAPS;
struct Decoded_D3D11_VIDEO_PROCESSOR_CUSTOM_RATE;
struct Decoded_D3D11_VIDEO_PROCESSOR_FILTER_RANGE;
struct Decoded_D3D11_VIDEO_PROCESSOR_CONTENT_DESC;
struct Decoded_D3D11_VIDEO_COLOR_RGBA;
struct Decoded_D3D11_VIDEO_COLOR_YCbCrA;
struct Decoded_D3D11_VIDEO_COLOR;
struct Decoded_D3D11_VIDEO_PROCESSOR_COLOR_SPACE;
struct Decoded_D3D11_VIDEO_PROCESSOR_STREAM;
struct Decoded_D3D11_OMAC;
struct Decoded_D3D11_AUTHENTICATED_QUERY_INPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_PROTECTION_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_CHANNEL_TYPE_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_DEVICE_HANDLE_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_INPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_INPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_INPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_INPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_COUNT_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_INPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_QUERY_CURRENT_ACCESSIBILITY_ENCRYPTION_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_INPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_OUTPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_INITIALIZE_INPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_PROTECTION_INPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION_INPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE_INPUT;
struct Decoded_D3D11_AUTHENTICATED_CONFIGURE_ACCESSIBLE_ENCRYPTION_INPUT;
struct Decoded_D3D11_TEX2D_VDOV;
struct Decoded_D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC;
struct Decoded_D3D11_TEX2D_VPIV;
struct Decoded_D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC;
struct Decoded_D3D11_TEX2D_VPOV;
struct Decoded_D3D11_TEX2D_ARRAY_VPOV;
struct Decoded_D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC;
struct Decoded_D3D11_RENDER_TARGET_BLEND_DESC1;
struct Decoded_D3D11_BLEND_DESC1;
struct Decoded_D3D11_RASTERIZER_DESC1;
struct Decoded_D3D11_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK;
struct Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC1;
struct Decoded_D3D11_VIDEO_DECODER_BEGIN_FRAME_CRYPTO_SESSION;
struct Decoded_D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT;
struct Decoded_D3D11_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA;
struct Decoded_D3D11_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA;
struct Decoded_D3D11_KEY_EXCHANGE_HW_PROTECTION_DATA;
struct Decoded_D3D11_VIDEO_SAMPLE_DESC;
struct Decoded_D3D11_TILED_RESOURCE_COORDINATE;
struct Decoded_D3D11_TILE_REGION_SIZE;
struct Decoded_D3D11_SUBRESOURCE_TILING;
struct Decoded_D3D11_TILE_SHAPE;
struct Decoded_D3D11_PACKED_MIP_DESC;
struct Decoded_D3D11_TEXTURE2D_DESC1;
struct Decoded_D3D11_TEXTURE3D_DESC1;
struct Decoded_D3D11_RASTERIZER_DESC2;
struct Decoded_D3D11_TEX2D_SRV1;
struct Decoded_D3D11_TEX2D_ARRAY_SRV1;
struct Decoded_D3D11_SHADER_RESOURCE_VIEW_DESC1;
struct Decoded_D3D11_TEX2D_RTV1;
struct Decoded_D3D11_TEX2D_ARRAY_RTV1;
struct Decoded_D3D11_RENDER_TARGET_VIEW_DESC1;
struct Decoded_D3D11_TEX2D_UAV1;
struct Decoded_D3D11_TEX2D_ARRAY_UAV1;
struct Decoded_D3D11_UNORDERED_ACCESS_VIEW_DESC1;
struct Decoded_D3D11_QUERY_DESC1;
struct Decoded_D3D11_FEATURE_DATA_VIDEO_DECODER_HISTOGRAM;
struct Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC2;
struct Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS4;
struct Decoded_D3D11_RESOURCE_FLAGS;
struct Decoded_GUID;
struct Decoded_tagRECT;
struct Decoded_tagPOINT;
struct Decoded_tagSIZE;
struct Decoded__SECURITY_ATTRIBUTES;
struct Decoded_LARGE_INTEGER;

/*
** This part is generated from dxgi.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_FRAME_STATISTICS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_MAPPED_RECT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_LUID* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_ADAPTER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTPUT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_SHARED_RESOURCE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_SURFACE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_SWAP_CHAIN_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_ADAPTER_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_DISPLAY_COLOR_SPACE* wrapper);

/*
** This part is generated from dxgi1_2.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTDUPL_MOVE_RECT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTDUPL_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTDUPL_POINTER_POSITION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTDUPL_POINTER_SHAPE_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTDUPL_FRAME_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_MODE_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_SWAP_CHAIN_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_SWAP_CHAIN_FULLSCREEN_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_PRESENT_PARAMETERS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_ADAPTER_DESC2* wrapper);

/*
** This part is generated from dxgi1_3.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_MATRIX_3X2_F* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_DECODE_SWAP_CHAIN_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_FRAME_STATISTICS_MEDIA* wrapper);

/*
** This part is generated from dxgi1_4.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_QUERY_VIDEO_MEMORY_INFO* wrapper);

/*
** This part is generated from dxgi1_5.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_HDR_METADATA_HDR10* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_HDR_METADATA_HDR10PLUS* wrapper);

/*
** This part is generated from dxgi1_6.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_ADAPTER_DESC3* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_OUTPUT_DESC1* wrapper);

/*
** This part is generated from dxgicommon.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_RATIONAL* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_SAMPLE_DESC* wrapper);

/*
** This part is generated from dxgitype.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_RGB* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3DCOLORVALUE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_GAMMA_CONTROL* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_GAMMA_CONTROL_CAPABILITIES* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_MODE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_JPEG_DC_HUFFMAN_TABLE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_JPEG_AC_HUFFMAN_TABLE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_DXGI_JPEG_QUANTIZATION_TABLE* wrapper);

/*
** This part is generated from d3d12.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_COMMAND_QUEUE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_INPUT_ELEMENT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SO_DECLARATION_ENTRY* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_VIEWPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BOX* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEPTH_STENCILOP_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEPTH_STENCIL_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEPTH_STENCIL_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEPTH_STENCILOP_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEPTH_STENCIL_DESC2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RENDER_TARGET_BLEND_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BLEND_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RASTERIZER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SHADER_BYTECODE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_STREAM_OUTPUT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_INPUT_LAYOUT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_CACHED_PIPELINE_STATE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GRAPHICS_PIPELINE_STATE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_COMPUTE_PIPELINE_STATE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RT_FORMAT_ARRAY* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_ROOT_SIGNATURE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_ARCHITECTURE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_ARCHITECTURE1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_FEATURE_LEVELS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_SHADER_MODEL* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_FORMAT_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_FORMAT_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_SHADER_CACHE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS3* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_EXISTING_HEAPS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_DISPLAYABLE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS4* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_SERIALIZATION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_CROSS_NODE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS5* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS6* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS7* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_QUERY_META_COMMAND* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS8* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS9* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS10* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS11* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS12* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS13* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS14* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_D3D12_OPTIONS15* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_ALLOCATION_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_ALLOCATION_INFO1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_HEAP_PROPERTIES* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_HEAP_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_MIP_REGION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEPTH_STENCIL_VALUE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RANGE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RANGE_UINT64* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SUBRESOURCE_RANGE_UINT64* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SUBRESOURCE_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TILED_RESOURCE_COORDINATE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TILE_REGION_SIZE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SUBRESOURCE_TILING* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TILE_SHAPE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_PACKED_MIP_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_TRANSITION_BARRIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_ALIASING_BARRIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RESOURCE_UAV_BARRIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SUBRESOURCE_FOOTPRINT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_PLACED_SUBRESOURCE_FOOTPRINT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SAMPLE_POSITION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_VIEW_INSTANCE_LOCATION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_VIEW_INSTANCING_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BUFFER_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX3D_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEXCUBE_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEXCUBE_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_CONSTANT_BUFFER_VIEW_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SAMPLER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BUFFER_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_ARRAY_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_ARRAY_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_ARRAY_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX3D_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BUFFER_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_ARRAY_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_ARRAY_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_ARRAY_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX3D_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX1D_ARRAY_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2D_ARRAY_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEX2DMS_ARRAY_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DESCRIPTOR_HEAP_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DESCRIPTOR_RANGE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_DESCRIPTOR_TABLE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_CONSTANTS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_DESCRIPTOR* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_STATIC_SAMPLER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_SIGNATURE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DESCRIPTOR_RANGE1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_DESCRIPTOR_TABLE1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_DESCRIPTOR1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_ROOT_SIGNATURE_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GPU_DESCRIPTOR_HANDLE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DISCARD_REGION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_QUERY_HEAP_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_QUERY_DATA_PIPELINE_STATISTICS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_QUERY_DATA_PIPELINE_STATISTICS1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_QUERY_DATA_SO_STATISTICS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_STREAM_OUTPUT_BUFFER_VIEW* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRAW_ARGUMENTS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRAW_INDEXED_ARGUMENTS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DISPATCH_ARGUMENTS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_VERTEX_BUFFER_VIEW* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_INDEX_BUFFER_VIEW* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_COMMAND_SIGNATURE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_WRITEBUFFERIMMEDIATE_PARAMETER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_META_COMMAND_PARAMETER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_META_COMMAND_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_STATE_OBJECT_CONFIG* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GLOBAL_ROOT_SIGNATURE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_LOCAL_ROOT_SIGNATURE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_NODE_MASK* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_EXPORT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DXIL_LIBRARY_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_EXISTING_COLLECTION_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_HIT_GROUP_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_SHADER_CONFIG* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_PIPELINE_CONFIG* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_PIPELINE_CONFIG1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GPU_VIRTUAL_ADDRESS_RANGE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_AABB* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_GEOMETRY_AABBS_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_COMPACTED_SIZE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TOOLS_VISUALIZATION_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_TOOLS_VISUALIZATION_HEADER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SERIALIZED_RAYTRACING_ACCELERATION_STRUCTURE_HEADER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_CURRENT_SIZE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_INSTANCE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_AUTO_BREADCRUMB_NODE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_BREADCRUMB_CONTEXT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_AUTO_BREADCRUMB_NODE1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_ALLOCATION_NODE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_ALLOCATION_NODE1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DRED_PAGE_FAULT_OUTPUT2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEVICE_REMOVED_EXTENDED_DATA3* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPE_COUNT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_TYPES* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_PROTECTED_RESOURCE_SESSION_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_SUBRESOURCE_PARAMETERS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RENDER_PASS_RENDER_TARGET_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_RENDER_PASS_DEPTH_STENCIL_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DISPATCH_RAYS_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SHADER_CACHE_SESSION_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BARRIER_SUBRESOURCE_RANGE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_GLOBAL_BARRIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_TEXTURE_BARRIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_BUFFER_BARRIER* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_SUBRESOURCE_DATA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_MEMCPY_DEST* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEVICE_CONFIGURATION_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DISPATCH_MESH_ARGUMENTS* wrapper);

/*
** This part is generated from d3dcommon.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D_SHADER_MACRO* wrapper);

/*
** This part is generated from d3d12sdklayers.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEBUG_DEVICE_GPU_BASED_VALIDATION_SETTINGS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEBUG_DEVICE_GPU_SLOWDOWN_PERFORMANCE_FACTOR* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_DEBUG_COMMAND_LIST_GPU_BASED_VALIDATION_SETTINGS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_MESSAGE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_INFO_QUEUE_FILTER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D12_INFO_QUEUE_FILTER* wrapper);

/*
** This part is generated from d3d11.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_INPUT_ELEMENT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_SO_DECLARATION_ENTRY* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIEWPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_DRAW_INSTANCED_INDIRECT_ARGS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_DRAW_INDEXED_INSTANCED_INDIRECT_ARGS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_BOX* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_DEPTH_STENCILOP_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_DEPTH_STENCIL_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_RENDER_TARGET_BLEND_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_BLEND_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_RASTERIZER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_MAPPED_SUBRESOURCE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_BUFFER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXTURE1D_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXTURE2D_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXTURE3D_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_BUFFEREX_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX3D_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXCUBE_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXCUBE_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2DMS_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2DMS_ARRAY_SRV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_ARRAY_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2DMS_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2DMS_ARRAY_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX3D_RTV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_ARRAY_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2DMS_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2DMS_ARRAY_DSV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_BUFFER_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX1D_ARRAY_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX3D_UAV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_SAMPLER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_QUERY_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_QUERY_DATA_TIMESTAMP_DISJOINT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_QUERY_DATA_PIPELINE_STATISTICS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_QUERY_DATA_SO_STATISTICS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_COUNTER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_COUNTER_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_CLASS_INSTANCE_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_THREADING* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_DOUBLES* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_FORMAT_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_FORMAT_SUPPORT2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_ARCHITECTURE_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D9_OPTIONS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D9_SIMPLE_INSTANCING_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_MARKER_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D9_OPTIONS1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS3* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_SHADER_CACHE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS5* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_CD3D11_VIDEO_DEFAULT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_CONFIG* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AES_CTR_IV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_ENCRYPTED_BLOCK_INFO* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_EXTENSION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_CAPS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_CONTENT_PROTECTION_CAPS* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_CUSTOM_RATE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_FILTER_RANGE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_CONTENT_DESC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_COLOR_RGBA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_COLOR_YCbCrA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_COLOR_SPACE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_STREAM* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_OMAC* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_PROTECTION_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_CHANNEL_TYPE_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_DEVICE_HANDLE_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_COUNT_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_QUERY_CURRENT_ACCESSIBILITY_ENCRYPTION_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_OUTPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_INITIALIZE_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_PROTECTION_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_AUTHENTICATED_CONFIGURE_ACCESSIBLE_ENCRYPTION_INPUT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_VDOV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_VPIV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_VPOV* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_VPOV* wrapper);

/*
** This part is generated from d3d11_1.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_RENDER_TARGET_BLEND_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_BLEND_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_RASTERIZER_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_BEGIN_FRAME_CRYPTO_SESSION* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_KEY_EXCHANGE_HW_PROTECTION_DATA* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_SAMPLE_DESC* wrapper);

/*
** This part is generated from d3d11_2.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TILED_RESOURCE_COORDINATE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TILE_REGION_SIZE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_SUBRESOURCE_TILING* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TILE_SHAPE* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_PACKED_MIP_DESC* wrapper);

/*
** This part is generated from d3d11_3.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXTURE2D_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEXTURE3D_DESC1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_RASTERIZER_DESC2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_SRV1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_SRV1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_RTV1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_RTV1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_UAV1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_TEX2D_ARRAY_UAV1* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_QUERY_DESC1* wrapper);

/*
** This part is generated from d3d11_4.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_VIDEO_DECODER_HISTOGRAM* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_VIDEO_DECODER_BUFFER_DESC2* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_FEATURE_DATA_D3D11_OPTIONS4* wrapper);

/*
** This part is generated from d3d11on12.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_D3D11_RESOURCE_FLAGS* wrapper);

/*
** This part is generated from guiddef.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_GUID* wrapper);

/*
** This part is generated from windef.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_tagRECT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_tagPOINT* wrapper);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_tagSIZE* wrapper);

/*
** This part is generated from minwinbase.h in Windows SDK: 10.0.20348.0
**
*/
size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded__SECURITY_ATTRIBUTES* wrapper);



GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
