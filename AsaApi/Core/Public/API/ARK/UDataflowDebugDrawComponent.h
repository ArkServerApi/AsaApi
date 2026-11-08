#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UDataflowDebugDrawComponent : public UDebugDrawComponent
{
public:
	UDataflowDebugDrawComponent() = delete;
	~UDataflowDebugDrawComponent() = delete;
	UDataflowDebugDrawComponent(const UDataflowDebugDrawComponent&) = delete;
	UDataflowDebugDrawComponent& operator=(const UDataflowDebugDrawComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataflowDebugDrawComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataflowDebugDrawComponent"); }

	FDebugRenderSceneProxy* CreateDebugSceneProxy() { return NativeCall<FDebugRenderSceneProxy*>(this, "UDataflowDebugDrawComponent.CreateDebugSceneProxy()"); }
};
