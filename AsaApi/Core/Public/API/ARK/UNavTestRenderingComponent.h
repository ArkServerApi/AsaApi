#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UNavTestRenderingComponent : public UDebugDrawComponent
{
public:
	UNavTestRenderingComponent() = delete;
	~UNavTestRenderingComponent() = delete;
	UNavTestRenderingComponent(const UNavTestRenderingComponent&) = delete;
	UNavTestRenderingComponent& operator=(const UNavTestRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavTestRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavTestRenderingComponent"); }

};
