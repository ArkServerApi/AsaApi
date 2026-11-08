#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class URuntimeVirtualTexture : public UObject
{
public:
	URuntimeVirtualTexture() = delete;
	~URuntimeVirtualTexture() = delete;
	URuntimeVirtualTexture(const URuntimeVirtualTexture&) = delete;
	URuntimeVirtualTexture& operator=(const URuntimeVirtualTexture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URuntimeVirtualTexture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URuntimeVirtualTexture"); }
	int& TileCountField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTexture.TileCount"); }
	int& TileSizeField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTexture.TileSize"); }
	int& TileBorderSizeField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTexture.TileBorderSize"); }
	bool& bCompressTexturesField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bCompressTextures"); }
	bool& bUseLowQualityCompressionField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bUseLowQualityCompression"); }
	bool& bUseCustomPriorityField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bUseCustomPriority"); }
	bool& bClearTexturesField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bClearTextures"); }
	bool& bSinglePhysicalSpaceField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bSinglePhysicalSpace"); }
	bool& bPrivateSpaceField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bPrivateSpace"); }
	bool& bAdaptiveField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bAdaptive"); }
	bool& bContinuousUpdateField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTexture.bContinuousUpdate"); }
	int& RemoveLowMipsField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTexture.RemoveLowMips"); }
	int& TileCount_LowQualityField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTexture.TileCount_LowQuality"); }
	int& Size_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTexture.Size_DEPRECATED"); }
	FRuntimeVirtualTextureRenderResource*& ResourceField() { return *GetNativePointerField<FRuntimeVirtualTextureRenderResource**>(this, "URuntimeVirtualTexture.Resource"); }
	static int GetMaxTileCountLog2(bool InAdaptive) { return NativeCall<int, bool>(nullptr, "URuntimeVirtualTexture.GetMaxTileCountLog2(bool)", InAdaptive); }
	void PostLoad() { NativeCall<void>(this, "URuntimeVirtualTexture.PostLoad()"); }
	IAllocatedVirtualTexture* GetAllocatedVirtualTexture() { return NativeCall<IAllocatedVirtualTexture*>(this, "URuntimeVirtualTexture.GetAllocatedVirtualTexture()"); }
	bool IsLayerSRGB(int LayerIndex) { return NativeCall<bool, int>(this, "URuntimeVirtualTexture.IsLayerSRGB(int)", LayerIndex); }
	bool IsLayerYCoCg(int LayerIndex) { return NativeCall<bool, int>(this, "URuntimeVirtualTexture.IsLayerYCoCg(int)", LayerIndex); }
};
