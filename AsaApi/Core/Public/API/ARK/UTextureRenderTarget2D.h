#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTextureRenderTarget.h"

class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	UTextureRenderTarget2D() = delete;
	~UTextureRenderTarget2D() = delete;
	UTextureRenderTarget2D(const UTextureRenderTarget2D&) = delete;
	UTextureRenderTarget2D& operator=(const UTextureRenderTarget2D&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureRenderTarget2D"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureRenderTarget2D"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2D.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2D.SizeY"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTextureRenderTarget2D.ClearColor"); }
	int& NumMipsField() { return *GetNativePointerField<int*>(this, "UTextureRenderTarget2D.NumMips"); }
	BitFieldValue<bool, unsigned char> bForceLinearGamma() { return { this, "UTextureRenderTarget2D.bForceLinearGamma"}; }
	BitFieldValue<bool, unsigned char> bNoFastClear() { return { this, "UTextureRenderTarget2D.bNoFastClear"}; }
	BitFieldValue<bool, unsigned char> bHDR_DEPRECATED() { return { this, "UTextureRenderTarget2D.bHDR_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bGPUSharedFlag() { return { this, "UTextureRenderTarget2D.bGPUSharedFlag"}; }
	BitFieldValue<bool, unsigned char> bSupportsUAV() { return { this, "UTextureRenderTarget2D.bSupportsUAV"}; }
	BitFieldValue<bool, unsigned char> bAutoGenerateMips() { return { this, "UTextureRenderTarget2D.bAutoGenerateMips"}; }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UTextureRenderTarget2D.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void InitAutoFormat(unsigned int InSizeX, unsigned int InSizeY) { NativeCall<void, unsigned int, unsigned int>(this, "UTextureRenderTarget2D.InitAutoFormat(unsignedint,unsignedint)", InSizeX, InSizeY); }
	int GetNumMips() { return NativeCall<int>(this, "UTextureRenderTarget2D.GetNumMips()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UTextureRenderTarget2D.Serialize(FArchive&)", Ar); }
	bool IsSRGB() { return NativeCall<bool>(this, "UTextureRenderTarget2D.IsSRGB()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTextureRenderTarget2D.GetDesc()", result); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTextureRenderTarget2D.GetSurfaceArraySize()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTextureRenderTarget2D.GetSurfaceDepth()"); }
	void UpdateResourceImmediate(bool bClearRenderTarget) { NativeCall<void, bool>(this, "UTextureRenderTarget2D.UpdateResourceImmediate(bool)", bClearRenderTarget); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTextureRenderTarget2D.GetSurfaceWidth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureRenderTarget2D.GetSurfaceHeight()"); }
	void ResizeTarget(unsigned int InSizeX, unsigned int InSizeY) { NativeCall<void, unsigned int, unsigned int>(this, "UTextureRenderTarget2D.ResizeTarget(unsignedint,unsignedint)", InSizeX, InSizeY); }
	float GetDisplayGamma() { return NativeCall<float>(this, "UTextureRenderTarget2D.GetDisplayGamma()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTextureRenderTarget2D.CreateResource()"); }
	void PostLoad() { NativeCall<void>(this, "UTextureRenderTarget2D.PostLoad()"); }
};
