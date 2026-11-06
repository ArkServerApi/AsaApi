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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UCameraProxyMeshComponent.CreateSceneProxy()"); }
};
