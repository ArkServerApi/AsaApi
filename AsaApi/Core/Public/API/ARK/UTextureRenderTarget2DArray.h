#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTextureRenderTarget.h"

class UTextureRenderTarget2DArray : public UTextureRenderTarget
{
public:
	UTextureRenderTarget2DArray() = delete;
	~UTextureRenderTarget2DArray() = delete;
	UTextureRenderTarget2DArray(const UTextureRenderTarget2DArray&) = delete;
	UTextureRenderTarget2DArray& operator=(const UTextureRenderTarget2DArray&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureRenderTarget2DArray"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureRenderTarget2DArray"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2DArray.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2DArray.SizeY"); }
	int& SlicesField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2DArray.Slices"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTextureRenderTarget2DArray.ClearColor"); }
	BitFieldValue<bool, unsigned char> bHDR() { return { this, "UTextureRenderTarget2DArray.bHDR"}; }
	BitFieldValue<bool, unsigned char> bSupportsUAV() { return { this, "UTextureRenderTarget2DArray.bSupportsUAV"}; }
	BitFieldValue<bool, unsigned char> bForceLinearGamma() { return { this, "UTextureRenderTarget2DArray.bForceLinearGamma"}; }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTextureRenderTarget2DArray.CreateResource()"); }
	int GetNumMips() { return NativeCall<int>(this, "UTextureRenderTarget2DArray.GetNumMips()"); }
	void PostLoad() { NativeCall<void>(this, "UTextureRenderTarget2DArray.PostLoad()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTextureRenderTarget2DArray.GetSurfaceDepth()"); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTextureRenderTarget2DArray.GetSurfaceArraySize()"); }
	void InitAutoFormat(unsigned int InSizeX, unsigned int InSizeY, unsigned int InSlices) { NativeCall<void, unsigned int, unsigned int, unsigned int>(this, "UTextureRenderTarget2DArray.InitAutoFormat(unsignedint,unsignedint,unsignedint)", InSizeX, InSizeY, InSlices); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UTextureRenderTarget2DArray.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTextureRenderTarget2DArray.GetSurfaceWidth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureRenderTarget2DArray.GetSurfaceHeight()"); }
	bool IsSRGB() { return NativeCall<bool>(this, "UTextureRenderTarget2DArray.IsSRGB()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTextureRenderTarget2DArray.GetDesc()", result); }
	void UpdateResourceImmediate(bool bClearRenderTarget) { NativeCall<void, bool>(this, "UTextureRenderTarget2DArray.UpdateResourceImmediate(bool)", bClearRenderTarget); }
	float GetDisplayGamma() { return NativeCall<float>(this, "UTextureRenderTarget2DArray.GetDisplayGamma()"); }
};
