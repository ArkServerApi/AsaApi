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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
