#pragma once
#include "BulkForward.h"
#include "UGeometryCacheComponent.h"

struct UGeometryCacheUsdComponent : public UGeometryCacheComponent
{
public:
	UGeometryCacheUsdComponent() = delete;
	~UGeometryCacheUsdComponent() = delete;
	UGeometryCacheUsdComponent(const UGeometryCacheUsdComponent&) = delete;
	UGeometryCacheUsdComponent& operator=(const UGeometryCacheUsdComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGeometryCacheUsdComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGeometryCacheUsdComponent"); }

	void OnRegister() { NativeCall<void>(this, "UGeometryCacheUsdComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UGeometryCacheUsdComponent.OnUnregister()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGeometryCacheUsdComponent.CreateSceneProxy()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UGeometryCacheUsdComponent.PostDuplicate(bool)", bDuplicateForPIE); }
};
