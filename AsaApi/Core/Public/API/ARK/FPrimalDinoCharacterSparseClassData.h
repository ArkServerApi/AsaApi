#pragma once


struct FPrimalDinoCharacterSparseClassData : FPrimalCharacterSparseClassData
{
	// Fields

	UE::Math::TVector<double>& RidingAttackExtraVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.RidingAttackExtraVelocity"); }
	UAnimMontage*& StartChargeAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StartChargeAnimation"); }
	TArray<float, TSizedDefaultAllocator<32> >& AttackAnimationsTimeFromEndToConsiderFinishedField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.AttackAnimationsTimeFromEndToConsiderFinished"); }
	TEnumAsByte<enum EEngramGroup::Type>& RequiresDLCField() { return *GetNativePointerField<TEnumAsByte<enum EEngramGroup::Type>*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLC"); }
	float& ColorizationIntensityField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ColorizationIntensity"); }
	float& BabyChanceOfTwinsField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyChanceOfTwins"); }
	float& BabyGestationSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyGestationSpeed"); }
	float& AutoFadeOutAfterTameTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AutoFadeOutAfterTameTime"); }
	float& ExtraBabyGestationSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ExtraBabyGestationSpeedMultiplier"); }
	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& FemaleMaterialOverridesField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMaterialOverrides"); }
	float& PaintConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PaintConsumptionMultiplier"); }
	float& ChargingBlockedStopTimeThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingBlockedStopTimeThreshold"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MeleeSwingSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.MeleeSwingSockets"); }
	float& FinalNPCLevelMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FinalNPCLevelMultiplier"); }
	float& LandingTraceMaxDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LandingTraceMaxDistance"); }
	float& FlyingWanderFixedDistanceAmountField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyingWanderFixedDistanceAmount"); }
	float& FlyingWanderRandomDistanceAmountField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyingWanderRandomDistanceAmount"); }
	float& AcceptableLandingRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AcceptableLandingRadius"); }
	float& MaxLandingTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxLandingTime"); }
	FieldArray<float, 2>& GenderSpeedMultipliersField() { return *GetNativePointerField<FieldArray<float, 2>*>(this, "FPrimalDinoCharacterSparseClassData.GenderSpeedMultipliers"); }
	float& ChargeSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeSpeedMultiplier"); }
	UAnimMontage*& ChargingAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.ChargingAnim"); }
	float& ChargingStaminaPerSecondDrainField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingStaminaPerSecondDrain"); }
	float& ChargingStopDotTresholdField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingStopDotTreshold"); }
	FString& SaddleSlotNameOverrideField() { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.SaddleSlotNameOverride"); }
	float& WhistleTraceOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WhistleTraceOffset"); }
	UE::Math::TVector<double>& RidingFirstPersonViewLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.RidingFirstPersonViewLocationOffset"); }
	float& BasedCameraSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BasedCameraSpeedMultiplier"); }
	float& WildBabyAgeWeightField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildBabyAgeWeight"); }
	bool& bUntamedUseOverlapEventsField() { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bUntamedUseOverlapEvents"); }
	float& BabyChanceOfTripletsField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyChanceOfTriplets"); }
	FString& HideBonesStringField() { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.HideBonesString"); }
	UE::Math::TVector<double>& WaterSurfaceExtraJumpVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.WaterSurfaceExtraJumpVector"); }
	float& OpenDoorDelayField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OpenDoorDelay"); }
	float& TamedWanderHarvestIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestInterval"); }
	float& TamedWanderHarvestSearchRangeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestSearchRange"); }
	float& TamedWanderHarvestCollectRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestCollectRadius"); }
	UE::Math::TVector<double>& TamedWanderHarvestCollectOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestCollectOffset"); }
	float& PlatformSaddleMaxStructureBuildDistance2DField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PlatformSaddleMaxStructureBuildDistance2D"); }
	UAnimMontage*& PlayAnimBelowHealthField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.PlayAnimBelowHealth"); }
	USoundBase*& LowHealthExitSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.LowHealthExitSound"); }
	USoundBase*& LowHealthEnterSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.LowHealthEnterSound"); }
	TSubclassOf<UPrimalDinoSettings>& LowHealthDinoSettingsField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoSettings>*>(this, "FPrimalDinoCharacterSparseClassData.LowHealthDinoSettings"); }
	float& SwimOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SwimOffsetInterpSpeed"); }
	FieldArray<unsigned char, 6>& PreventColorizationRegionsField() { return *GetNativePointerField<FieldArray<unsigned char, 6>*>(this, "FPrimalDinoCharacterSparseClassData.PreventColorizationRegions"); }
	FieldArray<float, 6>& ColorSetIntensityMultipliersField() { return *GetNativePointerField<FieldArray<float, 6>*>(this, "FPrimalDinoCharacterSparseClassData.ColorSetIntensityMultipliers"); }
	float& MeleeAttackStaminaCostField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MeleeAttackStaminaCost"); }
	UAnimMontage*& WakingTameAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.WakingTameAnimation"); }
	TArray<float, TSizedDefaultAllocator<32> >& DeathGiveItemChanceToBeBlueprintField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemChanceToBeBlueprint"); }
	float& DeathGiveItemQualityMinField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemQualityMin"); }
	float& DeathGiveItemQualityMaxField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemQualityMax"); }
	FString& DeathGiveAchievementField() { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveAchievement"); }
	float& RiderExtraMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderExtraMaxSpeedModifier"); }
	TSoftObjectPtr<UAnimMontage>& TamedUnsleepAnimField() { return *GetNativePointerField<TSoftObjectPtr<UAnimMontage>*>(this, "FPrimalDinoCharacterSparseClassData.TamedUnsleepAnim"); }
	TSoftObjectPtr<UAnimMontage>& WildUnsleepAnimField() { return *GetNativePointerField<TSoftObjectPtr<UAnimMontage>*>(this, "FPrimalDinoCharacterSparseClassData.WildUnsleepAnim"); }
	UAnimMontage*& OpenDoorAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.OpenDoorAnim"); }
	float& ControlFacePitchInterpSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ControlFacePitchInterpSpeed"); }
	float& DeathInventoryQualityPerLevelMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathInventoryQualityPerLevelMultiplier"); }
	TSet<TSoftClassPtr<APrimalDinoCharacter>, DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>, 0>, FDefaultSetAllocator>& AdditionalMatingClassesField() { return *GetNativePointerField<TSet<TSoftClassPtr<APrimalDinoCharacter>, DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>, 0>, FDefaultSetAllocator>*>(this, "FPrimalDinoCharacterSparseClassData.AdditionalMatingClasses"); }
	FName& PassengerBoneNameOverrideField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.PassengerBoneNameOverride"); }
	bool& bUseBPIsValidUnStasisCasterField() { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bUseBPIsValidUnStasisCaster"); }
	int& MaxSaddleStructuresHeightField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxSaddleStructuresHeight"); }
	bool& CalculateStructureHeightFromSaddleField() { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureHeightFromSaddle"); }
	bool& CalculateStructureDistanceFromSaddleField() { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureDistanceFromSaddle"); }
	int& SaddlePivotOffsetField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.SaddlePivotOffset"); }
	int& MaxSaddleStructuresNumField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxSaddleStructuresNum"); }
	float& DediForceAttackAnimTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DediForceAttackAnimTime"); }
	float& DediForceStartAttackAfterAnimTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DediForceStartAttackAfterAnimTime"); }
	float& UntamedPoopTimeMinIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UntamedPoopTimeMinInterval"); }
	float& UntamedPoopTimeMaxIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UntamedPoopTimeMaxInterval"); }
	float& MeleeHarvestDamageMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MeleeHarvestDamageMultiplier"); }
	TSubclassOf<UPrimalItem>& BaseEggClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalDinoCharacterSparseClassData.BaseEggClass"); }
	float& FertilizedEggChanceToUseMateClassField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FertilizedEggChanceToUseMateClass"); }
	float& EggIntervalBetweenUnstasisChancesField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggIntervalBetweenUnstasisChances"); }
	float& EggRangeMaximumNumberFromSameDinoTypeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggRangeMaximumNumberFromSameDinoType"); }
	int& EggMaximumNumberFromSameDinoTypeField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.EggMaximumNumberFromSameDinoType"); }
	float& EggRangeMaximumNumberField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggRangeMaximumNumber"); }
	int& EggMaximumNumberField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.EggMaximumNumber"); }
	FName& EggSpawnSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.EggSpawnSocketName"); }
	UAnimMontage*& EggLayingAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.EggLayingAnimation"); }
	UAnimSequence*& TurningRightRiderAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalDinoCharacterSparseClassData.TurningRightRiderAnimOverride"); }
	UAnimSequence*& TurningLeftRiderAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalDinoCharacterSparseClassData.TurningLeftRiderAnimOverride"); }
	UAnimSequence*& LatchedRiderAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalDinoCharacterSparseClassData.LatchedRiderAnimOverride"); }
	float& RidingAnimSpeedFactorField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingAnimSpeedFactor"); }
	UAnimMontage*& StartRidingAnimOverrideField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StartRidingAnimOverride"); }
	UAnimMontage*& StopRidingAnimOverrideField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StopRidingAnimOverride"); }
	float& OutsideOriginalNPCVolumeStasisDestroyIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OutsideOriginalNPCVolumeStasisDestroyInterval"); }
	float& StasisedDestroyIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StasisedDestroyInterval"); }
	float& TamedAllowNamingTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedAllowNamingTime"); }
	float& MovementSpeedScalingRotationRatePowerField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MovementSpeedScalingRotationRatePower"); }
	float& AttackNoStaminaTorpidityMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackNoStaminaTorpidityMultiplier"); }
	float& DecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DecayDestructionPeriod"); }
	float& LocInterpolationSnapDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LocInterpolationSnapDistance"); }
	float& MateBoostDamageReceiveMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostDamageReceiveMultiplier"); }
	float& MateBoostDamageGiveMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostDamageGiveMultiplier"); }
	float& MateBoostRangeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostRange"); }
	float& RidingAttackExtraVelocityDelayField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingAttackExtraVelocityDelay"); }
	float& StepDamageFootDamageIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageInterval"); }
	float& StepDamageFootDamageRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageRadius"); }
	float& StepDamageFootDamageAmountField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageAmount"); }
	float& DurationBeforeMovingStuckPawnField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DurationBeforeMovingStuckPawn"); }
	UAnimMontage*& StartledAnimationLeftField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimationLeft"); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& WanderIdleAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.WanderIdleAnimations"); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& StartledAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimations"); }
	UAnimMontage*& FlyingStartledAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.FlyingStartledAnimation"); }
	float& RandomPlayStartledAnimIntervalMinField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomPlayStartledAnimIntervalMin"); }
	float& RandomPlayStartledAnimIntervalMaxField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomPlayStartledAnimIntervalMax"); }
	float& StartledAnimationCooldownField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimationCooldown"); }
	float& DefaultActivateAttackRangeOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DefaultActivateAttackRangeOffset"); }
	float& CorpseTargetingMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CorpseTargetingMultiplier"); }
	float& MinStaminaForRiderField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MinStaminaForRider"); }
	float& LoseStaminaWithRiderRateField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LoseStaminaWithRiderRate"); }
	float& MaxDinoKillerTransferWeightPercentField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxDinoKillerTransferWeightPercent"); }
	float& NPCZoneVolumeCountWeightField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NPCZoneVolumeCountWeight"); }
	TSubclassOf<UPrimalItem>& RepairRequirementsItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalDinoCharacterSparseClassData.RepairRequirementsItem"); }
	float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RepairCheckInterval"); }
	float& RepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RepairPercentPerInterval"); }
	float& WakingTameAllowFeedingFoodPercentageField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameAllowFeedingFoodPercentage"); }
	float& WakingTameFoodAffinityMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameFoodAffinityMultiplier"); }
	float& CheckForWildAmbientHarvestingIntervalMinField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CheckForWildAmbientHarvestingIntervalMin"); }
	float& CheckForWildAmbientHarvestingIntervalMaxField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CheckForWildAmbientHarvestingIntervalMax"); }
	float& WildAmbientHarvestingRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildAmbientHarvestingRadius"); }
	TSubclassOf<UDamageType>& TamedHarvestDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FPrimalDinoCharacterSparseClassData.TamedHarvestDamageType"); }
	float& HasRiderPoopAnimIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HasRiderPoopAnimInterval"); }
	//TSubclassOf<ULegacyCameraShake>& LightEndChargingShakeField() { return *GetNativePointerField<TSubclassOf<ULegacyCameraShake>*>(this, "FPrimalDinoCharacterSparseClassData.LightEndChargingShake"); }
	//TSubclassOf<ULegacyCameraShake>& HardEndChargingShakeField() { return *GetNativePointerField<TSubclassOf<ULegacyCameraShake>*>(this, "FPrimalDinoCharacterSparseClassData.HardEndChargingShake"); }
	float& ChargeBumpDamageField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpDamage"); }
	TSubclassOf<UDamageType>& ChargeBumpDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpDamageType"); }
	float& ChargeBumpImpulseField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpImpulse"); }
	float& MinChargeIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MinChargeInterval"); }
	UAnimMontage*& MountCharacterAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.MountCharacterAnimation"); }
	UAnimMontage*& UnmountCharacterAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.UnmountCharacterAnimation"); }
	float& ChargingAnimDelayField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingAnimDelay"); }
	float& ChargingActivationRequiresStaminaField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingActivationRequiresStamina"); }
	float& ChargingActivationConsumesStaminaField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingActivationConsumesStamina"); }
	float& FlyerHardBreakingOverrideField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyerHardBreakingOverride"); }
	float& WanderAroundActorMaxDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WanderAroundActorMaxDistance"); }
	float& FemaleMatingRangeAdditionField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMatingRangeAddition"); }
	float& FemaleMatingTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMatingTime"); }
	UAnimMontage*& MatingAnimationMaleField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.MatingAnimationMale"); }
	USkeletalMesh*& DefaultHarnessSaddleMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "FPrimalDinoCharacterSparseClassData.DefaultHarnessSaddleMesh"); }
	USkeletalMesh*& DefaultCarriageSaddleMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "FPrimalDinoCharacterSparseClassData.DefaultCarriageSaddleMesh"); }
	float& NewFemaleMinTimeBetweenMatingField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NewFemaleMinTimeBetweenMating"); }
	float& NewFemaleMaxTimeBetweenMatingField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NewFemaleMaxTimeBetweenMating"); }
	TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& DefaultTamedBuffsField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.DefaultTamedBuffs"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HyperThermiaInsulation"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HypoThermiaInsulation"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.InsulationRange"); }
	float& GangDamageResistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GangDamageResistance"); }
	float& GangDamageField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GangDamage"); }
	int& MaxGangCountField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxGangCount"); }
	float& HeldJumpSlowFallingGravityZScaleField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HeldJumpSlowFallingGravityZScale"); }
	UAnimMontage*& SlowFallingAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.SlowFallingAnim"); }
	float& SlowFallingStaminaCostPerSecondField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SlowFallingStaminaCostPerSecond"); }
	float& NoRiderRotationModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NoRiderRotationModifier"); }
	FName& RiderLatchedFPVCameraUseSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.RiderLatchedFPVCameraUseSocketName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& FPVRiderBoneNamesToHideField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.FPVRiderBoneNamesToHide"); }
	float& RiderMovementSpeedScalingRotationRatePowerMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMovementSpeedScalingRotationRatePowerMultiplier"); }
	float& HighQualityLedgeDetectionExtraTraceDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HighQualityLedgeDetectionExtraTraceDistance"); }
	float& ForwardPlatformSaddleStructureDamageToDinoMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForwardPlatformSaddleStructureDamageToDinoMultiplier"); }
	FName& ForwardPlatformSaddleStructurePointDamageToBoneField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.ForwardPlatformSaddleStructurePointDamageToBone"); }
	int& LoadDestroyWildDinosUnderVersionField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.LoadDestroyWildDinosUnderVersion"); }
	float& AllowWaterSurfaceExtraJumpStaminaCostField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AllowWaterSurfaceExtraJumpStaminaCost"); }
	USoundBase*& PlayKillLocalSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.PlayKillLocalSound"); }
	float& BabyMinCuddleIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyMinCuddleInterval"); }
	float& BabyMaxCuddleIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyMaxCuddleInterval"); }
	float& BabyCuddleWalkDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyCuddleWalkDistance"); }
	float& RiderMaxImprintingQualityDamageReductionField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMaxImprintingQualityDamageReduction"); }
	float& RiderMaxImprintingQualityDamageMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMaxImprintingQualityDamageMultiplier"); }
	float& BabyImprintingQualityTotalMaturationTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyImprintingQualityTotalMaturationTime"); }
	float& WakingTameMaxDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameMaxDistance"); }
	float& WakingTameDisableDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameDisableDistance"); }
	float& StepDamageFootDamageRunningMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageRunningMultiplier"); }
	float& StepRadialDamageOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepRadialDamageOffset"); }
	float& ForcePawnBigPushingForTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForcePawnBigPushingForTime"); }
	float& AIDinoForceActiveUntasisingRangeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AIDinoForceActiveUntasisingRange"); }
	float& TamedSwimmingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedSwimmingRotationRateModifier"); }
	float& WildSwimmingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildSwimmingRotationRateModifier"); }
	float& RiderFlyingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderFlyingRotationRateModifier"); }
	TEnumAsByte<enum EFilterInterpolationType>& MountedBlendFilterSmoothTypeField() { return *GetNativePointerField<TEnumAsByte<enum EFilterInterpolationType>*>(this, "FPrimalDinoCharacterSparseClassData.MountedBlendFilterSmoothType"); }
	TEnumAsByte<enum EFilterInterpolationType>& UnMountedBlendFilterSmoothTypeField() { return *GetNativePointerField<TEnumAsByte<enum EFilterInterpolationType>*>(this, "FPrimalDinoCharacterSparseClassData.UnMountedBlendFilterSmoothType"); }
	float& SetAttackTargetTraceWidthField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SetAttackTargetTraceWidth"); }
	UAnimMontage*& PlayerMountedCarryAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.PlayerMountedCarryAnimation"); }
	float& GainStaminaWhenLatchedRateField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GainStaminaWhenLatchedRate"); }
	int& DeathGivesDossierIndexField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.DeathGivesDossierIndex"); }
	float& DeathGivesDossierDelayField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGivesDossierDelay"); }
	bool& TameGivesDossierField() { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.TameGivesDossier"); }
	FName& SaddleRiderMovementTraceThruSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.SaddleRiderMovementTraceThruSocketName"); }
	float& RidingSwimmingRunSpeedModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingSwimmingRunSpeedModifier"); }
	int& RandomMutationRollsField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationRolls"); }
	float& RandomMutationChanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationChance"); }
	float& RandomMutationGivePointsField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationGivePoints"); }
	FName& WakingTameDistanceSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameDistanceSocketName"); }
	int& WakingTameConsumeEntireStackMaxQuantityField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameConsumeEntireStackMaxQuantity"); }
	float& AttackPlayerDesirabilityMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackPlayerDesirabilityMultiplier"); }
	float& FlyerAttachedExplosiveSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyerAttachedExplosiveSpeedMultiplier"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DeathGiveEngramClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveEngramClasses"); }
	float& SinglePlayerOutgoingDamageModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SinglePlayerOutgoingDamageModifier"); }
	float& SinglePlayerIncomingDamageModifierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SinglePlayerIncomingDamageModifier"); }
	TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >& DamageVictimClassesIgnoreBlockingGeomtryTraceField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.DamageVictimClassesIgnoreBlockingGeomtryTrace"); }
	UE::Math::TVector<double>& UnboardLocationTraceOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.UnboardLocationTraceOffset"); }
	FName& AttackLineOfSightMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.AttackLineOfSightMeshSocketName"); }
	float& AttackForceWalkDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackForceWalkDistanceMultiplier"); }
	float& AttackForceWalkRotationRateMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackForceWalkRotationRateMultiplier"); }
	int& OverrideDinoTameSoundIndexField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.OverrideDinoTameSoundIndex"); }
	USoundBase*& SwimSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.SwimSound"); }
	float& SwimSoundIntervalPerHundredSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SwimSoundIntervalPerHundredSpeed"); }
	float& PersonalTamedDinosSaddleStructureCostMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PersonalTamedDinosSaddleStructureCostMultiplier"); }
	float& StasisAutoDestroyIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StasisAutoDestroyInterval"); }
	float& CarryCameraYawOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CarryCameraYawOffset"); }
	float& ExtraTamedBaseHealthMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ExtraTamedBaseHealthMultiplier"); }
	float& AttackRangeOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackRangeOffset"); }
	float& DinoExtraIncreasePlayerCollisionActivationDistanceSquaredField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DinoExtraIncreasePlayerCollisionActivationDistanceSquared"); }
	float& OverrideApproachRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OverrideApproachRadius"); }
	float& TamedOverrideStasisComponentRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedOverrideStasisComponentRadius"); }
	UStaticMesh*& UniqueDino_MapMarkerMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "FPrimalDinoCharacterSparseClassData.UniqueDino_MapMarkerMesh"); }
	FColor& UniqueDino_MapMarkerColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalDinoCharacterSparseClassData.UniqueDino_MapMarkerColor"); }
	float& OverrideDinoMaxExperiencePointsField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OverrideDinoMaxExperiencePoints"); }
	int& MaxDinoTameLevelsField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxDinoTameLevels"); }
	int& DestroyTamesOverLevelClampOffsetField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.DestroyTamesOverLevelClampOffset"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ForceAllowFoodAsConsumableListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.ForceAllowFoodAsConsumableList"); }
	float& UseBedCooldownTimeField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UseBedCooldownTime"); }
	float& MutagenBaseCostField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MutagenBaseCost"); }
	int& PaintTextureResolutionField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.PaintTextureResolution"); }
	bool& bOnlyDrawFloatingHUDAsLocalPlayerControllerField() { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bOnlyDrawFloatingHUDAsLocalPlayerController"); }
	float& RiddenStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiddenStasisRangeMultiplier"); }
	float& DieIfLeftWaterSpawnCapsuleDepthMultiField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DieIfLeftWaterSpawnCapsuleDepthMulti"); }
	FName& RestrictNonAlliedCarriedPlayerYawSocketField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.RestrictNonAlliedCarriedPlayerYawSocket"); }
	TObjectPtr<UTexture2D>& RideIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RideIcon"); }
	TObjectPtr<UTexture2D>& DriveIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DriveIcon"); }
	TObjectPtr<UTexture2D>& EquipSaddleToRideIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EquipSaddleToRideIcon"); }
	TObjectPtr<UTexture2D>& PassangerSeatsGenericIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PassangerSeatsGenericIcon"); }
	TObjectPtr<UTexture2D>& EnablePublicSeatingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnablePublicSeatingIcon"); }
	TObjectPtr<UTexture2D>& DisablePublicSeatingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisablePublicSeatingIcon"); }
	TObjectPtr<UTexture2D>& FlyingMountsDisabledIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FlyingMountsDisabledIcon"); }
	TObjectPtr<UTexture2D>& RequiresEngramToMountIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RequiresEngramToMountIcon"); }
	TObjectPtr<UTexture2D>& RequiresDLCIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLCIcon"); }
	TObjectPtr<UTexture2D>& OptionsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.OptionsIcon"); }
	TObjectPtr<UTexture2D>& BehaviourIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.BehaviourIcon"); }
	TObjectPtr<UTexture2D>& PickUpIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PickUpIcon"); }
	TObjectPtr<UTexture2D>& NeuterIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.NeuterIcon"); }
	TObjectPtr<UTexture2D>& ExportIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ExportIcon"); }
	TObjectPtr<UTexture2D>& AllowSpecialAttacksIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.AllowSpecialAttacksIcon"); }
	TObjectPtr<UTexture2D>& DisableSpecialAttacksIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableSpecialAttacksIcon"); }
	TObjectPtr<UTexture2D>& EnableTurretModeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableTurretModeIcon"); }
	TObjectPtr<UTexture2D>& DisableTurretModeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableTurretModeIcon"); }
	TObjectPtr<UTexture2D>& HideBoneIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.HideBoneIcon"); }
	TObjectPtr<UTexture2D>& UnhideBoneIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.UnhideBoneIcon"); }
	TObjectPtr<UTexture2D>& RepairIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RepairIcon"); }
	TObjectPtr<UTexture2D>& CantRepairIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CantRepairIcon"); }
	TObjectPtr<UTexture2D>& RenameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RenameIcon"); }
	TObjectPtr<UTexture2D>& DemolishIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DemolishIcon"); }
	TObjectPtr<UTexture2D>& ImprintOnIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ImprintOnIcon"); }
	TObjectPtr<UTexture2D>& WantsToCuddleIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WantsToCuddleIcon"); }
	TObjectPtr<UTexture2D>& WantsToGoOnAWalkIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WantsToGoOnAWalkIcon"); }
	TObjectPtr<UTexture2D>& WantsCareIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WantsCareIcon"); }
	TObjectPtr<UTexture2D>& FeedToComfortIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FeedToComfortIcon"); }
	TObjectPtr<UTexture2D>& FeedToTameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FeedToTameIcon"); }
	TObjectPtr<UTexture2D>& PutItemInLastSlotToTameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PutItemInLastSlotToTameIcon"); }
	TObjectPtr<UTexture2D>& PutTamingFoodInLastSlotToTameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PutTamingFoodInLastSlotToTameIcon"); }
	TObjectPtr<UTexture2D>& DoesNotWantToBeTamedIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DoesNotWantToBeTamedIcon"); }
	TObjectPtr<UTexture2D>& NeedLevelToFeedIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.NeedLevelToFeedIcon"); }
	TObjectPtr<UTexture2D>& WaitUntilHungryIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WaitUntilHungryIcon"); }
	TObjectPtr<UTexture2D>& ClaimIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ClaimIcon"); }
	TObjectPtr<UTexture2D>& UnclaimIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.UnclaimIcon"); }
	TObjectPtr<UTexture2D>& HarvestSettingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.HarvestSettingIcon"); }
	TObjectPtr<UTexture2D>& DisableResourceHarvestingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableResourceHarvestingIcon"); }
	TObjectPtr<UTexture2D>& EnableResourceHarvestingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableResourceHarvestingIcon"); }
	TObjectPtr<UTexture2D>& DisableVictimItemCollectionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableVictimItemCollectionIcon"); }
	TObjectPtr<UTexture2D>& EnableVictimItemCollectionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableVictimItemCollectionIcon"); }
	TObjectPtr<UTexture2D>& OrderGroupSettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.OrderGroupSettingsIcon"); }
	TObjectPtr<UTexture2D>& AddTameToGroupIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.AddTameToGroupIcon"); }
	TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& AddTameToGroupSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.AddTameToGroupSelectionIcons"); }
	TObjectPtr<UTexture2D>& RemoveTameFromGroupsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RemoveTameFromGroupsIcon"); }
	TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& RemoveTameFromGroupSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.RemoveTameFromGroupSelectionIcons"); }
	TObjectPtr<UTexture2D>& AddClassToGroupIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.AddClassToGroupIcon"); }
	TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& AddClassToGroupSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.AddClassToGroupSelectionIcons"); }
	TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& RemoveClassFromGroupSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.RemoveClassFromGroupSelectionIcons"); }
	TObjectPtr<UTexture2D>& StanceIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceIcon"); }
	TObjectPtr<UTexture2D>& StancePassiveFleeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StancePassiveFleeIcon"); }
	TObjectPtr<UTexture2D>& StancePassiveIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StancePassiveIcon"); }
	TObjectPtr<UTexture2D>& StanceNeutralIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceNeutralIcon"); }
	TObjectPtr<UTexture2D>& StanceAggressiveIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceAggressiveIcon"); }
	TObjectPtr<UTexture2D>& StanceAttackTargetIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceAttackTargetIcon"); }
	TObjectPtr<UTexture2D>& DisableAllyLookingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableAllyLookingIcon"); }
	TObjectPtr<UTexture2D>& EnableAllyLookingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableAllyLookingIcon"); }
	TObjectPtr<UTexture2D>& EnableIgnoreGroupWhistlesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableIgnoreGroupWhistlesIcon"); }
	TObjectPtr<UTexture2D>& DisableIgnoreGroupWhistlesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableIgnoreGroupWhistlesIcon"); }
	TObjectPtr<UTexture2D>& EnableMatingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableMatingIcon"); }
	TObjectPtr<UTexture2D>& DisableMatingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableMatingIcon"); }
	TObjectPtr<UTexture2D>& EnableWanderingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableWanderingIcon"); }
	TObjectPtr<UTexture2D>& DisableWanderingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableWanderingIcon"); }
	TObjectPtr<UTexture2D>& EnableFollowingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableFollowingIcon"); }
	TObjectPtr<UTexture2D>& DisableFollowingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableFollowingIcon"); }
	TObjectPtr<UTexture2D>& ChangeFollowDistanceIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ChangeFollowDistanceIcon"); }
	TObjectPtr<UTexture2D>& FollowDistanceLowestIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceLowestIcon"); }
	TObjectPtr<UTexture2D>& FollowDistanceLowIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceLowIcon"); }
	TObjectPtr<UTexture2D>& FollowDistanceMediumIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceMediumIcon"); }
	TObjectPtr<UTexture2D>& FollowDistanceHighIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceHighIcon"); }
	TObjectPtr<UTexture2D>& FollowDistanceHighestIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceHighestIcon"); }
	TObjectPtr<UTexture2D>& ShowCopySettingsVisualIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ShowCopySettingsVisualIcon"); }
	TObjectPtr<UTexture2D>& HideCopySettingsVisualIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.HideCopySettingsVisualIcon"); }
	TObjectPtr<UTexture2D>& CopySettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CopySettingsIcon"); }
	TObjectPtr<UTexture2D>& CopySettingsInRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CopySettingsInRangeIcon"); }
	TObjectPtr<UTexture2D>& CopySettingsInRangeWithPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CopySettingsInRangeWithPinCodeIcon"); }
	TObjectPtr<UTexture2D>& TargetingOptionsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingOptionsIcon"); }
	TObjectPtr<UTexture2D>& TargetingRangeLowestIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeLowestIcon"); }
	TObjectPtr<UTexture2D>& TargetingRangeLowIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeLowIcon"); }
	TObjectPtr<UTexture2D>& TargetingRangeMediumIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeMediumIcon"); }
	TObjectPtr<UTexture2D>& TargetingRangeHighIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeHighIcon"); }
	TObjectPtr<UTexture2D>& TargetingRangeHighestIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeHighestIcon"); }
	TObjectPtr<UTexture2D>& EnableOnlyTargetConsciousIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableOnlyTargetConsciousIcon"); }
	TObjectPtr<UTexture2D>& DisableOnlyTargetConsciousIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableOnlyTargetConsciousIcon"); }
	TObjectPtr<UTexture2D>& TribeRankSettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TribeRankSettingsIcon"); }
	TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& TribeOrderRankSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.TribeOrderRankSelectionIcons"); }
	TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& TribeRidingRankSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalDinoCharacterSparseClassData.TribeRidingRankSelectionIcons"); }
	TObjectPtr<UTexture2D>& GestationMonitoringCategoryIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringCategoryIcon"); }
	TObjectPtr<UTexture2D>& GestationMonitoringHideEmbryoStatsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringHideEmbryoStatsIcon"); }
	TObjectPtr<UTexture2D>& GestationMonitoringViewEmbryoStatsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringViewEmbryoStatsIcon"); }
	TObjectPtr<UTexture2D>& GestationMonitoringResetGestationField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringResetGestation"); }
	float& DinoArmorDurabilityScalingMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DinoArmorDurabilityScalingMultiplier"); }
	int& MaxTamedAmountPerTribeField() { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxTamedAmountPerTribe"); }
	TSoftClassPtr<UPrimalItem>& EmbryoItemTemplateField() { return *GetNativePointerField<TSoftClassPtr<UPrimalItem>*>(this, "FPrimalDinoCharacterSparseClassData.EmbryoItemTemplate"); }
	TEnumAsByte<enum ETribeGroupPermission::Type>& RenamePermissionField() { return *GetNativePointerField<TEnumAsByte<enum ETribeGroupPermission::Type>*>(this, "FPrimalDinoCharacterSparseClassData.RenamePermission"); }
	TSoftClassPtr<UPrimalCharacterStatusComponent>& BackupStatusCompClassForTraitCheckField() { return *GetNativePointerField<TSoftClassPtr<UPrimalCharacterStatusComponent>*>(this, "FPrimalDinoCharacterSparseClassData.BackupStatusCompClassForTraitCheck"); }
	TMap<FName, UE::Math::TRotator<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TRotator<double>, 0> >& StructureAlignToSaddlePerBoneAdjustedRotationsField() { return *GetNativePointerField<TMap<FName, UE::Math::TRotator<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TRotator<double>, 0> >*>(this, "FPrimalDinoCharacterSparseClassData.StructureAlignToSaddlePerBoneAdjustedRotations"); }
	FName& CalculateStructureDistanceFromSaddleSocketOverrideField() { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureDistanceFromSaddleSocketOverride"); }
	UE::Math::TVector<double>& CosmeticRiderOffsetRange_MinField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.CosmeticRiderOffsetRange_Min"); }
	UE::Math::TVector<double>& CosmeticRiderOffsetRange_MaxField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalDinoCharacterSparseClassData.CosmeticRiderOffsetRange_Max"); }
	float& AddToCarryDragWeight_CartMultiField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AddToCarryDragWeight_CartMulti"); }
	TSoftClassPtr<APrimalDinoCharacter>& GestationBabyDinoClassOverrideField() { return *GetNativePointerField<TSoftClassPtr<APrimalDinoCharacter>*>(this, "FPrimalDinoCharacterSparseClassData.GestationBabyDinoClassOverride"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bLocationBasedAttackField() { return { this, "FPrimalDinoCharacterSparseClassData.bLocationBasedAttack" }; }
	BitFieldValue<bool, unsigned __int32> bKeepBasedOnJumpingField() { return { this, "FPrimalDinoCharacterSparseClassData.bKeepBasedOnJumping" }; }
	BitFieldValue<bool, unsigned __int32> bCanThrottleWanderingField() { return { this, "FPrimalDinoCharacterSparseClassData.bCanThrottleWandering" }; }
	BitFieldValue<bool, unsigned __int32> bEnableAnimUpdateRateOptimizationField() { return { this, "FPrimalDinoCharacterSparseClassData.bEnableAnimUpdateRateOptimization" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWildAnimUpdateRateOptimizationField() { return { this, "FPrimalDinoCharacterSparseClassData.bEnableWildAnimUpdateRateOptimization" }; }
	BitFieldValue<bool, unsigned __int32> bTamedWanderHarvestAllowUsableHarvestingAsWellField() { return { this, "FPrimalDinoCharacterSparseClassData.bTamedWanderHarvestAllowUsableHarvestingAsWell" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPKilledSomethingEventField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPKilledSomethingEvent" }; }
	BitFieldValue<bool, unsigned __int32> bKeepInventoryForWakingTameField() { return { this, "FPrimalDinoCharacterSparseClassData.bKeepInventoryForWakingTame" }; }
	BitFieldValue<bool, unsigned __int32> bTamedWanderCorpseHarvestingField() { return { this, "FPrimalDinoCharacterSparseClassData.bTamedWanderCorpseHarvesting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyStructurePlacedNearbyField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPNotifyStructurePlacedNearby" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPShouldForceFleeField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPShouldForceFlee" }; }
	BitFieldValue<bool, unsigned __int32> bIsBossDinoAllowLootDropField() { return { this, "FPrimalDinoCharacterSparseClassData.bIsBossDinoAllowLootDrop" }; }
	BitFieldValue<bool, unsigned __int32> bForceWanderOverrideNPCZoneManagerField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceWanderOverrideNPCZoneManager" }; }
	BitFieldValue<bool, unsigned __int32> bDeprecateDinoField() { return { this, "FPrimalDinoCharacterSparseClassData.bDeprecateDino" }; }
	BitFieldValue<bool, unsigned __int32> bForceFoodItemAutoConsumeField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceFoodItemAutoConsume" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerAllowFlyingWithExplosiveField() { return { this, "FPrimalDinoCharacterSparseClassData.bFlyerAllowFlyingWithExplosive" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseDediAttackTimingField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceUseDediAttackTiming" }; }
	BitFieldValue<bool, unsigned __int32> bWakingTameConsumeEntireStackField() { return { this, "FPrimalDinoCharacterSparseClassData.bWakingTameConsumeEntireStack" }; }
	BitFieldValue<bool, unsigned __int32> bWildDinoPreventWeightField() { return { this, "FPrimalDinoCharacterSparseClassData.bWildDinoPreventWeight" }; }
	BitFieldValue<bool, unsigned __int32> bRetainCarriedCharacterOnDismountField() { return { this, "FPrimalDinoCharacterSparseClassData.bRetainCarriedCharacterOnDismount" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnTamedProcessOrderField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnTamedProcessOrder" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OnTamedOrderReceivedField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBP_OnTamedOrderReceived" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAttackWithCryoSicknessField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowAttackWithCryoSickness" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanCryoField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCanCryo" }; }
	BitFieldValue<bool, unsigned __int32> bWildPreventTeleportingField() { return { this, "FPrimalDinoCharacterSparseClassData.bWildPreventTeleporting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPClampMaxHarvestHealthField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPClampMaxHarvestHealth" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPBecameNewBabyField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPBecameNewBaby" }; }
	BitFieldValue<bool, unsigned __int32> bTryAlwaysApplyCryoSicknessField() { return { this, "FPrimalDinoCharacterSparseClassData.bTryAlwaysApplyCryoSickness" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetSimulatedInterpRollOverrideField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPSetSimulatedInterpRollOverride" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetInitialAimOffsetTargetsField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPSetInitialAimOffsetTargets" }; }
	BitFieldValue<bool, unsigned __int32> bConsoleIgnoreSafeZonesForCrosshairField() { return { this, "FPrimalDinoCharacterSparseClassData.bConsoleIgnoreSafeZonesForCrosshair" }; }
	BitFieldValue<bool, unsigned __int32> bForceDrawCrosshairWhenHUDIsHiddenField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceDrawCrosshairWhenHUDIsHidden" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanLandField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCanLand" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCheckRefreshDefaultInventoryItemsField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowCheckRefreshDefaultInventoryItems" }; }
	BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForTamingDialogField() { return { this, "FPrimalDinoCharacterSparseClassData.bShowRequiresDLCForTamingDialog" }; }
	BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForRideAndMountDialogField() { return { this, "FPrimalDinoCharacterSparseClassData.bShowRequiresDLCForRideAndMountDialog" }; }
	BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForClaimingDialogField() { return { this, "FPrimalDinoCharacterSparseClassData.bShowRequiresDLCForClaimingDialog" }; }
	BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForInventoryAccessField() { return { this, "FPrimalDinoCharacterSparseClassData.bShowRequiresDLCForInventoryAccess" }; }
	BitFieldValue<bool, unsigned __int32> bRideAndMountRequiresDLCField() { return { this, "FPrimalDinoCharacterSparseClassData.bRideAndMountRequiresDLC" }; }
	BitFieldValue<bool, unsigned __int32> bClaimingRequiresDLCField() { return { this, "FPrimalDinoCharacterSparseClassData.bClaimingRequiresDLC" }; }
	BitFieldValue<bool, unsigned __int32> bInventoryAccessRequiresDLCField() { return { this, "FPrimalDinoCharacterSparseClassData.bInventoryAccessRequiresDLC" }; }
	BitFieldValue<bool, unsigned __int32> bIsBigBossDinoWithHighPrioritySoundsField() { return { this, "FPrimalDinoCharacterSparseClassData.bIsBigBossDinoWithHighPrioritySounds" }; }
	BitFieldValue<bool, unsigned __int32> bMaleAllowPoopAltItemClassField() { return { this, "FPrimalDinoCharacterSparseClassData.bMaleAllowPoopAltItemClass" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsLandingOnDinoField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPIsLandingOnDino" }; }
	BitFieldValue<bool, unsigned __int32> bCanChargeField() { return { this, "FPrimalDinoCharacterSparseClassData.bCanCharge" }; }
	BitFieldValue<bool, unsigned __int32> bChargeDamageStructuresField() { return { this, "FPrimalDinoCharacterSparseClassData.bChargeDamageStructures" }; }
	BitFieldValue<bool, unsigned __int32> bAutoTameableField() { return { this, "FPrimalDinoCharacterSparseClassData.bAutoTameable" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysSetTamingTeamOnItemAddField() { return { this, "FPrimalDinoCharacterSparseClassData.bAlwaysSetTamingTeamOnItemAdd" }; }
	BitFieldValue<bool, unsigned __int32> bRiderUseDirectionalAttackIndexField() { return { this, "FPrimalDinoCharacterSparseClassData.bRiderUseDirectionalAttackIndex" }; }
	BitFieldValue<bool, unsigned __int32> bIKIgnoreSaddleStructuresField() { return { this, "FPrimalDinoCharacterSparseClassData.bIKIgnoreSaddleStructures" }; }
	BitFieldValue<bool, unsigned __int32> bAttackTargetWhenLaunchedField() { return { this, "FPrimalDinoCharacterSparseClassData.bAttackTargetWhenLaunched" }; }
	BitFieldValue<bool, unsigned __int32> bCanOpenLockedDoorsField() { return { this, "FPrimalDinoCharacterSparseClassData.bCanOpenLockedDoors" }; }
	BitFieldValue<bool, unsigned __int32> bApplyColorToChildComponentsField() { return { this, "FPrimalDinoCharacterSparseClassData.bApplyColorToChildComponents" }; }
	BitFieldValue<bool, unsigned __int32> bAllowsFishingOnSaddleField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowsFishingOnSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bOverridePlatformStructureLimitField() { return { this, "FPrimalDinoCharacterSparseClassData.bOverridePlatformStructureLimit" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeAttackHarvetUsableComponentsField() { return { this, "FPrimalDinoCharacterSparseClassData.bMeleeAttackHarvetUsableComponents" }; }
	BitFieldValue<bool, unsigned __int32> bUpdateCharsOnMeleeAttackHarvestUsableField() { return { this, "FPrimalDinoCharacterSparseClassData.bUpdateCharsOnMeleeAttackHarvestUsable" }; }
	BitFieldValue<bool, unsigned __int32> bPlatformSaddleIgnoreRotDotCheckField() { return { this, "FPrimalDinoCharacterSparseClassData.bPlatformSaddleIgnoreRotDotCheck" }; }
	BitFieldValue<bool, unsigned __int32> bPlatformSaddleAllowBasingUnderwaterField() { return { this, "FPrimalDinoCharacterSparseClassData.bPlatformSaddleAllowBasingUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bUseInteprolatedVelocityField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseInteprolatedVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bTamedWanderHarvestNonUsableHarvestingField() { return { this, "FPrimalDinoCharacterSparseClassData.bTamedWanderHarvestNonUsableHarvesting" }; }
	BitFieldValue<bool, unsigned __int32> bPreventBasingWhenUntamedField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventBasingWhenUntamed" }; }
	BitFieldValue<bool, unsigned __int32> bChargingRequiresWalkingField() { return { this, "FPrimalDinoCharacterSparseClassData.bChargingRequiresWalking" }; }
	BitFieldValue<bool, unsigned __int32> bDisplaySummonedNotificationField() { return { this, "FPrimalDinoCharacterSparseClassData.bDisplaySummonedNotification" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayKilledNotificationField() { return { this, "FPrimalDinoCharacterSparseClassData.bDisplayKilledNotification" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetAttackWeightField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetAttackWeight" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAllRiderWeaponsOnReequipField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventAllRiderWeaponsOnReequip" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDeathAutoGrabField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowDeathAutoGrab" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAutoUnstasisDestroyField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowAutoUnstasisDestroy" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysUpdateAimOffsetInterpolationField() { return { this, "FPrimalDinoCharacterSparseClassData.bAlwaysUpdateAimOffsetInterpolation" }; }
	BitFieldValue<bool, unsigned __int32> WildAmbientHarvestingAnimationServerTickPoseField() { return { this, "FPrimalDinoCharacterSparseClassData.WildAmbientHarvestingAnimationServerTickPose" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSleepingTameField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventSleepingTame" }; }
	BitFieldValue<bool, unsigned __int32> bTamedWanderHarvestField() { return { this, "FPrimalDinoCharacterSparseClassData.bTamedWanderHarvest" }; }
	BitFieldValue<bool, unsigned __int32> bSimulatedNetLandCheckFloorField() { return { this, "FPrimalDinoCharacterSparseClassData.bSimulatedNetLandCheckFloor" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerPreventRiderAutoFlyField() { return { this, "FPrimalDinoCharacterSparseClassData.bFlyerPreventRiderAutoFly" }; }
	BitFieldValue<bool, unsigned __int32> bAllowFlyerLandedRiderField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowFlyerLandedRider" }; }
	BitFieldValue<bool, unsigned __int32> bPreventFlyerFlyingRiderField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventFlyerFlyingRider" }; }
	BitFieldValue<bool, unsigned __int32> bPreventFlyerCapsuleExpansionField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventFlyerCapsuleExpansion" }; }
	BitFieldValue<bool, unsigned __int32> bIncludeCarryWeightOfBasedPawnsField() { return { this, "FPrimalDinoCharacterSparseClassData.bIncludeCarryWeightOfBasedPawns" }; }
	BitFieldValue<bool, unsigned __int32> bForceRiderNetworkParentField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceRiderNetworkParent" }; }
	BitFieldValue<bool, unsigned __int32> bForcePerfectTameField() { return { this, "FPrimalDinoCharacterSparseClassData.bForcePerfectTame" }; }
	BitFieldValue<bool, unsigned __int32> bUseBabyGestationField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBabyGestation" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUnalignedDinoBasingField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventUnalignedDinoBasing" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideLevelMusicIfTamedField() { return { this, "FPrimalDinoCharacterSparseClassData.bOverrideLevelMusicIfTamed" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsSaddleStructuresField() { return { this, "FPrimalDinoCharacterSparseClassData.bSupportsSaddleStructures" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeRepairedField() { return { this, "FPrimalDinoCharacterSparseClassData.bCanBeRepaired" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerDontAutoLandOnDismountField() { return { this, "FPrimalDinoCharacterSparseClassData.bFlyerDontAutoLandOnDismount" }; }
	BitFieldValue<bool, unsigned __int32> bUseTamedVisibleComponentsField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseTamedVisibleComponents" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDemolishField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bBlueprintDrawFloatingHUDField() { return { this, "FPrimalDinoCharacterSparseClassData.bBlueprintDrawFloatingHUD" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPTamedTickField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPTamedTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideWantsToRunField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOverrideWantsToRun" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPlayDyingField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPPlayDying" }; }
	BitFieldValue<bool, unsigned __int32> bAddPassengerSeatMultiUseEntriesField() { return { this, "FPrimalDinoCharacterSparseClassData.bAddPassengerSeatMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bUseSaddlePassengerSeatsWhenAvailableField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseSaddlePassengerSeatsWhenAvailable" }; }
	BitFieldValue<bool, unsigned __int32> bScaleInsulationByMeleeDamageField() { return { this, "FPrimalDinoCharacterSparseClassData.bScaleInsulationByMeleeDamage" }; }
	BitFieldValue<bool, unsigned __int32> bInventoryOnlyAllowCraftingWhenWanderingField() { return { this, "FPrimalDinoCharacterSparseClassData.bInventoryOnlyAllowCraftingWhenWandering" }; }
	BitFieldValue<bool, unsigned __int32> bHeldJumpSlowFallingField() { return { this, "FPrimalDinoCharacterSparseClassData.bHeldJumpSlowFalling" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasisField() { return { this, "FPrimalDinoCharacterSparseClassData.bTriggerBPUnstasis" }; }
	BitFieldValue<bool, unsigned __int32> bWildProduceEggDynamicallyField() { return { this, "FPrimalDinoCharacterSparseClassData.bWildProduceEggDynamically" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerAllowRidingInCavesField() { return { this, "FPrimalDinoCharacterSparseClassData.bFlyerAllowRidingInCaves" }; }
	BitFieldValue<bool, unsigned __int32> bScaleExtraRunningSpeedModifierField() { return { this, "FPrimalDinoCharacterSparseClassData.bScaleExtraRunningSpeedModifier" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairLocationField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetCrosshairLocation" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideCrosshairSpreadField() { return { this, "FPrimalDinoCharacterSparseClassData.bOverrideCrosshairSpread" }; }
	BitFieldValue<bool, unsigned __int32> bTreatCrouchInputAsAttackField() { return { this, "FPrimalDinoCharacterSparseClassData.bTreatCrouchInputAsAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetRiderUnboardLocationField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetRiderUnboardLocation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetRiderUnboardDirectionField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetRiderUnboardDirection" }; }
	BitFieldValue<bool, unsigned __int32> bModifyBasedCameraField() { return { this, "FPrimalDinoCharacterSparseClassData.bModifyBasedCamera" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnRefreshColorizationField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnRefreshColorization" }; }
	BitFieldValue<bool, unsigned __int32> bHideAncestorsButtonField() { return { this, "FPrimalDinoCharacterSparseClassData.bHideAncestorsButton" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDisplayTamedMessageField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPDisplayTamedMessage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanMountOnCharacterField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCanMountOnCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMaleNursingField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowMaleNursing" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetRiderSocketField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetRiderSocket" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPShowTamingPanelField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPShowTamingPanel" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideMutationLabelsField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOverrideMutationLabels" }; }
	BitFieldValue<bool, unsigned __int32> bPreventMovementModeChangeForDinoPassengersField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventMovementModeChangeForDinoPassengers" }; }
	BitFieldValue<bool, unsigned __int32> bPreventRiderImmobilizationField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventRiderImmobilization" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreCopySettingsVisualRangeMultiuseField() { return { this, "FPrimalDinoCharacterSparseClassData.bIgnoreCopySettingsVisualRangeMultiuse" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsMovementField() { return { this, "FPrimalDinoCharacterSparseClassData.bAttackStopsMovement" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeSwingDamageBlockedByAllStationaryObjectsField() { return { this, "FPrimalDinoCharacterSparseClassData.bMeleeSwingDamageBlockedByAllStationaryObjects" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPChargingModifyInputAccelerationField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPChargingModifyInputAcceleration" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnRepIsChargingField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnRepIsCharging" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventOrderAllowedField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPPreventOrderAllowed" }; }
	BitFieldValue<bool, unsigned __int32> bPassengerDinosUsePassengerAnimField() { return { this, "FPrimalDinoCharacterSparseClassData.bPassengerDinosUsePassengerAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUsesPassengerAnimOnDinosField() { return { this, "FPrimalDinoCharacterSparseClassData.bUsesPassengerAnimOnDinos" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideRotationOnCarriedCharacterField() { return { this, "FPrimalDinoCharacterSparseClassData.bOverrideRotationOnCarriedCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bAdvancedCarryReleaseField() { return { this, "FPrimalDinoCharacterSparseClassData.bAdvancedCarryRelease" }; }
	BitFieldValue<bool, unsigned __int32> bForceCarriedPlayerToCheckForWallsField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceCarriedPlayerToCheckForWalls" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsBasedOnActorField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPIsBasedOnActor" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyControlRotationField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPModifyControlRotation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnDinoFiredProjectileField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnDinoFiredProjectile" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetRidingMultiUseEntriesField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetRidingMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bAddDefaultCategoryRidingMultiUseEntriesField() { return { this, "FPrimalDinoCharacterSparseClassData.bAddDefaultCategoryRidingMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetMountedMultiUseEntriesField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetMountedMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMatingWithParentClassesField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowMatingWithParentClasses" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPUnstasisConsumeFoodField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPUnstasisConsumeFood" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnDinoStartledField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnDinoStartled" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteDinoConsumesStaminaWhileRunningField() { return { this, "FPrimalDinoCharacterSparseClassData.bRemoteDinoConsumesStaminaWhileRunning" }; }
	BitFieldValue<bool, unsigned __int32> bDisableHighQualityAIVolumeLedgeCheckingField() { return { this, "FPrimalDinoCharacterSparseClassData.bDisableHighQualityAIVolumeLedgeChecking" }; }
	BitFieldValue<bool, unsigned __int32> bDoHighQualityLedgeCheckingField() { return { this, "FPrimalDinoCharacterSparseClassData.bDoHighQualityLedgeChecking" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyDoStepDamageWhenRunningField() { return { this, "FPrimalDinoCharacterSparseClassData.bOnlyDoStepDamageWhenRunning" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPlatformSaddleMultiFloorsField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventPlatformSaddleMultiFloors" }; }
	BitFieldValue<bool, unsigned __int32> bPreventMountedDinoMeshHidingField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventMountedDinoMeshHiding" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTogglingPublicSeatingField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowTogglingPublicSeating" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWaterSurfaceExtraJumpField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowWaterSurfaceExtraJump" }; }
	BitFieldValue<bool, unsigned __int32> bUseVelocityForRequestedMoveIfStuckField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseVelocityForRequestedMoveIfStuck" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDoAttackField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPDoAttack" }; }
	BitFieldValue<bool, unsigned __int32> bStepDamageNonFoliageWithoutRunningField() { return { this, "FPrimalDinoCharacterSparseClassData.bStepDamageNonFoliageWithoutRunning" }; }
	BitFieldValue<bool, unsigned __int32> bStepDamageAllTargetablesField() { return { this, "FPrimalDinoCharacterSparseClassData.bStepDamageAllTargetables" }; }
	BitFieldValue<bool, unsigned __int32> bDamageNonFoliageFeetSocketsOnlyField() { return { this, "FPrimalDinoCharacterSparseClassData.bDamageNonFoliageFeetSocketsOnly" }; }
	BitFieldValue<bool, unsigned __int32> bRiderDontBeBlockedByPawnMeshField() { return { this, "FPrimalDinoCharacterSparseClassData.bRiderDontBeBlockedByPawnMesh" }; }
	BitFieldValue<bool, unsigned __int32> bUseExtendedUnstasisCheckField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseExtendedUnstasisCheck" }; }
	BitFieldValue<bool, unsigned __int32> bDoStepDamageTamedOnlyField() { return { this, "FPrimalDinoCharacterSparseClassData.bDoStepDamageTamedOnly" }; }
	BitFieldValue<bool, unsigned __int32> bStepDamageNonFoliageTamedOnlyField() { return { this, "FPrimalDinoCharacterSparseClassData.bStepDamageNonFoliageTamedOnly" }; }
	BitFieldValue<bool, unsigned __int32> bForceWildDeathInventoryDepositField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceWildDeathInventoryDeposit" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanTakePassengerField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCanTakePassenger" }; }
	BitFieldValue<bool, unsigned __int32> bForwardPlatformSaddleStructureDamageToDinoField() { return { this, "FPrimalDinoCharacterSparseClassData.bForwardPlatformSaddleStructureDamageToDino" }; }
	BitFieldValue<bool, unsigned __int32> bDontPlayAttackingMusicField() { return { this, "FPrimalDinoCharacterSparseClassData.bDontPlayAttackingMusic" }; }
	BitFieldValue<bool, unsigned __int32> bForceIgnoreRagdollHarvestingField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceIgnoreRagdollHarvesting" }; }
	BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetTargetLocationField() { return { this, "FPrimalDinoCharacterSparseClassData.bBPModifyAimOffsetTargetLocation" }; }
	BitFieldValue<bool, unsigned __int32> bIsVehicleField() { return { this, "FPrimalDinoCharacterSparseClassData.bIsVehicle" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsRotationField() { return { this, "FPrimalDinoCharacterSparseClassData.bAttackStopsRotation" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreTargetingLiveUnriddenDinosField() { return { this, "FPrimalDinoCharacterSparseClassData.bIgnoreTargetingLiveUnriddenDinos" }; }
	BitFieldValue<bool, unsigned __int32> bSleepedForceCreateInventoryField() { return { this, "FPrimalDinoCharacterSparseClassData.bSleepedForceCreateInventory" }; }
	BitFieldValue<bool, unsigned __int32> bLocalForceNearbySkelMeshUpdateField() { return { this, "FPrimalDinoCharacterSparseClassData.bLocalForceNearbySkelMeshUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerDisableEnemyTargetingMaxDeltaZField() { return { this, "FPrimalDinoCharacterSparseClassData.bFlyerDisableEnemyTargetingMaxDeltaZ" }; }
	BitFieldValue<bool, unsigned __int32> bTamedAIToggleSpecialAttacksField() { return { this, "FPrimalDinoCharacterSparseClassData.bTamedAIToggleSpecialAttacks" }; }
	BitFieldValue<bool, unsigned __int32> bRepeatPrimaryAttackField() { return { this, "FPrimalDinoCharacterSparseClassData.bRepeatPrimaryAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDoHarvestAttackField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPDoHarvestAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyHarvestingQuantityField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPModifyHarvestingQuantity" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyHarvestingWeightsArrayField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPModifyHarvestingWeightsArray" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyHarvestDamageField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPModifyHarvestDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDinoPostBeginPlayField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPDinoPostBeginPlay" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanAutodragField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCanAutodrag" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanDragCharacterField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCanDragCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDraggingWhileFallingField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowDraggingWhileFalling" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoLevelOnDecriptiveNameField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventDinoLevelOnDecriptiveName" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPShouldCancelDoAttackField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPShouldCancelDoAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseLocalSpaceDesiredRotationWithRiderField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseLocalSpaceDesiredRotationWithRider" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDesiredRotationIsLocalSpaceField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPDesiredRotationIsLocalSpace" }; }
	BitFieldValue<bool, unsigned __int32> bIsRobotField() { return { this, "FPrimalDinoCharacterSparseClassData.bIsRobot" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_CustomModifier_RotationRateField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBP_CustomModifier_RotationRate" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OnStartLandingNotifyField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBP_OnStartLandingNotify" }; }
	BitFieldValue<bool, unsigned __int32> bUseAttackForceWalkDistanceMultiplierField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseAttackForceWalkDistanceMultiplier" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPForceTurretFastTargetingField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPForceTurretFastTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bDisableCollisionWithDinosWhenFlyingField() { return { this, "FPrimalDinoCharacterSparseClassData.bDisableCollisionWithDinosWhenFlying" }; }
	BitFieldValue<bool, unsigned __int32> bIsTrapTamedField() { return { this, "FPrimalDinoCharacterSparseClassData.bIsTrapTamed" }; }
	BitFieldValue<bool, unsigned __int32> bCheckBPAllowClaimingField() { return { this, "FPrimalDinoCharacterSparseClassData.bCheckBPAllowClaiming" }; }
	BitFieldValue<bool, unsigned __int32> bPreventNeuterField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventNeuter" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetDragSocketNameField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetDragSocketName" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetDragSocketDinoNameField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetDragSocketDinoName" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetLookOffsetSocketNameField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPGetLookOffsetSocketName" }; }
	BitFieldValue<bool, unsigned __int32> bTargetEverythingIncludingSameTeamInPVEField() { return { this, "FPrimalDinoCharacterSparseClassData.bTargetEverythingIncludingSameTeamInPVE" }; }
	BitFieldValue<bool, unsigned __int32> bForceUsePhysicalFootSurfaceTraceField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceUsePhysicalFootSurfaceTrace" }; }
	BitFieldValue<bool, unsigned __int32> bHideSaddleInFPVField() { return { this, "FPrimalDinoCharacterSparseClassData.bHideSaddleInFPV" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStasisOnDediField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventStasisOnDedi" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysCheckForFloorField() { return { this, "FPrimalDinoCharacterSparseClassData.bAlwaysCheckForFloor" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysCheckForFallingField() { return { this, "FPrimalDinoCharacterSparseClassData.bAlwaysCheckForFalling" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowCarryWaterDinosField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceAllowCarryWaterDinos" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_AllowWalkableSlopeOverrideField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBP_AllowWalkableSlopeOverride" }; }
	BitFieldValue<bool, unsigned __int32> bHasInvisiableSaddleField() { return { this, "FPrimalDinoCharacterSparseClassData.bHasInvisiableSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bUseWildDinoMapMultipliersField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseWildDinoMapMultipliers" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInvalidTameVersionField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowInvalidTameVersion" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowPvECarryField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceAllowPvECarry" }; }
	BitFieldValue<bool, unsigned __int32> bUnderwaterMatingField() { return { this, "FPrimalDinoCharacterSparseClassData.bUnderwaterMating" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCheckSevenField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCheckSeven" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnMountStateChangedField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnMountStateChanged" }; }
	BitFieldValue<bool, unsigned __int32> bHandleUseButtonPressBPField() { return { this, "FPrimalDinoCharacterSparseClassData.bHandleUseButtonPressBP" }; }
	BitFieldValue<bool, unsigned __int32> bPreventBackwardsWalkingField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventBackwardsWalking" }; }
	BitFieldValue<bool, unsigned __int32> bSupplyPlayerMountedCarryAnimationField() { return { this, "FPrimalDinoCharacterSparseClassData.bSupplyPlayerMountedCarryAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowMountedCarryRunningField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceAllowMountedCarryRunning" }; }
	BitFieldValue<bool, unsigned __int32> bCanLatchField() { return { this, "FPrimalDinoCharacterSparseClassData.bCanLatch" }; }
	BitFieldValue<bool, unsigned __int32> bAllowNonFlyerLatchingField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowNonFlyerLatching" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAutoLatchedMountedWeaponryField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventAutoLatchedMountedWeaponry" }; }
	BitFieldValue<bool, unsigned __int32> bCanRideLatchedField() { return { this, "FPrimalDinoCharacterSparseClassData.bCanRideLatched" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPFedWakingTameEventField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPFedWakingTameEvent" }; }
	BitFieldValue<bool, unsigned __int32> bUseCustomHealthBarColorField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseCustomHealthBarColor" }; }
	BitFieldValue<bool, unsigned __int32> bCheckBPAllowCarryCharacterField() { return { this, "FPrimalDinoCharacterSparseClassData.bCheckBPAllowCarryCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyMateBoostChangedField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPNotifyMateBoostChanged" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCarriedDinoBabyRescaledField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPCarriedDinoBabyRescaled" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowBackwardsMovementWithNoRiderField() { return { this, "FPrimalDinoCharacterSparseClassData.bForceAllowBackwardsMovementWithNoRider" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideHealthBarOffsetField() { return { this, "FPrimalDinoCharacterSparseClassData.bBPOverrideHealthBarOffset" }; }
	BitFieldValue<bool, unsigned __int32> bDinoFPVDisableMotionBlurField() { return { this, "FPrimalDinoCharacterSparseClassData.bDinoFPVDisableMotionBlur" }; }
	BitFieldValue<bool, unsigned __int32> bPaintingUseSaddleField() { return { this, "FPrimalDinoCharacterSparseClassData.bPaintingUseSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bDinoDontOverrideControllerPitchField() { return { this, "FPrimalDinoCharacterSparseClassData.bDinoDontOverrideControllerPitch" }; }
	BitFieldValue<bool, unsigned __int32> bAllowFlyerDinoSubmergingField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowFlyerDinoSubmerging" }; }
	BitFieldValue<bool, unsigned __int32> bPreventZeroingFlyerPitchWhenSwimmingField() { return { this, "FPrimalDinoCharacterSparseClassData.bPreventZeroingFlyerPitchWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bRiderDisableAimOffsetField() { return { this, "FPrimalDinoCharacterSparseClassData.bRiderDisableAimOffset" }; }
	BitFieldValue<bool, unsigned __int32> bRestrictNonAlliedCarriedPlayerYawField() { return { this, "FPrimalDinoCharacterSparseClassData.bRestrictNonAlliedCarriedPlayerYaw" }; }
	BitFieldValue<bool, unsigned __int32> bWildDinoAlsoUseInvisibleSaddleField() { return { this, "FPrimalDinoCharacterSparseClassData.bWildDinoAlsoUseInvisibleSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnSaddledStructLoadedField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnSaddledStructLoaded" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnSaddledStructRemovedField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnSaddledStructRemoved" }; }
	BitFieldValue<bool, unsigned __int32> bNeverAllowStrafingField() { return { this, "FPrimalDinoCharacterSparseClassData.bNeverAllowStrafing" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsValidFoodItemForConsumptionField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPIsValidFoodItemForConsumption" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDinoCompanionAttachmentField() { return { this, "FPrimalDinoCharacterSparseClassData.bAllowDinoCompanionAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bDebugMatingStatsField() { return { this, "FPrimalDinoCharacterSparseClassData.bDebugMatingStats" }; }
	BitFieldValue<bool, unsigned __int32> bIsAlphaEliteMegaDinoField() { return { this, "FPrimalDinoCharacterSparseClassData.bIsAlphaEliteMegaDino" }; }
	BitFieldValue<bool, unsigned __int32> bSetRiderHitWallSweepCheckLocationOnCarriedField() { return { this, "FPrimalDinoCharacterSparseClassData.bSetRiderHitWallSweepCheckLocationOnCarried" }; }
	BitFieldValue<bool, unsigned __int32> bDebugRandomLookAtTargetField() { return { this, "FPrimalDinoCharacterSparseClassData.bDebugRandomLookAtTarget" }; }
	BitFieldValue<bool, unsigned __int32> bDebugRandomLookAtTargetSearchRadiusField() { return { this, "FPrimalDinoCharacterSparseClassData.bDebugRandomLookAtTargetSearchRadius" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnSetAttackIndexField() { return { this, "FPrimalDinoCharacterSparseClassData.bUseBPOnSetAttackIndex" }; }

	// Functions

	FPrimalDinoCharacterSparseClassData& operator=(const FPrimalDinoCharacterSparseClassData* __that) { return NativeCall<FPrimalDinoCharacterSparseClassData&, const FPrimalDinoCharacterSparseClassData*>(this, "FPrimalDinoCharacterSparseClassData.operator=(FPrimalDinoCharacterSparseClassData&)", __that); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalDinoCharacterSparseClassData>(); }

	std::add_const_t<UE :: Math :: TVector < double >>& RidingAttackExtraVelocityField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.RidingAttackExtraVelocity"); }
	std::add_const_t<UAnimMontage *>& StartChargeAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.StartChargeAnimation"); }
	std::add_const_t<TArray < float , TSizedDefaultAllocator < 32 > >>& AttackAnimationsTimeFromEndToConsiderFinishedField() const { return *GetNativePointerField<TArray < float , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.AttackAnimationsTimeFromEndToConsiderFinished"); }
	std::add_const_t<TEnumAsByte < EEngramGroup :: Type >>& RequiresDLCField() const { return *GetNativePointerField<TEnumAsByte < EEngramGroup :: Type >*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLC"); }

	TSubclassOf<UDLC>& RequiresDLC_ClassField() { return *GetNativePointerField<TSubclassOf<UDLC>*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLC_Class"); }
	std::add_const_t<TSubclassOf < UDLC >>& RequiresDLC_ClassField() const { return *GetNativePointerField<TSubclassOf < UDLC >*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLC_Class"); }
	std::add_const_t<float>& ColorizationIntensityField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ColorizationIntensity"); }
	std::add_const_t<float>& BabyChanceOfTwinsField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyChanceOfTwins"); }
	std::add_const_t<float>& BabyGestationSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyGestationSpeed"); }
	std::add_const_t<float>& AutoFadeOutAfterTameTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AutoFadeOutAfterTameTime"); }
	std::add_const_t<float>& ExtraBabyGestationSpeedMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ExtraBabyGestationSpeedMultiplier"); }
	std::add_const_t<TArray < UMaterialInterface * , TSizedDefaultAllocator < 32 > >>& FemaleMaterialOverridesField() const { return *GetNativePointerField<TArray < UMaterialInterface * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMaterialOverrides"); }
	std::add_const_t<float>& PaintConsumptionMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PaintConsumptionMultiplier"); }
	std::add_const_t<float>& ChargingBlockedStopTimeThresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingBlockedStopTimeThreshold"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& MeleeSwingSocketsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.MeleeSwingSockets"); }
	std::add_const_t<float>& FinalNPCLevelMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FinalNPCLevelMultiplier"); }
	std::add_const_t<float>& LandingTraceMaxDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LandingTraceMaxDistance"); }
	std::add_const_t<float>& FlyingWanderFixedDistanceAmountField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyingWanderFixedDistanceAmount"); }
	std::add_const_t<float>& FlyingWanderRandomDistanceAmountField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyingWanderRandomDistanceAmount"); }
	std::add_const_t<float>& AcceptableLandingRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AcceptableLandingRadius"); }
	std::add_const_t<float>& MaxLandingTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxLandingTime"); }
	std::add_const_t<float>& ChargeSpeedMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeSpeedMultiplier"); }
	std::add_const_t<UAnimMontage *>& ChargingAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.ChargingAnim"); }
	std::add_const_t<float>& ChargingStaminaPerSecondDrainField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingStaminaPerSecondDrain"); }
	std::add_const_t<float>& ChargingStopDotTresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingStopDotTreshold"); }
	std::add_const_t<FString>& SaddleSlotNameOverrideField() const { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.SaddleSlotNameOverride"); }
	std::add_const_t<float>& WhistleTraceOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WhistleTraceOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& RidingFirstPersonViewLocationOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.RidingFirstPersonViewLocationOffset"); }
	std::add_const_t<float>& BasedCameraSpeedMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BasedCameraSpeedMultiplier"); }
	std::add_const_t<float>& WildBabyAgeWeightField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildBabyAgeWeight"); }
	std::add_const_t<bool>& bUntamedUseOverlapEventsField() const { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bUntamedUseOverlapEvents"); }
	std::add_const_t<float>& BabyChanceOfTripletsField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyChanceOfTriplets"); }
	std::add_const_t<FString>& HideBonesStringField() const { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.HideBonesString"); }
	std::add_const_t<UE :: Math :: TVector < double >>& WaterSurfaceExtraJumpVectorField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.WaterSurfaceExtraJumpVector"); }
	std::add_const_t<float>& OpenDoorDelayField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OpenDoorDelay"); }
	std::add_const_t<float>& TamedWanderHarvestIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestInterval"); }
	std::add_const_t<float>& TamedWanderHarvestSearchRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestSearchRange"); }
	std::add_const_t<float>& TamedWanderHarvestCollectRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestCollectRadius"); }
	std::add_const_t<UE :: Math :: TVector < double >>& TamedWanderHarvestCollectOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestCollectOffset"); }
	std::add_const_t<float>& PlatformSaddleMaxStructureBuildDistance2DField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PlatformSaddleMaxStructureBuildDistance2D"); }
	std::add_const_t<UAnimMontage *>& PlayAnimBelowHealthField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.PlayAnimBelowHealth"); }
	std::add_const_t<USoundBase *>& LowHealthExitSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalDinoCharacterSparseClassData.LowHealthExitSound"); }
	std::add_const_t<USoundBase *>& LowHealthEnterSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalDinoCharacterSparseClassData.LowHealthEnterSound"); }
	std::add_const_t<TSubclassOf < UPrimalDinoSettings >>& LowHealthDinoSettingsField() const { return *GetNativePointerField<TSubclassOf < UPrimalDinoSettings >*>(this, "FPrimalDinoCharacterSparseClassData.LowHealthDinoSettings"); }
	std::add_const_t<float>& SwimOffsetInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SwimOffsetInterpSpeed"); }
	std::add_const_t<float>& MeleeAttackStaminaCostField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MeleeAttackStaminaCost"); }
	std::add_const_t<UAnimMontage *>& WakingTameAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.WakingTameAnimation"); }
	std::add_const_t<TArray < float , TSizedDefaultAllocator < 32 > >>& DeathGiveItemChanceToBeBlueprintField() const { return *GetNativePointerField<TArray < float , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemChanceToBeBlueprint"); }
	std::add_const_t<float>& DeathGiveItemQualityMinField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemQualityMin"); }
	std::add_const_t<float>& DeathGiveItemQualityMaxField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemQualityMax"); }
	std::add_const_t<FString>& DeathGiveAchievementField() const { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveAchievement"); }
	std::add_const_t<float>& RiderExtraMaxSpeedModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderExtraMaxSpeedModifier"); }
	std::add_const_t<UAnimMontage *>& OpenDoorAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.OpenDoorAnim"); }
	std::add_const_t<float>& ControlFacePitchInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ControlFacePitchInterpSpeed"); }
	std::add_const_t<float>& DeathInventoryQualityPerLevelMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathInventoryQualityPerLevelMultiplier"); }
	std::add_const_t<FName>& PassengerBoneNameOverrideField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.PassengerBoneNameOverride"); }
	std::add_const_t<bool>& bUseBPIsValidUnStasisCasterField() const { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bUseBPIsValidUnStasisCaster"); }
	std::add_const_t<int>& MaxSaddleStructuresHeightField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxSaddleStructuresHeight"); }
	std::add_const_t<bool>& CalculateStructureHeightFromSaddleField() const { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureHeightFromSaddle"); }
	std::add_const_t<bool>& CalculateStructureDistanceFromSaddleField() const { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureDistanceFromSaddle"); }
	std::add_const_t<int>& SaddlePivotOffsetField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.SaddlePivotOffset"); }
	std::add_const_t<int>& MaxSaddleStructuresNumField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxSaddleStructuresNum"); }
	std::add_const_t<float>& DediForceAttackAnimTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DediForceAttackAnimTime"); }
	std::add_const_t<float>& DediForceStartAttackAfterAnimTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DediForceStartAttackAfterAnimTime"); }
	std::add_const_t<float>& UntamedPoopTimeMinIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UntamedPoopTimeMinInterval"); }
	std::add_const_t<float>& UntamedPoopTimeMaxIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UntamedPoopTimeMaxInterval"); }
	std::add_const_t<float>& MeleeHarvestDamageMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MeleeHarvestDamageMultiplier"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& BaseEggClassField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalDinoCharacterSparseClassData.BaseEggClass"); }
	std::add_const_t<float>& FertilizedEggChanceToUseMateClassField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FertilizedEggChanceToUseMateClass"); }
	std::add_const_t<float>& EggIntervalBetweenUnstasisChancesField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggIntervalBetweenUnstasisChances"); }
	std::add_const_t<float>& EggRangeMaximumNumberFromSameDinoTypeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggRangeMaximumNumberFromSameDinoType"); }
	std::add_const_t<int>& EggMaximumNumberFromSameDinoTypeField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.EggMaximumNumberFromSameDinoType"); }
	std::add_const_t<float>& EggRangeMaximumNumberField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggRangeMaximumNumber"); }
	std::add_const_t<int>& EggMaximumNumberField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.EggMaximumNumber"); }
	std::add_const_t<FName>& EggSpawnSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.EggSpawnSocketName"); }
	std::add_const_t<UAnimMontage *>& EggLayingAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.EggLayingAnimation"); }
	std::add_const_t<UAnimSequence *>& TurningRightRiderAnimOverrideField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalDinoCharacterSparseClassData.TurningRightRiderAnimOverride"); }
	std::add_const_t<UAnimSequence *>& TurningLeftRiderAnimOverrideField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalDinoCharacterSparseClassData.TurningLeftRiderAnimOverride"); }
	std::add_const_t<UAnimSequence *>& LatchedRiderAnimOverrideField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalDinoCharacterSparseClassData.LatchedRiderAnimOverride"); }
	std::add_const_t<float>& RidingAnimSpeedFactorField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingAnimSpeedFactor"); }
	std::add_const_t<UAnimMontage *>& StartRidingAnimOverrideField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.StartRidingAnimOverride"); }
	std::add_const_t<UAnimMontage *>& StopRidingAnimOverrideField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.StopRidingAnimOverride"); }
	std::add_const_t<float>& OutsideOriginalNPCVolumeStasisDestroyIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OutsideOriginalNPCVolumeStasisDestroyInterval"); }
	std::add_const_t<float>& StasisedDestroyIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StasisedDestroyInterval"); }
	std::add_const_t<float>& TamedAllowNamingTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedAllowNamingTime"); }
	std::add_const_t<float>& MovementSpeedScalingRotationRatePowerField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MovementSpeedScalingRotationRatePower"); }
	std::add_const_t<float>& AttackNoStaminaTorpidityMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackNoStaminaTorpidityMultiplier"); }
	std::add_const_t<float>& DecayDestructionPeriodField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DecayDestructionPeriod"); }
	std::add_const_t<float>& LocInterpolationSnapDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LocInterpolationSnapDistance"); }
	std::add_const_t<float>& MateBoostDamageReceiveMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostDamageReceiveMultiplier"); }
	std::add_const_t<float>& MateBoostDamageGiveMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostDamageGiveMultiplier"); }
	std::add_const_t<float>& MateBoostRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostRange"); }
	std::add_const_t<float>& RidingAttackExtraVelocityDelayField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingAttackExtraVelocityDelay"); }
	std::add_const_t<float>& StepDamageFootDamageIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageInterval"); }
	std::add_const_t<float>& StepDamageFootDamageRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageRadius"); }
	std::add_const_t<float>& StepDamageFootDamageAmountField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageAmount"); }
	std::add_const_t<float>& DurationBeforeMovingStuckPawnField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DurationBeforeMovingStuckPawn"); }
	std::add_const_t<UAnimMontage *>& StartledAnimationLeftField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimationLeft"); }
	std::add_const_t<TArray < UAnimMontage * , TSizedDefaultAllocator < 32 > >>& WanderIdleAnimationsField() const { return *GetNativePointerField<TArray < UAnimMontage * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.WanderIdleAnimations"); }
	std::add_const_t<TArray < UAnimMontage * , TSizedDefaultAllocator < 32 > >>& StartledAnimationsField() const { return *GetNativePointerField<TArray < UAnimMontage * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimations"); }
	std::add_const_t<UAnimMontage *>& FlyingStartledAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.FlyingStartledAnimation"); }
	std::add_const_t<float>& RandomPlayStartledAnimIntervalMinField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomPlayStartledAnimIntervalMin"); }
	std::add_const_t<float>& RandomPlayStartledAnimIntervalMaxField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomPlayStartledAnimIntervalMax"); }
	std::add_const_t<float>& StartledAnimationCooldownField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimationCooldown"); }
	std::add_const_t<float>& DefaultActivateAttackRangeOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DefaultActivateAttackRangeOffset"); }
	std::add_const_t<float>& CorpseTargetingMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CorpseTargetingMultiplier"); }
	std::add_const_t<float>& MinStaminaForRiderField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MinStaminaForRider"); }
	std::add_const_t<float>& LoseStaminaWithRiderRateField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LoseStaminaWithRiderRate"); }
	std::add_const_t<float>& MaxDinoKillerTransferWeightPercentField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxDinoKillerTransferWeightPercent"); }
	std::add_const_t<float>& NPCZoneVolumeCountWeightField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NPCZoneVolumeCountWeight"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& RepairRequirementsItemField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalDinoCharacterSparseClassData.RepairRequirementsItem"); }
	std::add_const_t<float>& RepairCheckIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RepairCheckInterval"); }
	std::add_const_t<float>& RepairPercentPerIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RepairPercentPerInterval"); }
	std::add_const_t<float>& WakingTameAllowFeedingFoodPercentageField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameAllowFeedingFoodPercentage"); }
	std::add_const_t<float>& WakingTameFoodAffinityMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameFoodAffinityMultiplier"); }
	std::add_const_t<float>& CheckForWildAmbientHarvestingIntervalMinField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CheckForWildAmbientHarvestingIntervalMin"); }
	std::add_const_t<float>& CheckForWildAmbientHarvestingIntervalMaxField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CheckForWildAmbientHarvestingIntervalMax"); }
	std::add_const_t<float>& WildAmbientHarvestingRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildAmbientHarvestingRadius"); }
	std::add_const_t<TSubclassOf < UDamageType >>& TamedHarvestDamageTypeField() const { return *GetNativePointerField<TSubclassOf < UDamageType >*>(this, "FPrimalDinoCharacterSparseClassData.TamedHarvestDamageType"); }
	std::add_const_t<float>& HasRiderPoopAnimIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HasRiderPoopAnimInterval"); }

	TSubclassOf<ULegacyCameraShake>& LightEndChargingShakeField() { return *GetNativePointerField<TSubclassOf<ULegacyCameraShake>*>(this, "FPrimalDinoCharacterSparseClassData.LightEndChargingShake"); }
	std::add_const_t<TSubclassOf < ULegacyCameraShake >>& LightEndChargingShakeField() const { return *GetNativePointerField<TSubclassOf < ULegacyCameraShake >*>(this, "FPrimalDinoCharacterSparseClassData.LightEndChargingShake"); }

	TSubclassOf<ULegacyCameraShake>& HardEndChargingShakeField() { return *GetNativePointerField<TSubclassOf<ULegacyCameraShake>*>(this, "FPrimalDinoCharacterSparseClassData.HardEndChargingShake"); }
	std::add_const_t<TSubclassOf < ULegacyCameraShake >>& HardEndChargingShakeField() const { return *GetNativePointerField<TSubclassOf < ULegacyCameraShake >*>(this, "FPrimalDinoCharacterSparseClassData.HardEndChargingShake"); }
	std::add_const_t<float>& ChargeBumpDamageField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpDamage"); }
	std::add_const_t<TSubclassOf < UDamageType >>& ChargeBumpDamageTypeField() const { return *GetNativePointerField<TSubclassOf < UDamageType >*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpDamageType"); }
	std::add_const_t<float>& ChargeBumpImpulseField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpImpulse"); }
	std::add_const_t<float>& MinChargeIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MinChargeInterval"); }
	std::add_const_t<UAnimMontage *>& MountCharacterAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.MountCharacterAnimation"); }
	std::add_const_t<UAnimMontage *>& UnmountCharacterAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.UnmountCharacterAnimation"); }
	std::add_const_t<float>& ChargingAnimDelayField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingAnimDelay"); }
	std::add_const_t<float>& ChargingActivationRequiresStaminaField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingActivationRequiresStamina"); }
	std::add_const_t<float>& ChargingActivationConsumesStaminaField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingActivationConsumesStamina"); }
	std::add_const_t<float>& FlyerHardBreakingOverrideField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyerHardBreakingOverride"); }
	std::add_const_t<float>& WanderAroundActorMaxDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WanderAroundActorMaxDistance"); }
	std::add_const_t<float>& FemaleMatingRangeAdditionField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMatingRangeAddition"); }
	std::add_const_t<float>& FemaleMatingTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMatingTime"); }
	std::add_const_t<UAnimMontage *>& MatingAnimationMaleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.MatingAnimationMale"); }
	std::add_const_t<USkeletalMesh *>& DefaultHarnessSaddleMeshField() const { return *GetNativePointerField<USkeletalMesh **>(this, "FPrimalDinoCharacterSparseClassData.DefaultHarnessSaddleMesh"); }
	std::add_const_t<USkeletalMesh *>& DefaultCarriageSaddleMeshField() const { return *GetNativePointerField<USkeletalMesh **>(this, "FPrimalDinoCharacterSparseClassData.DefaultCarriageSaddleMesh"); }
	std::add_const_t<float>& NewFemaleMinTimeBetweenMatingField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NewFemaleMinTimeBetweenMating"); }
	std::add_const_t<float>& NewFemaleMaxTimeBetweenMatingField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NewFemaleMaxTimeBetweenMating"); }
	std::add_const_t<float>& HyperThermiaInsulationField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HyperThermiaInsulation"); }
	std::add_const_t<float>& HypoThermiaInsulationField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HypoThermiaInsulation"); }
	std::add_const_t<float>& InsulationRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.InsulationRange"); }
	std::add_const_t<float>& GangDamageResistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GangDamageResistance"); }
	std::add_const_t<float>& GangDamageField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GangDamage"); }
	std::add_const_t<int>& MaxGangCountField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxGangCount"); }
	std::add_const_t<float>& HeldJumpSlowFallingGravityZScaleField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HeldJumpSlowFallingGravityZScale"); }
	std::add_const_t<UAnimMontage *>& SlowFallingAnimField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.SlowFallingAnim"); }
	std::add_const_t<float>& SlowFallingStaminaCostPerSecondField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SlowFallingStaminaCostPerSecond"); }
	std::add_const_t<float>& NoRiderRotationModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NoRiderRotationModifier"); }
	std::add_const_t<FName>& RiderLatchedFPVCameraUseSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.RiderLatchedFPVCameraUseSocketName"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& FPVRiderBoneNamesToHideField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalDinoCharacterSparseClassData.FPVRiderBoneNamesToHide"); }
	std::add_const_t<float>& RiderMovementSpeedScalingRotationRatePowerMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMovementSpeedScalingRotationRatePowerMultiplier"); }
	std::add_const_t<float>& HighQualityLedgeDetectionExtraTraceDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HighQualityLedgeDetectionExtraTraceDistance"); }
	std::add_const_t<float>& ForwardPlatformSaddleStructureDamageToDinoMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForwardPlatformSaddleStructureDamageToDinoMultiplier"); }
	std::add_const_t<FName>& ForwardPlatformSaddleStructurePointDamageToBoneField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.ForwardPlatformSaddleStructurePointDamageToBone"); }
	std::add_const_t<int>& LoadDestroyWildDinosUnderVersionField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.LoadDestroyWildDinosUnderVersion"); }
	std::add_const_t<float>& AllowWaterSurfaceExtraJumpStaminaCostField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AllowWaterSurfaceExtraJumpStaminaCost"); }
	std::add_const_t<USoundBase *>& PlayKillLocalSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalDinoCharacterSparseClassData.PlayKillLocalSound"); }
	std::add_const_t<float>& BabyMinCuddleIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyMinCuddleInterval"); }
	std::add_const_t<float>& BabyMaxCuddleIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyMaxCuddleInterval"); }
	std::add_const_t<float>& BabyCuddleWalkDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyCuddleWalkDistance"); }
	std::add_const_t<float>& RiderMaxImprintingQualityDamageReductionField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMaxImprintingQualityDamageReduction"); }
	std::add_const_t<float>& RiderMaxImprintingQualityDamageMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMaxImprintingQualityDamageMultiplier"); }
	std::add_const_t<float>& BabyImprintingQualityTotalMaturationTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyImprintingQualityTotalMaturationTime"); }
	std::add_const_t<float>& WakingTameMaxDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameMaxDistance"); }
	std::add_const_t<float>& WakingTameDisableDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameDisableDistance"); }
	std::add_const_t<float>& StepDamageFootDamageRunningMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageRunningMultiplier"); }
	std::add_const_t<float>& StepRadialDamageOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepRadialDamageOffset"); }
	std::add_const_t<float>& ForcePawnBigPushingForTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForcePawnBigPushingForTime"); }

	float& ForcePawnBigPushingMaxDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForcePawnBigPushingMaxDistance"); }
	std::add_const_t<float>& ForcePawnBigPushingMaxDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForcePawnBigPushingMaxDistance"); }
	std::add_const_t<float>& AIDinoForceActiveUntasisingRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AIDinoForceActiveUntasisingRange"); }
	std::add_const_t<float>& TamedSwimmingRotationRateModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedSwimmingRotationRateModifier"); }
	std::add_const_t<float>& WildSwimmingRotationRateModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildSwimmingRotationRateModifier"); }
	std::add_const_t<float>& RiderFlyingRotationRateModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderFlyingRotationRateModifier"); }
	std::add_const_t<TEnumAsByte < EFilterInterpolationType >>& MountedBlendFilterSmoothTypeField() const { return *GetNativePointerField<TEnumAsByte < EFilterInterpolationType >*>(this, "FPrimalDinoCharacterSparseClassData.MountedBlendFilterSmoothType"); }
	std::add_const_t<TEnumAsByte < EFilterInterpolationType >>& UnMountedBlendFilterSmoothTypeField() const { return *GetNativePointerField<TEnumAsByte < EFilterInterpolationType >*>(this, "FPrimalDinoCharacterSparseClassData.UnMountedBlendFilterSmoothType"); }
	std::add_const_t<float>& SetAttackTargetTraceWidthField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SetAttackTargetTraceWidth"); }
	std::add_const_t<UAnimMontage *>& PlayerMountedCarryAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalDinoCharacterSparseClassData.PlayerMountedCarryAnimation"); }
	std::add_const_t<float>& GainStaminaWhenLatchedRateField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GainStaminaWhenLatchedRate"); }
	std::add_const_t<int>& DeathGivesDossierIndexField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.DeathGivesDossierIndex"); }
	std::add_const_t<float>& DeathGivesDossierDelayField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGivesDossierDelay"); }
	std::add_const_t<bool>& TameGivesDossierField() const { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.TameGivesDossier"); }
	std::add_const_t<FName>& SaddleRiderMovementTraceThruSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.SaddleRiderMovementTraceThruSocketName"); }
	std::add_const_t<float>& RidingSwimmingRunSpeedModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingSwimmingRunSpeedModifier"); }
	std::add_const_t<int>& RandomMutationRollsField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationRolls"); }
	std::add_const_t<float>& RandomMutationChanceField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationChance"); }
	std::add_const_t<float>& RandomMutationGivePointsField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationGivePoints"); }
	std::add_const_t<FName>& WakingTameDistanceSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameDistanceSocketName"); }
	std::add_const_t<int>& WakingTameConsumeEntireStackMaxQuantityField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameConsumeEntireStackMaxQuantity"); }
	std::add_const_t<float>& AttackPlayerDesirabilityMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackPlayerDesirabilityMultiplier"); }
	std::add_const_t<float>& FlyerAttachedExplosiveSpeedMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyerAttachedExplosiveSpeedMultiplier"); }
	std::add_const_t<float>& SinglePlayerOutgoingDamageModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SinglePlayerOutgoingDamageModifier"); }
	std::add_const_t<float>& SinglePlayerIncomingDamageModifierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SinglePlayerIncomingDamageModifier"); }
	std::add_const_t<UE :: Math :: TVector < double >>& UnboardLocationTraceOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.UnboardLocationTraceOffset"); }
	std::add_const_t<FName>& AttackLineOfSightMeshSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.AttackLineOfSightMeshSocketName"); }
	std::add_const_t<float>& AttackForceWalkDistanceMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackForceWalkDistanceMultiplier"); }
	std::add_const_t<float>& AttackForceWalkRotationRateMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackForceWalkRotationRateMultiplier"); }
	std::add_const_t<int>& OverrideDinoTameSoundIndexField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.OverrideDinoTameSoundIndex"); }
	std::add_const_t<USoundBase *>& SwimSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalDinoCharacterSparseClassData.SwimSound"); }
	std::add_const_t<float>& SwimSoundIntervalPerHundredSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SwimSoundIntervalPerHundredSpeed"); }
	std::add_const_t<float>& PersonalTamedDinosSaddleStructureCostMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PersonalTamedDinosSaddleStructureCostMultiplier"); }
	std::add_const_t<float>& StasisAutoDestroyIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StasisAutoDestroyInterval"); }
	std::add_const_t<float>& CarryCameraYawOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CarryCameraYawOffset"); }
	std::add_const_t<float>& ExtraTamedBaseHealthMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ExtraTamedBaseHealthMultiplier"); }
	std::add_const_t<float>& AttackRangeOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackRangeOffset"); }
	std::add_const_t<float>& DinoExtraIncreasePlayerCollisionActivationDistanceSquaredField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DinoExtraIncreasePlayerCollisionActivationDistanceSquared"); }
	std::add_const_t<float>& OverrideApproachRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OverrideApproachRadius"); }
	std::add_const_t<float>& TamedOverrideStasisComponentRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedOverrideStasisComponentRadius"); }
	std::add_const_t<UStaticMesh *>& UniqueDino_MapMarkerMeshField() const { return *GetNativePointerField<UStaticMesh **>(this, "FPrimalDinoCharacterSparseClassData.UniqueDino_MapMarkerMesh"); }
	std::add_const_t<FColor>& UniqueDino_MapMarkerColorField() const { return *GetNativePointerField<FColor*>(this, "FPrimalDinoCharacterSparseClassData.UniqueDino_MapMarkerColor"); }
	std::add_const_t<float>& OverrideDinoMaxExperiencePointsField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OverrideDinoMaxExperiencePoints"); }
	std::add_const_t<int>& MaxDinoTameLevelsField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxDinoTameLevels"); }
	std::add_const_t<int>& DestroyTamesOverLevelClampOffsetField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.DestroyTamesOverLevelClampOffset"); }
	std::add_const_t<float>& UseBedCooldownTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UseBedCooldownTime"); }
	std::add_const_t<float>& MutagenBaseCostField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MutagenBaseCost"); }
	std::add_const_t<int>& PaintTextureResolutionField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.PaintTextureResolution"); }
	std::add_const_t<bool>& bOnlyDrawFloatingHUDAsLocalPlayerControllerField() const { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bOnlyDrawFloatingHUDAsLocalPlayerController"); }
	std::add_const_t<float>& RiddenStasisRangeMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiddenStasisRangeMultiplier"); }
	std::add_const_t<float>& DieIfLeftWaterSpawnCapsuleDepthMultiField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DieIfLeftWaterSpawnCapsuleDepthMulti"); }
	std::add_const_t<FName>& RestrictNonAlliedCarriedPlayerYawSocketField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.RestrictNonAlliedCarriedPlayerYawSocket"); }

	float& WildIdleFidgetPlayFrequencyMinField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildIdleFidgetPlayFrequencyMin"); }
	std::add_const_t<float>& WildIdleFidgetPlayFrequencyMinField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildIdleFidgetPlayFrequencyMin"); }

	float& WildIdleFidgetPlayFrequencyMaxField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildIdleFidgetPlayFrequencyMax"); }
	std::add_const_t<float>& WildIdleFidgetPlayFrequencyMaxField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildIdleFidgetPlayFrequencyMax"); }
	std::add_const_t<float>& DinoArmorDurabilityScalingMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DinoArmorDurabilityScalingMultiplier"); }
	std::add_const_t<int>& MaxTamedAmountPerTribeField() const { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxTamedAmountPerTribe"); }
	std::add_const_t<TEnumAsByte < ETribeGroupPermission :: Type >>& RenamePermissionField() const { return *GetNativePointerField<TEnumAsByte < ETribeGroupPermission :: Type >*>(this, "FPrimalDinoCharacterSparseClassData.RenamePermission"); }
	std::add_const_t<FName>& CalculateStructureDistanceFromSaddleSocketOverrideField() const { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureDistanceFromSaddleSocketOverride"); }
	std::add_const_t<UE :: Math :: TVector < double >>& CosmeticRiderOffsetRange_MinField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.CosmeticRiderOffsetRange_Min"); }
	std::add_const_t<UE :: Math :: TVector < double >>& CosmeticRiderOffsetRange_MaxField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalDinoCharacterSparseClassData.CosmeticRiderOffsetRange_Max"); }
	std::add_const_t<float>& AddToCarryDragWeight_CartMultiField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AddToCarryDragWeight_CartMulti"); }

	float& BioGrinderKibbleOverrideQuantityMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BioGrinderKibbleOverrideQuantityMultiplier"); }
	std::add_const_t<float>& BioGrinderKibbleOverrideQuantityMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BioGrinderKibbleOverrideQuantityMultiplier"); }

	float& RestrictedCarriedPlayerViewEndLocFlyingOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RestrictedCarriedPlayerViewEndLocFlyingOffset"); }
	std::add_const_t<float>& RestrictedCarriedPlayerViewEndLocFlyingOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RestrictedCarriedPlayerViewEndLocFlyingOffset"); }

	float& MaxRepairHealthPercentageField() { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxRepairHealthPercentage"); }
	std::add_const_t<float>& MaxRepairHealthPercentageField() const { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxRepairHealthPercentage"); }
};