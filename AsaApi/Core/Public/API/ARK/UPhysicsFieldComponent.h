#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPhysicsFieldComponent : public USceneComponent
{
public:
	UPhysicsFieldComponent() = delete;
	~UPhysicsFieldComponent() = delete;
	UPhysicsFieldComponent(const UPhysicsFieldComponent&) = delete;
	UPhysicsFieldComponent& operator=(const UPhysicsFieldComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsFieldComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsFieldComponent"); }

	FPhysicsFieldInstance*& FieldInstanceField() { return *GetNativePointerField<FPhysicsFieldInstance**>(this, "UPhysicsFieldComponent.FieldInstance"); }
	FPhysicsFieldInstance*& DebugInstanceField() { return *GetNativePointerField<FPhysicsFieldInstance**>(this, "UPhysicsFieldComponent.DebugInstance"); }
	FPhysicsFieldSceneProxy*& FieldProxyField() { return *GetNativePointerField<FPhysicsFieldSceneProxy**>(this, "UPhysicsFieldComponent.FieldProxy"); }
	static void BuildCommandBounds(FFieldSystemCommand& FieldCommand) { NativeCall<void, FFieldSystemCommand&>(nullptr, "UPhysicsFieldComponent.BuildCommandBounds(FFieldSystemCommand&)", FieldCommand); }
	void AddConstructionCommand(const FFieldSystemCommand& FieldCommand) { NativeCall<void, const FFieldSystemCommand&>(this, "UPhysicsFieldComponent.AddConstructionCommand(FFieldSystemCommand&)", FieldCommand); }
	void OnUnregister() { NativeCall<void>(this, "UPhysicsFieldComponent.OnUnregister()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UPhysicsFieldComponent.SendRenderDynamicData_Concurrent()"); }
	void OnRegister() { NativeCall<void>(this, "UPhysicsFieldComponent.OnRegister()"); }
	void AddPersistentCommand(const FFieldSystemCommand& FieldCommand, bool bIsWorldField) { NativeCall<void, const FFieldSystemCommand&, bool>(this, "UPhysicsFieldComponent.AddPersistentCommand(FFieldSystemCommand&,bool)", FieldCommand, bIsWorldField); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPhysicsFieldComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void AddTransientCommand(const FFieldSystemCommand& FieldCommand, bool bIsWorldField) { NativeCall<void, const FFieldSystemCommand&, bool>(this, "UPhysicsFieldComponent.AddTransientCommand(FFieldSystemCommand&,bool)", FieldCommand, bIsWorldField); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UPhysicsFieldComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UPhysicsFieldComponent.DestroyRenderState_Concurrent()"); }
	void RemovePersistentCommand(const FFieldSystemCommand& FieldCommand, bool bIsWorldField) { NativeCall<void, const FFieldSystemCommand&, bool>(this, "UPhysicsFieldComponent.RemovePersistentCommand(FFieldSystemCommand&,bool)", FieldCommand, bIsWorldField); }
};
