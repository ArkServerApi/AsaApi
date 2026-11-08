#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTextureRenderTarget.h"

class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	UTextureRenderTargetCube() = delete;
	~UTextureRenderTargetCube() = delete;
	UTextureRenderTargetCube(const UTextureRenderTargetCube&) = delete;
	UTextureRenderTargetCube& operator=(const UTextureRenderTargetCube&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureRenderTargetCube"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureRenderTargetCube"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTextureRenderTargetCube.SizeX"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTextureRenderTargetCube.ClearColor"); }
	int& NumMipsField() { return *GetNativePointerField<int*>(this, "UTextureRenderTargetCube.NumMips"); }
	BitFieldValue<bool, unsigned char> bHDR() { return { this, "UTextureRenderTargetCube.bHDR"}; }
	BitFieldValue<bool, unsigned char> bSupportsUAV() { return { this, "UTextureRenderTargetCube.bSupportsUAV"}; }
	BitFieldValue<bool, unsigned char> bForceLinearGamma() { return { this, "UTextureRenderTargetCube.bForceLinearGamma"}; }
	BitFieldValue<bool, unsigned char> bAutoGenerateMips() { return { this, "UTextureRenderTargetCube.bAutoGenerateMips"}; }
	int GetNumMips() { return NativeCall<int>(this, "UTextureRenderTargetCube.GetNumMips()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTextureRenderTargetCube.GetDesc()", result); }
	bool IsSRGB() { return NativeCall<bool>(this, "UTextureRenderTargetCube.IsSRGB()"); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTextureRenderTargetCube.GetSurfaceArraySize()"); }
	void PostLoad() { NativeCall<void>(this, "UTextureRenderTargetCube.PostLoad()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTextureRenderTargetCube.GetSurfaceDepth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureRenderTargetCube.GetSurfaceHeight()"); }
	float GetDisplayGamma() { return NativeCall<float>(this, "UTextureRenderTargetCube.GetDisplayGamma()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTextureRenderTargetCube.CreateResource()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTextureRenderTargetCube.GetSurfaceWidth()"); }
	void UpdateResourceImmediate(bool bClearRenderTarget) { NativeCall<void, bool>(this, "UTextureRenderTargetCube.UpdateResourceImmediate(bool)", bClearRenderTarget); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UTextureRenderTargetCube.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
};
