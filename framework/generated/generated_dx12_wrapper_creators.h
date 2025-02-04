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
** This file is generated from dx12_wrapper_creators_header_generator.py.
**
*/

#ifndef  GFXRECON_GENERATED_DX12_WRAPPER_CREATORS_H
#define  GFXRECON_GENERATED_DX12_WRAPPER_CREATORS_H

#include "encode/custom_dx12_wrapper_creators.h"
#include "encode/dx12_object_wrapper_resources.h"
#include "util/defines.h"
#include <unordered_map>
#include <functional>

#include <dxgi.h>
#include <dxgi1_2.h>
#include <dxgi1_3.h>
#include <dxgi1_4.h>
#include <dxgi1_5.h>
#include <dxgi1_6.h>
#include <dxgicommon.h>
#include <dxgiformat.h>
#include <dxgitype.h>
#include <d3d12.h>
#include <d3dcommon.h>
#include <d3d12sdklayers.h>
#include <d3d11.h>
#include <d3d11_1.h>
#include <d3d11_2.h>
#include <d3d11_3.h>
#include <d3d11_4.h>
#include <d3d11on12.h>
#include <Unknwnbase.h>
#include <guiddef.h>
#include <windef.h>
#include <minwinbase.h>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

struct IidHash {
    size_t operator()(const IID &iid) const noexcept {
        const uint32_t *p = reinterpret_cast<const uint32_t *>(&iid);
        return p[0] ^ p[1] ^ p[2] ^ p[3];
    }
};

void WrapObject(REFIID riid, void** object, DxWrapperResources* resources);

void WrapObjectArray(REFIID riid, void** object, UINT num_object, DxWrapperResources* resources);

