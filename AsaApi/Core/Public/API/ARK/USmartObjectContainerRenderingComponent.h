#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{
public:
	USmartObjectContainerRenderingComponent() = delete;
	~USmartObjectContainerRenderingComponent() = delete;
	USmartObjectContainerRenderingComponent(const USmartObjectContainerRenderingComponent&) = delete;
	USmartObjectContainerRenderingComponent& operator=(const USmartObjectContainerRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USmartObjectContainerRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USmartObjectContainerRenderingComponent"); }

	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "USmartObjectContainerRenderingComponent.ShouldRecreateProxyOnUpdateTransform()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "USmartObjectContainerRenderingComponent.CreateSceneProxy()"); }
};
