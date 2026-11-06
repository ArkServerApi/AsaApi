#pragma once
#include "BulkForward.h"
#include "USmartObjectDebugRenderingComponent.h"

struct USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{
public:
	USmartObjectSubsystemRenderingComponent() = delete;
	~USmartObjectSubsystemRenderingComponent() = delete;
	USmartObjectSubsystemRenderingComponent(const USmartObjectSubsystemRenderingComponent&) = delete;
	USmartObjectSubsystemRenderingComponent& operator=(const USmartObjectSubsystemRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USmartObjectSubsystemRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USmartObjectSubsystemRenderingComponent"); }

};
