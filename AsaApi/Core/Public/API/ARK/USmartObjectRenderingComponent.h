#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:
	USmartObjectRenderingComponent() = delete;
	~USmartObjectRenderingComponent() = delete;
	USmartObjectRenderingComponent(const USmartObjectRenderingComponent&) = delete;
	USmartObjectRenderingComponent& operator=(const USmartObjectRenderingComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "USmartObjectRenderingComponent.CreateSceneProxy()"); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "USmartObjectRenderingComponent.ShouldRecreateProxyOnUpdateTransform()"); }
};
