#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UGroundClutterComponent : public UStaticMeshComponent
{
public:
	UGroundClutterComponent() = delete;
	~UGroundClutterComponent() = delete;
	UGroundClutterComponent(const UGroundClutterComponent&) = delete;
	UGroundClutterComponent& operator=(const UGroundClutterComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGroundClutterComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGroundClutterComponent"); }

	int& LayerIDField() { return *GetNativePointerField<int*>(this, "UGroundClutterComponent.LayerID"); }
	bool& bDrawDebugInfoField() { return *GetNativePointerField<bool*>(this, "UGroundClutterComponent.bDrawDebugInfo"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UGroundClutterComponent.ShouldCreatePhysicsState()"); }
	void OnUnregister() { NativeCall<void>(this, "UGroundClutterComponent.OnUnregister()"); }
	void OnRegister() { NativeCall<void>(this, "UGroundClutterComponent.OnRegister()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "UGroundClutterComponent.SupportsStaticLighting()"); }
	void PostLoad() { NativeCall<void>(this, "UGroundClutterComponent.PostLoad()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGroundClutterComponent.CreateSceneProxy()"); }
};
