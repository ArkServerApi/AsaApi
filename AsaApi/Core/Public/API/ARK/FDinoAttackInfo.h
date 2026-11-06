#pragma once


struct FDinoAttackInfo
{
	// Fields

	FName& AttackNameField() { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.AttackName"); }
	float& AttackWeightField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWeight"); }
	float& AttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRange"); }
	float& MinAttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MinAttackRange"); }
	float& ActivateAttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.ActivateAttackRange"); }
	float& AttackIntervalField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackInterval"); }
	TArray<int, TSizedDefaultAllocator<32> >& ChildStateIndexesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.ChildStateIndexes"); }
	float& AttackWithJumpChanceField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWithJumpChance"); }
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastAttackTime"); }
	long double& RiderLastAttackTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.RiderLastAttackTime"); }
	float& AttackSelectionExpirationTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackSelectionExpirationTime"); }
	long double& AttackSelectionTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.AttackSelectionTime"); }
	float& AttackRotationRangeDegreesField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationRangeDegrees"); }
	float& AttackRotationGroundSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationGroundSpeedMultiplier"); }
	UE::Math::TRotator<double>& AttackRotationRateField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FDinoAttackInfo.AttackRotationRate"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MeleeSwingSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.MeleeSwingSockets"); }
	FName& RangedSocketField() { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.RangedSocket"); }
	int& MeleeDamageAmountField() { return *GetNativePointerField<int*>(this, "FDinoAttackInfo.MeleeDamageAmount"); }
	float& MeleeDamageImpulseField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeDamageImpulse"); }
	float& MeleeSwingRadiusField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeSwingRadius"); }
	TSubclassOf<UDamageType>& MeleeDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDinoAttackInfo.MeleeDamageType"); }
	float& AttackOffsetField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackOffset"); }
	float& StaminaCostField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.StaminaCost"); }
	float& RiderAttackIntervalField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.RiderAttackInterval"); }
	float& DotProductCheckMinField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMin"); }
	float& DotProductCheckMaxField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMax"); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& AttackAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimations"); }
	TArray<float, TSizedDefaultAllocator<32> >& AttackAnimationWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimationWeights"); }
	TArray<float, TSizedDefaultAllocator<32> >& AttackAnimationsTimeFromEndToConsiderFinishedField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimationsTimeFromEndToConsiderFinished"); }
	TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "FDinoAttackInfo.ProjectileClass"); }
	TSubclassOf<UPrimalAIState>& AttackStateTypeClassField() { return *GetNativePointerField<TSubclassOf<UPrimalAIState>*>(this, "FDinoAttackInfo.AttackStateTypeClass"); }
	float& AttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRunningSpeedModifier"); }
	float& SwimmingAttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SwimmingAttackRunningSpeedModifier"); }
	float& SetAttackTargetTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SetAttackTargetTime"); }
	UPrimalAIState*& AttackStateTypeField() { return *GetNativePointerField<UPrimalAIState**>(this, "FDinoAttackInfo.AttackStateType"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& LastSocketPositionsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.LastSocketPositions"); }
	long double& LastProjectileSpawnTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastProjectileSpawnTime"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AttackAnimDamageImpactFXSocketNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimDamageImpactFXSocketNames"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHighQualityAttack() { return { this, "FDinoAttackInfo.bHighQualityAttack" }; }
	BitFieldValue<bool, unsigned __int32> bSkipUntamed() { return { this, "FDinoAttackInfo.bSkipUntamed" }; }
	BitFieldValue<bool, unsigned __int32> bSkipTamed() { return { this, "FDinoAttackInfo.bSkipTamed" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyOnWildDinos() { return { this, "FDinoAttackInfo.bOnlyOnWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenEncumbered() { return { this, "FDinoAttackInfo.bPreventWhenEncumbered" }; }
	BitFieldValue<bool, unsigned __int32> bRidingOnlyAllowOnGround() { return { this, "FDinoAttackInfo.bRidingOnlyAllowOnGround" }; }
	BitFieldValue<bool, unsigned __int32> bRidingOnlyAllowWhileFlying() { return { this, "FDinoAttackInfo.bRidingOnlyAllowWhileFlying" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseWithPlayersOrRiders() { return { this, "FDinoAttackInfo.bOnlyUseWithPlayersOrRiders" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseWithPlayers() { return { this, "FDinoAttackInfo.bOnlyUseWithPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenSwimming() { return { this, "FDinoAttackInfo.bPreventWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenInsufficientStamina() { return { this, "FDinoAttackInfo.bPreventWhenInsufficientStamina" }; }
	BitFieldValue<bool, unsigned __int32> bSkipOnFlyers() { return { this, "FDinoAttackInfo.bSkipOnFlyers" }; }
	BitFieldValue<bool, unsigned __int32> bSkipAI() { return { this, "FDinoAttackInfo.bSkipAI" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnFemale() { return { this, "FDinoAttackInfo.bPreventOnFemale" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnMale() { return { this, "FDinoAttackInfo.bPreventOnMale" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenDinoCarrying() { return { this, "FDinoAttackInfo.bPreventWhenDinoCarrying" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintCanRiderAttack() { return { this, "FDinoAttackInfo.bUseBlueprintCanRiderAttack" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresWalking() { return { this, "FDinoAttackInfo.bRequiresWalking" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSwimming() { return { this, "FDinoAttackInfo.bRequiresSwimming" }; }
	BitFieldValue<bool, unsigned __int32> AttackStatusStarted() { return { this, "FDinoAttackInfo.AttackStatusStarted" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsMovement() { return { this, "FDinoAttackInfo.bAttackStopsMovement" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsMovementAllowFalling() { return { this, "FDinoAttackInfo.bAttackStopsMovementAllowFalling" }; }
	BitFieldValue<bool, unsigned __int32> bAttackWithJump() { return { this, "FDinoAttackInfo.bAttackWithJump" }; }
	BitFieldValue<bool, unsigned __int32> bLocationBasedAttack() { return { this, "FDinoAttackInfo.bLocationBasedAttack" }; }
	BitFieldValue<bool, unsigned __int32> bDropCarriedCharacter() { return { this, "FDinoAttackInfo.bDropCarriedCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bCancelAndDropIfCarriedCharacter() { return { this, "FDinoAttackInfo.bCancelAndDropIfCarriedCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttackWhileRunning() { return { this, "FDinoAttackInfo.bPreventAttackWhileRunning" }; }
	BitFieldValue<bool, unsigned __int32> ForceUpdateInRange() { return { this, "FDinoAttackInfo.ForceUpdateInRange" }; }
	BitFieldValue<bool, unsigned __int32> ForceUpdateMeshSelf() { return { this, "FDinoAttackInfo.ForceUpdateMeshSelf" }; }
	BitFieldValue<bool, unsigned __int32> bUseSecondaryAnimationInAir() { return { this, "FDinoAttackInfo.bUseSecondaryAnimationInAir" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintCanAttack() { return { this, "FDinoAttackInfo.bUseBlueprintCanAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintAdjustOutputDamage() { return { this, "FDinoAttackInfo.bUseBlueprintAdjustOutputDamage" }; }
	BitFieldValue<bool, unsigned __int32> bDisableRunningWhenAttacking() { return { this, "FDinoAttackInfo.bDisableRunningWhenAttacking" }; }
	BitFieldValue<bool, unsigned __int32> bKeepExecutingWhenAcquiringTarget() { return { this, "FDinoAttackInfo.bKeepExecutingWhenAcquiringTarget" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWithRider() { return { this, "FDinoAttackInfo.bPreventWithRider" }; }
	BitFieldValue<bool, unsigned __int32> bAIForceAttackDotProductCheck() { return { this, "FDinoAttackInfo.bAIForceAttackDotProductCheck" }; }
	BitFieldValue<bool, unsigned __int32> bInstantlyHarvestCorpse() { return { this, "FDinoAttackInfo.bInstantlyHarvestCorpse" }; }
	BitFieldValue<bool, unsigned __int32> bAddPawnVelocityToProjectile() { return { this, "FDinoAttackInfo.bAddPawnVelocityToProjectile" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsRotation() { return { this, "FDinoAttackInfo.bAttackStopsRotation" }; }
	BitFieldValue<bool, unsigned __int32> bTamedAISpecialAttack() { return { this, "FDinoAttackInfo.bTamedAISpecialAttack" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenCarryingExplosive() { return { this, "FDinoAttackInfo.bPreventWhenCarryingExplosive" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWhenAnimationPreventsInput() { return { this, "FDinoAttackInfo.bAllowWhenAnimationPreventsInput" }; }
	BitFieldValue<bool, unsigned __int32> bRequireLineOfSight() { return { this, "FDinoAttackInfo.bRequireLineOfSight" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideGetAttackAnimationIndex() { return { this, "FDinoAttackInfo.bUseBPOverrideGetAttackAnimationIndex" }; }
	BitFieldValue<bool, unsigned __int32> bUseSecondaryAnimationWhenSwimming() { return { this, "FDinoAttackInfo.bUseSecondaryAnimationWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bUseTertiaryAnimationWhenSwimming() { return { this, "FDinoAttackInfo.bUseTertiaryAnimationWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bHighQualityAttackOnlyPlayerOrTamed() { return { this, "FDinoAttackInfo.bHighQualityAttackOnlyPlayerOrTamed" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeTraceForHitBlockers() { return { this, "FDinoAttackInfo.bMeleeTraceForHitBlockers" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeTraceForHitBlockersAddHeadsocket() { return { this, "FDinoAttackInfo.bMeleeTraceForHitBlockersAddHeadsocket" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreCrouchAttack() { return { this, "FDinoAttackInfo.bIgnoreCrouchAttack" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreResettingAttackIndexInTick() { return { this, "FDinoAttackInfo.bIgnoreResettingAttackIndexInTick" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSkippingAnimGraphDuringAttack() { return { this, "FDinoAttackInfo.bPreventSkippingAnimGraphDuringAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseClosestSocketsForDamageImpactFX() { return { this, "FDinoAttackInfo.bUseClosestSocketsForDamageImpactFX" }; }
	BitFieldValue<bool, unsigned __int32> bDisableAttackerDamageImpactFX() { return { this, "FDinoAttackInfo.bDisableAttackerDamageImpactFX" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoAttackInfo>(); }
	FDinoAttackInfo* operator=(const FDinoAttackInfo* __that) { return NativeCall<FDinoAttackInfo*, const FDinoAttackInfo*>(this, "FDinoAttackInfo.operator=(FDinoAttackInfo&)", __that); }
	FDinoAttackInfo* operator=(FDinoAttackInfo* __that) { return NativeCall<FDinoAttackInfo*, FDinoAttackInfo*>(this, "FDinoAttackInfo.operator=(FDinoAttackInfo&)", __that); }
};