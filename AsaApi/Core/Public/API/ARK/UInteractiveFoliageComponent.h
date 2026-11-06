#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	UInteractiveFoliageComponent() = delete;
	~UInteractiveFoliageComponent() = delete;
	UInteractiveFoliageComponent(const UInteractiveFoliageComponent&) = delete;
	UInteractiveFoliageComponent& operator=(const UInteractiveFoliageComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInteractiveFoliageComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInteractiveFoliageComponent"); }

	FInteractiveFoliageSceneProxy*& FoliageSceneProxyField() { return *GetNativePointerField<FInteractiveFoliageSceneProxy**>(this, "UInteractiveFoliageComponent.FoliageSceneProxy"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UInteractiveFoliageComponent.DestroyRenderState_Concurrent()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UInteractiveFoliageComponent.CreateSceneProxy()"); }
};
