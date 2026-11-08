#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include <API/UE/Math/Box2D.h>
#include "UTexture.h"

class UMaterialCacheVirtualTexture : public UTexture
{
public:
	UMaterialCacheVirtualTexture() = delete;
	~UMaterialCacheVirtualTexture() = delete;
	UMaterialCacheVirtualTexture(const UMaterialCacheVirtualTexture&) = delete;
	UMaterialCacheVirtualTexture& operator=(const UMaterialCacheVirtualTexture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialCacheVirtualTexture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialCacheVirtualTexture"); }
	TWeakObjectPtr<USceneComponent, FWeakObjectPtr>& OwningComponentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent, FWeakObjectPtr>*>(this, "UMaterialCacheVirtualTexture.OwningComponent"); }
	bool& bSharedShadingField() { return *GetNativePointerField<bool*>(this, "UMaterialCacheVirtualTexture.bSharedShading"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UMaterialCacheVirtualTexture.CreateResource()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UMaterialCacheVirtualTexture.GetSurfaceWidth()"); }
	void GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings& OutSettings) { NativeCall<void, FVirtualTextureBuildSettings&>(this, "UMaterialCacheVirtualTexture.GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings&)", OutSettings); }
	void Unregister() { NativeCall<void>(this, "UMaterialCacheVirtualTexture.Unregister()"); }
	FMaterialCacheVirtualTextureRenderProxy* CreateRenderProxy(const UE::Math::TBox2<float>& UVRegion, unsigned int UVCoordinateIndex) { return NativeCall<FMaterialCacheVirtualTextureRenderProxy*, const UE::Math::TBox2<float>&, unsigned int>(this, "UMaterialCacheVirtualTexture.CreateRenderProxy(UE::Math::TBox2<float>&,unsignedint)", UVRegion, UVCoordinateIndex); }
	void RecreateAllocation() { NativeCall<void>(this, "UMaterialCacheVirtualTexture.RecreateAllocation()"); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UMaterialCacheVirtualTexture.GetSurfaceArraySize()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UMaterialCacheVirtualTexture.GetSurfaceDepth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UMaterialCacheVirtualTexture.GetSurfaceHeight()"); }
};
