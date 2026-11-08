#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UPCGDebugDrawComponent : public UDebugDrawComponent
{
public:
	UPCGDebugDrawComponent() = delete;
	~UPCGDebugDrawComponent() = delete;
	UPCGDebugDrawComponent(const UPCGDebugDrawComponent&) = delete;
	UPCGDebugDrawComponent& operator=(const UPCGDebugDrawComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGDebugDrawComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGDebugDrawComponent"); }

	FDebugRenderSceneProxy*& SceneProxyField() { return *GetNativePointerField<FDebugRenderSceneProxy**>(this, "UPCGDebugDrawComponent.SceneProxy"); }
	FTimerHandle& TimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPCGDebugDrawComponent.TimerHandle"); }
	void ClearTimer() { NativeCall<void>(this, "UPCGDebugDrawComponent.ClearTimer()"); }
	FDebugRenderSceneProxy* CreateDebugSceneProxy() { return NativeCall<FDebugRenderSceneProxy*>(this, "UPCGDebugDrawComponent.CreateDebugSceneProxy()"); }
	void OnUnregister() { NativeCall<void>(this, "UPCGDebugDrawComponent.OnUnregister()"); }
	void OnTimerElapsed() { NativeCall<void>(this, "UPCGDebugDrawComponent.OnTimerElapsed()"); }
};