void WrapIDXGIKeyedMutex(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIDisplayControl(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIOutputDuplication(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGISurface(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIResource(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIDecodeSwapChain(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIFactoryMedia(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGISwapChainMedia(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGISwapChain(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIDevice(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIAdapter(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIOutput(REFIID riid, void** object, DxWrapperResources* resources);

void WrapIDXGIFactory(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12RootSignature(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12RootSignatureDeserializer(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12VersionedRootSignatureDeserializer(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12CommandAllocator(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Fence(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12PipelineState(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DescriptorHeap(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12QueryHeap(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12CommandSignature(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12CommandQueue(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12PipelineLibrary(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12LifetimeOwner(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12SwapChainAssistant(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12LifetimeTracker(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12StateObject(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12StateObjectProperties(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DeviceRemovedExtendedDataSettings(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DeviceRemovedExtendedData(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12ProtectedResourceSession(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Resource(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Heap(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12MetaCommand(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12ShaderCacheSession(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Device(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12VirtualizationGuestDevice(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Tools(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12SDKConfiguration(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DeviceFactory(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DeviceConfiguration(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12CommandList(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D10Blob(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3DDestructionNotifier(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Debug1(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Debug2(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12Debug(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DebugDevice1(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DebugDevice(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DebugCommandQueue(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DebugCommandList1(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12DebugCommandList(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12SharingContract(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D12InfoQueue(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11DepthStencilState(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Buffer(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Texture1D(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11DepthStencilView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VertexShader(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11HullShader(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11DomainShader(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11GeometryShader(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11PixelShader(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11ComputeShader(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11InputLayout(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11SamplerState(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Predicate(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Counter(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11ClassInstance(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11ClassLinkage(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11CommandList(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoDecoder(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoProcessor(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11AuthenticatedChannel(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11CryptoSession(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoDecoderOutputView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoProcessorInputView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoProcessorOutputView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11BlendState(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3DDeviceContextState(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoProcessorEnumerator(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3DUserDefinedAnnotation(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Texture2D(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Texture3D(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11RasterizerState(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11ShaderResourceView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11RenderTargetView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11UnorderedAccessView(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Query(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Fence(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11DeviceContext(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Device(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11Multithread(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoDevice(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11VideoContext(REFIID riid, void** object, DxWrapperResources* resources);

void WrapID3D11On12Device(REFIID riid, void** object, DxWrapperResources* resources);

const std::unordered_map<IID, std::function<void(REFIID, void**,DxWrapperResources*)>,IidHash> kFunctionTable
{
    { IID_IDXGIKeyedMutex, WrapIDXGIKeyedMutex },
    { IID_IDXGIDisplayControl, WrapIDXGIDisplayControl },
    { IID_IDXGIOutputDuplication, WrapIDXGIOutputDuplication },
    { IID_IDXGISurface, WrapIDXGISurface },
    { IID_IDXGISurface1, WrapIDXGISurface },
    { IID_IDXGISurface2, WrapIDXGISurface },
    { IID_IDXGIResource, WrapIDXGIResource },
    { IID_IDXGIResource1, WrapIDXGIResource },
    { IID_IDXGIDecodeSwapChain, WrapIDXGIDecodeSwapChain },
    { IID_IDXGIFactoryMedia, WrapIDXGIFactoryMedia },
    { IID_IDXGISwapChainMedia, WrapIDXGISwapChainMedia },
    { IID_IDXGISwapChain, WrapIDXGISwapChain },
    { IID_IDXGISwapChain1, WrapIDXGISwapChain },
    { IID_IDXGISwapChain2, WrapIDXGISwapChain },
    { IID_IDXGISwapChain3, WrapIDXGISwapChain },
    { IID_IDXGISwapChain4, WrapIDXGISwapChain },
    { IID_IDXGIDevice, WrapIDXGIDevice },
    { IID_IDXGIDevice1, WrapIDXGIDevice },
    { IID_IDXGIDevice2, WrapIDXGIDevice },
    { IID_IDXGIDevice3, WrapIDXGIDevice },
    { IID_IDXGIDevice4, WrapIDXGIDevice },
    { IID_IDXGIAdapter, WrapIDXGIAdapter },
    { IID_IDXGIAdapter1, WrapIDXGIAdapter },
    { IID_IDXGIAdapter2, WrapIDXGIAdapter },
    { IID_IDXGIAdapter3, WrapIDXGIAdapter },
    { IID_IDXGIAdapter4, WrapIDXGIAdapter },
    { IID_IDXGIOutput, WrapIDXGIOutput },
    { IID_IDXGIOutput1, WrapIDXGIOutput },
    { IID_IDXGIOutput2, WrapIDXGIOutput },
    { IID_IDXGIOutput3, WrapIDXGIOutput },
    { IID_IDXGIOutput4, WrapIDXGIOutput },
    { IID_IDXGIOutput5, WrapIDXGIOutput },
    { IID_IDXGIOutput6, WrapIDXGIOutput },
    { IID_IDXGIFactory, WrapIDXGIFactory },
    { IID_IDXGIFactory1, WrapIDXGIFactory },
    { IID_IDXGIFactory2, WrapIDXGIFactory },
    { IID_IDXGIFactory3, WrapIDXGIFactory },
    { IID_IDXGIFactory4, WrapIDXGIFactory },
    { IID_IDXGIFactory5, WrapIDXGIFactory },
    { IID_IDXGIFactory6, WrapIDXGIFactory },
    { IID_IDXGIFactory7, WrapIDXGIFactory },
    { IID_ID3D12RootSignature, WrapID3D12RootSignature },
    { IID_ID3D12RootSignatureDeserializer, WrapID3D12RootSignatureDeserializer },
    { IID_ID3D12VersionedRootSignatureDeserializer, WrapID3D12VersionedRootSignatureDeserializer },
    { IID_ID3D12CommandAllocator, WrapID3D12CommandAllocator },
    { IID_ID3D12Fence, WrapID3D12Fence },
    { IID_ID3D12Fence1, WrapID3D12Fence },
    { IID_ID3D12PipelineState, WrapID3D12PipelineState },
    { IID_ID3D12DescriptorHeap, WrapID3D12DescriptorHeap },
    { IID_ID3D12QueryHeap, WrapID3D12QueryHeap },
    { IID_ID3D12CommandSignature, WrapID3D12CommandSignature },
    { IID_ID3D12CommandQueue, WrapID3D12CommandQueue },
    { IID_ID3D12PipelineLibrary, WrapID3D12PipelineLibrary },
    { IID_ID3D12PipelineLibrary1, WrapID3D12PipelineLibrary },
    { IID_ID3D12LifetimeOwner, WrapID3D12LifetimeOwner },
    { IID_ID3D12SwapChainAssistant, WrapID3D12SwapChainAssistant },
    { IID_ID3D12LifetimeTracker, WrapID3D12LifetimeTracker },
    { IID_ID3D12StateObject, WrapID3D12StateObject },
    { IID_ID3D12StateObjectProperties, WrapID3D12StateObjectProperties },
    { IID_ID3D12DeviceRemovedExtendedDataSettings, WrapID3D12DeviceRemovedExtendedDataSettings },
    { IID_ID3D12DeviceRemovedExtendedDataSettings1, WrapID3D12DeviceRemovedExtendedDataSettings },
    { IID_ID3D12DeviceRemovedExtendedDataSettings2, WrapID3D12DeviceRemovedExtendedDataSettings },
    { IID_ID3D12DeviceRemovedExtendedData, WrapID3D12DeviceRemovedExtendedData },
    { IID_ID3D12DeviceRemovedExtendedData1, WrapID3D12DeviceRemovedExtendedData },
    { IID_ID3D12DeviceRemovedExtendedData2, WrapID3D12DeviceRemovedExtendedData },
    { IID_ID3D12ProtectedResourceSession, WrapID3D12ProtectedResourceSession },
    { IID_ID3D12ProtectedResourceSession1, WrapID3D12ProtectedResourceSession },
    { IID_ID3D12Resource, WrapID3D12Resource },
    { IID_ID3D12Resource1, WrapID3D12Resource },
    { IID_ID3D12Resource2, WrapID3D12Resource },
    { IID_ID3D12Heap, WrapID3D12Heap },
    { IID_ID3D12Heap1, WrapID3D12Heap },
    { IID_ID3D12MetaCommand, WrapID3D12MetaCommand },
    { IID_ID3D12ShaderCacheSession, WrapID3D12ShaderCacheSession },
    { IID_ID3D12Device, WrapID3D12Device },
    { IID_ID3D12Device1, WrapID3D12Device },
    { IID_ID3D12Device2, WrapID3D12Device },
    { IID_ID3D12Device3, WrapID3D12Device },
    { IID_ID3D12Device4, WrapID3D12Device },
    { IID_ID3D12Device5, WrapID3D12Device },
    { IID_ID3D12Device6, WrapID3D12Device },
    { IID_ID3D12Device7, WrapID3D12Device },
    { IID_ID3D12Device8, WrapID3D12Device },
    { IID_ID3D12Device9, WrapID3D12Device },
    { IID_ID3D12Device10, WrapID3D12Device },
    { IID_ID3D12Device11, WrapID3D12Device },
    { IID_ID3D12VirtualizationGuestDevice, WrapID3D12VirtualizationGuestDevice },
    { IID_ID3D12Tools, WrapID3D12Tools },
    { IID_ID3D12SDKConfiguration, WrapID3D12SDKConfiguration },
    { IID_ID3D12SDKConfiguration1, WrapID3D12SDKConfiguration },
    { IID_ID3D12DeviceFactory, WrapID3D12DeviceFactory },
    { IID_ID3D12DeviceConfiguration, WrapID3D12DeviceConfiguration },
    { IID_ID3D12CommandList, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList1, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList2, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList3, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList4, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList5, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList6, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList7, WrapID3D12CommandList },
    { IID_ID3D12GraphicsCommandList8, WrapID3D12CommandList },
    { IID_ID3D10Blob, WrapID3D10Blob },
    { IID_ID3DDestructionNotifier, WrapID3DDestructionNotifier },
    { IID_ID3D12Debug1, WrapID3D12Debug1 },
    { IID_ID3D12Debug2, WrapID3D12Debug2 },
    { IID_ID3D12Debug, WrapID3D12Debug },
    { IID_ID3D12Debug1, WrapID3D12Debug },
    { IID_ID3D12Debug2, WrapID3D12Debug },
    { IID_ID3D12Debug3, WrapID3D12Debug },
    { IID_ID3D12Debug4, WrapID3D12Debug },
    { IID_ID3D12Debug5, WrapID3D12Debug },
    { IID_ID3D12Debug6, WrapID3D12Debug },
    { IID_ID3D12DebugDevice1, WrapID3D12DebugDevice1 },
    { IID_ID3D12DebugDevice, WrapID3D12DebugDevice },
    { IID_ID3D12DebugDevice1, WrapID3D12DebugDevice },
    { IID_ID3D12DebugDevice2, WrapID3D12DebugDevice },
    { IID_ID3D12DebugCommandQueue, WrapID3D12DebugCommandQueue },
    { IID_ID3D12DebugCommandQueue1, WrapID3D12DebugCommandQueue },
    { IID_ID3D12DebugCommandList1, WrapID3D12DebugCommandList1 },
    { IID_ID3D12DebugCommandList, WrapID3D12DebugCommandList },
    { IID_ID3D12DebugCommandList1, WrapID3D12DebugCommandList },
    { IID_ID3D12DebugCommandList2, WrapID3D12DebugCommandList },
    { IID_ID3D12DebugCommandList3, WrapID3D12DebugCommandList },
    { IID_ID3D12SharingContract, WrapID3D12SharingContract },
    { IID_ID3D12InfoQueue, WrapID3D12InfoQueue },
    { IID_ID3D12InfoQueue1, WrapID3D12InfoQueue },
    { IID_ID3D11DepthStencilState, WrapID3D11DepthStencilState },
    { IID_ID3D11Buffer, WrapID3D11Buffer },
    { IID_ID3D11Texture1D, WrapID3D11Texture1D },
    { IID_ID3D11DepthStencilView, WrapID3D11DepthStencilView },
    { IID_ID3D11VertexShader, WrapID3D11VertexShader },
    { IID_ID3D11HullShader, WrapID3D11HullShader },
    { IID_ID3D11DomainShader, WrapID3D11DomainShader },
    { IID_ID3D11GeometryShader, WrapID3D11GeometryShader },
    { IID_ID3D11PixelShader, WrapID3D11PixelShader },
    { IID_ID3D11ComputeShader, WrapID3D11ComputeShader },
    { IID_ID3D11InputLayout, WrapID3D11InputLayout },
    { IID_ID3D11SamplerState, WrapID3D11SamplerState },
    { IID_ID3D11Predicate, WrapID3D11Predicate },
    { IID_ID3D11Counter, WrapID3D11Counter },
    { IID_ID3D11ClassInstance, WrapID3D11ClassInstance },
    { IID_ID3D11ClassLinkage, WrapID3D11ClassLinkage },
    { IID_ID3D11CommandList, WrapID3D11CommandList },
    { IID_ID3D11VideoDecoder, WrapID3D11VideoDecoder },
    { IID_ID3D11VideoProcessor, WrapID3D11VideoProcessor },
    { IID_ID3D11AuthenticatedChannel, WrapID3D11AuthenticatedChannel },
    { IID_ID3D11CryptoSession, WrapID3D11CryptoSession },
    { IID_ID3D11VideoDecoderOutputView, WrapID3D11VideoDecoderOutputView },
    { IID_ID3D11VideoProcessorInputView, WrapID3D11VideoProcessorInputView },
    { IID_ID3D11VideoProcessorOutputView, WrapID3D11VideoProcessorOutputView },
    { IID_ID3D11BlendState, WrapID3D11BlendState },
    { IID_ID3D11BlendState1, WrapID3D11BlendState },
    { IID_ID3DDeviceContextState, WrapID3DDeviceContextState },
    { IID_ID3D11VideoProcessorEnumerator, WrapID3D11VideoProcessorEnumerator },
    { IID_ID3D11VideoProcessorEnumerator1, WrapID3D11VideoProcessorEnumerator },
    { IID_ID3DUserDefinedAnnotation, WrapID3DUserDefinedAnnotation },
    { IID_ID3D11Texture2D, WrapID3D11Texture2D },
    { IID_ID3D11Texture2D1, WrapID3D11Texture2D },
    { IID_ID3D11Texture3D, WrapID3D11Texture3D },
    { IID_ID3D11Texture3D1, WrapID3D11Texture3D },
    { IID_ID3D11RasterizerState, WrapID3D11RasterizerState },
    { IID_ID3D11RasterizerState1, WrapID3D11RasterizerState },
    { IID_ID3D11RasterizerState2, WrapID3D11RasterizerState },
    { IID_ID3D11ShaderResourceView, WrapID3D11ShaderResourceView },
    { IID_ID3D11ShaderResourceView1, WrapID3D11ShaderResourceView },
    { IID_ID3D11RenderTargetView, WrapID3D11RenderTargetView },
    { IID_ID3D11RenderTargetView1, WrapID3D11RenderTargetView },
    { IID_ID3D11UnorderedAccessView, WrapID3D11UnorderedAccessView },
    { IID_ID3D11UnorderedAccessView1, WrapID3D11UnorderedAccessView },
    { IID_ID3D11Query, WrapID3D11Query },
    { IID_ID3D11Query1, WrapID3D11Query },
    { IID_ID3D11Fence, WrapID3D11Fence },
    { IID_ID3D11DeviceContext, WrapID3D11DeviceContext },
    { IID_ID3D11DeviceContext1, WrapID3D11DeviceContext },
    { IID_ID3D11DeviceContext2, WrapID3D11DeviceContext },
    { IID_ID3D11DeviceContext3, WrapID3D11DeviceContext },
    { IID_ID3D11DeviceContext4, WrapID3D11DeviceContext },
    { IID_ID3D11Device, WrapID3D11Device },
    { IID_ID3D11Device1, WrapID3D11Device },
    { IID_ID3D11Device2, WrapID3D11Device },
    { IID_ID3D11Device3, WrapID3D11Device },
    { IID_ID3D11Device4, WrapID3D11Device },
    { IID_ID3D11Device5, WrapID3D11Device },
    { IID_ID3D11Multithread, WrapID3D11Multithread },
    { IID_ID3D11VideoDevice, WrapID3D11VideoDevice },
    { IID_ID3D11VideoDevice1, WrapID3D11VideoDevice },
    { IID_ID3D11VideoDevice2, WrapID3D11VideoDevice },
    { IID_ID3D11VideoContext, WrapID3D11VideoContext },
    { IID_ID3D11VideoContext1, WrapID3D11VideoContext },
    { IID_ID3D11VideoContext2, WrapID3D11VideoContext },
    { IID_ID3D11VideoContext3, WrapID3D11VideoContext },
    { IID_ID3D11On12Device, WrapID3D11On12Device },
    { IID_ID3D11On12Device1, WrapID3D11On12Device },
    { IID_ID3D11On12Device2, WrapID3D11On12Device },
    { IID_ID3D11Resource, WrapID3D11Resource },
};

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
