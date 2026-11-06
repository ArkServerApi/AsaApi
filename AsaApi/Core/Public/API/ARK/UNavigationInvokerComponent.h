#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UNavigationInvokerComponent : public UActorComponent
{
public:
	UNavigationInvokerComponent() = delete;
	~UNavigationInvokerComponent() = delete;
	UNavigationInvokerComponent(const UNavigationInvokerComponent&) = delete;
	UNavigationInvokerComponent& operator=(const UNavigationInvokerComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavigationInvokerComponent"); }

	float& TileGenerationRadiusField() { return *GetNativePointerField<float*>(this, "UNavigationInvokerComponent.TileGenerationRadius"); }
	float& TileRemovalRadiusField() { return *GetNativePointerField<float*>(this, "UNavigationInvokerComponent.TileRemovalRadius"); }
	FNavAgentSelector& SupportedAgentsField() { return *GetNativePointerField<FNavAgentSelector*>(this, "UNavigationInvokerComponent.SupportedAgents"); }
	void SetGenerationRadii(float GenerationRadius, float RemovalRadius) { NativeCall<void, float, float>(this, "UNavigationInvokerComponent.SetGenerationRadii(float,float)", GenerationRadius, RemovalRadius); }
	void PostInitProperties() { NativeCall<void>(this, "UNavigationInvokerComponent.PostInitProperties()"); }
	void OnUnregister() { NativeCall<void>(this, "UNavigationInvokerComponent.OnUnregister()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavigationInvokerComponent"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UNavigationInvokerComponent.Activate(bool)", bReset); }
	void Deactivate() { NativeCall<void>(this, "UNavigationInvokerComponent.Deactivate()"); }
	void OnNavigationInitStart(const UNavigationSystemBase& NavSys) { NativeCall<void, const UNavigationSystemBase&>(this, "UNavigationInvokerComponent.OnNavigationInitStart(UNavigationSystemBase&)", NavSys); }
};
