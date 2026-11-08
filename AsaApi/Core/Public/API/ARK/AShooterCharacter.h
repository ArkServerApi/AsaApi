#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct AShooterCharacter : APrimalCharacter
{
	// Fields

	FTimerHandle& OnReloadHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.OnReloadHandle"); }
	UParticleSystemComponent*& ListenServerBoundsPSCField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterCharacter.ListenServerBoundsPSC"); }
	FTimerHandle& FinishSpawnIntroHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.FinishSpawnIntroHandle"); }
	UAnimMontage*& SpawnIntroAnim1PField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.SpawnIntroAnim1P"); }
	UAnimMontage*& RespawnIntroAnim1PField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.RespawnIntroAnim1P"); }
	UAnimMontage*& ProneInAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.ProneInAnim"); }
	UAnimMontage*& ProneOutAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.ProneOutAnim"); }
	UAnimMontage*& StartRidingAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.StartRidingAnim"); }
	UAnimMontage*& StopRidingAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.StopRidingAnim"); }
	UAnimMontage*& TalkingAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.TalkingAnim"); }
	UAnimMontage*& VoiceTalkingAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.VoiceTalkingAnim"); }
	TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >& EmoteAnimsField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.EmoteAnims"); }
	UAnimMontage*& FireBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.FireBallistaAnimation"); }
	UAnimMontage*& ReloadBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.ReloadBallistaAnimation"); }
	UAnimMontage*& DraggingCharacterAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.DraggingCharacterAnim"); }
	
	int& CurrentVoiceModeField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.CurrentVoiceMode"); }
	//TDelegate<void __cdecl(TSharedRef<FUniqueNetId const, 1>, bool), FDefaultDelegateUserPolicy>& OnPlayerTalkingStateChangedDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(TSharedRef<FUniqueNetId const, 1>, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterCharacter.OnPlayerTalkingStateChangedDelegate"); }
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bIsPreviewCharacterField();
	long double& DontTargetUntilTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.DontTargetUntilTime"); }
	float& OriginalCollisionHeightField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.OriginalCollisionHeight"); }
	float& WalkBobMagnitudeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobMagnitude"); }
	float& WalkBobInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobInterpSpeed"); }
	
	
	
	float& TargetingTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.TargetingTime"); }
	
	
	
	long double& LastCheckSevenField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSeven"); }
	long double& LastCheckSevenHitField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSevenHit"); }
	long double& LastCheckSevenTransmissionField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSevenTransmission"); }
	long double& LastValidCheckSevenField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastValidCheckSeven"); }
	long double& LastCheckSevenTeleportField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSevenTeleport"); }
	UE::Math::TVector<double>& LastCheckSevenLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.LastCheckSevenLocation"); }
	LocationQueue& PreviousValidLocationsField() { return *GetNativePointerField<LocationQueue*>(this, "AShooterCharacter.PreviousValidLocations"); }
	
	TSubclassOf<AShooterWeapon>& OverrideDefaultWeaponField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "AShooterCharacter.OverrideDefaultWeapon"); }
	
	
	
	TWeakObjectPtr<APrimalStructureLadder>& ClimbingLadderField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureLadder>*>(this, "AShooterCharacter.ClimbingLadder"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlayerName"); }
	TWeakObjectPtr<APrimalDinoCharacter>& RidingDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "AShooterCharacter.RidingDino"); }
	USkeletalMeshComponent*& Mesh1PField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.Mesh1P"); }
	
	//UPhysicsAsset*& FPVCameraAnimationPhysicsAssetField() { return *GetNativePointerField<UPhysicsAsset**>(this, "AShooterCharacter.FPVCameraAnimationPhysicsAsset"); }
	
	
	
	
	USkeletalMeshComponent*& SurvivorProfilePreviewMeshField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.SurvivorProfilePreviewMesh"); }
	UE::Math::TRotator<double>& LastDinoAimRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterCharacter.LastDinoAimRotationOffset"); }
	UE::Math::TRotator<double>& LastAimRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterCharacter.LastAimRotOffset"); }
	APrimalProjectileBoomerang*& LastFiredBoomerangField() { return *GetNativePointerField<APrimalProjectileBoomerang**>(this, "AShooterCharacter.LastFiredBoomerang"); }
	APrimalProjectileGrapplingHook*& LastFiredGrapHookField() { return *GetNativePointerField<APrimalProjectileGrapplingHook**>(this, "AShooterCharacter.LastFiredGrapHook"); }
	UPrimalCableComponent*& GrapplingHookCableField() { return *GetNativePointerField<UPrimalCableComponent**>(this, "AShooterCharacter.GrapplingHookCable"); }
	UAudioComponent*& LastGrapHookACField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.LastGrapHookAC"); }
	int& _GrapHookCableObjectCountField() { return *GetNativePointerField<int*>(this, "AShooterCharacter._GrapHookCableObjectCount"); }
	
	
	
	
	float& GrapHookPulledRopeDistanceField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookPulledRopeDistance"); }
	float& GrapHookSyncTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookSyncTime"); }
	long double& LastTimeDestroyedWeaponField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeDestroyedWeapon"); }
	FName& SplitScreenCameraStyleOverrideField() { return *GetNativePointerField<FName*>(this, "AShooterCharacter.SplitScreenCameraStyleOverride"); }
	FString& PlatformProfileNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlatformProfileName"); }
	FUniqueNetIdRepl& PlatformProfileIDField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "AShooterCharacter.PlatformProfileID"); }
	//TArray<FPlayerStatusStateCharacterSound, TSizedDefaultAllocator<32> >& CharacterStatusStateSoundsField() { return *GetNativePointerField<TArray<FPlayerStatusStateCharacterSound, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.CharacterStatusStateSounds"); }
	UAudioComponent*& CharacterStatusStateSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.CharacterStatusStateSoundComponent"); }
	long double& LastUncrouchTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUncrouchTime"); }
	long double& LastUnproneTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUnproneTime"); }
	long double& LastTimeStartedCrouchOrProneTransitionField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeStartedCrouchOrProneTransition"); }
	float& CurrentWeaponBobSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentWeaponBobSpeed"); }
	float& WalkBobOldSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobOldSpeed"); }
	float& AppliedBobField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.AppliedBob"); }
	float& BobTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.BobTime"); }
	long double& LastPressReloadTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastPressReloadTime"); }
	long double& LastReleaseReloadTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastReleaseReloadTime"); }
	long double& LastReloadToggledAccessoryTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastReloadToggledAccessoryTime"); }
	long double& lastSubmergedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.lastSubmergedTime"); }
	//TSubclassOf<UAnimInstance>& DefaultTPVAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "AShooterCharacter.DefaultTPVAnimBlueprint"); }
	
	
	
	
	
	
	
	
	
	
	UAudioComponent*& LowHealthWarningPlayerField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.LowHealthWarningPlayer"); }
	FItemNetID& NextWeaponItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.NextWeaponItemID"); }
	float& WeaponBobTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobTime"); }
	float& CurrentAimBlendingField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentAimBlending"); }
	long double& InterpLastCrouchProneStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.InterpLastCrouchProneStateChangeTime"); }
	
	UE::Math::TVector<double>& WeaponBobMagnitudesField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.WeaponBobMagnitudes"); }
	UE::Math::TVector<double>& WeaponBobPeriodsField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.WeaponBobPeriods"); }
	UE::Math::TVector<double>& WeaponBobOffsetsField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.WeaponBobOffsets"); }
	UE::Math::TVector<double>& WeaponBobMagnitudes_TargetingField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.WeaponBobMagnitudes_Targeting"); }
	UE::Math::TVector<double>& WeaponBobPeriods_TargetingField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.WeaponBobPeriods_Targeting"); }
	UE::Math::TVector<double>& WeaponBobOffsets_TargetingField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.WeaponBobOffsets_Targeting"); }
	float& WeaponBobMinimumSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobMinimumSpeed"); }
	float& WeaponBobSpeedBaseField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobSpeedBase"); }
	float& WeaponBobSpeedBaseFallingField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobSpeedBaseFalling"); }
	float& WeaponBobTargetingBlendField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobTargetingBlend"); }
	TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >& DefaultAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.DefaultAttachmentInfos"); }
	
	
	
	
	TSubclassOf<AShooterWeapon>& NextInventoryWeaponField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "AShooterCharacter.NextInventoryWeapon"); }
	FItemNetID& PreMapWeaponItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreMapWeaponItemNetID"); }
	FItemNetID& CurrentWeaponItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.CurrentWeaponItemID"); }
	float& ServerSeatedViewRotationYawField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ServerSeatedViewRotationYaw"); }
	float& ServerSeatedViewRotationPitchField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ServerSeatedViewRotationPitch"); }
	AShooterWeapon*& CurrentWeaponField() { return *GetNativePointerField<AShooterWeapon**>(this, "AShooterCharacter.CurrentWeapon"); }
	FTimerHandle& GiveDefaultWeaponTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.GiveDefaultWeaponTimerHandle"); }
	
	unsigned __int64& LinkedPlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterCharacter.LinkedPlayerDataID"); }
	FTimerHandle& FinishWeaponSwitchHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.FinishWeaponSwitchHandle"); }
	long double& LastTimeInFallingField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeInFalling"); }
	long double& StartedRidingTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.StartedRidingTime"); }
	long double& TimeSinceLastControllerField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.TimeSinceLastController"); }
	TWeakObjectPtr<AController>& LastControllerField() { return *GetNativePointerField<TWeakObjectPtr<AController>*>(this, "AShooterCharacter.LastController"); }
	TWeakObjectPtr<AShooterPlayerController>& LastValidPlayerControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "AShooterCharacter.LastValidPlayerController"); }
	UAnimMontage*& DrinkingAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "AShooterCharacter.DrinkingAnimation"); }
	long double& LastRequestedTribeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastRequestedTribeTime"); }
	int& LastRequestedTribeIDField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastRequestedTribeID"); }
	FString& LastRequestedTribeNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.LastRequestedTribeName"); }
	TWeakObjectPtr<AShooterCharacter>& LastRequestedTribePlayerCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "AShooterCharacter.LastRequestedTribePlayerCharacter"); }
	
	
	float& IndoorCheckIntervalField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.IndoorCheckInterval"); }
	long double& LastIndoorCheckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastIndoorCheckTime"); }
	FItemNetID& PreRidingWeaponItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreRidingWeaponItemNetID"); }
	FItemNetID& PreInventoryWeaponItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreInventoryWeaponItemNetID"); }
	TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >& OverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.OverrideAnimBlueprints"); }
	
	
	
	
	
	
	
	
	
	
	long double& ForceSleepRagdollUntilTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.ForceSleepRagdollUntilTime"); }
	FSaddlePassengerSeatDefinition& CurrentPassengerSeatDefinitionField() { return *GetNativePointerField<FSaddlePassengerSeatDefinition*>(this, "AShooterCharacter.CurrentPassengerSeatDefinition"); }
	TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >& AnimsOverrideFromField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.AnimsOverrideFrom"); }
	TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >& AnimOverrideToField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UAnimMontage>, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.AnimOverrideTo"); }
	TArray<TSoftObjectPtr<UAnimSequence>, TSizedDefaultAllocator<32> >& AnimSequencesOverrideFromField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UAnimSequence>, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.AnimSequencesOverrideFrom"); }
	TArray<TSoftObjectPtr<UAnimSequence>, TSizedDefaultAllocator<32> >& AnimSequenceOverrideToField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UAnimSequence>, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.AnimSequenceOverrideTo"); }
	float& PreviousRootYawSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.PreviousRootYawSpeed"); }
	FieldArray<FLinearColor, 4> BodyColorsField() { return { this, "AShooterCharacter.BodyColors" }; }
	unsigned __int8& HeadHairIndexField() { return *GetNativePointerField<unsigned __int8*>(this, "AShooterCharacter.HeadHairIndex"); }
	FieldArray<float, 26> RawBoneModifiersField() { return { this, "AShooterCharacter.RawBoneModifiers" }; }
	TArray<FBoneModifier, TSizedDefaultAllocator<32> >& BoneModifiersField() { return *GetNativePointerField<TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.BoneModifiers"); }
	TArray<FBoneModifier, TSizedDefaultAllocator<32> >& BoneModifiers_FemaleField() { return *GetNativePointerField<TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.BoneModifiers_Female"); }
	FieldArray<unsigned __int8, 50> DynamicMaterialBytesField() { return { this, "AShooterCharacter.DynamicMaterialBytes" }; }
	FieldArray<unsigned __int8, 4> DynamicOverrideHairDyeBytesField() { return { this, "AShooterCharacter.DynamicOverrideHairDyeBytes" }; }
	UPrimaryDataAsset*& Player_Voice_CollectionField() { return *GetNativePointerField<UPrimaryDataAsset**>(this, "AShooterCharacter.Player_Voice_Collection"); }
	
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastAttackTime"); }
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bWasLocallyControlledField();
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bWasLocalPossessedByControlledField();
	unsigned int& UniqueNetIdTypeHashField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.UniqueNetIdTypeHash"); }
	unsigned int& SplitscreenMainPlayerUniqueNetIdTypeHashField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.SplitscreenMainPlayerUniqueNetIdTypeHash"); }
	long double& LastUseHarvestTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUseHarvestTime"); }
	long double& StopRidingTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.StopRidingTime"); }
	
	
	
	long double& LocalLastViewingInventoryTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocalLastViewingInventoryTime"); }
	UE::Math::TVector<double>& LastStasisCastPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.LastStasisCastPosition"); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& OldItemSlotsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.OldItemSlots"); }
	FTimerHandle& RequestFastInventoryHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.RequestFastInventoryHandle"); }
	int& FastInventoryLastIndexField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.FastInventoryLastIndex"); }
	int& FastInventoryLastMaxRowField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.FastInventoryLastMaxRow"); }
	int& FastInventoryQuantitySlotsField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.FastInventoryQuantitySlots"); }
	FString& CustomFolderFastInventoryField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.CustomFolderFastInventory"); }
	long double& SavedLastTimeHadControllerField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.SavedLastTimeHadController"); }
	long double& LastTimeHadControllerField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeHadController"); }
	float& LastTaggedTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastTaggedTime"); }
	float& LastTaggedTimeExtraField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastTaggedTimeExtra"); }
	float& LastTaggedTimeThirdField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastTaggedTimeThird"); }
	float& ExtraFloatVarField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ExtraFloatVar"); }
	UE::Math::TVector<double>& ExtraVectorVarField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.ExtraVectorVar"); }
	UE::Math::TVector<double>& ExtraExtraVectorVarField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.ExtraExtraVectorVar"); }
	FName& ExtraNameVarField() { return *GetNativePointerField<FName*>(this, "AShooterCharacter.ExtraNameVar"); }
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bIsControllingBallistaField();
	float& CurrentControlledBallistaYawField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentControlledBallistaYaw"); }
	TWeakObjectPtr<APrimalStructureSeating>& SeatingStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureSeating>*>(this, "AShooterCharacter.SeatingStructure"); }
	int& SeatingStructureSeatNumberField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.SeatingStructureSeatNumber"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// long double& NextPlayerUndergroundCheckField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& PlayerNumUnderGroundFailField();
	float& LastSweepCapsuleHeightField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastSweepCapsuleHeight"); }
	float& LastSweepCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastSweepCapsuleRadius"); }
	
	float& ClientSeatedViewRotationPitchField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ClientSeatedViewRotationPitch"); }
	float& ClientSeatedViewRotationYawField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ClientSeatedViewRotationYaw"); }
	long double& LastReleaseSeatingStructureTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastReleaseSeatingStructureTime"); }
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bShouldInvertTurnInputField();
	TWeakObjectPtr<APrimalCharacter>& LastGrappledToCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "AShooterCharacter.LastGrappledToCharacter"); }
	TWeakObjectPtr<APrimalCharacter>& CurrentGrappledToCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "AShooterCharacter.CurrentGrappledToCharacter"); }
	int& AllianceInviteRequestingTeamField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.AllianceInviteRequestingTeam"); }
	unsigned int& AllianceInviteIDField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.AllianceInviteID"); }
	FString& AllianceInviteNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.AllianceInviteName"); }
	long double& AllianceInviteTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.AllianceInviteTime"); }
	
	
	
	long double& LastUpdatedAimActorsTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUpdatedAimActorsTime"); }
	UE::Math::TVector<double>& UpdateHyperThermalInsulationPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.UpdateHyperThermalInsulationPosition"); }
	UE::Math::TVector<double>& UpdateHypoThermalInsulationPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.UpdateHypoThermalInsulationPosition"); }
	long double& NextUpdateHyperThermalInsulationTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.NextUpdateHyperThermalInsulationTime"); }
	long double& NextUpdateHypoThermalInsulationTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.NextUpdateHypoThermalInsulationTime"); }
	float& LastAdditionalHypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastAdditionalHypoThermalInsulation"); }
	float& LastAdditionalHyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastAdditionalHyperThermalInsulation"); }
	float& WaterLossRateMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WaterLossRateMultiplier"); }
	
	long double& LastTryAccessInventoryFailTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTryAccessInventoryFailTime"); }
	long double& LastEmotePlayTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastEmotePlayTime"); }
	USkeletalMeshComponent*& HeadHairComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.HeadHairComponent"); }
	USkeletalMeshComponent*& FacialHairComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.FacialHairComponent"); }
	USkeletalMeshComponent*& EyebrowsComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.EyebrowsComponent"); }
	USkeletalMeshComponent*& EyelashesComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterCharacter.EyelashesComponent"); }
	
	
	float& PercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.PercentOfFullFacialHairGrowth"); }
	float& PercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.PercentOfFullHeadHairGrowth"); }
	FLinearColor& OriginalHairColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterCharacter.OriginalHairColor"); }
	//FShooterCharacterPostUpdateTickFunction& PostUpdateTickField() { return *GetNativePointerField<FShooterCharacterPostUpdateTickFunction*>(this, "AShooterCharacter.PostUpdateTick"); }
	long double& LastEmoteTryPlayTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastEmoteTryPlayTime"); }
	int& IgnoreCollisionSweepUntilFrameNumberField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.IgnoreCollisionSweepUntilFrameNumber"); }
	float& ReplicatedWeightField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ReplicatedWeight"); }
	long double& LastPoopTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastPoopTime"); }
	UParticleSystemComponent*& LocalCorpseEmitterField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterCharacter.LocalCorpseEmitter"); }
	long double& LocalDiedAtTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocalDiedAtTime"); }
	long double& LastNotStuckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastNotStuckTime"); }
	
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.UploadEarliestValidTime"); }
	long double& LastCollisionStuckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCollisionStuckTime"); }
	int& SimulatedLastFrameProcessedForceUpdateAimedActorsField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.SimulatedLastFrameProcessedForceUpdateAimedActors"); }
	TWeakObjectPtr<AController>& SpawnedForControllerField() { return *GetNativePointerField<TWeakObjectPtr<AController>*>(this, "AShooterCharacter.SpawnedForController"); }
	UParticleSystemComponent*& JunctionLinkCableParticleField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterCharacter.JunctionLinkCableParticle"); }
	UE::Math::TVector<double>& OriginalLastHitWallSweepCheckLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.OriginalLastHitWallSweepCheckLocation"); }
	int& LastCapsuleAttachmentChangedIncrementField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastCapsuleAttachmentChangedIncrement"); }
	int& LastMeshAttachmentChangedIncrementField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastMeshAttachmentChangedIncrement"); }
	int& LastCameraAttachmentChangedIncrementField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastCameraAttachmentChangedIncrement"); }
	TEnumAsByte<enum EPrimalStatsValueTypes::Type>& BestInstantShotResultField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalStatsValueTypes::Type>*>(this, "AShooterCharacter.BestInstantShotResult"); }
	TWeakObjectPtr<APrimalStructure>& CurrentItemBalloonField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure>*>(this, "AShooterCharacter.CurrentItemBalloon"); }
	FWeaponEvent& NotifyWeaponUnequippedField() { return *GetNativePointerField<FWeaponEvent*>(this, "AShooterCharacter.NotifyWeaponUnequipped"); }
	FWeaponEvent& NotifyWeaponEquippedField() { return *GetNativePointerField<FWeaponEvent*>(this, "AShooterCharacter.NotifyWeaponEquipped"); }
	FWeaponEvent& NotifyWeaponFiredField() { return *GetNativePointerField<FWeaponEvent*>(this, "AShooterCharacter.NotifyWeaponFired"); }
	FWeaponEvent& NotifyOnWeaponEquipField() { return *GetNativePointerField<FWeaponEvent*>(this, "AShooterCharacter.NotifyOnWeaponEquip"); }
	int& PlayerHexagonCountField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.PlayerHexagonCount"); }
	int& DefaultHexagonAmountEarnedOnMissionCompletionField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultHexagonAmountEarnedOnMissionCompletion"); }
	float& fAutoMoveField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.fAutoMove"); }
	float& fAutoStrafeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.fAutoStrafe"); }
	float& fAutoTurnField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.fAutoTurn"); }
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bAutoFireField();
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bAutoProneField();
	FTimerHandle& AutoPlayerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.AutoPlayerHandle"); }
	FTimerHandle& AutoMoveHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.AutoMoveHandle"); }
	FTimerHandle& AutoTurnHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.AutoTurnHandle"); }
	FTimerHandle& AutoJumpHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.AutoJumpHandle"); }
	FTimerHandle& AutoFireHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.AutoFireHandle"); }
	float& MeshHeightAdjustmentField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.MeshHeightAdjustment"); }
	float& BuffExtraDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.BuffExtraDamageMultiplier"); }
	FTimerHandle& UnlockHeadPositionHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.UnlockHeadPositionHandle"); }
	FTimerHandle& ForceStreamComponentsHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.ForceStreamComponentsHandle"); }
	unsigned int& ExpectedBaseIDField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.ExpectedBaseID"); }
	long double& LastExpectedBaseTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastExpectedBaseTime"); }
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bBlockSpawnIntroField();
	TWeakObjectPtr<APrimalDinoCharacter>& SavedRidingDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "AShooterCharacter.SavedRidingDino"); }
	UAudioComponent*& DialogueSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterCharacter.DialogueSoundComponent"); }
	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& CachedPlayerMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.CachedPlayerMaterials"); }
	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& CachedAttachmentMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.CachedAttachmentMaterials"); }
	long double& CurrentShadowOpactiyField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.CurrentShadowOpactiy"); }
	long double& FPVShadowThresholdField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.FPVShadowThreshold"); }
	long double& FPVShadowFadeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.FPVShadowFade"); }
	UAnimationAsset*& ReplicatedSleepAnimField() { return *GetNativePointerField<UAnimationAsset**>(this, "AShooterCharacter.ReplicatedSleepAnim"); }
	TSoftObjectPtr<UAnimationAsset>& SavedSleepAnimField() { return *GetNativePointerField<TSoftObjectPtr<UAnimationAsset>*>(this, "AShooterCharacter.SavedSleepAnim"); }
	
	
	
	TMap<int, AShooterProjectile*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, AShooterProjectile*, 0> >& FiredProjectilesCacheField() { return *GetNativePointerField<TMap<int, AShooterProjectile*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, AShooterProjectile*, 0> >*>(this, "AShooterCharacter.FiredProjectilesCache"); }
	long double& LastUpdatedLocallyInterpolatedViewLocationXField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUpdatedLocallyInterpolatedViewLocationX"); }
	long double& LocallyInterpolatedViewLocationXField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocallyInterpolatedViewLocationX"); }
	long double& LastUpdatedLocallyInterpolatedViewLocationYField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUpdatedLocallyInterpolatedViewLocationY"); }
	long double& LocallyInterpolatedViewLocationYField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocallyInterpolatedViewLocationY"); }
	long double& LastUpdatedLocallyInterpolatedViewLocationZField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUpdatedLocallyInterpolatedViewLocationZ"); }
	long double& LocallyInterpolatedViewLocationZField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocallyInterpolatedViewLocationZ"); }
	
	long double& LastTimeInThirdPersonField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeInThirdPerson"); }
	float& DefaultPercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.DefaultPercentOfFullHeadHairGrowth"); }
	int& DefaultHeadHairIndexField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultHeadHairIndex"); }
	float& DefaultPercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.DefaultPercentOfFullFacialHairGrowth"); }
	int& DefaultFacialHairIndexField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultFacialHairIndex"); }
	unsigned __int8& bIsPlayingSleepAnimField() { return *GetNativePointerField<unsigned __int8*>(this, "AShooterCharacter.bIsPlayingSleepAnim"); }
	long double& LastTimeDetectedSleepingAnimWhileAwakeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeDetectedSleepingAnimWhileAwake"); }
	
	
	float& TPVCameraExtraCollisionZOffsetField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.TPVCameraExtraCollisionZOffset"); }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& EquippedArmorDurabilityPercent3Field();
	float& EquippedArmorDurabilityPercent4Field() { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent4"); }
	float& EquippedArmorDurabilityPercent5Field() { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent5"); }
	float& EquippedArmorDurabilityPercent6Field() { return *GetNativePointerField<float*>(this, "AShooterCharacter.EquippedArmorDurabilityPercent6"); }
	unsigned int& bSetInitialControlPitchField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.bSetInitialControlPitch"); }
	long double& LastTimePushedField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimePushed"); }
	long double& LastTimeHadPreviousInterpolatedRootLocField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeHadPreviousInterpolatedRootLoc"); }
	UE::Math::TVector<double>& PreviousInterpolatedRootLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterCharacter.PreviousInterpolatedRootLoc"); }
	int& LastPushedDirectionField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastPushedDirection"); }
	float& VisualVelocitySizeWhenPushedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.VisualVelocitySizeWhenPushed"); }
	long double& LastPushedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastPushedTime"); }
	long double& LastTimeMulticastedAttachmentReplicationField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeMulticastedAttachmentReplication"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsTargeting() { return { this, "AShooterCharacter.bIsTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bIsCrafting() { return { this, "AShooterCharacter.bIsCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bIsRiding() { return { this, "AShooterCharacter.bIsRiding" }; }
	BitFieldValue<bool, unsigned __int32> bIsIndoors() { return { this, "AShooterCharacter.bIsIndoors" }; }
	BitFieldValue<bool, unsigned __int32> bIsClimbing() { return { this, "AShooterCharacter.bIsClimbing" }; }
	BitFieldValue<bool, unsigned __int32> bIsViewingInventory() { return { this, "AShooterCharacter.bIsViewingInventory" }; }
	BitFieldValue<bool, unsigned __int32> bUseAlternateFallBlendspace() { return { this, "AShooterCharacter.bUseAlternateFallBlendspace" }; }
	
	BitFieldValue<bool, unsigned __int32> bPlaySpawnAnim() { return { this, "AShooterCharacter.bPlaySpawnAnim" }; }
	BitFieldValue<bool, unsigned __int32> bPlayFirstSpawnAnim() { return { this, "AShooterCharacter.bPlayFirstSpawnAnim" }; }
	BitFieldValue<bool, unsigned __int32> bNoPhysics() { return { this, "AShooterCharacter.bNoPhysics" }; }
	BitFieldValue<bool, unsigned __int32> bPossessionDontUnsleep() { return { this, "AShooterCharacter.bPossessionDontUnsleep" }; }
	BitFieldValue<bool, unsigned __int32> bLastViewingInventory() { return { this, "AShooterCharacter.bLastViewingInventory" }; }
	BitFieldValue<bool, unsigned __int32> bPlayedSpawnIntro() { return { this, "AShooterCharacter.bPlayedSpawnIntro" }; }
	BitFieldValue<bool, unsigned __int32> bWasSubmerged() { return { this, "AShooterCharacter.bWasSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bCheckPushedThroughWallsWasSeatingStructure() { return { this, "AShooterCharacter.bCheckPushedThroughWallsWasSeatingStructure" }; }
	BitFieldValue<bool, unsigned __int32> bGaveInitialItems() { return { this, "AShooterCharacter.bGaveInitialItems" }; }
	BitFieldValue<bool, unsigned __int32> bReceivedGenesisSeasonPassItems() { return { this, "AShooterCharacter.bReceivedGenesisSeasonPassItems" }; }
	BitFieldValue<bool, unsigned __int32> bHadGrapHookAttachActor() { return { this, "AShooterCharacter.bHadGrapHookAttachActor" }; }
	BitFieldValue<bool, unsigned __int32> bAddedToActivePlayerList() { return { this, "AShooterCharacter.bAddedToActivePlayerList" }; }
	BitFieldValue<bool, unsigned __int32> bDrawHealthBar() { return { this, "AShooterCharacter.bDrawHealthBar" }; }
	
	
	BitFieldValue<bool, unsigned __int32> bDisableLookYaw() { return { this, "AShooterCharacter.bDisableLookYaw" }; }
	BitFieldValue<bool, unsigned __int32> bPlayingShieldCoverAnimation() { return { this, "AShooterCharacter.bPlayingShieldCoverAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bPlayingShieldCoverAnimationForCrouch() { return { this, "AShooterCharacter.bPlayingShieldCoverAnimationForCrouch" }; }
	
	BitFieldValue<bool, unsigned __int32> bWasFirstPerson() { return { this, "AShooterCharacter.bWasFirstPerson" }; }
	BitFieldValue<bool, unsigned __int32> bLastLocInterpProne() { return { this, "AShooterCharacter.bLastLocInterpProne" }; }
	BitFieldValue<bool, unsigned __int32> bLastLocInterpCrouched() { return { this, "AShooterCharacter.bLastLocInterpCrouched" }; }
	BitFieldValue<bool, unsigned __int32> bHatHidden() { return { this, "AShooterCharacter.bHatHidden" }; }
	BitFieldValue<bool, unsigned __int32> bBeganPlay() { return { this, "AShooterCharacter.bBeganPlay" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDPC() { return { this, "AShooterCharacter.bAllowDPC" }; }
	BitFieldValue<bool, unsigned __int32> bHadWeaponWhenStartedClimbingLadder() { return { this, "AShooterCharacter.bHadWeaponWhenStartedClimbingLadder" }; }
	BitFieldValue<bool, unsigned __int32> bIsConnected() { return { this, "AShooterCharacter.bIsConnected" }; }
	BitFieldValue<bool, unsigned __int32> bRefreshDefaultAttachmentsHadEquippedItems() { return { this, "AShooterCharacter.bRefreshDefaultAttachmentsHadEquippedItems" }; }
	BitFieldValue<bool, unsigned __int32> bHasShooterCharacterTicked() { return { this, "AShooterCharacter.bHasShooterCharacterTicked" }; }
	BitFieldValue<bool, unsigned __int32> bLockedToSeatingStructure() { return { this, "AShooterCharacter.bLockedToSeatingStructure" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAllWeapons() { return { this, "AShooterCharacter.bPreventAllWeapons" }; }
	BitFieldValue<bool, unsigned __int32> bForceBuffAimOverride() { return { this, "AShooterCharacter.bForceBuffAimOverride" }; }
	BitFieldValue<bool, unsigned __int32> bIsHidingFPVMesh() { return { this, "AShooterCharacter.bIsHidingFPVMesh" }; }
	BitFieldValue<bool, unsigned __int32> bHideFloatingHUD() { return { this, "AShooterCharacter.bHideFloatingHUD" }; }
	BitFieldValue<bool, unsigned __int32> bForceDrawHUD() { return { this, "AShooterCharacter.bForceDrawHUD" }; }
	BitFieldValue<bool, unsigned __int32> bForceSeatingAnim() { return { this, "AShooterCharacter.bForceSeatingAnim" }; }
	BitFieldValue<bool, unsigned __int32> bIsPressingRunning() { return { this, "AShooterCharacter.bIsPressingRunning" }; }
	
	BitFieldValue<bool, unsigned __int32> bDebugCheckDinoPawnsOctree() { return { this, "AShooterCharacter.bDebugCheckDinoPawnsOctree" }; }
	BitFieldValue<bool, unsigned __int32> bUseDefaultWeaponWhenOpeningInventory() { return { this, "AShooterCharacter.bUseDefaultWeaponWhenOpeningInventory" }; }
	BitFieldValue<bool, unsigned __int32> bNeedsHairOrBodyUpdate() { return { this, "AShooterCharacter.bNeedsHairOrBodyUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bSKDynamicMatsHaveBeenRecentlyChangedAndNeedUpdatingOnTheAnimbp() { return { this, "AShooterCharacter.bSKDynamicMatsHaveBeenRecentlyChangedAndNeedUpdatingOnTheAnimbp" }; }

	// Functions

	// Unavailable in UE 5.8.3: dependent class factory unavailable
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterCharacter"); }
	void ClientNetEndClimbingLadder() { NativeCall<void>(this, "AShooterCharacter.ClientNetEndClimbingLadder()"); }
	void DetachFromLadder() { NativeCall<void>(this, "AShooterCharacter.DetachFromLadder()"); }
	void DetachGrapHookCable() { NativeCall<void>(this, "AShooterCharacter.DetachGrapHookCable()"); }
	void GameStateHandleEvent(FName NameParam, UE::Math::TVector<double>* VecParam) { NativeCall<void, FName, UE::Math::TVector<double>*>(this, "AShooterCharacter.GameStateHandleEvent(FName,UE::Math::TVector<double>)", NameParam, VecParam); }
	bool IsPlayingUpperBodyCallAnimation() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingUpperBodyCallAnimation()"); }
	void NetSetFacialHairPercent(float thePercent, int newFacialHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetFacialHairPercent(float,int,__int64)", thePercent, newFacialHairIndex); }
	void NetSetHeadHairPercent(float thePercent, int newHeadHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetHeadHairPercent(float,int,__int64)", thePercent, newHeadHairIndex); }
	void RenamePlayer(const FString* NewName) { NativeCall<void, const FString*>(this, "AShooterCharacter.RenamePlayer(FString&)", NewName); }
	void ServerDetachGrapHookCable(bool bDoUpwardsJump, float UpwardsJumpYaw) { NativeCall<void, bool, float>(this, "AShooterCharacter.ServerDetachGrapHookCable(bool,float)", bDoUpwardsJump, UpwardsJumpYaw); }
	void ServerPlayFireBallistaAnimation() { NativeCall<void>(this, "AShooterCharacter.ServerPlayFireBallistaAnimation()"); }
	void ServerSeatingStructureAction(unsigned __int8 ActionNumber) { NativeCall<void, unsigned __int8>(this, "AShooterCharacter.ServerSeatingStructureAction(unsignedchar)", ActionNumber); }
	void ServerSetBallistaNewRotation(float Pitch, float Yaw) { NativeCall<void, float, float>(this, "AShooterCharacter.ServerSetBallistaNewRotation(float,float)", Pitch, Yaw); }
	void ServerSetViewingInventory(bool bIsViewing, bool bMulticast) { NativeCall<void, bool, bool>(this, "AShooterCharacter.ServerSetViewingInventory(bool,bool)", bIsViewing, bMulticast); }
	void ServerStartSurfaceCameraForPassenger(float yaw, float pitch, float roll, bool bShouldInvertInput) { NativeCall<void, float, float, float, bool>(this, "AShooterCharacter.ServerStartSurfaceCameraForPassenger(float,float,float,bool)", yaw, pitch, roll, bShouldInvertInput); }
	void ServerStopFireBallista() { NativeCall<void>(this, "AShooterCharacter.ServerStopFireBallista()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterCharacter();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterCharacter"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "AShooterCharacter.Serialize(FStructuredArchiveRecord)", Record); }
	unsigned int GetUniqueNetIdTypeHash() { return NativeCall<unsigned int>(this, "AShooterCharacter.GetUniqueNetIdTypeHash()"); }
	bool IsVoiceWhispering() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceWhispering()"); }
	bool IsVoiceYelling() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceYelling()"); }
	bool IsVoiceSilent() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceSilent()"); }
	bool IsRider() { return NativeCall<bool>(this, "AShooterCharacter.IsRider()"); }
	bool IsSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "AShooterCharacter.IsSitting(bool)", bIgnoreLockedToSeat); }
	bool IsProneOrSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "AShooterCharacter.IsProneOrSitting(bool)", bIgnoreLockedToSeat); }
	void EmitPoop() { NativeCall<void>(this, "AShooterCharacter.EmitPoop()"); }
	unsigned __int64 GetLinkedPlayerDataID() { return NativeCall<unsigned __int64>(this, "AShooterCharacter.GetLinkedPlayerDataID()"); }
	bool IsVoiceTalking() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceTalking()"); }
	bool BuffsPreventFirstPerson() { return NativeCall<bool>(this, "AShooterCharacter.BuffsPreventFirstPerson()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterCharacter.PostInitializeComponents()"); }
	void AuthPostSpawnInit() { NativeCall<void>(this, "AShooterCharacter.AuthPostSpawnInit()"); }
	//     void CheckFallFromLadder() { NativeCall<void>(this, "AShooterCharacter.CheckFallFromLadder()"); }
	// FUNCTION MISSING: AShooterCharacter.CheckFallFromLadder()
	void Destroyed() { NativeCall<void>(this, "AShooterCharacter.Destroyed()"); }
	void OnRep_RawBoneModifiers() { NativeCall<void>(this, "AShooterCharacter.OnRep_RawBoneModifiers()"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterCharacter.BeginPlay()"); }
	void DoSetActorLocation(const UE::Math::TVector<double>* NewLocation) { NativeCall<void, const UE::Math::TVector<double>*>(this, "AShooterCharacter.DoSetActorLocation(UE::Math::TVector<double>&,ETeleportType)", NewLocation); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void PlaySpawnAnim();
	void ClearSpawnAnim() { NativeCall<void>(this, "AShooterCharacter.ClearSpawnAnim()"); }
	void PlayJumpAnim() { NativeCall<void>(this, "AShooterCharacter.PlayJumpAnim()"); }
	void PlayLandedAnim() { NativeCall<void>(this, "AShooterCharacter.PlayLandedAnim()"); }
	void DedicatedServerBoneFixup() { NativeCall<void>(this, "AShooterCharacter.DedicatedServerBoneFixup()"); }
	void ControllerLeavingGame(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController*>(this, "AShooterCharacter.ControllerLeavingGame(AShooterPlayerController*)", theController); }
	void ModifyFirstPersonCameraLocation(UE::Math::TVector<double>* Loc, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "AShooterCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)", Loc, DeltaTime); }
	void PossessedBy(AController* InController) { NativeCall<void, AController*>(this, "AShooterCharacter.PossessedBy(AController*)", InController); }
	void LocalPossessedBy(APlayerController* ByController) { NativeCall<void, APlayerController*>(this, "AShooterCharacter.LocalPossessedBy(APlayerController*)", ByController); }
	void ForceStreamComponents() { NativeCall<void>(this, "AShooterCharacter.ForceStreamComponents()"); }
	void DoForceStreamComponents(bool bFirstPerson, bool bForceMaxTexturesOnConsole) { NativeCall<void, bool, bool>(this, "AShooterCharacter.DoForceStreamComponents(bool,bool)", bFirstPerson, bForceMaxTexturesOnConsole); }
	void OnRep_PlayerState() { NativeCall<void>(this, "AShooterCharacter.OnRep_PlayerState()"); }
	void ServerDetachGrapHookCable_Implementation(bool bDoUpwardsJump, float UpwardsJumpYaw) { NativeCall<void, bool, float>(this, "AShooterCharacter.ServerDetachGrapHookCable_Implementation(bool,float)", bDoUpwardsJump, UpwardsJumpYaw); }
	void ServerReleaseGrapHookCable_Implementation(bool bReleasing) { NativeCall<void, bool>(this, "AShooterCharacter.ServerReleaseGrapHookCable_Implementation(bool)", bReleasing); }
	void DetachGrapHookCable_Implementation() { NativeCall<void>(this, "AShooterCharacter.DetachGrapHookCable_Implementation()"); }
	void SyncGrapHookDistance_Implementation(float Distance) { NativeCall<void, float>(this, "AShooterCharacter.SyncGrapHookDistance_Implementation(float)", Distance); }
	void UpdateGrapHook(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.UpdateGrapHook(float)", DeltaSeconds); }
	void SetCarriedPitchYaw_Implementation(float NewCarriedPitch, float NewCarriedYaw) { NativeCall<void, float, float>(this, "AShooterCharacter.SetCarriedPitchYaw_Implementation(float,float)", NewCarriedPitch, NewCarriedYaw); }
	void UpdatePawnMeshes(bool bForceThirdPerson, bool bForceFlush) { NativeCall<void, bool, bool>(this, "AShooterCharacter.UpdatePawnMeshes(bool,bool)", bForceThirdPerson, bForceFlush); }
	void OnCameraUpdate(const UE::Math::TVector<double>* CameraLocation, const UE::Math::TRotator<double>* CameraRotation) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "AShooterCharacter.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", CameraLocation, CameraRotation); }
	void ToggleWeapon() { NativeCall<void>(this, "AShooterCharacter.ToggleWeapon()"); }
	void GiveDefaultWeapon(bool bForceGiveDefaultWeapon) { NativeCall<void, bool>(this, "AShooterCharacter.GiveDefaultWeapon(bool)", bForceGiveDefaultWeapon); }
	void GiveMapWeapon() { NativeCall<void>(this, "AShooterCharacter.GiveMapWeapon()"); }
	void SwitchMap() { NativeCall<void>(this, "AShooterCharacter.SwitchMap()"); }
	bool PreventArmorSuitHUD() { return NativeCall<bool>(this, "AShooterCharacter.PreventArmorSuitHUD()"); }
	void DelayGiveDefaultWeapon(float DelayTime) { NativeCall<void, float>(this, "AShooterCharacter.DelayGiveDefaultWeapon(float)", DelayTime); }
	void ServerSwitchMap_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchMap_Implementation()"); }
	void ServerGiveDefaultWeapon_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerGiveDefaultWeapon_Implementation()"); }
	void GivePrimalItemWeapon(UPrimalItem* aPrimalItem) { NativeCall<void, UPrimalItem*>(this, "AShooterCharacter.GivePrimalItemWeapon(UPrimalItem*)", aPrimalItem); }
	AShooterWeapon* GivePrimalItemWeaponForMission(UPrimalItem* aPrimalItem, AMissionType* AssociatedMission) { return NativeCall<AShooterWeapon*, UPrimalItem*, AMissionType*>(this, "AShooterCharacter.GivePrimalItemWeaponForMission(UPrimalItem*,AMissionType*)", aPrimalItem, AssociatedMission); }
	bool CanStartWeaponSwitch(UPrimalItem* aPrimalItem) { return NativeCall<bool, UPrimalItem*>(this, "AShooterCharacter.CanStartWeaponSwitch(UPrimalItem*)", aPrimalItem); }
	void StartWeaponSwitch(UPrimalItem* aPrimalItem, bool bDontClearLastWeapon) { NativeCall<void, UPrimalItem*, bool>(this, "AShooterCharacter.StartWeaponSwitch(UPrimalItem*,bool)", aPrimalItem, bDontClearLastWeapon); }
	void FinishWeaponSwitch() { NativeCall<void>(this, "AShooterCharacter.FinishWeaponSwitch()"); }
	//     float GetMaxCursorHUDDistance(AShooterPlayerController* PC) { return NativeCall<float, AShooterPlayerController*>(this, "AShooterCharacter.GetMaxCursorHUDDistance(AShooterPlayerController*)", PC); }
	// FUNCTION MISSING: AShooterCharacter.GetMaxCursorHUDDistance(AShooterPlayerController*)
	bool IsSplitPlayer(int* SSIndex) { return NativeCall<bool, int*>(this, "AShooterCharacter.IsSplitPlayer(int*)", SSIndex); }
	void DrawFloatingHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "AShooterCharacter.DrawFloatingHUD(AShooterHUD*)", HUD); }
	void SetCurrentWeapon(AShooterWeapon* NewWeapon, AShooterWeapon* LastWeapon) { NativeCall<void, AShooterWeapon*, AShooterWeapon*>(this, "AShooterCharacter.SetCurrentWeapon(AShooterWeapon*,AShooterWeapon*)", NewWeapon, LastWeapon); }
	//TSubclassOf<UAnimInstance>* GetOverridenAnimBlueprint(TSubclassOf<UAnimInstance>* result, TSubclassOf<UAnimInstance> fromBPClass) { return NativeCall<TSubclassOf<UAnimInstance> *, TSubclassOf<UAnimInstance>*, TSubclassOf<UAnimInstance>>(this, "AShooterCharacter.GetOverridenAnimBlueprint(TSubclassOf<UAnimInstance>)", result, fromBPClass); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AShooterCharacter.Serialize(FArchive&)", Ar); }
	void ForceSleep() { NativeCall<void>(this, "AShooterCharacter.ForceSleep()"); }
	bool CanFire() { return NativeCall<bool>(this, "AShooterCharacter.CanFire()"); }
	void SetTargeting(bool bNewTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.SetTargeting(bool)", bNewTargeting); }
	void ServerSetTargeting_Implementation(bool bNewTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetTargeting_Implementation(bool)", bNewTargeting); }
	void ZoomIn() { NativeCall<void>(this, "AShooterCharacter.ZoomIn()"); }
	void ZoomOut() { NativeCall<void>(this, "AShooterCharacter.ZoomOut()"); }
	bool CanCrouch() { return NativeCall<bool>(this, "AShooterCharacter.CanCrouch()"); }
	bool ShouldBlockCrouch() { return NativeCall<bool>(this, "AShooterCharacter.ShouldBlockCrouch()"); }
	bool CanProne() { return NativeCall<bool>(this, "AShooterCharacter.CanProne()"); }
	void SetupPlayerInputComponent(UInputComponent* WithInputComponent) { NativeCall<void, UInputComponent*>(this, "AShooterCharacter.SetupPlayerInputComponent(UInputComponent*)", WithInputComponent); }
	void OnPressCrouch() { NativeCall<void>(this, "AShooterCharacter.OnPressCrouch()"); }
	void Crouch(bool bClientSimulation) { NativeCall<void, bool>(this, "AShooterCharacter.Crouch(bool)", bClientSimulation); }
	void Prone(bool bClientSimulation) { NativeCall<void, bool>(this, "AShooterCharacter.Prone(bool)", bClientSimulation); }
	void OnPressProne() { NativeCall<void>(this, "AShooterCharacter.OnPressProne()"); }
	void OnPressCrouchProneToggle() { NativeCall<void>(this, "AShooterCharacter.OnPressCrouchProneToggle()"); }
	void OnReleaseCrouchProneToggle() { NativeCall<void>(this, "AShooterCharacter.OnReleaseCrouchProneToggle()"); }
	void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>(this, "AShooterCharacter.OnEndCrouch(float,float)", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>(this, "AShooterCharacter.OnStartCrouch(float,float)", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void OnStartFire() { NativeCall<void>(this, "AShooterCharacter.OnStartFire()"); }
	void OnStopFire() { NativeCall<void>(this, "AShooterCharacter.OnStopFire()"); }
	void OnStartTargeting() { NativeCall<void>(this, "AShooterCharacter.OnStartTargeting()"); }
	void OnStopTargeting() { NativeCall<void>(this, "AShooterCharacter.OnStopTargeting()"); }
	void OnStartAltFire() { NativeCall<void>(this, "AShooterCharacter.OnStartAltFire()"); }
	void OnStopAltFire() { NativeCall<void>(this, "AShooterCharacter.OnStopAltFire()"); }
	void OnPressReload() { NativeCall<void>(this, "AShooterCharacter.OnPressReload()"); }
	void OnReleaseReload() { NativeCall<void>(this, "AShooterCharacter.OnReleaseReload()"); }
	void OnHoldingReload() { NativeCall<void>(this, "AShooterCharacter.OnHoldingReload()"); }
	void OnReload() { NativeCall<void>(this, "AShooterCharacter.OnReload()"); }
	void OnStartRunning() { NativeCall<void>(this, "AShooterCharacter.OnStartRunning()"); }
	void OnStopRunning() { NativeCall<void>(this, "AShooterCharacter.OnStopRunning()"); }
	bool IsTurningTooFastToRun(const UE::Math::TVector<double>* Velocity, const UE::Math::TRotator<double>* Rotation) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "AShooterCharacter.IsTurningTooFastToRun(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Velocity, Rotation); }
	bool IsRunning() { return NativeCall<bool>(this, "AShooterCharacter.IsRunning()"); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset, bool bPreserveSavedAnim) { NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetSleeping(bool,bool,bool)", bSleeping, bUseRagdollLocationOffset, bPreserveSavedAnim); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "AShooterCharacter.IsValidUnStasisCaster()"); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { NativeCall<void>(this, "AShooterCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.Tick(float)", DeltaSeconds); }
	void CalculateTetheringForSplitScreen() { NativeCall<void>(this, "AShooterCharacter.CalculateTetheringForSplitScreen()"); }
	void UpdateCarriedLocationAndRotation(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.UpdateCarriedLocationAndRotation(float)", DeltaSeconds); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>(this, "AShooterCharacter.GetCarryingSocketYaw(bool)", RefreshBones); }
	bool CanBeCarried(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "AShooterCharacter.CanBeCarried(APrimalCharacter*)", ByCarrier); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	//Deprecated
	//bool IsTargeting() { return NativeCall<bool>(this, "AShooterCharacter.IsTargeting()"); }
	bool IsFirstPerson() { return NativeCall<bool>(this, "AShooterCharacter.IsFirstPerson()"); }
	bool IsFirstPersonCamera() { return NativeCall<bool>(this, "AShooterCharacter.IsFirstPersonCamera()"); }
	void SetActorHiddenInGame(bool bNewHidden) { NativeCall<void, bool>(this, "AShooterCharacter.SetActorHiddenInGame(bool)", bNewHidden); }
	bool AllowFirstPerson() { return NativeCall<bool>(this, "AShooterCharacter.AllowFirstPerson()"); }
	void SetCameraMode(bool bFirstperson, bool bIgnoreSettingFirstPersonRiding, bool bForce) { NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetCameraMode(bool,bool,bool)", bFirstperson, bIgnoreSettingFirstPersonRiding, bForce); }
	void PlaySpawnIntro() { NativeCall<void>(this, "AShooterCharacter.PlaySpawnIntro()"); }
	void FinishSpawnIntro() { NativeCall<void>(this, "AShooterCharacter.FinishSpawnIntro()"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "AShooterCharacter.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "AShooterCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "AShooterCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool ValidToRestoreForPC(AShooterPlayerController* aPC) { return NativeCall<bool, AShooterPlayerController*>(this, "AShooterCharacter.ValidToRestoreForPC(AShooterPlayerController*)", aPC); }
	static AShooterCharacter* FindForPlayerController(AShooterPlayerController* aPC) { return NativeCall<AShooterCharacter*, AShooterPlayerController*>(nullptr, "AShooterCharacter.FindForPlayerController(AShooterPlayerController*)", aPC); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterCharacter.GetDescriptiveName()", result); }
	FString* GetShortName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterCharacter.GetShortName()", result); }
	UPrimalPlayerData* GetPlayerData() { return NativeCall<UPrimalPlayerData*>(this, "AShooterCharacter.GetPlayerData()"); }
	void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "AShooterCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool IsUsingShield() { return NativeCall<bool>(this, "AShooterCharacter.IsUsingShield()"); }
	bool IsBlockingWithShield() { return NativeCall<bool>(this, "AShooterCharacter.IsBlockingWithShield()"); }
	void NetSimulatedForceUpdateAimedActors_Implementation(float OverrideMaxDistance) { NativeCall<void, float>(this, "AShooterCharacter.NetSimulatedForceUpdateAimedActors_Implementation(float)", OverrideMaxDistance); }
	void ServerForceUpdatedAimedActors(float OverrideMaxDistance, bool bReplicateToSimulatedClients) { NativeCall<void, float, bool>(this, "AShooterCharacter.ServerForceUpdatedAimedActors(float,bool)", OverrideMaxDistance, bReplicateToSimulatedClients); }
	void ServerSetBallistaNewRotation_Implementation(float Pitch, float Yaw) { NativeCall<void, float, float>(this, "AShooterCharacter.ServerSetBallistaNewRotation_Implementation(float,float)", Pitch, Yaw); }
	void ServerNotifyBallistaShot_Implementation(FHitResult* Impact, FVector_NetQuantizeNormal* ShootDir) { NativeCall<void, FHitResult*, FVector_NetQuantizeNormal*>(this, "AShooterCharacter.ServerNotifyBallistaShot_Implementation(FHitResult,FVector_NetQuantizeNormal)", Impact, ShootDir); }
	float GetMaxSpeedModifier(bool bIgnoreRunning) { return NativeCall<float, bool>(this, "AShooterCharacter.GetMaxSpeedModifier(bool)", bIgnoreRunning); }
	USkeletalMeshComponent* GetFirstPersonHandsMesh() { return NativeCall<USkeletalMeshComponent*>(this, "AShooterCharacter.GetFirstPersonHandsMesh()"); }
	AShooterWeapon* GetCurrentWeapon() { return NativeCall<AShooterWeapon*>(this, "AShooterCharacter.GetCurrentWeapon()"); }
	void SetRidingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterCharacter.SetRidingDino(APrimalDinoCharacter*)", aDino); }
	void ServerReceiveTribeInvite_Implementation(AShooterPlayerController* playerSendingInvite) { NativeCall<void, AShooterPlayerController*>(this, "AShooterCharacter.ServerReceiveTribeInvite_Implementation(AShooterPlayerController*)", playerSendingInvite); }
	void ClearRidingDino(bool bFromDino, int OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear) { NativeCall<void, bool, int, bool>(this, "AShooterCharacter.ClearRidingDino(bool,int,bool)", bFromDino, OverrideUnboardDirection, bForceEvenIfBuffPreventsClear); }
	void SetCarryingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterCharacter.SetCarryingDino(APrimalDinoCharacter*)", aDino); }
	void ClearCarryingDino(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "AShooterCharacter.ClearCarryingDino(bool,bool)", bFromDino, bCancelAnyCarryBuffs); }
	void SetRidingDinoAsPassenger(APrimalDinoCharacter* aDino, const FSaddlePassengerSeatDefinition* SeatDefinition) { NativeCall<void, APrimalDinoCharacter*, const FSaddlePassengerSeatDefinition*>(this, "AShooterCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefinition&)", aDino, SeatDefinition); }
	void ClearRidingDinoAsPassenger(bool bFromDino) { NativeCall<void, bool>(this, "AShooterCharacter.ClearRidingDinoAsPassenger(bool)", bFromDino); }
	void ServerLaunchMountedDino_Implementation(bool bIsSecondary) { NativeCall<void, bool>(this, "AShooterCharacter.ServerLaunchMountedDino_Implementation(bool)", bIsSecondary); }
	void ServerPrepareMountedDinoForLaunch_Implementation(UE::Math::TVector<double>* viewLoc, UE::Math::TVector<double>* viewDir, bool bIsSecondary) { if (!viewLoc) throw std::invalid_argument("Null native value parameter"); if (!viewDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, bool>(this, "AShooterCharacter.ServerPrepareMountedDinoForLaunch_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", *viewLoc, *viewDir, bIsSecondary); }
	void ClientPlayHarvestAnim_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientPlayHarvestAnim_Implementation()"); }
	void LaunchMountedDino(bool bIsSecondary) { NativeCall<void, bool>(this, "AShooterCharacter.LaunchMountedDino(bool)", bIsSecondary); }
	void OnPrimalCharacterSleeped() { NativeCall<void>(this, "AShooterCharacter.OnPrimalCharacterSleeped()"); }
	bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "AShooterCharacter.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "AShooterCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>(this, "AShooterCharacter.CanJumpInternal_Implementation()"); }
	bool CanProneInternal(__int16 a2) { return NativeCall<bool, __int16>(this, "AShooterCharacter.CanProneInternal()", a2); }
	bool IsCrafting() { return NativeCall<bool>(this, "AShooterCharacter.IsCrafting()"); }
	void RemoveAttachments(AActor* From, bool bIsSnapshot) { NativeCall<void, AActor*, bool>(this, "AShooterCharacter.RemoveAttachments(AActor*,bool)", From, bIsSnapshot); }
	void NotifyEquippedItems() { NativeCall<void>(this, "AShooterCharacter.NotifyEquippedItems()"); }
	void NotifyUnequippedItems() { NativeCall<void>(this, "AShooterCharacter.NotifyUnequippedItems()"); }
	void RefreshAttachmentsAndBody() { NativeCall<void>(this, "AShooterCharacter.RefreshAttachmentsAndBody()"); }
	void RefreshDefaultAttachments(AActor* UseOtherActor, bool bIsSnapshot) { NativeCall<void, AActor*, bool>(this, "AShooterCharacter.RefreshDefaultAttachments(AActor*,bool)", UseOtherActor, bIsSnapshot); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "AShooterCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
	void GetMultiUseEntriesFromBuffs(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.GetMultiUseEntriesFromBuffs(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", ForPC, MultiUseEntries); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "AShooterCharacter.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "AShooterCharacter.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void RefreshTribeName() { NativeCall<void>(this, "AShooterCharacter.RefreshTribeName()"); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "AShooterCharacter.ChangeActorTeam(int)", NewTeam); }
	void ClientClearTribeRequest_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientClearTribeRequest_Implementation()"); }
	void ClientNotifyTribeRequest_Implementation(const FString* RequestTribeName, AShooterCharacter* PlayerCharacter) { NativeCall<void, const FString*, AShooterCharacter*>(this, "AShooterCharacter.ClientNotifyTribeRequest_Implementation(FString&,AShooterCharacter*)", RequestTribeName, PlayerCharacter); }
	//void PlayDrinkingAnimation() { NativeCall<void, __int64, __int64>(this, "AShooterCharacter.PlayDrinkingAnimation()"); }
	float GetCharacterAdditionalHypothermiaInsulationValue() { return NativeCall<float>(this, "AShooterCharacter.GetCharacterAdditionalHypothermiaInsulationValue()"); }
	//     bool CalcIsIndoors() { return NativeCall<bool>(this, "AShooterCharacter.CalcIsIndoors()"); }
	// FUNCTION MISSING: AShooterCharacter.CalcIsIndoors()
	static bool IsIndoorsAtLoc(UWorld* theWorld, const UE::Math::TVector<double>* actorLoc) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*>(nullptr, "AShooterCharacter.IsIndoorsAtLoc(UWorld*,UE::Math::TVector<double>&)", theWorld, actorLoc); }
	float GetInsulationFromItem(const FHitResult* HitOut, EPrimalItemStat::Type TypeInsulation) { return NativeCall<float, const FHitResult*, EPrimalItemStat::Type>(this, "AShooterCharacter.GetInsulationFromItem(FHitResult&,EPrimalItemStat::Type)", HitOut, TypeInsulation); }
	float GetCharacterAdditionalInsulationValueFromStructure(UWorld* theWorld, const UE::Math::TVector<double>* actorLoc, EPrimalItemStat::Type TypeInsulation) { return NativeCall<float, UWorld*, const UE::Math::TVector<double>*, EPrimalItemStat::Type>(this, "AShooterCharacter.GetCharacterAdditionalInsulationValueFromStructure(UWorld*,UE::Math::TVector<double>&,EPrimalItemStat::Type)", theWorld, actorLoc, TypeInsulation); }
	float GetCharacterAdditionalHyperthermiaInsulationValue() { return NativeCall<float>(this, "AShooterCharacter.GetCharacterAdditionalHyperthermiaInsulationValue()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterCharacter.PreInitializeComponents()"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, unsigned __int8 PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned __int8>(this, "AShooterCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode); }
	void PreApplyAccumulatedForces(float DeltaSeconds, UE::Math::TVector<double>* PendingImpulseToApply, UE::Math::TVector<double>* PendingForceToApply) { NativeCall<void, float, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", DeltaSeconds, PendingImpulseToApply, PendingForceToApply); }
	void OnBeginDrag_Implementation(APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter*, int, bool>(this, "AShooterCharacter.OnBeginDrag_Implementation(APrimalCharacter*,int,bool)", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag_Implementation() { NativeCall<void>(this, "AShooterCharacter.OnEndDrag_Implementation()"); }
	bool IsSubmerged(bool bDontCheckSwimming, bool bUseHalfThreshold, bool bForceCheck, bool bFromVolumeChange) { return NativeCall<bool, bool, bool, bool, bool>(this, "AShooterCharacter.IsSubmerged(bool,bool,bool,bool)", bDontCheckSwimming, bUseHalfThreshold, bForceCheck, bFromVolumeChange); }
	void UpdateSwimmingState() { NativeCall<void>(this, "AShooterCharacter.UpdateSwimmingState()"); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "AShooterCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
	void RefreshRiderSocket() { NativeCall<void>(this, "AShooterCharacter.RefreshRiderSocket()"); }
	float GetRidingDinoAnimSpeedRatio() { return NativeCall<float>(this, "AShooterCharacter.GetRidingDinoAnimSpeedRatio()"); }
	UAnimSequence* GetDinoRidingAnimation() { return NativeCall<UAnimSequence*>(this, "AShooterCharacter.GetDinoRidingAnimation()"); }
	UAnimSequence* GetDinoRidingMoveAnimation() { return NativeCall<UAnimSequence*>(this, "AShooterCharacter.GetDinoRidingMoveAnimation()"); }
	UAnimSequence* GetSeatingAnimation() { return NativeCall<UAnimSequence*>(this, "AShooterCharacter.GetSeatingAnimation()"); }
	float GetBaseTargetingDesire(const ITargetableInterface* Attacker) { return NativeCall<float, const ITargetableInterface*>(this, "AShooterCharacter.GetBaseTargetingDesire(ITargetableInterface*)", Attacker); }
	void ApplyBodyColors() { NativeCall<void>(this, "AShooterCharacter.ApplyBodyColors()"); }
	void ApplyBodyColors(USkeletalMeshComponent* toMesh) { NativeCall<void, USkeletalMeshComponent*>(this, "AShooterCharacter.ApplyBodyColors(USkeletalMeshComponent*)", toMesh); }
	void ApplyBoneModifiers(int a2) { NativeCall<void, int>(this, "AShooterCharacter.ApplyBoneModifiers()", a2); }
	void CaptureCharacterSnapshot(UPrimalItem* Item) { NativeCall<void, UPrimalItem*>(this, "AShooterCharacter.CaptureCharacterSnapshot(UPrimalItem*)", Item); }
	void ApplyCharacterSnapshot(UPrimalItem* Item, AActor* To, UE::Math::TVector<double>* Offset, float MaxExtent, int Pose, bool bCollisionOn, FPrimalSnapshotPose* SnapshotOverride) { if (!Offset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UPrimalItem *, AActor *, UE :: Math :: TVector < double >, float, int, bool, FPrimalSnapshotPose *>(this, "AShooterCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool,FPrimalSnapshotPose*)", Item, To, *Offset, MaxExtent, Pose, bCollisionOn, SnapshotOverride); }
	void RemoveCharacterSnapshot(UPrimalItem* Item, AActor* From) { NativeCall<void, UPrimalItem*, AActor*>(this, "AShooterCharacter.RemoveCharacterSnapshot(UPrimalItem*,AActor*)", Item, From); }
	float GetTargetingDesirability(const ITargetableInterface* Attacker) { return NativeCall<float, const ITargetableInterface*>(this, "AShooterCharacter.GetTargetingDesirability(ITargetableInterface*)", Attacker); }
	UAnimMontage* GetOverridenMontage(UAnimMontage* AnimMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "AShooterCharacter.GetOverridenMontage(UAnimMontage*)", AnimMontage); }
	UAnimSequence* GetOverridenAnimSequence(UAnimSequence* AnimSeq) { return NativeCall<UAnimSequence*, UAnimSequence*>(this, "AShooterCharacter.GetOverridenAnimSequence(UAnimSequence*)", AnimSeq); }
	bool IsWatered() { return NativeCall<bool>(this, "AShooterCharacter.IsWatered()"); }
	void AdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "AShooterCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool IsBlockedByShield(const FHitResult* HitInfo, const UE::Math::TVector<double>* ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult*, const UE::Math::TVector<double>*, bool>(this, "AShooterCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", HitInfo, ShotDirection, bBlockAllPointDamage); }
	void ClientNotifyLevelUp_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientNotifyLevelUp_Implementation()"); }
	void StartedFiringWeapon(bool bPrimaryFire) { NativeCall<void, bool>(this, "AShooterCharacter.StartedFiringWeapon(bool)", bPrimaryFire); }
	void FiredWeapon() { NativeCall<void>(this, "AShooterCharacter.FiredWeapon()"); }
	void OrbitCamOn() { NativeCall<void>(this, "AShooterCharacter.OrbitCamOn()"); }
	void OrbitCamToggle() { NativeCall<void>(this, "AShooterCharacter.OrbitCamToggle()"); }
	void SetRagdollPhysics(bool bUseRagdollLocationOffset, bool bForceRecreateBones, bool bForLoading) { NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetRagdollPhysics(bool,bool,bool)", bUseRagdollLocationOffset, bForceRecreateBones, bForLoading); }
	bool IsPlayingUpperBodyCallAnimation_Implementation() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingUpperBodyCallAnimation_Implementation()"); }
	void ServerCallFollow_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallFollow_Implementation()"); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallStay_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallStay_Implementation()"); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterCharacter.ServerCallStayOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterCharacter.ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallAggressive_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallAggressive_Implementation()"); }
	void ServerCallAttackTargetNew_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallAttackTargetNew_Implementation()"); }
	void ServerCallNeutral_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallNeutral_Implementation()"); }
	void ServerCallPassive_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallPassive_Implementation()"); }
	void ServerCallPassiveFlee_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallPassiveFlee_Implementation()"); }
	void ServerCallSetAggressive_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallSetAggressive_Implementation()"); }
	void ServerCallAttackTarget_Implementation(AActor* TheTarget) { NativeCall<void, AActor*>(this, "AShooterCharacter.ServerCallAttackTarget_Implementation(AActor*)", TheTarget); }
	void ServerCallMoveTo_Implementation(UE::Math::TVector<double>* MoveToLoc) { NativeCall<void, UE::Math::TVector<double>*>(this, "AShooterCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)", MoveToLoc); }
	void ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterCharacter.ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	bool TryAccessInventory() { return NativeCall<bool>(this, "AShooterCharacter.TryAccessInventory()"); }
	void TryLaunchMountedDino(bool bIsSecondary) { NativeCall<void, bool>(this, "AShooterCharacter.TryLaunchMountedDino(bool)", bIsSecondary); }
	bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>* AtLocation, const UE::Math::TRotator<double>* AtRotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "AShooterCharacter.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool WillPlayEmote(unsigned __int8 EmoteIndex);
	void PlayEmoteAnimation_Implementation(unsigned char EmoteIndex, bool bInvertGender) { NativeCall<void, unsigned char, bool>(this, "AShooterCharacter.PlayEmoteAnimation_Implementation(unsignedchar,bool)", EmoteIndex, bInvertGender); }
	void OnVoiceTalkingStateChanged(bool talking, bool InbIsMuted) { NativeCall<void, bool, bool>(this, "AShooterCharacter.OnVoiceTalkingStateChanged(bool,bool)", talking, InbIsMuted); }
	void OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId const>* TalkingPlayerId, bool bIsTalking) { NativeCall<void, TSharedRef<FUniqueNetId const>*, bool>(this, "AShooterCharacter.OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId,1>,bool)", TalkingPlayerId, bIsTalking); }
	APrimalCharacter* GetTalkerCharacter() { return NativeCall<APrimalCharacter*>(this, "AShooterCharacter.GetTalkerCharacter()"); }
	void OnFailedJumped() { NativeCall<void>(this, "AShooterCharacter.OnFailedJumped()"); }
	float GetRecoilMultiplier() { return NativeCall<float>(this, "AShooterCharacter.GetRecoilMultiplier()"); }
	void StasisingCharacter() { NativeCall<void>(this, "AShooterCharacter.StasisingCharacter()"); }
	bool UseAdditiveStandingAnim() { return NativeCall<bool>(this, "AShooterCharacter.UseAdditiveStandingAnim()"); }
	UAnimSequence* GetAdditiveStandingAnim(float* OutBlendInTime, float* OutBlendOutTime) { return NativeCall<UAnimSequence*, float*, float*>(this, "AShooterCharacter.GetAdditiveStandingAnim(float&,float&)", OutBlendInTime, OutBlendOutTime); }
	void ServerSetViewingInventory_Implementation(bool bIsViewing, bool bMulticast) { NativeCall<void, bool, bool>(this, "AShooterCharacter.ServerSetViewingInventory_Implementation(bool,bool)", bIsViewing, bMulticast); }
	void ServerCheckDrinkingWater_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCheckDrinkingWater_Implementation()"); }
	void SetFastInventoryMode(bool Activate) { NativeCall<void, bool>(this, "AShooterCharacter.SetFastInventoryMode(bool)", Activate); }
	void CycleFastInventory(bool bRefresh, bool bNext) { NativeCall<void, bool, bool>(this, "AShooterCharacter.CycleFastInventory(bool,bool)", bRefresh, bNext); }
	void ClientUpdatedInventory_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientUpdatedInventory_Implementation()"); }
	void RequestFastInventory() { NativeCall<void>(this, "AShooterCharacter.RequestFastInventory()"); }
	TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* GetWeaponAmmoWheelEntries(TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.GetWeaponAmmoWheelEntries()", result); }
	void TrySwitchFastInventory() { NativeCall<void>(this, "AShooterCharacter.TrySwitchFastInventory()"); }
	void GameStateHandleEvent_Implementation(FName NameParam, UE::Math::TVector<double>* VecParam) { NativeCall<void, FName, UE::Math::TVector<double>*>(this, "AShooterCharacter.GameStateHandleEvent_Implementation(FName,UE::Math::TVector<double>)", NameParam, VecParam); }
	APrimalDinoCharacter* GetRidingDino() { return NativeCall<APrimalDinoCharacter*>(this, "AShooterCharacter.GetRidingDino()"); }
	void AttachToLadder_Implementation(USceneComponent* Parent) { NativeCall<void, USceneComponent*>(this, "AShooterCharacter.AttachToLadder_Implementation(USceneComponent*)", Parent); }
	void DetachFromLadder_Implementation() { NativeCall<void>(this, "AShooterCharacter.DetachFromLadder_Implementation()"); }
	bool IsValidForStatusRecovery() { return NativeCall<bool>(this, "AShooterCharacter.IsValidForStatusRecovery()"); }
	bool IsOnSeatingStructure() { return NativeCall<bool>(this, "AShooterCharacter.IsOnSeatingStructure()"); }
	bool IsControllingBallistaTurret() { return NativeCall<bool>(this, "AShooterCharacter.IsControllingBallistaTurret()"); }
	APrimalStructureTurretBallista* GetControlledTurretBallista() { return NativeCall<APrimalStructureTurretBallista*>(this, "AShooterCharacter.GetControlledTurretBallista()"); }
	AMissionType* GetActiveMission() { return NativeCall<AMissionType*>(this, "AShooterCharacter.GetActiveMission()"); }
	bool IsInMission() { return NativeCall<bool>(this, "AShooterCharacter.IsInMission()"); }
	bool IsInSingletonMission() { return NativeCall<bool>(this, "AShooterCharacter.IsInSingletonMission()"); }
	void OnDetachedFromSeatingStructure(APrimalStructureSeating* InSeatingStructure) { NativeCall<void, APrimalStructureSeating*>(this, "AShooterCharacter.OnDetachedFromSeatingStructure(APrimalStructureSeating*)", InSeatingStructure); }
	void TakeSeatingStructure(APrimalStructureSeating* InSeatingStructure, int SeatNumber, bool bLockedToSeat) { NativeCall<void, APrimalStructureSeating*, int, bool>(this, "AShooterCharacter.TakeSeatingStructure(APrimalStructureSeating*,int,bool)", InSeatingStructure, SeatNumber, bLockedToSeat); }
	void ReleaseSeatingStructure(APrimalStructureSeating* InSeatingStructure, UE::Math::TVector<double>* PrevRelativeLocation) { NativeCall<void, APrimalStructureSeating*, UE::Math::TVector<double>*>(this, "AShooterCharacter.ReleaseSeatingStructure(APrimalStructureSeating*,UE::Math::TVector<double>)", InSeatingStructure, PrevRelativeLocation); }
	bool IsUsingClimbingPick() { return NativeCall<bool>(this, "AShooterCharacter.IsUsingClimbingPick()"); }
	void ServerSetBallistaTargeting_Implementation(bool StartTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetBallistaTargeting_Implementation(bool)", StartTargeting); }
	void ServerPlayFireBallistaAnimation_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerPlayFireBallistaAnimation_Implementation()"); }
	void ServerStopFireBallista_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerStopFireBallista_Implementation()"); }
	void ServerSwitchBallistaAmmo_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchBallistaAmmo_Implementation()"); }
	void ServerToClientsPlayFireBallistaAnimation_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerToClientsPlayFireBallistaAnimation_Implementation()"); }
	void ServerFireBallistaProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*>(this, "AShooterCharacter.ServerFireBallistaProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", Origin, ShootDir); }
	void ServerSeatingStructureAction_Implementation(unsigned __int8 ActionNumber) { NativeCall<void, unsigned __int8>(this, "AShooterCharacter.ServerSeatingStructureAction_Implementation(unsignedchar)", ActionNumber); }
	void WasPushed(ACharacter* ByOtherCharacter, UE::Math::TVector<double>* PushDirection) { NativeCall<void, ACharacter*, UE::Math::TVector<double>*>(this, "AShooterCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)", ByOtherCharacter, PushDirection); }
	void ClientWasPushed_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientWasPushed_Implementation()"); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn*>(this, "AShooterCharacter.NotifyBumpedPawn(APawn*)", BumpedPawn); }
	void ClientNetEndClimbingLadder_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientNetEndClimbingLadder_Implementation()"); }
	void ServerNetEndClimbingLadder_Implementation(bool bIsClimbOver, UE::Math::TVector<double>* ClimbOverLoc, UE::Math::TVector<double>* JumpDir) { NativeCall<void, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.ServerNetEndClimbingLadder_Implementation(bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", bIsClimbOver, ClimbOverLoc, JumpDir); }
	void RenamePlayer_Implementation(const FString* NewName) { NativeCall<void, const FString*>(this, "AShooterCharacter.RenamePlayer_Implementation(FString&)", NewName); }
	bool AllowDinoTargetingRange(const UE::Math::TVector<double>& AtLoc, float TargetingRange, APrimalDinoCharacter* ByDino) { return NativeCall<bool, const UE::Math::TVector<double>&, float, APrimalDinoCharacter*>(this, "AShooterCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", AtLoc, TargetingRange, ByDino); }
	bool IsCarriedAsPassenger() { return NativeCall<bool>(this, "AShooterCharacter.IsCarriedAsPassenger()"); }
	void ClientInviteToAlliance_Implementation(int RequestingTeam, unsigned int AllianceID, const FString* AllianceName, const FString* InviteeName) { NativeCall<void, int, unsigned int, const FString*, const FString*>(this, "AShooterCharacter.ClientInviteToAlliance_Implementation(int,unsignedint,FString&,FString&)", RequestingTeam, AllianceID, AllianceName, InviteeName); }
	void InviteToAlliance(int RequestingTeam, unsigned int AllianceID, FString* AllianceName, FString* InviterName) { NativeCall<void, int, unsigned int, FString*, FString*>(this, "AShooterCharacter.InviteToAlliance(int,unsignedint,FString,FString)", RequestingTeam, AllianceID, AllianceName, InviterName); }
	bool CanDragCharacter(APrimalCharacter* Character, bool bIgnoreWeight) { return NativeCall<bool, APrimalCharacter*, bool>(this, "AShooterCharacter.CanDragCharacter(APrimalCharacter*,bool)", Character, bIgnoreWeight); }
	bool HasEnoughWeightToDragCharacter(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "AShooterCharacter.HasEnoughWeightToDragCharacter(APrimalCharacter*)", Character); }
	void GiveDefaultWeaponTimer() { NativeCall<void>(this, "AShooterCharacter.GiveDefaultWeaponTimer()"); }
	bool IsCarryingSomething(bool bNotForRunning) { return NativeCall<bool, bool>(this, "AShooterCharacter.IsCarryingSomething(bool)", bNotForRunning); }
	void ForceGiveDefaultWeapon() { NativeCall<void>(this, "AShooterCharacter.ForceGiveDefaultWeapon()"); }
	APrimalDinoCharacter* GetBasedOnDino(bool bUseReplicatedData, bool bOnlyConsciousDino) { return NativeCall<APrimalDinoCharacter*, bool, bool>(this, "AShooterCharacter.GetBasedOnDino(bool,bool)", bUseReplicatedData, bOnlyConsciousDino); }
	bool AllowParallelAnimations(USkeletalMeshComponent* forComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "AShooterCharacter.AllowParallelAnimations(USkeletalMeshComponent*)", forComp); }
	void ServerStartSurfaceCameraForPassenger_Implementation(float yaw, float roll, float pitch, bool bShouldInvertInput) { NativeCall<void, float, float, float, bool>(this, "AShooterCharacter.ServerStartSurfaceCameraForPassenger_Implementation(float,float,float,bool)", yaw, roll, pitch, bShouldInvertInput); }
	float ModifyAirControl(float AirControlIn) { return NativeCall<float, float>(this, "AShooterCharacter.ModifyAirControl(float)", AirControlIn); }
	float GetPercentageOfHeadHairGrowth() { return NativeCall<float>(this, "AShooterCharacter.GetPercentageOfHeadHairGrowth()"); }
	float GetPercentageOfFacialHairGrowth() { return NativeCall<float>(this, "AShooterCharacter.GetPercentageOfFacialHairGrowth()"); }
	void NetSetHeadHairPercent_Implementation(float thePercent, int newHeadHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetHeadHairPercent_Implementation(float,int,__int64)", thePercent, newHeadHairIndex); }
	void NetSetFacialHairPercent_Implementation(float thePercent, int newFacialHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetFacialHairPercent_Implementation(float,int,__int64)", thePercent, newFacialHairIndex); }
	void NetSetEyebrowStyle_Implementation(int newEyebrowIndex) { NativeCall<void, int>(this, "AShooterCharacter.NetSetEyebrowStyle_Implementation(int,__int64)", newEyebrowIndex); }
	void UpdateHair() { NativeCall<void>(this, "AShooterCharacter.UpdateHair(bool)"); }
	//void SetHairOnComponent(USkeletalMeshComponent* HairComponent, USkeletalMeshComponent* LeaderPoseComponent, TSoftObjectPtr<USkeletalMesh>* HairMesh, TSubclassOf<UAnimInstance> AnimBlueprint, TSoftObjectPtr<UMaterialInterface>* FemaleHairOverride) { NativeCall<void, USkeletalMeshComponent*, USkeletalMeshComponent*, TSoftObjectPtr<USkeletalMesh>*, TSubclassOf<UAnimInstance>, TSoftObjectPtr<UMaterialInterface>*>(this, "AShooterCharacter.SetHairOnComponent(USkeletalMeshComponent*,USkeletalMeshComponent*,TSoftObjectPtr<USkeletalMesh>,TSubclassOf<UAnimInstance>,TSoftObjectPtr<UMaterialInterface>)", HairComponent, LeaderPoseComponent, HairMesh, AnimBlueprint, FemaleHairOverride); }
	void NetSetOverrideHeadHairColor_Implementation(unsigned __int8 HairColor, int ToIndex) { NativeCall<void, unsigned __int8, int>(this, "AShooterCharacter.NetSetOverrideHeadHairColor_Implementation(unsignedchar,int)", HairColor, ToIndex); }
	void NetSetOverrideFacialHairColor_Implementation(unsigned __int8 HairColor, int ToIndex) { NativeCall<void, unsigned __int8, int>(this, "AShooterCharacter.NetSetOverrideFacialHairColor_Implementation(unsignedchar,int)", HairColor, ToIndex); }
	void Unstasis() { NativeCall<void>(this, "AShooterCharacter.Unstasis()"); }
	void RegisterActorTickFunctions(bool bRegister, bool bSaveAndRestoreTickState) { NativeCall<void, bool, bool>(this, "AShooterCharacter.RegisterActorTickFunctions(bool,bool)", bRegister, bSaveAndRestoreTickState); }
	void OnRep_HatHidden() { NativeCall<void>(this, "AShooterCharacter.OnRep_HatHidden()"); }
	static float ComputeHeadHairMorphTargetValue(bool bFemale, unsigned __int8 HairIndex, float PercentOfGrowth) { return NativeCall<float, bool, unsigned __int8, float>(nullptr, "AShooterCharacter.ComputeHeadHairMorphTargetValue(bool,unsignedchar,__int64,float)", bFemale, HairIndex, PercentOfGrowth); }
	static float ComputeFacialHairMorphTargetValue(bool bFemale, unsigned __int8 HairIndex, float PercentOfGrowth) { return NativeCall<float, bool, unsigned __int8, float>(nullptr, "AShooterCharacter.ComputeFacialHairMorphTargetValue(bool,unsignedchar,__int64,float)", bFemale, HairIndex, PercentOfGrowth); }
	void TempDampenInputAcceleration() { NativeCall<void>(this, "AShooterCharacter.TempDampenInputAcceleration()"); }
	bool Poop(bool bForcePoop) { return NativeCall<bool, bool>(this, "AShooterCharacter.Poop(bool)", bForcePoop); }
	AActor* StructurePlacementUseAlternateOriginActor() { return NativeCall<AActor*>(this, "AShooterCharacter.StructurePlacementUseAlternateOriginActor()"); }
	USceneComponent* GetActorSoundAttachmentComponentOverride(USceneComponent* ForComponent) { return NativeCall<USceneComponent*, USceneComponent*>(this, "AShooterCharacter.GetActorSoundAttachmentComponentOverride(USceneComponent*)", ForComponent); }
	bool AllowGrappling_Implementation() { return NativeCall<bool>(this, "AShooterCharacter.AllowGrappling_Implementation()"); }
	void TryCutEnemyGrapplingCable() { NativeCall<void>(this, "AShooterCharacter.TryCutEnemyGrapplingCable()"); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "AShooterCharacter.FinalLoadedFromSaveGame()"); }
	AActor* GetSecondaryMountedActor() { return NativeCall<AActor*>(this, "AShooterCharacter.GetSecondaryMountedActor()"); }
	void FaceRotation(UE::Math::TRotator<double>* NewControlRotation, float DeltaTime) { NativeCall<void, UE::Math::TRotator<double>*, float>(this, "AShooterCharacter.FaceRotation(UE::Math::TRotator<double>,float,bool)", NewControlRotation, DeltaTime); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "AShooterCharacter.IsGameInputAllowed()"); }
	bool IsReadyToUpload(UWorld* theWorld) { return NativeCall<bool, UWorld*>(this, "AShooterCharacter.IsReadyToUpload(UWorld*)", theWorld); }
	void ServerClearSwitchingWeapon_Implementation(bool bOnlyIfDefaultWeapon, bool bClientRequestNextWeaponID) { NativeCall<void, bool, bool>(this, "AShooterCharacter.ServerClearSwitchingWeapon_Implementation(bool,bool)", bOnlyIfDefaultWeapon, bClientRequestNextWeaponID); }
	void ClientReceiveNextWeaponID_Implementation(FItemNetID theItemID) { NativeCall<void, FItemNetID>(this, "AShooterCharacter.ClientReceiveNextWeaponID_Implementation(FItemNetID)", theItemID); }
	void DoCharacterDetachment(bool bIncludeRiding, bool bIncludeCarrying, APrimalBuff* BuffToIgnore) { NativeCall<void, bool, bool, APrimalBuff*>(this, "AShooterCharacter.DoCharacterDetachment(bool,bool,APrimalBuff*)", bIncludeRiding, bIncludeCarrying, BuffToIgnore); }
	bool IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried) { return NativeCall<bool, bool, bool>(this, "AShooterCharacter.IsCharacterHardAttached(bool,bool)", bIgnoreRiding, bIgnoreCarried); }
	bool IsGrapplingAttachedToMe() { return NativeCall<bool>(this, "AShooterCharacter.IsGrapplingAttachedToMe()"); }
	bool IsGrapplingHardAttached() { return NativeCall<bool>(this, "AShooterCharacter.IsGrapplingHardAttached()"); }
	bool TeleportTo(const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool>(this, "AShooterCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterCharacter.GetDebugInfoString()", result); }
	bool ForceCrosshair() { return NativeCall<bool>(this, "AShooterCharacter.ForceCrosshair()"); }
	AActor* GetUnstasisViewerSiblingActor() { return NativeCall<AActor*>(this, "AShooterCharacter.GetUnstasisViewerSiblingActor()"); }
	void UpdateAutoPlayer() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoPlayer()"); }
	void UpdateAutoMove() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoMove()"); }
	void UpdateAutoTurn() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoTurn()"); }
	void UpdateAutoJump() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoJump()"); }
	void UpdateAutoFire() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoFire()"); }
	float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage*, float, FName, bool, bool, float, float>(this, "AShooterCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	bool GetAllAttachedCharsInternal(TSet<APrimalCharacter*, DefaultKeyFuncs<APrimalCharacter*, 0>, FDefaultSetAllocator>* AttachedChars, const APrimalCharacter* OriginalChar, bool* bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TSet<APrimalCharacter*, DefaultKeyFuncs<APrimalCharacter*, 0>, FDefaultSetAllocator>*, const APrimalCharacter*, bool*, const bool, const bool>(this, "AShooterCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalCharacter*,0>,FDefaultSetAllocator>&,APrimalCharacter*,bool,bool,bool)", AttachedChars, OriginalChar, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	__int64 GiveHexagons(int NumHexagons, int TriggerIndex, float OverrideHexGainFalloffRate, int OverrideHexGainFalloffMin, float OverrideCollectSFXVolume, UE::Math::TVector<double>* OverrideVfxSpawnLoc, int OverrideHexagonVFXActorCount, bool VFXImmediatelyAttracts) { return NativeCall<__int64, int, int, float, int, float, UE::Math::TVector<double>*, int, bool>(this, "AShooterCharacter.GiveHexagons(int,int,float,int,float,UE::Math::TVector<double>,int,bool)", NumHexagons, TriggerIndex, OverrideHexGainFalloffRate, OverrideHexGainFalloffMin, OverrideCollectSFXVolume, OverrideVfxSpawnLoc, OverrideHexagonVFXActorCount, VFXImmediatelyAttracts); }
	bool SetPlayerHexagonCount(int NewHexagonCount) { return NativeCall<bool, int>(this, "AShooterCharacter.SetPlayerHexagonCount(int)", NewHexagonCount); }
	int GetPlayerHexagonCount() { return NativeCall<int>(this, "AShooterCharacter.GetPlayerHexagonCount()"); }
	void ServerRequestHexagonTrade_Implementation(int RequestedTradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "AShooterCharacter.ServerRequestHexagonTrade_Implementation(int,int)", RequestedTradableItemIndex, Quantity); }
	void PlayHatHiddenAnim() { NativeCall<void>(this, "AShooterCharacter.PlayHatHiddenAnim()"); }
	void UnlockHeadPosition() { NativeCall<void>(this, "AShooterCharacter.UnlockHeadPosition()"); }
	void ClientSetExpectedBase_Implementation(unsigned int BaseID) { NativeCall<void, unsigned int>(this, "AShooterCharacter.ClientSetExpectedBase_Implementation(unsignedint)", BaseID); }
	void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "AShooterCharacter.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "AShooterCharacter.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "AShooterCharacter.NotifyItemRemoved(UPrimalItem*)", anItem); }
	UAudioComponent* PlayFootstep() { return NativeCall<UAudioComponent*>(this, "AShooterCharacter.PlayFootstep()"); }
	void DoInitialMeshingCheck() { NativeCall<void>(this, "AShooterCharacter.DoInitialMeshingCheck()"); }
	void RemoveProjectileFromCache(int ProjectileID) { NativeCall<void, int>(this, "AShooterCharacter.RemoveProjectileFromCache(int)", ProjectileID); }
	bool IsProjectileInCache(int ProjectileID) { return NativeCall<bool, int>(this, "AShooterCharacter.IsProjectileInCache(int)", ProjectileID); }
	void ServerNotifyProjectileImpact_Implementation(const FHitResult* HitResult, bool bFromReplication, int FromProjectileID) { NativeCall<void, const FHitResult*, bool, int>(this, "AShooterCharacter.ServerNotifyProjectileImpact_Implementation(FHitResult&,bool,int)", HitResult, bFromReplication, FromProjectileID); }
	void UpdateProjectileCache() { NativeCall<void>(this, "AShooterCharacter.UpdateProjectileCache()"); }
	float GetRiddenStasisRangeMultiplier() { return NativeCall<float>(this, "AShooterCharacter.GetRiddenStasisRangeMultiplier()"); }
	FString* GetUniqueNetIdAsString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterCharacter.GetUniqueNetIdAsString()", result); }
	bool BPCanImplantSuicide() { return NativeCall<bool>(this, "AShooterCharacter.BPCanImplantSuicide()"); }
	void SetImplantSuicideCooldownStartTime(long double StartTime) { NativeCall<void, long double>(this, "AShooterCharacter.SetImplantSuicideCooldownStartTime(double)", StartTime); }
	//void UpdateAllyRadarDatas_Implementation(const TArray<FAllyRadarDatas, TSizedDefaultAllocator<32> >* newDatas) { NativeCall<void, const TArray<FAllyRadarDatas, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.UpdateAllyRadarDatas_Implementation(TArray<FAllyRadarDatas,TSizedDefaultAllocator<32>>&)", newDatas); }
	bool ShouldASACameraSwitchToOld(bool bDontCheckForTargeting) { return NativeCall<bool, bool>(this, "AShooterCharacter.ShouldASACameraSwitchToOld(bool)", bDontCheckForTargeting); }
	bool ShouldUseSlowInterpToOldCamera() { return NativeCall<bool>(this, "AShooterCharacter.ShouldUseSlowInterpToOldCamera()"); }
	UAnimationAsset* GetDeathAnim_Implementation(float KillingDamage, const UE::Math::TVector<double>* ImpactVelocity, APawn* InstigatingPawn, AActor* DamageCauser) { return NativeCall<UAnimationAsset*, float, const UE::Math::TVector<double>*, APawn*, AActor*>(this, "AShooterCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)", KillingDamage, ImpactVelocity, InstigatingPawn, DamageCauser); }
	void OnDraggingStarted() { NativeCall<void>(this, "AShooterCharacter.OnDraggingStarted()"); }
	TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* GetShoulderDinoWheelEntries(TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.GetShoulderDinoWheelEntries()", result); }
	bool ShouldHideNonWeaponHUD() { return NativeCall<bool>(this, "AShooterCharacter.ShouldHideNonWeaponHUD()"); }
	void UpdateLocallyInterpolatedViewLocationX() { NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocationX()"); }
	void UpdateLocallyInterpolatedViewLocationY() { NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocationY()"); }
	void UpdateLocallyInterpolatedViewLocationZ() { NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocationZ()"); }
	void GetActorEyesViewPoint(UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AShooterCharacter.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Location, Rotation); }
	bool ShouldSkipPhysicsUpdateOnAttachmentReplication() { return NativeCall<bool>(this, "AShooterCharacter.ShouldSkipPhysicsUpdateOnAttachmentReplication()"); }
	FName* GetAttackerDamageImpactFXAttachSocket(FName* result, UE::Math::TVector<double>* HitLoc) { return NativeCall<FName*, FName*, UE::Math::TVector<double>*>(this, "AShooterCharacter.GetAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)", result, HitLoc); }
	int GetCurrentCameraModeIndex() { return NativeCall<int>(this, "AShooterCharacter.GetCurrentCameraModeIndex()"); }
	UTexture2D* GetPlatformIcon() { return NativeCall<UTexture2D*>(this, "AShooterCharacter.GetPlatformIcon()"); }
	float GetEquippedItemDurabilityPercent(FItemNetID itemID) { return NativeCall<float, FItemNetID>(this, "AShooterCharacter.GetEquippedItemDurabilityPercent(FItemNetID)", itemID); }
	void SetEquippedItemDurabilityPercent(FItemNetID itemID, float ItemDurabilityPercentage) { NativeCall<void, FItemNetID, float>(this, "AShooterCharacter.SetEquippedItemDurabilityPercent(FItemNetID,float)", itemID, ItemDurabilityPercentage); }
	void ReplicateDurabilityForEquippedItem(FItemNetID itemID) { NativeCall<void, FItemNetID>(this, "AShooterCharacter.ReplicateDurabilityForEquippedItem(FItemNetID)", itemID); }
	bool ShouldUseDurabilityVar(int VarIndex) { return NativeCall<bool, int>(this, "AShooterCharacter.ShouldUseDurabilityVar(int)", VarIndex); }
	bool ShouldUseDurabilityVarForItemType(TEnumAsByte<EPrimalEquipmentType::Type> TheItemType) { return NativeCall<bool, TEnumAsByte<EPrimalEquipmentType::Type>>(this, "AShooterCharacter.ShouldUseDurabilityVarForItemType(TEnumAsByte<EPrimalEquipmentType::Type>)", TheItemType); }
	void TickBeingDragged(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.TickBeingDragged(float)", DeltaSeconds); }
	void OnEndDragged(APrimalCharacter* Dragger) { NativeCall<void, APrimalCharacter*>(this, "AShooterCharacter.OnEndDragged(APrimalCharacter*)", Dragger); }
	void UnCrouch(bool bClientSimulation) { NativeCall<void, bool>(this, "AShooterCharacter.UnCrouch(bool)", bClientSimulation); }
	void UnProne(bool bClientSimulation) { NativeCall<void, bool>(this, "AShooterCharacter.UnProne(bool)", bClientSimulation); }
	//     UPrimalItem* GetShieldItem() { return NativeCall<UPrimalItem*>(this, "AShooterCharacter.GetShieldItem()"); }
	// FUNCTION MISSING: AShooterCharacter.GetShieldItem()
	FShooterCharacterSparseClassData* GetShooterCharacterSparseClassData() const
	{
		return GetShooterCharacterSparseClassData(EGetSparseClassDataMethod::CreateIfNull);
	}
	FShooterCharacterSparseClassData* GetShooterCharacterSparseClassData(EGetSparseClassDataMethod GetMethod) const
	{
		return (FShooterCharacterSparseClassData*)const_cast<AShooterCharacter*>(this)->ClassPrivateField()->GetSparseClassData(GetMethod);
	}

	int& LastValidCharacterVersionField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastValidCharacterVersion"); }
	int& SavedLastValidCharacterVersionField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.SavedLastValidCharacterVersion"); }
	unsigned __int64& RepDiscordUserIdField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterCharacter.RepDiscordUserId"); }
	double& LastDismountedByOtherNetworkTimeField() { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastDismountedByOtherNetworkTime"); }
	bool& bDismountFromInputField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bDismountFromInput"); }
	double& LastTimeHadMountedWeaponAnimField() { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastTimeHadMountedWeaponAnim"); }
	double& LastNetSoundPlayedTimeField() { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastNetSoundPlayedTime"); }
	double& LastLocalUpdateCharsInRangeTimeField() { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastLocalUpdateCharsInRangeTime"); }
	double& LastRequestBallistaActionTimeField() { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastRequestBallistaActionTime"); }
	__int64& FacialHairCustomCosmeticModIDField() { return *GetNativePointerField<__int64*>(this, "AShooterCharacter.FacialHairCustomCosmeticModID"); }
	__int64& HeadHairCustomCosmeticModIDField() { return *GetNativePointerField<__int64*>(this, "AShooterCharacter.HeadHairCustomCosmeticModID"); }
	__int64& EyebrowCustomCosmeticModIDField() { return *GetNativePointerField<__int64*>(this, "AShooterCharacter.EyebrowCustomCosmeticModID"); }
	float& CurrentControlledBallistaPitchField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentControlledBallistaPitch"); }
	float& LocalUpdateCharsInRangeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LocalUpdateCharsInRangeInterval"); }
	float& ForwardBindingAlphaField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ForwardBindingAlpha"); }
	float& CurrentForwardBindingAlphaField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentForwardBindingAlpha"); }
	int& NetSoundSpamCountField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.NetSoundSpamCount"); }
	unsigned char& PlayerBadgeGroupField() { return *GetNativePointerField<unsigned char*>(this, "AShooterCharacter.PlayerBadgeGroup"); }
	unsigned char& FacialHairIndexField() { return *GetNativePointerField<unsigned char*>(this, "AShooterCharacter.FacialHairIndex"); }
	unsigned char& EyebrowIndexField() { return *GetNativePointerField<unsigned char*>(this, "AShooterCharacter.EyebrowIndex"); }
	bool& bDetatchingGraplingHookField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bDetatchingGraplingHook"); }
	double& LastHexagonChangeTimeField() { return *GetNativePointerField<double*>(this, "AShooterCharacter.LastHexagonChangeTime"); }

	FShooterCharacterSparseClassData* GetMutableShooterCharacterSparseClassData() { return const_cast<FShooterCharacterSparseClassData*>(GetShooterCharacterSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	FShooterCharacterPostUpdateTickFunction& PostUpdateTickField() { return *GetNativePointerField<FShooterCharacterPostUpdateTickFunction*>(this, "AShooterCharacter.PostUpdateTick"); }
	FHandIkTarget& LeftHandIkTargetField() { return *GetNativePointerField<FHandIkTarget*>(this, "AShooterCharacter.LeftHandIkTarget"); }
	FHandIkTarget& RightHandIkTargetField() { return *GetNativePointerField<FHandIkTarget*>(this, "AShooterCharacter.RightHandIkTarget"); }
	FDiscordUniqueID& DiscordUserIDField() { return *GetNativePointerField<FDiscordUniqueID*>(this, "AShooterCharacter.DiscordUserID"); }
	FString& PlayerTitleField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlayerTitle"); }
	FTimerHandle& OnHoldingReloadHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.OnHoldingReloadHandle"); }
	FTimerHandle& EmotePlayLengthTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.EmotePlayLengthTimer"); }
	FTimerHandle& LocalRefreshRidingRotationTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.LocalRefreshRidingRotationTimer"); }
	FTimerHandle& PendingMarketPaymentRecheckHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.PendingMarketPaymentRecheckHandle"); }
	FTimerHandle& AquariumLedgeJumpHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterCharacter.AquariumLedgeJumpHandle"); }
	FOnFirstPersonCameraView& OnFirstPersonCameraViewField() { return *GetNativePointerField<FOnFirstPersonCameraView*>(this, "AShooterCharacter.OnFirstPersonCameraView"); }
	FOnThirdPersonCameraView& OnThirdPersonCameraViewField() { return *GetNativePointerField<FOnThirdPersonCameraView*>(this, "AShooterCharacter.OnThirdPersonCameraView"); }
	FOnCameraStateChanged& OnCameraStateChangedField() { return *GetNativePointerField<FOnCameraStateChanged*>(this, "AShooterCharacter.OnCameraStateChanged"); }
	TWeakObjectPtr<UAnimMontage, FWeakObjectPtr>& RidingTransitionMontageField() { return *GetNativePointerField<TWeakObjectPtr<UAnimMontage, FWeakObjectPtr>*>(this, "AShooterCharacter.RidingTransitionMontage"); }
	TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>& LastSponsoredStructureStoreField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>*>(this, "AShooterCharacter.LastSponsoredStructureStore"); }
	UNiagaraComponent*& DataChannelVFXComponentField() { return *GetNativePointerField<UNiagaraComponent**>(this, "AShooterCharacter.DataChannelVFXComponent"); }
	UE::Math::TVector2<double>& AppliedCustomCosmeticAttachmentZOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterCharacter.AppliedCustomCosmeticAttachmentZOffset"); }
	FName& UnderwearOverrideTagField() { return *GetNativePointerField<FName*>(this, "AShooterCharacter.UnderwearOverrideTag"); }
	TWeakObjectPtr<APrimalShip const , FWeakObjectPtr>& CurrentPrimalShipField() { return *GetNativePointerField<TWeakObjectPtr<APrimalShip const , FWeakObjectPtr>*>(this, "AShooterCharacter.CurrentPrimalShip"); }
	UMotionWarpingComponent*& MyMotionWarpingComponentField() { return *GetNativePointerField<UMotionWarpingComponent**>(this, "AShooterCharacter.MyMotionWarpingComponent"); }
	BitFieldValue<bool, unsigned char> bWasProne() { return { this, "AShooterCharacter.bWasProne"}; }
	BitFieldValue<bool, unsigned char> bIsPreviewCharacter() { return { this, "AShooterCharacter.bIsPreviewCharacter"}; }
	BitFieldValue<bool, unsigned char> bReleasingGrapHook() { return { this, "AShooterCharacter.bReleasingGrapHook"}; }
	BitFieldValue<bool, unsigned char> bHasBoneModifiersOverride() { return { this, "AShooterCharacter.bHasBoneModifiersOverride"}; }
	BitFieldValue<bool, unsigned char> bHasBoneModifiersOverride_UsingPlayerProportions() { return { this, "AShooterCharacter.bHasBoneModifiersOverride_UsingPlayerProportions"}; }
	BitFieldValue<bool, unsigned char> bIsRainWatered() { return { this, "AShooterCharacter.bIsRainWatered"}; }
	BitFieldValue<bool, unsigned char> bIsFastInventoryActivated() { return { this, "AShooterCharacter.bIsFastInventoryActivated"}; }
	BitFieldValue<bool, unsigned char> bIsOnSeatingStructure() { return { this, "AShooterCharacter.bIsOnSeatingStructure"}; }
	BitFieldValue<bool, unsigned char> bIsControllingBallista() { return { this, "AShooterCharacter.bIsControllingBallista"}; }
	BitFieldValue<bool, unsigned char> bIsPilotingShip() { return { this, "AShooterCharacter.bIsPilotingShip"}; }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffset() { return { this, "AShooterCharacter.bUseBallistaAimOffset"}; }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffset_StandingTurret() { return { this, "AShooterCharacter.bUseBallistaAimOffset_StandingTurret"}; }
	BitFieldValue<bool, unsigned char> bIsServerAdmin() { return { this, "AShooterCharacter.bIsServerAdmin"}; }
	BitFieldValue<bool, unsigned char> bShouldInvertTurnInput() { return { this, "AShooterCharacter.bShouldInvertTurnInput"}; }
	BitFieldValue<bool, unsigned char> bPreventWeaponMovementAnims() { return { this, "AShooterCharacter.bPreventWeaponMovementAnims"}; }
	BitFieldValue<bool, unsigned char> bNormalizeHeadPosition() { return { this, "AShooterCharacter.bNormalizeHeadPosition"}; }
	BitFieldValue<bool, unsigned char> bPreventShowHUDOnSpawnIntroCompletion() { return { this, "AShooterCharacter.bPreventShowHUDOnSpawnIntroCompletion"}; }
	BitFieldValue<bool, unsigned char> bStartedBossFight() { return { this, "AShooterCharacter.bStartedBossFight"}; }
	BitFieldValue<bool, unsigned char> bIsAlternateShooterCharacter() { return { this, "AShooterCharacter.bIsAlternateShooterCharacter"}; }
	BitFieldValue<bool, unsigned char> bPreventLaunchMountedDinoWhileRiding() { return { this, "AShooterCharacter.bPreventLaunchMountedDinoWhileRiding"}; }
	BitFieldValue<bool, unsigned char> bBlockSpawnIntro() { return { this, "AShooterCharacter.bBlockSpawnIntro"}; }
	BitFieldValue<bool, unsigned char> bCacheRidingDinoWeapon() { return { this, "AShooterCharacter.bCacheRidingDinoWeapon"}; }
	BitFieldValue<bool, unsigned char> bWasLocallyControlled() { return { this, "AShooterCharacter.bWasLocallyControlled"}; }
	BitFieldValue<bool, unsigned char> bWasPlayerSplitScreen() { return { this, "AShooterCharacter.bWasPlayerSplitScreen"}; }
	BitFieldValue<bool, unsigned char> bWasLocalPossessedByControlled() { return { this, "AShooterCharacter.bWasLocalPossessedByControlled"}; }
	BitFieldValue<bool, unsigned char> bWasHostPlayer() { return { this, "AShooterCharacter.bWasHostPlayer"}; }
	BitFieldValue<bool, unsigned char> bIsLocallyInterpolatingViewLocX() { return { this, "AShooterCharacter.bIsLocallyInterpolatingViewLocX"}; }
	BitFieldValue<bool, unsigned char> bIsLocallyInterpolatingViewLocY() { return { this, "AShooterCharacter.bIsLocallyInterpolatingViewLocY"}; }
	BitFieldValue<bool, unsigned char> bIsLocallyInterpolatngViewLocZ() { return { this, "AShooterCharacter.bIsLocallyInterpolatngViewLocZ"}; }
	BitFieldValue<bool, unsigned char> bWantsMeshVisibilityReset() { return { this, "AShooterCharacter.bWantsMeshVisibilityReset"}; }
	BitFieldValue<bool, unsigned char> bIsHidingWeaponForMontage() { return { this, "AShooterCharacter.bIsHidingWeaponForMontage"}; }
	BitFieldValue<bool, unsigned char> bUsingWeaponHandIK() { return { this, "AShooterCharacter.bUsingWeaponHandIK"}; }
	BitFieldValue<bool, unsigned char> bUsingGenderOverride() { return { this, "AShooterCharacter.bUsingGenderOverride"}; }
	BitFieldValue<bool, unsigned char> bPendingGenderOverrideRefresh() { return { this, "AShooterCharacter.bPendingGenderOverrideRefresh"}; }
	BitFieldValue<bool, unsigned char> bApplyDeferredBodyMaskTextures() { return { this, "AShooterCharacter.bApplyDeferredBodyMaskTextures"}; }
	BitFieldValue<bool, unsigned char> bUseDefaultMaterialFatProportions() { return { this, "AShooterCharacter.bUseDefaultMaterialFatProportions"}; }
	BitFieldValue<bool, unsigned char> bAutoPlayer() { return { this, "AShooterCharacter.bAutoPlayer"}; }
	BitFieldValue<bool, unsigned char> bAutoJump() { return { this, "AShooterCharacter.bAutoJump"}; }
	BitFieldValue<bool, unsigned char> bAutoFire() { return { this, "AShooterCharacter.bAutoFire"}; }
	BitFieldValue<bool, unsigned char> bAutoFireTarget() { return { this, "AShooterCharacter.bAutoFireTarget"}; }
	BitFieldValue<bool, unsigned char> bAutoProne() { return { this, "AShooterCharacter.bAutoProne"}; }
	BitFieldValue<bool, unsigned char> bHasAppliedCosmeticAttachmentZOffset() { return { this, "AShooterCharacter.bHasAppliedCosmeticAttachmentZOffset"}; }
	BitFieldValue<bool, unsigned char> bHasRunLevelCheck() { return { this, "AShooterCharacter.bHasRunLevelCheck"}; }
	bool CanReload() { return NativeCall<bool>(this, "AShooterCharacter.CanReload()"); }
	void BPSuicide_Implementation() { NativeCall<void>(this, "AShooterCharacter.BPSuicide_Implementation()"); }
	void ServerRequestSkillCooldowns() { NativeCall<void>(this, "AShooterCharacter.ServerRequestSkillCooldowns()"); }
	bool CanCrouchInternal() { return NativeCall<bool>(this, "AShooterCharacter.CanCrouchInternal()"); }
	void SyncGrapHookDistance(float Distance) { NativeCall<void, float>(this, "AShooterCharacter.SyncGrapHookDistance(float)", Distance); }
	void UpdateSeatingStructureHandIK() { NativeCall<void>(this, "AShooterCharacter.UpdateSeatingStructureHandIK()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "AShooterCharacter.ShouldTickIfViewportsOnly()"); }
	void SpawnDefaultController() { NativeCall<void>(this, "AShooterCharacter.SpawnDefaultController()"); }
	void BPUpdatePawnMeshes(bool bForceThirdPerson, bool bForceFlush) { NativeCall<void, bool, bool>(this, "AShooterCharacter.BPUpdatePawnMeshes(bool,bool)", bForceThirdPerson, bForceFlush); }
	FName GetUsedWeaponAttachPoint() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterCharacter.GetUsedWeaponAttachPoint()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TRotator<double>* CalculateForwarBendingAngle(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AShooterCharacter.CalculateForwarBendingAngle()", result); }
	void RemoveCurrentWeaponItem() { NativeCall<void>(this, "AShooterCharacter.RemoveCurrentWeaponItem()"); }
	void OnStopFire_Code(bool InterceptInput) { NativeCall<void, bool>(this, "AShooterCharacter.OnStopFire_Code(bool)", InterceptInput); }
	void ServerPrepareMountedDinoForLaunch(UE::Math::TVector<double>* viewLoc, UE::Math::TVector<double>* viewDir, bool bIsSecondary) { if (!viewLoc) throw std::invalid_argument("Null native value parameter"); if (!viewDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, bool>(this, "AShooterCharacter.ServerPrepareMountedDinoForLaunch(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", *viewLoc, *viewDir, bIsSecondary); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >* GetDynamicFaceIndex(TArray<unsigned char, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.GetDynamicFaceIndex()", result); }
	void ServerNetEndClimbingLadder(bool bIsClimbOver, UE::Math::TVector<double>* ClimbOverLoc, UE::Math::TVector<double>* JumpDir) { if (!ClimbOverLoc) throw std::invalid_argument("Null native value parameter"); if (!JumpDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterCharacter.ServerNetEndClimbingLadder(bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", bIsClimbOver, *ClimbOverLoc, *JumpDir); }
	void MulticastOnVoiceTalkingStateChanged(bool isTalking, bool isMuted) { NativeCall<void, bool, bool>(this, "AShooterCharacter.MulticastOnVoiceTalkingStateChanged(bool,bool)", isTalking, isMuted); }
	bool IsSkillReadyToUse(FName SkillName) { return NativeCall<bool, FName>(this, "AShooterCharacter.IsSkillReadyToUse(FName)", SkillName); }
	void SetEnableHandIK(bool bLeft, bool bRight, bool bBindForwad) { NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetEnableHandIK(bool,bool,bool)", bLeft, bRight, bBindForwad); }
	void TakeSeatingStructureHandIK() { NativeCall<void>(this, "AShooterCharacter.TakeSeatingStructureHandIK()"); }
	void ServerSwitchBallistaAmmo() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchBallistaAmmo()"); }
	void HandleNearLedgeImpulse(float DeltaSeconds, bool bIsCurrentlySubMerged) { NativeCall<void, float, bool>(this, "AShooterCharacter.HandleNearLedgeImpulse(float,bool)", DeltaSeconds, bIsCurrentlySubMerged); }
	UE::Math::TVector<double>* GetPawnViewLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.GetPawnViewLocation()", result); }
	APrimalDinoCharacter* GetRidingOn() { return NativeCall<APrimalDinoCharacter*>(this, "AShooterCharacter.GetRidingOn()"); }
	bool CanDestroyByMeshing() { return NativeCall<bool>(this, "AShooterCharacter.CanDestroyByMeshing()"); }
	void StandingMountedTurret_ServerFireAtTarget(AActor* Target, UE::Math::TVector<double>* ShootDir, int MissileIndex) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >, int>(this, "AShooterCharacter.StandingMountedTurret_ServerFireAtTarget(AActor*,UE::Math::TVector<double>,int)", Target, *ShootDir, MissileIndex); }
	void BreakGrapple() { NativeCall<void>(this, "AShooterCharacter.BreakGrapple()"); }
	UE::Math::TVector<double>* CalculateLookAtHeadLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.CalculateLookAtHeadLocation()", result); }
	bool IsNearTopOfLadder() { return NativeCall<bool>(this, "AShooterCharacter.IsNearTopOfLadder()"); }
	UE::Math::TVector<double>* GetVisualVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.GetVisualVelocity()", result); }
	void ClientSetExpectedBase(unsigned int BaseID) { NativeCall<void, unsigned int>(this, "AShooterCharacter.ClientSetExpectedBase(unsignedint)", BaseID); }
	bool UseAlternateStandingAnim() { return NativeCall<bool>(this, "AShooterCharacter.UseAlternateStandingAnim()"); }
	void ServerRequestSkillCooldowns_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerRequestSkillCooldowns_Implementation()"); }
	void CancelWeaponHideForEmote() { NativeCall<void>(this, "AShooterCharacter.CancelWeaponHideForEmote()"); }
	bool AllowTreadWater() { return NativeCall<bool>(this, "AShooterCharacter.AllowTreadWater()"); }
	bool IsProne() { return NativeCall<bool>(this, "AShooterCharacter.IsProne()"); }
	void ClientNotifyLevelUp_AllLevels() { NativeCall<void>(this, "AShooterCharacter.ClientNotifyLevelUp_AllLevels()"); }
	void BPAddSkillCooldown(FName SkillName, float CooldownTime) { NativeCall<void, FName, float>(this, "AShooterCharacter.BPAddSkillCooldown(FName,float)", SkillName, CooldownTime); }
	int GiveHexagonsOnMissionReward(FName MissionTag, int BonusEarnedHexagons, int HexagonAmountOverride) { return NativeCall<int, FName, int, int>(this, "AShooterCharacter.GiveHexagonsOnMissionReward(FName,int,int)", MissionTag, BonusEarnedHexagons, HexagonAmountOverride); }
	void ServerSwitchMap() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchMap()"); }
	int GetEyebrowIndex() { return NativeCall<int>(this, "AShooterCharacter.GetEyebrowIndex()"); }
	bool ShouldReplicateRotPitch() { return NativeCall<bool>(this, "AShooterCharacter.ShouldReplicateRotPitch()"); }
	UPrimalInventoryComponent* GetInventoryComponent(AActor* UseOtherActor) { return NativeCall<UPrimalInventoryComponent*, AActor*>(this, "AShooterCharacter.GetInventoryComponent(AActor*)", UseOtherActor); }
	UE::Math::TVector<double>* GetTargetingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "AShooterCharacter.GetTargetingLocation(AActor*)", result, Attacker); }
	float GetUsedMaxCursorHUDDistance(AShooterPlayerController* PC) { return NativeCall<float, AShooterPlayerController*>(this, "AShooterCharacter.GetUsedMaxCursorHUDDistance(AShooterPlayerController*)", PC); }
	static UTexture2D* GetPlatformIconStatic(const FString& localPlatform, ECrossplayPlatform::Type otherPlayerPlatform) { return NativeCall<UTexture2D*, const FString&, ECrossplayPlatform::Type>(nullptr, "AShooterCharacter.GetPlatformIconStatic(FString&,ECrossplayPlatform::Type)", localPlatform, otherPlayerPlatform); }
	void LocalRefreshRidingRotation() { NativeCall<void>(this, "AShooterCharacter.LocalRefreshRidingRotation()"); }
	bool ShouldUseAnimationUpdateRateOptimizations() { return NativeCall<bool>(this, "AShooterCharacter.ShouldUseAnimationUpdateRateOptimizations()"); }
	bool IsFiring() { return NativeCall<bool>(this, "AShooterCharacter.IsFiring()"); }
	bool IsCurrentPassengerLimitCameraYaw() { return NativeCall<bool>(this, "AShooterCharacter.IsCurrentPassengerLimitCameraYaw()"); }
	void ClosedInventoryUI() { NativeCall<void>(this, "AShooterCharacter.ClosedInventoryUI()"); }
	bool CanEverProne() { return NativeCall<bool>(this, "AShooterCharacter.CanEverProne()"); }
	void RegisterFiredProjectile(AShooterProjectile* Projectile) { NativeCall<void, AShooterProjectile*>(this, "AShooterCharacter.RegisterFiredProjectile(AShooterProjectile*)", Projectile); }
	bool GetSkillModifier(FName SkillName, FName ModifierName, float& OutValue) { return NativeCall<bool, FName, FName, float&>(this, "AShooterCharacter.GetSkillModifier(FName,FName,float&)", SkillName, ModifierName, OutValue); }
	float GetTimeLeftSuicideCooldown() { return NativeCall<float>(this, "AShooterCharacter.GetTimeLeftSuicideCooldown()"); }
	void ServerReceiveTribeInvite(AShooterPlayerController* playerSendingInvite) { NativeCall<void, AShooterPlayerController*>(this, "AShooterCharacter.ServerReceiveTribeInvite(AShooterPlayerController*)", playerSendingInvite); }
	void BPSetFirstPersonMasterPoseComponent(USkeletalMeshComponent* firstPersonMasterPosecomponent) { NativeCall<void, USkeletalMeshComponent*>(this, "AShooterCharacter.BPSetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)", firstPersonMasterPosecomponent); }
	void OnEmoteFinished() { NativeCall<void>(this, "AShooterCharacter.OnEmoteFinished()"); }
	void OnRep_LastPushedDirection() { NativeCall<void>(this, "AShooterCharacter.OnRep_LastPushedDirection()"); }
	void OnAsPassengerMovedToSeat(int FromIndex, int ToIndex) { NativeCall<void, int, int>(this, "AShooterCharacter.OnAsPassengerMovedToSeat(int,int)", FromIndex, ToIndex); }
	void OnRichPresenceUpdated(UDiscordClientResult* Result) { NativeCall<void, UDiscordClientResult*>(this, "AShooterCharacter.OnRichPresenceUpdated(UDiscordClientResult*)", Result); }
	void CycleFastInventoryNext(bool Next) { NativeCall<void, bool>(this, "AShooterCharacter.CycleFastInventoryNext(bool)", Next); }
	void ResetRootAimRotation() { NativeCall<void>(this, "AShooterCharacter.ResetRootAimRotation()"); }
	bool CanDoUsableHarvesting() { return NativeCall<bool>(this, "AShooterCharacter.CanDoUsableHarvesting()"); }
	void BPUnlockedAllBTTExplorerNotes(int exp) { NativeCall<void, int>(this, "AShooterCharacter.BPUnlockedAllBTTExplorerNotes(int)", exp); }
	int BPGetPlayerHexagonCount() { return NativeCall<int>(this, "AShooterCharacter.BPGetPlayerHexagonCount()"); }
	void SetPreventEquipAllWeapons(bool bPrevent) { NativeCall<void, bool>(this, "AShooterCharacter.SetPreventEquipAllWeapons(bool)", bPrevent); }
	void HideWeaponForEmote(unsigned char EmoteIndex) { NativeCall<void, unsigned char>(this, "AShooterCharacter.HideWeaponForEmote(unsignedchar)", EmoteIndex); }
	double GetLastSkillUsedTime(FName SkillName) { return NativeCall<double, FName>(this, "AShooterCharacter.GetLastSkillUsedTime(FName)", SkillName); }
	bool AllowHurtAnimation() { return NativeCall<bool>(this, "AShooterCharacter.AllowHurtAnimation()"); }
	void ServerLaunchMountedDino(bool bIsSecondary) { NativeCall<void, bool>(this, "AShooterCharacter.ServerLaunchMountedDino(bool)", bIsSecondary); }
	void CheckGenderOverrideRefreshComponents() { NativeCall<void>(this, "AShooterCharacter.CheckGenderOverrideRefreshComponents()"); }
	bool IsSkillUnlocked(FName SkillName, int& OutRank) { return NativeCall<bool, FName, int&>(this, "AShooterCharacter.IsSkillUnlocked(FName,int&)", SkillName, OutRank); }
	AShooterWeapon* GetWeapon() { return NativeCall<AShooterWeapon*>(this, "AShooterCharacter.GetWeapon()"); }
	void RebuildReplicatedSkills() { NativeCall<void>(this, "AShooterCharacter.RebuildReplicatedSkills()"); }
	void ClientNotifyTribeRequest(const FString& RequestTribeName, AShooterCharacter* PlayerCharacter) { NativeCall<void, const FString&, AShooterCharacter*>(this, "AShooterCharacter.ClientNotifyTribeRequest(FString&,AShooterCharacter*)", RequestTribeName, PlayerCharacter); }
	void OnWeaponEquipped(AShooterWeapon* NewWeapon) { NativeCall<void, AShooterWeapon*>(this, "AShooterCharacter.OnWeaponEquipped(AShooterWeapon*)", NewWeapon); }
	APrimalDinoCharacter* GetBasedOnDinoConst() { return NativeCall<APrimalDinoCharacter*>(this, "AShooterCharacter.GetBasedOnDinoConst()"); }
	void BPSetupFirstPersonHandsMesh() { NativeCall<void>(this, "AShooterCharacter.BPSetupFirstPersonHandsMesh()"); }
	__int64 GetHeadHairCosmeticModID() { return NativeCall<__int64>(this, "AShooterCharacter.GetHeadHairCosmeticModID()"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >* GetDynamicFaceMaterialBytes(TArray<unsigned char, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "AShooterCharacter.GetDynamicFaceMaterialBytes()", result); }
	float GetHeadHairMorphTargetValue() { return NativeCall<float>(this, "AShooterCharacter.GetHeadHairMorphTargetValue()"); }
	void WeaponUnequipped(AShooterWeapon* OldWeapon) { NativeCall<void, AShooterWeapon*>(this, "AShooterCharacter.WeaponUnequipped(AShooterWeapon*)", OldWeapon); }
	void AddStoredCounter(const FString& CounterName, double StoredTime, int Count) { NativeCall<void, const FString&, double, int>(this, "AShooterCharacter.AddStoredCounter(FString&,double,int)", CounterName, StoredTime, Count); }
	void UpdateExpectedBase() { NativeCall<void>(this, "AShooterCharacter.UpdateExpectedBase()"); }
	float GetSkillCooldownTimeRemaining(FName SkillName) { return NativeCall<float, FName>(this, "AShooterCharacter.GetSkillCooldownTimeRemaining(FName)", SkillName); }
	void OnStartFire_Code(bool InterceptInput) { NativeCall<void, bool>(this, "AShooterCharacter.OnStartFire_Code(bool)", InterceptInput); }
	void BPUnstasis() { NativeCall<void>(this, "AShooterCharacter.BPUnstasis()"); }
	void AddHostileStacks(int NumStacksToAdd, bool bShareWithTribeMembers, bool bShareWithOfflineMembers) { NativeCall<void, int, bool, bool>(this, "AShooterCharacter.AddHostileStacks(int,bool,bool)", NumStacksToAdd, bShareWithTribeMembers, bShareWithOfflineMembers); }
	FString* LinkedPlayerIDString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterCharacter.LinkedPlayerIDString()", result); }
	UAnimSequence* GetAlternateStandingAnim(float& OutBlendInTime, float& OutBlendOutTime) { return NativeCall<UAnimSequence*, float&, float&>(this, "AShooterCharacter.GetAlternateStandingAnim(float&,float&)", OutBlendInTime, OutBlendOutTime); }
	void StartCameraTransition(float Duration) { NativeCall<void, float>(this, "AShooterCharacter.StartCameraTransition(float)", Duration); }
	void RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent* Inventory, UPrimalItem* ForItem, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, AActor*>(this, "AShooterCharacter.RemoveCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", Inventory, ForItem, To); }
	void ClientClearTribeRequest() { NativeCall<void>(this, "AShooterCharacter.ClientClearTribeRequest()"); }
	float GetTargetingSpeedModifier() { return NativeCall<float>(this, "AShooterCharacter.GetTargetingSpeedModifier()"); }
	bool BPSetPlayerHexagonCount_Implementation(int NewHexagonCount) { return NativeCall<bool, int>(this, "AShooterCharacter.BPSetPlayerHexagonCount_Implementation(int)", NewHexagonCount); }
	bool IsOutside() { return NativeCall<bool>(this, "AShooterCharacter.IsOutside()"); }
	void ClientInviteToAlliance(int RequestingTeam, unsigned int AllianceID, const FString& AllianceName, const FString& InviteeName) { NativeCall<void, int, unsigned int, const FString&, const FString&>(this, "AShooterCharacter.ClientInviteToAlliance(int,unsignedint,FString&,FString&)", RequestingTeam, AllianceID, AllianceName, InviteeName); }
	void MulticastOnVoiceTalkingStateChanged_Implementation(bool isTalking, bool isMuted) { NativeCall<void, bool, bool>(this, "AShooterCharacter.MulticastOnVoiceTalkingStateChanged_Implementation(bool,bool)", isTalking, isMuted); }
	bool GetBlockingShieldOffsets(UE::Math::TVector<double>& OutBlockingShieldFPVTranslation, UE::Math::TRotator<double>& OutBlockingShieldFPVRotation) { return NativeCall<bool, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AShooterCharacter.GetBlockingShieldOffsets(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutBlockingShieldFPVTranslation, OutBlockingShieldFPVRotation); }
	void OpenedInventoryUI() { NativeCall<void>(this, "AShooterCharacter.OpenedInventoryUI()"); }
	float GetFacialHairMorphTargetValue() { return NativeCall<float>(this, "AShooterCharacter.GetFacialHairMorphTargetValue()"); }
	USkeletalMeshComponent* GetSpecifcPawnMesh(bool WantFirstPerson) { return NativeCall<USkeletalMeshComponent*, bool>(this, "AShooterCharacter.GetSpecifcPawnMesh(bool)", WantFirstPerson); }
	bool InterceptUseAction() { return NativeCall<bool>(this, "AShooterCharacter.InterceptUseAction()"); }
	void ClientWasPushed() { NativeCall<void>(this, "AShooterCharacter.ClientWasPushed()"); }
	TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr> GetSeatingStructure() { using AsaReturnType = TWeakObjectPtr < APrimalStructureSeating , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterCharacter.GetSeatingStructure()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void CopyBoneModifiersToMesh(USkeletalMeshComponent* ToMesh) { NativeCall<void, USkeletalMeshComponent*>(this, "AShooterCharacter.CopyBoneModifiersToMesh(USkeletalMeshComponent*)", ToMesh); }
	UE::Math::TVector<double>* GetLastSweepLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.GetLastSweepLocation()", result); }
	UE::Math::TVector<double>* GetTPVCameraOffset(UE::Math::TVector<double>* result, bool bForASACamera) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AShooterCharacter.GetTPVCameraOffset(bool)", result, bForASACamera); }
	bool IsPlayingRepawnAnim() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingRepawnAnim()"); }
	void PlayTalkingAnimation() { NativeCall<void>(this, "AShooterCharacter.PlayTalkingAnimation()"); }
	void ReleaseSeatingStructureHandIK() { NativeCall<void>(this, "AShooterCharacter.ReleaseSeatingStructureHandIK()"); }
	bool GetAdditiveStandingAnimNonAdditive() { return NativeCall<bool>(this, "AShooterCharacter.GetAdditiveStandingAnimNonAdditive()"); }
	int GetFacialHairIndex() { return NativeCall<int>(this, "AShooterCharacter.GetFacialHairIndex()"); }
	void PlayDrinkingAnimation() { NativeCall<void>(this, "AShooterCharacter.PlayDrinkingAnimation()"); }
	void ClearBoneModifiersOverride() { NativeCall<void>(this, "AShooterCharacter.ClearBoneModifiersOverride()"); }
	UE::Math::TVector<double>* BPGetHealthBarColor(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.BPGetHealthBarColor()", result); }
	void SetOverrideGender() { NativeCall<void>(this, "AShooterCharacter.SetOverrideGender()"); }
	bool GetStoredCounter(const FString& CounterName, FStoredCounter& StoredCounter) { return NativeCall<bool, const FString&, FStoredCounter&>(this, "AShooterCharacter.GetStoredCounter(FString&,FStoredCounter&)", CounterName, StoredCounter); }
	void NetUpdateCharacterConfig() { NativeCall<void>(this, "AShooterCharacter.NetUpdateCharacterConfig()"); }
	void HideWeaponForEmote_Implementation(unsigned char EmoteIndex) { NativeCall<void, unsigned char>(this, "AShooterCharacter.HideWeaponForEmote_Implementation(unsignedchar)", EmoteIndex); }
	void PlayeReloadBallistaAnimation() { NativeCall<void>(this, "AShooterCharacter.PlayeReloadBallistaAnimation()"); }
	UE::Math::TVector<double>* GetOrbitCamTargetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.GetOrbitCamTargetLocation()", result); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "AShooterCharacter.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	AActor* GetOtherActorToIgnore() { return NativeCall<AActor*>(this, "AShooterCharacter.GetOtherActorToIgnore()"); }
	void BPUnlockedAllExplorerNotes() { NativeCall<void>(this, "AShooterCharacter.BPUnlockedAllExplorerNotes()"); }
	__int64 GetEyebrowCosmeticModID() { return NativeCall<__int64>(this, "AShooterCharacter.GetEyebrowCosmeticModID()"); }
	void ServerSetTargeting(bool bNewTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetTargeting(bool)", bNewTargeting); }
	void ServerSetBallistaTargeting(bool StartTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetBallistaTargeting(bool)", StartTargeting); }
	bool CanEquipWeapons() { return NativeCall<bool>(this, "AShooterCharacter.CanEquipWeapons()"); }
	void FellOutOfWorld(const UDamageType& dmgType) { NativeCall<void, const UDamageType&>(this, "AShooterCharacter.FellOutOfWorld(UDamageType&)", dmgType); }
	void DoLevelFixup(bool bForceCheck, bool bForceFixup) { NativeCall<void, bool, bool>(this, "AShooterCharacter.DoLevelFixup(bool,bool)", bForceCheck, bForceFixup); }
	void ClearOverrideGender() { NativeCall<void>(this, "AShooterCharacter.ClearOverrideGender()"); }
	void BPRefreshSkinAndHair() { NativeCall<void>(this, "AShooterCharacter.BPRefreshSkinAndHair()"); }
	void OnHairCosmeticDownloadCompleteSnapshot(bool bSuccess, const FInstalledMod& InstalledMod, UPrimalItem* Item, AActor* To, UE::Math::TVector<double>* Offset, float MaxExtent, int Pose, bool bCollisionOn) { if (!Offset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, const FInstalledMod &, UPrimalItem *, AActor *, UE :: Math :: TVector < double >, float, int, bool>(this, "AShooterCharacter.OnHairCosmeticDownloadCompleteSnapshot(bool,FInstalledMod&,UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool)", bSuccess, InstalledMod, Item, To, *Offset, MaxExtent, Pose, bCollisionOn); }
	AActor* GetTertiaryMountedActor() { return NativeCall<AActor*>(this, "AShooterCharacter.GetTertiaryMountedActor()"); }
	void NetSimulatedForceUpdateAimedActors(float OverrideMaxDistance) { NativeCall<void, float>(this, "AShooterCharacter.NetSimulatedForceUpdateAimedActors(float)", OverrideMaxDistance); }
	void DoPlayIntroVO() { NativeCall<void>(this, "AShooterCharacter.DoPlayIntroVO()"); }
	void SetCustomCosmeticAttachmentZOffset(const UE::Math::TVector2<double>& NewOffset) { NativeCall<void, const UE::Math::TVector2<double>&>(this, "AShooterCharacter.SetCustomCosmeticAttachmentZOffset(UE::Math::TVector2<double>&)", NewOffset); }
	bool IsPreInventoryItem(UPrimalItem* TheItem) { return NativeCall<bool, UPrimalItem*>(this, "AShooterCharacter.IsPreInventoryItem(UPrimalItem*)", TheItem); }
	void ClientsSpawnHexagonVFX_Implementation(int NumHexagons, float OverrideCollectSFXVolume, UE::Math::TVector<double>* OverrideVfxSpawnLoc, int OverrideHexagonVFXActorCount, bool VFXImmediatelyAttracts) { if (!OverrideVfxSpawnLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, float, UE :: Math :: TVector < double >, int, bool>(this, "AShooterCharacter.ClientsSpawnHexagonVFX_Implementation(int,float,UE::Math::TVector<double>,int,bool)", NumHexagons, OverrideCollectSFXVolume, *OverrideVfxSpawnLoc, OverrideHexagonVFXActorCount, VFXImmediatelyAttracts); }
	void SetCarriedPitchYaw(float NewCarriedPitch, float NewCarriedYaw) { NativeCall<void, float, float>(this, "AShooterCharacter.SetCarriedPitchYaw(float,float)", NewCarriedPitch, NewCarriedYaw); }
	bool UseHighQualityMovement() { return NativeCall<bool>(this, "AShooterCharacter.UseHighQualityMovement()"); }
	void OnHairCosmeticDownloadComplete(bool bSuccess, const FInstalledMod& InstalledMod, bool bForceUpdate) { NativeCall<void, bool, const FInstalledMod&, bool>(this, "AShooterCharacter.OnHairCosmeticDownloadComplete(bool,FInstalledMod&,bool)", bSuccess, InstalledMod, bForceUpdate); }
	bool UnstasisCheckRagdollGround() { return NativeCall<bool>(this, "AShooterCharacter.UnstasisCheckRagdollGround()"); }
	AStandingMountedTurret* GetControlledStandingMountedTurret() { return NativeCall<AStandingMountedTurret*>(this, "AShooterCharacter.GetControlledStandingMountedTurret()"); }
	bool GetSkillCooldown(FName SkillName, FSkillCooldown& OutCooldown) { return NativeCall<bool, FName, FSkillCooldown&>(this, "AShooterCharacter.GetSkillCooldown(FName,FSkillCooldown&)", SkillName, OutCooldown); }
	void ServerRequestHexagonTrade(int RequestedTradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "AShooterCharacter.ServerRequestHexagonTrade(int,int)", RequestedTradableItemIndex, Quantity); }
	void CallGameStateHandleEvent(FName NameParam, UE::Math::TVector<double>* VecParam) { if (!VecParam) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >>(this, "AShooterCharacter.CallGameStateHandleEvent(FName,UE::Math::TVector<double>)", NameParam, *VecParam); }
	void UpdateLocallyInterpolatedViewLocation() { NativeCall<void>(this, "AShooterCharacter.UpdateLocallyInterpolatedViewLocation()"); }
	void BPApplyBodyColors(USkeletalMeshComponent* toMesh) { NativeCall<void, USkeletalMeshComponent*>(this, "AShooterCharacter.BPApplyBodyColors(USkeletalMeshComponent*)", toMesh); }
	UE::Math::TVector<double>* GetFPVShadowMeshOffset(UE::Math::TVector<double>* result, bool bReturnMeshLocation) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AShooterCharacter.GetFPVShadowMeshOffset(bool)", result, bReturnMeshLocation); }
	UE::Math::TRotator<double>* GetAimOffsets(UE::Math::TRotator<double>* result, float DeltaTime, UE::Math::TRotator<double>& RootRotOffset, float& RootYawSpeed, float MaxYawAimClamp, UE::Math::TVector<double>& RootLocOffset, bool bInterpolationStep) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float, UE::Math::TRotator<double>&, float&, float, UE::Math::TVector<double>&, bool>(this, "AShooterCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,bool)", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, bInterpolationStep); }
	float GetActualTargetingFOV(float DefaultTargetingFOV) { return NativeCall<float, float>(this, "AShooterCharacter.GetActualTargetingFOV(float)", DefaultTargetingFOV); }
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type SessionType) { NativeCall<void, FName, EOnJoinSessionCompleteResult::Type>(this, "AShooterCharacter.OnJoinSessionComplete(FName,EOnJoinSessionCompleteResult::Type)", SessionName, SessionType); }
	void ServerToClientsPlayFireBallistaAnimation() { NativeCall<void>(this, "AShooterCharacter.ServerToClientsPlayFireBallistaAnimation()"); }
	bool CanBeTetheredByPlayer() { return NativeCall<bool>(this, "AShooterCharacter.CanBeTetheredByPlayer()"); }
	APrimalShip* GetBasedOnRaft(bool bOnlyCountDirectBase, bool bOnlyCountIndirectBase) { return NativeCall<APrimalShip*, bool, bool>(this, "AShooterCharacter.GetBasedOnRaft(bool,bool)", bOnlyCountDirectBase, bOnlyCountIndirectBase); }
	float GetTimeSinceLastUsedSkill(FName SkillName) { return NativeCall<float, FName>(this, "AShooterCharacter.GetTimeSinceLastUsedSkill(FName)", SkillName); }
	void TickUpdateHandIK(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.TickUpdateHandIK(float)", DeltaSeconds); }
	bool HasAnyOtherBuffsUsingConsolidatedMultiUse(APrimalBuff* BuffToSkip) { return NativeCall<bool, APrimalBuff*>(this, "AShooterCharacter.HasAnyOtherBuffsUsingConsolidatedMultiUse(APrimalBuff*)", BuffToSkip); }
	float BPOverrideHealthBarOffset(APlayerController* forPC) { return NativeCall<float, APlayerController*>(this, "AShooterCharacter.BPOverrideHealthBarOffset(APlayerController*)", forPC); }
	void UpdateDiscordRichPresence() { NativeCall<void>(this, "AShooterCharacter.UpdateDiscordRichPresence()"); }
	void UpdateWeaponHandIK() { NativeCall<void>(this, "AShooterCharacter.UpdateWeaponHandIK()"); }
	void StandingMountedTurret_ServerFireAtTarget_Implementation(AActor* Target, UE::Math::TVector<double>* ShootDir, int MissileIndex) { if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >, int>(this, "AShooterCharacter.StandingMountedTurret_ServerFireAtTarget_Implementation(AActor*,UE::Math::TVector<double>,int)", Target, *ShootDir, MissileIndex); }
	void SetAutoPlayer(bool bEnable) { NativeCall<void, bool>(this, "AShooterCharacter.SetAutoPlayer(bool)", bEnable); }
	float GetPrimalCameraDesiredArmLength(const FPrimalCameraParams* ForCameraParams, float CurrentCameraArmLength, float DefaultCameraArmLength) { return NativeCall<float, const FPrimalCameraParams*, float, float>(this, "AShooterCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)", ForCameraParams, CurrentCameraArmLength, DefaultCameraArmLength); }
	bool IsWatchingExplorerNote() { return NativeCall<bool>(this, "AShooterCharacter.IsWatchingExplorerNote()"); }
	bool IsPlayingInitialSpawnAnim() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingInitialSpawnAnim()"); }
	void UpdateCharacterSnapshotMaterialData(UPrimalInventoryComponent* Inventory, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, AActor*>(this, "AShooterCharacter.UpdateCharacterSnapshotMaterialData(UPrimalInventoryComponent*,AActor*)", Inventory, To); }
	void ClearStoredCounter(const FString& CounterName) { NativeCall<void, const FString&>(this, "AShooterCharacter.ClearStoredCounter(FString&)", CounterName); }
	void ClientUpdatedInventory() { NativeCall<void>(this, "AShooterCharacter.ClientUpdatedInventory()"); }
	UE::Math::TVector<double>* GetTalkerLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterCharacter.GetTalkerLocation()", result); }
	void ProcessEvent(UFunction* Function, void* parms) { NativeCall<void, UFunction*, void*>(this, "AShooterCharacter.ProcessEvent(UFunction*,void*)", Function, parms); }
	void OrbitCamOff() { NativeCall<void>(this, "AShooterCharacter.OrbitCamOff()"); }
	void ServerNotifyProjectileImpact(const FHitResult& HitResult, bool bFromReplication, int FromProjectileID) { NativeCall<void, const FHitResult&, bool, int>(this, "AShooterCharacter.ServerNotifyProjectileImpact(FHitResult&,bool,int)", HitResult, bFromReplication, FromProjectileID); }
	int GetHostileStacks() { return NativeCall<int>(this, "AShooterCharacter.GetHostileStacks()"); }
	void TryGiveGenesisSeasonPassItems(int AppID) { NativeCall<void, int>(this, "AShooterCharacter.TryGiveGenesisSeasonPassItems(int)", AppID); }
	void NotifyControllerChanged() { NativeCall<void>(this, "AShooterCharacter.NotifyControllerChanged()"); }
	void OnAttachedToSeatingStructure() { NativeCall<void>(this, "AShooterCharacter.OnAttachedToSeatingStructure()"); }
	float GetCharacterCreatorDynamicMatValue(int GameData_DefaultDynamicMaterialByteFloats_index, FPlayerDynamicMaterialFloat& AssociatedDynamicMatModifierRange) { return NativeCall<float, int, FPlayerDynamicMaterialFloat&>(this, "AShooterCharacter.GetCharacterCreatorDynamicMatValue(int,FPlayerDynamicMaterialFloat&)", GameData_DefaultDynamicMaterialByteFloats_index, AssociatedDynamicMatModifierRange); }
	void AddSkillCooldown(FName SkillName, float CooldownTime) { NativeCall<void, FName, float>(this, "AShooterCharacter.AddSkillCooldown(FName,float)", SkillName, CooldownTime); }
	void OnRep_bIsClimbing() { NativeCall<void>(this, "AShooterCharacter.OnRep_bIsClimbing()"); }
	void ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent* Inventory, UPrimalItem* ForItem, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, AActor*>(this, "AShooterCharacter.ApplyCharacterSnapshotEquipmentForItem(UPrimalInventoryComponent*,UPrimalItem*,AActor*)", Inventory, ForItem, To); }
	void SetStoredCooldownPerClass(FName Name, double Value) { NativeCall<void, FName, double>(this, "AShooterCharacter.SetStoredCooldownPerClass(FName,double)", Name, Value); }
	int GetHeadHairIndex() { return NativeCall<int>(this, "AShooterCharacter.GetHeadHairIndex()"); }
	void ClearPreInventoryWeaponItemNetID() { NativeCall<void>(this, "AShooterCharacter.ClearPreInventoryWeaponItemNetID()"); }
	bool ApplyPendingMarketPayment() { return NativeCall<bool>(this, "AShooterCharacter.ApplyPendingMarketPayment()"); }
	void ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent* Inventory, AActor* To) { NativeCall<void, UPrimalInventoryComponent*, AActor*>(this, "AShooterCharacter.ApplyCharacterSnapshotEquipment(UPrimalInventoryComponent*,AActor*)", Inventory, To); }
	int BPGetPlayerHexagonCount_Implementation() { return NativeCall<int>(this, "AShooterCharacter.BPGetPlayerHexagonCount_Implementation()"); }
	void RecheckPendingMarketPayment() { NativeCall<void>(this, "AShooterCharacter.RecheckPendingMarketPayment()"); }
	__int64 GetFacialHairCosmeticModID() { return NativeCall<__int64>(this, "AShooterCharacter.GetFacialHairCosmeticModID()"); }
	void OnRep_DiscordUserID() { NativeCall<void>(this, "AShooterCharacter.OnRep_DiscordUserID()"); }
	bool UseAltAimOffsetAnim() { return NativeCall<bool>(this, "AShooterCharacter.UseAltAimOffsetAnim()"); }
	bool BPSetPlayerHexagonCount(int NewHexagonCount) { return NativeCall<bool, int>(this, "AShooterCharacter.BPSetPlayerHexagonCount(int)", NewHexagonCount); }
	bool AnimUseAimOffset() { return NativeCall<bool>(this, "AShooterCharacter.AnimUseAimOffset()"); }
	double GetLastAttackTime() { return NativeCall<double>(this, "AShooterCharacter.GetLastAttackTime()"); }
	UE::Math::TRotator<double>* GetPassengerAttachedRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AShooterCharacter.GetPassengerAttachedRotation()", result); }
	void OnAquariumLedgeJumpEnded() { NativeCall<void>(this, "AShooterCharacter.OnAquariumLedgeJumpEnded()"); }
	AShooterPlayerController* GetSpawnedForController() { return NativeCall<AShooterPlayerController*>(this, "AShooterCharacter.GetSpawnedForController()"); }
	void ServerReleaseGrapHookCable(bool bReleasing) { NativeCall<void, bool>(this, "AShooterCharacter.ServerReleaseGrapHookCable(bool)", bReleasing); }
	bool ShouldEvaluatePostProcessAnimBP(int LODLevel, int PostProcessAnimBPLODThreshold) { return NativeCall<bool, int, int>(this, "AShooterCharacter.ShouldEvaluatePostProcessAnimBP(int,int)", LODLevel, PostProcessAnimBPLODThreshold); }
	float GetDistanceBetweenBones(USkeletalMeshComponent* SkelMesh, FName TipBoneName, FName ShoulderBoneName) { return NativeCall<float, USkeletalMeshComponent*, FName, FName>(this, "AShooterCharacter.GetDistanceBetweenBones(USkeletalMeshComponent*,FName,FName)", SkelMesh, TipBoneName, ShoulderBoneName); }
	float PlayAnimMontage_ByAngle(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage*, float, FName, bool, bool, float, float>(this, "AShooterCharacter.PlayAnimMontage_ByAngle(UAnimMontage*,float,FName,bool,bool,float,float)", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	ECrossplayPlatform::Type GetCrossplayPlatform() { return NativeCall<ECrossplayPlatform::Type>(this, "AShooterCharacter.GetCrossplayPlatform()"); }
	void ShowWeapon() { NativeCall<void>(this, "AShooterCharacter.ShowWeapon()"); }
	void OnRep_CurrentWeapon(AShooterWeapon* LastWeapon) { NativeCall<void, AShooterWeapon*>(this, "AShooterCharacter.OnRep_CurrentWeapon(AShooterWeapon*)", LastWeapon); }
	float GetCurrentSkillCooldownDuration(FName SkillName) { return NativeCall<float, FName>(this, "AShooterCharacter.GetCurrentSkillCooldownDuration(FName)", SkillName); }
	void AttachToLadder(USceneComponent* Parent) { NativeCall<void, USceneComponent*>(this, "AShooterCharacter.AttachToLadder(USceneComponent*)", Parent); }
	bool StoreAppliedCosmetics(bool bDontSavePlayerData) { return NativeCall<bool, bool>(this, "AShooterCharacter.StoreAppliedCosmetics(bool)", bDontSavePlayerData); }
	UPrimalItem* GetHotbarSkillItemForSkill(FName SkillName) { return NativeCall<UPrimalItem*, FName>(this, "AShooterCharacter.GetHotbarSkillItemForSkill(FName)", SkillName); }
	void NetForceCallEmoteFinished_Implementation(bool bSkipOwner) { NativeCall<void, bool>(this, "AShooterCharacter.NetForceCallEmoteFinished_Implementation(bool)", bSkipOwner); }
	void WeaponEquipped(AShooterWeapon* NewWeapon) { NativeCall<void, AShooterWeapon*>(this, "AShooterCharacter.WeaponEquipped(AShooterWeapon*)", NewWeapon); }
	bool IsFemale() { return NativeCall<bool>(this, "AShooterCharacter.IsFemale()"); }
	void ClientsSpawnHexagonVFX(int NumHexagons, float OverrideCollectSFXVolume, UE::Math::TVector<double>* OverrideVfxSpawnLoc, int OverrideHexagonVFXActorCount, bool VFXImmediatelyAttracts) { if (!OverrideVfxSpawnLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, float, UE :: Math :: TVector < double >, int, bool>(this, "AShooterCharacter.ClientsSpawnHexagonVFX(int,float,UE::Math::TVector<double>,int,bool)", NumHexagons, OverrideCollectSFXVolume, *OverrideVfxSpawnLoc, OverrideHexagonVFXActorCount, VFXImmediatelyAttracts); }
	float GetDynamicMaterialBytesFloatValueByIndex(int index) { return NativeCall<float, int>(this, "AShooterCharacter.GetDynamicMaterialBytesFloatValueByIndex(int)", index); }
	void SetExpectedBase(APrimalStructure* BaseStructure) { NativeCall<void, APrimalStructure*>(this, "AShooterCharacter.SetExpectedBase(APrimalStructure*)", BaseStructure); }
	void NetUpdateCharacterConfig_Implementation() { NativeCall<void>(this, "AShooterCharacter.NetUpdateCharacterConfig_Implementation()"); }
	double GetStoredCooldownPerClass(FName Name, double DefaultValue) { return NativeCall<double, FName, double>(this, "AShooterCharacter.GetStoredCooldownPerClass(FName,double)", Name, DefaultValue); }
	bool IsTargeting() { return NativeCall<bool>(this, "AShooterCharacter.IsTargeting()"); }
	void OnWeaponUnequipped(AShooterWeapon* OldWeapon) { NativeCall<void, AShooterWeapon*>(this, "AShooterCharacter.OnWeaponUnequipped(AShooterWeapon*)", OldWeapon); }
	bool IsControllingStandingMountedTurret() { return NativeCall<bool>(this, "AShooterCharacter.IsControllingStandingMountedTurret()"); }
	void ClientNotifyLevelUp_AllLevels_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientNotifyLevelUp_AllLevels_Implementation()"); }
	void ClientPlayHarvestAnim() { NativeCall<void>(this, "AShooterCharacter.ClientPlayHarvestAnim()"); }
	void ServerCheckDrinkingWater() { NativeCall<void>(this, "AShooterCharacter.ServerCheckDrinkingWater()"); }
	void HideWeapon() { NativeCall<void>(this, "AShooterCharacter.HideWeapon()"); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "AShooterCharacter.OnRep_AttachmentReplication()"); }
};