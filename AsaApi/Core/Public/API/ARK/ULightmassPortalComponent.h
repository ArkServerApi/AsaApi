#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct ULightmassPortalComponent : public USceneComponent
{
public:
	ULightmassPortalComponent() = delete;
	~ULightmassPortalComponent() = delete;
	ULightmassPortalComponent(const ULightmassPortalComponent&) = delete;
	ULightmassPortalComponent& operator=(const ULightmassPortalComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULightmassPortalComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULightmassPortalComponent"); }

	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "ULightmassPortalComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "ULightmassPortalComponent.SendRenderTransform_Concurrent()"); }
};
