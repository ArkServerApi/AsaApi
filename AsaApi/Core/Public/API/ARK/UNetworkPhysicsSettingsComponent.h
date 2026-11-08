#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UNetworkPhysicsSettingsComponent : public UActorComponent
{
public:
	UNetworkPhysicsSettingsComponent() = delete;
	~UNetworkPhysicsSettingsComponent() = delete;
	UNetworkPhysicsSettingsComponent(const UNetworkPhysicsSettingsComponent&) = delete;
	UNetworkPhysicsSettingsComponent& operator=(const UNetworkPhysicsSettingsComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNetworkPhysicsSettingsComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNetworkPhysicsSettingsComponent"); }

	FNetworkPhysicsSettingsComponentAsync*& NetworkPhysicsSettings_InternalField() { return *GetNativePointerField<FNetworkPhysicsSettingsComponentAsync**>(this, "UNetworkPhysicsSettingsComponent.NetworkPhysicsSettings_Internal"); }
	void OnUnregister() { NativeCall<void>(this, "UNetworkPhysicsSettingsComponent.OnUnregister()"); }
	void OnComponentPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) { NativeCall<void, UPrimitiveComponent*, EComponentPhysicsStateChange>(this, "UNetworkPhysicsSettingsComponent.OnComponentPhysicsStateChanged(UPrimitiveComponent*,EComponentPhysicsStateChange)", ChangedComponent, StateChange); }
	static UNetworkPhysicsSettingsComponent* GetSettingsForActor(AActor* Owner) { return NativeCall<UNetworkPhysicsSettingsComponent*, AActor*>(nullptr, "UNetworkPhysicsSettingsComponent.GetSettingsForActor(AActor*)", Owner); }
	void OnRegister() { NativeCall<void>(this, "UNetworkPhysicsSettingsComponent.OnRegister()"); }
	void BeginPlay() { NativeCall<void>(this, "UNetworkPhysicsSettingsComponent.BeginPlay()"); }
};
