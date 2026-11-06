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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
