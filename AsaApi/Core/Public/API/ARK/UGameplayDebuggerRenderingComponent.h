#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	UGameplayDebuggerRenderingComponent() = delete;
	~UGameplayDebuggerRenderingComponent() = delete;
	UGameplayDebuggerRenderingComponent(const UGameplayDebuggerRenderingComponent&) = delete;
	UGameplayDebuggerRenderingComponent& operator=(const UGameplayDebuggerRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayDebuggerRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayDebuggerRenderingComponent"); }

	FGameplayDebuggerDebugDrawDelegateHelper& GameplayDebuggerDebugDrawDelegateHelperField() { return *GetNativePointerField<FGameplayDebuggerDebugDrawDelegateHelper*>(this, "UGameplayDebuggerRenderingComponent.GameplayDebuggerDebugDrawDelegateHelper"); }
	FDebugRenderSceneProxy* CreateDebugSceneProxy() { return NativeCall<FDebugRenderSceneProxy*>(this, "UGameplayDebuggerRenderingComponent.CreateDebugSceneProxy()"); }
	FDebugDrawDelegateHelper& GetDebugDrawDelegateHelper() { return NativeCall<FDebugDrawDelegateHelper&>(this, "UGameplayDebuggerRenderingComponent.GetDebugDrawDelegateHelper()"); }
};
