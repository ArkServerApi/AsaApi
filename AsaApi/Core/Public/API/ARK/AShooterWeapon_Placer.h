#pragma once
#include "BulkForward.h"


struct AShooterWeapon_Placer : AShooterWeapon
{
	// Fields

	TSubclassOf<APrimalStructure>& StructureToPlaceField() { return *GetNativePointerField<TSubclassOf<APrimalStructure>*>(this, "AShooterWeapon_Placer.StructureToPlace"); }
	//FWeaponAnim& SecondaryActionAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.SecondaryActionAnim"); }
	//FWeaponAnim& UnableToPlaceAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.UnableToPlaceAnim"); }
	//FWeaponAnim& PlaceOnSelfAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.PlaceOnSelfAnim"); }
	//FWeaponAnim& EquipItemAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.EquipItemAnim"); }
	float& TimeToHideLeftArmFPVField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.TimeToHideLeftArmFPV"); }
	FName& ExplosiveBoneNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Placer.ExplosiveBoneName"); }
	USkeletalMeshComponent*& ItemToPlace3PField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterWeapon_Placer.ItemToPlace3P"); }
	FName& ItemAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Placer.ItemAttachPoint3P"); }
	float& DetonateExplosivesMaxRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.DetonateExplosivesMaxRadius"); }
	bool& bHiddenExplosiveField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bHiddenExplosive"); }
	bool& bStructureCanBePlacedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bStructureCanBePlaced"); }
	float& PlacementWaitTimeFromEquipField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.PlacementWaitTimeFromEquip"); }
	float& MinimumTimeBetweenPlacementsField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.MinimumTimeBetweenPlacements"); }
	FTimerHandle& RefreshLeftArmVisibilityHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon_Placer.RefreshLeftArmVisibilityHandle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bCanDetonateExplosives() { return { this, "AShooterWeapon_Placer.bCanDetonateExplosives" }; }
	BitFieldValue<bool, unsigned __int32> bHideLeftArmFPVWhenNoAmmo() { return { this, "AShooterWeapon_Placer.bHideLeftArmFPVWhenNoAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bPlaySecondaryActionAnim() { return { this, "AShooterWeapon_Placer.bPlaySecondaryActionAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseAnimNotifyToPlaceStructure() { return { this, "AShooterWeapon_Placer.bUseAnimNotifyToPlaceStructure" }; }
	BitFieldValue<bool, unsigned __int32> bModifyDetonatorMaterial() { return { this, "AShooterWeapon_Placer.bModifyDetonatorMaterial" }; }
	BitFieldValue<bool, unsigned __int32> bPlacingStructureConsumeItemAmmo() { return { this, "AShooterWeapon_Placer.bPlacingStructureConsumeItemAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bDontPlaceStructureOnFire() { return { this, "AShooterWeapon_Placer.bDontPlaceStructureOnFire" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSecondaryAction() { return { this, "AShooterWeapon_Placer.bUseBPSecondaryAction" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreFireAction() { return { this, "AShooterWeapon_Placer.bUseBPPreFireAction" }; }
	BitFieldValue<bool, unsigned __int32> bSkipStartPlacingCheatCheck() { return { this, "AShooterWeapon_Placer.bSkipStartPlacingCheatCheck" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Placer"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_Placer();
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.StartFire(bool)", bFromGamepad); }
	void PlaceStructure() { NativeCall<void>(this, "AShooterWeapon_Placer.PlaceStructure()"); }
	void ConfirmStructurePlacement(bool DoNotUseAmmo) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.ConfirmStructurePlacement(bool)", DoNotUseAmmo); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon_Placer.CanFire(bool)", bForceAllowSubmergedFiring); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Placer.FireWeapon()"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.StartReload(bool)", bFromReplication); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Placer.StartSecondaryAction()"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterWeapon_Placer.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ServerDetonateExplosives_Implementation() { NativeCall<void>(this, "AShooterWeapon_Placer.ServerDetonateExplosives_Implementation()"); }
	void DetonateExplosives() { NativeCall<void>(this, "AShooterWeapon_Placer.DetonateExplosives()"); }
	void UseAmmo(int UseAmmoAmountOverride) { NativeCall<void, int>(this, "AShooterWeapon_Placer.UseAmmo(int)", UseAmmoAmountOverride); }
	void OnEquip() { NativeCall<void>(this, "AShooterWeapon_Placer.OnEquip()"); }
	void RefreshLeftArmVisibility() { NativeCall<void>(this, "AShooterWeapon_Placer.RefreshLeftArmVisibility()"); }
	void UnHideLeftArm() { NativeCall<void>(this, "AShooterWeapon_Placer.UnHideLeftArm()"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.UpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Placer.AttachOtherMeshes()"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Placer.DetachOtherMeshes()"); }
	void SetItemVisibility(bool bVisible) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.SetItemVisibility(bool)", bVisible); }
	void GetPlacementOrigin(UE::Math::TVector<double>* OriginLocation, UE::Math::TRotator<double>* OriginRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AShooterWeapon_Placer.GetPlacementOrigin(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OriginLocation, OriginRotation); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Placer.Tick(float)", DeltaSeconds); }

	bool& ChangeMaterialDiffrentBehaviourField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.ChangeMaterialDiffrentBehaviour"); }
	bool& bWaitingForPlacementField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bWaitingForPlacement"); }

	FWeaponAnim& SecondaryActionAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.SecondaryActionAnim"); }
	FWeaponAnim& UnableToPlaceAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.UnableToPlaceAnim"); }
	FWeaponAnim& PlaceOnSelfAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.PlaceOnSelfAnim"); }
	FWeaponAnim& EquipItemAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.EquipItemAnim"); }
	void PlaceStructureWithSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Placer.PlaceStructureWithSecondaryAction()"); }
	bool BPSecondaryAction() { return NativeCall<bool>(this, "AShooterWeapon_Placer.BPSecondaryAction()"); }
	void ServerDetonateExplosives() { NativeCall<void>(this, "AShooterWeapon_Placer.ServerDetonateExplosives()"); }
	void BPPrefireAction() { NativeCall<void>(this, "AShooterWeapon_Placer.BPPrefireAction()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Placer"); }
};