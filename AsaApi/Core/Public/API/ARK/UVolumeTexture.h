#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture.h"

class UVolumeTexture : public UTexture
{
public:
	UVolumeTexture() = delete;
	~UVolumeTexture() = delete;
	UVolumeTexture(const UVolumeTexture&) = delete;
	UVolumeTexture& operator=(const UVolumeTexture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVolumeTexture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVolumeTexture"); }
	FTexturePlatformData*& PrivatePlatformDataField() { return *GetNativePointerField<FTexturePlatformData**>(this, "UVolumeTexture.PrivatePlatformData"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UVolumeTexture.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UVolumeTexture.GetDesc()", result); }
	FTexturePlatformData* GetPlatformData() { return NativeCall<FTexturePlatformData*>(this, "UVolumeTexture.GetPlatformData()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UVolumeTexture.Serialize(FArchive&)", Ar); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UVolumeTexture.GetSurfaceDepth()"); }
	int GetSizeX() { return NativeCall<int>(this, "UVolumeTexture.GetSizeX()"); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UVolumeTexture.GetSurfaceArraySize()"); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UVolumeTexture.StreamOut(int)", NewMipCount); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UVolumeTexture.GetSurfaceWidth()"); }
	FTexturePlatformData** GetRunningPlatformData() { return NativeCall<FTexturePlatformData**>(this, "UVolumeTexture.GetRunningPlatformData()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UVolumeTexture.GetSurfaceHeight()"); }
	int GetSizeZ() { return NativeCall<int>(this, "UVolumeTexture.GetSizeZ()"); }
	int GetSizeY() { return NativeCall<int>(this, "UVolumeTexture.GetSizeY()"); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UVolumeTexture.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	unsigned int CalcTextureMemorySize(int MipCount) { return NativeCall<unsigned int, int>(this, "UVolumeTexture.CalcTextureMemorySize(int)", MipCount); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UVolumeTexture.CalcCumulativeLODSize(int)", NumLODs); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UVolumeTexture.CreateResource()"); }
	void PostLoad() { NativeCall<void>(this, "UVolumeTexture.PostLoad()"); }
};
