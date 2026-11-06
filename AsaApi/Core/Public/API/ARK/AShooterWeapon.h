#pragma once
#include "BulkForward.h"


struct AShooterWeapon : AActor
{
	float& EquipTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.EquipTime"); }
	UAnimMontage* OverrideProneInAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.OverrideProneInAnim"); }
	UAnimMontage* OverrideProneOutAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.OverrideProneOutAnim"); }
	UAnimMontage* OverrideJumpAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.OverrideJumpAnim"); }
	UAnimMontage* OverrideLandedAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.OverrideLandedAnim"); }
	TArray<UAnimSequence*> OverrideRiderAnimSequenceFromField() { return *GetNativePointerField<TArray<UAnimSequence*>*>(this, "AShooterWeapon.OverrideRiderAnimSequenceFrom"); }
	TArray<UAnimSequence*> OverrideRiderAnimSequenceToField() { return *GetNativePointerField<TArray<UAnimSequence*>*>(this, "AShooterWeapon.OverrideRiderAnimSequenceTo"); }
	float& ItemDurabilityToConsumePerMeleeHitField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ItemDurabilityToConsumePerMeleeHit"); }
	float& AmmoIconsCountField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AmmoIconsCount"); }
	float& TargetingTooltipCheckRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingTooltipCheckRange"); }
	int& PrimaryClipIconOffsetField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.PrimaryClipIconOffset"); }
	int& SecondaryClipIconOffsetField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.SecondaryClipIconOffset"); }
	FVector2D& TargetingInfoTooltipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon.TargetingInfoTooltipPadding"); }
	FVector2D& TargetingInfoTooltipScaleField() { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon.TargetingInfoTooltipScale"); }
	bool& bOnlyPassiveDurabilityWhenAccessoryActiveField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bOnlyPassiveDurabilityWhenAccessoryActive"); }
	bool& bDisableShooterOnElectricStormField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableShooterOnElectricStorm"); }
	FName& OverrideAttachPointField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.OverrideAttachPoint"); }
	FVector& FPVRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocation"); }
	FRotator& FPVRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVRelativeRotation"); }
	FVector& FPVRelativeLocation_TargetingField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocation_Targeting"); }
	FRotator& FPVRelativeRotation_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVRelativeRotation_Targeting"); }
	float& FPVEnterTargetingInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVEnterTargetingInterpSpeed"); }
	float& FPVExitTargetingInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVExitTargetingInterpSpeed"); }
	float& EndDoMeleeSwingTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.EndDoMeleeSwingTime"); }
	FRotator& FPVLookAtMaximumOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtMaximumOffset"); }
	FRotator& FPVLookAtSpeedBaseField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtSpeedBase"); }
	FRotator& FPVLookAtInterpSpeedField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtInterpSpeed"); }
	FRotator& FPVLookAtMaximumOffset_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtMaximumOffset_Targeting"); }
	FRotator& FPVLookAtSpeedBase_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtSpeedBase_Targeting"); }
	FRotator& FPVLookAtInterpSpeed_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtInterpSpeed_Targeting"); }
	FVector& FPVImmobilizedLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVImmobilizedLocationOffset"); }
	FRotator& FPVImmobilizedRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVImmobilizedRotationOffset"); }
	float& FPVImmobilizedInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVImmobilizedInterpSpeed"); }
	bool& bUseBlueprintAnimNotificationsField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBlueprintAnimNotifications"); }
	TArray<FName>& MeleeSwingSocketsField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterWeapon.MeleeSwingSockets"); }
	float& AllowMeleeTimeBeforeAnimationEndField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AllowMeleeTimeBeforeAnimationEnd"); }
	UPrimalItem* AssociatedPrimalItemField() { return *GetNativePointerField<UPrimalItem**>(this, "AShooterWeapon.AssociatedPrimalItem"); }
	AMissionType* AssociatedMissionField() { return *GetNativePointerField<AMissionType**>(this, "AShooterWeapon.AssociatedMission"); }
	bool& bCanBeUsedAsEquipmentField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bCanBeUsedAsEquipment"); }
	FItemNetInfo& AssociatedItemNetInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "AShooterWeapon.AssociatedItemNetInfo"); }
	FWeaponData& WeaponConfigField() { return *GetNativePointerField<FWeaponData*>(this, "AShooterWeapon.WeaponConfig"); }
	TSubclassOf<UPrimalItem>& WeaponAmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "AShooterWeapon.WeaponAmmoItemTemplate"); }
	long double& NextAllowedMeleeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.NextAllowedMeleeTime"); }
	TArray<FVector>& LastSocketPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "AShooterWeapon.LastSocketPositions"); }
	TArray<AActor*> MeleeSwingHurtListField() { return *GetNativePointerField<TArray<AActor*>*>(this, "AShooterWeapon.MeleeSwingHurtList"); }
	long double& LastFPVRenderTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastFPVRenderTime"); }
	FRotator& LastCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.LastCameraRotation"); }
	FRotator& FPVAdditionalLookRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVAdditionalLookRotOffset"); }
	FVector& FPVLastLocOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVLastLocOffset"); }
	FVector& FPVLastVROffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVLastVROffset"); }
	FVector& FPVRelativeLocationOffscreenOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocationOffscreenOffset"); }
	FRotator& FPVLastRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLastRotOffset"); }
	AShooterCharacter* MyPawnField() { return *GetNativePointerField<AShooterCharacter**>(this, "AShooterWeapon.MyPawn"); }
	UAudioComponent* FireACField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon.FireAC"); }
	FName& MuzzleAttachPointField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.MuzzleAttachPoint"); }
	USoundCue* FireSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.FireSound"); }
	USoundCue* AltFireSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.AltFireSound"); }
	USoundCue* FireFinishSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.FireFinishSound"); }
	USoundCue* OutOfAmmoSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.OutOfAmmoSound"); }
	int& MeleeDamageAmountField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.MeleeDamageAmount"); }
	float& TheMeleeSwingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingRadius"); }
	float& MeleeDamageImpulseField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeDamageImpulse"); }
	UAnimMontage* WeaponMesh3PReloadAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.WeaponMesh3PReloadAnim"); }
	USoundCue* EquipSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.EquipSound"); }
	UAnimMontage* WeaponMesh3PFireAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.WeaponMesh3PFireAnim"); }
	float& FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); }
	float& FPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); }
	float& FPVMoveOffscreenWhenTurningMinViewRotSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMinViewRotSpeed"); }
	float& FPVMoveOffscreenWhenTurningMaxViewRotSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); }
	float& FPVMoveOffscreenIdleRestoreIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenIdleRestoreInterval"); }
	float& FPVMoveOffscreenIdleRestoreSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenIdleRestoreSpeed"); }
	float& FPVMoveOffscreenWhenTurningMaxOffsetField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxOffset"); }
	long double& FPVStoppedTurningTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.FPVStoppedTurningTime"); }
	float& ItemDestructionUnequipWeaponDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ItemDestructionUnequipWeaponDelay"); }
	float& WeaponUnequipDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponUnequipDelay"); }
	EWeaponState::Type& CurrentStateField() { return *GetNativePointerField<EWeaponState::Type*>(this, "AShooterWeapon.CurrentState"); }
	long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastFireTime"); }
	int& CurrentAmmoField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.CurrentAmmo"); }
	int& CurrentAmmoInClipField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.CurrentAmmoInClip"); }
	bool& bReplicateCurrentAmmoInClipToNonOwnersField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bReplicateCurrentAmmoInClipToNonOwners"); }
	bool& bUseBPAdjustAmmoPerShotField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBPAdjustAmmoPerShot"); }
	FName& FPVAccessoryToggleComponentField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.FPVAccessoryToggleComponent"); }
	FName& TPVAccessoryToggleComponentField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.TPVAccessoryToggleComponent"); }
	float& TimeToAutoReloadField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TimeToAutoReload"); }
	USoundBase* ToggleAccessorySoundField() { return *GetNativePointerField<USoundBase**>(this, "AShooterWeapon.ToggleAccessorySound"); }
	int& FiredLastNoAmmoShotField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.FiredLastNoAmmoShot"); }
	long double& LastNotifyShotTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastNotifyShotTime"); }
	TSubclassOf<UDamageType>& MeleeDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "AShooterWeapon.MeleeDamageType"); }
	FVector& VRTargetingModelOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.VRTargetingModelOffset"); }
	FVector& VRTargetingAimOriginOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.VRTargetingAimOriginOffset"); }
	UMaterialInterface* ScopeOverlayMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon.ScopeOverlayMI"); }
	UMaterialInterface* ScopeCrosshairMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon.ScopeCrosshairMI"); }
	float& ScopeCrosshairSizeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ScopeCrosshairSize"); }
	FName& ScopeCrosshairColorParameterField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.ScopeCrosshairColorParameter"); }
	float& MinItemDurabilityPercentageForShotField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MinItemDurabilityPercentageForShot"); }
	float& OverrideTargetingFOVField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.OverrideTargetingFOV"); }
	float& TargetingDelayTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingDelayTime"); }
	float& TargetingFOVInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingFOVInterpSpeed"); }
	float& AimDriftYawAngleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftYawAngle"); }
	float& AimDriftPitchAngleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftPitchAngle"); }
	float& AimDriftYawFrequencyField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftYawFrequency"); }
	float& AimDriftPitchFrequencyField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftPitchFrequency"); }
	UAnimMontage* AlternateInventoryEquipAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.AlternateInventoryEquipAnim"); }
	float& MeleeHitRandomChanceToDestroyItemField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeHitRandomChanceToDestroyItem"); }
	float& GlobalFireCameraShakeScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.GlobalFireCameraShakeScale"); }
	float& DurabilityCostToEquipField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.DurabilityCostToEquip"); }
	float& PassiveDurabilityCostPerIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.PassiveDurabilityCostPerInterval"); }
	float& PassiveDurabilityCostIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.PassiveDurabilityCostInterval"); }
	float& GlobalFireCameraShakeScaleTargetingField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.GlobalFireCameraShakeScaleTargeting"); }
	float& MeleeCameraShakeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeCameraShakeSpeedScale"); }
	float& ReloadCameraShakeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ReloadCameraShakeSpeedScale"); }
	float& MeleeConsumesStaminaField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeConsumesStamina"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.HypoThermiaInsulation"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.HyperThermiaInsulation"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.InsulationRange"); }
	long double& LastDurabilityConsumptionTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastDurabilityConsumptionTime"); }
	bool& bLastMeleeHitField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bLastMeleeHit"); }
	bool& bLastMeleeHitStationaryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bLastMeleeHitStationary"); }
	bool& bClientAlreadyReloadedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bClientAlreadyReloaded"); }
	float& AutoReloadTimerField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AutoReloadTimer"); }
	bool& bConsumedDurabilityForThisMeleeHitField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bConsumedDurabilityForThisMeleeHit"); }
	USoundCue* TargetingSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.TargetingSound"); }
	USoundCue* UntargetingSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.UntargetingSound"); }
	float& FPVMeleeTraceFXRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMeleeTraceFXRange"); }
	TSubclassOf<UShooterDamageType>& MeleeAttackUsableHarvestDamageTypeField() { return *GetNativePointerField<TSubclassOf<UShooterDamageType>*>(this, "AShooterWeapon.MeleeAttackUsableHarvestDamageType"); }
	float& MeleeAttackHarvetUsableComponentsRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeAttackHarvetUsableComponentsRadius"); }
	float& MeleeAttackUsableHarvestDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeAttackUsableHarvestDamageMultiplier"); }
	FieldArray<bool, 6> bColorizeRegionsField() { return { this, "AShooterWeapon.bColorizeRegions" }; }
	UAnimMontage* TPVForcePlayAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.TPVForcePlayAnim"); }
	bool& bPreventOpeningInventoryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bPreventOpeningInventory"); }
	bool& bAllowUseOnSeatingStructureField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowUseOnSeatingStructure"); }
	bool& bOnlyUseOnSeatingStructureField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bOnlyUseOnSeatingStructure"); }
	bool& bBPDoClientCheckCanFireField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPDoClientCheckCanFire"); }
	bool& bRestrictTPVCameraYawField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bRestrictTPVCameraYaw"); }
	float& TPVCameraYawRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TPVCameraYawRange"); }
	bool& bFoceSimulatedTickField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bFoceSimulatedTick"); }
	bool& bWasLastFireFromGamePadField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bWasLastFireFromGamePad"); }
	bool& bDisableWeaponCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableWeaponCrosshair"); }
	UStaticMesh* DyePreviewMeshOverrideSMField() { return *GetNativePointerField<UStaticMesh**>(this, "AShooterWeapon.DyePreviewMeshOverrideSM"); }
	bool& bBPOverrideAspectRatioField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPOverrideAspectRatio"); }
	bool& bBPOverrideFPVMasterPoseComponentField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPOverrideFPVMasterPoseComponent"); }
	bool& bForceAllowMountedWeaponryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceAllowMountedWeaponry"); }
	float& FireCameraShakeSpreadScaleExponentField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleExponent"); }
	float& FireCameraShakeSpreadScaleExponentLessThanField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleExponentLessThan"); }
	float& FireCameraShakeSpreadScaleMultiplierLessThanField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleMultiplierLessThan"); }
	float& FireCameraShakeSpreadScaleMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleMultiplier"); }
	bool& bUseFireCameraShakeScaleField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseFireCameraShakeScale"); }
	bool& bForceTickWithNoControllerField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTickWithNoController"); }
	FInstantWeaponData& InstantConfigField() { return *GetNativePointerField<FInstantWeaponData*>(this, "AShooterWeapon.InstantConfig"); }
	float& CurrentFiringSpreadField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.CurrentFiringSpread"); }
	TSubclassOf<APrimalBuff>& ScopedBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "AShooterWeapon.ScopedBuff"); }
	TWeakObjectPtr<APrimalBuff>& MyScopedBuffField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBuff>*>(this, "AShooterWeapon.MyScopedBuff"); }
	UAnimSequence* OverrideTPVShieldAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon.OverrideTPVShieldAnimation"); }
	bool& bAllowTargetingDuringMeleeSwingField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowTargetingDuringMeleeSwing"); }
	FVector& FPVMuzzleLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVMuzzleLocationOffset"); }
	FVector& TPVMuzzleLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.TPVMuzzleLocationOffset"); }
	bool& bForceTPV_EquippedWhileRidingField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTPV_EquippedWhileRiding"); }
	bool& bCutsEnemyGrapplingCableField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bCutsEnemyGrapplingCable"); }
	FVector& FPVInventoryReequipOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVInventoryReequipOffset"); }
	long double& LocalInventoryViewingSkippedEquipAnimTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LocalInventoryViewingSkippedEquipAnimTime"); }
	float& DraggingOffsetInterpField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.DraggingOffsetInterp"); }
	bool& bForceTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTPVCameraOffset"); }
	bool& bUseBPSpawnMeleeEffectsField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBPSpawnMeleeEffects"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip() { return { this, "AShooterWeapon.bUseDinoRangeForTooltip" }; }
	BitFieldValue<bool, unsigned __int32> bFPVUsingImmobilizedTransform() { return { this, "AShooterWeapon.bFPVUsingImmobilizedTransform" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseFirstMeleeAnimWithShield() { return { this, "AShooterWeapon.bOnlyUseFirstMeleeAnimWithShield" }; }
	BitFieldValue<bool, unsigned __int32> bForceShowCrosshairWhileFiring() { return { this, "AShooterWeapon.bForceShowCrosshairWhileFiring" }; }
	BitFieldValue<bool, unsigned __int32> bIsFireActivelyHeld() { return { this, "AShooterWeapon.bIsFireActivelyHeld" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSubmergedFiring() { return { this, "AShooterWeapon.bAllowSubmergedFiring" }; }
	BitFieldValue<bool, unsigned __int32> bIsInMeleeSwing() { return { this, "AShooterWeapon.bIsInMeleeSwing" }; }
	BitFieldValue<bool, unsigned __int32> bDoMeleeSwing() { return { this, "AShooterWeapon.bDoMeleeSwing" }; }
	BitFieldValue<bool, unsigned __int32> bPlayingCameraAnimFPV() { return { this, "AShooterWeapon.bPlayingCameraAnimFPV" }; }
	BitFieldValue<bool, unsigned __int32> bIsWeaponBreaking() { return { this, "AShooterWeapon.bIsWeaponBreaking" }; }
	BitFieldValue<bool, unsigned __int32> bHideFPVMesh() { return { this, "AShooterWeapon.bHideFPVMesh" }; }
	BitFieldValue<bool, unsigned __int32> bForceTargeting() { return { this, "AShooterWeapon.bForceTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bCanAltFire() { return { this, "AShooterWeapon.bCanAltFire" }; }
	BitFieldValue<bool, unsigned __int32> bAltFireDoesMeleeAttack() { return { this, "AShooterWeapon.bAltFireDoesMeleeAttack" }; }
	BitFieldValue<bool, unsigned __int32> bAltFireDoesNotStopFire() { return { this, "AShooterWeapon.bAltFireDoesNotStopFire" }; }
	BitFieldValue<bool, unsigned __int32> bHideDamageSourceFromLogs() { return { this, "AShooterWeapon.bHideDamageSourceFromLogs" }; }
	BitFieldValue<bool, unsigned __int32> bUseTargetingFireAnim() { return { this, "AShooterWeapon.bUseTargetingFireAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseTargetingReloadAnim() { return { this, "AShooterWeapon.bUseTargetingReloadAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUsePartialReloadAnim() { return { this, "AShooterWeapon.bUsePartialReloadAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseEquipNoAmmoClipAnim() { return { this, "AShooterWeapon.bUseEquipNoAmmoClipAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseUnequipNoAmmoClipAnim() { return { this, "AShooterWeapon.bUseUnequipNoAmmoClipAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseMeleeNoAmmoClipAnim() { return { this, "AShooterWeapon.bUseMeleeNoAmmoClipAnim" }; }
	BitFieldValue<bool, unsigned __int32> bHideLeftArmFPV() { return { this, "AShooterWeapon.bHideLeftArmFPV" }; }
	BitFieldValue<bool, unsigned __int32> bLoopedMuzzleFX() { return { this, "AShooterWeapon.bLoopedMuzzleFX" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeHitUseMuzzleFX() { return { this, "AShooterWeapon.bMeleeHitUseMuzzleFX" }; }
	BitFieldValue<bool, unsigned __int32> bUsePostUpdateTickForFPVParticles() { return { this, "AShooterWeapon.bUsePostUpdateTickForFPVParticles" }; }
	BitFieldValue<bool, unsigned __int32> bFPVMoveOffscreenWhenTurning() { return { this, "AShooterWeapon.bFPVMoveOffscreenWhenTurning" }; }
	BitFieldValue<bool, unsigned __int32> bReloadAnimForceTickPoseOnServer() { return { this, "AShooterWeapon.bReloadAnimForceTickPoseOnServer" }; }
	BitFieldValue<bool, unsigned __int32> bLoopedFireSound() { return { this, "AShooterWeapon.bLoopedFireSound" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTargetingWhileReloading() { return { this, "AShooterWeapon.bAllowTargetingWhileReloading" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeHitColorizesStructures() { return { this, "AShooterWeapon.bMeleeHitColorizesStructures" }; }
	BitFieldValue<bool, unsigned __int32> bLoopedFireAnim() { return { this, "AShooterWeapon.bLoopedFireAnim" }; }
	BitFieldValue<bool, unsigned __int32> bPlayingFireAnim() { return { this, "AShooterWeapon.bPlayingFireAnim" }; }
	BitFieldValue<bool, unsigned __int32> bFPVWasTurning() { return { this, "AShooterWeapon.bFPVWasTurning" }; }
	BitFieldValue<bool, unsigned __int32> bAutoRefire() { return { this, "AShooterWeapon.bAutoRefire" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeAmmoOnUseAmmo() { return { this, "AShooterWeapon.bConsumeAmmoOnUseAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bTargetUnTargetWithClick() { return { this, "AShooterWeapon.bTargetUnTargetWithClick" }; }
	BitFieldValue<bool, unsigned __int32> bDontActuallyConsumeItemAmmo() { return { this, "AShooterWeapon.bDontActuallyConsumeItemAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bBPUseWeaponCanFire() { return { this, "AShooterWeapon.bBPUseWeaponCanFire" }; }
	BitFieldValue<bool, unsigned __int32> bBPUseTargetingEvents() { return { this, "AShooterWeapon.bBPUseTargetingEvents" }; }
	BitFieldValue<bool, unsigned __int32> bIsEquipped() { return { this, "AShooterWeapon.bIsEquipped" }; }
	BitFieldValue<bool, unsigned __int32> bWantsToFire() { return { this, "AShooterWeapon.bWantsToFire" }; }
	BitFieldValue<bool, unsigned __int32> bWantsToAltFire() { return { this, "AShooterWeapon.bWantsToAltFire" }; }
	BitFieldValue<bool, unsigned __int32> bPendingReload() { return { this, "AShooterWeapon.bPendingReload" }; }
	BitFieldValue<bool, unsigned __int32> bPendingEquip() { return { this, "AShooterWeapon.bPendingEquip" }; }
	BitFieldValue<bool, unsigned __int32> bUnequipping() { return { this, "AShooterWeapon.bUnequipping" }; }
	BitFieldValue<bool, unsigned __int32> bNotifiedOutOfAmmo() { return { this, "AShooterWeapon.bNotifiedOutOfAmmo" }; }
	BitFieldValue<bool, unsigned __int32> bPlayedTargetingSound() { return { this, "AShooterWeapon.bPlayedTargetingSound" }; }
	BitFieldValue<bool, unsigned __int32> bUseAmmoOnFiring() { return { this, "AShooterWeapon.bUseAmmoOnFiring" }; }
	BitFieldValue<bool, unsigned __int32> bUseAmmoServerOnly() { return { this, "AShooterWeapon.bUseAmmoServerOnly" }; }
	BitFieldValue<bool, unsigned __int32> bListenToAppliedForeces() { return { this, "AShooterWeapon.bListenToAppliedForeces" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideAimOffsets() { return { this, "AShooterWeapon.bOverrideAimOffsets" }; }
	BitFieldValue<bool, unsigned __int32> bHasToggleableAccessory() { return { this, "AShooterWeapon.bHasToggleableAccessory" }; }
	BitFieldValue<bool, unsigned __int32> bToggleAccessoryUseAltMuzzleFX() { return { this, "AShooterWeapon.bToggleAccessoryUseAltMuzzleFX" }; }
	BitFieldValue<bool, unsigned __int32> bToggleAccessoryUseAltFireSound() { return { this, "AShooterWeapon.bToggleAccessoryUseAltFireSound" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanToggleAccessory() { return { this, "AShooterWeapon.bUseBPCanToggleAccessory" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnScoped() { return { this, "AShooterWeapon.bUseBPOnScoped" }; }
	BitFieldValue<bool, unsigned __int32> bIsDefaultWeapon() { return { this, "AShooterWeapon.bIsDefaultWeapon" }; }
	BitFieldValue<bool, unsigned __int32> bForceKeepEquippedWhileInInventory() { return { this, "AShooterWeapon.bForceKeepEquippedWhileInInventory" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyAllowUseWhenRidingDino() { return { this, "AShooterWeapon.bOnlyAllowUseWhenRidingDino" }; }
	BitFieldValue<bool, unsigned __int32> bPrimaryFireDoesMeleeAttack() { return { this, "AShooterWeapon.bPrimaryFireDoesMeleeAttack" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeHitCaptureDermis() { return { this, "AShooterWeapon.bMeleeHitCaptureDermis" }; }
	BitFieldValue<bool, unsigned __int32> bIsAccessoryActive() { return { this, "AShooterWeapon.bIsAccessoryActive" }; }
	BitFieldValue<bool, unsigned __int32> bCanAccessoryBeSetOn() { return { this, "AShooterWeapon.bCanAccessoryBeSetOn" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeAmmoItemOnReload() { return { this, "AShooterWeapon.bConsumeAmmoItemOnReload" }; }
	BitFieldValue<bool, unsigned __int32> bUseAutoReload() { return { this, "AShooterWeapon.bUseAutoReload" }; }
	BitFieldValue<bool, unsigned __int32> bWantsToAutoReload() { return { this, "AShooterWeapon.bWantsToAutoReload" }; }
	BitFieldValue<bool, unsigned __int32> bHasPlayedReload() { return { this, "AShooterWeapon.bHasPlayedReload" }; }
	BitFieldValue<bool, unsigned __int32> bNetLoopedSimulatingWeaponFire() { return { this, "AShooterWeapon.bNetLoopedSimulatingWeaponFire" }; }
	BitFieldValue<bool, unsigned __int32> bClientLoopingSimulateWeaponFire() { return { this, "AShooterWeapon.bClientLoopingSimulateWeaponFire" }; }
	BitFieldValue<bool, unsigned __int32> bBPHandleMeleeAttack() { return { this, "AShooterWeapon.bBPHandleMeleeAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPShouldDealDamage() { return { this, "AShooterWeapon.bUseBPShouldDealDamage" }; }
	BitFieldValue<bool, unsigned __int32> bDoesntUsePrimalItem() { return { this, "AShooterWeapon.bDoesntUsePrimalItem" }; }
	BitFieldValue<bool, unsigned __int32> bUseCanAccessoryBeSetOn() { return { this, "AShooterWeapon.bUseCanAccessoryBeSetOn" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetActorForTargetingTooltip() { return { this, "AShooterWeapon.bUseBPGetActorForTargetingTooltip" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideAimDirection() { return { this, "AShooterWeapon.bUseBPOverrideAimDirection" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor() { return { this, "AShooterWeapon.bUseBPIsValidUnstasisActor" }; }
	BitFieldValue<bool, unsigned __int32> bLoopingSimulateWeaponFire() { return { this, "AShooterWeapon.bLoopingSimulateWeaponFire" }; }
	BitFieldValue<bool, unsigned __int32> bFiredFirstBurstShot() { return { this, "AShooterWeapon.bFiredFirstBurstShot" }; }
	BitFieldValue<bool, unsigned __int32> bClientTriggersHandleFiring() { return { this, "AShooterWeapon.bClientTriggersHandleFiring" }; }
	BitFieldValue<bool, unsigned __int32> bAllowUseHarvesting() { return { this, "AShooterWeapon.bAllowUseHarvesting" }; }
	BitFieldValue<bool, unsigned __int32> bPreventItemColors() { return { this, "AShooterWeapon.bPreventItemColors" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetSelectedMeleeAttackAnim() { return { this, "AShooterWeapon.bUseBPGetSelectedMeleeAttackAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPWeaponDealDamage() { return { this, "AShooterWeapon.bUseBPWeaponDealDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnWeaponAnimPlayedNotify() { return { this, "AShooterWeapon.bUseBPOnWeaponAnimPlayedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bColorCrosshairBasedOnTarget() { return { this, "AShooterWeapon.bColorCrosshairBasedOnTarget" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTargeting() { return { this, "AShooterWeapon.bAllowTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDropAndPickup() { return { this, "AShooterWeapon.bAllowDropAndPickup" }; }
	BitFieldValue<bool, unsigned __int32> bApplyAimDriftWhenTargeting() { return { this, "AShooterWeapon.bApplyAimDriftWhenTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bUseScopeOverlay() { return { this, "AShooterWeapon.bUseScopeOverlay" }; }
	BitFieldValue<bool, unsigned __int32> bHideFPVMeshWhileTargeting() { return { this, "AShooterWeapon.bHideFPVMeshWhileTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bGamepadRightIsSecondaryAction() { return { this, "AShooterWeapon.bGamepadRightIsSecondaryAction" }; }
	BitFieldValue<bool, unsigned __int32> bGamepadLeftIsPrimaryFire() { return { this, "AShooterWeapon.bGamepadLeftIsPrimaryFire" }; }
	BitFieldValue<bool, unsigned __int32> bDirectPrimaryFireToAltFire() { return { this, "AShooterWeapon.bDirectPrimaryFireToAltFire" }; }
	BitFieldValue<bool, unsigned __int32> bCanFire() { return { this, "AShooterWeapon.bCanFire" }; }
	BitFieldValue<bool, unsigned __int32> bForceTargetingOnDino() { return { this, "AShooterWeapon.bForceTargetingOnDino" }; }
	BitFieldValue<bool, unsigned __int32> bDirectTargetingToPrimaryFire() { return { this, "AShooterWeapon.bDirectTargetingToPrimaryFire" }; }
	BitFieldValue<bool, unsigned __int32> bDirectTargetingToAltFire() { return { this, "AShooterWeapon.bDirectTargetingToAltFire" }; }
	BitFieldValue<bool, unsigned __int32> bDirectTargetingToSecondaryAction() { return { this, "AShooterWeapon.bDirectTargetingToSecondaryAction" }; }
	BitFieldValue<bool, unsigned __int32> bPreventEquippingUnderwater() { return { this, "AShooterWeapon.bPreventEquippingUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bUseTPVWeaponMeshMeleeSockets() { return { this, "AShooterWeapon.bUseTPVWeaponMeshMeleeSockets" }; }
	BitFieldValue<bool, unsigned __int32> bTargetingForceTraceFloatingHUD() { return { this, "AShooterWeapon.bTargetingForceTraceFloatingHUD" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRunning() { return { this, "AShooterWeapon.bAllowRunning" }; }
	BitFieldValue<bool, unsigned __int32> bAllowUseWhileRidingDino() { return { this, "AShooterWeapon.bAllowUseWhileRidingDino" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsOffhandShield() { return { this, "AShooterWeapon.bSupportsOffhandShield" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeAttackHarvetUsableComponents() { return { this, "AShooterWeapon.bMeleeAttackHarvetUsableComponents" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSettingColorizeRegions() { return { this, "AShooterWeapon.bAllowSettingColorizeRegions" }; }
	BitFieldValue<bool, unsigned __int32> bAttemptToDyeWithMeleeAttack() { return { this, "AShooterWeapon.bAttemptToDyeWithMeleeAttack" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyDamagePawns() { return { this, "AShooterWeapon.bOnlyDamagePawns" }; }
	BitFieldValue<bool, unsigned __int32> bUseCharacterMeleeDamageModifier() { return { this, "AShooterWeapon.bUseCharacterMeleeDamageModifier" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeZoomInOut() { return { this, "AShooterWeapon.bConsumeZoomInOut" }; }
	BitFieldValue<bool, unsigned __int32> bClipScopeInY() { return { this, "AShooterWeapon.bClipScopeInY" }; }
	BitFieldValue<bool, unsigned __int32> bScopeFullscreen() { return { this, "AShooterWeapon.bScopeFullscreen" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRunningWhileFiring() { return { this, "AShooterWeapon.bAllowRunningWhileFiring" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRunningWhileReloading() { return { this, "AShooterWeapon.bAllowRunningWhileReloading" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRunningWhileMeleeAttacking() { return { this, "AShooterWeapon.bAllowRunningWhileMeleeAttacking" }; }
	BitFieldValue<bool, unsigned __int32> bColorizeMuzzleFX() { return { this, "AShooterWeapon.bColorizeMuzzleFX" }; }
	BitFieldValue<bool, unsigned __int32> bForceFirstPersonWhileTargeting() { return { this, "AShooterWeapon.bForceFirstPersonWhileTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPStartEquippedNotify() { return { this, "AShooterWeapon.bUseBPStartEquippedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bDirectPrimaryFireToSecondaryAction() { return { this, "AShooterWeapon.bDirectPrimaryFireToSecondaryAction" }; }
	BitFieldValue<bool, unsigned __int32> bUseAlternateAimOffset() { return { this, "AShooterWeapon.bUseAlternateAimOffset" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideStandingAnim() { return { this, "AShooterWeapon.bOverrideStandingAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseCustomSeatedAnim() { return { this, "AShooterWeapon.bUseCustomSeatedAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceTPVTargetingAnimation() { return { this, "AShooterWeapon.bUseBPForceTPVTargetingAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventUseWhileRidingDino() { return { this, "AShooterWeapon.bForcePreventUseWhileRidingDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventSwitchingWeapon() { return { this, "AShooterWeapon.bUseBPPreventSwitchingWeapon" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanEquip() { return { this, "AShooterWeapon.bUseBPCanEquip" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRemainEquipped() { return { this, "AShooterWeapon.bUseBPRemainEquipped" }; }
	BitFieldValue<bool, unsigned __int32> bIsInDestruction() { return { this, "AShooterWeapon.bIsInDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bForceReloadOnDestruction() { return { this, "AShooterWeapon.bForceReloadOnDestruction" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyFOV() { return { this, "AShooterWeapon.bUseBPModifyFOV" }; }
	BitFieldValue<bool, unsigned __int32> bServerIgnoreCheckCanFire() { return { this, "AShooterWeapon.bServerIgnoreCheckCanFire" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetTPVCameraOffset() { return { this, "AShooterWeapon.bUseBPGetTPVCameraOffset" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideRootRotationOffset() { return { this, "AShooterWeapon.bUseBPOverrideRootRotationOffset" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnedByMission() { return { this, "AShooterWeapon.bSpawnedByMission" }; }
	BitFieldValue<bool, unsigned __int32> bForceAlwaysPlayEquipAnim() { return { this, "AShooterWeapon.bForceAlwaysPlayEquipAnim" }; }
	BitFieldValue<bool, unsigned __int32> bLastMeleeAttacked() { return { this, "AShooterWeapon.bLastMeleeAttacked" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreReloadState() { return { this, "AShooterWeapon.bIgnoreReloadState" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon"); }
	UAnimSequence* GetStandingAnimation_Implementation(float& OutBlendInTime, float& OutBlendOutTime) { return NativeCall<UAnimSequence*, float&, float&>(this, "AShooterWeapon.GetStandingAnimation_Implementation(float&,float&)", OutBlendInTime, OutBlendOutTime); }
	//     bool IsPlayingCameraAnimFPV() { return NativeCall<bool>(this, "AShooterWeapon.IsPlayingCameraAnimFPV"); }
	// FUNCTION MISSING: AShooterWeapon.IsPlayingCameraAnimFPV
	USceneComponent* FindComponentByName(FName ComponentName) { return NativeCall<USceneComponent*, FName>(this, "AShooterWeapon.FindComponentByName(FName)", ComponentName); }
	void ZoomOut() { NativeCall<void>(this, "AShooterWeapon.ZoomOut()"); }
	void ZoomIn() { NativeCall<void>(this, "AShooterWeapon.ZoomIn()"); }
	bool UseAlternateAimOffsetAnim() { return NativeCall<bool>(this, "AShooterWeapon.UseAlternateAimOffsetAnim()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterWeapon.PostInitializeComponents()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "AShooterWeapon.DrawHUD(AShooterHUD*)", HUD); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon.UpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon.Destroyed()"); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "AShooterWeapon.IsValidUnStasisCaster()"); }
	void OnEquip() { NativeCall<void>(this, "AShooterWeapon.OnEquip()"); }
	void OnEquipFinished() { NativeCall<void>(this, "AShooterWeapon.OnEquipFinished()"); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "AShooterWeapon.StartUnequip_Implementation()"); }
	void PlayUnequipAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayUnequipAnimation()"); }
	void AttachMeshToPawn() { NativeCall<void>(this, "AShooterWeapon.AttachMeshToPawn()"); }
	void ApplyPrimalItemSettingsToWeapon(bool bShallowUpdate) { NativeCall<void, bool>(this, "AShooterWeapon.ApplyPrimalItemSettingsToWeapon(bool)", bShallowUpdate); }
	void DetachMeshFromPawn() { NativeCall<void>(this, "AShooterWeapon.DetachMeshFromPawn()"); }
	void ApplyCharacterSnapshot(UPrimalItem* SnapshotItem, AActor* To) { NativeCall<void, UPrimalItem*, AActor*>(this, "AShooterWeapon.ApplyCharacterSnapshot(UPrimalItem*,AActor*)", SnapshotItem, To); }
	bool AllowedToFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon.AllowedToFire(bool)", bForceAllowSubmergedFiring); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon.StopFire()"); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon.StartAltFire()"); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon.StartSecondaryAction()"); }
	void StopSecondaryAction() { NativeCall<void>(this, "AShooterWeapon.StopSecondaryAction()"); }
	void OnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.OnStartTargeting(bool)", bFromGamepadLeft); }
	void OnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.OnStopTargeting(bool)", bFromGamepadLeft); }
	//     bool CanToggleAccessory() { return NativeCall<bool>(this, "AShooterWeapon.CanToggleAccessory"); }
	// FUNCTION MISSING: AShooterWeapon.CanToggleAccessory
	void SetAccessoryEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AShooterWeapon.SetAccessoryEnabled(bool)", bEnabled); }
	void ToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.ToggleAccessory()"); }
	void RefreshToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.RefreshToggleAccessory()"); }
	bool CanMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon.CanMeleeAttack()"); }
	void DoMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.DoMeleeAttack()"); }
	void StopAltFire() { NativeCall<void>(this, "AShooterWeapon.StopAltFire()"); }
	void CheckForMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.CheckForMeleeAttack()"); }
	void StopCheckForMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.StopCheckForMeleeAttack()"); }
	bool CanRun() { return NativeCall<bool>(this, "AShooterWeapon.CanRun()"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon.StartReload(bool)", bFromReplication); }
	void ClearClientReload() { NativeCall<void>(this, "AShooterWeapon.ClearClientReload()"); }
	float PlayReloadAnimation() { return NativeCall<float>(this, "AShooterWeapon.PlayReloadAnimation()"); }
	void StopReloadAnimation() { NativeCall<void>(this, "AShooterWeapon.StopReloadAnimation()"); }
	void ServerStartFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartFire_Implementation()"); }
	void ServerStopFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStopFire_Implementation()"); }
	void ServerStartAltFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartAltFire_Implementation()"); }
	void ServerStopAltFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStopAltFire_Implementation()"); }
	void ServerStartSecondaryAction_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartSecondaryAction_Implementation()"); }
	void ServerStopSecondaryAction_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStopSecondaryAction_Implementation()"); }
	void ServerToggleAccessory_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerToggleAccessory_Implementation()"); }
	void ServerStartReload_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartReload_Implementation()"); }
	void ClientStartReload_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientStartReload_Implementation()"); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon.CanFire(bool)", bForceAllowSubmergedFiring); }
	bool AllowFiring() { return NativeCall<bool>(this, "AShooterWeapon.AllowFiring()"); }
	bool CanReload() { return NativeCall<bool>(this, "AShooterWeapon.CanReload()"); }
	void UseAmmo(int UseAmmoAmountOverride) { NativeCall<void, int>(this, "AShooterWeapon.UseAmmo(int)", UseAmmoAmountOverride); }
	float GetFireCameraShakeScale() { return NativeCall<float>(this, "AShooterWeapon.GetFireCameraShakeScale()"); }
	void HandleFiring(bool bSentFromClient) { NativeCall<void, bool>(this, "AShooterWeapon.HandleFiring(bool)", bSentFromClient); }
	bool CanTarget() { return NativeCall<bool>(this, "AShooterWeapon.CanTarget()"); }
	float GetConsumeDurabilityPerShot() { return NativeCall<float>(this, "AShooterWeapon.GetConsumeDurabilityPerShot()"); }
	void ReloadWeapon() { NativeCall<void>(this, "AShooterWeapon.ReloadWeapon()"); }
	void RefreshAmmoItemQuantity() { NativeCall<void>(this, "AShooterWeapon.RefreshAmmoItemQuantity()"); }
	void ConsumeAmmoItem(int Quantity) { NativeCall<void, int>(this, "AShooterWeapon.ConsumeAmmoItem(int)", Quantity); }
	void SetWeaponState(EWeaponState::Type NewState) { NativeCall<void, EWeaponState::Type>(this, "AShooterWeapon.SetWeaponState(EWeaponState::Type)", NewState); }
	void DetermineWeaponState() { NativeCall<void>(this, "AShooterWeapon.DetermineWeaponState()"); }
	void SetAutoReload() { NativeCall<void>(this, "AShooterWeapon.SetAutoReload()"); }
	void OnBurstStarted() { NativeCall<void>(this, "AShooterWeapon.OnBurstStarted()"); }
	void OnBurstFinished() { NativeCall<void>(this, "AShooterWeapon.OnBurstFinished()"); }
	bool IsSimulated() { return NativeCall<bool>(this, "AShooterWeapon.IsSimulated()"); }
	void ClientStopSimulatingWeaponFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientStopSimulatingWeaponFire_Implementation()"); }
	void ClientSimulateWeaponFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientSimulateWeaponFire_Implementation()"); }
	UAudioComponent* PlayWeaponSound(USoundCue* Sound) { return NativeCall<UAudioComponent*, USoundCue*>(this, "AShooterWeapon.PlayWeaponSound(USoundCue*)", Sound); }
	float PlayCameraAnimationFPV(UAnimMontage* Animation1P) { return NativeCall<float, UAnimMontage*>(this, "AShooterWeapon.PlayCameraAnimationFPV(UAnimMontage*)", Animation1P); }
	void StopCameraAnimationFPV(bool bLeaveHUDHidden) { NativeCall<void, bool>(this, "AShooterWeapon.StopCameraAnimationFPV(bool)", bLeaveHUDHidden); }
	void ClientPlayShieldHitAnim_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientPlayShieldHitAnim_Implementation()"); }
	FVector* GetAdjustedAim(FVector* result) { return NativeCall<FVector*, FVector*>(this, "AShooterWeapon.GetAdjustedAim()", result); }
	FVector* GetCameraDamageStartLocation(FVector* result, FVector* AimDir) { if (!AimDir) throw std::invalid_argument("Null native reference parameter");  return NativeCall<FVector *, UE :: Math :: TVector < double > *, const UE :: Math :: TVector < double > &>(this, "AShooterWeapon.GetCameraDamageStartLocation(UE::Math::TVector<double>&)", result, (*AimDir));  }
	FVector* GetShootingCameraLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "AShooterWeapon.GetShootingCameraLocation()", result); }
	FVector* GetMuzzleLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "AShooterWeapon.GetMuzzleLocation()", result); }
	FVector* GetMuzzleDirection(FVector* result) { return NativeCall<FVector*, FVector*>(this, "AShooterWeapon.GetMuzzleDirection()", result); }
	FHitResult* WeaponTrace(FHitResult* result, const UE::Math::TVector<double>& StartTrace, const UE::Math::TVector<double>& EndTrace) { return NativeCall<FHitResult*, FHitResult*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterWeapon.WeaponTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", result, StartTrace, EndTrace); }
	void WeaponTraceHits(TArray<FHitResult, TSizedDefaultAllocator<32> >& HitResults, const UE::Math::TVector<double>& StartTrace, const UE::Math::TVector<double>& EndTrace) { NativeCall<void, TArray<FHitResult, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterWeapon.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", HitResults, StartTrace, EndTrace); }
	void SetOwningPawn(AShooterCharacter* NewOwner) { NativeCall<void, AShooterCharacter*>(this, "AShooterWeapon.SetOwningPawn(AShooterCharacter*)", NewOwner); }
	void OnCameraUpdate(FVector* CameraLocation, FRotator* CameraRotation, FVector* WeaponBob) { if (!CameraLocation) throw std::invalid_argument("Null native reference parameter"); if (!CameraRotation) throw std::invalid_argument("Null native reference parameter"); if (!WeaponBob) throw std::invalid_argument("Null native reference parameter");  return NativeCall<void, const UE :: Math :: TVector < double > &, const UE :: Math :: TRotator < double > &, const UE :: Math :: TVector < double > &>(this, "AShooterWeapon.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&)", (*CameraLocation), (*CameraRotation), (*WeaponBob));  }
	void OnRep_MyPawn() { NativeCall<void>(this, "AShooterWeapon.OnRep_MyPawn()"); }
	void OnRep_AccessoryToggle() { NativeCall<void>(this, "AShooterWeapon.OnRep_AccessoryToggle()"); }
	void SimulateWeaponFire() { NativeCall<void>(this, "AShooterWeapon.SimulateWeaponFire()"); }
	void StartMuzzleFX() { NativeCall<void>(this, "AShooterWeapon.StartMuzzleFX()"); }
	void StopMuzzleFX() { NativeCall<void>(this, "AShooterWeapon.StopMuzzleFX()"); }
	void PlayFireAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayFireAnimation()"); }
	void StopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon.StopSimulatingWeaponFire()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >& OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >&>(this, "AShooterWeapon.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	AShooterCharacter* GetPawnOwner() { return NativeCall<AShooterCharacter*>(this, "AShooterWeapon.GetPawnOwner()"); }
	EWeaponState::Type GetCurrentState() { return NativeCall<EWeaponState::Type>(this, "AShooterWeapon.GetCurrentState()"); }
	int GetCurrentAmmo() { return NativeCall<int>(this, "AShooterWeapon.GetCurrentAmmo()"); }
	int GetCurrentAmmoInClip() { return NativeCall<int>(this, "AShooterWeapon.GetCurrentAmmoInClip()"); }
	bool UsesAmmo() { return NativeCall<bool>(this, "AShooterWeapon.UsesAmmo()"); }
	bool HasInfiniteAmmo() { return NativeCall<bool>(this, "AShooterWeapon.HasInfiniteAmmo()"); }
	void StartMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.StartMeleeSwing()"); }
	void EndMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.EndMeleeSwing()"); }
	void EndDoMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.EndDoMeleeSwing()"); }
	bool AddToMeleeSwingHurtList(AActor* AnActor) { return NativeCall<bool, AActor*>(this, "AShooterWeapon.AddToMeleeSwingHurtList(AActor*)", AnActor); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "AShooterWeapon.ShouldDealDamage(AActor*)", TestActor); }
	float DealDamage(const FHitResult& Impact, const UE::Math::TVector<double>& ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { return NativeCall<float, const FHitResult&, const UE::Math::TVector<double>&, int, TSubclassOf<UDamageType>*, float>(this, "AShooterWeapon.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, &DamageType, Impulse); }
	float GetWeaponDamageMultiplier() { return NativeCall<float>(this, "AShooterWeapon.GetWeaponDamageMultiplier()"); }
	void TickMeleeSwing(float DeltaTime) { NativeCall<void, float>(this, "AShooterWeapon.TickMeleeSwing(float)", DeltaTime); }
	void ClientStartMuzzleFX_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientStartMuzzleFX_Implementation()"); }
	void CosumeMeleeHitDurability(float DurabilityConsumptionMultiplier, bool bFromHittingFoliage) { NativeCall<void, float, bool>(this, "AShooterWeapon.CosumeMeleeHitDurability(float,bool)", DurabilityConsumptionMultiplier, bFromHittingFoliage); }
	void PlayWeaponBreakAnimation_Implementation() { NativeCall<void>(this, "AShooterWeapon.PlayWeaponBreakAnimation_Implementation()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon.Tick(float)", DeltaSeconds); }
	bool IsFiring() { return NativeCall<bool>(this, "AShooterWeapon.IsFiring()"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterWeapon.BeginPlay()"); }
	void LocalPossessed() { NativeCall<void>(this, "AShooterWeapon.LocalPossessed()"); }
	bool IsLocallyOwned() { return NativeCall<bool>(this, "AShooterWeapon.IsLocallyOwned()"); }
	void CheckItemAssocation() { NativeCall<void>(this, "AShooterWeapon.CheckItemAssocation()"); }
	bool IsOwningClient() { return NativeCall<bool>(this, "AShooterWeapon.IsOwningClient()"); }
	void OnRep_CurrentAmmoInClip() { NativeCall<void>(this, "AShooterWeapon.OnRep_CurrentAmmoInClip()"); }
	//     void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterWeapon.LoadedFromSaveGame"); }
	// FUNCTION MISSING: AShooterWeapon.LoadedFromSaveGame
	void PlayUseHarvestAnimation_Implementation() { NativeCall<void>(this, "AShooterWeapon.PlayUseHarvestAnimation_Implementation()"); }
	void OwnerDied() { NativeCall<void>(this, "AShooterWeapon.OwnerDied()"); }
	void OnRep_NetLoopedWeaponFire() { NativeCall<void>(this, "AShooterWeapon.OnRep_NetLoopedWeaponFire()"); }
	void ClientSetClipAmmo_Implementation(int newClipAmmo, bool bOnlyUpdateItem) { NativeCall<void, int, bool>(this, "AShooterWeapon.ClientSetClipAmmo_Implementation(int,bool)", newClipAmmo, bOnlyUpdateItem); }
	void DoHandleFiring() { NativeCall<void>(this, "AShooterWeapon.DoHandleFiring()"); }
	bool IsFirstPersonMeshVisible() { return NativeCall<bool>(this, "AShooterWeapon.IsFirstPersonMeshVisible()"); }
	void ServerSetColorizeRegion_Implementation(int theRegion, bool bValToUse) { NativeCall<void, int, bool>(this, "AShooterWeapon.ServerSetColorizeRegion_Implementation(int,bool)", theRegion, bValToUse); }
	void DoReregisterAllComponents() { NativeCall<void>(this, "AShooterWeapon.DoReregisterAllComponents()"); }
	bool ForceTPVTargetingAnimation() { return NativeCall<bool>(this, "AShooterWeapon.ForceTPVTargetingAnimation()"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon.FireWeapon()"); }
	bool PreventSwitchingWeapon() { return NativeCall<bool>(this, "AShooterWeapon.PreventSwitchingWeapon()"); }
	bool ForceFirstPerson() { return NativeCall<bool>(this, "AShooterWeapon.ForceFirstPerson()"); }
	bool TryFireWeapon() { return NativeCall<bool>(this, "AShooterWeapon.TryFireWeapon()"); }
	bool ForcesTPVCameraOffset_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.ForcesTPVCameraOffset_Implementation()"); }
	void SetAmmoInClip(int newAmmo) { NativeCall<void, int>(this, "AShooterWeapon.SetAmmoInClip(int)", newAmmo); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterWeapon.GetDebugInfoString()", result); }
	bool IsInMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon.IsInMeleeAttack()"); }
	void ClientSpawnMeleeEffects_Implementation(UE::Math::TVector<double>* Impact, UE::Math::TVector<double>* ShootDir) { if (!Impact) throw std::invalid_argument("Null native value parameter"); if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterWeapon.ClientSpawnMeleeEffects_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Impact, *ShootDir); }
	FString* BPGetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterWeapon.BPGetDebugInfoString()", result); }
	float BPModifyFOV(float inFOV) { return NativeCall<float, float>(this, "AShooterWeapon.BPModifyFOV(float)", inFOV); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass(const wchar_t* Package);
	static UClass* GetPrivateStaticClass(const wchar_t* Package) = delete;
	bool AllowTargeting() { return NativeCall<bool>(this, "AShooterWeapon.AllowTargeting()"); }
	bool AllowUnequip() { return NativeCall<bool>(this, "AShooterWeapon.AllowUnequip()"); }
	void BP_OnReloadNotify() { NativeCall<void>(this, "AShooterWeapon.BP_OnReloadNotify()"); }
	int BPAdjustAmmoPerShot() { return NativeCall<int>(this, "AShooterWeapon.BPAdjustAmmoPerShot()"); }
	bool BPAllowNativeFireWeapon() { return NativeCall<bool>(this, "AShooterWeapon.BPAllowNativeFireWeapon()"); }
	void BPAppliedPrimalItemToWeapon() { NativeCall<void>(this, "AShooterWeapon.BPAppliedPrimalItemToWeapon()"); }
	bool BPCanEquip(AShooterCharacter* ByCharacter) { return NativeCall<bool, AShooterCharacter*>(this, "AShooterWeapon.BPCanEquip(AShooterCharacter*)", ByCharacter); }
	bool BPCanToggleAccessory() { return NativeCall<bool>(this, "AShooterWeapon.BPCanToggleAccessory()"); }
	bool BPConstrainAspectRatio(float* OutAspectRatio) { if (!OutAspectRatio) throw std::invalid_argument("Null native reference parameter");  return NativeCall<bool, float &>(this, "AShooterWeapon.BPConstrainAspectRatio(float&)", (*OutAspectRatio));  }
	void BPDrawHud(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "AShooterWeapon.BPDrawHud(AShooterHUD*)", HUD); }
	void BPFiredWeapon() { NativeCall<void>(this, "AShooterWeapon.BPFiredWeapon()"); }
	void BPFireWeapon() { NativeCall<void>(this, "AShooterWeapon.BPFireWeapon()"); }
	bool BPForceTPVTargetingAnimation() { return NativeCall<bool>(this, "AShooterWeapon.BPForceTPVTargetingAnimation()"); }
	AActor* BPGetActorForTargetingTooltip() { return NativeCall<AActor*>(this, "AShooterWeapon.BPGetActorForTargetingTooltip()"); }
	UAnimSequence* BPGetSeatingAnimation() { return NativeCall<UAnimSequence*>(this, "AShooterWeapon.BPGetSeatingAnimation()"); }
	FText* BPGetTargetingTooltipInfoLabel(FText* result) { return NativeCall<FText*, FText*>(this, "AShooterWeapon.BPGetTargetingTooltipInfoLabel()", result); }
	FVector* BPGetTPVCameraOffset(FVector* result) { return NativeCall<FVector*, FVector*>(this, "AShooterWeapon.BPGetTPVCameraOffset()", result); }
	void BPGlobalFireWeapon() { NativeCall<void>(this, "AShooterWeapon.BPGlobalFireWeapon()"); }
	void BPHandleMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.BPHandleMeleeAttack()"); }
	void BPLostController() { NativeCall<void>(this, "AShooterWeapon.BPLostController()"); }
	void BPMeleeAttackStarted() { NativeCall<void>(this, "AShooterWeapon.BPMeleeAttackStarted()"); }
	void BPOnScoped() { NativeCall<void>(this, "AShooterWeapon.BPOnScoped()"); }
	void BPOnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.BPOnStartTargeting(bool)", bFromGamepadLeft); }
	void BPOnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.BPOnStopTargeting(bool)", bFromGamepadLeft); }
	FVector* BPOverrideAimDirection(FVector* result, FVector* DesiredAimDirection) { if (!DesiredAimDirection) throw std::invalid_argument("Null native reference parameter");  return NativeCall<FVector *, UE :: Math :: TVector < double > *, const UE :: Math :: TVector < double > &>(this, "AShooterWeapon.BPOverrideAimDirection(UE::Math::TVector<double>&)", result, (*DesiredAimDirection));  }
	UE::Math::TRotator<double>* BPOverrideRootRotationOffset(UE::Math::TRotator<double>* result, UE::Math::TRotator<double>* InRootRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AShooterWeapon.BPOverrideRootRotationOffset(UE::Math::TRotator<double>)", result, InRootRotation); }
	bool BPPreventSwitchingWeapon() { return NativeCall<bool>(this, "AShooterWeapon.BPPreventSwitchingWeapon()"); }
	bool BPRemainEquipped() { return NativeCall<bool>(this, "AShooterWeapon.BPRemainEquipped()"); }
	bool BPShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "AShooterWeapon.BPShouldDealDamage(AActor*)", TestActor); }
	void BPSpawnMeleeEffects(UE::Math::TVector<double>* Impact, UE::Math::TVector<double>* ShootDir) { if (!Impact) throw std::invalid_argument("Null native value parameter"); if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterWeapon.BPSpawnMeleeEffects(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Impact, *ShootDir); }
	void BPStartEquippedNotify() { NativeCall<void>(this, "AShooterWeapon.BPStartEquippedNotify()"); }
	void BPStopMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.BPStopMeleeAttack()"); }
	void BPToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.BPToggleAccessory()"); }
	void BPToggleAccessoryFailed() { NativeCall<void>(this, "AShooterWeapon.BPToggleAccessoryFailed()"); }
	bool BPTryFireWeapon() { return NativeCall<bool>(this, "AShooterWeapon.BPTryFireWeapon()"); }
	bool BPWeaponCanFire() { return NativeCall<bool>(this, "AShooterWeapon.BPWeaponCanFire()"); }
	int BPWeaponDealDamage(const FHitResult& Impact, const UE::Math::TVector<double>& ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { return NativeCall<int, const FHitResult&, const UE::Math::TVector<double>&, int, TSubclassOf<UDamageType>*, float>(this, "AShooterWeapon.BPWeaponDealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, &DamageType, Impulse); }
	void BPWeaponZoom(bool bZoomingIn) { NativeCall<void, bool>(this, "AShooterWeapon.BPWeaponZoom(bool)", bZoomingIn); }
	void ClientPlayShieldHitAnim() { NativeCall<void>(this, "AShooterWeapon.ClientPlayShieldHitAnim()"); }
	void ClientSetClipAmmo(int newClipAmmo, bool bOnlyUpdateItem) { NativeCall<void, int, bool>(this, "AShooterWeapon.ClientSetClipAmmo(int,bool)", newClipAmmo, bOnlyUpdateItem); }
	void ClientSimulateWeaponFire() { NativeCall<void>(this, "AShooterWeapon.ClientSimulateWeaponFire()"); }
	void ClientSpawnMeleeEffects(UE::Math::TVector<double>* Impact, UE::Math::TVector<double>* ShootDir) { if (!Impact) throw std::invalid_argument("Null native value parameter"); if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterWeapon.ClientSpawnMeleeEffects(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Impact, *ShootDir); }
	void ClientStartMuzzleFX() { NativeCall<void>(this, "AShooterWeapon.ClientStartMuzzleFX()"); }
	void ClientStartReload() { NativeCall<void>(this, "AShooterWeapon.ClientStartReload()"); }
	void ClientStopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon.ClientStopSimulatingWeaponFire()"); }
	bool ForcesTPVCameraOffset() { return NativeCall<bool>(this, "AShooterWeapon.ForcesTPVCameraOffset()"); }
	UAnimSequence* GetStandingAnimation(float* OutBlendInTime, float* OutBlendOutTime) { if (!OutBlendInTime) throw std::invalid_argument("Null native reference parameter"); if (!OutBlendOutTime) throw std::invalid_argument("Null native reference parameter");  return NativeCall<UAnimSequence *, float &, float &>(this, "AShooterWeapon.GetStandingAnimation(float&,float&)", (*OutBlendInTime), (*OutBlendOutTime));  }
	void OnInstigatorPlayDyingEvent() { NativeCall<void>(this, "AShooterWeapon.OnInstigatorPlayDyingEvent()"); }
	void PlayUseHarvestAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayUseHarvestAnimation()"); }
	void PlayWeaponBreakAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayWeaponBreakAnimation()"); }
	void ServerSetColorizeRegion(int theRegion, bool bValToUse) { NativeCall<void, int, bool>(this, "AShooterWeapon.ServerSetColorizeRegion(int,bool)", theRegion, bValToUse); }
	void ServerStartAltFire() { NativeCall<void>(this, "AShooterWeapon.ServerStartAltFire()"); }
	void ServerStartFire() { NativeCall<void>(this, "AShooterWeapon.ServerStartFire()"); }
	void ServerStartReload() { NativeCall<void>(this, "AShooterWeapon.ServerStartReload()"); }
	void ServerStartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon.ServerStartSecondaryAction()"); }
	void ServerStopAltFire() { NativeCall<void>(this, "AShooterWeapon.ServerStopAltFire()"); }
	void ServerStopFire() { NativeCall<void>(this, "AShooterWeapon.ServerStopFire()"); }
	void ServerToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.ServerToggleAccessory()"); }
	void StartSecondaryActionEvent() { NativeCall<void>(this, "AShooterWeapon.StartSecondaryActionEvent()"); }
	void StartUnequip() { NativeCall<void>(this, "AShooterWeapon.StartUnequip()"); }
	void StartUnequipEvent() { NativeCall<void>(this, "AShooterWeapon.StartUnequipEvent()"); }
	void StopSecondaryActionEvent() { NativeCall<void>(this, "AShooterWeapon.StopSecondaryActionEvent()"); }

	bool& bIsWeaponPingField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bIsWeaponPing"); }
	bool& bIsWeaponTrackerField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bIsWeaponTracker"); }
	bool& bPreventLeftShoulderField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bPreventLeftShoulder"); }
	bool& bPreventRightShoulderField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bPreventRightShoulder"); }
	float& TheMeleeSwingRadiusScalarWhenRidingField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingRadiusScalarWhenRiding"); }
	float& TheMeleeSwingInteractionRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingInteractionRadius"); }
	int& clientTrashFramesField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.clientTrashFrames"); }
	float& OverrideMuzzleFXAlphaField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.OverrideMuzzleFXAlpha"); }
	bool& bAllowDedicatedThirdPersonWeaponMeshTickField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowDedicatedThirdPersonWeaponMeshTick"); }
	bool& bDisableGamepadAimAssistField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableGamepadAimAssist"); }
	float& AimAssistStrengthWeaponField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimAssistStrengthWeapon"); }
	bool& bBlockCameraAnimFPVField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBlockCameraAnimFPV"); }
	int& AmmoInClipOnReloadField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.AmmoInClipOnReload"); }
	int& LastAmmoToConsumeField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.LastAmmoToConsume"); }
	int& CachedSelectedMeleeAnimField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.CachedSelectedMeleeAnim"); }
	bool& bFPVScopedTargetingHidesNonWeaponHUDField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bFPVScopedTargetingHidesNonWeaponHUD"); }
	int& LastSelectedMeleeAnimField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.LastSelectedMeleeAnim"); }
	float& WeaponDurabilityPercentField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponDurabilityPercent"); }
	float& WeaponDurabilityPercentUpdateIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponDurabilityPercentUpdateInterval"); }
	float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FluidSimSplashStrength"); }
	bool& bAllowSeattingWhileEquippedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowSeattingWhileEquipped"); }
	float& ReloadBeforeAnimFinishesTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ReloadBeforeAnimFinishesTime"); }
	unsigned char& ColorizeMuzzleVFXUseColorRegionField() { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon.ColorizeMuzzleVFXUseColorRegion"); }

	FTimerHandle& OnEquipFinishedHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon.OnEquipFinishedHandle"); }
	FTimerHandle& ReloadWeaponHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon.ReloadWeaponHandle"); }
	const FTriggerEffectLibraryEntry*& TriggerEffectField() { return *GetNativePointerField<const FTriggerEffectLibraryEntry**>(this, "AShooterWeapon.TriggerEffect"); }
	FCanvasIcon& PrimaryIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.PrimaryIcon"); }
	FCanvasIcon& SecondaryIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.SecondaryIcon"); }
	FCanvasIcon& PrimaryClipIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.PrimaryClipIcon"); }
	FCanvasIcon& SecondaryClipIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.SecondaryClipIcon"); }
	FTimerHandle& EndMeleeSwingHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon.EndMeleeSwingHandle"); }
	USkeletalMeshComponentWithSoftRef*& Mesh3PField() { return *GetNativePointerField<USkeletalMeshComponentWithSoftRef**>(this, "AShooterWeapon.Mesh3P"); }
	ACameraActor*& AnimatedCameraField() { return *GetNativePointerField<ACameraActor**>(this, "AShooterWeapon.AnimatedCamera"); }
	USkeletalMeshComponentWithSoftRef*& Mesh1PField() { return *GetNativePointerField<USkeletalMeshComponentWithSoftRef**>(this, "AShooterWeapon.Mesh1P"); }
	UParticleSystem*& MuzzleFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon.MuzzleFX"); }
	UParticleSystem*& MuzzleFX_FPVField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon.MuzzleFX_FPV"); }
	UParticleSystem*& AltMuzzleFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon.AltMuzzleFX"); }
	UParticleSystem*& AltMuzzleFX_FPVField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon.AltMuzzleFX_FPV"); }
	UNiagaraSystem*& NiagaraMuzzleFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon.NiagaraMuzzleFX"); }
	UNiagaraSystem*& NiagaraMuzzleFX_FPVField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon.NiagaraMuzzleFX_FPV"); }
	UNiagaraSystem*& NiagaraAltMuzzleFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon.NiagaraAltMuzzleFX"); }
	UNiagaraSystem*& NiagaraAltMuzzleFX_FPVField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon.NiagaraAltMuzzleFX_FPV"); }
	UNiagaraComponent*& NiagaraMuzzlePSCField() { return *GetNativePointerField<UNiagaraComponent**>(this, "AShooterWeapon.NiagaraMuzzlePSC"); }
	UNiagaraComponent*& NiagaraMuzzlePSCSecondaryField() { return *GetNativePointerField<UNiagaraComponent**>(this, "AShooterWeapon.NiagaraMuzzlePSCSecondary"); }
	UParticleSystemComponent*& MuzzlePSCField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterWeapon.MuzzlePSC"); }
	UParticleSystemComponent*& MuzzlePSCSecondaryField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterWeapon.MuzzlePSCSecondary"); }
	UForceFeedbackEffect*& FireForceFeedbackField() { return *GetNativePointerField<UForceFeedbackEffect**>(this, "AShooterWeapon.FireForceFeedback"); }
	FWeaponAnim& ReloadAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.ReloadAnim"); }
	UAnimMontage*& ProneTPVReloadAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.ProneTPVReloadAnim"); }
	FWeaponAnim& PartialReloadAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.PartialReloadAnim"); }
	UAnimMontage*& ProneTPVPartialReloadAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.ProneTPVPartialReloadAnim"); }
	FWeaponAnim& HarvestAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.HarvestAnim"); }
	FWeaponAnim& WeaponBreakAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.WeaponBreakAnim"); }
	FWeaponAnim& EquipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.EquipAnim"); }
	FWeaponAnim& EquipNoAmmoClipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.EquipNoAmmoClipAnim"); }
	FWeaponAnim& UnequipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.UnequipAnim"); }
	FWeaponAnim& UnequipNoAmmoClipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.UnequipNoAmmoClipAnim"); }
	FWeaponAnim& FireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.FireAnim"); }
	FWeaponAnim& NoAmmoFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.NoAmmoFireAnim"); }
	FWeaponAnim& TargetingNoAmmoFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.TargetingNoAmmoFireAnim"); }
	FWeaponAnim& MeleeAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.MeleeAnim"); }
	FWeaponAnim& MeleeNoAmmoClipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.MeleeNoAmmoClipAnim"); }
	FWeaponAnim& ShieldHitAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.ShieldHitAnim"); }
	FWeaponAnim& TargetingFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.TargetingFireAnim"); }
	FWeaponAnim& TargetingReloadAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.TargetingReloadAnim"); }
	UAnimMontage*& ProneTPVTargetingReloadAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterWeapon.ProneTPVTargetingReloadAnim"); }
	FTimerHandle& DoHandleFiringHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon.DoHandleFiringHandle"); }
	UMaterialInstanceDynamic*& ScopeCrosshairMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon.ScopeCrosshairMID"); }
	FWeaponAnim& OpenInventoryAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.OpenInventoryAnim"); }
	FTimerHandle& CheckForMeleeAttackHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon.CheckForMeleeAttackHandle"); }
	USkeletalMesh*& DyePreviewMeshOverrideSKField() { return *GetNativePointerField<USkeletalMesh**>(this, "AShooterWeapon.DyePreviewMeshOverrideSK"); }
	FTimerHandle& SlowAccuracyResetHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon.SlowAccuracyResetHandle"); }
	FWeaponAnim& StartBurstAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.StartBurstAnim"); }
	FWeaponAnim& FinishBurstAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.FinishBurstAnim"); }
	EWeaponAmmoReloadState& AmmoReloadStateField() { return *GetNativePointerField<EWeaponAmmoReloadState*>(this, "AShooterWeapon.AmmoReloadState"); }
	UPrimalCameraConfig_WeaponOverride*& CurrentWeaponCameraSettingsOverrideField() { return *GetNativePointerField<UPrimalCameraConfig_WeaponOverride**>(this, "AShooterWeapon.CurrentWeaponCameraSettingsOverride"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MeleeAnimListImpactFXAttachSockets1PField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon.MeleeAnimListImpactFXAttachSockets1P"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MeleeAnimListImpactFXAttachSockets3PField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon.MeleeAnimListImpactFXAttachSockets3P"); }
	UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon.FluidSimSplashTemplateOverride"); }
	FName& LeftHandIkSkeletalMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.LeftHandIkSkeletalMeshSocketName"); }
	FName& RightHandIkSkeletalMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.RightHandIkSkeletalMeshSocketName"); }
	BitFieldValue<bool, unsigned __int32> bEnableFrameGenDuringCameraAnimation() { return { this, "AShooterWeapon.bEnableFrameGenDuringCameraAnimation"}; }
	BitFieldValue<bool, unsigned char> bCloseRadialWheelOnAltFire() { return { this, "AShooterWeapon.bCloseRadialWheelOnAltFire"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPUpdateFirstPersonMeshes() { return { this, "AShooterWeapon.bUseBPUpdateFirstPersonMeshes"}; }
	BitFieldValue<bool, unsigned __int32> bDontDeactivateWeaponInstigatorBuffsOnUnequip() { return { this, "AShooterWeapon.bDontDeactivateWeaponInstigatorBuffsOnUnequip"}; }
	BitFieldValue<bool, unsigned __int32> HasFluidSimSplashedThisSwing() { return { this, "AShooterWeapon.HasFluidSimSplashedThisSwing"}; }
	BitFieldValue<bool, unsigned char> bIsSpyglass() { return { this, "AShooterWeapon.bIsSpyglass"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetExtraPreviewMeshes() { return { this, "AShooterWeapon.bUseBPGetExtraPreviewMeshes"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverridePerShotDurability() { return { this, "AShooterWeapon.bUseBPOverridePerShotDurability"}; }
	BitFieldValue<bool, unsigned char> bAllowEmptyAmmoClipOnFire() { return { this, "AShooterWeapon.bAllowEmptyAmmoClipOnFire"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanMeleeAttack() { return { this, "AShooterWeapon.bUseBPCanMeleeAttack"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanFire() { return { this, "AShooterWeapon.bUseBPCanFire"}; }
	BitFieldValue<bool, unsigned char> bIgnoreTargetingFOV() { return { this, "AShooterWeapon.bIgnoreTargetingFOV"}; }
	BitFieldValue<bool, unsigned char> bAllowDropAndPickupOnReload() { return { this, "AShooterWeapon.bAllowDropAndPickupOnReload"}; }
	BitFieldValue<bool, unsigned char> bDirectAltFireToSeconaryAction() { return { this, "AShooterWeapon.bDirectAltFireToSeconaryAction"}; }
	BitFieldValue<bool, unsigned char> bDurabilityUseWeaponMaterial() { return { this, "AShooterWeapon.bDurabilityUseWeaponMaterial"}; }
	BitFieldValue<bool, unsigned char> bAllowFullClipReload() { return { this, "AShooterWeapon.bAllowFullClipReload"}; }
	BitFieldValue<bool, unsigned char> bForceAllowPassengerTPV() { return { this, "AShooterWeapon.bForceAllowPassengerTPV"}; }
	BitFieldValue<bool, unsigned char> bPreventCarriedZoomInOut() { return { this, "AShooterWeapon.bPreventCarriedZoomInOut"}; }
	BitFieldValue<bool, unsigned char> bInstantAccuracyReset() { return { this, "AShooterWeapon.bInstantAccuracyReset"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPPostSpawnMuzzleEffect() { return { this, "AShooterWeapon.bUseBPPostSpawnMuzzleEffect"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetCrosshairColor() { return { this, "AShooterWeapon.bUseBPGetCrosshairColor"}; }
	BitFieldValue<bool, unsigned char> bIgnorePlayerReload() { return { this, "AShooterWeapon.bIgnorePlayerReload"}; }
	BitFieldValue<bool, unsigned char> bUseAmmoReloadState() { return { this, "AShooterWeapon.bUseAmmoReloadState"}; }
	BitFieldValue<bool, unsigned __int32> bInstantReloadRequested() { return { this, "AShooterWeapon.bInstantReloadRequested"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnBurstStarted() { return { this, "AShooterWeapon.bUseBPOnBurstStarted"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnBurstFinished() { return { this, "AShooterWeapon.bUseBPOnBurstFinished"}; }
	BitFieldValue<bool, unsigned __int32> bUseBurstStartAnim() { return { this, "AShooterWeapon.bUseBurstStartAnim"}; }
	BitFieldValue<bool, unsigned __int32> bUseBurstFinishAnim() { return { this, "AShooterWeapon.bUseBurstFinishAnim"}; }
	BitFieldValue<bool, unsigned __int32> bSecondaryActionStopsFire() { return { this, "AShooterWeapon.bSecondaryActionStopsFire"}; }
	BitFieldValue<bool, unsigned __int32> bUseAmmoSupportsAdjustedAmmoPerShot() { return { this, "AShooterWeapon.bUseAmmoSupportsAdjustedAmmoPerShot"}; }
	BitFieldValue<bool, unsigned __int32> bIsMeleeWeapon() { return { this, "AShooterWeapon.bIsMeleeWeapon"}; }
	BitFieldValue<bool, unsigned __int32> bUseTargetingAimDownSightsExposureAdjustment() { return { this, "AShooterWeapon.bUseTargetingAimDownSightsExposureAdjustment"}; }
	BitFieldValue<bool, unsigned __int32> bAutoDestroyPlayerWeaponWhenSleeping() { return { this, "AShooterWeapon.bAutoDestroyPlayerWeaponWhenSleeping"}; }
	BitFieldValue<bool, unsigned __int32> bForceOwnerControllerHighQualityViewerReplication() { return { this, "AShooterWeapon.bForceOwnerControllerHighQualityViewerReplication"}; }
	BitFieldValue<bool, unsigned __int32> bTargetingForceOwnerControllerHighQualityViewerReplication() { return { this, "AShooterWeapon.bTargetingForceOwnerControllerHighQualityViewerReplication"}; }
	BitFieldValue<bool, unsigned __int32> bAlternateStandingAnimBypassLayeredBlend() { return { this, "AShooterWeapon.bAlternateStandingAnimBypassLayeredBlend"}; }
	BitFieldValue<bool, unsigned char> bImpactAttachFXUsesPawnMesh() { return { this, "AShooterWeapon.bImpactAttachFXUsesPawnMesh"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideMeleeSwingSockets() { return { this, "AShooterWeapon.bUseBPOverrideMeleeSwingSockets"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnMaxDurability() { return { this, "AShooterWeapon.bUseBPOnMaxDurability"}; }
	BitFieldValue<bool, unsigned char> bUseAbsoluteScaleOnAttach() { return { this, "AShooterWeapon.bUseAbsoluteScaleOnAttach"}; }
	BitFieldValue<bool, unsigned char> bConsiderWeaponScaleOnAttach() { return { this, "AShooterWeapon.bConsiderWeaponScaleOnAttach"}; }
	BitFieldValue<bool, unsigned char> bUseBPAnimNotifyCustomState_Tick() { return { this, "AShooterWeapon.bUseBPAnimNotifyCustomState_Tick"}; }
	BitFieldValue<bool, unsigned char> bDontUseNativeTickMeleeSwing() { return { this, "AShooterWeapon.bDontUseNativeTickMeleeSwing"}; }
	BitFieldValue<bool, unsigned char> bUseBPForceFirstPerson() { return { this, "AShooterWeapon.bUseBPForceFirstPerson"}; }
	BitFieldValue<bool, unsigned char> bUseHandIk() { return { this, "AShooterWeapon.bUseHandIk"}; }
	BitFieldValue<bool, unsigned char> bFPVNonDefaultWeaponBonesHidden() { return { this, "AShooterWeapon.bFPVNonDefaultWeaponBonesHidden"}; }
	BitFieldValue<bool, unsigned char> bIsLastAmmoInClip() { return { this, "AShooterWeapon.bIsLastAmmoInClip"}; }
	BitFieldValue<bool, unsigned char> bCheckBuffOverrideWeaponFireTransform() { return { this, "AShooterWeapon.bCheckBuffOverrideWeaponFireTransform"}; }
	BitFieldValue<bool, unsigned char> bIsChainsawWeapon() { return { this, "AShooterWeapon.bIsChainsawWeapon"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageImpactLocation() { return { this, "AShooterWeapon.bUseBPOverrideDamageImpactLocation"}; }
	BitFieldValue<bool, unsigned char> bPreventCrosshairDraw() { return { this, "AShooterWeapon.bPreventCrosshairDraw"}; }
	void OnAttachedToPawn() { NativeCall<void>(this, "AShooterWeapon.OnAttachedToPawn()"); }
	float PlayWeaponAnimation(const FWeaponAnim& Animation, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, const FWeaponAnim&, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimation(FWeaponAnim&,bool,bool,bool,bool,bool,bool)", Animation, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	void ClientClearPendingReload() { NativeCall<void>(this, "AShooterWeapon.ClientClearPendingReload()"); }
	void NetSetLastAttackMontage_Implementation(int Index) { NativeCall<void, int>(this, "AShooterWeapon.NetSetLastAttackMontage_Implementation(int)", Index); }
	bool CanPlayFireEffects() { return NativeCall<bool>(this, "AShooterWeapon.CanPlayFireEffects()"); }
	static void SetMyPawn_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetMyPawn_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPForceFirstPerson() { return NativeCall<bool>(this, "AShooterWeapon.BPForceFirstPerson()"); }
	void BPPostSpawnNiagaraMuzzleEffect(UNiagaraComponent* NewNiagaraMuzzlePSC) { NativeCall<void, UNiagaraComponent*>(this, "AShooterWeapon.BPPostSpawnNiagaraMuzzleEffect(UNiagaraComponent*)", NewNiagaraMuzzlePSC); }
	bool GetIsUnequipping() { return NativeCall<bool>(this, "AShooterWeapon.GetIsUnequipping()"); }
	static void GetMyPawn_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetMyPawn_WrapperImpl(void*,void*)", Object, OutValue); }
	AActor* GetActorForTargetingTooltip(FAttachedInstancedHarvestingElement** OutHarvestingElement) { return NativeCall<AActor*, FAttachedInstancedHarvestingElement**>(this, "AShooterWeapon.GetActorForTargetingTooltip(FAttachedInstancedHarvestingElement**)", OutHarvestingElement); }
	void BPOnBurstFinished() { NativeCall<void>(this, "AShooterWeapon.BPOnBurstFinished()"); }
	float BPOverridePerShotDurabilityCost(int AmmoPerShot) { return NativeCall<float, int>(this, "AShooterWeapon.BPOverridePerShotDurabilityCost(int)", AmmoPerShot); }
	void TickMeleeSwing_SingleTraceInFront(float DeltaTime, bool SingleTraceInFront) { NativeCall<void, float, bool>(this, "AShooterWeapon.TickMeleeSwing_SingleTraceInFront(float,bool)", DeltaTime, SingleTraceInFront); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "AShooterWeapon.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	bool BPHandleOutOfAmmo() { return NativeCall<bool>(this, "AShooterWeapon.BPHandleOutOfAmmo()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AShooterWeapon._getUObject()"); }
	USkeletalMeshComponent* BPOverrideFPVMasterPoseComponent() { return NativeCall<USkeletalMeshComponent*>(this, "AShooterWeapon.BPOverrideFPVMasterPoseComponent()"); }
	float GetWeaponAttackPlayRate() { return NativeCall<float>(this, "AShooterWeapon.GetWeaponAttackPlayRate()"); }
	void BPAnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "AShooterWeapon.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void ServerSetMeleeAnimIndex(int SelectedMeleeAnim) { NativeCall<void, int>(this, "AShooterWeapon.ServerSetMeleeAnimIndex(int)", SelectedMeleeAnim); }
	void BPAnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "AShooterWeapon.BPAnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	bool GetColorizeRegionActivated(int index) { return NativeCall<bool, int>(this, "AShooterWeapon.GetColorizeRegionActivated(int)", index); }
	bool BPCanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon.BPCanFire(bool)", bForceAllowSubmergedFiring); }
	void BPEndMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.BPEndMeleeSwing()"); }
	bool ShouldCheckAmmoReloadState() { return NativeCall<bool>(this, "AShooterWeapon.ShouldCheckAmmoReloadState()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AShooterWeapon.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BPGetExtraPreviewMeshes(TArray<UStaticMesh*, TSizedDefaultAllocator<32> >& OutMeshes) { NativeCall<void, TArray<UStaticMesh*, TSizedDefaultAllocator<32> >&>(this, "AShooterWeapon.BPGetExtraPreviewMeshes(TArray<UStaticMesh*,TSizedDefaultAllocator<32>>&)", OutMeshes); }
	void ProcessEvent(UFunction* Function, void* Parms) { NativeCall<void, UFunction*, void*>(this, "AShooterWeapon.ProcessEvent(UFunction*,void*)", Function, Parms); }
	void StopOwnerEffects() { NativeCall<void>(this, "AShooterWeapon.StopOwnerEffects()"); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon.AttachOtherMeshes()"); }
	static void GetWeaponDurabilityPercent_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetWeaponDurabilityPercent_WrapperImpl(void*,void*)", Object, OutValue); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "AShooterWeapon.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void StopWeaponAnimation(const FWeaponAnim& Animation, bool bReplicate, bool bReplicateToInstigator) { NativeCall<void, const FWeaponAnim&, bool, bool>(this, "AShooterWeapon.StopWeaponAnimation(FWeaponAnim&,bool,bool)", Animation, bReplicate, bReplicateToInstigator); }
	void SlowAccuracyReset() { NativeCall<void>(this, "AShooterWeapon.SlowAccuracyReset()"); }
	void PostAttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon.PostAttachOtherMeshes()"); }
	FColor BPGetCrosshairColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterWeapon.BPGetCrosshairColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void ClientClearPendingReload_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientClearPendingReload_Implementation()"); }
	FName BPOverrideMeleeSwingSocket(FName FromSocket) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, FName>(this, "AShooterWeapon.BPOverrideMeleeSwingSocket(FName)", AsaReturnPointer, FromSocket); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void BPRequestReload() { NativeCall<void>(this, "AShooterWeapon.BPRequestReload()"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon.DetachOtherMeshes()"); }
	bool AllowStatusRecovery() { return NativeCall<bool>(this, "AShooterWeapon.AllowStatusRecovery()"); }
	void PreMeleeAttackCheck() { NativeCall<void>(this, "AShooterWeapon.PreMeleeAttackCheck()"); }
	bool AllowTargeting_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.AllowTargeting_Implementation()"); }
	static void GetAssociatedMission_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetAssociatedMission_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetAimAssistStrength() { return NativeCall<float>(this, "AShooterWeapon.GetAimAssistStrength()"); }
	void ManageClientTrashFrames() { NativeCall<void>(this, "AShooterWeapon.ManageClientTrashFrames()"); }
	static void SetCurrentAmmo_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetCurrentAmmo_WrapperImpl(void*,void*)", Object, InValue); }
	bool ShouldOverrideOpenInventory() { return NativeCall<bool>(this, "AShooterWeapon.ShouldOverrideOpenInventory()"); }
	void BPToggleAccessoryFailed_Implementation() { NativeCall<void>(this, "AShooterWeapon.BPToggleAccessoryFailed_Implementation()"); }
	void SetAmmoReloadState(EWeaponAmmoReloadState NewState) { NativeCall<void, EWeaponAmmoReloadState>(this, "AShooterWeapon.SetAmmoReloadState(EWeaponAmmoReloadState)", NewState); }
	bool CanHarvestHitInstance(const FHitResult& HitResult) { return NativeCall<bool, const FHitResult&>(this, "AShooterWeapon.CanHarvestHitInstance(FHitResult&)", HitResult); }
	void TriggerMeleeTickIfNoneWereOnHurtList(bool GeneralCloseRangeInFront) { NativeCall<void, bool>(this, "AShooterWeapon.TriggerMeleeTickIfNoneWereOnHurtList(bool)", GeneralCloseRangeInFront); }
	bool AllowUnequip_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.AllowUnequip_Implementation()"); }
	EWeaponAmmoReloadState GetAmmoReloadState() { return NativeCall<EWeaponAmmoReloadState>(this, "AShooterWeapon.GetAmmoReloadState()"); }
	float GetCameraShakeScale() { return NativeCall<float>(this, "AShooterWeapon.GetCameraShakeScale()"); }
	static void SetbNetLoopedSimulatingWeaponFire_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetbNetLoopedSimulatingWeaponFire_WrapperImpl(void*,void*)", Object, InValue); }
	void UpdateDurabilityMaterialParams() { NativeCall<void>(this, "AShooterWeapon.UpdateDurabilityMaterialParams()"); }
	void BPAnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "AShooterWeapon.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void BPOnMaxDurability() { NativeCall<void>(this, "AShooterWeapon.BPOnMaxDurability()"); }
	FName GetAttackerDamageImpactFXAttachSocket() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterWeapon.GetAttackerDamageImpactFXAttachSocket()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static void SetCurrentAmmoInClip_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetCurrentAmmoInClip_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsShooterWeapon() { return NativeCall<bool>(this, "AShooterWeapon.IsShooterWeapon()"); }
	const FWeaponAnim* GetOpenInventoryAnim() { return NativeCall<const FWeaponAnim*>(this, "AShooterWeapon.GetOpenInventoryAnim()"); }
	void ConsumeStamina(float StaminaConsumption) { NativeCall<void, float>(this, "AShooterWeapon.ConsumeStamina(float)", StaminaConsumption); }
	bool GetAimOffsets(float DeltaTime, UE::Math::TRotator<double>& RootRotOffset, float& RootYawSpeed, float MaxYawAimClamp, UE::Math::TVector<double>& RootLocOffset, UE::Math::TRotator<double>& CurrentAimRot, UE::Math::TVector<double>& CurrentRootLoc, UE::Math::TVector<double>& TargetRootLoc, UE::Math::TRotator<double>& TargetAimRot) { return NativeCall<bool, float, UE::Math::TRotator<double>&, float&, float, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, UE::Math::TVector<double>&, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AShooterWeapon.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, CurrentAimRot, CurrentRootLoc, TargetRootLoc, TargetAimRot); }
	static void GetbCanAccessoryBeSetOn_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetbCanAccessoryBeSetOn_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetMeleeSwingInteractionRadius() { return NativeCall<float>(this, "AShooterWeapon.GetMeleeSwingInteractionRadius()"); }
	void BPAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterWeapon.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void UpdateAmmoReloadState() { NativeCall<void>(this, "AShooterWeapon.UpdateAmmoReloadState()"); }
	static void GetbIsAccessoryActive_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetbIsAccessoryActive_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetAssociatedMission_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetAssociatedMission_WrapperImpl(void*,void*)", Object, InValue); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterWeapon.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool BPAllowNativeFireWeapon_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.BPAllowNativeFireWeapon_Implementation()"); }
	static void SetbIsAccessoryActive_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetbIsAccessoryActive_WrapperImpl(void*,void*)", Object, InValue); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "AShooterWeapon.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	void OnInstigatorSleepingStateChanged() { NativeCall<void>(this, "AShooterWeapon.OnInstigatorSleepingStateChanged()"); }
	void OnDurabilityChanged(float NewDurabilityPercent, bool bForceUpdate) { NativeCall<void, float, bool>(this, "AShooterWeapon.OnDurabilityChanged(float,bool)", NewDurabilityPercent, bForceUpdate); }
	void OnRep_WeaponDurabilityPercent() { NativeCall<void>(this, "AShooterWeapon.OnRep_WeaponDurabilityPercent()"); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "AShooterWeapon.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	bool BPTryFireWeapon_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.BPTryFireWeapon_Implementation()"); }
	float PlayWeaponAnimationEx_v2(const FWeaponAnim& Animation, UAnimMontage* Weapon3pAnimMontage, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, const FWeaponAnim&, UAnimMontage*, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimationEx_v2(FWeaponAnim&,UAnimMontage*,float,bool,bool,bool,bool,bool,bool)", Animation, Weapon3pAnimMontage, InPlayRate, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	void ClearMeleeSwingHurtList() { NativeCall<void>(this, "AShooterWeapon.ClearMeleeSwingHurtList()"); }
	bool FindAndDamageNearbyHarvestingElements(UE::Math::TVector<double>* BoxCenter, UE::Math::TVector<double>* BoxExtent) { if (!BoxCenter) throw std::invalid_argument("Null native value parameter"); if (!BoxExtent) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterWeapon.FindAndDamageNearbyHarvestingElements(UE::Math::TVector<double>,UE::Math::TVector<double>)", *BoxCenter, *BoxExtent); }
	void BPPostSpawnMuzzleEffect(UParticleSystemComponent* NewMuzzlePSC) { NativeCall<void, UParticleSystemComponent*>(this, "AShooterWeapon.BPPostSpawnMuzzleEffect(UParticleSystemComponent*)", NewMuzzlePSC); }
	void OwnerSleepingStateChanged() { NativeCall<void>(this, "AShooterWeapon.OwnerSleepingStateChanged()"); }
	void OnFPVMeshForceRefreshTimer() { NativeCall<void>(this, "AShooterWeapon.OnFPVMeshForceRefreshTimer()"); }
	bool BPCanMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon.BPCanMeleeAttack()"); }
	bool BPHandleOutOfAmmo_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.BPHandleOutOfAmmo_Implementation()"); }
	int GetAmmoPerClip() { return NativeCall<int>(this, "AShooterWeapon.GetAmmoPerClip()"); }
	bool IsClimbing() { return NativeCall<bool>(this, "AShooterWeapon.IsClimbing()"); }
	float GetMeleeSwingRadius() { return NativeCall<float>(this, "AShooterWeapon.GetMeleeSwingRadius()"); }
	void PreApplyAccumulatedForces(float DeltaSeconds, UE::Math::TVector<double>& PendingImpulseToApply, UE::Math::TVector<double>& PendingForceToApply) { NativeCall<void, float, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "AShooterWeapon.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", DeltaSeconds, PendingImpulseToApply, PendingForceToApply); }
	void NetSetLastAttackMontage(int Index) { NativeCall<void, int>(this, "AShooterWeapon.NetSetLastAttackMontage(int)", Index); }
	float GetTimeBetweenShots() { return NativeCall<float>(this, "AShooterWeapon.GetTimeBetweenShots()"); }
	void ForceMeshUpdate(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon.ForceMeshUpdate(bool)", bIsFirstPerson); }
	UPrimalCameraConfig_WeaponOverride* GetWeaponCameraSettingsOverride() { return NativeCall<UPrimalCameraConfig_WeaponOverride*>(this, "AShooterWeapon.GetWeaponCameraSettingsOverride()"); }
	bool IsPlayingWeaponAnimMontage(const FWeaponAnim& WeaponAnim, float TimeFromEndToConsiderFinished, bool bCheckOnlyFPV, bool bCheckOnlyTPV) { return NativeCall<bool, const FWeaponAnim&, float, bool, bool>(this, "AShooterWeapon.IsPlayingWeaponAnimMontage(FWeaponAnim&,float,bool,bool)", WeaponAnim, TimeFromEndToConsiderFinished, bCheckOnlyFPV, bCheckOnlyTPV); }
	static void GetAssociatedItemNetInfo_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetAssociatedItemNetInfo_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbCanAccessoryBeSetOn_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetbCanAccessoryBeSetOn_WrapperImpl(void*,void*)", Object, InValue); }
	void ForceUpdateClientAmmo() { NativeCall<void>(this, "AShooterWeapon.ForceUpdateClientAmmo()"); }
	static void SetWeaponDurabilityPercent_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetWeaponDurabilityPercent_WrapperImpl(void*,void*)", Object, InValue); }
	void SetMeleeHitActor(APrimalCharacter* HitActor) { NativeCall<void, APrimalCharacter*>(this, "AShooterWeapon.SetMeleeHitActor(APrimalCharacter*)", HitActor); }
	void BPOnWeaponAnimPlayedNotify(const FWeaponAnim& Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { NativeCall<void, const FWeaponAnim&, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.BPOnWeaponAnimPlayedNotify(FWeaponAnim&,float,bool,bool,bool,bool,bool,bool)", Animation, InPlayRate, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	bool IsMeleeSwingHurtListEmpty() { return NativeCall<bool>(this, "AShooterWeapon.IsMeleeSwingHurtListEmpty()"); }
	static void GetbNetLoopedSimulatingWeaponFire_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon.GetbNetLoopedSimulatingWeaponFire_WrapperImpl(void*,void*)", Object, OutValue); }
	float PlayWeaponAnimationEx(const FWeaponAnim& Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, const FWeaponAnim&, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimationEx(FWeaponAnim&,float,bool,bool,bool,bool,bool,bool)", Animation, InPlayRate, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	void ServerSetMeleeAnimIndex_Implementation(int SelectedMeleeAnim) { NativeCall<void, int>(this, "AShooterWeapon.ServerSetMeleeAnimIndex_Implementation(int)", SelectedMeleeAnim); }
	static void SetAssociatedItemNetInfo_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon.SetAssociatedItemNetInfo_WrapperImpl(void*,void*)", Object, InValue); }
	bool ValidateFire() { return NativeCall<bool>(this, "AShooterWeapon.ValidateFire()"); }
	USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "AShooterWeapon.GetSkeletalMeshComponent()"); }
	void BPOnBurstStarted() { NativeCall<void>(this, "AShooterWeapon.BPOnBurstStarted()"); }
	bool BPIsValidUnStasisCaster() { return NativeCall<bool>(this, "AShooterWeapon.BPIsValidUnStasisCaster()"); }
	void BPUpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon.BPUpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	USkeletalMeshComponent* GetWeaponMesh() { return NativeCall<USkeletalMeshComponent*>(this, "AShooterWeapon.GetWeaponMesh()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon"); }
};