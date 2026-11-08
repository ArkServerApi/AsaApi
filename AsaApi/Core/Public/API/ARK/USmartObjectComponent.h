#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct USmartObjectComponent : public USceneComponent
{
public:
	USmartObjectComponent() = delete;
	~USmartObjectComponent() = delete;
	USmartObjectComponent(const USmartObjectComponent&) = delete;
	USmartObjectComponent& operator=(const USmartObjectComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USmartObjectComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USmartObjectComponent"); }

	FSmartObjectComponentEventSignature& OnSmartObjectEventField() { return *GetNativePointerField<FSmartObjectComponentEventSignature*>(this, "USmartObjectComponent.OnSmartObjectEvent"); }
	FGuid& ComponentGuidField() { return *GetNativePointerField<FGuid*>(this, "USmartObjectComponent.ComponentGuid"); }
	FSmartObjectDefinitionReference& DefinitionRefField() { return *GetNativePointerField<FSmartObjectDefinitionReference*>(this, "USmartObjectComponent.DefinitionRef"); }
	FSmartObjectHandle& RegisteredHandleField() { return *GetNativePointerField<FSmartObjectHandle*>(this, "USmartObjectComponent.RegisteredHandle"); }
	FDelegateHandle& EventDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "USmartObjectComponent.EventDelegateHandle"); }
	bool& bCanBePartOfCollectionField() { return *GetNativePointerField<bool*>(this, "USmartObjectComponent.bCanBePartOfCollection"); }
	void OnRegister() { NativeCall<void>(this, "USmartObjectComponent.OnRegister()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USmartObjectComponent.Serialize(FArchive&)", Ar); }
	void BeginPlay() { NativeCall<void>(this, "USmartObjectComponent.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "USmartObjectComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	const USmartObjectDefinition* GetDefinition() { return NativeCall<const USmartObjectDefinition*>(this, "USmartObjectComponent.GetDefinition()"); }
	bool K2_SetSmartObjectEnabled(bool bEnable) { return NativeCall<bool, bool>(this, "USmartObjectComponent.K2_SetSmartObjectEnabled(bool)", bEnable); }
	void RegisterToSubsystem() { NativeCall<void>(this, "USmartObjectComponent.RegisterToSubsystem()"); }
	void OnRuntimeEventReceived(const FSmartObjectEventData& Event) { NativeCall<void, const FSmartObjectEventData&>(this, "USmartObjectComponent.OnRuntimeEventReceived(FSmartObjectEventData&)", Event); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "USmartObjectComponent.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
};
