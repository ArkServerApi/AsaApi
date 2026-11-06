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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostInitProperties() { NativeCall<void>(this, "USmartObjectTestRenderingComponent.PostInitProperties()"); }
};
