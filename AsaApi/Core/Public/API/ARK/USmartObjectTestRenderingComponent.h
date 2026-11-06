#pragma once
#include "BulkForward.h"
#include "USmartObjectDebugRenderingComponent.h"

struct USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{
public:
	USmartObjectTestRenderingComponent() = delete;
	~USmartObjectTestRenderingComponent() = delete;
	USmartObjectTestRenderingComponent(const USmartObjectTestRenderingComponent&) = delete;
	USmartObjectTestRenderingComponent& operator=(const USmartObjectTestRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USmartObjectTestRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USmartObjectTestRenderingComponent"); }

	void PostInitProperties() { NativeCall<void>(this, "USmartObjectTestRenderingComponent.PostInitProperties()"); }
};
