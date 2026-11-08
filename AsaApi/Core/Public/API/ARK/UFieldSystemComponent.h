#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UFieldSystemComponent : public UPrimitiveComponent
{
public:
	UFieldSystemComponent() = delete;
	~UFieldSystemComponent() = delete;
	UFieldSystemComponent(const UFieldSystemComponent&) = delete;
	UFieldSystemComponent& operator=(const UFieldSystemComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldSystemComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldSystemComponent"); }

	bool& bIsWorldFieldField() { return *GetNativePointerField<bool*>(this, "UFieldSystemComponent.bIsWorldField"); }
	bool& bIsChaosFieldField() { return *GetNativePointerField<bool*>(this, "UFieldSystemComponent.bIsChaosField"); }
	FFieldObjectCommands& ConstructionCommandsField() { return *GetNativePointerField<FFieldObjectCommands*>(this, "UFieldSystemComponent.ConstructionCommands"); }
	FFieldObjectCommands& BufferCommandsField() { return *GetNativePointerField<FFieldObjectCommands*>(this, "UFieldSystemComponent.BufferCommands"); }
	bool& bEnableInEditorWorldsField() { return *GetNativePointerField<bool*>(this, "UFieldSystemComponent.bEnableInEditorWorlds"); }
	bool& bEnableInPreviewWorldsField() { return *GetNativePointerField<bool*>(this, "UFieldSystemComponent.bEnableInPreviewWorlds"); }
	FChaosSolversModule*& ChaosModuleField() { return *GetNativePointerField<FChaosSolversModule**>(this, "UFieldSystemComponent.ChaosModule"); }
	bool& bHasPhysicsStateField() { return *GetNativePointerField<bool*>(this, "UFieldSystemComponent.bHasPhysicsState"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UFieldSystemComponent.CreateSceneProxy()"); }
	void DispatchFieldCommand(const FFieldSystemCommand& InCommand, bool IsTransient) { NativeCall<void, const FFieldSystemCommand&, bool>(this, "UFieldSystemComponent.DispatchFieldCommand(FFieldSystemCommand&,bool)", InCommand, IsTransient); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UFieldSystemComponent.OnCreatePhysicsState()"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UFieldSystemComponent.OnDestroyPhysicsState()"); }
	void ClearFieldCommands() { NativeCall<void>(this, "UFieldSystemComponent.ClearFieldCommands()"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UFieldSystemComponent.ShouldCreatePhysicsState()"); }
	bool HasAnySockets() { return NativeCall<bool>(this, "UFieldSystemComponent.HasAnySockets()"); }
	void AddFieldCommand(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) { NativeCall<void, bool, EFieldPhysicsType, UFieldSystemMetaData*, UFieldNodeBase*>(this, "UFieldSystemComponent.AddFieldCommand(bool,EFieldPhysicsType,UFieldSystemMetaData*,UFieldNodeBase*)", Enabled, Target, MetaData, Field); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UFieldSystemComponent.HasValidPhysicsState()"); }
	void BuildFieldCommand(bool Enabled, EFieldPhysicsType Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field, bool IsTransient) { NativeCall<void, bool, EFieldPhysicsType, UFieldSystemMetaData*, UFieldNodeBase*, bool>(this, "UFieldSystemComponent.BuildFieldCommand(bool,EFieldPhysicsType,UFieldSystemMetaData*,UFieldNodeBase*,bool)", Enabled, Target, MetaData, Field, IsTransient); }
};
