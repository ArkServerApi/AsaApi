#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture.h"

class UTextureCube : public UTexture
{
public:
	UTextureCube() = delete;
	~UTextureCube() = delete;
	UTextureCube(const UTextureCube&) = delete;
	UTextureCube& operator=(const UTextureCube&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureCube"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureCube"); }
	FTexturePlatformData*& PrivatePlatformDataField() { return *GetNativePointerField<FTexturePlatformData**>(this, "UTextureCube.PrivatePlatformData"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTextureCube.GetSurfaceDepth()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UTextureCube.Serialize(FArchive&)", Ar); }
	int GetNumMips() { return NativeCall<int>(this, "UTextureCube.GetNumMips()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTextureCube.CreateResource()"); }
	void PostLoad() { NativeCall<void>(this, "UTextureCube.PostLoad()"); }
	bool NeedsLoadForTargetPlatform(const ITargetPlatform* TargetPlatform) { return NativeCall<bool, const ITargetPlatform*>(this, "UTextureCube.NeedsLoadForTargetPlatform(ITargetPlatform*)", TargetPlatform); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UTextureCube.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	FTexturePlatformData** GetRunningPlatformData() { return NativeCall<FTexturePlatformData**>(this, "UTextureCube.GetRunningPlatformData()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTextureCube.GetSurfaceWidth()"); }
	unsigned int CalcTextureMemorySize(int MipCount) { return NativeCall<unsigned int, int>(this, "UTextureCube.CalcTextureMemorySize(int)", MipCount); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTextureCube.GetDesc()", result); }
	int GetSizeX() { return NativeCall<int>(this, "UTextureCube.GetSizeX()"); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTextureCube.GetSurfaceArraySize()"); }
	int GetSizeY() { return NativeCall<int>(this, "UTextureCube.GetSizeY()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureCube.GetSurfaceHeight()"); }
};
