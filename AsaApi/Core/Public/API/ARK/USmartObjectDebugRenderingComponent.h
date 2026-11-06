#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
public:
	USmartObjectDebugRenderingComponent() = delete;
	~USmartObjectDebugRenderingComponent() = delete;
	USmartObjectDebugRenderingComponent(const USmartObjectDebugRenderingComponent&) = delete;
	USmartObjectDebugRenderingComponent& operator=(const USmartObjectDebugRenderingComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "USmartObjectDebugRenderingComponent.StaticClass()"); }
};
