#pragma once


struct FItemAttachmentInfo
{
	// Fields

	UActorComponent*& ComponentToAttachField() { return *GetNativePointerField<UActorComponent**>(this, "FItemAttachmentInfo.ComponentToAttach"); }
	//TArray<FExtraItemAttachmentInfo, TSizedDefaultAllocator<32> >& ExtraItemAttachmentInfosField() { return *GetNativePointerField<TArray<FExtraItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "FItemAttachmentInfo.ExtraItemAttachmentInfos"); }
	FName& SocketToAttachToField() { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.SocketToAttachTo"); }
	TSoftClassPtr<AActor>& OnlyUseAttachmentForActorClassField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "FItemAttachmentInfo.OnlyUseAttachmentForActorClass"); }
	FName& AttachedCompNameField() { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.AttachedCompName"); }
	TWeakObjectPtr<UActorComponent>& AttachedCompReferenceField() { return *GetNativePointerField<TWeakObjectPtr<UActorComponent>*>(this, "FItemAttachmentInfo.AttachedCompReference"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bCanBuildStructuresOn() { return { this, "FItemAttachmentInfo.bCanBuildStructuresOn" }; }
	BitFieldValue<bool, unsigned __int32> bUseParentAnims() { return { this, "FItemAttachmentInfo.bUseParentAnims" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonHands() { return { this, "FItemAttachmentInfo.bAttachToFirstPersonHands" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToThirdPersonWeaponMesh() { return { this, "FItemAttachmentInfo.bAttachToThirdPersonWeaponMesh" }; }
	BitFieldValue<bool, unsigned __int32> bDisabled() { return { this, "FItemAttachmentInfo.bDisabled" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemColors() { return { this, "FItemAttachmentInfo.bUseItemColors" }; }
	BitFieldValue<bool, unsigned __int32> bUseIgnoreAttachmentWhenEquipmentOfType() { return { this, "FItemAttachmentInfo.bUseIgnoreAttachmentWhenEquipmentOfType" }; }
	BitFieldValue<bool, unsigned __int32> bHideCharacterMesh() { return { this, "FItemAttachmentInfo.bHideCharacterMesh" }; }
	BitFieldValue<bool, unsigned __int32> bAttachmentRequireWeaponSupportShield() { return { this, "FItemAttachmentInfo.bAttachmentRequireWeaponSupportShield" }; }
	BitFieldValue<bool, unsigned __int32> bForceDediAttachment() { return { this, "FItemAttachmentInfo.bForceDediAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bForceVisibleInFirstPerson() { return { this, "FItemAttachmentInfo.bForceVisibleInFirstPerson" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreEquipmentForceHideFirstPerson() { return { this, "FItemAttachmentInfo.bIgnoreEquipmentForceHideFirstPerson" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonCamera() { return { this, "FItemAttachmentInfo.bAttachToFirstPersonCamera" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonCameraCapsule() { return { this, "FItemAttachmentInfo.bAttachToFirstPersonCameraCapsule" }; }
	BitFieldValue<bool, unsigned __int32> bPersistShieldRefreshOnWeaponEquip() { return { this, "FItemAttachmentInfo.bPersistShieldRefreshOnWeaponEquip" }; }
	BitFieldValue<bool, unsigned __int32> bDisableForTaxidermy() { return { this, "FItemAttachmentInfo.bDisableForTaxidermy" }; }
	BitFieldValue<bool, unsigned __int32> bDontAddAttachedParentBounds() { return { this, "FItemAttachmentInfo.bDontAddAttachedParentBounds" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemAttachmentInfo>(); }
};