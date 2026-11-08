#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UObject.h"

class USparseVolumeTexture : public UObject
{
public:
	USparseVolumeTexture() = delete;
	~USparseVolumeTexture() = delete;
	USparseVolumeTexture(const USparseVolumeTexture&) = delete;
	USparseVolumeTexture& operator=(const USparseVolumeTexture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USparseVolumeTexture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USparseVolumeTexture"); }
	int GetSizeZ() { return NativeCall<int>(this, "USparseVolumeTexture.GetSizeZ()"); }
	float GetOptimalStreamingMipLevel(const UE::Math::TBoxSphereBounds<double, double>& Bounds, float MipBias) { return NativeCall<float, const UE::Math::TBoxSphereBounds<double, double>&, float>(this, "USparseVolumeTexture.GetOptimalStreamingMipLevel(UE::Math::TBoxSphereBounds<double,double>&,float)", Bounds, MipBias); }
	int GetNumMipLevels() { return NativeCall<int>(this, "USparseVolumeTexture.GetNumMipLevels()"); }
	UE::Math::TTransform<double>* GetFrameTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "USparseVolumeTexture.GetFrameTransform()", result); }
	int GetSizeY() { return NativeCall<int>(this, "USparseVolumeTexture.GetSizeY()"); }
	int GetSizeX() { return NativeCall<int>(this, "USparseVolumeTexture.GetSizeX()"); }
	int GetNumFrames() { return NativeCall<int>(this, "USparseVolumeTexture.GetNumFrames()"); }
};
