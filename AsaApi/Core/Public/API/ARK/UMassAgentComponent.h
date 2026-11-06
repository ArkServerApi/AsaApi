#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMassAgentComponent : public UActorComponent
{
public:
	UMassAgentComponent() = delete;
	~UMassAgentComponent() = delete;
	UMassAgentComponent(const UMassAgentComponent&) = delete;
	UMassAgentComponent& operator=(const UMassAgentComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMassAgentComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMassAgentComponent"); }

	FMassArchetypeCompositionDescriptor& PuppetSpecificAdditionField() { return *GetNativePointerField<FMassArchetypeCompositionDescriptor*>(this, "UMassAgentComponent.PuppetSpecificAddition"); }
	FMassEntityConfig& EntityConfigField() { return *GetNativePointerField<FMassEntityConfig*>(this, "UMassAgentComponent.EntityConfig"); }
	FMassEntityHandle& AgentHandleField() { return *GetNativePointerField<FMassEntityHandle*>(this, "UMassAgentComponent.AgentHandle"); }
	FMassEntityTemplateID& TemplateIDField() { return *GetNativePointerField<FMassEntityTemplateID*>(this, "UMassAgentComponent.TemplateID"); }
	FMassNetworkID& NetIDField() { return *GetNativePointerField<FMassNetworkID*>(this, "UMassAgentComponent.NetID"); }
	void ClearEntityHandleInternal() { NativeCall<void>(this, "UMassAgentComponent.ClearEntityHandleInternal()"); }
	void OnUnregister() { NativeCall<void>(this, "UMassAgentComponent.OnUnregister()"); }
	void RegisterWithAgentSubsystem() { NativeCall<void>(this, "UMassAgentComponent.RegisterWithAgentSubsystem()"); }
	void OnRegister() { NativeCall<void>(this, "UMassAgentComponent.OnRegister()"); }
	void KillEntity(bool bDestroyActor) { NativeCall<void, bool>(this, "UMassAgentComponent.KillEntity(bool)", bDestroyActor); }
	void UnregisterWithAgentSubsystem() { NativeCall<void>(this, "UMassAgentComponent.UnregisterWithAgentSubsystem()"); }
	void OnRep_NetID() { NativeCall<void>(this, "UMassAgentComponent.OnRep_NetID()"); }
};
