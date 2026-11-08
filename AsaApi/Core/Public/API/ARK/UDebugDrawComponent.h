#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UDebugDrawComponent : public UPrimitiveComponent
{
public:
	UDebugDrawComponent() = delete;
	~UDebugDrawComponent() = delete;
	UDebugDrawComponent(const UDebugDrawComponent&) = delete;
	UDebugDrawComponent& operator=(const UDebugDrawComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDebugDrawComponent"); }

	FDebugDrawDelegateHelper& DebugDrawDelegateHelperField() { return *GetNativePointerField<FDebugDrawDelegateHelper*>(this, "UDebugDrawComponent.DebugDrawDelegateHelper"); }
	FDebugDrawDelegateHelper& GetDebugDrawDelegateHelper() { return NativeCall<FDebugDrawDelegateHelper&>(this, "UDebugDrawComponent.GetDebugDrawDelegateHelper()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDebugDrawComponent"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UDebugDrawComponent.CreateSceneProxy()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UDebugDrawComponent.DestroyRenderState_Concurrent()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UDebugDrawComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	FDebugRenderSceneProxy* CreateDebugSceneProxy() { return NativeCall<FDebugRenderSceneProxy*>(this, "UDebugDrawComponent.CreateDebugSceneProxy()"); }
};
