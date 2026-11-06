#pragma once
#include "BulkForward.h"
#include "UWaterBodyComponent.h"

struct UWaterBodyCustomComponent : public UWaterBodyComponent
{
public:
	UWaterBodyCustomComponent() = delete;
	~UWaterBodyCustomComponent() = delete;
	UWaterBodyCustomComponent(const UWaterBodyCustomComponent&) = delete;
	UWaterBodyCustomComponent& operator=(const UWaterBodyCustomComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterBodyCustomComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterBodyCustomComponent"); }

	void BeginUpdateWaterBody() { NativeCall<void>(this, "UWaterBodyCustomComponent.BeginUpdateWaterBody()"); }
	void OnUpdateBody(bool bWithExclusionVolumes) { NativeCall<void, bool>(this, "UWaterBodyCustomComponent.OnUpdateBody(bool)", bWithExclusionVolumes); }
	bool CanEverAffectWaterMesh() { return NativeCall<bool>(this, "UWaterBodyCustomComponent.CanEverAffectWaterMesh()"); }
	void CreateOrUpdateWaterMID() { NativeCall<void>(this, "UWaterBodyCustomComponent.CreateOrUpdateWaterMID()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetStandardRenderableComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UWaterBodyCustomComponent.GetStandardRenderableComponents()", result); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetCollisionComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result, bool bInOnlyEnabledComponents) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "UWaterBodyCustomComponent.GetCollisionComponents(bool)", result, bInOnlyEnabledComponents); }
	void Reset() { NativeCall<void>(this, "UWaterBodyCustomComponent.Reset()"); }
	bool CanEverAffectWaterInfo() { return NativeCall<bool>(this, "UWaterBodyCustomComponent.CanEverAffectWaterInfo()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UWaterBodyCustomComponent.CreateSceneProxy()"); }
};
