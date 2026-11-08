#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture.h"

class UTexture2DArray : public UTexture
{
public:
	UTexture2DArray() = delete;
	~UTexture2DArray() = delete;
	UTexture2DArray(const UTexture2DArray&) = delete;
	UTexture2DArray& operator=(const UTexture2DArray&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTexture2DArray"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTexture2DArray"); }
	FTexturePlatformData*& PrivatePlatformDataField() { return *GetNativePointerField<FTexturePlatformData**>(this, "UTexture2DArray.PrivatePlatformData"); }
	unsigned int CalcTextureMemorySize(int MipCount) { return NativeCall<unsigned int, int>(this, "UTexture2DArray.CalcTextureMemorySize(int)", MipCount); }
	int GetArraySize() { return NativeCall<int>(this, "UTexture2DArray.GetArraySize()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTexture2DArray.CreateResource()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTexture2DArray.GetDesc()", result); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UTexture2DArray.CalcCumulativeLODSize(int)", NumLODs); }
	int GetSizeY() { return NativeCall<int>(this, "UTexture2DArray.GetSizeY()"); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTexture2DArray.GetSurfaceArraySize()"); }
	int GetSizeX() { return NativeCall<int>(this, "UTexture2DArray.GetSizeX()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UTexture2DArray.Serialize(FArchive&)", Ar); }
	void SetPlatformData(FTexturePlatformData* InPlatformData) { NativeCall<void, FTexturePlatformData*>(this, "UTexture2DArray.SetPlatformData(FTexturePlatformData*)", InPlatformData); }
	void PostLoad() { NativeCall<void>(this, "UTexture2DArray.PostLoad()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTexture2DArray.GetSurfaceDepth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture2DArray.GetSurfaceHeight()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture2DArray.GetSurfaceWidth()"); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UTexture2DArray.StreamOut(int)", NewMipCount); }
	FTexturePlatformData** GetRunningPlatformData() { return NativeCall<FTexturePlatformData**>(this, "UTexture2DArray.GetRunningPlatformData()"); }
	FTexturePlatformData* GetPlatformData() { return NativeCall<FTexturePlatformData*>(this, "UTexture2DArray.GetPlatformData()"); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UTexture2DArray.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UTexture2DArray.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
};
