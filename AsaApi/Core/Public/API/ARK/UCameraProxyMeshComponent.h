#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UCameraProxyMeshComponent : public UStaticMeshComponent
{
public:
	UCameraProxyMeshComponent() = delete;
	~UCameraProxyMeshComponent() = delete;
	UCameraProxyMeshComponent(const UCameraProxyMeshComponent&) = delete;
	UCameraProxyMeshComponent& operator=(const UCameraProxyMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraProxyMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraProxyMeshComponent"); }

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UCameraProxyMeshComponent.CreateSceneProxy()"); }
};
