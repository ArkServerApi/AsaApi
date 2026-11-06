#pragma once


struct FShooterCharacterSparseClassData : FPrimalCharacterSparseClassData
{
	// Fields

	TSoftClassPtr<APrimalBuff>& CheckCancelEmoteBuffClassField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "FShooterCharacterSparseClassData.CheckCancelEmoteBuffClass"); }
	float& MinimumDistanceThresholdToCrouchField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinimumDistanceThresholdToCrouch"); }
	float& MinimumDistanceThresholdToProneFromStandingField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinimumDistanceThresholdToProneFromStanding"); }
	float& MinimumDistanceThresholdToProneFromCrouchField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinimumDistanceThresholdToProneFromCrouch"); }
	float& BobMaxMovementSpeedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.BobMaxMovementSpeed"); }
	float& WeaponBobMaxMovementSpeedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.WeaponBobMaxMovementSpeed"); }
	float& MinRunSpeedThresholdField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinRunSpeedThreshold"); }
	TSubclassOf<AShooterWeapon>& DefaultWeaponField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "FShooterCharacterSparseClassData.DefaultWeapon"); }
	TSubclassOf<AShooterWeapon>& MapWeaponField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "FShooterCharacterSparseClassData.MapWeapon"); }
	TSubclassOf<AShooterWeapon>& GPSWeaponField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "FShooterCharacterSparseClassData.GPSWeapon"); }
	TSubclassOf<AShooterWeapon>& CompassWeaponField() { return *GetNativePointerField<TSubclassOf<AShooterWeapon>*>(this, "FShooterCharacterSparseClassData.CompassWeapon"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LowerBodyPartRootBonesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FShooterCharacterSparseClassData.LowerBodyPartRootBones"); }
	//UPhysicsAsset*& FPVCameraAnimationPhysicsAssetField() { return *GetNativePointerField<UPhysicsAsset**>(this, "FShooterCharacterSparseClassData.FPVCameraAnimationPhysicsAsset"); }
	UAnimMontage*& DropItemAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.DropItemAnimation"); }
	UAnimMontage*& ThrowItemAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.ThrowItemAnimation"); }
	UAnimMontage*& PickupItemAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.PickupItemAnimation"); }
	UAnimMontage*& ActivateInventoryAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.ActivateInventoryAnimation"); }
	UE::Math::TVector<double>& GrapHookDefaultOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FShooterCharacterSparseClassData.GrapHookDefaultOffset"); }
	float& GrapHookCableWidthField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.GrapHookCableWidth"); }
	UMaterialInterface*& GrapHookMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "FShooterCharacterSparseClassData.GrapHookMaterial"); }
	float& LadderJumpVelocityField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.LadderJumpVelocity"); }
	FName& WeaponAttachPointField() { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.WeaponAttachPoint"); }
	float& TargetingSpeedModifierField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.TargetingSpeedModifier"); }
	USoundBase*& LowHealthSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.LowHealthSound"); }
	USoundBase*& FastTravelSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.FastTravelSound"); }
	UAnimMontage*& CallFollowAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CallFollowAnim"); }
	UAnimMontage*& CallStayAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CallStayAnim"); }
	UAnimMontage*& CallFollowAnimSingleField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CallFollowAnimSingle"); }
	UAnimMontage*& CallStayAnimSingleField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CallStayAnimSingle"); }
	UAnimMontage*& CallMoveToAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CallMoveToAnim"); }
	UAnimMontage*& CallAttackAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CallAttackAnim"); }
	float& CraftingMovementSpeedModifierField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.CraftingMovementSpeedModifier"); }
	USoundBase*& StartCrouchSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.StartCrouchSound"); }
	USoundBase*& EndCrouchSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.EndCrouchSound"); }
	USoundBase*& StartProneSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.StartProneSound"); }
	USoundBase*& EndProneSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.EndProneSound"); }
	float& HealthBarOffsetYField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.HealthBarOffsetY"); }
	float& IndoorsHyperthermiaInsulationField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IndoorsHyperthermiaInsulation"); }
	float& IndoorsHypothermiaInsulationField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IndoorsHypothermiaInsulation"); }
	UAnimSequence*& ViewingInventoryAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FShooterCharacterSparseClassData.ViewingInventoryAnimation"); }
	UAnimSequence*& DefaultDinoRidingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FShooterCharacterSparseClassData.DefaultDinoRidingAnimation"); }
	UAnimSequence*& DefaultDinoRidingMoveAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FShooterCharacterSparseClassData.DefaultDinoRidingMoveAnimation"); }
	UAnimSequence*& DefaultSeatingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FShooterCharacterSparseClassData.DefaultSeatingAnimation"); }
	UAnimSequence*& DefaultShieldAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FShooterCharacterSparseClassData.DefaultShieldAnimation"); }
	UAnimMontage*& ShieldCoverAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.ShieldCoverAnimation"); }
	UAnimMontage*& ShieldCoverAnimationForCrouchField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.ShieldCoverAnimationForCrouch"); }
	float& EnemyPlayerMaxCursorHUDDistanceProneField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.EnemyPlayerMaxCursorHUDDistanceProne"); }
	float& EnemyPlayerMaxCursorHUDDistanceCrouchedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.EnemyPlayerMaxCursorHUDDistanceCrouched"); }
	float& EnemyPlayerMaxCursorHUDDistanceStandingField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.EnemyPlayerMaxCursorHUDDistanceStanding"); }
	float& LoggedOutTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.LoggedOutTargetingDesirability"); }
	UAnimMontage*& SpawnAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.SpawnAnim"); }
	UAnimMontage*& FirstSpawnAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.FirstSpawnAnim"); }
	UAnimMontage*& SleepOutAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.SleepOutAnim"); }
	USoundBase*& ThrowCharacterSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.ThrowCharacterSound"); }
	float& InventoryDragWeightScaleField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.InventoryDragWeightScale"); }
	UAnimMontage*& MountedCarryingDinoAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.MountedCarryingDinoAnimation"); }
	UAnimMontage*& CuddleAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FShooterCharacterSparseClassData.CuddleAnimation"); }
	UAnimSequence*& CharacterAdditiveStandingAnimField() { return *GetNativePointerField<UAnimSequence**>(this, "FShooterCharacterSparseClassData.CharacterAdditiveStandingAnim"); }
	float& IntervalForFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IntervalForFullHeadHairGrowth"); }
	float& IntervalForFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IntervalForFullFacialHairGrowth"); }
	USoundBase*& ProneMoveSoundField() { return *GetNativePointerField<USoundBase**>(this, "FShooterCharacterSparseClassData.ProneMoveSound"); }
	float& AimMagnetismStrengthField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AimMagnetismStrength"); }
	float& AimMagnetismOffsetDecaySpeedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AimMagnetismOffsetDecaySpeed"); }
	float& AimMagnetismOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AimMagnetismOffsetMultiplier"); }
	float& LocallyInterpolatedViewLocationZSpeedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.LocallyInterpolatedViewLocationZSpeed"); }
	float& ClearRiderCameraTransitionInterpSpeedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.ClearRiderCameraTransitionInterpSpeed"); }
	float& ClearRiderCameraTransitionInterpTimeField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.ClearRiderCameraTransitionInterpTime"); }
	TObjectPtr<UTexture2D>& TribeManagementOptionsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.TribeManagementOptionsIcon"); }
	TObjectPtr<UTexture2D>& RecruitToTribeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.RecruitToTribeIcon"); }
	TObjectPtr<UTexture2D>& BanishFromTribeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.BanishFromTribeIcon"); }
	TObjectPtr<UTexture2D>& PromoteToAdminIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.PromoteToAdminIcon"); }
	TObjectPtr<UTexture2D>& AcceptTribeInvitationIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.AcceptTribeInvitationIcon"); }
	TObjectPtr<UTexture2D>& MergeTribeAcceptInvitationIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.MergeTribeAcceptInvitationIcon"); }
	TObjectPtr<UTexture2D>& ViewTribeInfoIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.ViewTribeInfoIcon"); }
	TObjectPtr<UTexture2D>& TribeInvitationOptionsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.TribeInvitationOptionsIcon"); }
	TObjectPtr<UTexture2D>& InviteToAllianceIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.InviteToAllianceIcon"); }
	TObjectPtr<UTexture2D>& CantInviteToAllianceIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.CantInviteToAllianceIcon"); }
	TObjectPtr<UTexture2D>& AcceptInviteToAllianceIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.AcceptInviteToAllianceIcon"); }
	TObjectPtr<UTexture2D>& CantAcceptInviteToAllianceIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.CantAcceptInviteToAllianceIcon"); }
	TObjectPtr<UTexture2D>& DeclareTribeWarIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.DeclareTribeWarIcon"); }
	TObjectPtr<UTexture2D>& AcceptTribeWarIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.AcceptTribeWarIcon"); }
	TObjectPtr<UTexture2D>& ShowUserPageIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FShooterCharacterSparseClassData.ShowUserPageIcon"); }
	FName& RightShoulderBoneNameField() { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.RightShoulderBoneName"); }
	FName& RightTipBoneNameField() { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.RightTipBoneName"); }
	FName& LeftShoulderBoneNameField() { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.LeftShoulderBoneName"); }
	FName& LeftTipBoneNameField() { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.LeftTipBoneName"); }
	FName& TorsoBoneNameField() { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.TorsoBoneName"); }
	float& ForwardBindingInterpSpeedField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.ForwardBindingInterpSpeed"); }
	float& bBendArmLengthFactorField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.bBendArmLengthFactor"); }
	float& BendMinAngleField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.BendMinAngle"); }
	float& BendMaxAngleField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.BendMaxAngle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsFemaleField() { return { this, "FShooterCharacterSparseClassData.bIsFemale" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideHealthBarOffsetField() { return { this, "FShooterCharacterSparseClassData.bBPOverrideHealthBarOffset" }; }
	BitFieldValue<bool, unsigned __int32> bUseCustomHealthBarColorField() { return { this, "FShooterCharacterSparseClassData.bUseCustomHealthBarColor" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasisField() { return { this, "FShooterCharacterSparseClassData.bTriggerBPUnstasis" }; }
	BitFieldValue<bool, unsigned __int32> bAutoDestroyPlayerWeaponsField() { return { this, "FShooterCharacterSparseClassData.bAutoDestroyPlayerWeapons" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FShooterCharacterSparseClassData>(); }
	FShooterCharacterSparseClassData& operator=(const FShooterCharacterSparseClassData* __that) { return NativeCall<FShooterCharacterSparseClassData&, const FShooterCharacterSparseClassData*>(this, "FShooterCharacterSparseClassData.operator=(FShooterCharacterSparseClassData&)", __that); }


	float& AquariumLedgeImpulseField() { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AquariumLedgeImpulse"); }
	std::add_const_t<float>& AquariumLedgeImpulseField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AquariumLedgeImpulse"); }
	std::add_const_t<float>& MinimumDistanceThresholdToCrouchField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinimumDistanceThresholdToCrouch"); }
	std::add_const_t<float>& MinimumDistanceThresholdToProneFromStandingField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinimumDistanceThresholdToProneFromStanding"); }
	std::add_const_t<float>& MinimumDistanceThresholdToProneFromCrouchField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinimumDistanceThresholdToProneFromCrouch"); }
	std::add_const_t<float>& BobMaxMovementSpeedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.BobMaxMovementSpeed"); }
	std::add_const_t<float>& WeaponBobMaxMovementSpeedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.WeaponBobMaxMovementSpeed"); }
	std::add_const_t<float>& MinRunSpeedThresholdField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.MinRunSpeedThreshold"); }
	std::add_const_t<TSubclassOf < AShooterWeapon >>& DefaultWeaponField() const { return *GetNativePointerField<TSubclassOf < AShooterWeapon >*>(this, "FShooterCharacterSparseClassData.DefaultWeapon"); }
	std::add_const_t<TSubclassOf < AShooterWeapon >>& MapWeaponField() const { return *GetNativePointerField<TSubclassOf < AShooterWeapon >*>(this, "FShooterCharacterSparseClassData.MapWeapon"); }
	std::add_const_t<TSubclassOf < AShooterWeapon >>& GPSWeaponField() const { return *GetNativePointerField<TSubclassOf < AShooterWeapon >*>(this, "FShooterCharacterSparseClassData.GPSWeapon"); }
	std::add_const_t<TSubclassOf < AShooterWeapon >>& CompassWeaponField() const { return *GetNativePointerField<TSubclassOf < AShooterWeapon >*>(this, "FShooterCharacterSparseClassData.CompassWeapon"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& LowerBodyPartRootBonesField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FShooterCharacterSparseClassData.LowerBodyPartRootBones"); }

	UPhysicsAsset*& FPVCameraAnimationPhysicsAssetField() { return *GetNativePointerField<UPhysicsAsset**>(this, "FShooterCharacterSparseClassData.FPVCameraAnimationPhysicsAsset"); }
	std::add_const_t<UPhysicsAsset *>& FPVCameraAnimationPhysicsAssetField() const { return *GetNativePointerField<UPhysicsAsset **>(this, "FShooterCharacterSparseClassData.FPVCameraAnimationPhysicsAsset"); }
	std::add_const_t<UAnimMontage *>& DropItemAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.DropItemAnimation"); }
	std::add_const_t<UAnimMontage *>& ThrowItemAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.ThrowItemAnimation"); }
	std::add_const_t<UAnimMontage *>& PickupItemAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.PickupItemAnimation"); }
	std::add_const_t<UAnimMontage *>& ActivateInventoryAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.ActivateInventoryAnimation"); }
	std::add_const_t<UE :: Math :: TVector < double >>& GrapHookDefaultOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FShooterCharacterSparseClassData.GrapHookDefaultOffset"); }
	std::add_const_t<float>& GrapHookCableWidthField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.GrapHookCableWidth"); }
	std::add_const_t<UMaterialInterface *>& GrapHookMaterialField() const { return *GetNativePointerField<UMaterialInterface **>(this, "FShooterCharacterSparseClassData.GrapHookMaterial"); }
	std::add_const_t<float>& LadderJumpVelocityField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.LadderJumpVelocity"); }
	std::add_const_t<FName>& WeaponAttachPointField() const { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.WeaponAttachPoint"); }
	std::add_const_t<float>& TargetingSpeedModifierField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.TargetingSpeedModifier"); }
	std::add_const_t<USoundBase *>& LowHealthSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.LowHealthSound"); }
	std::add_const_t<USoundBase *>& FastTravelSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.FastTravelSound"); }
	std::add_const_t<UAnimMontage *>& CallFollowAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CallFollowAnim"); }
	std::add_const_t<UAnimMontage *>& CallStayAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CallStayAnim"); }
	std::add_const_t<UAnimMontage *>& CallFollowAnimSingleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CallFollowAnimSingle"); }
	std::add_const_t<UAnimMontage *>& CallStayAnimSingleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CallStayAnimSingle"); }
	std::add_const_t<UAnimMontage *>& CallMoveToAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CallMoveToAnim"); }
	std::add_const_t<UAnimMontage *>& CallAttackAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CallAttackAnim"); }
	std::add_const_t<float>& CraftingMovementSpeedModifierField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.CraftingMovementSpeedModifier"); }
	std::add_const_t<USoundBase *>& StartCrouchSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.StartCrouchSound"); }
	std::add_const_t<USoundBase *>& EndCrouchSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.EndCrouchSound"); }
	std::add_const_t<USoundBase *>& StartProneSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.StartProneSound"); }
	std::add_const_t<USoundBase *>& EndProneSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.EndProneSound"); }
	std::add_const_t<float>& HealthBarOffsetYField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.HealthBarOffsetY"); }
	std::add_const_t<float>& IndoorsHyperthermiaInsulationField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IndoorsHyperthermiaInsulation"); }
	std::add_const_t<float>& IndoorsHypothermiaInsulationField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IndoorsHypothermiaInsulation"); }
	std::add_const_t<UAnimSequence *>& ViewingInventoryAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FShooterCharacterSparseClassData.ViewingInventoryAnimation"); }
	std::add_const_t<UAnimSequence *>& DefaultDinoRidingAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FShooterCharacterSparseClassData.DefaultDinoRidingAnimation"); }
	std::add_const_t<UAnimSequence *>& DefaultDinoRidingMoveAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FShooterCharacterSparseClassData.DefaultDinoRidingMoveAnimation"); }
	std::add_const_t<UAnimSequence *>& DefaultSeatingAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FShooterCharacterSparseClassData.DefaultSeatingAnimation"); }
	std::add_const_t<UAnimSequence *>& DefaultShieldAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FShooterCharacterSparseClassData.DefaultShieldAnimation"); }
	std::add_const_t<UAnimMontage *>& ShieldCoverAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.ShieldCoverAnimation"); }
	std::add_const_t<UAnimMontage *>& ShieldCoverAnimationForCrouchField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.ShieldCoverAnimationForCrouch"); }
	std::add_const_t<float>& EnemyPlayerMaxCursorHUDDistanceProneField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.EnemyPlayerMaxCursorHUDDistanceProne"); }
	std::add_const_t<float>& EnemyPlayerMaxCursorHUDDistanceCrouchedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.EnemyPlayerMaxCursorHUDDistanceCrouched"); }
	std::add_const_t<float>& EnemyPlayerMaxCursorHUDDistanceStandingField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.EnemyPlayerMaxCursorHUDDistanceStanding"); }
	std::add_const_t<float>& LoggedOutTargetingDesirabilityField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.LoggedOutTargetingDesirability"); }
	std::add_const_t<UAnimMontage *>& SpawnAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.SpawnAnim"); }
	std::add_const_t<UAnimMontage *>& FirstSpawnAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.FirstSpawnAnim"); }
	std::add_const_t<UAnimMontage *>& SleepOutAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.SleepOutAnim"); }
	std::add_const_t<USoundBase *>& ThrowCharacterSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.ThrowCharacterSound"); }
	std::add_const_t<float>& InventoryDragWeightScaleField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.InventoryDragWeightScale"); }
	std::add_const_t<UAnimMontage *>& MountedCarryingDinoAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.MountedCarryingDinoAnimation"); }
	std::add_const_t<UAnimMontage *>& CuddleAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FShooterCharacterSparseClassData.CuddleAnimation"); }
	std::add_const_t<UAnimSequence *>& CharacterAdditiveStandingAnimField() const { return *GetNativePointerField<UAnimSequence **>(this, "FShooterCharacterSparseClassData.CharacterAdditiveStandingAnim"); }
	std::add_const_t<float>& IntervalForFullHeadHairGrowthField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IntervalForFullHeadHairGrowth"); }
	std::add_const_t<float>& IntervalForFullFacialHairGrowthField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.IntervalForFullFacialHairGrowth"); }
	std::add_const_t<USoundBase *>& ProneMoveSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FShooterCharacterSparseClassData.ProneMoveSound"); }
	std::add_const_t<float>& AimMagnetismStrengthField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AimMagnetismStrength"); }
	std::add_const_t<float>& AimMagnetismOffsetDecaySpeedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AimMagnetismOffsetDecaySpeed"); }
	std::add_const_t<float>& AimMagnetismOffsetMultiplierField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.AimMagnetismOffsetMultiplier"); }
	std::add_const_t<float>& LocallyInterpolatedViewLocationZSpeedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.LocallyInterpolatedViewLocationZSpeed"); }
	std::add_const_t<float>& ClearRiderCameraTransitionInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.ClearRiderCameraTransitionInterpSpeed"); }
	std::add_const_t<float>& ClearRiderCameraTransitionInterpTimeField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.ClearRiderCameraTransitionInterpTime"); }
	std::add_const_t<FName>& RightShoulderBoneNameField() const { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.RightShoulderBoneName"); }
	std::add_const_t<FName>& RightTipBoneNameField() const { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.RightTipBoneName"); }
	std::add_const_t<FName>& LeftShoulderBoneNameField() const { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.LeftShoulderBoneName"); }
	std::add_const_t<FName>& LeftTipBoneNameField() const { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.LeftTipBoneName"); }
	std::add_const_t<FName>& TorsoBoneNameField() const { return *GetNativePointerField<FName*>(this, "FShooterCharacterSparseClassData.TorsoBoneName"); }
	std::add_const_t<float>& ForwardBindingInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.ForwardBindingInterpSpeed"); }
	std::add_const_t<float>& bBendArmLengthFactorField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.bBendArmLengthFactor"); }
	std::add_const_t<float>& BendMinAngleField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.BendMinAngle"); }
	std::add_const_t<float>& BendMaxAngleField() const { return *GetNativePointerField<float*>(this, "FShooterCharacterSparseClassData.BendMaxAngle"); }
};