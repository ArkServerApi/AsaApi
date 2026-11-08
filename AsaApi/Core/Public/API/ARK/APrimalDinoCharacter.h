#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalDinoCharacter : APrimalCharacter
{
	// Fields

	UE::Math::TVector<double>& BaseDinoScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BaseDinoScale"); }
	TWeakObjectPtr<AActor>& ForcedMasterTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoCharacter.ForcedMasterTarget"); }
	FName& MountCharacterSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.MountCharacterSocketName"); }
	TWeakObjectPtr<APrimalCharacter>& MountCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalDinoCharacter.MountCharacter"); }
	ECollisionChannel& MeshOriginalCollisionChannelField() { return *GetNativePointerField<ECollisionChannel*>(this, "APrimalDinoCharacter.MeshOriginalCollisionChannel"); }
	
	
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& AttackAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.AttackAnimations"); }
	TArray<float, TSizedDefaultAllocator<32> >& AttackAnimationWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.AttackAnimationWeights"); }
	
	
	
	
	
	
	int& MeleeDamageAmountField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MeleeDamageAmount"); }
	float& MeleeDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MeleeDamageImpulse"); }
	float& MeleeSwingRadiusField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MeleeSwingRadius"); }
	TArray<FDinoAttackInfo, TSizedDefaultAllocator<32> >& AttackInfosField() { return *GetNativePointerField<TArray<FDinoAttackInfo, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.AttackInfos"); }
	unsigned __int8& LastAttackIndexField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalDinoCharacter.LastAttackIndex"); }
	TSubclassOf<UDamageType>& MeleeDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalDinoCharacter.MeleeDamageType"); }
	TSubclassOf<UDamageType>& StepActorDamageTypeOverrideField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalDinoCharacter.StepActorDamageTypeOverride"); }
	float& AttackOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AttackOffset"); }
	float& FleeHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FleeHealthPercentage"); }
	float& BreakFleeHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BreakFleeHealthPercentage"); }
	FString& TamerStringField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamerString"); }
	FString& TamedNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamedName"); }
	TArray<FHibernationZoneInfo, TSizedDefaultAllocator<32> >& HibernatedZoneVolumesField() { return *GetNativePointerField<TArray<FHibernationZoneInfo, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.HibernatedZoneVolumes"); }
	UE::Math::TVector2<double>& OverlayTooltipPaddingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalDinoCharacter.OverlayTooltipPadding"); }
	UE::Math::TVector2<double>& OverlayTooltipScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalDinoCharacter.OverlayTooltipScale"); }
	//TSubclassOf<UPrimalDinoToolTipWidget>& HUDOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoToolTipWidget>*>(this, "APrimalDinoCharacter.HUDOverlayToolTipWidget"); }
	TSubclassOf<UPrimalDinoEntry>& MyDinoEntryField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoEntry>*>(this, "APrimalDinoCharacter.MyDinoEntry"); }
	UE::Math::TVector<double>& RiderFPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.RiderFPVCameraOffset"); }
	FTimerHandle& UpdateRidingFarShadowHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.UpdateRidingFarShadowHandle"); }
	UE::Math::TVector<double>& LandingLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.LandingLocation"); }
	long double& StartLandingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.StartLandingTime"); }
	long double& LastAxisStartPressTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastAxisStartPressTime"); }
	long double& LastMoveForwardTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastMoveForwardTime"); }
	
	
	
	
	
	
	
	
	
	
	
	UE::Math::TVector<double>& LastChargeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.LastChargeLocation"); }
	long double& LastStartChargingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastStartChargingTime"); }
	TWeakObjectPtr<AShooterCharacter>& RiderField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalDinoCharacter.Rider"); }
	TWeakObjectPtr<AShooterCharacter>& PreviousRiderField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalDinoCharacter.PreviousRider"); }
	TSubclassOf<UPrimalItem>& SaddleItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalDinoCharacter.SaddleItemClass"); }
	
	TArray<FSaddlePassengerSeatDefinition, TSizedDefaultAllocator<32> >& NoSaddlePassengerSeatsField() { return *GetNativePointerField<TArray<FSaddlePassengerSeatDefinition, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.NoSaddlePassengerSeats"); }
	TWeakObjectPtr<APrimalCharacter>& CarriedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalDinoCharacter.CarriedCharacter"); }
	TWeakObjectPtr<APrimalCharacter>& PreviousCarriedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalDinoCharacter.PreviousCarriedCharacter"); }
	UAnimMontage*& DinoWithPassengerAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.DinoWithPassengerAnim"); }
	UAnimMontage*& DinoWithDinoPassengerAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.DinoWithDinoPassengerAnim"); }
	TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& PassengerPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.PassengerPerSeat"); }
	TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& SavedPassengerPerSeatField() { return *GetNativePointerField<TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.SavedPassengerPerSeat"); }
	TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& PrevPassengerPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.PrevPassengerPerSeat"); }
	long double& LastClientCameraRotationServerUpdateField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastClientCameraRotationServerUpdate"); }
	TArray<USceneComponent*, TSizedDefaultAllocator<32> >& OverrideTargetComponentsField() { return *GetNativePointerField<TArray<USceneComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.OverrideTargetComponents"); }
	
	TWeakObjectPtr<UPrimalAIState>& ActiveStateField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalAIState>*>(this, "APrimalDinoCharacter.ActiveState"); }
	TWeakObjectPtr<UPrimalAIState>& ActiveWonderStateField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalAIState>*>(this, "APrimalDinoCharacter.ActiveWonderState"); }
	int& LastPlayedAttackAnimationField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastPlayedAttackAnimation"); }
	TArray<FDinoBaseLevelWeightEntry, TSizedDefaultAllocator<32> >& DinoBaseLevelWeightEntriesField() { return *GetNativePointerField<TArray<FDinoBaseLevelWeightEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.DinoBaseLevelWeightEntries"); }
	float& OriginalCapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.OriginalCapsuleHalfHeight"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& LastSocketPositionsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.LastSocketPositions"); }
	TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>& MeleeSwingHurtListField() { return *GetNativePointerField<TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*>(this, "APrimalDinoCharacter.MeleeSwingHurtList"); }
	long double& EndAttackTargetTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.EndAttackTargetTime"); }
	
	
	
	
	
	
	long double& LastEggBoostedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastEggBoostedTime"); }
	float& WildPercentageChanceOfBabyField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildPercentageChanceOfBaby"); }
	
	float& BabyGestationProgressField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyGestationProgress"); }
	float& FlyerForceLimitPitchMinField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyerForceLimitPitchMin"); }
	float& FlyerForceLimitPitchMaxField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyerForceLimitPitchMax"); }
	float& LastBabyAgeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LastBabyAge"); }
	float& LastBabyGestationProgressField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LastBabyGestationProgress"); }
	
	float& BabyAgeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyAge"); }
	float& MaxPercentOfCapsulHeightAllowedForIKField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MaxPercentOfCapsulHeightAllowedForIK"); }
	float& SlopeBiasForMaxCapsulePercentField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SlopeBiasForMaxCapsulePercent"); }
	float& FlyingForceRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyingForceRotationRateModifier"); }
	TArray<FName, TSizedDefaultAllocator<32> >& HideBoneNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.HideBoneNames"); }
	
	
	UE::Math::TVector<double>& FlyerTakeOffAdditionalVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.FlyerTakeOffAdditionalVelocity"); }
	
	
	
	
	
	float& RootLocSwimOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RootLocSwimOffset"); }
	float& PlayAnimBelowHealthPercentField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PlayAnimBelowHealthPercent"); }
	float& LeavePlayAnimBelowHealthPercentField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LeavePlayAnimBelowHealthPercent"); }
	
	
	
	
	
	
	float& CurrentRootLocSwimOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentRootLocSwimOffset"); }
	float& AIRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AIRangeMultiplier"); }
	
	FieldArray<unsigned __int8, 6> AllowPaintingColorRegionsField() { return { this, "APrimalDinoCharacter.AllowPaintingColorRegions" }; }
	FieldArray<unsigned __int8, 6> ColorSetIndicesField() { return { this, "APrimalDinoCharacter.ColorSetIndices" }; }
	FieldArray<FName, 6> ColorSetNamesField() { return { this, "APrimalDinoCharacter.ColorSetNames" }; }
	
	TWeakObjectPtr<APrimalBuff>& ColorOverrideBuffField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBuff>*>(this, "APrimalDinoCharacter.ColorOverrideBuff"); }
	long double& ColorOverrideBuffDeactivateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.ColorOverrideBuffDeactivateTime"); }
	float& ColorOverrideBuffInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ColorOverrideBuffInterpSpeed"); }
	
	
	TWeakObjectPtr<AActor>& TargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoCharacter.Target"); }
	TWeakObjectPtr<AActor>& TamedFollowTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoCharacter.TamedFollowTarget"); }
	TWeakObjectPtr<AActor>& TamedLandTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoCharacter.TamedLandTarget"); }
	float& PercentChanceFemaleField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PercentChanceFemale"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DeathGiveItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.DeathGiveItemClasses"); }
	
	
	
	float& DeathGiveItemRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.DeathGiveItemRange"); }
	
	USoundBase*& OverrideAreaMusicField() { return *GetNativePointerField<USoundBase**>(this, "APrimalDinoCharacter.OverrideAreaMusic"); }
	UE::Math::TVector<double>& UnboardLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.UnboardLocationOffset"); }
	long double& LastTimeWhileHeadingToGoalField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastTimeWhileHeadingToGoal"); }
	float& ForceUpdateIKTimerField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ForceUpdateIKTimer"); }
	long double& LastColorizationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastColorizationTime"); }
	FRootMotionMovementParams& PreMatineeUpdateRootMotionParamsField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "APrimalDinoCharacter.PreMatineeUpdateRootMotionParams"); }
	float& RidingNetUpdateFequencyField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RidingNetUpdateFequency"); }
	float& RiderMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderMaxSpeedModifier"); }
	
	float& RiderMaxRunSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderMaxRunSpeedModifier"); }
	float& RiderRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderRotationRateModifier"); }
	float& SwimmingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SwimmingRotationRateModifier"); }
	float& chargingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.chargingRotationRateModifier"); }
	UAnimMontage*& EnterFlightAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.EnterFlightAnim"); }
	UAnimMontage*& ExitFlightAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.ExitFlightAnim"); }
	UAnimMontage*& SleepConsumeFoodAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.SleepConsumeFoodAnim"); }
	UAnimMontage*& WakingConsumeFoodAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.WakingConsumeFoodAnim"); }
	UAnimMontage*& FallAsleepAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.FallAsleepAnim"); }
	
	
	
	
	float& TamedWalkableFloorZField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedWalkableFloorZ"); }
	float& CurrentMovementAnimRateField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentMovementAnimRate"); }
	int& MinPlayerLevelForWakingTameField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MinPlayerLevelForWakingTame"); }
	float& ForceNextAttackIndexField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ForceNextAttackIndex"); }
	TSubclassOf<UPrimalInventoryComponent>& TamedInventoryComponentTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalInventoryComponent>*>(this, "APrimalDinoCharacter.TamedInventoryComponentTemplate"); }
	FWeightedObjectList& DeathInventoryTemplatesField() { return *GetNativePointerField<FWeightedObjectList*>(this, "APrimalDinoCharacter.DeathInventoryTemplates"); }
	float& DeathInventoryChanceToUseField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.DeathInventoryChanceToUse"); }
	float& WakingTameFeedIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WakingTameFeedInterval"); }
	long double& LastWakingTameFedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastWakingTameFedTime"); }
	
	float& RequiredTameAffinityField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RequiredTameAffinity"); }
	float& RequiredTameAffinityPerBaseLevelField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RequiredTameAffinityPerBaseLevel"); }
	
	float& CurrentTameAffinityField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentTameAffinity"); }
	float& TameIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TameIneffectivenessModifier"); }
	float& TameIneffectivenessByAffinityField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TameIneffectivenessByAffinity"); }
	int& LastFrameUseLowQualityAnimationTickField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastFrameUseLowQualityAnimationTick"); }
	FTimerHandle& ServerSleepingTickHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.ServerSleepingTickHandle"); }
	FTimerHandle& ServerTamedTickHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.ServerTamedTickHandle"); }
	TArray<FPrimalSaddleStructure, TSizedDefaultAllocator<32> >& SaddleStructuresField() { return *GetNativePointerField<TArray<FPrimalSaddleStructure, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.SaddleStructures"); }
	
	
	
	
	TSubclassOf<UPrimalDinoSettings>& DinoSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoSettings>*>(this, "APrimalDinoCharacter.DinoSettingsClass"); }
	float& TamingFoodConsumeIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamingFoodConsumeInterval"); }
	
	
	float& WakingTameFoodIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WakingTameFoodIncreaseMultiplier"); }
	int& TamingTeamIDField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.TamingTeamID"); }
	int& OwningPlayerIDField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.OwningPlayerID"); }
	FString& OwningPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.OwningPlayerName"); }
	long double& TamingLastFoodConsumptionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.TamingLastFoodConsumptionTime"); }
	long double& LastTameConsumedFoodTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastTameConsumedFoodTime"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalDinoCharacter.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalDinoCharacter.DinoID2"); }
	UE::Math::TRotator<double>& PreviousAimRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.PreviousAimRot"); }
	int& TamedAggressionLevelField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.TamedAggressionLevel"); }
	float& TamingIneffectivenessModifierIncreaseByDamagePercentField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamingIneffectivenessModifierIncreaseByDamagePercent"); }
	int& NPCSpawnerExtraLevelOffsetField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.NPCSpawnerExtraLevelOffset"); }
	float& NPCSpawnerLevelMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.NPCSpawnerLevelMultiplier"); }
	TWeakObjectPtr<APrimalStructureItemContainer_SupplyCrate>& LinkedSupplyCrateField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureItemContainer_SupplyCrate>*>(this, "APrimalDinoCharacter.LinkedSupplyCrate"); }
	
	
	
	float& AllowRidingMaxDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AllowRidingMaxDistance"); }
	float& UntamedPoopTimeCacheField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.UntamedPoopTimeCache"); }
	
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& EggItemsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.EggItemsToSpawn"); }
	TArray<float, TSizedDefaultAllocator<32> >& EggWeightsToSpawnField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.EggWeightsToSpawn"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& FertilizedEggItemsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.FertilizedEggItemsToSpawn"); }
	TArray<float, TSizedDefaultAllocator<32> >& FertilizedEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.FertilizedEggWeightsToSpawn"); }
	float& EggChanceToSpawnUnstasisField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.EggChanceToSpawnUnstasis"); }
	
	
	
	
	
	
	
	float& UntamedWalkingSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.UntamedWalkingSpeedModifier"); }
	float& TamedWalkingSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedWalkingSpeedModifier"); }
	float& UntamedRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.UntamedRunningSpeedModifier"); }
	float& TamedRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedRunningSpeedModifier"); }
	TSubclassOf<UPrimalColorSet>& RandomColorSetsMaleField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "APrimalDinoCharacter.RandomColorSetsMale"); }
	TSubclassOf<UPrimalColorSet>& RandomColorSetsFemaleField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "APrimalDinoCharacter.RandomColorSetsFemale"); }
	TSubclassOf<UPrimalColorSet>& SpawnerColorSetsField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "APrimalDinoCharacter.SpawnerColorSets"); }
	UAnimSequence*& RiderAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalDinoCharacter.RiderAnimOverride"); }
	
	
	
	UAnimSequence*& RiderMoveAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalDinoCharacter.RiderMoveAnimOverride"); }
	
	
	
	FName& TargetingTeamNameOverrideField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.TargetingTeamNameOverride"); }
	float& ExtraTamedSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraTamedSpeedMultiplier"); }
	float& ExtraUnTamedSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraUnTamedSpeedMultiplier"); }
	long double& LastEggSpawnChanceTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastEggSpawnChanceTime"); }
	FName& OriginalNPCVolumeNameField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.OriginalNPCVolumeName"); }
	
	
	
	
	
	
	long double& TamedAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.TamedAtTime"); }
	long double& LastInAllyRangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastInAllyRangeTime"); }
	TArray<ANPCZoneVolume*, TSizedDefaultAllocator<32> >& CurrentNPCVolumesField() { return *GetNativePointerField<TArray<ANPCZoneVolume*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.CurrentNPCVolumes"); }
	TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& LatchedOnStructuresField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.LatchedOnStructures"); }
	UPrimalDinoSettings*& MyDinoSettingsCDOField() { return *GetNativePointerField<UPrimalDinoSettings**>(this, "APrimalDinoCharacter.MyDinoSettingsCDO"); }
	int& OriginalTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.OriginalTargetingTeam"); }
	
	float& PreviousRootYawSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PreviousRootYawSpeed"); }
	long double& LastTimeFallingField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastTimeFalling"); }
	float& HUDScaleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HUDScaleMultiplier"); }
	float& HUDTextScaleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HUDTextScaleMultiplier"); }
	float& TamedCorpseLifespanField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedCorpseLifespan"); }
	
	
	
	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.DinoNameTag"); }
	AShooterPlayerController*& AttackMyTargetForPlayerControllerField() { return *GetNativePointerField<AShooterPlayerController**>(this, "APrimalDinoCharacter.AttackMyTargetForPlayerController"); }
	
	float& StepDamageRadialDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageInterval"); }
	float& StepDamageRadialDamageExtraRadiusField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageExtraRadius"); }
	float& StepDamageRadialDamageAmountGeneralField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageAmountGeneral"); }
	float& StepDamageRadialDamageAmountHarvestableField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.StepDamageRadialDamageAmountHarvestable"); }
	long double& LastRadialStepDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastRadialStepDamageTime"); }
	TSubclassOf<UDamageType>& StepHarvestableDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalDinoCharacter.StepHarvestableDamageType"); }
	
	
	
	TArray<FName, TSizedDefaultAllocator<32> >& StepDamageFootDamageSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.StepDamageFootDamageSockets"); }
	
	UE::Math::TVector<double>& LastCheckedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.LastCheckedLocation"); }
	long double& LastValidNotStuckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastValidNotStuckTime"); }
	UAnimMontage*& StartledAnimationRightDefaultField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.StartledAnimationRightDefault"); }
	
	
	
	
	
	
	
	
	long double& LastFootStepDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastFootStepDamageTime"); }
	long double& LastStartledTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastStartledTime"); }
	float& AccumulatedStatusUpdateTimeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AccumulatedStatusUpdateTime"); }
	float& CorpseLifespanNonRelevantField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CorpseLifespanNonRelevant"); }
	ANPCZoneManager*& DirectLinkNPCZoneManagerField() { return *GetNativePointerField<ANPCZoneManager**>(this, "APrimalDinoCharacter.DirectLinkNPCZoneManager"); }
	FTimerHandle& ForceClearRiderHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.ForceClearRiderHandle"); }
	
	
	float& FollowingRunDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FollowingRunDistance"); }
	
	
	float& NPCLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.NPCLerpToMaxRandomBaseLevel"); }
	UE::Math::TVector<double>& FloatingHUDTextWorldOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.FloatingHUDTextWorldOffset"); }
	long double& LastAttackedTargetTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastAttackedTargetTime"); }
	long double& LastForcedLandingCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastForcedLandingCheckTime"); }
	long double& LastAllyTargetLookTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastAllyTargetLookTime"); }
	long double& LastAttackedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastAttackedTime"); }
	long double& LastPlayerDinoOverlapRelevantTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastPlayerDinoOverlapRelevantTime"); }
	UE::Math::TRotator<double>& DinoAimRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.DinoAimRotationOffset"); }
	long double& LastDinoAllyLookInterpTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastDinoAllyLookInterpTime"); }
	UE::Math::TVector<double>& LastRiderOverlappedPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.LastRiderOverlappedPosition"); }
	TWeakObjectPtr<APrimalCharacter>& AutoDragByPawnField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalDinoCharacter.AutoDragByPawn"); }
	long double& NextRidingFlyerUndergroundCheckField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.NextRidingFlyerUndergroundCheck"); }
	long double& LastSetRiderTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastSetRiderTime"); }
	
	float& RepairAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RepairAmountRemaining"); }
	
	
	FTimerHandle& RepairCheckTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.RepairCheckTimerHandle"); }
	UE::Math::TVector<double>& RiderCheckTraceOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.RiderCheckTraceOffset"); }
	UE::Math::TVector<double>& RiderEjectionImpulseField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.RiderEjectionImpulse"); }
	float& WakingTameAffinityDecreaseFoodPercentageField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WakingTameAffinityDecreaseFoodPercentage"); }
	
	
	
	
	float& WildAmbientHarvestingTimerField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildAmbientHarvestingTimer"); }
	UAnimMontage*& WildAmbientHarvestingAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.WildAmbientHarvestingAnimation"); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& WildAmbientHarvestingAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.WildAmbientHarvestingAnimations"); }
	TArray<TSubclassOf<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >& WildAmbientHarvestingComponentClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.WildAmbientHarvestingComponentClasses"); }
	
	int& FlyerNumUnderGroundFailField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.FlyerNumUnderGroundFail"); }
	int& AbsoluteBaseLevelField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.AbsoluteBaseLevel"); }
	TArray<FStatValuePair, TSizedDefaultAllocator<32> >& OverrideBaseStatLevelsOnSpawnField() { return *GetNativePointerField<TArray<FStatValuePair, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.OverrideBaseStatLevelsOnSpawn"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >& OverrideStatPriorityOnSpawnField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.OverrideStatPriorityOnSpawn"); }
	
	FDinoSaddleStruct& SaddleStructField() { return *GetNativePointerField<FDinoSaddleStruct*>(this, "APrimalDinoCharacter.SaddleStruct"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& DraggedRagdollsField();
	UE::Math::TVector<double>& LastOverrodeRandomWanderLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.LastOverrodeRandomWanderLocation"); }
	//TSubclassOf<UMatineeCameraShake>& StartChargingShakeField() { return *GetNativePointerField<TSubclassOf<UMatineeCameraShake>*>(this, "APrimalDinoCharacter.StartChargingShake"); }
	//TSubclassOf<UMatineeCameraShake>& LightEndChargingShakeField() { return *GetNativePointerField<TSubclassOf<UMatineeCameraShake>*>(this, "APrimalDinoCharacter.LightEndChargingShake"); }
	//TSubclassOf<UMatineeCameraShake>& HardEndChargingShakeField() { return *GetNativePointerField<TSubclassOf<UMatineeCameraShake>*>(this, "APrimalDinoCharacter.HardEndChargingShake"); }
	
	
	
	
	float& PlayerMountedLaunchFowardSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PlayerMountedLaunchFowardSpeed"); }
	float& PlayerMountedLaunchUpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PlayerMountedLaunchUpSpeed"); }
	float& AttackOnLaunchMaximumTargetDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AttackOnLaunchMaximumTargetDistance"); }
	float& KeepFlightRemainingTimeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.KeepFlightRemainingTime"); }
	
	
	UAnimMontage*& EndChargingAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.EndChargingAnimation"); }
	float& FlyingRunSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FlyingRunSpeedModifier"); }
	
	FName& RiderSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.RiderSocketName"); }
	
	
	
	float& BabyScaleField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyScale"); }
	float& BabySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabySpeedMultiplier"); }
	float& BabyPitchMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyPitchMultiplier"); }
	float& BabyVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyVolumeMultiplier"); }
	TWeakObjectPtr<AActor>& WanderAroundActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoCharacter.WanderAroundActor"); }
	
	long double& ChargingStartBlockedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.ChargingStartBlockedTime"); }
	long double& LastChargeEndTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastChargeEndTime"); }
	TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& SaddledStructuresField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.SaddledStructures"); }
	TSoftClassPtr<APrimalBuff>& BuffGivenToBasedCharactersField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "APrimalDinoCharacter.BuffGivenToBasedCharacters"); }
	long double& LastTamedFlyerNearbyAllyCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastTamedFlyerNearbyAllyCheckTime"); }
	long double& LastUpdatedBabyAgeAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastUpdatedBabyAgeAtTime"); }
	long double& LastUpdatedGestationAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastUpdatedGestationAtTime"); }
	long double& LastUpdatedMatingAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastUpdatedMatingAtTime"); }
	float& BabyAgeSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyAgeSpeed"); }
	float& ExtraBabyAgeSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraBabyAgeSpeedMultiplier"); }
	
	
	long double& NextAllowedMatingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.NextAllowedMatingTime"); }
	float& MatingProgressField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MatingProgress"); }
	long double& LastMatingNotificationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastMatingNotificationTime"); }
	APrimalDinoCharacter*& MatingWithDinoField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "APrimalDinoCharacter.MatingWithDino"); }
	
	FieldArray<unsigned __int8, 12> GestationEggNumberOfLevelUpPointsAppliedField() { return { this, "APrimalDinoCharacter.GestationEggNumberOfLevelUpPointsApplied" }; }
	FieldArray<unsigned __int8, 12> GestationEggNumberOfMutationsAppliedField() { return { this, "APrimalDinoCharacter.GestationEggNumberOfMutationsApplied" }; }
	float& GestationEggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.GestationEggTamedIneffectivenessModifier"); }
	FieldArray<unsigned __int8, 6> GestationEggColorSetIndicesField() { return { this, "APrimalDinoCharacter.GestationEggColorSetIndices" }; }
	
	
	
	UE::Math::TVector<double>& InterpolatedVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.InterpolatedVelocity"); }
	UE::Math::TVector<double>& OldInterpolatedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.OldInterpolatedLocation"); }
	
	
	
	float& GangOverlapRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.GangOverlapRange"); }
	
	
	
	int& GangCountField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.GangCount"); }
	long double& LastGangCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastGangCheckTime"); }
	UE::Math::TVector<double>& LastGangCheckPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.LastGangCheckPosition"); }
	int& PreviousTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.PreviousTargetingTeam"); }
	int& LastRiderExitFrameCounterField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastRiderExitFrameCounter"); }
	float& WildRandomScaleField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildRandomScale"); }
	
	
	
	
	FName& RiderFPVCameraUseSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.RiderFPVCameraUseSocketName"); }
	
	FName& PassengerFPVCameraRootSocketField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.PassengerFPVCameraRootSocket"); }
	
	float& ExtraRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraRunningSpeedModifier"); }
	float& ScaleExtraRunningSpeedModifierMinField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ScaleExtraRunningSpeedModifierMin"); }
	float& ScaleExtraRunningSpeedModifierMaxField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ScaleExtraRunningSpeedModifierMax"); }
	float& ScaleExtraRunningSpeedModifierSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ScaleExtraRunningSpeedModifierSpeed"); }
	float& LastHigherScaleExtraRunningSpeedValueField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LastHigherScaleExtraRunningSpeedValue"); }
	long double& LastHigherScaleExtraRunningSpeedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastHigherScaleExtraRunningSpeedTime"); }
	
	
	
	
	
	int& SaveDestroyWildDinosUnderVersionField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.SaveDestroyWildDinosUnderVersion"); }
	
	
	TWeakObjectPtr<AActor>& RiderAttackTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalDinoCharacter.RiderAttackTarget"); }
	UE::Math::TVector<double>& RiderAttackLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.RiderAttackLocation"); }
	unsigned char& TribeGroupPetOrderingRankField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.TribeGroupPetOrderingRank"); }
	unsigned char& TribeGroupPetRidingRankField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.TribeGroupPetRidingRank"); }
	unsigned char& FollowStoppingDistanceField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.FollowStoppingDistance"); }
	FString& ImprinterNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.ImprinterName"); }
	FString& ImprinterPlayerUniqueNetIdField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.ImprinterPlayerUniqueNetId"); }
	
	
	float& BabyCuddleGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyCuddleGracePeriod"); }
	float& BabyCuddleLoseImpringQualityPerSecondField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabyCuddleLoseImpringQualityPerSecond"); }
	
	UE::Math::TVector<double>& BabyCuddleWalkStartingLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BabyCuddleWalkStartingLocation"); }
	long double& BabyNextCuddleTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.BabyNextCuddleTime"); }
	TSubclassOf<UPrimalItem>& BabyCuddleFoodField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalDinoCharacter.BabyCuddleFood"); }
	UAnimMontage*& BabyCuddledAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.BabyCuddledAnimation"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& MyBabyCuddleFoodTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.MyBabyCuddleFoodTypes"); }
	
	
	
	
	float& TimeBetweenTamedWakingEatAnimationsField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TimeBetweenTamedWakingEatAnimations"); }
	long double& LastEatAnimationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastEatAnimationTime"); }
	
	float& maxRangeForWeaponTriggeredTooltipField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.maxRangeForWeaponTriggeredTooltip"); }
	
	
	float& WanderRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WanderRadiusMultiplier"); }
	float& HealthBarMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HealthBarMaxDrawDistance"); }
	
	float& WildRunningRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildRunningRotationRateModifier"); }
	float& TamedRunningRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamedRunningRotationRateModifier"); }
	
	
	TWeakObjectPtr<ANPCZoneVolume>& HardLimitWildDinoToVolumeField() { return *GetNativePointerField<TWeakObjectPtr<ANPCZoneVolume>*>(this, "APrimalDinoCharacter.HardLimitWildDinoToVolume"); }
	TWeakObjectPtr<AVolume>& WildLimitTargetVolumeField() { return *GetNativePointerField<TWeakObjectPtr<AVolume>*>(this, "APrimalDinoCharacter.WildLimitTargetVolume"); }
	
	float& NoRiderFlyingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.NoRiderFlyingRotationRateModifier"); }
	float& AICombatRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AICombatRotationRateModifier"); }
	float& WalkingRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WalkingRotationRateModifier"); }
	
	float& SetAttackTargetTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SetAttackTargetTraceDistance"); }
	
	long double& RepeatPrimaryAttackLastSendTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.RepeatPrimaryAttackLastSendTime"); }
	long double& NextTamedDinoCharacterStatusTickTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.NextTamedDinoCharacterStatusTickTime"); }
	long double& LastTamedDinoCharacterStatusTickTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastTamedDinoCharacterStatusTickTime"); }
	
	float& HealthBarOffsetYField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.HealthBarOffsetY"); }
	AMissionType*& OwnerMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalDinoCharacter.OwnerMission"); }
	float& LimitRiderYawOnLatchedRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LimitRiderYawOnLatchedRange"); }
	float& LatchingDistanceLimitField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingDistanceLimit"); }
	float& LatchingInitialYawField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingInitialYaw"); }
	float& LatchingInitialPitchField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingInitialPitch"); }
	float& LatchingInterpolatedPitchField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingInterpolatedPitch"); }
	float& LatchedFirstPersonViewAngleField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchedFirstPersonViewAngle"); }
	float& LatchingCameraInterpolationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LatchingCameraInterpolationSpeed"); }
	float& TargetLatchingInitialYawField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TargetLatchingInitialYaw"); }
	float& CurrentStrafeMagnitudeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentStrafeMagnitude"); }
	
	float& AIAggroNotifyNeighborsClassesRangeScaleField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AIAggroNotifyNeighborsClassesRangeScale"); }
	int& LastFrameMoveRightField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastFrameMoveRight"); }
	int& LastFrameMoveLeftField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastFrameMoveLeft"); }
	UE::Math::TRotator<double>& LastRiderMountedWeaponRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.LastRiderMountedWeaponRotation"); }
	long double& LastRiderMountedWeaponRotationSentTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastRiderMountedWeaponRotationSentTime"); }
	
	
	FRotator_NetQuantizeSmartPitch& LastMovementDesiredRotation_MountedWeaponryField() { return *GetNativePointerField<FRotator_NetQuantizeSmartPitch*>(this, "APrimalDinoCharacter.LastMovementDesiredRotation_MountedWeaponry"); }
	
	float& SwimmingRunSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SwimmingRunSpeedModifier"); }
	
	long double& DinoDownloadedAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.DinoDownloadedAtTime"); }
	FString& UploadedFromServerNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.UploadedFromServerName"); }
	FString& LatestUploadedFromServerNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.LatestUploadedFromServerName"); }
	FString& PreviousUploadedFromServerNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.PreviousUploadedFromServerName"); }
	FString& TamedOnServerNameField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamedOnServerName"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& DinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.DinoAncestors"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& DinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.DinoAncestorsMale"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& NextBabyDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.NextBabyDinoAncestors"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& NextBabyDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.NextBabyDinoAncestorsMale"); }
	TArray<FName, TSizedDefaultAllocator<32> >& NextBabyGeneTraitsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.NextBabyGeneTraits"); }
	int& MaxAllowedRandomMutationsField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MaxAllowedRandomMutations"); }
	
	
	
	int& RandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.RandomMutationsMale"); }
	int& RandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.RandomMutationsFemale"); }
	int& GestationEggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.GestationEggRandomMutationsFemale"); }
	int& GestationEggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.GestationEggRandomMutationsMale"); }
	
	
	
	long double& LastAutoHealingItemUseField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastAutoHealingItemUse"); }
	long double& LastStartedCarryingCharacterTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastStartedCarryingCharacterTime"); }
	
	TArray<FDinoExtraDefaultItemList, TSizedDefaultAllocator<32> >& DinoExtraDefaultInventoryItemsField() { return *GetNativePointerField<TArray<FDinoExtraDefaultItemList, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.DinoExtraDefaultInventoryItems"); }
	
	
	
	int& LastTickDelayFrameCountField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastTickDelayFrameCount"); }
	long double& NextTickDelayAllowTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.NextTickDelayAllowTime"); }
	float& TickStatusTimeAccumulationField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TickStatusTimeAccumulation"); }
	long double& LastServerTamedTickField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastServerTamedTick"); }
	int& LastTempDampenMovementInputAccelerationFrameField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastTempDampenMovementInputAccelerationFrame"); }
	UAnimMontage*& DinoLevelUpAnimationOverrideField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.DinoLevelUpAnimationOverride"); }
	
	long double& LastVacuumSpaceCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastVacuumSpaceCheckTime"); }
	long double& LastGrappledTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastGrappledTime"); }
	float& CloneBaseElementCostField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CloneBaseElementCost"); }
	float& CloneElementCostPerLevelField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CloneElementCostPerLevel"); }
	int& LastValidTameVersionField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LastValidTameVersion"); }
	int& SavedLastValidTameVersionField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.SavedLastValidTameVersion"); }
	FName& NonDedicatedFreezeDinoPhysicsIfLayerUnloadedField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.NonDedicatedFreezeDinoPhysicsIfLayerUnloaded"); }
	
	
	
	
	
	
	
	float& SwimSoundTimeCacheField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.SwimSoundTimeCache"); }
	TSubclassOf<AController>& TamedAIControllerOverrideField() { return *GetNativePointerField<TSubclassOf<AController>*>(this, "APrimalDinoCharacter.TamedAIControllerOverride"); }
	int& PersonalTamedDinoCostField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.PersonalTamedDinoCost"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.UploadEarliestValidTime"); }
	
	
	float& ExtraDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ExtraDamageMultiplier"); }
	
	
	
	
	
	
	
	
	
	
	float& NursingTroughFoodEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.NursingTroughFoodEffectivenessMultiplier"); }
	
	int& CustomReplicatedDataField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.CustomReplicatedData"); }
	FNotifySetRider& OnNotifySetRiderField() { return *GetNativePointerField<FNotifySetRider*>(this, "APrimalDinoCharacter.OnNotifySetRider"); }
	FNotifyClearRider& OnNotifyClearRiderField() { return *GetNativePointerField<FNotifyClearRider*>(this, "APrimalDinoCharacter.OnNotifyClearRider"); }
	FOnSetMountedDino& OnSetMountedDinoField() { return *GetNativePointerField<FOnSetMountedDino*>(this, "APrimalDinoCharacter.OnSetMountedDino"); }
	FOnClearMountedDino& OnClearMountedDinoField() { return *GetNativePointerField<FOnClearMountedDino*>(this, "APrimalDinoCharacter.OnClearMountedDino"); }
	FNotifyAddPassenger& OnNotifyAddPassengerField() { return *GetNativePointerField<FNotifyAddPassenger*>(this, "APrimalDinoCharacter.OnNotifyAddPassenger"); }
	FNotifyClearPassenger& OnNotifyClearPassengerField() { return *GetNativePointerField<FNotifyClearPassenger*>(this, "APrimalDinoCharacter.OnNotifyClearPassenger"); }
	long double& NextAllowedBedUseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.NextAllowedBedUseTime"); }
	
	float& CarriedAsBabyPassengerSizeLimitOverrideField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CarriedAsBabyPassengerSizeLimitOverride"); }
	
	
	FLinearColor& PaintingAllowedUVRangesField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalDinoCharacter.PaintingAllowedUVRanges"); }
	FTimerHandle& InternalRemoveDinoFromTamingArrayHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.InternalRemoveDinoFromTamingArrayHandle"); }
	FNotifyFlyerLanded& OnFlyerStartLandingField() { return *GetNativePointerField<FNotifyFlyerLanded*>(this, "APrimalDinoCharacter.OnFlyerStartLanding"); }
	FNotifyFlyerLanded& OnFlyerLandedField() { return *GetNativePointerField<FNotifyFlyerLanded*>(this, "APrimalDinoCharacter.OnFlyerLanded"); }
	FNotifyFlyerLanded& OnFlyerLandingInterruptedField() { return *GetNativePointerField<FNotifyFlyerLanded*>(this, "APrimalDinoCharacter.OnFlyerLandingInterrupted"); }
	// Unavailable in UE 5.8.3: supported current accessor already present
	// bool& bHasPlayerControllerField();
	UStaticMeshComponent*& CopyDinoSettingsRangeMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalDinoCharacter.CopyDinoSettingsRangeMesh"); }
	float& MPLandingAfterLeavingTimerField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MPLandingAfterLeavingTimer"); }
	FTimerHandle& DeferredDestroyHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.DeferredDestroyHandle"); }
	long double& TimeOfNextMateBoostUpdateField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.TimeOfNextMateBoostUpdate"); }
	UPrimalInventoryComponent*& SecondaryInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalDinoCharacter.SecondaryInventoryComponent"); }
	// Unavailable in UE 5.8.3: supported current accessor already present
	// bool& bDisabledFromAscensionField();
	
	AActor*& WildFollowingParentRefField() { return *GetNativePointerField<AActor**>(this, "APrimalDinoCharacter.WildFollowingParentRef"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& WildFollowerRefsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.WildFollowerRefs"); }
	TArray<FWildFollowerSpawnEntry, TSizedDefaultAllocator<32> >& OverwrittenWildFollowingDinoInfosField() { return *GetNativePointerField<TArray<FWildFollowerSpawnEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.OverwrittenWildFollowingDinoInfos"); }
	float& ForcedWildBabyAgeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ForcedWildBabyAge"); }
	FTimerHandle& ServerCheckIfWildDinoChildCanBeImprintedHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.ServerCheckIfWildDinoChildCanBeImprintedHandle"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UE::Math::TVector<double>& DinoLimbWallAvoidanceLastLocationField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UE::Math::TRotator<double>& DinoLimbWallAvoidanceLastRotationField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UE::Math::TRotator<double>& DinoLimbWallAvoidanceLastAimRotationField();
	UPrimalNavigationInvokerComponent*& NavigationInvokerComponentField() { return *GetNativePointerField<UPrimalNavigationInvokerComponent**>(this, "APrimalDinoCharacter.NavigationInvokerComponent"); }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	float& PathfollowingMaxSpeedModiferField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.PathfollowingMaxSpeedModifer"); }
	UE::Math::TVector<double>& SpawnedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.SpawnedLocation"); }
	long double& LastWantsToEnableNavRelevancyField() { return *GetNativePointerField<long double*>(this, "APrimalDinoCharacter.LastWantsToEnableNavRelevancy"); }
	
	unsigned __int8& TamedAITargetingRangeField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalDinoCharacter.TamedAITargetingRange"); }
	TArray<FName, TSizedDefaultAllocator<32> >& GeneTraitsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GeneTraits"); }
	TEnumAsByte<enum EBabyCuddleType::Type>& BabyCuddleTypeField() { return *GetNativePointerField<TEnumAsByte<enum EBabyCuddleType::Type>*>(this, "APrimalDinoCharacter.BabyCuddleType"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseMountCharacterProneOffset() { return { this, "APrimalDinoCharacter.bUseMountCharacterProneOffset" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoResetAffinityOnUnsleep() { return { this, "APrimalDinoCharacter.bPreventDinoResetAffinityOnUnsleep" }; }
	BitFieldValue<bool, unsigned __int32> bForceReachedDestination() { return { this, "APrimalDinoCharacter.bForceReachedDestination" }; }
	BitFieldValue<bool, unsigned __int32> bHadLinkedSupplyCrate() { return { this, "APrimalDinoCharacter.bHadLinkedSupplyCrate" }; }
	BitFieldValue<bool, unsigned __int32> bRemovingStructuresOnDeath() { return { this, "APrimalDinoCharacter.bRemovingStructuresOnDeath" }; }
	BitFieldValue<bool, unsigned __int32> bResetUseAccelerationForRequestedMove() { return { this, "APrimalDinoCharacter.bResetUseAccelerationForRequestedMove" }; }
	BitFieldValue<bool, unsigned __int32> bHiddenForLocalPassenger() { return { this, "APrimalDinoCharacter.bHiddenForLocalPassenger" }; }
	BitFieldValue<bool, unsigned __int32> bRunCheckCarriedTrace() { return { this, "APrimalDinoCharacter.bRunCheckCarriedTrace" }; }
	BitFieldValue<bool, unsigned __int32> CanElevate() { return { this, "APrimalDinoCharacter.CanElevate" }; }
	BitFieldValue<bool, unsigned __int32> bIsElevating() { return { this, "APrimalDinoCharacter.bIsElevating" }; }
	BitFieldValue<bool, unsigned __int32> bIsBraking() { return { this, "APrimalDinoCharacter.bIsBraking" }; }
	BitFieldValue<bool, unsigned __int32> MovingForward() { return { this, "APrimalDinoCharacter.MovingForward" }; }
	BitFieldValue<bool, unsigned __int32> bReceivedDinoAncestors() { return { this, "APrimalDinoCharacter.bReceivedDinoAncestors" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater() { return { this, "APrimalDinoCharacter.bForcePreventExitingWater" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCarryCharacterWithoutRider() { return { this, "APrimalDinoCharacter.bAllowCarryCharacterWithoutRider" }; }
	BitFieldValue<bool, unsigned __int32> bDebugMeleeAttacks() { return { this, "APrimalDinoCharacter.bDebugMeleeAttacks" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseAltAimSocketsForTurrets() { return { this, "APrimalDinoCharacter.bForceUseAltAimSocketsForTurrets" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDinoFaceRotation() { return { this, "APrimalDinoCharacter.bUseBPDinoFaceRotation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCheckCanSpawnFromLocation() { return { this, "APrimalDinoCharacter.bUseBPCheckCanSpawnFromLocation" }; }
	BitFieldValue<bool, unsigned __int32> bIsLanding() { return { this, "APrimalDinoCharacter.bIsLanding" }; }
	BitFieldValue<bool, unsigned __int32> bCancelInterpolation() { return { this, "APrimalDinoCharacter.bCancelInterpolation" }; }
	BitFieldValue<bool, unsigned __int32> bIsCharging() { return { this, "APrimalDinoCharacter.bIsCharging" }; }
	BitFieldValue<bool, unsigned __int32> bReplicatePitchWhileSwimming() { return { this, "APrimalDinoCharacter.bReplicatePitchWhileSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bIsFlying() { return { this, "APrimalDinoCharacter.bIsFlying" }; }
	BitFieldValue<bool, unsigned __int32> bIsWakingTame() { return { this, "APrimalDinoCharacter.bIsWakingTame" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRiding() { return { this, "APrimalDinoCharacter.bAllowRiding" }; }
	BitFieldValue<bool, unsigned __int32> bHasPlayerController() { return { this, "APrimalDinoCharacter.bHasPlayerController" }; }
	BitFieldValue<bool, unsigned __int32> bForceAutoTame() { return { this, "APrimalDinoCharacter.bForceAutoTame" }; }
	BitFieldValue<bool, unsigned __int32> bRiderJumpTogglesFlight() { return { this, "APrimalDinoCharacter.bRiderJumpTogglesFlight" }; }
	BitFieldValue<bool, unsigned __int32> bHasRider() { return { this, "APrimalDinoCharacter.bHasRider" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCarryFlyerDinos() { return { this, "APrimalDinoCharacter.bAllowCarryFlyerDinos" }; }
	BitFieldValue<bool, unsigned __int32> bForcedLanding() { return { this, "APrimalDinoCharacter.bForcedLanding" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerForceNoPitch() { return { this, "APrimalDinoCharacter.bFlyerForceNoPitch" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerForceLimitPitch() { return { this, "APrimalDinoCharacter.bFlyerForceLimitPitch" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStasis() { return { this, "APrimalDinoCharacter.bPreventStasis" }; }
	BitFieldValue<bool, unsigned __int32> bDinoLoadedFromSaveGame() { return { this, "APrimalDinoCharacter.bDinoLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bIsAWildFollowerKnownServerside() { return { this, "APrimalDinoCharacter.bIsAWildFollowerKnownServerside" }; }
	BitFieldValue<bool, unsigned __int32> AllowWildBabyTaming() { return { this, "APrimalDinoCharacter.AllowWildBabyTaming" }; }
	BitFieldValue<bool, unsigned __int32> bIsParentWildDino() { return { this, "APrimalDinoCharacter.bIsParentWildDino" }; }
	BitFieldValue<bool, unsigned __int32> bDontForceUpdateRateOptimizations() { return { this, "APrimalDinoCharacter.bDontForceUpdateRateOptimizations" }; }
	BitFieldValue<bool, unsigned __int32> bDisabledFromAscension() { return { this, "APrimalDinoCharacter.bDisabledFromAscension" }; }
	BitFieldValue<bool, unsigned __int32> bCheatForceTameRide() { return { this, "APrimalDinoCharacter.bCheatForceTameRide" }; }
	BitFieldValue<bool, unsigned __int32> bIsFemale() { return { this, "APrimalDinoCharacter.bIsFemale" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeTamed() { return { this, "APrimalDinoCharacter.bCanBeTamed" }; }
	BitFieldValue<bool, unsigned __int32> bTargetingIgnoredByWildDinos() { return { this, "APrimalDinoCharacter.bTargetingIgnoredByWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bTargetingIgnoreWildDinos() { return { this, "APrimalDinoCharacter.bTargetingIgnoreWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bCanMountOnHumans() { return { this, "APrimalDinoCharacter.bCanMountOnHumans" }; }
	BitFieldValue<bool, unsigned __int32> bUseColorization() { return { this, "APrimalDinoCharacter.bUseColorization" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeSwingDamageBlockedByStrutures() { return { this, "APrimalDinoCharacter.bMeleeSwingDamageBlockedByStrutures" }; }
	BitFieldValue<bool, unsigned __int32> bApplyDamageEffectToChildComponents() { return { this, "APrimalDinoCharacter.bApplyDamageEffectToChildComponents" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTargetingCorpses() { return { this, "APrimalDinoCharacter.bAllowTargetingCorpses" }; }
	BitFieldValue<bool, unsigned __int32> bRiderDontRequireSaddle() { return { this, "APrimalDinoCharacter.bRiderDontRequireSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeOrdered() { return { this, "APrimalDinoCharacter.bCanBeOrdered" }; }
	BitFieldValue<bool, unsigned __int32> bIsCarnivore() { return { this, "APrimalDinoCharacter.bIsCarnivore" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRidingInWater() { return { this, "APrimalDinoCharacter.bAllowRidingInWater" }; }
	BitFieldValue<bool, unsigned __int32> bUsesGender() { return { this, "APrimalDinoCharacter.bUsesGender" }; }
	BitFieldValue<bool, unsigned __int32> hasAlreadySetGender() { return { this, "APrimalDinoCharacter.hasAlreadySetGender" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnSetNotifies() { return { this, "APrimalDinoCharacter.bUseBP_OnBasedPawnSetNotifies" }; }
	BitFieldValue<bool, unsigned __int32> bTargetEverything() { return { this, "APrimalDinoCharacter.bTargetEverything" }; }
	BitFieldValue<bool, unsigned __int32> bEnableTamedWandering() { return { this, "APrimalDinoCharacter.bEnableTamedWandering" }; }
	BitFieldValue<bool, unsigned __int32> bEnableTamedMating() { return { this, "APrimalDinoCharacter.bEnableTamedMating" }; }
	BitFieldValue<bool, unsigned __int32> bCollectVictimItems() { return { this, "APrimalDinoCharacter.bCollectVictimItems" }; }
	BitFieldValue<bool, unsigned __int32> bServerInitializedDino() { return { this, "APrimalDinoCharacter.bServerInitializedDino" }; }
	BitFieldValue<bool, unsigned __int32> bNPCSpawnerOverrideLevel() { return { this, "APrimalDinoCharacter.bNPCSpawnerOverrideLevel" }; }
	BitFieldValue<bool, unsigned __int32> bHasMateBoost() { return { this, "APrimalDinoCharacter.bHasMateBoost" }; }
	BitFieldValue<bool, unsigned __int32> NPCSpawnerAddLevelOffsetBeforeMultiplier() { return { this, "APrimalDinoCharacter.NPCSpawnerAddLevelOffsetBeforeMultiplier" }; }
	BitFieldValue<bool, unsigned __int32> bTamingHasFood() { return { this, "APrimalDinoCharacter.bTamingHasFood" }; }
	BitFieldValue<bool, unsigned __int32> bDontWander() { return { this, "APrimalDinoCharacter.bDontWander" }; }
	BitFieldValue<bool, unsigned __int32> bAnimIsMoving() { return { this, "APrimalDinoCharacter.bAnimIsMoving" }; }
	BitFieldValue<bool, unsigned __int32> bDoStepDamage() { return { this, "APrimalDinoCharacter.bDoStepDamage" }; }
	BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBasing() { return { this, "APrimalDinoCharacter.bForceAlwaysAllowBasing" }; }
	BitFieldValue<bool, unsigned __int32> bUseRootLocSwimOffset() { return { this, "APrimalDinoCharacter.bUseRootLocSwimOffset" }; }
	BitFieldValue<bool, unsigned __int32> bUseLowQualityAnimationTick() { return { this, "APrimalDinoCharacter.bUseLowQualityAnimationTick" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAllRiderWeapons() { return { this, "APrimalDinoCharacter.bPreventAllRiderWeapons" }; }
	BitFieldValue<bool, unsigned __int32> bSupportWakingTame() { return { this, "APrimalDinoCharacter.bSupportWakingTame" }; }
	BitFieldValue<bool, unsigned __int32> bDebugBaby() { return { this, "APrimalDinoCharacter.bDebugBaby" }; }
	BitFieldValue<bool, unsigned __int32> bRefreshedColorization() { return { this, "APrimalDinoCharacter.bRefreshedColorization" }; }
	BitFieldValue<bool, unsigned __int32> bPoopIsEgg() { return { this, "APrimalDinoCharacter.bPoopIsEgg" }; }
	BitFieldValue<bool, unsigned __int32> bPoopIsDud() { return { this, "APrimalDinoCharacter.bPoopIsDud" }; }
	BitFieldValue<bool, unsigned __int32> bWasChargingBlocked() { return { this, "APrimalDinoCharacter.bWasChargingBlocked" }; }
	BitFieldValue<bool, unsigned __int32> bWasRidingFalling() { return { this, "APrimalDinoCharacter.bWasRidingFalling" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedForReplicatedBasing() { return { this, "APrimalDinoCharacter.bInitializedForReplicatedBasing" }; }
	BitFieldValue<bool, unsigned __int32> bClientWasTamed() { return { this, "APrimalDinoCharacter.bClientWasTamed" }; }
	BitFieldValue<bool, unsigned __int32> bApplyBoneModifiersIgnoreRefreshBoneTransforms() { return { this, "APrimalDinoCharacter.bApplyBoneModifiersIgnoreRefreshBoneTransforms" }; }
	BitFieldValue<bool, unsigned __int32> bSetBabyWeaponTraceBlocking() { return { this, "APrimalDinoCharacter.bSetBabyWeaponTraceBlocking" }; }
	BitFieldValue<bool, unsigned __int32> bCanHaveBaby() { return { this, "APrimalDinoCharacter.bCanHaveBaby" }; }
	BitFieldValue<bool, unsigned __int32> bReachedMaxStructures() { return { this, "APrimalDinoCharacter.bReachedMaxStructures" }; }
	BitFieldValue<bool, unsigned __int32> bBonesHidden() { return { this, "APrimalDinoCharacter.bBonesHidden" }; }
	BitFieldValue<bool, unsigned __int32> bDelayedAttachement() { return { this, "APrimalDinoCharacter.bDelayedAttachement" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "APrimalDinoCharacter.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bIsBaby() { return { this, "APrimalDinoCharacter.bIsBaby" }; }
	BitFieldValue<bool, unsigned __int32> bWasBaby() { return { this, "APrimalDinoCharacter.bWasBaby" }; }
	BitFieldValue<bool, unsigned __int32> bCanUnclaimTame() { return { this, "APrimalDinoCharacter.bCanUnclaimTame" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWildDinoEquipment() { return { this, "APrimalDinoCharacter.bAllowWildDinoEquipment" }; }
	BitFieldValue<bool, unsigned __int32> bUseGang() { return { this, "APrimalDinoCharacter.bUseGang" }; }
	BitFieldValue<bool, unsigned __int32> bEggBoosted() { return { this, "APrimalDinoCharacter.bEggBoosted" }; }
	BitFieldValue<bool, unsigned __int32> bSupportsPassengerSeats() { return { this, "APrimalDinoCharacter.bSupportsPassengerSeats" }; }
	BitFieldValue<bool, unsigned __int32> bUseWildRandomScale() { return { this, "APrimalDinoCharacter.bUseWildRandomScale" }; }
	BitFieldValue<bool, unsigned __int32> bIsHeldJumpSlowFalling() { return { this, "APrimalDinoCharacter.bIsHeldJumpSlowFalling" }; }
	BitFieldValue<bool, unsigned __int32> bPlayingSlowFallingAnim() { return { this, "APrimalDinoCharacter.bPlayingSlowFallingAnim" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWakingTameFeeding() { return { this, "APrimalDinoCharacter.bPreventWakingTameFeeding" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisablingTaming() { return { this, "APrimalDinoCharacter.bForceDisablingTaming" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideCrosshairAlpha() { return { this, "APrimalDinoCharacter.bOverrideCrosshairAlpha" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideCrosshairColor() { return { this, "APrimalDinoCharacter.bOverrideCrosshairColor" }; }
	BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets() { return { this, "APrimalDinoCharacter.bCenterOffscreenFloatingHUDWidgets" }; }
	BitFieldValue<bool, unsigned __int32> bClampOffscreenFloatingHUDWidgets() { return { this, "APrimalDinoCharacter.bClampOffscreenFloatingHUDWidgets" }; }
	BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel() { return { this, "APrimalDinoCharacter.bUseFixedSpawnLevel" }; }
	BitFieldValue<bool, unsigned __int32> bUniqueDino() { return { this, "APrimalDinoCharacter.bUniqueDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OverrideDinoName() { return { this, "APrimalDinoCharacter.bUseBP_OverrideDinoName" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDinoTooltipCustomProgressBar() { return { this, "APrimalDinoCharacter.bUseBPDinoTooltipCustomProgressBar" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideTamingDescriptionLabel() { return { this, "APrimalDinoCharacter.bUseBPOverrideTamingDescriptionLabel" }; }
	BitFieldValue<bool, unsigned __int32> bIsNursingDino() { return { this, "APrimalDinoCharacter.bIsNursingDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsNursing() { return { this, "APrimalDinoCharacter.bIsNursing" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerPrioritizeAllyMountToCarry() { return { this, "APrimalDinoCharacter.bFlyerPrioritizeAllyMountToCarry" }; }
	BitFieldValue<bool, unsigned __int32> bClearRiderOnDinoImmobilized() { return { this, "APrimalDinoCharacter.bClearRiderOnDinoImmobilized" }; }
	BitFieldValue<bool, unsigned __int32> bIncrementedZoneManagerDirectLink() { return { this, "APrimalDinoCharacter.bIncrementedZoneManagerDirectLink" }; }
	BitFieldValue<bool, unsigned __int32> bSimulateRootMotion() { return { this, "APrimalDinoCharacter.bSimulateRootMotion" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideStencilAllianceForTarget() { return { this, "APrimalDinoCharacter.bUseBPOverrideStencilAllianceForTarget" }; }
	BitFieldValue<bool, unsigned __int32> bIsScout() { return { this, "APrimalDinoCharacter.bIsScout" }; }
	BitFieldValue<bool, unsigned __int32> bShouldNotifyClientWhenLanded() { return { this, "APrimalDinoCharacter.bShouldNotifyClientWhenLanded" }; }
	BitFieldValue<bool, unsigned __int32> bUsePlayerMountedCarryingDinoAnimation() { return { this, "APrimalDinoCharacter.bUsePlayerMountedCarryingDinoAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bPreventRotationRateModifier() { return { this, "APrimalDinoCharacter.bPreventRotationRateModifier" }; }
	BitFieldValue<bool, unsigned __int32> bStepDamageFoliageOnly() { return { this, "APrimalDinoCharacter.bStepDamageFoliageOnly" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUntamedRun() { return { this, "APrimalDinoCharacter.bPreventUntamedRun" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPublicSeating() { return { this, "APrimalDinoCharacter.bAllowPublicSeating" }; }
	BitFieldValue<bool, unsigned __int32> bTickedStasis() { return { this, "APrimalDinoCharacter.bTickedStasis" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDinoAutoConsumeInventoryFood() { return { this, "APrimalDinoCharacter.bAllowDinoAutoConsumeInventoryFood" }; }
	BitFieldValue<bool, unsigned __int32> bForceNoCharacterStatusComponentTick() { return { this, "APrimalDinoCharacter.bForceNoCharacterStatusComponentTick" }; }
	BitFieldValue<bool, unsigned __int32> bIsRaidDino() { return { this, "APrimalDinoCharacter.bIsRaidDino" }; }
	BitFieldValue<bool, unsigned __int32> bWildIgnoredByAutoTurrets() { return { this, "APrimalDinoCharacter.bWildIgnoredByAutoTurrets" }; }
	BitFieldValue<bool, unsigned __int32> bWildAllowTargetingNeutralStructures() { return { this, "APrimalDinoCharacter.bWildAllowTargetingNeutralStructures" }; }
	BitFieldValue<bool, unsigned __int32> bDroppedInventoryDeposit() { return { this, "APrimalDinoCharacter.bDroppedInventoryDeposit" }; }
	BitFieldValue<bool, unsigned __int32> bIsCarryingCharacter() { return { this, "APrimalDinoCharacter.bIsCarryingCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bIsCarryingPassenger() { return { this, "APrimalDinoCharacter.bIsCarryingPassenger" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTurretTargetOverrideLocations() { return { this, "APrimalDinoCharacter.bAllowTurretTargetOverrideLocations" }; }
	BitFieldValue<bool, unsigned __int32> bLastDamageWasForwardedFromPlatformStructure() { return { this, "APrimalDinoCharacter.bLastDamageWasForwardedFromPlatformStructure" }; }
	BitFieldValue<bool, unsigned __int32> bUseMyBabyCuddleFoodTypesAsAdditional() { return { this, "APrimalDinoCharacter.bUseMyBabyCuddleFoodTypesAsAdditional" }; }
	BitFieldValue<bool, unsigned __int32> bIsManualFoodEat() { return { this, "APrimalDinoCharacter.bIsManualFoodEat" }; }
	BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget() { return { this, "APrimalDinoCharacter.bBPModifyAimOffsetNoTarget" }; }
	BitFieldValue<bool, unsigned __int32> bDisallowPostNetReplication() { return { this, "APrimalDinoCharacter.bDisallowPostNetReplication" }; }
	BitFieldValue<bool, unsigned __int32> bTakingOff() { return { this, "APrimalDinoCharacter.bTakingOff" }; }
	BitFieldValue<bool, unsigned __int32> bPreventMating() { return { this, "APrimalDinoCharacter.bPreventMating" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowBackwardsFlight() { return { this, "APrimalDinoCharacter.bFlyerDinoAllowBackwardsFlight" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowStrafing() { return { this, "APrimalDinoCharacter.bFlyerDinoAllowStrafing" }; }
	BitFieldValue<bool, unsigned __int32> bIsBossDino() { return { this, "APrimalDinoCharacter.bIsBossDino" }; }
	BitFieldValue<bool, unsigned __int32> bTamedAIAllowSpecialAttacks() { return { this, "APrimalDinoCharacter.bTamedAIAllowSpecialAttacks" }; }
	BitFieldValue<bool, unsigned __int32> bLocalPrimaryAttackPressed() { return { this, "APrimalDinoCharacter.bLocalPrimaryAttackPressed" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUploading() { return { this, "APrimalDinoCharacter.bPreventUploading" }; }
	BitFieldValue<bool, unsigned __int32> bPreventHibernation() { return { this, "APrimalDinoCharacter.bPreventHibernation" }; }
	BitFieldValue<bool, unsigned __int32> bRiderMovementLocked() { return { this, "APrimalDinoCharacter.bRiderMovementLocked" }; }
	BitFieldValue<bool, unsigned __int32> bTameTimerSet() { return { this, "APrimalDinoCharacter.bTameTimerSet" }; }
	BitFieldValue<bool, unsigned __int32> bNeutered() { return { this, "APrimalDinoCharacter.bNeutered" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreAllWhistles() { return { this, "APrimalDinoCharacter.bIgnoreAllWhistles" }; }
	BitFieldValue<bool, unsigned __int32> bHideFloatingHUD() { return { this, "APrimalDinoCharacter.bHideFloatingHUD" }; }
	BitFieldValue<bool, unsigned __int32> bDisableHarvesting() { return { this, "APrimalDinoCharacter.bDisableHarvesting" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowTickingThisFrame() { return { this, "APrimalDinoCharacter.bForceAllowTickingThisFrame" }; }
	BitFieldValue<bool, unsigned __int32> bFlyerDontGainImpulseOnSubmerged() { return { this, "APrimalDinoCharacter.bFlyerDontGainImpulseOnSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bIsSingleplayer() { return { this, "APrimalDinoCharacter.bIsSingleplayer" }; }
	BitFieldValue<bool, unsigned __int32> bIsCloneDino() { return { this, "APrimalDinoCharacter.bIsCloneDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseAdvancedAnimLerp() { return { this, "APrimalDinoCharacter.bUseAdvancedAnimLerp" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWanderingUnderWater() { return { this, "APrimalDinoCharacter.bPreventWanderingUnderWater" }; }
	BitFieldValue<bool, unsigned __int32> bWildAllowFollowTamedTarget() { return { this, "APrimalDinoCharacter.bWildAllowFollowTamedTarget" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDamageSameTeamAndClass() { return { this, "APrimalDinoCharacter.bAllowDamageSameTeamAndClass" }; }
	BitFieldValue<bool, unsigned __int32> bAllowsTurretMode() { return { this, "APrimalDinoCharacter.bAllowsTurretMode" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRidingInTurretMode() { return { this, "APrimalDinoCharacter.bAllowRidingInTurretMode" }; }
	BitFieldValue<bool, unsigned __int32> bIsInTurretMode() { return { this, "APrimalDinoCharacter.bIsInTurretMode" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyDesiredRotation() { return { this, "APrimalDinoCharacter.bUseBPModifyDesiredRotation" }; }
	BitFieldValue<bool, unsigned __int32> bForcedLandingClearRider() { return { this, "APrimalDinoCharacter.bForcedLandingClearRider" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget() { return { this, "APrimalDinoCharacter.bUseBPOverrideCameraViewTarget" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_CustomModifier_MaxSpeed() { return { this, "APrimalDinoCharacter.bUseBP_CustomModifier_MaxSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bIsClearingRider() { return { this, "APrimalDinoCharacter.bIsClearingRider" }; }
	BitFieldValue<bool, unsigned __int32> bForcePerFrameTicking() { return { this, "APrimalDinoCharacter.bForcePerFrameTicking" }; }
	BitFieldValue<bool, unsigned __int32> bHadStaticBase() { return { this, "APrimalDinoCharacter.bHadStaticBase" }; }
	BitFieldValue<bool, unsigned __int32> bNoKillXP() { return { this, "APrimalDinoCharacter.bNoKillXP" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreAllyLook() { return { this, "APrimalDinoCharacter.bIgnoreAllyLook" }; }
	BitFieldValue<bool, unsigned __int32> bBabyInitiallyUnclaimed() { return { this, "APrimalDinoCharacter.bBabyInitiallyUnclaimed" }; }
	BitFieldValue<bool, unsigned __int32> bLastAnyLegOnGround() { return { this, "APrimalDinoCharacter.bLastAnyLegOnGround" }; }
	BitFieldValue<bool, unsigned __int32> bSuppressWakingTameMessage() { return { this, "APrimalDinoCharacter.bSuppressWakingTameMessage" }; }
	BitFieldValue<bool, unsigned __int32> bPreventFlyerLanding() { return { this, "APrimalDinoCharacter.bPreventFlyerLanding" }; }
	BitFieldValue<bool, unsigned __int32> bHasDied() { return { this, "APrimalDinoCharacter.bHasDied" }; }
	BitFieldValue<bool, unsigned __int32> bHasPlayDying() { return { this, "APrimalDinoCharacter.bHasPlayDying" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTrapping() { return { this, "APrimalDinoCharacter.bAllowTrapping" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWildTrapping() { return { this, "APrimalDinoCharacter.bPreventWildTrapping" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDestroyOnRapidDeath() { return { this, "APrimalDinoCharacter.bIgnoreDestroyOnRapidDeath" }; }
	BitFieldValue<bool, unsigned __int32> bPreventFallingBumpCheck() { return { this, "APrimalDinoCharacter.bPreventFallingBumpCheck" }; }
	BitFieldValue<bool, unsigned __int32> bIsDestroyingDino() { return { this, "APrimalDinoCharacter.bIsDestroyingDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintExtraBabyScale() { return { this, "APrimalDinoCharacter.bUseBlueprintExtraBabyScale" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OnPostNetReplication() { return { this, "APrimalDinoCharacter.bUseBP_OnPostNetReplication" }; }
	BitFieldValue<bool, unsigned __int32> bPassiveFlee() { return { this, "APrimalDinoCharacter.bPassiveFlee" }; }
	BitFieldValue<bool, unsigned __int32> bDidAllowTickingTickingThisFrame() { return { this, "APrimalDinoCharacter.bDidAllowTickingTickingThisFrame" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyTargetConscious() { return { this, "APrimalDinoCharacter.bOnlyTargetConscious" }; }
	BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocationNoRider() { return { this, "APrimalDinoCharacter.bBPManagedFPVViewLocationNoRider" }; }
	BitFieldValue<bool, unsigned __int32> bForceHideSaddle() { return { this, "APrimalDinoCharacter.bForceHideSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCloning() { return { this, "APrimalDinoCharacter.bPreventCloning" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_CanFly() { return { this, "APrimalDinoCharacter.bUseBP_CanFly" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OverrideBasedCharactersCameraInterpSpeed() { return { this, "APrimalDinoCharacter.bUseBP_OverrideBasedCharactersCameraInterpSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideFloatingHUDLocation() { return { this, "APrimalDinoCharacter.bUseBPOverrideFloatingHUDLocation" }; }
	BitFieldValue<bool, unsigned __int32> bInterceptPlayerEmotes() { return { this, "APrimalDinoCharacter.bInterceptPlayerEmotes" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_ShouldPreventBasedCharactersCameraInterpolation() { return { this, "APrimalDinoCharacter.bUseBP_ShouldPreventBasedCharactersCameraInterpolation" }; }
	BitFieldValue<bool, unsigned __int32> bRidingIsSeperateUnstasisCaster() { return { this, "APrimalDinoCharacter.bRidingIsSeperateUnstasisCaster" }; }
	BitFieldValue<bool, unsigned __int32> bIsOceanManagerDino() { return { this, "APrimalDinoCharacter.bIsOceanManagerDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsSaveProfilingDino() { return { this, "APrimalDinoCharacter.bIsSaveProfilingDino" }; }
	BitFieldValue<bool, unsigned __int32> DisableCameraShakes() { return { this, "APrimalDinoCharacter.DisableCameraShakes" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OverrideCarriedCharacterTransform() { return { this, "APrimalDinoCharacter.bUseBP_OverrideCarriedCharacterTransform" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnNotifies() { return { this, "APrimalDinoCharacter.bUseBP_OnBasedPawnNotifies" }; }
	BitFieldValue<bool, unsigned __int32> bUsesWaterWalking() { return { this, "APrimalDinoCharacter.bUsesWaterWalking" }; }
	BitFieldValue<bool, unsigned __int32> bIsMek() { return { this, "APrimalDinoCharacter.bIsMek" }; }
	BitFieldValue<bool, unsigned __int32> bIsEnforcer() { return { this, "APrimalDinoCharacter.bIsEnforcer" }; }
	BitFieldValue<bool, unsigned __int32> bIsExtinctionTitan() { return { this, "APrimalDinoCharacter.bIsExtinctionTitan" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreFlierRidingRestrictions() { return { this, "APrimalDinoCharacter.bIgnoreFlierRidingRestrictions" }; }
	BitFieldValue<bool, unsigned __int32> bRotatingUpdatesDinoIK() { return { this, "APrimalDinoCharacter.bRotatingUpdatesDinoIK" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OverrideRiderCameraCollisionSweep() { return { this, "APrimalDinoCharacter.bUseBP_OverrideRiderCameraCollisionSweep" }; }
	BitFieldValue<bool, unsigned __int32> bDrawHealthBar() { return { this, "APrimalDinoCharacter.bDrawHealthBar" }; }
	BitFieldValue<bool, unsigned __int32> bUseShoulderMountedLaunch() { return { this, "APrimalDinoCharacter.bUseShoulderMountedLaunch" }; }
	BitFieldValue<bool, unsigned __int32> bUsePreciseLaunching() { return { this, "APrimalDinoCharacter.bUsePreciseLaunching" }; }
	BitFieldValue<bool, unsigned __int32> bDidSetupTamed() { return { this, "APrimalDinoCharacter.bDidSetupTamed" }; }
	BitFieldValue<bool, unsigned __int32> bIncrementedNumDinos() { return { this, "APrimalDinoCharacter.bIncrementedNumDinos" }; }
	BitFieldValue<bool, unsigned __int32> bBabyPreventExitingWater() { return { this, "APrimalDinoCharacter.bBabyPreventExitingWater" }; }
	BitFieldValue<bool, unsigned __int32> bPreventExportDino() { return { this, "APrimalDinoCharacter.bPreventExportDino" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPassengerFPV() { return { this, "APrimalDinoCharacter.bPreventPassengerFPV" }; }
	BitFieldValue<bool, unsigned __int32> bGlideWhenFalling() { return { this, "APrimalDinoCharacter.bGlideWhenFalling" }; }
	BitFieldValue<bool, unsigned __int32> bGlideWhenMounted() { return { this, "APrimalDinoCharacter.bGlideWhenMounted" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowBackwardsMovement() { return { this, "APrimalDinoCharacter.bForceAllowBackwardsMovement" }; }
	BitFieldValue<bool, unsigned __int32> bIsLatched() { return { this, "APrimalDinoCharacter.bIsLatched" }; }
	BitFieldValue<bool, unsigned __int32> bIsLatchedDownward() { return { this, "APrimalDinoCharacter.bIsLatchedDownward" }; }
	BitFieldValue<bool, unsigned __int32> bIsLatching() { return { this, "APrimalDinoCharacter.bIsLatching" }; }
	BitFieldValue<bool, unsigned __int32> bRotateToFaceLatchingObject() { return { this, "APrimalDinoCharacter.bRotateToFaceLatchingObject" }; }
	BitFieldValue<bool, unsigned __int32> bLimitRiderYawOnLatched() { return { this, "APrimalDinoCharacter.bLimitRiderYawOnLatched" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponry() { return { this, "APrimalDinoCharacter.bAllowMountedWeaponry" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponryPVE() { return { this, "APrimalDinoCharacter.bAllowMountedWeaponryPVE" }; }
	BitFieldValue<bool, unsigned __int32> bKeepAffinityOnDamageRecievedWakingTame() { return { this, "APrimalDinoCharacter.bKeepAffinityOnDamageRecievedWakingTame" }; }
	BitFieldValue<bool, unsigned __int32> bForceRiderDrawCrosshair() { return { this, "APrimalDinoCharacter.bForceRiderDrawCrosshair" }; }
	BitFieldValue<bool, unsigned __int32> bForceDrawHUD() { return { this, "APrimalDinoCharacter.bForceDrawHUD" }; }
	BitFieldValue<bool, unsigned __int32> bForceDrawHUDWithoutRecentlyRendered() { return { this, "APrimalDinoCharacter.bForceDrawHUDWithoutRecentlyRendered" }; }
	BitFieldValue<bool, unsigned __int32> bCanTargetVehicles() { return { this, "APrimalDinoCharacter.bCanTargetVehicles" }; }
	BitFieldValue<bool, unsigned __int32> bVehicleAlwaysAllowTargetingByWildDinos() { return { this, "APrimalDinoCharacter.bVehicleAlwaysAllowTargetingByWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bRidingRequiresTamed() { return { this, "APrimalDinoCharacter.bRidingRequiresTamed" }; }
	BitFieldValue<bool, unsigned __int32> bSuppressDeathNotification() { return { this, "APrimalDinoCharacter.bSuppressDeathNotification" }; }
	BitFieldValue<bool, unsigned __int32> bUseOnUpdateMountedDinoMeshHiding() { return { this, "APrimalDinoCharacter.bUseOnUpdateMountedDinoMeshHiding" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInterceptTurnInputEvents() { return { this, "APrimalDinoCharacter.bUseBPInterceptTurnInputEvents" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEvents() { return { this, "APrimalDinoCharacter.bUseBPInterceptMoveInputEvents" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEventsEvenIfZero() { return { this, "APrimalDinoCharacter.bUseBPInterceptMoveInputEventsEvenIfZero" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustAttackIndex() { return { this, "APrimalDinoCharacter.bUseBPAdjustAttackIndex" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnEndCharging() { return { this, "APrimalDinoCharacter.bUseBPOnEndCharging" }; }
	BitFieldValue<bool, unsigned __int32> bIsCorrupted() { return { this, "APrimalDinoCharacter.bIsCorrupted" }; }
	BitFieldValue<bool, unsigned __int32> bIsHordeDino() { return { this, "APrimalDinoCharacter.bIsHordeDino" }; }
	BitFieldValue<bool, unsigned __int32> bDropWildEggsWithoutMateBoost() { return { this, "APrimalDinoCharacter.bDropWildEggsWithoutMateBoost" }; }
	BitFieldValue<bool, unsigned __int32> bIsTemporaryMissionDino() { return { this, "APrimalDinoCharacter.bIsTemporaryMissionDino" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventInventoryAccess() { return { this, "APrimalDinoCharacter.bForcePreventInventoryAccess" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWildRunningWithoutTarget() { return { this, "APrimalDinoCharacter.bAllowWildRunningWithoutTarget" }; }
	BitFieldValue<bool, unsigned __int32> bIsBed() { return { this, "APrimalDinoCharacter.bIsBed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirability() { return { this, "APrimalDinoCharacter.bUseBPGetTargetingDesirability" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysAllowStrafing() { return { this, "APrimalDinoCharacter.bAlwaysAllowStrafing" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowTamedTickEggLay() { return { this, "APrimalDinoCharacter.bForceAllowTamedTickEggLay" }; }
	BitFieldValue<bool, unsigned __int32> bHasBuffPreventingUploading() { return { this, "APrimalDinoCharacter.bHasBuffPreventingUploading" }; }
	BitFieldValue<bool, unsigned __int32> bDisableHarvestHealthGain() { return { this, "APrimalDinoCharacter.bDisableHarvestHealthGain" }; }
	BitFieldValue<bool, unsigned __int32> bRemainLatchedOnClearRider() { return { this, "APrimalDinoCharacter.bRemainLatchedOnClearRider" }; }
	BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient() { return { this, "APrimalDinoCharacter.bCallRiderChangeWeaponsOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetOtherActorToIgnore() { return { this, "APrimalDinoCharacter.bUseBPGetOtherActorToIgnore" }; }
	BitFieldValue<bool, unsigned __int32> bGenderOverrideInSpawn() { return { this, "APrimalDinoCharacter.bGenderOverrideInSpawn" }; }
	BitFieldValue<bool, unsigned __int32> MutagenApplied() { return { this, "APrimalDinoCharacter.MutagenApplied" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWhistleThroughRemoteDino() { return { this, "APrimalDinoCharacter.bAllowWhistleThroughRemoteDino" }; }
	BitFieldValue<bool, unsigned __int32> bForceValidUnstasisCaster() { return { this, "APrimalDinoCharacter.bForceValidUnstasisCaster" }; }
	BitFieldValue<bool, unsigned __int32> bControlledDinoPreventsPlayerInventory() { return { this, "APrimalDinoCharacter.bControlledDinoPreventsPlayerInventory" }; }
	BitFieldValue<bool, unsigned __int32> bPaintingSupportSkins() { return { this, "APrimalDinoCharacter.bPaintingSupportSkins" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverridePassengerAdditiveAnim() { return { this, "APrimalDinoCharacter.bUseBPOverridePassengerAdditiveAnim" }; }
	BitFieldValue<bool, unsigned __int32> bReplicatePassengerTPVAim() { return { this, "APrimalDinoCharacter.bReplicatePassengerTPVAim" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisableClientGravitySim() { return { this, "APrimalDinoCharacter.bForceDisableClientGravitySim" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirabilityForTurrets() { return { this, "APrimalDinoCharacter.bUseBPGetTargetingDesirabilityForTurrets" }; }
	BitFieldValue<bool, unsigned __int32> bWasSpawnedInACaveOrBossArea() { return { this, "APrimalDinoCharacter.bWasSpawnedInACaveOrBossArea" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsSubmergedForWaterTargeting() { return { this, "APrimalDinoCharacter.bUseBPOverrideIsSubmergedForWaterTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bCreatureIsImmuneToServerSoftTameLimitDestruction() { return { this, "APrimalDinoCharacter.bCreatureIsImmuneToServerSoftTameLimitDestruction" }; }
	BitFieldValue<bool, unsigned __int32> DestroyedViaSoftTameLimitCountdown() { return { this, "APrimalDinoCharacter.DestroyedViaSoftTameLimitCountdown" }; }
	BitFieldValue<bool, unsigned __int32> bMaxTamedDinos_SoftTameLimit_IsCharacterCountedTowardsUnderSoftTameLimit() { return { this, "APrimalDinoCharacter.bMaxTamedDinos_SoftTameLimit_IsCharacterCountedTowardsUnderSoftTameLimit" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreNPCCountVolumes() { return { this, "APrimalDinoCharacter.bIgnoreNPCCountVolumes" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePathfinding() { return { this, "APrimalDinoCharacter.bDisablePathfinding" }; }
	BitFieldValue<bool, unsigned __int32> bDontOverrideToNavMeshStepHeight() { return { this, "APrimalDinoCharacter.bDontOverrideToNavMeshStepHeight" }; }
	BitFieldValue<bool, unsigned __int32> bUseDinoLimbWallAvoidance() { return { this, "APrimalDinoCharacter.bUseDinoLimbWallAvoidance" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysUpdateDinoLimbWallAvoidance() { return { this, "APrimalDinoCharacter.bAlwaysUpdateDinoLimbWallAvoidance" }; }
	BitFieldValue<bool, unsigned __int32> bUpdateDinoLimbWallAvoidance() { return { this, "APrimalDinoCharacter.bUpdateDinoLimbWallAvoidance" }; }
	BitFieldValue<bool, unsigned __int32> bCheatPossessed() { return { this, "APrimalDinoCharacter.bCheatPossessed" }; }
	BitFieldValue<bool, unsigned __int32> bForceTickingBehaviorTreeEveryFrame() { return { this, "APrimalDinoCharacter.bForceTickingBehaviorTreeEveryFrame" }; }
	BitFieldValue<bool, unsigned __int32> bDinoHasBonded() { return { this, "APrimalDinoCharacter.bDinoHasBonded" }; }
	BitFieldValue<bool, unsigned __int32> bCuddleRequestRefreshed() { return { this, "APrimalDinoCharacter.bCuddleRequestRefreshed" }; }
	BitFieldValue<bool, unsigned __int32> bHideFloatingName() { return { this, "APrimalDinoCharacter.bHideFloatingName" }; }
	BitFieldValue<bool, unsigned __int32> bSingleplayerFreezePhysicsWhenNoTarget() { return { this, "APrimalDinoCharacter.bSingleplayerFreezePhysicsWhenNoTarget" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanTargetCorpse() { return { this, "APrimalDinoCharacter.bUseBPCanTargetCorpse" }; }
	BitFieldValue<bool, unsigned __int32> bCheckBuffModifyAimOffsetNoTarget() { return { this, "APrimalDinoCharacter.bCheckBuffModifyAimOffsetNoTarget" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderIndoorsCheckLocation() { return { this, "APrimalDinoCharacter.bUseBPOverrideRiderIndoorsCheckLocation" }; }
	BitFieldValue<bool, unsigned __int32> bSwimmingWaterDinoMoveLikeFlying() { return { this, "APrimalDinoCharacter.bSwimmingWaterDinoMoveLikeFlying" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSkipTerrainTraceForCarriedCharacter() { return { this, "APrimalDinoCharacter.bUseBPSkipTerrainTraceForCarriedCharacter" }; }
	BitFieldValue<bool, unsigned __int32> FlyingMovementModeUseFlyingRunSpeedModifier() { return { this, "APrimalDinoCharacter.FlyingMovementModeUseFlyingRunSpeedModifier" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAddedToMountChar() { return { this, "APrimalDinoCharacter.bUseBPNotifyOnBuffAddedToMountChar" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWanderAroundActorWildTameMix() { return { this, "APrimalDinoCharacter.bAllowWanderAroundActorWildTameMix" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyWanderAroundActorLocation() { return { this, "APrimalDinoCharacter.bUseBPModifyWanderAroundActorLocation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderAccessInventoryInput() { return { this, "APrimalDinoCharacter.bUseBPOverrideRiderAccessInventoryInput" }; }
	BitFieldValue<bool, unsigned __int32> bUseDescriptiveNameGenderOverrides() { return { this, "APrimalDinoCharacter.bUseDescriptiveNameGenderOverrides" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetTamedFollowTarget() { return { this, "APrimalDinoCharacter.bUseBPGetTamedFollowTarget" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSetTamedFollowTarget() { return { this, "APrimalDinoCharacter.bUseBPSetTamedFollowTarget" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideBasedPlayerAimOffsetYaw() { return { this, "APrimalDinoCharacter.bUseBPOverrideBasedPlayerAimOffsetYaw" }; }
	BitFieldValue<bool, unsigned __int32> bPreventClearShoulderMountOfDiffTeam() { return { this, "APrimalDinoCharacter.bPreventClearShoulderMountOfDiffTeam" }; }
	BitFieldValue<bool, unsigned __int32> bPreventForceBabyFlyerLand() { return { this, "APrimalDinoCharacter.bPreventForceBabyFlyerLand" }; }
	BitFieldValue<bool, unsigned __int32> bTamedAlwaysUseTamedUnsleepAnim() { return { this, "APrimalDinoCharacter.bTamedAlwaysUseTamedUnsleepAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseRandomLookAtTarget() { return { this, "APrimalDinoCharacter.bUseRandomLookAtTarget" }; }
	BitFieldValue<bool, unsigned __int32> bServerForceUpdateDinoGameplayMeshNearPlayer() { return { this, "APrimalDinoCharacter.bServerForceUpdateDinoGameplayMeshNearPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bForceAllowMountedAimOffset() { return { this, "APrimalDinoCharacter.bForceAllowMountedAimOffset" }; }
	BitFieldValue<bool, unsigned __int32> bIsWandering() { return { this, "APrimalDinoCharacter.bIsWandering" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPhysMovement() { return { this, "APrimalDinoCharacter.bAllowPhysMovement" }; }
	BitFieldValue<bool, unsigned __int32> bWasWanderingEverThrottled() { return { this, "APrimalDinoCharacter.bWasWanderingEverThrottled" }; }
	BitFieldValue<bool, unsigned __int32> bWasMoving() { return { this, "APrimalDinoCharacter.bWasMoving" }; }
	BitFieldValue<bool, unsigned __int32> bRandomLookAtTargetDisabled() { return { this, "APrimalDinoCharacter.bRandomLookAtTargetDisabled" }; }

	// Functions

	bool BPExtractEmbryo(struct APlayerController* ForPC, struct UPrimalItem** EmbryoItem, struct TSoftClassPtr<UPrimalItem>* FallbackGenericEmbryoItemTemplate) { return NativeCall<bool, struct APlayerController*, struct UPrimalItem**, struct TSoftClassPtr<UPrimalItem>*>(this, "APrimalDinoCharacter.BPExtractEmbryo(APlayerController*,UPrimalItem*&,TSoftClassPtr<UPrimalItem>)", ForPC, EmbryoItem, FallbackGenericEmbryoItemTemplate); }
	void OnDinoStartled(UAnimMontage* StartledAnimPlayed, bool bFromAIController) { NativeCall<void, UAnimMontage*, bool>(this, "APrimalDinoCharacter.OnDinoStartled(UAnimMontage*,bool)", StartledAnimPlayed, bFromAIController); }
	bool IsCorruptedDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsCorruptedDino()"); }
	float GetBabyAge() { return NativeCall<float>(this, "APrimalDinoCharacter.GetBabyAge()"); }
	bool DontForceUpdateRateOptimizations() { return NativeCall<bool>(this, "APrimalDinoCharacter.DontForceUpdateRateOptimizations()"); }
	float GetXPMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetXPMultiplier()"); }
	bool IsBossDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsBossDino()"); }
	bool UseHighQualityMovement() { return NativeCall<bool>(this, "APrimalDinoCharacter.UseHighQualityMovement()"); }
	bool AllowPushOthers() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowPushOthers()"); }
	bool FlyingUseHighQualityCollision() { return NativeCall<bool>(this, "APrimalDinoCharacter.FlyingUseHighQualityCollision()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalDinoCharacter"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalDinoCharacter"); }
	bool AllowWakingTame(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalDinoCharacter.AllowWakingTame(APlayerController*)", ForPC); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float BlueprintAdjustOutputDamage(int AttackIndex, float OriginalDamageAmount, AActor* HitActor, TSubclassOf<UDamageType>* OutDamageType, float* OutDamageImpulse);
	float BlueprintExtraBabyScaling() { return NativeCall<float>(this, "APrimalDinoCharacter.BlueprintExtraBabyScaling()"); }
	float BlueprintGetAttackWeight(int AttackIndex, float inputWeight, float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<float, int, float, float, float, AActor*>(this, "APrimalDinoCharacter.BlueprintGetAttackWeight(int,float,float,float,AActor*)", AttackIndex, inputWeight, distance, attackRangeOffset, OtherTarget); }
	bool BlueprintOverrideWantsToRun(bool bInputWantsToRun) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BlueprintOverrideWantsToRun(bool,bool)", bInputWantsToRun); }
	void BP_OnStartLandFailed(int ReasonIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.BP_OnStartLandFailed(int)", ReasonIndex); }
	void BP_OnStartLandingNotify() { NativeCall<void>(this, "APrimalDinoCharacter.BP_OnStartLandingNotify()"); }
	bool BP_OverrideCarriedCharacterTransform(APrimalCharacter* ForCarriedChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.BP_OverrideCarriedCharacterTransform(APrimalCharacter*)", ForCarriedChar); }
	FHitResult* BP_OverrideRiderCameraCollisionSweep(FHitResult* result, const UE::Math::TVector<double>* SweepStart, const UE::Math::TVector<double>* SweepEnd) { return NativeCall<FHitResult*, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BP_OverrideRiderCameraCollisionSweep(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", result, SweepStart, SweepEnd); }
	bool BP_PreventCarrying() { return NativeCall<bool>(this, "APrimalDinoCharacter.BP_PreventCarrying()"); }
	int BPAdjustAttackIndex(int attackIndex) { return NativeCall<int, int>(this, "APrimalDinoCharacter.BPAdjustAttackIndex(int)", attackIndex); }
	bool BPAllowClaiming(AShooterPlayerController* forPlayer) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPAllowClaiming(AShooterPlayerController*)", forPlayer); }
	void BPBecameNewBaby(APrimalDinoCharacter* parent) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.BPBecameNewBaby(APrimalDinoCharacter*)", parent); }
	bool BPCanTargetCorpse() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPCanTargetCorpse()"); }
	bool BPCheckSeven() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPCheckSeven()"); }
	bool BPDesiredRotationIsLocalSpace() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPDesiredRotationIsLocalSpace()"); }
	void BPDinoARKDownloadedBegin() { NativeCall<void>(this, "APrimalDinoCharacter.BPDinoARKDownloadedBegin()"); }
	void BPDinoARKDownloadedEnd() { NativeCall<void>(this, "APrimalDinoCharacter.BPDinoARKDownloadedEnd()"); }
	bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, FString* Label) { return NativeCall<bool, bool*, float*, FString*>(this, "APrimalDinoCharacter.BPDinoTooltipCustomTamingProgressBar(bool&,float&,FString&)", overrideTamingProgressBarIfActive, progressPercent, Label); }
	bool BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, FString* Label) { return NativeCall<bool, bool*, float*, FString*>(this, "APrimalDinoCharacter.BPDinoTooltipCustomTorpidityProgressBar(bool&,float&,FString&)", overrideTorpidityProgressBarIfActive, progressPercent, Label); }
	void BPDrawToRiderHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalDinoCharacter.BPDrawToRiderHUD(AShooterHUD*)", HUD); }
	void BPFedWakingTameEvent(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalDinoCharacter.BPFedWakingTameEvent(APlayerController*)", ForPC); }
	FName* BPGetLookOffsetSocketName(FName* result, APrimalCharacter* ForPrimalChar) { return NativeCall<FName*, FName*, APrimalCharacter*>(this, "APrimalDinoCharacter.BPGetLookOffsetSocketName(APrimalCharacter*)", result, ForPrimalChar); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float BPGetTargetingDesirability(const AActor* Attacker);
	bool BPHandleUseButtonPress(AShooterPlayerController* RiderController) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPHandleUseButtonPress(AShooterPlayerController*)", RiderController); }
	void BPModifyHarvestingWeightsArray(const TArray<float, TSizedDefaultAllocator<32> >* resourceWeightsIn, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* resourceItems, TArray<float, TSizedDefaultAllocator<32> >* resourceWeightsOut) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.BPModifyHarvestingWeightsArray(TArray<float,TSizedDefaultAllocator<32>>&,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", resourceWeightsIn, resourceItems, resourceWeightsOut); }
	void BPNotifyBabyAgeIncrement(float PreviousAge, float NewAge) { NativeCall<void, float, float>(this, "APrimalDinoCharacter.BPNotifyBabyAgeIncrement(float,float)", PreviousAge, NewAge); }
	void BPNotifyCarriedDinoBabyAgeIncrement(APrimalDinoCharacter* AgingCarriedDino, float PreviousAge, float NewAge) { NativeCall<void, APrimalDinoCharacter*, float, float>(this, "APrimalDinoCharacter.BPNotifyCarriedDinoBabyAgeIncrement(APrimalDinoCharacter*,float,float)", AgingCarriedDino, PreviousAge, NewAge); }
	void BPNotifyMateBoostChanged() { NativeCall<void>(this, "APrimalDinoCharacter.BPNotifyMateBoostChanged()"); }
	void BPNotifyWildHarvestAttack(int harvestIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.BPNotifyWildHarvestAttack(int)", harvestIndex); }
	void BPOrderedMoveToLoc(const UE::Math::TVector<double>* DestLoc) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BPOrderedMoveToLoc(UE::Math::TVector<double>&)", DestLoc); }
	FString* BPOverrideTamingDescriptionLabel(FString* result, FSlateColor* TextColor) { return NativeCall<FString*, FString*, FSlateColor*>(this, "APrimalDinoCharacter.BPOverrideTamingDescriptionLabel(FSlateColor&)", result, TextColor); }
	void BPPrepareForLaunchFromShoulder(const UE::Math::TVector<double>* viewLoc, const UE::Math::TVector<double>* viewDir) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BPPrepareForLaunchFromShoulder(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", viewLoc, viewDir); }
	float BPSetSimulatedInterpRollOverride() { return NativeCall<float>(this, "APrimalDinoCharacter.BPSetSimulatedInterpRollOverride()"); }
	void CheatAction(const FString* Action) { NativeCall<void, const FString*>(this, "APrimalDinoCharacter.CheatAction(FString&)", Action); }
	void FireProjectile(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, bool bScaleProjDamageByDinoDamage) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, bool>(this, "APrimalDinoCharacter.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool)", Origin, ShootDir, bScaleProjDamageByDinoDamage); }
	void ForceUpdateColorSets(int ColorRegion, int ColorSet) { NativeCall<void, int, int>(this, "APrimalDinoCharacter.ForceUpdateColorSets(int,int)", ColorRegion, ColorSet); }
	UAnimMontage* GetDinoLevelUpAnimation() { return NativeCall<UAnimMontage*>(this, "APrimalDinoCharacter.GetDinoLevelUpAnimation()"); }
	long double GetLastStartedTalkingTime() { return NativeCall<long double>(this, "APrimalDinoCharacter.GetLastStartedTalkingTime()"); }
	bool HasOfflineRider() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasOfflineRider()"); }
	bool HasSelfBuried() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasSelfBuried()"); }
	bool InterceptMountedOnPlayerEmoteAnim(UAnimMontage* EmoteAnim) { return NativeCall<bool, UAnimMontage*>(this, "APrimalDinoCharacter.InterceptMountedOnPlayerEmoteAnim(UAnimMontage*)", EmoteAnim); }
	bool InterceptRiderEmoteAnim(UAnimMontage* EmoteAnim) { return NativeCall<bool, UAnimMontage*>(this, "APrimalDinoCharacter.InterceptRiderEmoteAnim(UAnimMontage*)", EmoteAnim); }
	void InterruptLatching() { NativeCall<void>(this, "APrimalDinoCharacter.InterruptLatching(bool)"); }
	bool IsVoiceTalking() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsVoiceTalking()"); }
	void MultiSetAttachedStructurePickupAllowedBeforeNetworkTime(long double NewTime, APrimalStructure* Structure) { NativeCall<void, long double, APrimalStructure*>(this, "APrimalDinoCharacter.MultiSetAttachedStructurePickupAllowedBeforeNetworkTime(double,APrimalStructure*)", NewTime, Structure); }
	void NetUpdateDinoNameStrings(const FString* NewTamerString, const FString* NewTamedName) { NativeCall<void, const FString*, const FString*>(this, "APrimalDinoCharacter.NetUpdateDinoNameStrings(FString&,FString&)", NewTamerString, NewTamedName); }
	void NetUpdateDinoOwnerData(const FString* NewOwningPlayerName, int NewOwningPlayerID) { NativeCall<void, const FString*, int>(this, "APrimalDinoCharacter.NetUpdateDinoOwnerData(FString&,int)", NewOwningPlayerName, NewOwningPlayerID); }
	void NotifyClientsEmbryoTerminated() { NativeCall<void>(this, "APrimalDinoCharacter.NotifyClientsEmbryoTerminated()"); }
	void OnVoiceTalkingStateChanged(bool isTalking, bool isMuted) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.OnVoiceTalkingStateChanged(bool,bool)", isTalking, isMuted); }
	bool OverrideFinalWanderLocation(UE::Math::TVector<double>* outVec) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.OverrideFinalWanderLocation(UE::Math::TVector<double>&)", outVec); }
	void OverrideRandomWanderLocation(const UE::Math::TVector<double>* originalDestination, UE::Math::TVector<double>* inVec) { NativeCall<void, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.OverrideRandomWanderLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", originalDestination, inVec); }
	void PlayHardEndChargingShake() { NativeCall<void>(this, "APrimalDinoCharacter.PlayHardEndChargingShake()"); }
	void RidingTick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDinoCharacter.RidingTick(float)", DeltaSeconds); }
	void ServerClearRider(int OverrideUnboardDirection) { NativeCall<void, int>(this, "APrimalDinoCharacter.ServerClearRider(int)", OverrideUnboardDirection); }
	void ServerRequestAttack(int attackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.ServerRequestAttack(int)", attackIndex); }
	void ServerRequestWaterSurfaceJump() { NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestWaterSurfaceJump()"); }
	bool SetTurretMode(bool enabled) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.SetTurretMode(bool)", enabled); }
	void UpdateBabyCuddling(long double NewBabyNextCuddleTime, unsigned __int8 NewBabyCuddleType, TSubclassOf<UPrimalItem> NewBabyCuddleFood) { NativeCall<void, long double, unsigned __int8, TSubclassOf<UPrimalItem>&>(this, "APrimalDinoCharacter.UpdateBabyCuddling(double,unsignedchar,TSubclassOf<UPrimalItem>)", NewBabyNextCuddleTime, NewBabyCuddleType, NewBabyCuddleFood); }
	void UpdateImprintingDetails(const FString* NewImprinterName, const FString* NewImprinterPlayerUniqueNetId) { NativeCall<void, const FString*, const FString*>(this, "APrimalDinoCharacter.UpdateImprintingDetails(FString&,FString&)", NewImprinterName, NewImprinterPlayerUniqueNetId); }
	void UpdateImprintingDetailsForController(const AShooterPlayerController* controller) { NativeCall<void, const AShooterPlayerController*>(this, "APrimalDinoCharacter.UpdateImprintingDetailsForController(AShooterPlayerController*)", controller); }
	void UpdateImprintingQuality(float NewImprintingQuality) { NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateImprintingQuality(float)", NewImprintingQuality); }
	void UpdateTribeGroupRanks(unsigned __int8 NewTribeGroupPetOrderingRank, unsigned __int8 NewTribeGroupPetRidingRank) { NativeCall<void, unsigned __int8, unsigned __int8>(this, "APrimalDinoCharacter.UpdateTribeGroupRanks(unsignedchar,unsignedchar)", NewTribeGroupPetOrderingRank, NewTribeGroupPetRidingRank); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalDinoCharacter();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { NativeCall<void>(this, "APrimalDinoCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls()"); }
	//     void FinishedMPLandingAfterLeaving() { NativeCall<void>(this, "APrimalDinoCharacter.FinishedMPLandingAfterLeaving()"); }
	// FUNCTION MISSING: APrimalDinoCharacter.FinishedMPLandingAfterLeaving()
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "APrimalDinoCharacter.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	void DeferredDestroy(bool bNetForce, bool bShouldModifyLevel) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.DeferredDestroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDinoCharacter.Tick(float)", DeltaSeconds); }
	void PlayHardEndChargingShake_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.PlayHardEndChargingShake_Implementation()"); }
	float GetAttackRangeOffset() { return NativeCall<float>(this, "APrimalDinoCharacter.GetAttackRangeOffset()"); }
	void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalDinoCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void AutoDrag(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.AutoDrag()", a2); }
	bool CanRide(AShooterCharacter* byPawn, unsigned __int8* bOutHasSaddle, unsigned __int8* bOutCanRideOtherThanSaddle, bool bDontCheckDistance) { return NativeCall<bool, AShooterCharacter*, unsigned __int8*, unsigned __int8*, bool>(this, "APrimalDinoCharacter.CanRide(AShooterCharacter*,unsignedchar*,unsignedchar*,bool,bool)", byPawn, bOutHasSaddle, bOutCanRideOtherThanSaddle, bDontCheckDistance); }
	bool CanCryo(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.CanCryo(AShooterPlayerController*)", ForPC); }
	void OnCryo(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.OnCryo(AShooterPlayerController*)", ForPC); }
	//void OnUncryo(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.OnUncryo(AShooterPlayerController*)", ForPC); }
	void Multi_OnCryo_Implementation(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.Multi_OnCryo_Implementation(AShooterPlayerController*)", ForPC); }
	void StasisingCharacter() { NativeCall<void>(this, "APrimalDinoCharacter.StasisingCharacter()"); }
	void Stasis() { NativeCall<void>(this, "APrimalDinoCharacter.Stasis()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalDinoCharacter.Unstasis()"); }
	void HandleUnstasised(bool bWasFromHibernation) { NativeCall<void, bool>(this, "APrimalDinoCharacter.HandleUnstasised(bool)", bWasFromHibernation); }
	void DoUnstasis_TamedDinoUnstasisConsumeFood() { NativeCall<void>(this, "APrimalDinoCharacter.DoUnstasis_TamedDinoUnstasisConsumeFood()"); }
	bool IsRemoteDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsRemoteDino()"); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsValidUnStasisCaster()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalDinoCharacter.PostInitializeComponents()"); }
	void PostInitProperties() { NativeCall<void>(this, "APrimalDinoCharacter.PostInitProperties()"); }
	void RegisterAllComponents() { NativeCall<void>(this, "APrimalDinoCharacter.RegisterAllComponents()"); }
	int GetRandomBaseLevel(float a2) { return NativeCall<int, float>(this, "APrimalDinoCharacter.GetRandomBaseLevel()", a2); }
	bool AllowZoneAutoKill() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowZoneAutoKill()"); }
	void SetState(UPrimalAIState* State) { NativeCall<void, UPrimalAIState*>(this, "APrimalDinoCharacter.SetState(UPrimalAIState*)", State); }
	void StopActiveState(bool bShouldResetAttackIndex) { NativeCall<void, bool>(this, "APrimalDinoCharacter.StopActiveState(bool)", bShouldResetAttackIndex); }
	bool DoAttack(int AttackIndex, bool bSetCurrentAttack, bool bInterruptCurrentAttack) { return NativeCall<bool, int, bool, bool>(this, "APrimalDinoCharacter.DoAttack(int,bool,bool)", AttackIndex, bSetCurrentAttack, bInterruptCurrentAttack); }
	bool CancelCurrentAttack(bool bStopCurrentAttackAnim, float AttackAnimBlendOutTime) { return NativeCall<bool, bool, float>(this, "APrimalDinoCharacter.CancelCurrentAttack(bool,float)", bStopCurrentAttackAnim, AttackAnimBlendOutTime); }
	void ApplyRidingAttackExtraVelocity() { NativeCall<void>(this, "APrimalDinoCharacter.ApplyRidingAttackExtraVelocity()"); }
	bool HasReachedDestination(const UE::Math::TVector<double>* Goal) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.HasReachedDestination(UE::Math::TVector<double>&)", Goal); }
	bool IsDamageOccludedByStructures(AActor* DamageCauser) { return NativeCall<bool, AActor*>(this, "APrimalDinoCharacter.IsDamageOccludedByStructures(AActor*)", DamageCauser); }
	float GetNetworkModeStasisRangeMultiplier(ENetMode theNetMode) { return NativeCall<float, ENetMode>(this, "APrimalDinoCharacter.GetNetworkModeStasisRangeMultiplier(ENetMode)", theNetMode); }
	float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalDinoCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool CanAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.CanAttack(int)", AttackIndex); }
	bool IsAttacking() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsAttacking()"); }
	void PlayAttackAnimationOfAnimationArray(int AnimationIndex, TArray<UAnimMontage*, TSizedDefaultAllocator<32> >* attackAnimations) { NativeCall<void, int, TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.PlayAttackAnimationOfAnimationArray(int,TArray<UAnimMontage*,TSizedDefaultAllocator<32>>)", AnimationIndex, attackAnimations); }
	void PlayWeightedAttackAnimation(int a2) { NativeCall<void, int>(this, "APrimalDinoCharacter.PlayWeightedAttackAnimation()", a2); }
	bool IsCurrentlyPlayingAttackAnimation() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsCurrentlyPlayingAttackAnimation()"); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalDinoCharacter.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalDinoCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "APrimalDinoCharacter.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	UPrimalAIState* GetActiveState() { return NativeCall<UPrimalAIState*>(this, "APrimalDinoCharacter.GetActiveState()"); }
	void OnDinoCheat(FName CheatName, bool bSetValue, float Value) { NativeCall<void, FName, bool, float>(this, "APrimalDinoCharacter.OnDinoCheat(FName,bool,float)", CheatName, bSetValue, Value); }
	bool AddToMeleeSwingHurtList(AActor* AnActor) { return NativeCall<bool, AActor*>(this, "APrimalDinoCharacter.AddToMeleeSwingHurtList(AActor*)", AnActor); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "APrimalDinoCharacter.ShouldDealDamage(AActor*)", TestActor); }
	void DealDamage(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, int, TSubclassOf<UDamageType>&, float>(this, "APrimalDinoCharacter.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	bool CanCarryCharacter(APrimalCharacter* CanCarryPawn) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.CanCarryCharacter(APrimalCharacter*)", CanCarryPawn); }
	bool AllowCarryCharacter(APrimalCharacter* CanCarryPawn) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.AllowCarryCharacter(APrimalCharacter*)", CanCarryPawn); }
	bool CarryCharacter(APrimalCharacter* character, bool byPassCanCarryCheck) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalDinoCharacter.CarryCharacter(APrimalCharacter*,bool)", character, byPassCanCarryCheck); }
	void ClearCarriedCharacter(bool fromCarriedCharacter, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ClearCarriedCharacter(bool,bool)", fromCarriedCharacter, bCancelAnyCarryBuffs); }
	void ClearPassengers(UObject* a2) { NativeCall<void, UObject*>(this, "APrimalDinoCharacter.ClearPassengers()", a2); }
	bool AddPassenger(APrimalCharacter* PrimalCharacter, int PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos, bool bSkipLineTrace) { return NativeCall<bool, APrimalCharacter*, int, bool, bool, bool>(this, "APrimalDinoCharacter.AddPassenger(APrimalCharacter*,int,bool,bool,bool)", PrimalCharacter, PassengerSeatIndex, bForcePassenger, bAllowFlyersAndWaterDinos, bSkipLineTrace); }
	void RemovePassenger(APrimalCharacter* PrimalCharacter, bool bFromCharacter, bool bFromPlayerController) { NativeCall<void, APrimalCharacter*, bool, bool>(this, "APrimalDinoCharacter.RemovePassenger(APrimalCharacter*,bool,bool)", PrimalCharacter, bFromCharacter, bFromPlayerController); }
	bool CheckLocalPassengers(__int64 a2) { return NativeCall<bool, __int64>(this, "APrimalDinoCharacter.CheckLocalPassengers()", a2); }
	bool IsPassengerSeatAvailable(int PassengerSeatIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.IsPassengerSeatAvailable(int)", PassengerSeatIndex); }
	bool CanTakePassenger(APrimalCharacter* PrimalCharacter, int PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos, bool bSkipLineTrace) { return NativeCall<bool, APrimalCharacter*, int, bool, bool, bool>(this, "APrimalDinoCharacter.CanTakePassenger(APrimalCharacter*,int,bool,bool,bool)", PrimalCharacter, PassengerSeatIndex, bForcePassenger, bAllowFlyersAndWaterDinos, bSkipLineTrace); }
	int GetNumPassengerSeats(bool bOnlyManualPassengerSeats) { return NativeCall<int, bool>(this, "APrimalDinoCharacter.GetNumPassengerSeats(bool)", bOnlyManualPassengerSeats); }
	const FSaddlePassengerSeatDefinition* GetPassengerSeatDefinition(unsigned __int8 SeatIndex) { return NativeCall<const FSaddlePassengerSeatDefinition*, unsigned __int8>(this, "APrimalDinoCharacter.GetPassengerSeatDefinition(unsignedchar)", SeatIndex); }
	void OnRep_PassengerPerSeat() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_PassengerPerSeat()"); }
	void ServerToggleCharging_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerToggleCharging_Implementation()"); }
	void StartCharging(bool bForce) { NativeCall<void, bool>(this, "APrimalDinoCharacter.StartCharging(bool)", bForce); }
	void PlayChargingAnim() { NativeCall<void>(this, "APrimalDinoCharacter.PlayChargingAnim()"); }
	void EndCharging(bool bForce) { NativeCall<void, bool>(this, "APrimalDinoCharacter.EndCharging(bool)", bForce); }
	bool AllowHurtAnimation() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowHurtAnimation()"); }
	void SetRider(AShooterCharacter* aRider) { NativeCall<void, AShooterCharacter*>(this, "APrimalDinoCharacter.SetRider(AShooterCharacter*)", aRider); }
	bool ForceDisableClientGravitySimulation() { return NativeCall<bool>(this, "APrimalDinoCharacter.ForceDisableClientGravitySimulation()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void ForceUpdateColorSets_Implementation(int ColorRegion, int ColorSet) { NativeCall<void, int, int>(this, "APrimalDinoCharacter.ForceUpdateColorSets_Implementation(int,int)", ColorRegion, ColorSet); }
	void MulticastUpdateAllColorSets_Implementation(int Color0, int Color1, int Color2, int Color3, int Color4, int Color5) { NativeCall<void, int, int, int, int, int, int>(this, "APrimalDinoCharacter.MulticastUpdateAllColorSets_Implementation(int,int,int,int,int,int)", Color0, Color1, Color2, Color3, Color4, Color5); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetDescriptiveName()", result); }
	FString* GetShortName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetShortName()", result); }
	FString* GetCurrentDinoName(FString* result, APlayerController* ForPC) { return NativeCall<FString*, FString*, APlayerController*>(this, "APrimalDinoCharacter.GetCurrentDinoName(APlayerController*)", result, ForPC); }
	void ForceClearRider() { NativeCall<void>(this, "APrimalDinoCharacter.ForceClearRider()"); }
	bool CanClearRider() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanClearRider()"); }
	void ClearRider(bool FromRider, bool bCancelForceLand, bool SpawnDinoDefaultController, int OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear) { NativeCall<void, bool, bool, bool, int, bool>(this, "APrimalDinoCharacter.ClearRider(bool,bool,bool,int,bool,bool)", FromRider, bCancelForceLand, SpawnDinoDefaultController, OverrideUnboardDirection, bForceEvenIfBuffPreventsClear); }
	void ControllerLeavingGame(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.ControllerLeavingGame(AShooterPlayerController*)", theController); }
	FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetEntryString()", result); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "APrimalDinoCharacter.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
	UMaterialInterface* GetEntryIconMaterial(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface*, UObject*, bool>(this, "APrimalDinoCharacter.GetEntryIconMaterial(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "APrimalDinoCharacter.GetObject()"); }
	FString* GetEntryDescription(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetEntryDescription()", result); }
	UTexture* GetDinoEntryIcon() { return NativeCall<UTexture*>(this, "APrimalDinoCharacter.GetDinoEntryIcon()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalDinoCharacter.DrawHUD(AShooterHUD*)", HUD); }
	bool CanOrder(APrimalCharacter* FromCharacter, bool bBuildingStructures) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalDinoCharacter.CanOrder(APrimalCharacter*,bool)", FromCharacter, bBuildingStructures); }
	bool TamedProcessOrder(APrimalCharacter* FromCharacter, EDinoTamedOrder::Type OrderType, bool bForce, AActor* enemyTarget) { return NativeCall<bool, APrimalCharacter*, EDinoTamedOrder::Type, bool, AActor*>(this, "APrimalDinoCharacter.TamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*)", FromCharacter, OrderType, bForce, enemyTarget); }
	void GetRidingMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetRidingMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", ForPC, MultiUseEntries); }
	void ServerSleepingTick() { NativeCall<void>(this, "APrimalDinoCharacter.ServerSleepingTick()"); }
	void AddNewTamingCreatureAsActiveTrackedTargetForTeam(int Team, bool HavePOIActiveInitially, TWeakObjectPtr<AController> NotifyPlayer) { NativeCall<void, int, bool, TWeakObjectPtr<AController>>(this, "APrimalDinoCharacter.AddNewTamingCreatureAsActiveTrackedTargetForTeam(int,bool,TWeakObjectPtr<AController,FWeakObjectPtr>)", Team, HavePOIActiveInitially, NotifyPlayer); }
	void ServerTamedTick() { NativeCall<void>(this, "APrimalDinoCharacter.ServerTamedTick()"); }
	UPrimalItem* GetBestInventoryFoodItem(float* FoodIncrease, bool bLookForAffinity, bool bFoodItemRequiresLivePlayerCharacter, UPrimalItem** foundFoodItem, bool bLookForWorstFood) { return NativeCall<UPrimalItem*, float*, bool, bool, UPrimalItem**, bool>(this, "APrimalDinoCharacter.GetBestInventoryFoodItem(float&,bool,bool,UPrimalItem**,bool)", FoodIncrease, bLookForAffinity, bFoodItemRequiresLivePlayerCharacter, foundFoodItem, bLookForWorstFood); }
	AShooterCharacter* ConsumeInventoryFoodItem(UPrimalItem* foodItem, float* AffinityIncrease, bool bDontDecrementItem, float* FoodIncrease, float FoodAmountMultiplier, bool bConsumeEntireStack) { return NativeCall<AShooterCharacter*, UPrimalItem*, float*, bool, float*, float, bool>(this, "APrimalDinoCharacter.ConsumeInventoryFoodItem(UPrimalItem*,float*,bool,float*,float,bool)", foodItem, AffinityIncrease, bDontDecrementItem, FoodIncrease, FoodAmountMultiplier, bConsumeEntireStack); }
	int GetFoodItemEffectivenessMultipliersIndex(UPrimalItem* foodItem) { return NativeCall<int, UPrimalItem*>(this, "APrimalDinoCharacter.GetFoodItemEffectivenessMultipliersIndex(UPrimalItem*)", foodItem); }
	TSubclassOf<UPrimalItem>* GetFirstAffinityFoodItemClass(TSubclassOf<UPrimalItem>* result) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*>(this, "APrimalDinoCharacter.GetFirstAffinityFoodItemClass()", result); }
	int GetExtraFoodItemEffectivenessMultipliersIndex(UPrimalItem* foodItem) { return NativeCall<int, UPrimalItem*>(this, "APrimalDinoCharacter.GetExtraFoodItemEffectivenessMultipliersIndex(UPrimalItem*)", foodItem); }
	void ServerClearRider_Implementation(int OverrideUnboardDirection) { NativeCall<void, int>(this, "APrimalDinoCharacter.ServerClearRider_Implementation(int)", OverrideUnboardDirection); }
	void SetupPlayerInputComponent(UInputComponent* WithInputComponent) { NativeCall<void, UInputComponent*>(this, "APrimalDinoCharacter.SetupPlayerInputComponent(UInputComponent*)", WithInputComponent); }
	void OnElevateDino(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.OnElevateDino(float)", Val); }
	void OnLowerDino(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.OnLowerDino(float)", Val); }
	void OnBrake() { NativeCall<void>(this, "APrimalDinoCharacter.OnBrake()"); }
	void OffBrake() { NativeCall<void>(this, "APrimalDinoCharacter.OffBrake()"); }
	void ServerRequestBraking_Implementation(bool bWantsToBrake) { NativeCall<void, bool>(this, "APrimalDinoCharacter.ServerRequestBraking_Implementation(bool)", bWantsToBrake); }
	void OnStartFire() { NativeCall<void>(this, "APrimalDinoCharacter.OnStartFire()"); }
	void OnStopFire() { NativeCall<void>(this, "APrimalDinoCharacter.OnStopFire()"); }
	void OnStartTargeting() { NativeCall<void>(this, "APrimalDinoCharacter.OnStartTargeting()"); }
	void OnStopTargeting() { NativeCall<void>(this, "APrimalDinoCharacter.OnStopTargeting()"); }
	void OnControllerInitiatedAttack(int AttackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.OnControllerInitiatedAttack(int)", AttackIndex); }
	void UpdateAttackTargets() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateAttackTargets()"); }
	bool IsMovementTethered() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsMovementTethered()"); }
	float GetApproachRadius() { return NativeCall<float>(this, "APrimalDinoCharacter.GetApproachRadius()"); }
	bool GetClosestTargetOverride(const UE::Math::TVector<double>* attackPos, UE::Math::TVector<double>* targetPos) { return NativeCall<bool, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", attackPos, targetPos); }
	void ServerUpdateAttackTargets_Implementation(AActor* AttackTarget, UE::Math::TVector<double>* AttackLocation) { NativeCall<void, AActor*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.ServerUpdateAttackTargets_Implementation(AActor*,UE::Math::TVector<double>)", AttackTarget, AttackLocation); }
	void GetAttackTargets(AActor** attackActor, UE::Math::TVector<double>& attackLoc, bool bAllowFriendlyTargets) { NativeCall<void, AActor**, UE::Math::TVector<double>&, bool>(this, "APrimalDinoCharacter.GetAttackTargets(AActor**,UE::Math::TVector<double>&,bool)", attackActor, attackLoc, bAllowFriendlyTargets); }
	void ServerRequestAttack_Implementation(int attackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.ServerRequestAttack_Implementation(int)", attackIndex); }
	void OnPrimalCharacterSleeped() { NativeCall<void>(this, "APrimalDinoCharacter.OnPrimalCharacterSleeped()"); }
	void UnPossessed() { NativeCall<void>(this, "APrimalDinoCharacter.UnPossessed()"); }
	void UpdateAnimationPreUpdateMatinee() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateAnimationPreUpdateMatinee()"); }
	void TempDampenInputAcceleration() { NativeCall<void>(this, "APrimalDinoCharacter.TempDampenInputAcceleration()"); }
	bool ModifyInputAcceleration(UE::Math::TVector<double>* InputAcceleration) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.ModifyInputAcceleration(UE::Math::TVector<double>&)", InputAcceleration); }
	float GetMaxSpeedModifier(bool bIgnoreRunning) { return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetMaxSpeedModifier(bool)", bIgnoreRunning); }
	bool IsBaby() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsBaby()"); }
	float GetSpeedModifier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetSpeedModifier()"); }
	float GetRotationRateModifier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetRotationRateModifier()"); }
	bool IsFleeing() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsFleeing()"); }
	void FaceRotation(UE::Math::TRotator<double>* NewControlRotation, float DeltaTime) { NativeCall<void, UE::Math::TRotator<double>*, float>(this, "APrimalDinoCharacter.FaceRotation(UE::Math::TRotator<double>,float,bool)", NewControlRotation, DeltaTime); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.MoveForward(float)", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.MoveRight(float)", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.MoveUp(float)", Val); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.TurnInput(float)", Val); }
	void SetCurrentAttackIndex(unsigned __int8 index) { NativeCall<void, unsigned __int8>(this, "APrimalDinoCharacter.SetCurrentAttackIndex(unsignedchar)", index); }
	void ResetCurrentAttackIndex() { NativeCall<void>(this, "APrimalDinoCharacter.ResetCurrentAttackIndex()"); }
	int BPGetCurrentAttackIndex() { return NativeCall<int>(this, "APrimalDinoCharacter.BPGetCurrentAttackIndex()"); }
	unsigned __int8 GetWiegthedAttack(float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<unsigned __int8, float, float, AActor*>(this, "APrimalDinoCharacter.GetWiegthedAttack(float,float,AActor*)", distance, attackRangeOffset, OtherTarget); }
	void FireProjectileLocal(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, bool bScaleProjDamageByDinoDamage) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, bool>(this, "APrimalDinoCharacter.FireProjectileLocal(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool)", Origin, ShootDir, bScaleProjDamageByDinoDamage); }
	void DinoFireProjectileEx_Implementation(TSubclassOf<AShooterProjectile> ProjectileClass, UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, bool bScaleProjDamageByDinoDamage, bool bAddDinoVelocityToProjectile, float OverrideInitialSpeed, float OverrideMaxSpeed, float ExtraDirectDamageMultiplier, float ExtraExplosionDamageMultiplier, bool spawnOnOwningClient) { NativeCall<void, TSubclassOf<AShooterProjectile>&, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, bool, bool, float, float, float, float, bool>(this, "APrimalDinoCharacter.DinoFireProjectileEx_Implementation(TSubclassOf<AShooterProjectile>,UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool,bool,float,float,float,float,bool)", ProjectileClass, Origin, ShootDir, bScaleProjDamageByDinoDamage, bAddDinoVelocityToProjectile, OverrideInitialSpeed, OverrideMaxSpeed, ExtraDirectDamageMultiplier, ExtraExplosionDamageMultiplier, spawnOnOwningClient); }
	void FireMultipleProjectilesEx_Implementation(TSubclassOf<AShooterProjectile> ProjectileClass, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* Locations, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* Directions, bool bAddPawnVelocityToProjectile, bool bScaleProjDamageByDinoDamage, USceneComponent* HomingTarget, UE::Math::TVector<double>* HomingTargetOffset, float OverrideInitialSpeed) { NativeCall<void, TSubclassOf<AShooterProjectile>&, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, bool, bool, USceneComponent*, UE::Math::TVector<double>*, float>(this, "APrimalDinoCharacter.FireMultipleProjectilesEx_Implementation(TSubclassOf<AShooterProjectile>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool,bool,USceneComponent*,UE::Math::TVector<double>,float)", ProjectileClass, Locations, Directions, bAddPawnVelocityToProjectile, bScaleProjDamageByDinoDamage, HomingTarget, HomingTargetOffset, OverrideInitialSpeed); }
	void FireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, __int64 bScaleProjDamageByDinoDamage) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, __int64>(this, "APrimalDinoCharacter.FireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool)", Origin, ShootDir, bScaleProjDamageByDinoDamage); }
	void ServerToClientsPlayAttackAnimation_Implementation(char AttackinfoIndex, char AnimationIndex, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, AActor* MyTarget) { NativeCall<void, char, char, float, FName, bool, bool, AActor*>(this, "APrimalDinoCharacter.ServerToClientsPlayAttackAnimation_Implementation(signedchar,signedchar,float,FName,bool,bool,AActor*)", AttackinfoIndex, AnimationIndex, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, MyTarget); }
	void RequestAttackData() { NativeCall<void>(this, "APrimalDinoCharacter.RequestAttackData()"); }
	void ServerRequestToggleFlight_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestToggleFlight_Implementation()"); }
	void CalcCapsuleHalfHeight() { NativeCall<void>(this, "APrimalDinoCharacter.CalcCapsuleHalfHeight()"); }
	void ClientStartLanding_Implementation(UE::Math::TVector<double>* loc) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.ClientStartLanding_Implementation(UE::Math::TVector<double>)", loc); }
	void StartLanding(UE::Math::TVector<double>* OverrideLandingLocation) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.StartLanding(UE::Math::TVector<double>)", OverrideLandingLocation); }
	bool IsLandingOnDino(UE::Math::TVector<double>* loc) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.IsLandingOnDino(UE::Math::TVector<double>&)", loc); }
	void ServerInterruptLanding_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerInterruptLanding_Implementation()"); }
	void InterruptLanding() { NativeCall<void>(this, "APrimalDinoCharacter.InterruptLanding()"); }
	void ClientInterruptLanding_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ClientInterruptLanding_Implementation()"); }
	void ServerFinishedLanding_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerFinishedLanding_Implementation()"); }
	//     void FinishedLanding() { NativeCall<void>(this, "APrimalDinoCharacter.FinishedLanding()"); }
	// FUNCTION MISSING: APrimalDinoCharacter.FinishedLanding()
	void ClientShouldNotifyLanded_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ClientShouldNotifyLanded_Implementation()"); }
	bool HasBuffPreventingFlight() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasBuffPreventingFlight()"); }
	bool HasBuffPreventingClearRiderOnDinoImmobilized() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasBuffPreventingClearRiderOnDinoImmobilized()"); }
	void SetFlight(bool bFly, bool bCancelForceLand, bool SkipAnimsPreventInputCheck) { NativeCall<void, bool, bool, bool>(this, "APrimalDinoCharacter.SetFlight(bool,bool,bool)", bFly, bCancelForceLand, SkipAnimsPreventInputCheck); }
	void KeepFlightTimer() { NativeCall<void>(this, "APrimalDinoCharacter.KeepFlightTimer()"); }
	void DidLand() { NativeCall<void>(this, "APrimalDinoCharacter.DidLand()"); }
	void AddFlyerTakeOffImpulse() { NativeCall<void>(this, "APrimalDinoCharacter.AddFlyerTakeOffImpulse()"); }
	void OnStartJump() { NativeCall<void>(this, "APrimalDinoCharacter.OnStartJump()"); }
	void OnStopJump() { NativeCall<void>(this, "APrimalDinoCharacter.OnStopJump()"); }
	void ServerRequestWaterSurfaceJump_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestWaterSurfaceJump_Implementation()"); }
	bool UseLowQualityMovementTick() { return NativeCall<bool>(this, "APrimalDinoCharacter.UseLowQualityMovementTick()"); }
	bool UseLowQualityAnimationTick() { return NativeCall<bool>(this, "APrimalDinoCharacter.UseLowQualityAnimationTick()"); }
	bool UseLowQualityBehaviorTreeTick(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalDinoCharacter.UseLowQualityBehaviorTreeTick()", a2); }
	void UpdateNetDynamicMusic() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateNetDynamicMusic()"); }
	bool CanTame(AShooterPlayerController* ForPC, bool bIgnoreMaxTamedDinos) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "APrimalDinoCharacter.CanTame(AShooterPlayerController*,bool,bool)", ForPC, bIgnoreMaxTamedDinos); }
	void SetupTamed(bool bWasJustTamed) { NativeCall<void, bool>(this, "APrimalDinoCharacter.SetupTamed(bool)", bWasJustTamed); }
	void TameDino(AShooterPlayerController* ForPC, bool bIgnoreMaxTameLimit, int OverrideTamingTeamID, bool bPreventNameDialog, bool bSkipAddingTamedLevels, bool bSuppressNotifications, bool bPreventDossierAndMilestones = false) { NativeCall<void, AShooterPlayerController*, bool, int, bool, bool, bool, bool>(this, "APrimalDinoCharacter.TameDino(AShooterPlayerController*,bool,int,bool,bool,bool,bool)", ForPC, bIgnoreMaxTameLimit, OverrideTamingTeamID, bPreventNameDialog, bSkipAddingTamedLevels, bSuppressNotifications, bPreventDossierAndMilestones); }
	void UntameDino(float TamingAffinityLimit) { NativeCall<void, float>(this, "APrimalDinoCharacter.UntameDino(float)", TamingAffinityLimit); }
	void SetCharacterStatusTameable(bool bSetTameable, bool bCreateInventory, bool keepInventoryForWakingTame) { NativeCall<void, bool, bool, bool>(this, "APrimalDinoCharacter.SetCharacterStatusTameable(bool,bool,bool)", bSetTameable, bCreateInventory, keepInventoryForWakingTame); }
	static APrimalDinoCharacter* StaticCreateBabyDino_v2(UWorld* theWorld, TSubclassOf<APrimalDinoCharacter> EggDinoClassToSpawn, const UE::Math::TVector<double>& theGroundLoc, float actorRotationYaw, unsigned char* EggColorSetIndices, unsigned char* EggNumberOfLevelUpPointsApplied, unsigned char* EggMutationsApplied, float EggTamedIneffectivenessModifier, APrimalDinoCharacter** ExtraBaby1, APrimalDinoCharacter** ExtraBaby2, int NotifyTeamOverride, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestors, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestorsMale, int EggRandomMutationsFemale, int EggRandomMutationsMale, int EggGenderOverride, bool bBeginPlay, TArray<FName, TSizedDefaultAllocator<32> >* EggDinoGeneTraits) { return NativeCall<APrimalDinoCharacter*, UWorld*, TSubclassOf<APrimalDinoCharacter>&, const UE::Math::TVector<double>&, float, unsigned char*, unsigned char*, unsigned char*, float, APrimalDinoCharacter**, APrimalDinoCharacter**, int, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, int, int, int, bool, TArray<FName, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalDinoCharacter.StaticCreateBabyDino_v2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,unsignedchar*,unsignedchar*,unsignedchar*,float,APrimalDinoCharacter*&,APrimalDinoCharacter*&,int,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,int,int,int,bool,TArray<FName,TSizedDefaultAllocator<32>>)", theWorld, EggDinoClassToSpawn, theGroundLoc, actorRotationYaw, EggColorSetIndices, EggNumberOfLevelUpPointsApplied, EggMutationsApplied, EggTamedIneffectivenessModifier, ExtraBaby1, ExtraBaby2, NotifyTeamOverride, EggDinoAncestors, EggDinoAncestorsMale, EggRandomMutationsFemale, EggRandomMutationsMale, EggGenderOverride, bBeginPlay, EggDinoGeneTraits); }
	void OnPrimalCharacterUnsleeped() { NativeCall<void>(this, "APrimalDinoCharacter.OnPrimalCharacterUnsleeped()"); }
	bool IsValidForStatusUpdate() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsValidForStatusUpdate()"); }
	AActor* GetOtherActorToIgnore() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.GetOtherActorToIgnore()"); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalDinoCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
	FMultiUseWheelOption* GetWheelOptionInfo(FMultiUseWheelOption* result, APlayerController* ForPC, int WheelCategory) { return NativeCall<FMultiUseWheelOption*, FMultiUseWheelOption*, APlayerController*, int>(this, "APrimalDinoCharacter.GetWheelOptionInfo(APlayerController*,int)", result, ForPC, WheelCategory); }
	UTexture2D* GetMultiUseIcon(APlayerController* ForPC, FMultiUseEntry* MultiUseEntry) { return NativeCall<UTexture2D*, APlayerController*, FMultiUseEntry*>(this, "APrimalDinoCharacter.GetMultiUseIcon(APlayerController*,FMultiUseEntry)", ForPC, MultiUseEntry); }
	long double GetForceClaimTime() { return NativeCall<long double>(this, "APrimalDinoCharacter.GetForceClaimTime()"); }
	void UnclaimDino(bool bDestroyAI) { NativeCall<void, bool>(this, "APrimalDinoCharacter.UnclaimDino(bool)", bDestroyAI); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalDinoCharacter.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	bool SetTurretMode_Implementation(bool enabled) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.SetTurretMode_Implementation(bool)", enabled); }
	void SetTurretModeMovementRestrictions(bool enabled, bool bAlsoSetTurretMode) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.SetTurretModeMovementRestrictions(bool,bool)", enabled, bAlsoSetTurretMode); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalDinoCharacter.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalDinoCharacter.ChangeActorTeam(int)", NewTeam); }
	void LinkedSupplyCrateDestroyed(APrimalStructureItemContainer_SupplyCrate* aCrate) { NativeCall<void, APrimalStructureItemContainer_SupplyCrate*>(this, "APrimalDinoCharacter.LinkedSupplyCrateDestroyed(APrimalStructureItemContainer_SupplyCrate*)", aCrate); }
	bool AllowNewEggAtLocation(const UE::Math::TVector<double>* AtLocation) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.AllowNewEggAtLocation(UE::Math::TVector<double>&)", AtLocation); }
	void SpawnEgg(bool bForceAllowEggSpawn) { NativeCall<void, bool>(this, "APrimalDinoCharacter.SpawnEgg(bool)", bForceAllowEggSpawn); }
	float GetRunningSpeedModifier(bool bIsForDefaultSpeed) { return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetRunningSpeedModifier(bool)", bIsForDefaultSpeed); }
	bool UseNetworkRangeScaling() { return NativeCall<bool>(this, "APrimalDinoCharacter.UseNetworkRangeScaling()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalDinoCharacter.BeginPlay()"); }
	void InitMaxStamina() { NativeCall<void>(this, "APrimalDinoCharacter.InitMaxStamina()"); }
	void ForceRefreshTransform() { NativeCall<void>(this, "APrimalDinoCharacter.ForceRefreshTransform()"); }
	void AutoTame() { NativeCall<void>(this, "APrimalDinoCharacter.AutoTame()"); }
	void SetupColorization() { NativeCall<void>(this, "APrimalDinoCharacter.SetupColorization()"); }
	void AssertColorNames() { NativeCall<void>(this, "APrimalDinoCharacter.AssertColorNames()"); }
	void ReassertColorization() { NativeCall<void>(this, "APrimalDinoCharacter.ReassertColorization()"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >* GetColorizationData(TArray<unsigned char, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetColorizationData()", result); }
	void ModifyFirstPersonCameraLocation(UE::Math::TVector<double>* Loc, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalDinoCharacter.ModifyFirstPersonCameraLocation(UE::Math::TVector<double>&,float)", Loc, DeltaTime); }
	void ServerRequestUseItemWithActor(APlayerController* ForPC, UObject* anItem, int AdditionalData, bool bReduceDurability) { NativeCall<void, APlayerController*, UObject*, int, bool>(this, "APrimalDinoCharacter.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", ForPC, anItem, AdditionalData, bReduceDurability); }
	void RefreshColorization(bool bForceRefresh) { NativeCall<void, bool>(this, "APrimalDinoCharacter.RefreshColorization(bool)", bForceRefresh); }
	bool CanTarget(const ITargetableInterface* Victim) { return NativeCall<bool, const ITargetableInterface*>(this, "APrimalDinoCharacter.CanTarget(ITargetableInterface*)", Victim); }
	int GetOriginalTargetingTeam() { return NativeCall<int>(this, "APrimalDinoCharacter.GetOriginalTargetingTeam()"); }
	float GetTargetingDesirability(const ITargetableInterface* Attacker) { return NativeCall<float, const ITargetableInterface*>(this, "APrimalDinoCharacter.GetTargetingDesirability(ITargetableInterface*)", Attacker); }
	void NetUpdateDinoNameStrings_Implementation(const FString* NewTamerString, const FString* NewTamedName) { NativeCall<void, const FString*, const FString*>(this, "APrimalDinoCharacter.NetUpdateDinoNameStrings_Implementation(FString&,FString&)", NewTamerString, NewTamedName); }
	void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool checkedBox) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalDinoCharacter.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, checkedBox); }
	static APrimalDinoCharacter* FindDinoWithID(UWorld* aWorld, unsigned int DinoID1, unsigned int DinoID2) { return NativeCall<APrimalDinoCharacter*, UWorld*, unsigned int, unsigned int>(nullptr, "APrimalDinoCharacter.FindDinoWithID(UWorld*,unsignedint,unsignedint)", aWorld, DinoID1, DinoID2); }
	void TargetingTeamChanged() { NativeCall<void>(this, "APrimalDinoCharacter.TargetingTeamChanged()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalDinoCharacter.Destroyed()"); }
	void DrawFloatingHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalDinoCharacter.DrawFloatingHUD(AShooterHUD*)", HUD); }
	void DrawDinoFloatingHUD(AShooterHUD* HUD, bool bDrawDinoOrderIcon) { NativeCall<void, AShooterHUD*, bool>(this, "APrimalDinoCharacter.DrawDinoFloatingHUD(AShooterHUD*,bool)", HUD, bDrawDinoOrderIcon); }
	bool IsNearFeed(AShooterPlayerState* ForPlayer) { return NativeCall<bool, AShooterPlayerState*>(this, "APrimalDinoCharacter.IsNearFeed(AShooterPlayerState*)", ForPlayer); }
	void DeathHarvestingFadeOut_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.DeathHarvestingFadeOut_Implementation()"); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalDinoCharacter.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
	FString* GetDinoDescriptiveName(FString* result, bool IgnoreArticle, bool IncludeDetails) { return NativeCall<FString*, FString*, bool, bool>(this, "APrimalDinoCharacter.GetDinoDescriptiveName(bool,bool)", result, IgnoreArticle, IncludeDetails); }
	TArray<FString, TSizedDefaultAllocator<32> >* GetDetailedDescription(TArray<FString, TSizedDefaultAllocator<32> >* result, const FString* IndentPrefix) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString*>(this, "APrimalDinoCharacter.GetDetailedDescription(FString&)", result, IndentPrefix); }
	void ServerGiveDefaultWeapon_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerGiveDefaultWeapon_Implementation()"); }
	bool CanWhistle() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanWhistle()"); }
	void ServerCallFollow_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallFollow_Implementation()", a2); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.ServerCallFollowOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallStay_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallStay_Implementation()", a2); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.ServerCallStayOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter*)", ForDinoChar); }
	void ServerCallAggressive_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallAggressive_Implementation()", a2); }
	void ServerCallAttackTargetNew_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallAttackTargetNew_Implementation()", a2); }
	void ServerCallSetAggressive_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallSetAggressive_Implementation()", a2); }
	void ServerCallNeutral_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallNeutral_Implementation()", a2); }
	void ServerCallPassive_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallPassive_Implementation()", a2); }
	void ServerCallPassiveFlee_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalDinoCharacter.ServerCallPassiveFlee_Implementation()", a2); }
	void ServerCallAttackTarget_Implementation(AActor* TheTarget) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.ServerCallAttackTarget_Implementation(AActor*)", TheTarget); }
	void ServerCallMoveTo_Implementation(UE::Math::TVector<double>* MoveToLoc) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.ServerCallMoveTo_Implementation(UE::Math::TVector<double>)", MoveToLoc); }
	void CreateCloneGestation(int NumMutationsToAdd) { NativeCall<void, int>(this, "APrimalDinoCharacter.CreateCloneGestation(int)", NumMutationsToAdd); }
	static APrimalDinoCharacter* BPStaticCreateBabyDinoNoAncestors_V2(UWorld* TheWorld, TSubclassOf<APrimalDinoCharacter> EggDinoClassToSpawn, const UE::Math::TVector<double>& theGroundLoc, float actorRotationYaw, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggColorSetIndices, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggNumberOfLevelUpPointsApplied, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggMutationsApplied, float EggTamedIneffectivenessModifier, APrimalDinoCharacter** ExtraBaby1, APrimalDinoCharacter** ExtraBaby2, TArray<FName, TSizedDefaultAllocator<32> >* EggDinoGeneTraits, int NotifyTeamOverride, int EggRandomMutationsFemale, int EggRandomMutationsMale) { return NativeCall<APrimalDinoCharacter*, UWorld*, TSubclassOf<APrimalDinoCharacter>&, const UE::Math::TVector<double>&, float, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, float, APrimalDinoCharacter**, APrimalDinoCharacter**, TArray<FName, TSizedDefaultAllocator<32> >*, int, int, int>(nullptr, "APrimalDinoCharacter.BPStaticCreateBabyDinoNoAncestors_V2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,APrimalDinoCharacter*&,APrimalDinoCharacter*&,TArray<FName,TSizedDefaultAllocator<32>>,int,int,int)", TheWorld, EggDinoClassToSpawn, theGroundLoc, actorRotationYaw, EggColorSetIndices, EggNumberOfLevelUpPointsApplied, EggMutationsApplied, EggTamedIneffectivenessModifier, ExtraBaby1, ExtraBaby2, EggDinoGeneTraits, NotifyTeamOverride, EggRandomMutationsFemale, EggRandomMutationsMale); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.NotifyItemRemoved(UPrimalItem*)", anItem); }
	float GetCorpseLifespan() { return NativeCall<float>(this, "APrimalDinoCharacter.GetCorpseLifespan()"); }
	void UpdateMateBoost(bool bForce) { NativeCall<void, bool>(this, "APrimalDinoCharacter.UpdateMateBoost(bool)", bForce); }
	void AdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "APrimalDinoCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void SpawnDefaultController() { NativeCall<void>(this, "APrimalDinoCharacter.SpawnDefaultController()"); }
	bool AllowFallDamage(const FHitResult* HitResult, float FallDamageAmount, bool CustomFallDamage) { return NativeCall<bool, const FHitResult*, float, bool>(this, "APrimalDinoCharacter.AllowFallDamage(FHitResult&,float,bool)", HitResult, FallDamageAmount, CustomFallDamage); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalDinoCharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void UpdateIK() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateIK()"); }
	bool AllowIKFreeze() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowIKFreeze()"); }
	//bool IKFootTrace(__int64 LegIndex, FIKLegInfo* LegInfo, UE::Math::TVector<double>* ActorLocation, UE::Math::TVector<double>* ActorForward, UE::Math::TVector<double>* TraceDirection, float TraceDistance) { return NativeCall<bool, __int64, FIKLegInfo*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "APrimalDinoCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float)", LegIndex, LegInfo, ActorLocation, ActorForward, TraceDirection, TraceDistance); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset, bool bPreserveSavedAnim) { NativeCall<void, bool, bool, bool>(this, "APrimalDinoCharacter.SetSleeping(bool,bool,bool)", bSleeping, bUseRagdollLocationOffset, bPreserveSavedAnim); }
	bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalDinoCharacter.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool AllowPenetrationCheck(AActor* OtherActor) { return NativeCall<bool, AActor*>(this, "APrimalDinoCharacter.AllowPenetrationCheck(AActor*)", OtherActor); }
	bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalDinoCharacter.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
	bool IsBasedOnActor(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "APrimalDinoCharacter.IsBasedOnActor(AActor*)", Other); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalDinoCharacter.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	//     float GetCorpseTargetingMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetCorpseTargetingMultiplier()"); }
	// FUNCTION MISSING: APrimalDinoCharacter.GetCorpseTargetingMultiplier()
	void UpdateStatusComponent(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateStatusComponent(float)", DeltaSeconds); }
	void CaptureCharacterSnapshot(UPrimalItem* Item) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.CaptureCharacterSnapshot(UPrimalItem*)", Item); }
	void ApplyCharacterSnapshot(UPrimalItem* Item, AActor* To, UE::Math::TVector<double>* Offset, float MaxExtent, int Pose, bool bCollisionOn, FPrimalSnapshotPose* SnapshotOverride) { if (!Offset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UPrimalItem *, AActor *, UE :: Math :: TVector < double >, float, int, bool, FPrimalSnapshotPose *>(this, "APrimalDinoCharacter.ApplyCharacterSnapshot(UPrimalItem*,AActor*,UE::Math::TVector<double>,float,int,bool,FPrimalSnapshotPose*)", Item, To, *Offset, MaxExtent, Pose, bCollisionOn, SnapshotOverride); }
	void TamedDinoUnstasisConsumeFood(float ForceTimeSinceStasis) { NativeCall<void, float>(this, "APrimalDinoCharacter.TamedDinoUnstasisConsumeFood(float)", ForceTimeSinceStasis); }
	void DinoKillerTransferItemsToInventory(UPrimalInventoryComponent* FromInventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "APrimalDinoCharacter.DinoKillerTransferItemsToInventory(UPrimalInventoryComponent*)", FromInventory); }
	bool AllowWalkableSlopeOverride(UPrimitiveComponent* ForComponent) { return NativeCall<bool, UPrimitiveComponent*>(this, "APrimalDinoCharacter.AllowWalkableSlopeOverride(UPrimitiveComponent*)", ForComponent); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetCarryingSocketYaw(bool)", RefreshBones); }
	//TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipCharacterInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalDinoCharacter.GetTooltipCharacterInfo(AShooterPlayerController*)", result, PlayerOwner); }
	void SetCarryingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.SetCarryingDino(APrimalDinoCharacter*)", aDino); }
	void ClearCarryingDino(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ClearCarryingDino(bool,bool)", bFromDino, bCancelAnyCarryBuffs); }
	void UpdateCarriedLocationAndRotation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateCarriedLocationAndRotation(float)", DeltaSeconds); }
	bool CanBeCarried(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.CanBeCarried(APrimalCharacter*)", ByCarrier); }
	bool CanBeBaseForCharacter(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "APrimalDinoCharacter.CanBeBaseForCharacter(APawn*)", Pawn); }
	void SetMountCharacter(APrimalCharacter* aCharacter, bool bIsSecondary) { NativeCall<void, APrimalCharacter*, bool>(this, "APrimalDinoCharacter.SetMountCharacter(APrimalCharacter*,bool)", aCharacter, bIsSecondary); }
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly) { NativeCall<void, float, bool, bool>(this, "APrimalDinoCharacter.StartForceSkelUpdate(float,bool,bool,bool)", ForTime, bForceUpdateMesh, bServerOnly); }
	void ClearMountCharacter(bool bFromMountCharacter, bool bIsSecondary) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ClearMountCharacter(bool,bool)", bFromMountCharacter, bIsSecondary); }
	bool CanMount(APrimalCharacter* aCharacter, bool bIsSecondary) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalDinoCharacter.CanMount(APrimalCharacter*,bool)", aCharacter, bIsSecondary); }
	static APrimalDinoCharacter* SpawnDino(UWorld* World, TSubclassOf<APrimalDinoCharacter> DinoClass, UE::Math::TVector<double> SpawnLoc, UE::Math::TRotator<double> SpawnRot, float LevelMultiplier, int ExtraLevelOffset, bool AddLevelOffsetBeforeMultiplier, bool bOverrideBaseNPCLevel, int BaseLevelOverrideValue, bool bNPCDontWander, float NPCAIRangeMultiplier, int NPCAbsoluteBaseLevel, bool bSpawnWithoutCapsuleOffset, bool shouldGender, bool makeFemale, TSubclassOf<UPrimalEscortComponent> EscortClass = {}) { return NativeCall<APrimalDinoCharacter*, UWorld*, TSubclassOf<APrimalDinoCharacter>&, UE::Math::TVector<double>, UE::Math::TRotator<double>, float, int, bool, bool, int, bool, float, int, bool, bool, bool, TSubclassOf<UPrimalEscortComponent>&>(nullptr, "APrimalDinoCharacter.SpawnDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,int,bool,bool,int,bool,float,int,bool,bool,bool,TSubclassOf<UPrimalEscortComponent>)", World, DinoClass, SpawnLoc, SpawnRot, LevelMultiplier, ExtraLevelOffset, AddLevelOffsetBeforeMultiplier, bOverrideBaseNPCLevel, BaseLevelOverrideValue, bNPCDontWander, NPCAIRangeMultiplier, NPCAbsoluteBaseLevel, bSpawnWithoutCapsuleOffset, shouldGender, makeFemale, EscortClass); }
	void UpdateNextAllowedMatingTime(long double fromTime) { NativeCall<void, long double>(this, "APrimalDinoCharacter.UpdateNextAllowedMatingTime(double)", fromTime); }
	void InitDownloadedTamedDino(AShooterPlayerController* TamerController, int AltTeam) { NativeCall<void, AShooterPlayerController*, int>(this, "APrimalDinoCharacter.InitDownloadedTamedDino(AShooterPlayerController*,int,bool)", TamerController, AltTeam); }
	void NetUpdateDinoOwnerData_Implementation(const FString* NewOwningPlayerName, int NewOwningPlayerID) { NativeCall<void, const FString*, int>(this, "APrimalDinoCharacter.NetUpdateDinoOwnerData_Implementation(FString&,int)", NewOwningPlayerName, NewOwningPlayerID); }
	bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalDinoCharacter.RemoteInventoryAllowViewing(APlayerController*)", ForPC); }
	bool ForceAllowBackwardsMovement() { return NativeCall<bool>(this, "APrimalDinoCharacter.ForceAllowBackwardsMovement()"); }
	bool CanDragCharacter(APrimalCharacter* PrimalCharacter, bool bIgnoreWeight) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalDinoCharacter.CanDragCharacter(APrimalCharacter*,bool)", PrimalCharacter, bIgnoreWeight); }
	bool IsTaming() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsTaming()"); }
	void UpdateWakingTame(float DeltaTime) { NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateWakingTame(float)", DeltaTime); }
	void FedWakingTameDino_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.FedWakingTameDino_Implementation()"); }
	void AddStructure(APrimalStructure* Structure, UE::Math::TVector<double>* RelLoc, UE::Math::TRotator<double>* RelRot, FName BoneName) { NativeCall<void, APrimalStructure*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FName>(this, "APrimalDinoCharacter.AddStructure(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FName)", Structure, RelLoc, RelRot, BoneName); }
	void RemoveStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.RemoveStructure(APrimalStructure*)", Structure); }
	void InitializeInvisiableSaddle() { NativeCall<void>(this, "APrimalDinoCharacter.InitializeInvisiableSaddle()"); }
	void ServerUploadCharacter(AShooterPlayerController* UploadedBy) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.ServerUploadCharacter(AShooterPlayerController*)", UploadedBy); }
	UAnimMontage* GetPoopAnimation(bool bForcePoop) { return NativeCall<UAnimMontage*, bool>(this, "APrimalDinoCharacter.GetPoopAnimation(bool)", bForcePoop); }
	void EmitPoop() { NativeCall<void>(this, "APrimalDinoCharacter.EmitPoop()"); }
	bool AddWildGeneTraits(bool bForceReRoll) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.AddWildGeneTraits(bool)", bForceReRoll); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalDinoCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	USkeletalMeshComponent* GetSaddleMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "APrimalDinoCharacter.GetSaddleMeshComponent()"); }
	void CheckForWildAmbientHarvesting() { NativeCall<void>(this, "APrimalDinoCharacter.CheckForWildAmbientHarvesting()"); }
	void OverrideRandomWanderLocation_Implementation(const UE::Math::TVector<double>* originalDestination, UE::Math::TVector<double>* inVec) { NativeCall<void, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.OverrideRandomWanderLocation_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", originalDestination, inVec); }
	bool OverrideFinalWanderLocation_Implementation(UE::Math::TVector<double>* outVec) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.OverrideFinalWanderLocation_Implementation(UE::Math::TVector<double>&)", outVec); }
	bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "APrimalDinoCharacter.AllowEquippingItemType(EPrimalEquipmentType::Type)", equipmentType); }
	void OnPressProne() { NativeCall<void>(this, "APrimalDinoCharacter.OnPressProne()"); }
	void OnReleaseProne() { NativeCall<void>(this, "APrimalDinoCharacter.OnReleaseProne()"); }
	void OnPressReload() { NativeCall<void>(this, "APrimalDinoCharacter.OnPressReload()"); }
	void OnReleaseReload() { NativeCall<void>(this, "APrimalDinoCharacter.OnReleaseReload()"); }
	void OnPressCrouch() { NativeCall<void>(this, "APrimalDinoCharacter.OnPressCrouch()"); }
	void OnReleaseCrouch() { NativeCall<void>(this, "APrimalDinoCharacter.OnReleaseCrouch()"); }
	void DoDinoCrouch() { NativeCall<void>(this, "APrimalDinoCharacter.DoDinoCrouch()"); }
	void OnPressCrouchProneToggle() { NativeCall<void>(this, "APrimalDinoCharacter.OnPressCrouchProneToggle()"); }
	void OnReleaseCrouchProneToggle() { NativeCall<void>(this, "APrimalDinoCharacter.OnReleaseCrouchProneToggle()"); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn*>(this, "APrimalDinoCharacter.NotifyBumpedPawn(APawn*)", BumpedPawn); }
	void NotifyBumpedStructure(AActor* BumpedStructure) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.NotifyBumpedStructure(AActor*)", BumpedStructure); }
	float GetBabyScale() { return NativeCall<float>(this, "APrimalDinoCharacter.GetBabyScale()"); }
	void StartRepair(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.StartRepair(AShooterPlayerController*)", ForPC); }
	void RepairCheckTimer() { NativeCall<void>(this, "APrimalDinoCharacter.RepairCheckTimer()"); }
	bool InitializeForReplicatedBasing() { return NativeCall<bool>(this, "APrimalDinoCharacter.InitializeForReplicatedBasing()"); }
	void AddBasedPawn(AActor* anPawn) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.AddBasedPawn(AActor*)", anPawn); }
	void RemoveBasedPawn(AActor* anPawn) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.RemoveBasedPawn(AActor*)", anPawn); }
	bool AllowMovementMode(EMovementMode NewMovementMode, unsigned __int8 NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned __int8>(this, "APrimalDinoCharacter.AllowMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	void OnRep_bBonesHidden() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_bBonesHidden()"); }
	void SetBabyAge(float TheAge) { NativeCall<void, float>(this, "APrimalDinoCharacter.SetBabyAge(float)", TheAge); }
	void ApplyBoneModifiers(bool bForce, bool bForceOnDedicated) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ApplyBoneModifiers(bool,bool)", bForce, bForceOnDedicated); }
	void ApplyGestationBoneModifiers() { NativeCall<void>(this, "APrimalDinoCharacter.ApplyGestationBoneModifiers()"); }
	float GetAttachedSoundPitchMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetAttachedSoundPitchMultiplier()"); }
	float GetAttachedSoundVolumeMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetAttachedSoundVolumeMultiplier()"); }
	bool Poop(bool bForcePoop) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.Poop(bool)", bForcePoop); }
	float GetBaseDragWeight() { return NativeCall<float>(this, "APrimalDinoCharacter.GetBaseDragWeight(bool)"); }
	void ServerUpdateBabyAge(float overrideAgePercent) { NativeCall<void, float>(this, "APrimalDinoCharacter.ServerUpdateBabyAge(float)", overrideAgePercent); }
	void ServerUpdateGestation() { NativeCall<void>(this, "APrimalDinoCharacter.ServerUpdateGestation()"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalDinoCharacter.GetHealthPercentage()"); }
	void UpdateMating() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateMating()"); }
	void DoMate(APrimalDinoCharacter* WithMate) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.DoMate(APrimalDinoCharacter*)", WithMate); }
	void DoMate_Implementation(APrimalDinoCharacter* WithMate) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.DoMate_Implementation(APrimalDinoCharacter*)", WithMate); }
	ADroppedItem* CreateCloneFertilizedEgg(UE::Math::TVector<double> AtLoc, UE::Math::TRotator<double> AtRot, TSubclassOf<ADroppedItem> DroppedItemTemplateOverride, int NumMutationsToAdd, bool AddGeneTraits, bool CopyGeneTraits) { return NativeCall<ADroppedItem*, UE::Math::TVector<double>, UE::Math::TRotator<double>, TSubclassOf<ADroppedItem>&, int, bool, bool>(this, "APrimalDinoCharacter.CreateCloneFertilizedEgg(UE::Math::TVector<double>,UE::Math::TRotator<double>,TSubclassOf<ADroppedItem>,int,bool,bool)", AtLoc, AtRot, DroppedItemTemplateOverride, NumMutationsToAdd, AddGeneTraits, CopyGeneTraits); }
	static APrimalDinoCharacter* BPStaticCreateBabyDino(UWorld* TheWorld, TSubclassOf<APrimalDinoCharacter> EggDinoClassToSpawn, const UE::Math::TVector<double>* theGroundLoc, float actorRotationYaw, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggColorSetIndices, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggNumberOfLevelUpPointsApplied, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggMutationsApplied, float EggTamedIneffectivenessModifier, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestors, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestorsMale, int NotifyTeamOverride, int EggRandomMutationsFemale, int EggRandomMutationsMale, int EggGenderOverride) { return NativeCall<APrimalDinoCharacter*, UWorld*, TSubclassOf<APrimalDinoCharacter>, const UE::Math::TVector<double>*, float, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, float, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, int, int, int, int>(nullptr, "APrimalDinoCharacter.BPStaticCreateBabyDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,APrimalDinoCharacter*&,APrimalDinoCharacter*&,int,int,int,int)", TheWorld, EggDinoClassToSpawn, theGroundLoc, actorRotationYaw, EggColorSetIndices, EggNumberOfLevelUpPointsApplied, EggMutationsApplied, EggTamedIneffectivenessModifier, EggDinoAncestors, EggDinoAncestorsMale, NotifyTeamOverride, EggRandomMutationsFemale, EggRandomMutationsMale, EggGenderOverride); }
	//     static APrimalDinoCharacter* StaticCreateBabyDino(UWorld* theWorld, TSubclassOf<APrimalDinoCharacter> EggDinoClassToSpawn, const UE::Math::TVector<double>* theGroundLoc, float actorRotationYaw, unsigned __int8* EggColorSetIndices, unsigned __int8* EggNumberOfLevelUpPointsApplied, unsigned __int8* EggMutationsApplied, float EggTamedIneffectivenessModifier, int NotifyTeamOverride, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestors, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestorsMale, int EggRandomMutationsFemale, int EggRandomMutationsMale, int EggGenderOverride) { return NativeCall<APrimalDinoCharacter*, UWorld*, TSubclassOf<APrimalDinoCharacter>, const UE::Math::TVector<double>*, float, unsigned __int8*, unsigned __int8*, unsigned __int8*, float, int, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, int, int, int>(nullptr, "APrimalDinoCharacter.StaticCreateBabyDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,unsignedchar*,unsignedchar*,unsignedchar*,float,int,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,int,int,int,bool)", theWorld, EggDinoClassToSpawn, theGroundLoc, actorRotationYaw, EggColorSetIndices, EggNumberOfLevelUpPointsApplied, EggMutationsApplied, EggTamedIneffectivenessModifier, NotifyTeamOverride, EggDinoAncestors, EggDinoAncestorsMale, EggRandomMutationsFemale, EggRandomMutationsMale, EggGenderOverride); }
	// FUNCTION MISSING: APrimalDinoCharacter.StaticCreateBabyDino(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,unsignedchar*,unsignedchar*,unsignedchar*,float,int,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>*,int,int,int,bool)
	void UpdateGang() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateGang()"); }
	bool AllowParallelAnimations(USkeletalMeshComponent* forComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "APrimalDinoCharacter.AllowParallelAnimations(USkeletalMeshComponent*)", forComp); }
	bool WantsPerFrameSkeletalAnimationTicking(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalDinoCharacter.WantsPerFrameSkeletalAnimationTicking()", a2); }
	TSubclassOf<UDamageType>* BlueprintOverrideHarvestDamageType_Implementation(TSubclassOf<UDamageType>* result, float* OutHarvestDamageMultiplier) { return NativeCall<TSubclassOf<UDamageType> *, TSubclassOf<UDamageType>*, float*>(this, "APrimalDinoCharacter.BlueprintOverrideHarvestDamageType_Implementation(float&)", result, OutHarvestDamageMultiplier); }
	float GetGravityZScale() { return NativeCall<float>(this, "APrimalDinoCharacter.GetGravityZScale()"); }
	bool ForceAllowAccelerationRotationWhenFalling() { return NativeCall<bool>(this, "APrimalDinoCharacter.ForceAllowAccelerationRotationWhenFalling()"); }
	bool ShouldDisableControllerDesiredRotation() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldDisableControllerDesiredRotation()"); }
	bool AllowExtendedCraftingFunctionality() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowExtendedCraftingFunctionality()"); }
	void UpdateTribeGroupRanks_Implementation(unsigned __int8 NewTribeGroupPetOrderingRank, unsigned __int8 NewTribeGroupPetRidingRank) { NativeCall<void, unsigned __int8, unsigned __int8>(this, "APrimalDinoCharacter.UpdateTribeGroupRanks_Implementation(unsignedchar,unsignedchar)", NewTribeGroupPetOrderingRank, NewTribeGroupPetRidingRank); }
	void WasPushed(ACharacter* ByOtherCharacter, UE::Math::TVector<double>* PushDirection) { NativeCall<void, ACharacter*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.WasPushed(ACharacter*,UE::Math::TVector<double>)", ByOtherCharacter, PushDirection); }
	float GetAIFollowStoppingDistanceMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetAIFollowStoppingDistanceMultiplier()"); }
	void UpdateImprintingDetails_Implementation(const FString* NewImprinterName, const FString* NewImprinterPlayerUniqueNetId) { NativeCall<void, const FString*, const FString*>(this, "APrimalDinoCharacter.UpdateImprintingDetails_Implementation(FString&,FString&)", NewImprinterName, NewImprinterPlayerUniqueNetId); }
	void UpdateImprintingQuality_Implementation(float NewImprintingQuality) { NativeCall<void, float>(this, "APrimalDinoCharacter.UpdateImprintingQuality_Implementation(float)", NewImprintingQuality); }
	void UpdateBabyCuddling_Implementation(long double NewBabyNextCuddleTime, unsigned __int8 NewBabyCuddleType, TSubclassOf<UPrimalItem> NewBabyCuddleFood) { NativeCall<void, long double, unsigned __int8, TSubclassOf<UPrimalItem>&>(this, "APrimalDinoCharacter.UpdateBabyCuddling_Implementation(double,unsignedchar,TSubclassOf<UPrimalItem>)", NewBabyNextCuddleTime, NewBabyCuddleType, NewBabyCuddleFood); }
	float GetBabyCuddleInterval() { return NativeCall<float>(this, "APrimalDinoCharacter.GetBabyCuddleInterval()"); }
	TSubclassOf<UPrimalItem>* GetBabyCuddleFood(TSubclassOf<UPrimalItem>* result) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*>(this, "APrimalDinoCharacter.GetBabyCuddleFood()", result); }
	void IncrementImprintingQuality() { NativeCall<void>(this, "APrimalDinoCharacter.IncrementImprintingQuality()"); }
	void AddedImprintingQuality_Implementation(float Amount) { NativeCall<void, float>(this, "APrimalDinoCharacter.AddedImprintingQuality_Implementation(float)", Amount); }
	bool AllowWakingTame_Implementation(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalDinoCharacter.AllowWakingTame_Implementation(APlayerController*)", ForPC); }
	float GetBaseTargetingDesire(const ITargetableInterface* Attacker) { return NativeCall<float, const ITargetableInterface*>(this, "APrimalDinoCharacter.GetBaseTargetingDesire(ITargetableInterface*)", Attacker); }
	void UpdateUnstasisFlags() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateUnstasisFlags()"); }
	void UpdateStasisFlags() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateStasisFlags()"); }
	bool IsVehicle() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsVehicle()"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APrimalDinoCharacter.PostNetReceiveLocationAndRotation()"); }
	void ResetTakingOff() { NativeCall<void>(this, "APrimalDinoCharacter.ResetTakingOff()"); }
	void FireMultipleProjectiles_Implementation(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* Locations, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* Directions, bool bScaleProjectileDamageByDinoDamage) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalDinoCharacter.FireMultipleProjectiles_Implementation(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool)", Locations, Directions, bScaleProjectileDamageByDinoDamage); }
	bool IsMissionDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsMissionDino()"); }
	bool IsInSingletonMission() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsInSingletonMission()"); }
	void RemoveDinoReferenceFromLatchingStructure() { NativeCall<void>(this, "APrimalDinoCharacter.RemoveDinoReferenceFromLatchingStructure()"); }
	UPrimalItem* GiveSaddle(TSubclassOf<UPrimalItem> SaddleType, float Quality, float MinRandomQuality, bool bAutoEquip) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>&, float, float, bool>(this, "APrimalDinoCharacter.GiveSaddle(TSubclassOf<UPrimalItem>,float,float,bool)", SaddleType, Quality, MinRandomQuality, bAutoEquip); }
	UPrimalItem* GiveSaddleFromString(const FString* BlueprintPath, float Quality, float MinRandomQuality, bool bAutoEquip) { return NativeCall<UPrimalItem*, const FString*, float, float, bool>(this, "APrimalDinoCharacter.GiveSaddleFromString(FString&,float,float,bool)", BlueprintPath, Quality, MinRandomQuality, bAutoEquip); }
	void StartSurfaceCameraForPassengers(float yaw, float pitch, float roll) { NativeCall<void, float, float, float>(this, "APrimalDinoCharacter.StartSurfaceCameraForPassengers(float,float,float)", yaw, pitch, roll); }
	TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* GetPassengers(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetPassengers()", result); }
	void GetPassengersAndSeatIndexes(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* Passengers, TArray<int, TSizedDefaultAllocator<32> >* Indexes) { NativeCall<void, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetPassengersAndSeatIndexes(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", Passengers, Indexes); }
	bool ShouldIgnoreMoveCombiningOverlap() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldIgnoreMoveCombiningOverlap()"); }
	bool AllowMountedWeaponry(bool bIgnoreCurrentWeapon, bool bWeaponForcesMountedWeaponry) { return NativeCall<bool, bool, bool>(this, "APrimalDinoCharacter.AllowMountedWeaponry(bool,bool)", bIgnoreCurrentWeapon, bWeaponForcesMountedWeaponry); }
	void ModifyDesiredRotation(UE::Math::TRotator<double>* InDesiredRotation, float DeltaTime) { NativeCall<void, UE::Math::TRotator<double>*, float>(this, "APrimalDinoCharacter.ModifyDesiredRotation(UE::Math::TRotator<double>&,float,bool&)", InDesiredRotation, DeltaTime); }
	void GiveDeathDossier() { NativeCall<void>(this, "APrimalDinoCharacter.GiveDeathDossier()"); }
	//     void ServerSetRiderMountedWeaponRotation_Implementation(UE::Math::TRotator<double>* InVal) { NativeCall<void, UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.ServerSetRiderMountedWeaponRotation_Implementation(UE::Math::TRotator<double>)", InVal); }
	// FUNCTION MISSING: APrimalDinoCharacter.ServerSetRiderMountedWeaponRotation_Implementation(UE::Math::TRotator<double>)
	void DoNeuter_Implementation() { NativeCall<void>(this, "APrimalDinoCharacter.DoNeuter_Implementation()"); }
	bool OverrideForcePreventExitingWater() { return NativeCall<bool>(this, "APrimalDinoCharacter.OverrideForcePreventExitingWater()"); }
	void SetDynamicMusic(USoundBase* newMusic) { NativeCall<void, USoundBase*>(this, "APrimalDinoCharacter.SetDynamicMusic(USoundBase*)", newMusic); }
	FLinearColor* GetDinoColor(FLinearColor* result, int ColorRegionIndex) { return NativeCall<FLinearColor*, FLinearColor*, int>(this, "APrimalDinoCharacter.GetDinoColor(int)", result, ColorRegionIndex); }
	FLinearColor* GetColorForColorizationRegion(FLinearColor* result, int ColorRegionIndex, int ColorIndexOverride) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "APrimalDinoCharacter.GetColorForColorizationRegion(int,int)", result, ColorRegionIndex, ColorIndexOverride); }
	bool SpecialActorWantsPerFrameTicking(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalDinoCharacter.SpecialActorWantsPerFrameTicking()", a2); }
	int IsActorTickAllowed() { return NativeCall<int>(this, "APrimalDinoCharacter.IsActorTickAllowed()"); }
	void IncrementNumTamedDinos() { NativeCall<void>(this, "APrimalDinoCharacter.IncrementNumTamedDinos()"); }
	UAnimMontage* GetDinoLevelUpAnimation_Implementation() { return NativeCall<UAnimMontage*>(this, "APrimalDinoCharacter.GetDinoLevelUpAnimation_Implementation()"); }
	bool ShouldStillAllowRequestedMoveAcceleration() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldStillAllowRequestedMoveAcceleration()"); }
	void GetDinoData(FARKDinoData* OutDinoData) { NativeCall<void, FARKDinoData*>(this, "APrimalDinoCharacter.GetDinoData(FARKDinoData&)", OutDinoData); }
	static APrimalDinoCharacter* SpawnFromDinoData(const FARKDinoData* InDinoData, UWorld* InWorld, const UE::Math::TVector<double>* AtLocation, const UE::Math::TRotator<double>* AtRotation, int ForTeam, bool bGenerateNewDinoID, AShooterPlayerController* TamerController) { return NativeCall<APrimalDinoCharacter*, const FARKDinoData*, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, int, bool, AShooterPlayerController*>(nullptr, "APrimalDinoCharacter.SpawnFromDinoData(FARKDinoData&,UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int,bool,AShooterPlayerController*)", InDinoData, InWorld, AtLocation, AtRotation, ForTeam, bGenerateNewDinoID, TamerController); }
	void CheckDinoDuped(bool* dupedDino) { NativeCall<void, bool*>(this, "APrimalDinoCharacter.CheckDinoDuped(bool&)", dupedDino); }
	static APrimalDinoCharacter* SpawnFromDinoDataEx(const FARKDinoData* InDinoData, UWorld* InWorld, const UE::Math::TVector<double>& AtLocation, const UE::Math::TRotator<double>& AtRotation, bool& dupedDino, int ForTeam, bool bGenerateNewDinoID, AShooterPlayerController* TamerController, bool bDontUpdateDownloadTime, bool bSkipControllerChecks) { return NativeCall<APrimalDinoCharacter*, const FARKDinoData*, UWorld*, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool&, int, bool, AShooterPlayerController*, bool, bool>(nullptr, "APrimalDinoCharacter.SpawnFromDinoDataEx(FARKDinoData&,UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool&,int,bool,AShooterPlayerController*,bool,bool)", InDinoData, InWorld, AtLocation, AtRotation, dupedDino, ForTeam, bGenerateNewDinoID, TamerController, bDontUpdateDownloadTime, bSkipControllerChecks); }
	void SetLastMovementDesiredRotation(const UE::Math::TRotator<double>* InRotation) { NativeCall<void, const UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.SetLastMovementDesiredRotation(UE::Math::TRotator<double>&)", InRotation); }
	USoundBase* GetDinoTameSound_Implementation() { return NativeCall<USoundBase*>(this, "APrimalDinoCharacter.GetDinoTameSound_Implementation()"); }
	void CheckForTamedFoodConsumption(int Steps) { static_cast<void>(NativeCall<bool, int>(this, "APrimalDinoCharacter.CheckForTamedFoodConsumption(int)", Steps)); }
	bool ShouldIgnoreHitResult(const UWorld* InWorld, const FHitResult* TestHit, const UE::Math::TVector<double>* MovementDirDenormalized) { return NativeCall<bool, const UWorld*, const FHitResult*, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", InWorld, TestHit, MovementDirDenormalized); }
	bool WalkingAllowCheckFloor(const UE::Math::TVector<double>* DeltaWalk) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.WalkingAllowCheckFloor(UE::Math::TVector<double>&)", DeltaWalk); }
	bool WalkingAllowCheckFall(const UE::Math::TVector<double>* DeltaWalk) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.WalkingAllowCheckFall(UE::Math::TVector<double>&)", DeltaWalk); }
	float GetGestationTimeRemaining() { return NativeCall<float>(this, "APrimalDinoCharacter.GetGestationTimeRemaining()"); }
	int GetTamedDinoCountCost() { return NativeCall<int>(this, "APrimalDinoCharacter.GetTamedDinoCountCost()"); }
	void ClearAllSaddleStructures(int a2) { NativeCall<void, int>(this, "APrimalDinoCharacter.ClearAllSaddleStructures()", a2); }
	bool IsReadyToUpload(UWorld* theWorld) { return NativeCall<bool, UWorld*>(this, "APrimalDinoCharacter.IsReadyToUpload(UWorld*)", theWorld); }
	void ImprintOnPlayerTarget(AShooterPlayerController* ForPC, bool bIgnoreMaxTameLimit) { NativeCall<void, AShooterPlayerController*, bool>(this, "APrimalDinoCharacter.ImprintOnPlayerTarget(AShooterPlayerController*,bool)", ForPC, bIgnoreMaxTameLimit); }
	void SetRidingDinoAsPassenger(APrimalDinoCharacter* aDino, const FSaddlePassengerSeatDefinition* SeatDefinition) { NativeCall<void, APrimalDinoCharacter*, const FSaddlePassengerSeatDefinition*>(this, "APrimalDinoCharacter.SetRidingDinoAsPassenger(APrimalDinoCharacter*,FSaddlePassengerSeatDefinition&)", aDino, SeatDefinition); }
	void ClearRidingDinoAsPassenger(bool bFromDino) { NativeCall<void, bool>(this, "APrimalDinoCharacter.ClearRidingDinoAsPassenger(bool)", bFromDino); }
	void SpawnNewAIController(TSubclassOf<AController> NewAIController, UBehaviorTree* MissionBehaviorTreeOverride) { NativeCall<void, TSubclassOf<AController>&, UBehaviorTree*>(this, "APrimalDinoCharacter.SpawnNewAIController(TSubclassOf<AController>,UBehaviorTree*)", NewAIController, MissionBehaviorTreeOverride); }
	int GetSeatIndexForPassenger(APrimalCharacter* PassengerChar) { return NativeCall<int, APrimalCharacter*>(this, "APrimalDinoCharacter.GetSeatIndexForPassenger(APrimalCharacter*)", PassengerChar); }
	bool IsPrimalCharFriendly(APrimalCharacter* primalChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.IsPrimalCharFriendly(APrimalCharacter*)", primalChar); }
	void PrepareForSaving() { NativeCall<void>(this, "APrimalDinoCharacter.PrepareForSaving()"); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalDinoCharacter.FinalLoadedFromSaveGame()"); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetDebugInfoString()", result); }
	bool GetAllAttachedCharsInternal(TSet<APrimalCharacter*, DefaultKeyFuncs<APrimalCharacter*, 0>, FDefaultSetAllocator>* AttachedChars, const APrimalCharacter* OriginalChar, bool* bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TSet<APrimalCharacter*, DefaultKeyFuncs<APrimalCharacter*, 0>, FDefaultSetAllocator>*, const APrimalCharacter*, bool*, const bool, const bool>(this, "APrimalDinoCharacter.GetAllAttachedCharsInternal(TSet<APrimalCharacter*,DefaultKeyFuncs<APrimalCharacter*,0>,FDefaultSetAllocator>&,APrimalCharacter*,bool,bool,bool)", AttachedChars, OriginalChar, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	bool ShouldForceDedicatedMovementTickEveryFrame() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldForceDedicatedMovementTickEveryFrame()"); }
	bool ShouldShowDinoTooltip(AShooterHUD* HUD) { return NativeCall<bool, AShooterHUD*>(this, "APrimalDinoCharacter.ShouldShowDinoTooltip(AShooterHUD&)", HUD); }
	void OverrideBasedCharactersCameraInterpSpeed(APrimalCharacter* ForBasedChar, const float DefaultTPVCameraSpeedInterpMultiplier, const float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpMultiplier, float* TPVOffsetInterpSpeed) { NativeCall<void, APrimalCharacter*, const float, const float, float*, float*>(this, "APrimalDinoCharacter.OverrideBasedCharactersCameraInterpSpeed(APrimalCharacter*,float,float,float&,float&)", ForBasedChar, DefaultTPVCameraSpeedInterpMultiplier, DefaultTPVOffsetInterpSpeed, TPVCameraSpeedInterpMultiplier, TPVOffsetInterpSpeed); }
	bool ShouldDisableBasedCharactersCameraInterpolation(APrimalCharacter* ForBasedChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.ShouldDisableBasedCharactersCameraInterpolation(APrimalCharacter*)", ForBasedChar); }
	bool CanDinoAttackTargetsWithoutRider() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanDinoAttackTargetsWithoutRider()"); }
	int GetUntamedTargetingTeam() { return NativeCall<int>(this, "APrimalDinoCharacter.GetUntamedTargetingTeam()"); }
	void OnVersionChange(bool* doDestroy) { NativeCall<void, bool*>(this, "APrimalDinoCharacter.OnVersionChange(bool&)", doDestroy); }
	bool BPCheckSeven_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPCheckSeven_Implementation()"); }
	void ProcessOrderMoveTo(UE::Math::TVector<double>* MoveToLoc, bool bClearFollowTargets) { NativeCall<void, UE::Math::TVector<double>*, bool>(this, "APrimalDinoCharacter.ProcessOrderMoveTo(UE::Math::TVector<double>,bool)", MoveToLoc, bClearFollowTargets); }
	void ProcessOrderAttackTarget(AActor* TheTarget, bool bClearFollowTargets) { NativeCall<void, AActor*, bool>(this, "APrimalDinoCharacter.ProcessOrderAttackTarget(AActor*,bool)", TheTarget, bClearFollowTargets); }
	TArray<APrimalStructureExplosive*, TSizedDefaultAllocator<32> >* GetAllAttachedExplosives(TArray<APrimalStructureExplosive*, TSizedDefaultAllocator<32> >* result, bool bInlcudeAttachedChars) { return NativeCall<TArray<APrimalStructureExplosive*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructureExplosive*, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalDinoCharacter.GetAllAttachedExplosives(bool)", result, bInlcudeAttachedChars); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetColorSetNamesAsArray(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetColorSetNamesAsArray()", result); }
	FString* GetColorSetInidcesAsString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetColorSetInidcesAsString()", result); }
	void AddDinoToActiveTamingArray(TWeakObjectPtr<AController> NotifyPlayer) { NativeCall<void, TWeakObjectPtr<AController>>(this, "APrimalDinoCharacter.AddDinoToActiveTamingArray(TWeakObjectPtr<AController,FWeakObjectPtr>)", NotifyPlayer); }
	void RemoveDinoToActiveTamingArray() { NativeCall<void>(this, "APrimalDinoCharacter.RemoveDinoToActiveTamingArray()"); }
	void InternalRemoveDinoFromTamingArray() { NativeCall<void>(this, "APrimalDinoCharacter.InternalRemoveDinoFromTamingArray()"); }
	bool IsAllowedToTransfer(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(this, "APrimalDinoCharacter.IsAllowedToTransfer(UObject*)", WorldContextObject); }
	void CopySettingsToDinosInRange(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController*, int>(this, "APrimalDinoCharacter.CopySettingsToDinosInRange(APlayerController*,int)", ForPC, UseIndex); }
	void CopySettingsToOtherDino_Implementation(APlayerController* ForPC, APrimalDinoCharacter* FromDino, APrimalDinoCharacter* OtherDino, int SettingTypeUseIndex) { NativeCall<void, APlayerController*, APrimalDinoCharacter*, APrimalDinoCharacter*, int>(this, "APrimalDinoCharacter.CopySettingsToOtherDino_Implementation(APlayerController*,APrimalDinoCharacter*,APrimalDinoCharacter*,int)", ForPC, FromDino, OtherDino, SettingTypeUseIndex); }
	TSubclassOf<APrimalDinoCharacter>* GetBedFilterClass_Implementation(TSubclassOf<APrimalDinoCharacter>* result) { return NativeCall<TSubclassOf<APrimalDinoCharacter> *, TSubclassOf<APrimalDinoCharacter>*>(this, "APrimalDinoCharacter.GetBedFilterClass_Implementation()", result); }
	bool AllowSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "APrimalDinoCharacter.AllowSpawnForPlayer(AShooterPlayerController*,bool)", PC, bCheckCooldownTime); }
	float GetNetStasisAndRangeMultiplier(bool bIsForNetworking) { return NativeCall<float, bool>(this, "APrimalDinoCharacter.GetNetStasisAndRangeMultiplier(bool)", bIsForNetworking); }
	UMeshComponent* GetPaintingMesh_Implementation() { return NativeCall<UMeshComponent*>(this, "APrimalDinoCharacter.GetPaintingMesh_Implementation(int)"); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanBePainted()"); }
	void SpawnedPlayerFor_Implementation(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalDinoCharacter.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)", PC, ForPawn); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APrimalDinoCharacter.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool IsInFlyerPreventionVolume() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsInFlyerPreventionVolume()"); }
	void RequestDisplayEmbryoData(APlayerController* ForPC, bool bEnable) { NativeCall<void, APlayerController*, bool>(this, "APrimalDinoCharacter.RequestDisplayEmbryoData(APlayerController*,bool)", ForPC, bEnable); }
	void RequestTerminateEmbryo(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalDinoCharacter.RequestTerminateEmbryo(APlayerController*)", ForPC); }
	void GetGestationData(FUnreplicatedEggData* GestationData) { NativeCall<void, FUnreplicatedEggData*>(this, "APrimalDinoCharacter.GetGestationData(FUnreplicatedEggData&)", GestationData); }
	void SetGestationData(const FUnreplicatedEggData* GestationData) { NativeCall<void, const FUnreplicatedEggData*>(this, "APrimalDinoCharacter.SetGestationData(FUnreplicatedEggData&)", GestationData); }
	void NotifyClientsEmbryoTerminated_Implementation(int a2) { NativeCall<void, int>(this, "APrimalDinoCharacter.NotifyClientsEmbryoTerminated_Implementation()", a2); }
	void ZoomIn() { NativeCall<void>(this, "APrimalDinoCharacter.ZoomIn()"); }
	void ZoomOut() { NativeCall<void>(this, "APrimalDinoCharacter.ZoomOut()"); }
	float GetZoomMinValue() { return NativeCall<float>(this, "APrimalDinoCharacter.GetZoomMinValue()"); }
	float GetZoomMaxValue() { return NativeCall<float>(this, "APrimalDinoCharacter.GetZoomMaxValue()"); }
	void ChangeCameraZoom(bool bZoomIn, bool bResetDefault) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.ChangeCameraZoom(bool,bool)", bZoomIn, bResetDefault); }
	bool GetCanMutateStat(int StatTypeIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.GetCanMutateStat(int)", StatTypeIndex); }
	float GetRiddenStasisRangeMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetRiddenStasisRangeMultiplier()"); }
	bool IsWildFollowerOtherwiseValidAndLiving() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsWildFollowerOtherwiseValidAndLiving()"); }
	bool IsAWildFollowerKnownServerside() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsAWildFollowerKnownServerside()"); }
	APrimalDinoCharacter* GetFirstValidWildFollowingParentRef() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalDinoCharacter.GetFirstValidWildFollowingParentRef()"); }
	bool BPCanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure> TrapClass, bool bForceTrigger) { return NativeCall<bool, TSubclassOf<APrimalStructure>&, bool>(this, "APrimalDinoCharacter.BPCanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure>,bool)", TrapClass, bForceTrigger); }
	bool IsCurrentAttackStopsMovement() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsCurrentAttackStopsMovement()"); }
	int GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(FName TraitName) { return NativeCall<int, FName>(this, "APrimalDinoCharacter.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(FName)", TraitName); }
	bool SetupAsWildFollowerOfOtherDino(APrimalDinoCharacter* ParentDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.SetupAsWildFollowerOfOtherDino(APrimalDinoCharacter*)", ParentDino); }
	void UpdateWildFollowParentState(AActor* OnlyUpdateThisChild) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.UpdateWildFollowParentState(AActor*)", OnlyUpdateThisChild); }
	void UpdateWildFollowChildState() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateWildFollowChildState()"); }
	bool SetupAsWildBabyOfSingleParent(APrimalDinoCharacter* ParentDino, float DesiredAgeMin, float DesiredAgeMax) { return NativeCall<bool, APrimalDinoCharacter*, float, float>(this, "APrimalDinoCharacter.SetupAsWildBabyOfSingleParent(APrimalDinoCharacter*,float,float)", ParentDino, DesiredAgeMin, DesiredAgeMax); }
	void SetupWildBaby_SetAncestryFromOneParent(APrimalDinoCharacter* ParentDino, FItemNetInfo* GeneticsInfo) { NativeCall<void, APrimalDinoCharacter*, FItemNetInfo*>(this, "APrimalDinoCharacter.SetupWildBaby_SetAncestryFromOneParent(APrimalDinoCharacter*,FItemNetInfo&)", ParentDino, GeneticsInfo); }
	void SetupWildBaby_SetFakeInheritedColorsFromOneParent(APrimalDinoCharacter* ParentDino, FItemNetInfo* GeneticsInfo) { NativeCall<void, APrimalDinoCharacter*, FItemNetInfo*>(this, "APrimalDinoCharacter.SetupWildBaby_SetFakeInheritedColorsFromOneParent(APrimalDinoCharacter*,FItemNetInfo&)", ParentDino, GeneticsInfo); }
	void SetupWildBaby_SetFakeInheritedStatsAndMutationsFromOneParent(APrimalDinoCharacter* ParentDino, FItemNetInfo* GeneticsInfo, float RandomAdjustLevelUpValueType) { NativeCall<void, APrimalDinoCharacter*, FItemNetInfo*, float>(this, "APrimalDinoCharacter.SetupWildBaby_SetFakeInheritedStatsAndMutationsFromOneParent(APrimalDinoCharacter*,FItemNetInfo&,float)", ParentDino, GeneticsInfo, RandomAdjustLevelUpValueType); }
	void SetupWildBaby_ApplyStats(FItemNetInfo* GeneticsInfo) { NativeCall<void, FItemNetInfo*>(this, "APrimalDinoCharacter.SetupWildBaby_ApplyStats(FItemNetInfo&)", GeneticsInfo); }
	float GetPrimalCameraDesiredArmLength(const FPrimalCameraParams* ForCameraParams, float CurrentCameraArmLength, float DefaultCameraArmLength) { return NativeCall<float, const FPrimalCameraParams*, float, float>(this, "APrimalDinoCharacter.GetPrimalCameraDesiredArmLength(FPrimalCameraParams*,float,float)", ForCameraParams, CurrentCameraArmLength, DefaultCameraArmLength); }
	FName* GetDesiredNavmeshGenerationRadiusName_Implementation(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalDinoCharacter.GetDesiredNavmeshGenerationRadiusName_Implementation()", result); }
	void ImprintBabyDino(APlayerController* ForPC, bool SkipNaming) { NativeCall<void, APlayerController*, bool>(this, "APrimalDinoCharacter.ImprintBabyDino(APlayerController*,bool)", ForPC, SkipNaming); }
	int GetScaledMaxWildSpawnLevel(UWorld* World = nullptr) { return NativeCall<int, UWorld*>(this, "APrimalDinoCharacter.GetScaledMaxWildSpawnLevel(UWorld*)", World); }
	FCustomTrackedActorInfo* SetFCustomTrackedDinoInfoMembersByDinoRef(FCustomTrackedActorInfo* result, bool IsFavorited, bool bIsTrackedWaypoint, bool bIsValidForCurrentFilter, int ByPlayerTargetingTeam) { return NativeCall<FCustomTrackedActorInfo*, FCustomTrackedActorInfo*, bool, bool, bool, int>(this, "APrimalDinoCharacter.SetFCustomTrackedDinoInfoMembersByDinoRef(bool,bool,bool,int)", result, IsFavorited, bIsTrackedWaypoint, bIsValidForCurrentFilter, ByPlayerTargetingTeam); }
	void HandleDieIfLeftWaterSpawnDepth() { NativeCall<void>(this, "APrimalDinoCharacter.HandleDieIfLeftWaterSpawnDepth()"); }
	void MultiSetAttachedStructurePickupAllowedBeforeNetworkTime_Implementation(long double NewTime, APrimalStructure* Structure) { NativeCall<void, long double, APrimalStructure*>(this, "APrimalDinoCharacter.MultiSetAttachedStructurePickupAllowedBeforeNetworkTime_Implementation(double,APrimalStructure*)", NewTime, Structure); }
	void BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter* BlendFilter) { NativeCall<void, FBlendFilter*>(this, "APrimalDinoCharacter.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)", BlendFilter); }
	FName* GetAttackerDamageImpactFXAttachSocket(FName* result, UE::Math::TVector<double>* HitLoc) { return NativeCall<FName*, FName*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetAttackerDamageImpactFXAttachSocket(UE::Math::TVector<double>)", result, HitLoc); }
	bool ShouldRestrictCarriedPlayerYaw() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldRestrictCarriedPlayerYaw()"); }
	int GetCurrentCameraModeIndex() { return NativeCall<int>(this, "APrimalDinoCharacter.GetCurrentCameraModeIndex()"); }
	bool AllowSkeletalMeshTicking(USkeletalMeshComponent* meshComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "APrimalDinoCharacter.AllowSkeletalMeshTicking(USkeletalMeshComponent*)", meshComp); }
	float GetEquippedItemDurabilityPercent(FItemNetID itemID) { return NativeCall<float, FItemNetID>(this, "APrimalDinoCharacter.GetEquippedItemDurabilityPercent(FItemNetID)", itemID); }
	void SetEquippedItemDurabilityPercent(FItemNetID itemID, float ItemDurabilityPercentage) { NativeCall<void, FItemNetID, float>(this, "APrimalDinoCharacter.SetEquippedItemDurabilityPercent(FItemNetID,float)", itemID, ItemDurabilityPercentage); }
	void ReplicateDurabilityForEquippedItem(FItemNetID itemID) { NativeCall<void, FItemNetID>(this, "APrimalDinoCharacter.ReplicateDurabilityForEquippedItem(FItemNetID)", itemID); }
	float ModifyArmorDurabilityLostFromDamage(float DamageAmount, float OriginalDurabilityLost, TEnumAsByte<EPrimalEquipmentType::Type> ArmorType) { return NativeCall<float, float, float, TEnumAsByte<EPrimalEquipmentType::Type>>(this, "APrimalDinoCharacter.ModifyArmorDurabilityLostFromDamage(float,float,TEnumAsByte<EPrimalEquipmentType::Type>,UPrimalItem*)", DamageAmount, OriginalDurabilityLost, ArmorType); }
	bool ShouldUseArmorDurabilityVFX() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldUseArmorDurabilityVFX()"); }
	bool ShouldUseDurabilityVar(int VarIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.ShouldUseDurabilityVar(int)", VarIndex); }
	bool ShouldUseDurabilityVarForItemType(TEnumAsByte<EPrimalEquipmentType::Type> TheItemType) { return NativeCall<bool, TEnumAsByte<EPrimalEquipmentType::Type>>(this, "APrimalDinoCharacter.ShouldUseDurabilityVarForItemType(TEnumAsByte<EPrimalEquipmentType::Type>)", TheItemType); }
	bool AllowClaiming(APlayerController* forPlayer) { return NativeCall<bool, APlayerController*>(this, "APrimalDinoCharacter.AllowClaiming(APlayerController*)", forPlayer); }
	static APrimalDinoCharacter* BPStaticCreateBabyDino_V2(UWorld* TheWorld, TSubclassOf<APrimalDinoCharacter> EggDinoClassToSpawn, const UE::Math::TVector<double>& theGroundLoc, float actorRotationYaw, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggColorSetIndices, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggNumberOfLevelUpPointsApplied, TArray<unsigned char, TSizedDefaultAllocator<32> >* EggMutationsApplied, float EggTamedIneffectivenessModifier, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestors, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* EggDinoAncestorsMale, APrimalDinoCharacter** ExtraBaby1, APrimalDinoCharacter** ExtraBaby2, TArray<FName, TSizedDefaultAllocator<32> >* EggDinoGeneTraits, int NotifyTeamOverride, int EggRandomMutationsFemale, int EggRandomMutationsMale, int EggGenderOverride) { return NativeCall<APrimalDinoCharacter*, UWorld*, TSubclassOf<APrimalDinoCharacter>&, const UE::Math::TVector<double>&, float, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, float, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*, APrimalDinoCharacter**, APrimalDinoCharacter**, TArray<FName, TSizedDefaultAllocator<32> >*, int, int, int, int>(nullptr, "APrimalDinoCharacter.BPStaticCreateBabyDino_V2(UWorld*,TSubclassOf<APrimalDinoCharacter>,UE::Math::TVector<double>&,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,float,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>,APrimalDinoCharacter*&,APrimalDinoCharacter*&,TArray<FName,TSizedDefaultAllocator<32>>,int,int,int,int)", TheWorld, EggDinoClassToSpawn, theGroundLoc, actorRotationYaw, EggColorSetIndices, EggNumberOfLevelUpPointsApplied, EggMutationsApplied, EggTamedIneffectivenessModifier, EggDinoAncestors, EggDinoAncestorsMale, ExtraBaby1, ExtraBaby2, EggDinoGeneTraits, NotifyTeamOverride, EggRandomMutationsFemale, EggRandomMutationsMale, EggGenderOverride); }
	bool GetUsesColorizationRegion(int RegionIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.GetUsesColorizationRegion(int)", RegionIndex); }

	FPrimalDinoCharacterSparseClassData* GetPrimalDinoCharacterSparseClassData(EGetSparseClassDataMethod GetMethod)
	{
		return (FPrimalDinoCharacterSparseClassData*)this->ClassPrivateField()->GetSparseClassData(GetMethod);
	}

	inline void SetMyInventoryComponent(UPrimalInventoryComponent* inventory)
	{
		this->MyInventoryComponentField() = inventory;
	}

	double& CheckStructureBaseUnHibernatedStartTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.CheckStructureBaseUnHibernatedStartTime"); }
	unsigned char& StructureRehydrationHoldPrevMovementModeField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.StructureRehydrationHoldPrevMovementMode"); }
	double& LastInAllyRangeSerializedField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastInAllyRangeSerialized"); }
	double& PreventMateBoostUntilTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.PreventMateBoostUntilTime"); }
	double& MaxTamedDinos_SoftTameLimit_MarkedForDeletionTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_MarkedForDeletionTime"); }
	double& LastBabyFlyerFlyTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastBabyFlyerFlyTime"); }
	double& NextTimePlayIdleFidgetAnimationField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.NextTimePlayIdleFidgetAnimation"); }
	double& LastBoostDinoImpulseTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastBoostDinoImpulseTime"); }
	double& LastHasRiderPoopAnimTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastHasRiderPoopAnimTime"); }
	double& NextDedicatedServerBabyUpdateTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.NextDedicatedServerBabyUpdateTime"); }
	double& LastClearMountCharacterBlockedTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastClearMountCharacterBlockedTime"); }
	double& LastMountedRefreshAttachmentTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastMountedRefreshAttachmentTime"); }
	double& LastDealtMeleeDamageTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastDealtMeleeDamageTime"); }
	double& NextTimeUpdateRandomLookAtTargetField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.NextTimeUpdateRandomLookAtTarget"); }
	double& LastTimePlayedIdleFidgetAnimationField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.LastTimePlayedIdleFidgetAnimation"); }
	float& MountCharacterProneOffsetSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MountCharacterProneOffsetSpeed"); }
	float& AdditionalTamingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AdditionalTamingSpeedMultiplier"); }
	float& TamingFoodConsumeIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.TamingFoodConsumeIntervalMax"); }
	float& MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCacheField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCache"); }
	float& OverlapAsTargetCheckTraceZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.OverlapAsTargetCheckTraceZOffset"); }
	float& RandomLookAtBaseSearchRadiusField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtBaseSearchRadius"); }
	float& RandomLookAtDurationMinField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtDurationMin"); }
	float& RandomLookAtDurationMaxField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtDurationMax"); }
	float& RandomLookAtCooldownMinField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtCooldownMin"); }
	float& RandomLookAtCooldownMaxField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtCooldownMax"); }
	float& RandomLookAtChanceToSkipCooldownField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtChanceToSkipCooldown"); }
	float& RandomLookAtTargetMinDotField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtTargetMinDot"); }
	float& RandomLookAtPlayerWeightField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtPlayerWeight"); }
	float& RandomLookAtDinoWeightField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RandomLookAtDinoWeight"); }
	float& ChanceToLookAtNearbyDyingCharacterField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ChanceToLookAtNearbyDyingCharacter"); }
	float& ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInsteadField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInstead"); }
	float& IdleFidgetPlayFrequencyMinField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.IdleFidgetPlayFrequencyMin"); }
	float& IdleFidgetPlayFrequencyMaxField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.IdleFidgetPlayFrequencyMax"); }
	float& EmptyFoodModifierField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.EmptyFoodModifier"); }
	float& RiderTimeThresholdField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.RiderTimeThreshold"); }
	float& CurrentImprintingQualitySpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CurrentImprintingQualitySpeed"); }
	float& bIsPVEField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.bIsPVE"); }
	float& CachedMeshScaledInitialBoundsSizeField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CachedMeshScaledInitialBoundsSize"); }
	float& LengthOfLastPlayedIdleFidgetAnimationField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.LengthOfLastPlayedIdleFidgetAnimation"); }
	int& LimitWildDinoToVolumenIndexField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.LimitWildDinoToVolumenIndex"); }
	int& NewMutationCountField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.NewMutationCount"); }
	int& IndexOfLastPlayedIdleFidgetAnimationField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.IndexOfLastPlayedIdleFidgetAnimation"); }
	int& HarvestableHitCountField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.HarvestableHitCount"); }
	int& MaxHarvestableHitCountField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.MaxHarvestableHitCount"); }
	int& TimesRecentlySetRiderField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.TimesRecentlySetRider"); }
	int& NumberOfTicksAtZeroField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.NumberOfTicksAtZero"); }
	unsigned char& CurrentAttackIndexField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.CurrentAttackIndex"); }
	unsigned char& CurrentPassengerSeatIndexField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.CurrentPassengerSeatIndex"); }
	unsigned char& GestationGenderOverrideField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.GestationGenderOverride"); }
	unsigned char& AttackIndexOfPlayedAnimationField() { return *GetNativePointerField<unsigned char*>(this, "APrimalDinoCharacter.AttackIndexOfPlayedAnimation"); }
	int& CurrentSpecificHarvestResourceIndexField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.CurrentSpecificHarvestResourceIndex"); }
	double& WildBabyNextRunTimeField() { return *GetNativePointerField<double*>(this, "APrimalDinoCharacter.WildBabyNextRunTime"); }
	float& WildBabyMinTimeBetweenRunsField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.WildBabyMinTimeBetweenRuns"); }
	float& FollowingRunDistanceBabyShortField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FollowingRunDistanceBabyShort"); }
	float& FollowingRunDistanceBabyLongField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.FollowingRunDistanceBabyLong"); }
	float& BabySpeedMultiplierWildField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.BabySpeedMultiplierWild"); }
	float& AIFollowStoppingDistanceBabyField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.AIFollowStoppingDistanceBaby"); }
	char& AI_Access_Fails_CountField() { return *GetNativePointerField<char*>(this, "APrimalDinoCharacter.AI_Access_Fails_Count"); }
	float& CachedSignificanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CachedSignificance"); }
	float& CachedPlayerViewportDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.CachedPlayerViewportDistance"); }
	float& MinDistanceSignificanceBasedAnimationBlendField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MinDistanceSignificanceBasedAnimationBlend"); }
	float& MaxDistanceSignificanceBasedAnimationBlendField() { return *GetNativePointerField<float*>(this, "APrimalDinoCharacter.MaxDistanceSignificanceBasedAnimationBlend"); }
	int& PatrolGroupIDField() { return *GetNativePointerField<int*>(this, "APrimalDinoCharacter.PatrolGroupID"); }

	FPrimalDinoCharacterSparseClassData* GetMutablePrimalDinoCharacterSparseClassData() { return const_cast<FPrimalDinoCharacterSparseClassData*>(GetPrimalDinoCharacterSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	FSaddlePassengerSeatDefinition& CurrentPassengerSeatDefinitionField() { return *GetNativePointerField<FSaddlePassengerSeatDefinition*>(this, "APrimalDinoCharacter.CurrentPassengerSeatDefinition"); }
	TArray<FName, TSizedDefaultAllocator<32> >& RandomLookAtIgnoreDinoNameTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.RandomLookAtIgnoreDinoNameTags"); }
	UE::Math::TVector<double>& MountCharacterProneLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.MountCharacterProneLocOffset"); }
	UE::Math::TRotator<double>& MountCharacterProneRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.MountCharacterProneRotOffset"); }
	FString& TamedTimeStampField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.TamedTimeStamp"); }
	FString& DescriptiveNameGenderOverrideMaleField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.DescriptiveNameGenderOverrideMale"); }
	FString& DescriptiveNameGenderOverrideFemaleField() { return *GetNativePointerField<FString*>(this, "APrimalDinoCharacter.DescriptiveNameGenderOverrideFemale"); }
	FName& LimitWildDinoToVolumenTagField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.LimitWildDinoToVolumenTag"); }
	FTimerHandle& CheckStructureBaseUnHibernatedHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.CheckStructureBaseUnHibernatedHandle"); }
	UE::Math::TVector<double>& StructureRehydrationHoldLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.StructureRehydrationHoldLocation"); }
	UE::Math::TRotator<double>& StructureRehydrationHoldRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.StructureRehydrationHoldRotation"); }
	FTimerHandle& GiveDossierTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.GiveDossierTimerHandle"); }
	FName& RiderSkillTreeTagField() { return *GetNativePointerField<FName*>(this, "APrimalDinoCharacter.RiderSkillTreeTag"); }
	TWeakObjectPtr<AVolume, FWeakObjectPtr>& LimitWildDinoToVolumeField() { return *GetNativePointerField<TWeakObjectPtr<AVolume, FWeakObjectPtr>*>(this, "APrimalDinoCharacter.LimitWildDinoToVolume"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& LastAllyLookTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "APrimalDinoCharacter.LastAllyLookTarget"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& CurrentRandomLookAtTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "APrimalDinoCharacter.CurrentRandomLookAtTarget"); }
	UAnimMontage*& CurrentIdleFidgetMontageField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalDinoCharacter.CurrentIdleFidgetMontage"); }
	ECollisionResponse& PreviousBabyCapsuleWeaponTraceChannelResponseField() { return *GetNativePointerField<ECollisionResponse*>(this, "APrimalDinoCharacter.PreviousBabyCapsuleWeaponTraceChannelResponse"); }
	FTimerHandle& UpdateWildBabyNextRunTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalDinoCharacter.UpdateWildBabyNextRunTimerHandle"); }
	UE::Math::TVector<double>& PatrolGroupOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.PatrolGroupOffset"); }
	BitFieldValue<bool, unsigned char> bAllowTreadWater() { return { this, "APrimalDinoCharacter.bAllowTreadWater"}; }
	BitFieldValue<bool, unsigned char> bCanSecondaryMountOnHumans() { return { this, "APrimalDinoCharacter.bCanSecondaryMountOnHumans"}; }
	BitFieldValue<bool, unsigned char> bDisableAutoMatingWhileTamedWandering() { return { this, "APrimalDinoCharacter.bDisableAutoMatingWhileTamedWandering"}; }
	BitFieldValue<bool, unsigned char> bWasThrottledBaby() { return { this, "APrimalDinoCharacter.bWasThrottledBaby"}; }
	BitFieldValue<bool, unsigned char> bHadStaticMapActorBase() { return { this, "APrimalDinoCharacter.bHadStaticMapActorBase"}; }
	BitFieldValue<bool, unsigned char> bDisableDefaultDinoTaming() { return { this, "APrimalDinoCharacter.bDisableDefaultDinoTaming"}; }
	BitFieldValue<bool, unsigned char> bOriginalIKEnabled() { return { this, "APrimalDinoCharacter.bOriginalIKEnabled"}; }
	BitFieldValue<bool, unsigned char> bIncludePreventManualInPassengerCount() { return { this, "APrimalDinoCharacter.bIncludePreventManualInPassengerCount"}; }
	BitFieldValue<bool, unsigned char> bForceWildMeleeSwingTraceAll() { return { this, "APrimalDinoCharacter.bForceWildMeleeSwingTraceAll"}; }
	BitFieldValue<bool, unsigned char> bHasBotRider() { return { this, "APrimalDinoCharacter.bHasBotRider"}; }
	BitFieldValue<bool, unsigned char> bClientInterpLocationInCustomMovemode() { return { this, "APrimalDinoCharacter.bClientInterpLocationInCustomMovemode"}; }
	BitFieldValue<bool, unsigned char> bSkipProcessRootRotAndLocInAimOffset() { return { this, "APrimalDinoCharacter.bSkipProcessRootRotAndLocInAimOffset"}; }
	BitFieldValue<bool, unsigned char> UseBPGetWiegthedAttackOverride() { return { this, "APrimalDinoCharacter.UseBPGetWiegthedAttackOverride"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnCarryCharacter() { return { this, "APrimalDinoCharacter.bUseBPOnCarryCharacter"}; }
	BitFieldValue<bool, unsigned char> bUseBPAllowTeamToTrackTamingDino() { return { this, "APrimalDinoCharacter.bUseBPAllowTeamToTrackTamingDino"}; }
	bool HasNonZeroColorSetIndex() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasNonZeroColorSetIndex()"); }
	float GenerateRandomLookAtTargetCooldown(bool bCanSkipCooldown) { return NativeCall<float, bool>(this, "APrimalDinoCharacter.GenerateRandomLookAtTargetCooldown(bool)", bCanSkipCooldown); }
	static void SetbIsWakingTame_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsWakingTame_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbTamedAIAllowSpecialAttacks_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbTamedAIAllowSpecialAttacks_WrapperImpl(void*,void*)", Object, InValue); }
	void CycleAttackWeightsForAttackAtIndex(int attackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.CycleAttackWeightsForAttackAtIndex(int)", attackIndex); }
	static void GetbIsFlying_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsFlying_WrapperImpl(void*,void*)", Object, OutValue); }
	bool InterceptRiderEmoteAnim_Implementation(UAnimMontage* EmoteAnim) { return NativeCall<bool, UAnimMontage*>(this, "APrimalDinoCharacter.InterceptRiderEmoteAnim_Implementation(UAnimMontage*)", EmoteAnim); }
	static bool GetDinoRandomLookAtEnabled() { return NativeCall<bool>(nullptr, "APrimalDinoCharacter.GetDinoRandomLookAtEnabled()"); }
	void BPForceSkeletalMeshUpdate(float ForSeconds) { NativeCall<void, float>(this, "APrimalDinoCharacter.BPForceSkeletalMeshUpdate(float)", ForSeconds); }
	bool IsAllowedToMate() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsAllowedToMate()"); }
	static void SetPassengerPerSeat_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetPassengerPerSeat_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TRotator<double>* GetAimOffsets(UE::Math::TRotator<double>* result, float DeltaTime, UE::Math::TRotator<double>& RootRotOffset, float& RootYawSpeed, float MaxYawAimClamp, UE::Math::TVector<double>& RootLocOffset, bool bInterpolationStep) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float, UE::Math::TRotator<double>&, float&, float, UE::Math::TVector<double>&, bool>(this, "APrimalDinoCharacter.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,bool)", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, bInterpolationStep); }
	void GetSaddleActorComponents(TArray<UActorComponent*, TSizedDefaultAllocator<32> >& OutMeshes) { NativeCall<void, TArray<UActorComponent*, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.GetSaddleActorComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&)", OutMeshes); }
	bool AllowDinoTargetingRange(const UE::Math::TVector<double>& AtLoc, float TargetingRange, APrimalDinoCharacter* ByDino) { return NativeCall<bool, const UE::Math::TVector<double>&, float, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.AllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", AtLoc, TargetingRange, ByDino); }
	bool BPOverrideMateBoostIcon(UTexture2D*& Icon) { return NativeCall<bool, UTexture2D*&>(this, "APrimalDinoCharacter.BPOverrideMateBoostIcon(UTexture2D*&)", Icon); }
	UE::Math::TVector<double>* GetDinoVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetDinoVelocity()", result); }
	void AddGeneTraitAndMarkDirty(const FName& InGeneTrait) { NativeCall<void, const FName&>(this, "APrimalDinoCharacter.AddGeneTraitAndMarkDirty(FName&)", InGeneTrait); }
	static void SetTribeGroupPetOrderingRank_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTribeGroupPetOrderingRank_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetGangCount_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetGangCount_WrapperImpl(void*,void*)", Object, InValue); }
	void RefreshNextTimePlayIdleFidgetAnimation() { NativeCall<void>(this, "APrimalDinoCharacter.RefreshNextTimePlayIdleFidgetAnimation()"); }
	static void SetbTamingHasFood_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbTamingHasFood_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetLastMatingNotificationTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetLastMatingNotificationTime_WrapperImpl(void*,void*)", Object, OutValue); }
	bool CheckAttackConditions(int AttackIndex, float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<bool, int, float, float, AActor*>(this, "APrimalDinoCharacter.CheckAttackConditions(int,float,float,AActor*)", AttackIndex, distance, attackRangeOffset, OtherTarget); }
	AActor* TryFindNewRandomLookAtTarget_Implementation() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.TryFindNewRandomLookAtTarget_Implementation()"); }
	void RefreshSecondaryDinoMountedSocketAttachment(bool bDoAttach) { NativeCall<void, bool>(this, "APrimalDinoCharacter.RefreshSecondaryDinoMountedSocketAttachment(bool)", bDoAttach); }
	void CheckStructureBaseUnHibernated() { NativeCall<void>(this, "APrimalDinoCharacter.CheckStructureBaseUnHibernated()"); }
	static void SetBabyCuddleType_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetBabyCuddleType_WrapperImpl(void*,void*)", Object, InValue); }
	void OnNearbyCharacterDied(APrimalCharacter* DeadCharacter, float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, APrimalCharacter*, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalDinoCharacter.OnNearbyCharacterDied(APrimalCharacter*,float,FDamageEvent&,APawn*,AActor*)", DeadCharacter, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	static void GetbIsNursing_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsNursing_WrapperImpl(void*,void*)", Object, OutValue); }
	void BP_OnRiderChangeWeapons(AShooterCharacter* theRider, UPrimalItem* newWeapon) { NativeCall<void, AShooterCharacter*, UPrimalItem*>(this, "APrimalDinoCharacter.BP_OnRiderChangeWeapons(AShooterCharacter*,UPrimalItem*)", theRider, newWeapon); }
	UPrimalAIState* GetStateOfPlayedAnimationAttack() { return NativeCall<UPrimalAIState*>(this, "APrimalDinoCharacter.GetStateOfPlayedAnimationAttack()"); }
	float BPOverrideBasedPlayerAimOffsetYaw(AShooterCharacter* ForPlayerChar) { return NativeCall<float, AShooterCharacter*>(this, "APrimalDinoCharacter.BPOverrideBasedPlayerAimOffsetYaw(AShooterCharacter*)", ForPlayerChar); }
	int GetExtraPaintingMeshStartIndex() { return NativeCall<int>(this, "APrimalDinoCharacter.GetExtraPaintingMeshStartIndex()"); }
	bool CanSetBabyAge(float TheAge) { return NativeCall<bool, float>(this, "APrimalDinoCharacter.CanSetBabyAge(float)", TheAge); }
	static void GetbEggBoosted_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbEggBoosted_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPIsBasedOnActor(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "APrimalDinoCharacter.BPIsBasedOnActor(AActor*)", Other); }
	static void SetLastMatingNotificationTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetLastMatingNotificationTime_WrapperImpl(void*,void*)", Object, InValue); }
	bool CanBoardCharacters() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanBoardCharacters()"); }
	static void SetSaddleItemClass_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetSaddleItemClass_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbDinoHasBonded_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbDinoHasBonded_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetAllowWildBabyTaming_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetAllowWildBabyTaming_WrapperImpl(void*,void*)", Object, InValue); }
	bool MaxTamedDinos_SoftTameLimit_ShouldCreatureBeCountedTowardsSoftTameLimit() { return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeCountedTowardsSoftTameLimit()"); }
	UAnimMontage* OverrideIdleFidgetAnimation(UAnimMontage* FromMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "APrimalDinoCharacter.OverrideIdleFidgetAnimation(UAnimMontage*)", FromMontage); }
	void SetAttachmentVisibility(bool bHide, EPrimalEquipmentType::Type aType) { NativeCall<void, bool, EPrimalEquipmentType::Type>(this, "APrimalDinoCharacter.SetAttachmentVisibility(bool,EPrimalEquipmentType::Type)", bHide, aType); }
	void OnSaddleStructAdded(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.OnSaddleStructAdded(APrimalStructure*)", TheStruct); }
	void GetCameraRelatedCollisionHeight(float& InCollisionHeight) { NativeCall<void, float&>(this, "APrimalDinoCharacter.GetCameraRelatedCollisionHeight(float&)", InCollisionHeight); }
	static void GetbIsFemale_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsFemale_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsImprintPlayer(AShooterCharacter* ForChar) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalDinoCharacter.IsImprintPlayer(AShooterCharacter*)", ForChar); }
	UE::Math::TVector<double>* GetLookOffsetSocketLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetLookOffsetSocketLocation()", result); }
	int BPOverrideTamingTeamForTrackingTamingDino(int PlayerRequestingTeamID) { return NativeCall<int, int>(this, "APrimalDinoCharacter.BPOverrideTamingTeamForTrackingTamingDino(int)", PlayerRequestingTeamID); }
	static void SetImprinterPlayerUniqueNetId_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetImprinterPlayerUniqueNetId_WrapperImpl(void*,void*)", Object, InValue); }
	float BPAdjustBaseFootStepDamageAmount_Implementation(AActor* ForActor) { return NativeCall<float, AActor*>(this, "APrimalDinoCharacter.BPAdjustBaseFootStepDamageAmount_Implementation(AActor*)", ForActor); }
	void ResetMeleeSwingHit() { NativeCall<void>(this, "APrimalDinoCharacter.ResetMeleeSwingHit()"); }
	bool BPPreventClearMountCapsuleResizing() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventClearMountCapsuleResizing()"); }
	void UnpauseAnimSharing() { NativeCall<void>(this, "APrimalDinoCharacter.UnpauseAnimSharing()"); }
	static void SetMatingWithDino_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetMatingWithDino_WrapperImpl(void*,void*)", Object, InValue); }
	void BPRefreshColorization() { NativeCall<void>(this, "APrimalDinoCharacter.BPRefreshColorization()"); }
	static void GetbTamedAIAllowSpecialAttacks_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbTamedAIAllowSpecialAttacks_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbIsWandering_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsWandering_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPOnCarryCharacter(APrimalCharacter* Carried) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPOnCarryCharacter(APrimalCharacter*)", Carried); }
	void RefreshBabyScaling() { NativeCall<void>(this, "APrimalDinoCharacter.RefreshBabyScaling()"); }
	bool BPHandleControllerInitiatedAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPHandleControllerInitiatedAttack(int)", AttackIndex); }
	UE::Math::TVector<double>* BPGetHealthBarColor(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BPGetHealthBarColor()", result); }
	static void SetBabyGestationProgress_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetBabyGestationProgress_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPShouldCancelDoAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPShouldCancelDoAttack(int)", AttackIndex); }
	void BPUpdateReplicatedAttackTargets(AActor*& OutAttackTarget, UE::Math::TVector<double>& OutAttackLocation, bool& bOutHasTarget, bool bAllowFriendlyTargets) { NativeCall<void, AActor*&, UE::Math::TVector<double>&, bool&, bool>(this, "APrimalDinoCharacter.BPUpdateReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&,bool)", OutAttackTarget, OutAttackLocation, bOutHasTarget, bAllowFriendlyTargets); }
	bool BPCanLand(bool CanLand) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BPCanLand(bool)", CanLand); }
	static void GetBabyCuddleType_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetBabyCuddleType_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetDinoID1_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetDinoID1_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetNextAllowedMatingTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetNextAllowedMatingTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetDinoID2_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetDinoID2_WrapperImpl(void*,void*)", Object, InValue); }
	bool ShouldUseAnimationUpdateRateOptimizations() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldUseAnimationUpdateRateOptimizations()"); }
	bool ShouldOverrideBasedCharacterTargetingDesirability() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldOverrideBasedCharacterTargetingDesirability()"); }
	bool BPPreventRiding(AShooterCharacter* byPawn, bool bDontCheckDistance) { return NativeCall<bool, AShooterCharacter*, bool>(this, "APrimalDinoCharacter.BPPreventRiding(AShooterCharacter*,bool)", byPawn, bDontCheckDistance); }
	static void SetCurrentTameAffinity_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetCurrentTameAffinity_WrapperImpl(void*,void*)", Object, InValue); }
	void BPUnstasis() { NativeCall<void>(this, "APrimalDinoCharacter.BPUnstasis()"); }
	static void SetbIsLatched_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsLatched_WrapperImpl(void*,void*)", Object, InValue); }
	float OverrideBasedCharacterTargetingDesirability(float InTargetingDesire, APrimalCharacter* BasedCharacter, APrimalCharacter* Attacker) { return NativeCall<float, float, APrimalCharacter*, APrimalCharacter*>(this, "APrimalDinoCharacter.OverrideBasedCharacterTargetingDesirability(float,APrimalCharacter*,APrimalCharacter*)", InTargetingDesire, BasedCharacter, Attacker); }
	static void SetAttackMyTargetForPlayerController_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetAttackMyTargetForPlayerController_WrapperImpl(void*,void*)", Object, InValue); }
	void BPDidSetCarriedCharacter(APrimalCharacter* WithPreviousCarriedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPDidSetCarriedCharacter(APrimalCharacter*)", WithPreviousCarriedCharacter); }
	bool CanHarvestCollectables() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanHarvestCollectables()"); }
	static void SetOwningPlayerID_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetOwningPlayerID_WrapperImpl(void*,void*)", Object, InValue); }
	void OnSpawnedForItem(UPrimalItem* ForItem) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.OnSpawnedForItem(UPrimalItem*)", ForItem); }
	void OnUpdateMountedDinoMeshHiding(bool bshouldBeVisible) { NativeCall<void, bool>(this, "APrimalDinoCharacter.OnUpdateMountedDinoMeshHiding(bool)", bshouldBeVisible); }
	void BP_OnTargetedByTamedOrder(APrimalCharacter* OrderingCharacter, APrimalDinoCharacter* AttackingDino, bool bForced) { NativeCall<void, APrimalCharacter*, APrimalDinoCharacter*, bool>(this, "APrimalDinoCharacter.BP_OnTargetedByTamedOrder(APrimalCharacter*,APrimalDinoCharacter*,bool)", OrderingCharacter, AttackingDino, bForced); }
	bool GeneTraits_CharacterCanHaveGeneTraits() { return NativeCall<bool>(this, "APrimalDinoCharacter.GeneTraits_CharacterCanHaveGeneTraits()"); }
	void OnUncryo(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.OnUncryo(AShooterPlayerController*)", ForPC); }
	APrimalDinoCharacter* CreateBabyDino(APrimalDinoCharacter*& ExtraBaby1, APrimalDinoCharacter*& ExtraBaby2) { return NativeCall<APrimalDinoCharacter*, APrimalDinoCharacter*&, APrimalDinoCharacter*&>(this, "APrimalDinoCharacter.CreateBabyDino(APrimalDinoCharacter*&,APrimalDinoCharacter*&)", ExtraBaby1, ExtraBaby2); }
	float GetImprintingQualityIncreasePerImprint() { return NativeCall<float>(this, "APrimalDinoCharacter.GetImprintingQualityIncreasePerImprint()"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr> GetRider() { using AsaReturnType = TWeakObjectPtr < AShooterCharacter , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalDinoCharacter.GetRider()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static void GetBabyNextCuddleTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetBabyNextCuddleTime_WrapperImpl(void*,void*)", Object, OutValue); }
	bool CanThrottleWandering() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanThrottleWandering()"); }
	bool PassengerDinosUsePassengerAnim() { return NativeCall<bool>(this, "APrimalDinoCharacter.PassengerDinosUsePassengerAnim()"); }
	void ResetBrainComponent() { NativeCall<void>(this, "APrimalDinoCharacter.ResetBrainComponent()"); }
	static void SetbReachedMaxStructures_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbReachedMaxStructures_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TVector<double>* BPGetRiderUnboardLocation(UE::Math::TVector<double>* result, APrimalCharacter* RidingCharacter) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalDinoCharacter.BPGetRiderUnboardLocation(APrimalCharacter*)", result, RidingCharacter); }
	UE::Math::TVector<double>* BPOverrideRiderIndoorsCheckLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BPOverrideRiderIndoorsCheckLocation()", result); }
	void BPNotifyIfPassengerLaunchShoulderMount(APrimalCharacter* launchedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPNotifyIfPassengerLaunchShoulderMount(APrimalCharacter*)", launchedCharacter); }
	void SetAllowedPaintingColorRegion(int RegionIndex, bool bIsAllowed) { NativeCall<void, int, bool>(this, "APrimalDinoCharacter.SetAllowedPaintingColorRegion(int,bool)", RegionIndex, bIsAllowed); }
	bool BPOverrideMoveToOrder(UE::Math::TVector<double>* MoveToLocation, AShooterCharacter* OrderingPlayer) { if (!MoveToLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, AShooterCharacter *>(this, "APrimalDinoCharacter.BPOverrideMoveToOrder(UE::Math::TVector<double>,AShooterCharacter*)", *MoveToLocation, OrderingPlayer); }
	bool BP_CanFly() { return NativeCall<bool>(this, "APrimalDinoCharacter.BP_CanFly()"); }
	void BPOnSetAttackIndex(unsigned char AttackIndex) { NativeCall<void, unsigned char>(this, "APrimalDinoCharacter.BPOnSetAttackIndex(unsignedchar)", AttackIndex); }
	void BPMountCharacterNotifyMissionRewards(AMissionType* TheMission) { NativeCall<void, AMissionType*>(this, "APrimalDinoCharacter.BPMountCharacterNotifyMissionRewards(AMissionType*)", TheMission); }
	static void SetBabyAge_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetBabyAge_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPIsValidFoodItemForConsumption(UPrimalItem* TheItem) { return NativeCall<bool, UPrimalItem*>(this, "APrimalDinoCharacter.BPIsValidFoodItemForConsumption(UPrimalItem*)", TheItem); }
	bool IsSwimmingWithAttachedBox() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsSwimmingWithAttachedBox()"); }
	UE::Math::TVector<double>* GetPassengerOffset_Implementation(UE::Math::TVector<double>* result, APrimalCharacter* Passenger) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalDinoCharacter.GetPassengerOffset_Implementation(APrimalCharacter*)", result, Passenger); }
	bool HasOfflineRider_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasOfflineRider_Implementation()"); }
	bool HasResourcesForRepair(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.HasResourcesForRepair(AShooterPlayerController*)", ForPC); }
	void SetAttackTargetTraceDistanceValue(float NewTraceDistance) { NativeCall<void, float>(this, "APrimalDinoCharacter.SetAttackTargetTraceDistanceValue(float)", NewTraceDistance); }
	void SetSaddleMeshAndMarkDirty(USkeletalMeshComponent* pSaddle, bool bUpdateSkeletalMesh) { NativeCall<void, USkeletalMeshComponent*, bool>(this, "APrimalDinoCharacter.SetSaddleMeshAndMarkDirty(USkeletalMeshComponent*,bool)", pSaddle, bUpdateSkeletalMesh); }
	void RefreshThrottledBabyCollision(bool bForce) { NativeCall<void, bool>(this, "APrimalDinoCharacter.RefreshThrottledBabyCollision(bool)", bForce); }
	bool BPShouldForceFlee() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPShouldForceFlee()"); }
	void BPGetReplicatedAttackTargets(AActor*& OutAttackTarget, UE::Math::TVector<double>& OutAttackLocation, bool& bOutHasTarget) { NativeCall<void, AActor*&, UE::Math::TVector<double>&, bool&>(this, "APrimalDinoCharacter.BPGetReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&)", OutAttackTarget, OutAttackLocation, bOutHasTarget); }
	bool IsTargetableDepth(float TargetDepthZ, float WaterSurfaceZ) { return NativeCall<bool, float, float>(this, "APrimalDinoCharacter.IsTargetableDepth(float,float)", TargetDepthZ, WaterSurfaceZ); }
	void BPKilledSomethingEventWithInfo_Implementation(APrimalCharacter* killedTarget, float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer) { NativeCall<void, APrimalCharacter*, float, const FDamageEvent&, AController*>(this, "APrimalDinoCharacter.BPKilledSomethingEventWithInfo_Implementation(APrimalCharacter*,float,FDamageEvent&,AController*)", killedTarget, KillingDamage, DamageEvent, Killer); }
	void BPNotifyNameEditText(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPNotifyNameEditText(AShooterPlayerController*)", ForPC); }
	bool CanNurseDino_Implementation(APrimalDinoCharacter* OtherDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.CanNurseDino_Implementation(APrimalDinoCharacter*)", OtherDino); }
	bool BPCanMountOnCharacter(APrimalCharacter* character, bool bIsSecondary) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalDinoCharacter.BPCanMountOnCharacter(APrimalCharacter*,bool)", character, bIsSecondary); }
	static void SetbIsHeldJumpSlowFalling_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsHeldJumpSlowFalling_WrapperImpl(void*,void*)", Object, InValue); }
	void ResetAttackCooldowns() { NativeCall<void>(this, "APrimalDinoCharacter.ResetAttackCooldowns()"); }
	void BPDinoPrepareForARKUploading() { NativeCall<void>(this, "APrimalDinoCharacter.BPDinoPrepareForARKUploading()"); }
	void BPUpdateDinoInTamingArray(bool bIsRemove, AShooterPlayerController* ForPC) { NativeCall<void, bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPUpdateDinoInTamingArray(bool,AShooterPlayerController*)", bIsRemove, ForPC); }
	static void GetbIsWakingTame_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsWakingTame_WrapperImpl(void*,void*)", Object, OutValue); }
	void GetRidingCarryingIgnoreList(TArray<AActor*, TSizedDefaultAllocator<32> >& IgnoreList) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.GetRidingCarryingIgnoreList(TArray<AActor*,TSizedDefaultAllocator<32>>&)", IgnoreList); }
	void BPOnAdjustLastAttackTime(int AttackIndex, float TimeDiff) { NativeCall<void, int, float>(this, "APrimalDinoCharacter.BPOnAdjustLastAttackTime(int,float)", AttackIndex, TimeDiff); }
	static void GetDinoID2_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetDinoID2_WrapperImpl(void*,void*)", Object, OutValue); }
	void RegisterWithManagers() { NativeCall<void>(this, "APrimalDinoCharacter.RegisterWithManagers()"); }
	bool CanFeedWakingTame(APlayerController* ForPC, bool bCheckAllConditions) { return NativeCall<bool, APlayerController*, bool>(this, "APrimalDinoCharacter.CanFeedWakingTame(APlayerController*,bool)", ForPC, bCheckAllConditions); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >* GetStartledAnimations(TArray<UAnimMontage*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*, TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetStartledAnimations()", result); }
	static void SetbIsLatching_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsLatching_WrapperImpl(void*,void*)", Object, InValue); }
	bool AllowedToExecuteRandomLookAtTargetLogic_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowedToExecuteRandomLookAtTargetLogic_Implementation()"); }
	void BPNotifyDealtDamage(AActor* Victim, float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator) { NativeCall<void, AActor*, float, const FDamageEvent&, AController*>(this, "APrimalDinoCharacter.BPNotifyDealtDamage(AActor*,float,FDamageEvent&,AController*)", Victim, DamageAmount, DamageEvent, EventInstigator); }
	static void GetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_WrapperImpl(void*,void*)", Object, OutValue); }
	void ServerRequestBraking(bool bWantsToBrake) { NativeCall<void, bool>(this, "APrimalDinoCharacter.ServerRequestBraking(bool)", bWantsToBrake); }
	void ClientShouldNotifyLanded() { NativeCall<void>(this, "APrimalDinoCharacter.ClientShouldNotifyLanded()"); }
	bool BP_SkipEnterFlightAnim() { return NativeCall<bool>(this, "APrimalDinoCharacter.BP_SkipEnterFlightAnim()"); }
	void BPOnMountCharacterChangedWeapons(AShooterCharacter* theRider) { NativeCall<void, AShooterCharacter*>(this, "APrimalDinoCharacter.BPOnMountCharacterChangedWeapons(AShooterCharacter*)", theRider); }
	bool BPSkipTerrainTraceForCarriedCharacter() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPSkipTerrainTraceForCarriedCharacter()"); }
	bool BlueprintCanAttack(int AttackIndex, float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<bool, int, float, float, AActor*>(this, "APrimalDinoCharacter.BlueprintCanAttack(int,float,float,AActor*)", AttackIndex, distance, attackRangeOffset, OtherTarget); }
	bool IsFemale() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsFemale()"); }
	static void GetAttackMyTargetForPlayerController_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetAttackMyTargetForPlayerController_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* GetPlayerSpawnLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetPlayerSpawnLocation()", result); }
	static void GetbIsRepairing_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsRepairing_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetRootYawSpeed(float DeltaTime) { return NativeCall<float, float>(this, "APrimalDinoCharacter.GetRootYawSpeed(float)", DeltaTime); }
	bool BPOnStopJump_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOnStopJump_Implementation()"); }
	void OverrideCameraSweepChannel(ECollisionChannel& InSweepChannel) { NativeCall<void, ECollisionChannel&>(this, "APrimalDinoCharacter.OverrideCameraSweepChannel(ECollisionChannel&)", InSweepChannel); }
	static void GetbForcePreventInventoryAccess_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbForcePreventInventoryAccess_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetTarget_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTarget_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetMatingWithDino_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetMatingWithDino_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetFollowStoppingDistance_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetFollowStoppingDistance_WrapperImpl(void*,void*)", Object, OutValue); }
	AActor* GetTamedFollowTarget() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.GetTamedFollowTarget()"); }
	static void SetRider_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetRider_WrapperImpl(void*,void*)", Object, InValue); }
	float BPModifyHarvestAmountMultiplier(float HarvestAmountMultiplier) { return NativeCall<float, float>(this, "APrimalDinoCharacter.BPModifyHarvestAmountMultiplier(float)", HarvestAmountMultiplier); }
	static void SetRiderSocketName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetRiderSocketName_WrapperImpl(void*,void*)", Object, InValue); }
	void BP_OnTamedOrderReceived(APrimalCharacter* FromCharacter, EDinoTamedOrder::Type OrderType, bool bForce, AActor* enemyTarget, bool orderNotExecuted) { NativeCall<void, APrimalCharacter*, EDinoTamedOrder::Type, bool, AActor*, bool>(this, "APrimalDinoCharacter.BP_OnTamedOrderReceived(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,bool)", FromCharacter, OrderType, bForce, enemyTarget, orderNotExecuted); }
	bool MaxTamedDinos_SoftTameLimit_IsCreatureAbleToBeMarkedForDestruction() { return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureAbleToBeMarkedForDestruction()"); }
	void SetHardLimitWildDinoToVolume(ANPCZoneVolume* ToVolume) { NativeCall<void, ANPCZoneVolume*>(this, "APrimalDinoCharacter.SetHardLimitWildDinoToVolume(ANPCZoneVolume*)", ToVolume); }
	void ControlRigNotify(FName NotifyName, FName NotifyCustomTag, const FHitResult& WorldSpaceHitResult, const UE::Math::TVector<double>& Velocity) { NativeCall<void, FName, FName, const FHitResult&, const UE::Math::TVector<double>&>(this, "APrimalDinoCharacter.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", NotifyName, NotifyCustomTag, WorldSpaceHitResult, Velocity); }
	static void GetbIsBaby_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsBaby_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbForceDisablingTaming_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbForceDisablingTaming_WrapperImpl(void*,void*)", Object, InValue); }
	bool ShouldForceAllowReload_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldForceAllowReload_Implementation()"); }
	UE::Math::TVector<double>* BPGetPassengerDinoAdditionalOffset_Implementation(UE::Math::TVector<double>* result, APrimalDinoCharacter* Passenger) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.BPGetPassengerDinoAdditionalOffset_Implementation(APrimalDinoCharacter*)", result, Passenger); }
	void CopyColorizationFromDino(APrimalDinoCharacter* OtherDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.CopyColorizationFromDino(APrimalDinoCharacter*)", OtherDino); }
	bool AllowPhysFlying() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowPhysFlying()"); }
	void DoDeathHarvestingFadeOut() { NativeCall<void>(this, "APrimalDinoCharacter.DoDeathHarvestingFadeOut()"); }
	static void SetTamedAggressionLevel_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTamedAggressionLevel_WrapperImpl(void*,void*)", Object, InValue); }
	void CopyPaintingComponentFrom(APrimalDinoCharacter* Other) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.CopyPaintingComponentFrom(APrimalDinoCharacter*)", Other); }
	bool ShouldPreventCharacterBasing(APawn* BasedCharacter) { return NativeCall<bool, APawn*>(this, "APrimalDinoCharacter.ShouldPreventCharacterBasing(APawn*)", BasedCharacter); }
	bool IsActorInMeleeSwingHurtList(AActor* AnActor) { return NativeCall<bool, AActor*>(this, "APrimalDinoCharacter.IsActorInMeleeSwingHurtList(AActor*)", AnActor); }
	void ApplySaddleBoneModifiers() { NativeCall<void>(this, "APrimalDinoCharacter.ApplySaddleBoneModifiers()"); }
	void BlueprintPlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalDinoCharacter.BlueprintPlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void UnregisterWithManagers() { NativeCall<void>(this, "APrimalDinoCharacter.UnregisterWithManagers()"); }
	bool BabyConsumeCuddleFood(APlayerController* ForPC, bool bFindCuddleFoodItem) { return NativeCall<bool, APlayerController*, bool>(this, "APrimalDinoCharacter.BabyConsumeCuddleFood(APlayerController*,bool)", ForPC, bFindCuddleFoodItem); }
	static void GetNextAllowedMatingTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetNextAllowedMatingTime_WrapperImpl(void*,void*)", Object, OutValue); }
	AActor* GetTamedLandTarget() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.GetTamedLandTarget()"); }
	static void SetTarget_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTarget_WrapperImpl(void*,void*)", Object, InValue); }
	void BPNotifyOnBuffAddedToMountChar(APrimalBuff* Buff) { NativeCall<void, APrimalBuff*>(this, "APrimalDinoCharacter.BPNotifyOnBuffAddedToMountChar(APrimalBuff*)", Buff); }
	void SetImprintPlayer(AShooterCharacter* ForChar) { NativeCall<void, AShooterCharacter*>(this, "APrimalDinoCharacter.SetImprintPlayer(AShooterCharacter*)", ForChar); }
	bool BPPreventUseItem(const UPrimalItem* Item) { return NativeCall<bool, const UPrimalItem*>(this, "APrimalDinoCharacter.BPPreventUseItem(UPrimalItem*)", Item); }
	bool CanPlayerCheatSpawn_Implementation(APlayerController* player) { return NativeCall<bool, APlayerController*>(this, "APrimalDinoCharacter.CanPlayerCheatSpawn_Implementation(APlayerController*)", player); }
	bool BP_ShouldDisableBasedCharactersCameraInterpolation(APrimalCharacter* ForBasedChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.BP_ShouldDisableBasedCharactersCameraInterpolation(APrimalCharacter*)", ForBasedChar); }
	bool BPExShouldRestrictNonAlliedCarriedPlayerYaw_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPExShouldRestrictNonAlliedCarriedPlayerYaw_Implementation()"); }
	bool BPAllowDinoTargetingRange(const UE::Math::TVector<double>& AtLoc, float TargetingRange, APrimalDinoCharacter* ByDino) { return NativeCall<bool, const UE::Math::TVector<double>&, float, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.BPAllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", AtLoc, TargetingRange, ByDino); }
	bool IsWildFollowingParentValid(APrimalDinoCharacter* FollowingParent) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.IsWildFollowingParentValid(APrimalDinoCharacter*)", FollowingParent); }
	APrimalBotCharacter* GetBotRider() { return NativeCall<APrimalBotCharacter*>(this, "APrimalDinoCharacter.GetBotRider()"); }
	UE::Math::TRotator<double>* GetCurrentAimOffsetsRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.GetCurrentAimOffsetsRotation()", result); }
	void OnRep_Rider() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_Rider()"); }
	bool BPAllowEquippingItemType_Implementation(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "APrimalDinoCharacter.BPAllowEquippingItemType_Implementation(EPrimalEquipmentType::Type)", equipmentType); }
	void BPGetCrosshairLocation(float CanvasClipX, float CanvasClipY, float& OutX, float& OutY) { NativeCall<void, float, float, float&, float&>(this, "APrimalDinoCharacter.BPGetCrosshairLocation(float,float,float&,float&)", CanvasClipX, CanvasClipY, OutX, OutY); }
	UE::Math::TVector<double>* GetTargetingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalDinoCharacter.GetTargetingLocation(AActor*)", result, Attacker); }
	void CustomReceiveHarvestResources(FItemNetInfo& HarvestedItem) { NativeCall<void, FItemNetInfo&>(this, "APrimalDinoCharacter.CustomReceiveHarvestResources(FItemNetInfo&)", HarvestedItem); }
	void ClearColorSetIndices() { NativeCall<void>(this, "APrimalDinoCharacter.ClearColorSetIndices()"); }
	static void SetUploadEarliestValidTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetUploadEarliestValidTime_WrapperImpl(void*,void*)", Object, InValue); }
	bool AttemptAddWildGeneTraits(bool bForceReRoll) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.AttemptAddWildGeneTraits(bool)", bForceReRoll); }
	float GetSignificance(float Distance) { return NativeCall<float, float>(this, "APrimalDinoCharacter.GetSignificance(float)", Distance); }
	void BPOnSecondaryDinoAdjustedAttachment(bool bPreAdjust) { NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnSecondaryDinoAdjustedAttachment(bool)", bPreAdjust); }
	bool BPIsValidUnStasisCaster() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPIsValidUnStasisCaster()"); }
	static void GetImprinterName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetImprinterName_WrapperImpl(void*,void*)", Object, OutValue); }
	void ReleaseStructureRehydrationHold(const wchar_t* Reason) { NativeCall<void, const wchar_t*>(this, "APrimalDinoCharacter.ReleaseStructureRehydrationHold(wchar_t*)", Reason); }
	FName BPGetRiderSocket() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalDinoCharacter.BPGetRiderSocket()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void BPAddAlwaysHitMeleeActors(TArray<AActor*, TSizedDefaultAllocator<32> >& RetActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.BPAddAlwaysHitMeleeActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", RetActors); }
	FName GetDesiredNavmeshGenerationRadiusName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalDinoCharacter.GetDesiredNavmeshGenerationRadiusName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool BPAutoRequestSaddleItemContainerInventories() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPAutoRequestSaddleItemContainerInventories()"); }
	bool BPPreventRiderBeingCarried(APrimalDinoCharacter* ByDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.BPPreventRiderBeingCarried(APrimalDinoCharacter*)", ByDino); }
	int GetPassengersSeatIndex(APrimalCharacter* Passenger) { return NativeCall<int, APrimalCharacter*>(this, "APrimalDinoCharacter.GetPassengersSeatIndex(APrimalCharacter*)", Passenger); }
	USoundBase* GetDinoTameSound() { return NativeCall<USoundBase*>(this, "APrimalDinoCharacter.GetDinoTameSound()"); }
	AActor* TryFindNewRandomLookAtTarget() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.TryFindNewRandomLookAtTarget()"); }
	bool BPCanTame(AShooterPlayerController* ForPC, bool bIgnoreMaxTamedDinos, bool bIgnoreTeamCheck) { return NativeCall<bool, AShooterPlayerController*, bool, bool>(this, "APrimalDinoCharacter.BPCanTame(AShooterPlayerController*,bool,bool)", ForPC, bIgnoreMaxTamedDinos, bIgnoreTeamCheck); }
	UE::Math::TVector<double>* GetFloatingHUDLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetFloatingHUDLocation()", result); }
	UE::Math::TVector<double>* BPOverrideFloatingHUDLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.BPOverrideFloatingHUDLocation()", result); }
	static void GetbIsCloneDino_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsCloneDino_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbCollectVictimItems_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbCollectVictimItems_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPGetAttackOfPlayedAnimation(FDinoAttackInfo& OutAttackInfo) { return NativeCall<bool, FDinoAttackInfo&>(this, "APrimalDinoCharacter.BPGetAttackOfPlayedAnimation(FDinoAttackInfo&)", OutAttackInfo); }
	float BPGetCrosshairSpread() { return NativeCall<float>(this, "APrimalDinoCharacter.BPGetCrosshairSpread()"); }
	static void GetTamedAggressionLevel_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTamedAggressionLevel_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetFollowStoppingDistance_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetFollowStoppingDistance_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetCurrentTameAffinity_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetCurrentTameAffinity_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbIsHordeDino_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsHordeDino_WrapperImpl(void*,void*)", Object, OutValue); }
	bool DisableHarvesting() { return NativeCall<bool>(this, "APrimalDinoCharacter.DisableHarvesting()"); }
	bool BPAllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "APrimalDinoCharacter.BPAllowEquippingItemType(EPrimalEquipmentType::Type)", equipmentType); }
	UE::Math::TRotator<double>* ModifyAimOffsetRandomLookAtTarget_Implementation(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& Aim) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "APrimalDinoCharacter.ModifyAimOffsetRandomLookAtTarget_Implementation(UE::Math::TRotator<double>&)", result, Aim); }
	float GetItemSpoilTimeMultiplierForSaddledContainers() { return NativeCall<float>(this, "APrimalDinoCharacter.GetItemSpoilTimeMultiplierForSaddledContainers()"); }
	bool ShouldEncumberBasedOnDino(APrimalDinoCharacter* OnDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.ShouldEncumberBasedOnDino(APrimalDinoCharacter*)", OnDino); }
	static void GetbForceHideSaddle_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbForceHideSaddle_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPAnimNotifyStateTick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalDinoCharacter.BPAnimNotifyStateTick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	static void GetDinoID1_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetDinoID1_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPOnStartJump() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOnStartJump()"); }
	static void GetbIsLatched_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsLatched_WrapperImpl(void*,void*)", Object, OutValue); }
	void SetTamedFollowTarget(AActor* NewTarget) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.SetTamedFollowTarget(AActor*)", NewTarget); }
	bool CurrentlyHasRider() { return NativeCall<bool>(this, "APrimalDinoCharacter.CurrentlyHasRider()"); }
	APrimalCharacter* GetPassengerPerSeat(int SeatIndex) { return NativeCall<APrimalCharacter*, int>(this, "APrimalDinoCharacter.GetPassengerPerSeat(int)", SeatIndex); }
	static void SetRequiredTameAffinity_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetRequiredTameAffinity_WrapperImpl(void*,void*)", Object, InValue); }
	bool HasPassenger() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasPassenger()"); }
	bool PlayedAnimationHasAttack() { return NativeCall<bool>(this, "APrimalDinoCharacter.PlayedAnimationHasAttack()"); }
	bool ShouldForceFlee() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldForceFlee()"); }
	static void GetRiderSocketName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetRiderSocketName_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetCurrentAttackProgressPercent() { return NativeCall<float>(this, "APrimalDinoCharacter.GetCurrentAttackProgressPercent()"); }
	static void SetbIsFlying_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsFlying_WrapperImpl(void*,void*)", Object, InValue); }
	bool MaxTamedDinos_SoftTameLimit_FreshlySetCreatureMarkedForSoftTameLimitDestruction(bool AlreadyMarked) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_FreshlySetCreatureMarkedForSoftTameLimitDestruction(bool)", AlreadyMarked); }
	static void GetWildRandomScale_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetWildRandomScale_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPOnSaddleStructAdded(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.BPOnSaddleStructAdded(APrimalStructure*)", TheStruct); }
	static void GetTameIneffectivenessModifier_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTameIneffectivenessModifier_WrapperImpl(void*,void*)", Object, OutValue); }
	AShooterCharacter* BPConsumeInventoryFoodItem(UPrimalItem* foodItem, bool bConsumeEntireStack) { return NativeCall<AShooterCharacter*, UPrimalItem*, bool>(this, "APrimalDinoCharacter.BPConsumeInventoryFoodItem(UPrimalItem*,bool)", foodItem, bConsumeEntireStack); }
	void BPSetInitialAimOffsetTargets(UE::Math::TVector<double>* TargetRootLoc, UE::Math::TRotator<double>* TargetAimRot, UE::Math::TVector<double>& OutTargetRootLoc, UE::Math::TRotator<double>& OutTargetAimRot) { if (!TargetRootLoc) throw std::invalid_argument("Null native value parameter"); if (!TargetAimRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double > &, UE :: Math :: TRotator < double > &>(this, "APrimalDinoCharacter.BPSetInitialAimOffsetTargets(UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", *TargetRootLoc, *TargetAimRot, OutTargetRootLoc, OutTargetAimRot); }
	static void GetbDinoHasBonded_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbDinoHasBonded_WrapperImpl(void*,void*)", Object, OutValue); }
	bool DropsApexItem() { return NativeCall<bool>(this, "APrimalDinoCharacter.DropsApexItem()"); }
	void SetLimitWildDinoToVolume(AVolume* ToVolume) { NativeCall<void, AVolume*>(this, "APrimalDinoCharacter.SetLimitWildDinoToVolume(AVolume*)", ToVolume); }
	bool AllowPhysSwimming() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowPhysSwimming()"); }
	void HandleMountedDinoAction_Implementation(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.HandleMountedDinoAction_Implementation(AShooterPlayerController*)", PC); }
	FString* GetBaseDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetBaseDescriptiveName()", result); }
	static void GetSaddleItemClass_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetSaddleItemClass_WrapperImpl(void*,void*)", Object, OutValue); }
	bool WantsToEnableNavRelevancy() { return NativeCall<bool>(this, "APrimalDinoCharacter.WantsToEnableNavRelevancy()"); }
	void BPOnClearCarriedCharacter(APrimalCharacter* Carried) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPOnClearCarriedCharacter(APrimalCharacter*)", Carried); }
	static void SetbNeutered_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbNeutered_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetImprinterPlayerUniqueNetId_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetImprinterPlayerUniqueNetId_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbIsInTurretMode_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsInTurretMode_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPNotifyClearPassenger(APrimalCharacter* PassengerChar, int SeatIndex) { NativeCall<void, APrimalCharacter*, int>(this, "APrimalDinoCharacter.BPNotifyClearPassenger(APrimalCharacter*,int)", PassengerChar, SeatIndex); }
	bool InterceptMountedOnPlayerEmoteAnim_Implementation(UAnimMontage* EmoteAnim) { return NativeCall<bool, UAnimMontage*>(this, "APrimalDinoCharacter.InterceptMountedOnPlayerEmoteAnim_Implementation(UAnimMontage*)", EmoteAnim); }
	bool HasTarget() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasTarget()"); }
	float BPAdjustBaseFootStepDamageAmount(AActor* ForActor) { return NativeCall<float, AActor*>(this, "APrimalDinoCharacter.BPAdjustBaseFootStepDamageAmount(AActor*)", ForActor); }
	void MaxTamedDinos_SoftTameLimit_SetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_To_CachedValue(bool ForceUpdate) { NativeCall<void, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_SetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_To_CachedValue(bool)", ForceUpdate); }
	void FedWakingTameDino() { NativeCall<void>(this, "APrimalDinoCharacter.FedWakingTameDino()"); }
	bool ShouldCreateComponentPhysicsState(const UActorComponent* comp) { return NativeCall<bool, const UActorComponent*>(this, "APrimalDinoCharacter.ShouldCreateComponentPhysicsState(UActorComponent*)", comp); }
	static void SetbIsFemale_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsFemale_WrapperImpl(void*,void*)", Object, InValue); }
	void BPNotifyAddPassenger(APrimalCharacter* PassengerChar, int SeatIndex) { NativeCall<void, APrimalCharacter*, int>(this, "APrimalDinoCharacter.BPNotifyAddPassenger(APrimalCharacter*,int)", PassengerChar, SeatIndex); }
	bool IgnoreNPCZoneCountVolume(ANPCZoneVolume* anyNPCVolume) { return NativeCall<bool, ANPCZoneVolume*>(this, "APrimalDinoCharacter.IgnoreNPCZoneCountVolume(ANPCZoneVolume*)", anyNPCVolume); }
	void DinoShoulderMountedLaunch(UE::Math::TVector<double>* launchDir, AShooterCharacter* throwingCharacter) { if (!launchDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, AShooterCharacter *>(this, "APrimalDinoCharacter.DinoShoulderMountedLaunch(UE::Math::TVector<double>,AShooterCharacter*)", *launchDir, throwingCharacter); }
	static void SetbEggBoosted_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbEggBoosted_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsWakingTame() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsWakingTame()"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetDinoPlatformCollisionIgnoreActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetDinoPlatformCollisionIgnoreActors()", result); }
	void BP_OnBasedPawnAddedNotify(AActor* AddedActor) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.BP_OnBasedPawnAddedNotify(AActor*)", AddedActor); }
	bool BPCanSetBabyAge(bool bSetBaby) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BPCanSetBabyAge(bool)", bSetBaby); }
	static void GetTamerString_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTamerString_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetAllowWildBabyTaming_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetAllowWildBabyTaming_WrapperImpl(void*,void*)", Object, OutValue); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetAlwaysHitMeleeActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.GetAlwaysHitMeleeActors()", result); }
	void BPModifyHarvestingWeightsArray_Implementation(const TArray<float, TSizedDefaultAllocator<32> >& resourceWeightsIn, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& resourceItems, TArray<float, TSizedDefaultAllocator<32> >& resourceWeightsOut) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >&, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >&, TArray<float, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.BPModifyHarvestingWeightsArray_Implementation(TArray<float,TSizedDefaultAllocator<32>>&,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", resourceWeightsIn, resourceItems, resourceWeightsOut); }
	AShooterCharacter* FindFirstFoodItemPlayerCharacter() { return NativeCall<AShooterCharacter*>(this, "APrimalDinoCharacter.FindFirstFoodItemPlayerCharacter()"); }
	float GetUsedCorpseTargetingMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.GetUsedCorpseTargetingMultiplier()"); }
	void KeepFlight(float ForDuration) { NativeCall<void, float>(this, "APrimalDinoCharacter.KeepFlight(float)", ForDuration); }
	bool BPAllowCarryCharacter(APrimalCharacter* checkCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.BPAllowCarryCharacter(APrimalCharacter*)", checkCharacter); }
	static void GetbNeutered_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbNeutered_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbTamingHasFood_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbTamingHasFood_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BlueprintCanRiderAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.BlueprintCanRiderAttack(int)", AttackIndex); }
	bool BPExShouldRestrictNonAlliedCarriedPlayerYaw() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPExShouldRestrictNonAlliedCarriedPlayerYaw()"); }
	void ApplyMaterailDamageEffect(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalDinoCharacter.ApplyMaterailDamageEffect(float)", DeltaSeconds); }
	bool BPOverrideIsSubmergedForWaterTargeting() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOverrideIsSubmergedForWaterTargeting()"); }
	void BlueprintDrawFloatingHUD(AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, AShooterHUD*, float, float, float>(this, "APrimalDinoCharacter.BlueprintDrawFloatingHUD(AShooterHUD*,float,float,float)", HUD, CenterX, CenterY, DrawScale); }
	void OnRep_bIsCharging() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_bIsCharging()"); }
	static void GetbIsCharging_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsCharging_WrapperImpl(void*,void*)", Object, OutValue); }
	void ServerToggleCharging() { NativeCall<void>(this, "APrimalDinoCharacter.ServerToggleCharging()"); }
	void GetSaddleMeshComponents(TArray<UMeshComponent*, TSizedDefaultAllocator<32> >& OutMeshes) { NativeCall<void, TArray<UMeshComponent*, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.GetSaddleMeshComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&)", OutMeshes); }
	void SetColorizationData(const TArray<unsigned char, TSizedDefaultAllocator<32> >& ColorData) { NativeCall<void, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.SetColorizationData(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ColorData); }
	bool IsDefaultTamingDisabled() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsDefaultTamingDisabled()"); }
	void BPOnSetLastAttackTime(int AttackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.BPOnSetLastAttackTime(int)", AttackIndex); }
	static void GetbIsHeldJumpSlowFalling_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsHeldJumpSlowFalling_WrapperImpl(void*,void*)", Object, OutValue); }
	float BPModifyHarvestAmountMultiplier_Implementation(float HarvestAmountMultiplier) { return NativeCall<float, float>(this, "APrimalDinoCharacter.BPModifyHarvestAmountMultiplier_Implementation(float)", HarvestAmountMultiplier); }
	static void SetBaseDinoScale_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetBaseDinoScale_WrapperImpl(void*,void*)", Object, InValue); }
	void BlueprintTamedTick() { NativeCall<void>(this, "APrimalDinoCharacter.BlueprintTamedTick()"); }
	bool AllowTreadWater() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowTreadWater()"); }
	void OnRep_Saddle() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_Saddle()"); }
	static void SetNextAllowedBedUseTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetNextAllowedBedUseTime_WrapperImpl(void*,void*)", Object, InValue); }
	void SpawnedPlayerFor(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalDinoCharacter.SpawnedPlayerFor(AShooterPlayerController*,APawn*)", PC, ForPawn); }
	void SetLeftDynamicActorBaseTime(double NewLeftDynamicActorBaseTime) { NativeCall<void, double>(this, "APrimalDinoCharacter.SetLeftDynamicActorBaseTime(double)", NewLeftDynamicActorBaseTime); }
	void BPModifyWanderAroundActorLocation(UE::Math::TVector<double>& OutLocation) { NativeCall<void, UE::Math::TVector<double>&>(this, "APrimalDinoCharacter.BPModifyWanderAroundActorLocation(UE::Math::TVector<double>&)", OutLocation); }
	static void SetBabyNextCuddleTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetBabyNextCuddleTime_WrapperImpl(void*,void*)", Object, InValue); }
	int GetExtraPaintingMeshStartIndex_Implementation() { return NativeCall<int>(this, "APrimalDinoCharacter.GetExtraPaintingMeshStartIndex_Implementation()"); }
	void BPCopyDinoSettingsToOtherDino(APlayerController* ForPC, APrimalDinoCharacter* FromDino, APrimalDinoCharacter* OtherDino, int SettingTypeUseIndex) { NativeCall<void, APlayerController*, APrimalDinoCharacter*, APrimalDinoCharacter*, int>(this, "APrimalDinoCharacter.BPCopyDinoSettingsToOtherDino(APlayerController*,APrimalDinoCharacter*,APrimalDinoCharacter*,int)", ForPC, FromDino, OtherDino, SettingTypeUseIndex); }
	float GetAffinityIncreaseForFoodItem(UPrimalItem* foodItem) { return NativeCall<float, UPrimalItem*>(this, "APrimalDinoCharacter.GetAffinityIncreaseForFoodItem(UPrimalItem*)", foodItem); }
	bool BPHasCurrentAttack() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPHasCurrentAttack()"); }
	static void SetLastInAllyRangeTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetLastInAllyRangeTime_WrapperImpl(void*,void*)", Object, InValue); }
	float GetSignificanceMaxDistance(float Significance) { return NativeCall<float, float>(this, "APrimalDinoCharacter.GetSignificanceMaxDistance(float)", Significance); }
	static void SetMatingProgress_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetMatingProgress_WrapperImpl(void*,void*)", Object, InValue); }
	bool ShouldPreventHibernation_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldPreventHibernation_Implementation()"); }
	static void GetbForceDisablingTaming_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbForceDisablingTaming_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPPreventActiveMating() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventActiveMating()"); }
	static APrimalDinoCharacter* PeekDinoData(const FARKDinoData& InDinoData, bool bRunBlueprintConstruction) { return NativeCall<APrimalDinoCharacter*, const FARKDinoData&, bool>(nullptr, "APrimalDinoCharacter.PeekDinoData(FARKDinoData&,bool)", InDinoData, bRunBlueprintConstruction); }
	bool GetAllowedPaintingColorRegion(int RegionIndex) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.GetAllowedPaintingColorRegion(int)", RegionIndex); }
	UAnimMontage* BPOverrideIdleFidgetAnimation(UAnimMontage* FromMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "APrimalDinoCharacter.BPOverrideIdleFidgetAnimation(UAnimMontage*)", FromMontage); }
	static void SetbForceDisableClientGravitySim_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbForceDisableClientGravitySim_WrapperImpl(void*,void*)", Object, InValue); }
	EStencilAlliance::Type BPOverrideStencilAllianceForTarget(APrimalCharacter* TargetDino, UPrimitiveComponent* Component) { return NativeCall<EStencilAlliance::Type, APrimalCharacter*, UPrimitiveComponent*>(this, "APrimalDinoCharacter.BPOverrideStencilAllianceForTarget(APrimalCharacter*,UPrimitiveComponent*)", TargetDino, Component); }
	FString* GetRepairString(FString* result, bool bHasSufficientResources, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.GetRepairString(bool,AShooterPlayerController*)", result, bHasSufficientResources, ForPC); }
	bool EnableUpdateSkeletalMeshKinematics() { return NativeCall<bool>(this, "APrimalDinoCharacter.EnableUpdateSkeletalMeshKinematics()"); }
	void BPAddTamingCreatureTrackerForTeam(int Team, bool bHavePOIActiveInitially, APlayerController* NotifyPlayer) { NativeCall<void, int, bool, APlayerController*>(this, "APrimalDinoCharacter.BPAddTamingCreatureTrackerForTeam(int,bool,APlayerController*)", Team, bHavePOIActiveInitially, NotifyPlayer); }
	bool MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyUnMarkedFromDestruction(bool AlreadyMarked) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyUnMarkedFromDestruction(bool)", AlreadyMarked); }
	void OnSpawnedForItem_Implementation(UPrimalItem* ForItem) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.OnSpawnedForItem_Implementation(UPrimalItem*)", ForItem); }
	void BPCarriedDinoBabyRescaled(APrimalDinoCharacter* AgingCarriedDino, float NewAge) { NativeCall<void, APrimalDinoCharacter*, float>(this, "APrimalDinoCharacter.BPCarriedDinoBabyRescaled(APrimalDinoCharacter*,float)", AgingCarriedDino, NewAge); }
	UE::Math::TRotator<double>* ProcessRootRotAndLoc(UE::Math::TRotator<double>* result, float DeltaTime, UE::Math::TVector<double>& RootLocOffset, UE::Math::TRotator<double>& RootRotOffset, float& RootYawSpeed, float MaxYawAimClamp, float CurrentAimBlending, const UE::Math::TRotator<double>& TargetAimRot, float& RootRot) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, float&, float, float, const UE::Math::TRotator<double>&, float&>(this, "APrimalDinoCharacter.ProcessRootRotAndLoc(float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float&,float,float,UE::Math::TRotator<double>&,float&)", result, DeltaTime, RootLocOffset, RootRotOffset, RootYawSpeed, MaxYawAimClamp, CurrentAimBlending, TargetAimRot, RootRot); }
	bool GetCurrentAttackInfo(int& AttackIndex, FDinoAttackInfo& AttackInfo) { return NativeCall<bool, int&, FDinoAttackInfo&>(this, "APrimalDinoCharacter.GetCurrentAttackInfo(int&,FDinoAttackInfo&)", AttackIndex, AttackInfo); }
	static void SetPreventMateBoostUntilTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetPreventMateBoostUntilTime_WrapperImpl(void*,void*)", Object, InValue); }
	void ToggleDinoCopySettingsVisualRange() { NativeCall<void>(this, "APrimalDinoCharacter.ToggleDinoCopySettingsVisualRange()"); }
	static void GetTamingTeamID_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTamingTeamID_WrapperImpl(void*,void*)", Object, OutValue); }
	void AbortCurrentMoveTo() { NativeCall<void>(this, "APrimalDinoCharacter.AbortCurrentMoveTo()"); }
	UE::Math::TVector<double>* GetTargetPathfindingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalDinoCharacter.GetTargetPathfindingLocation(AActor*)", result, Attacker); }
	static void SetMutagenApplied_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetMutagenApplied_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TRotator<double>* BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& Aim) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "APrimalDinoCharacter.BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>&)", result, Aim); }
	AActor* BPGetOtherActorToIgnore() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.BPGetOtherActorToIgnore()"); }
	static void GetLastInAllyRangeTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetLastInAllyRangeTime_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetBaseDinoScale_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetBaseDinoScale_WrapperImpl(void*,void*)", Object, OutValue); }
	void DoCalcCapsuleHalfHeight() { NativeCall<void>(this, "APrimalDinoCharacter.DoCalcCapsuleHalfHeight()"); }
	void BP_OnBasedPawnRemovedFromSet() { NativeCall<void>(this, "APrimalDinoCharacter.BP_OnBasedPawnRemovedFromSet()"); }
	bool GetInstanceOverrideByValue_UseBabyGestation() { return NativeCall<bool>(this, "APrimalDinoCharacter.GetInstanceOverrideByValue_UseBabyGestation()"); }
	void BP_OnPostNetReplication(UE::Math::TVector<double>* ReplicatedLoc, UE::Math::TRotator<double>* ReplicatedRot) { if (!ReplicatedLoc) throw std::invalid_argument("Null native value parameter"); if (!ReplicatedRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalDinoCharacter.BP_OnPostNetReplication(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *ReplicatedLoc, *ReplicatedRot); }
	void BPOnDinoStartled(UAnimMontage* StartledAnimPlayed, bool bFromAIController) { NativeCall<void, UAnimMontage*, bool>(this, "APrimalDinoCharacter.BPOnDinoStartled(UAnimMontage*,bool)", StartledAnimPlayed, bFromAIController); }
	void Multi_OnCryo(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.Multi_OnCryo(AShooterPlayerController*)", ForPC); }
	static void DestroyPeekedDino(APrimalDinoCharacter* PeekedDino) { NativeCall<void, APrimalDinoCharacter*>(nullptr, "APrimalDinoCharacter.DestroyPeekedDino(APrimalDinoCharacter*)", PeekedDino); }
	bool IsDinoBaby() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsDinoBaby()"); }
	static void GetRequiredTameAffinity_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetRequiredTameAffinity_WrapperImpl(void*,void*)", Object, OutValue); }
	void ConsumeAttackStamina(int Index) { NativeCall<void, int>(this, "APrimalDinoCharacter.ConsumeAttackStamina(int)", Index); }
	static void SetTribeGroupPetRidingRank_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTribeGroupPetRidingRank_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPIsTamed() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPIsTamed()"); }
	void SetDeath(bool bJoinInProgress, bool AllowMovementModeChange) { NativeCall<void, bool, bool>(this, "APrimalDinoCharacter.SetDeath(bool,bool)", bJoinInProgress, AllowMovementModeChange); }
	bool BPCanCryo(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPCanCryo(AShooterPlayerController*)", ForPC); }
	void BPFedWakingTameEvent_Implementation(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalDinoCharacter.BPFedWakingTameEvent_Implementation(APlayerController*)", ForPC); }
	static void SetbIsBaby_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsBaby_WrapperImpl(void*,void*)", Object, InValue); }
	bool AllowedToExecuteRandomLookAtTargetLogic() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowedToExecuteRandomLookAtTargetLogic()"); }
	bool HasRider() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasRider()"); }
	static void GetMatingProgress_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetMatingProgress_WrapperImpl(void*,void*)", Object, OutValue); }
	USceneComponent* GetOverrideAttachedSaddleMesh() { return NativeCall<USceneComponent*>(this, "APrimalDinoCharacter.GetOverrideAttachedSaddleMesh()"); }
	void BPOnSaddleStructLoaded(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.BPOnSaddleStructLoaded(APrimalStructure*)", TheStruct); }
	bool BPPreventStepDamage() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventStepDamage()"); }
	void BPTamedRemovedFoodItemFromConsumption(UPrimalItem* foodItem) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.BPTamedRemovedFoodItemFromConsumption(UPrimalItem*)", foodItem); }
	FName BPGetDragSocketDinoName(APrimalDinoCharacter* aGrabbedDino) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, APrimalDinoCharacter *>(this, "APrimalDinoCharacter.BPGetDragSocketDinoName(APrimalDinoCharacter*)", AsaReturnPointer, aGrabbedDino); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool GetRequireAccelerationForUseControllerDesiredRotation() { return NativeCall<bool>(this, "APrimalDinoCharacter.GetRequireAccelerationForUseControllerDesiredRotation()"); }
	void RequestClearRiderFromInput(int OverrideUnboardDirection) { NativeCall<void, int>(this, "APrimalDinoCharacter.RequestClearRiderFromInput(int)", OverrideUnboardDirection); }
	void BP_OnBasedPawnAddedToSet() { NativeCall<void>(this, "APrimalDinoCharacter.BP_OnBasedPawnAddedToSet()"); }
	bool IsInTekShield() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsInTekShield()"); }
	float GetSignificanceBasedAnimationBlend() { return NativeCall<float>(this, "APrimalDinoCharacter.GetSignificanceBasedAnimationBlend()"); }
	void BP_OnCryo(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.BP_OnCryo(AShooterPlayerController*)", ForPC); }
	float BPOverrideMeleeSwingRadius(int AttackIndex) { return NativeCall<float, int>(this, "APrimalDinoCharacter.BPOverrideMeleeSwingRadius(int)", AttackIndex); }
	static void SetbForcePreventInventoryAccess_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbForcePreventInventoryAccess_WrapperImpl(void*,void*)", Object, InValue); }
	bool PreventShowingDinoTooltip() { return NativeCall<bool>(this, "APrimalDinoCharacter.PreventShowingDinoTooltip()"); }
	bool BPHandleOnStopTargeting() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPHandleOnStopTargeting()"); }
	static void SetTamingTeamID_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTamingTeamID_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbEnableTamedWandering_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbEnableTamedWandering_WrapperImpl(void*,void*)", Object, InValue); }
	float BPOverrideAttachedSoundVolumeMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.BPOverrideAttachedSoundVolumeMultiplier()"); }
	void BPOnSaddleStructRemoved(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.BPOnSaddleStructRemoved(APrimalStructure*)", TheStruct); }
	unsigned char BPGetWiegthedAttackOverride(float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<unsigned char, float, float, AActor*>(this, "APrimalDinoCharacter.BPGetWiegthedAttackOverride(float,float,AActor*)", distance, attackRangeOffset, OtherTarget); }
	void AddHostileStacks(int NumStacksToAdd, bool bShareWithTribeMembers, bool bShareWithOfflineMembers) { NativeCall<void, int, bool, bool>(this, "APrimalDinoCharacter.AddHostileStacks(int,bool,bool)", NumStacksToAdd, bShareWithTribeMembers, bShareWithOfflineMembers); }
	float DoOverrideMountedAirControl_Implementation(float AirControlIn) { return NativeCall<float, float>(this, "APrimalDinoCharacter.DoOverrideMountedAirControl_Implementation(float)", AirControlIn); }
	void ServerInterruptLanding() { NativeCall<void>(this, "APrimalDinoCharacter.ServerInterruptLanding()"); }
	static void GetbIgnoreAllWhistles_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIgnoreAllWhistles_WrapperImpl(void*,void*)", Object, OutValue); }
	void SetForcedAggro(ITargetableInterface* Targetable, float AggroAmount, float ForcedAggroTime) { NativeCall<void, ITargetableInterface*, float, float>(this, "APrimalDinoCharacter.SetForcedAggro(ITargetableInterface*,float,float)", Targetable, AggroAmount, ForcedAggroTime); }
	static void SetCarriedCharacter_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetCarriedCharacter_WrapperImpl(void*,void*)", Object, InValue); }
	void OnSuccessfulImprinting() { NativeCall<void>(this, "APrimalDinoCharacter.OnSuccessfulImprinting()"); }
	void ClearMeleeSwingHurtList() { NativeCall<void>(this, "APrimalDinoCharacter.ClearMeleeSwingHurtList()"); }
	static void SetbDisableHarvesting_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbDisableHarvesting_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPOverrideIsSubmergedForWaterTargeting_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOverrideIsSubmergedForWaterTargeting_Implementation()"); }
	static void GetbHasBotRider_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbHasBotRider_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPUntamedConsumeFoodItem(UPrimalItem* foodItem) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.BPUntamedConsumeFoodItem(UPrimalItem*)", foodItem); }
	static void SetbIsLatchedDownward_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsLatchedDownward_WrapperImpl(void*,void*)", Object, InValue); }
	bool AreSpawnerSublevelsLoaded() { return NativeCall<bool>(this, "APrimalDinoCharacter.AreSpawnerSublevelsLoaded()"); }
	void SetStasisComponentRadius(float StasisOverrideRadius) { NativeCall<void, float>(this, "APrimalDinoCharacter.SetStasisComponentRadius(float)", StasisOverrideRadius); }
	float BPOverrideHealthBarOffset(APlayerController* forPC) { return NativeCall<float, APlayerController*>(this, "APrimalDinoCharacter.BPOverrideHealthBarOffset(APlayerController*)", forPC); }
	void RemovedFromPatrolGroup() { NativeCall<void>(this, "APrimalDinoCharacter.RemovedFromPatrolGroup()"); }
	static void GetTribeGroupPetRidingRank_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTribeGroupPetRidingRank_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BP_InterceptTurnInput(float axisValue) { return NativeCall<bool, float>(this, "APrimalDinoCharacter.BP_InterceptTurnInput(float)", axisValue); }
	void OnRep_CarriedCharacter() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_CarriedCharacter()"); }
	static bool GetDinoIdleFidgetAnimationsEnabled() { return NativeCall<bool>(nullptr, "APrimalDinoCharacter.GetDinoIdleFidgetAnimationsEnabled()"); }
	AActor* GetTamedFollowTargetNoRider() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.GetTamedFollowTargetNoRider()"); }
	UE::Math::TVector<double>* GetTPVCameraOffset(UE::Math::TVector<double>* result, bool bForASACamera) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APrimalDinoCharacter.GetTPVCameraOffset(bool)", result, bForASACamera); }
	static void GetbIsLatchedDownward_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsLatchedDownward_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* GetPlayerSpawnLocation_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetPlayerSpawnLocation_Implementation()", result); }
	bool IsValidMatingClassCheck(APrimalDinoCharacter* OtherDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.IsValidMatingClassCheck(APrimalDinoCharacter*)", OtherDino); }
	float ModifyAirControl(float AirControlIn) { return NativeCall<float, float>(this, "APrimalDinoCharacter.ModifyAirControl(float)", AirControlIn); }
	bool AutoRequestSaddleItemContainerInventories() { return NativeCall<bool>(this, "APrimalDinoCharacter.AutoRequestSaddleItemContainerInventories()"); }
	float GetRiderSkillModifier(FName SkillName, FName ModifierName, float FallbackValue) { return NativeCall<float, FName, FName, float>(this, "APrimalDinoCharacter.GetRiderSkillModifier(FName,FName,float)", SkillName, ModifierName, FallbackValue); }
	bool BP_PreventCarryingByCharacter(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.BP_PreventCarryingByCharacter(APrimalCharacter*)", ByCarrier); }
	bool CanNurseDino(APrimalDinoCharacter* OtherDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.CanNurseDino(APrimalDinoCharacter*)", OtherDino); }
	bool PreventShowingDinoTooltip_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.PreventShowingDinoTooltip_Implementation()"); }
	static void GetbRotateToFaceLatchingObject_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbRotateToFaceLatchingObject_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetInterpolatedLocation()", result); }
	void OnRandomIdleFidgetAnimPlayed(int AnimIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.OnRandomIdleFidgetAnimPlayed(int)", AnimIndex); }
	bool BPOnStopJump() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOnStopJump()"); }
	FString* GetCryopodTraitString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalDinoCharacter.GetCryopodTraitString()", result); }
	void CheckBabyCuddleWalkDistance() { NativeCall<void>(this, "APrimalDinoCharacter.CheckBabyCuddleWalkDistance()"); }
	float GenerateRandomLookAtTargetDuration() { return NativeCall<float>(this, "APrimalDinoCharacter.GenerateRandomLookAtTargetDuration()"); }
	UE::Math::TVector<double>* GetMoveGoalOffset(UE::Math::TVector<double>* result, const AActor* MovingActor) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalDinoCharacter.GetMoveGoalOffset(AActor*)", result, MovingActor); }
	static void SetbIgnoreAllWhistles_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIgnoreAllWhistles_WrapperImpl(void*,void*)", Object, InValue); }
	int BPOverrideTamingTeamForTrackingTamingDino_Implementation(int PlayerRequestingTeamID) { return NativeCall<int, int>(this, "APrimalDinoCharacter.BPOverrideTamingTeamForTrackingTamingDino_Implementation(int)", PlayerRequestingTeamID); }
	bool IsRiddenByImprinter() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsRiddenByImprinter()"); }
	bool GetInstanceOverrideByValue_IsAlphaEliteMegaDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.GetInstanceOverrideByValue_IsAlphaEliteMegaDino()"); }
	void BPOnDinoCheat(FName CheatName, bool bSetValue, float Value) { NativeCall<void, FName, bool, float>(this, "APrimalDinoCharacter.BPOnDinoCheat(FName,bool,float)", CheatName, bSetValue, Value); }
	bool IsCorruptDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsCorruptDino()"); }
	bool HasCartEquipped() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasCartEquipped()"); }
	bool MaxTamedDinos_SoftTameLimit_IsCreatureDestructionCountdownActive() { return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureDestructionCountdownActive()"); }
	static void SetbRotateToFaceLatchingObject_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbRotateToFaceLatchingObject_WrapperImpl(void*,void*)", Object, InValue); }
	void ServerUpdateAttackTargets(AActor* AttackTarget, UE::Math::TVector<double>* AttackLocation) { if (!AttackLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >>(this, "APrimalDinoCharacter.ServerUpdateAttackTargets(AActor*,UE::Math::TVector<double>)", AttackTarget, *AttackLocation); }
	static void SetSaddleStruct_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetSaddleStruct_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPCanAutodrag(APrimalCharacter* characterToDrag) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.BPCanAutodrag(APrimalCharacter*)", characterToDrag); }
	static void SetbIsRepairing_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsRepairing_WrapperImpl(void*,void*)", Object, InValue); }
	float GetImprintQualitySpeedForItem(UPrimalItem* Item) { return NativeCall<float, UPrimalItem*>(this, "APrimalDinoCharacter.GetImprintQualitySpeedForItem(UPrimalItem*)", Item); }
	bool BPModifyControlRotation(const UE::Math::TRotator<double>& controlRotation, UE::Math::TRotator<double>& outControlRotation) { return NativeCall<bool, const UE::Math::TRotator<double>&, UE::Math::TRotator<double>&>(this, "APrimalDinoCharacter.BPModifyControlRotation(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", controlRotation, outControlRotation); }
	static void GetDinoDownloadedAtTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetDinoDownloadedAtTime_WrapperImpl(void*,void*)", Object, OutValue); }
	void EndThrottledWandering() { NativeCall<void>(this, "APrimalDinoCharacter.EndThrottledWandering()"); }
	void BPDidClearCarriedCharacter(APrimalCharacter* WithPreviousCarriedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPDidClearCarriedCharacter(APrimalCharacter*)", WithPreviousCarriedCharacter); }
	void BPBeginRiderAttackTargetWindow(int AttackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.BPBeginRiderAttackTargetWindow(int)", AttackIndex); }
	float BPModifyHarvestDamage_Implementation(const UPrimalHarvestingComponent* harvestComponent, float inDamage) { return NativeCall<float, const UPrimalHarvestingComponent*, float>(this, "APrimalDinoCharacter.BPModifyHarvestDamage_Implementation(UPrimalHarvestingComponent*,float)", harvestComponent, inDamage); }
	static void SetbIsCloneDino_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsCloneDino_WrapperImpl(void*,void*)", Object, InValue); }
	void ClientInterruptLanding() { NativeCall<void>(this, "APrimalDinoCharacter.ClientInterruptLanding()"); }
	static void GetbEnableTamedWandering_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbEnableTamedWandering_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbForceDisableClientGravitySim_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbForceDisableClientGravitySim_WrapperImpl(void*,void*)", Object, OutValue); }
	void SetWildLimitTargetVolume(AVolume* ToVolume) { NativeCall<void, AVolume*>(this, "APrimalDinoCharacter.SetWildLimitTargetVolume(AVolume*)", ToVolume); }
	float GetInstanceOverrideByValue_LoseStaminaWithRiderRate() { return NativeCall<float>(this, "APrimalDinoCharacter.GetInstanceOverrideByValue_LoseStaminaWithRiderRate()"); }
	bool BPForceUseMultiUseCenterText(AShooterPlayerController* ForPC, int UseIndex) { return NativeCall<bool, AShooterPlayerController*, int>(this, "APrimalDinoCharacter.BPForceUseMultiUseCenterText(AShooterPlayerController*,int)", ForPC, UseIndex); }
	bool AlwaysAllowTargetingByWaterDinos() { return NativeCall<bool>(this, "APrimalDinoCharacter.AlwaysAllowTargetingByWaterDinos()"); }
	bool PreventSpawnDeathEssenceBase() { return NativeCall<bool>(this, "APrimalDinoCharacter.PreventSpawnDeathEssenceBase()"); }
	TArray<float, TSizedDefaultAllocator<32> >* BPGetColorSetIntensityMultipliers(TArray<float, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<float, TSizedDefaultAllocator<32> >*, TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalDinoCharacter.BPGetColorSetIntensityMultipliers()", result); }
	void TamedDinoUnstasisHealthRecovery(double ForceTimeSinceStasis) { NativeCall<void, double>(this, "APrimalDinoCharacter.TamedDinoUnstasisHealthRecovery(double)", ForceTimeSinceStasis); }
	void BPSetupTamed(bool bWasJustTamed) { NativeCall<void, bool>(this, "APrimalDinoCharacter.BPSetupTamed(bool)", bWasJustTamed); }
	void BPOnSetFlight(bool bFly) { NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnSetFlight(bool)", bFly); }
	static void SetDinoDownloadedAtTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetDinoDownloadedAtTime_WrapperImpl(void*,void*)", Object, InValue); }
	float BP_GetCustomModifier_MaxSpeed() { return NativeCall<float>(this, "APrimalDinoCharacter.BP_GetCustomModifier_MaxSpeed()"); }
	bool DoesDinoHaveBasedPawns(bool bRequireActivePawns) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.DoesDinoHaveBasedPawns(bool)", bRequireActivePawns); }
	static void SetbIsWandering_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsWandering_WrapperImpl(void*,void*)", Object, InValue); }
	void SetLastAttackTimeForAttack(int AttackIndex, double NewTime) { NativeCall<void, int, double>(this, "APrimalDinoCharacter.SetLastAttackTimeForAttack(int,double)", AttackIndex, NewTime); }
	bool MaxTamedDinos_SoftTameLimit_FreshlyUnsetCreatureMarkedForSoftTameLimitDestruction_IfApplicable(bool AlreadyMarked) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_FreshlyUnsetCreatureMarkedForSoftTameLimitDestruction_IfApplicable(bool)", AlreadyMarked); }
	void RegisterWithSignificanceManager() { NativeCall<void>(this, "APrimalDinoCharacter.RegisterWithSignificanceManager()"); }
	bool IsRepairable(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalDinoCharacter.IsRepairable(AShooterPlayerController*)", ForPC); }
	FName GetSocketForMeleeTraceForHitBlockers(int AttackIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "APrimalDinoCharacter.GetSocketForMeleeTraceForHitBlockers(int)", AsaReturnPointer, AttackIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool IsWaterDino() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsWaterDino()"); }
	bool IsMatingEnabled() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsMatingEnabled()"); }
	static void GetCarriedCharacter_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetCarriedCharacter_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPUnsetupDinoTameable() { NativeCall<void>(this, "APrimalDinoCharacter.BPUnsetupDinoTameable()"); }
	static void GetbDisableHarvesting_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbDisableHarvesting_WrapperImpl(void*,void*)", Object, OutValue); }
	float BPOverrideAttachedSoundPitchMultiplier() { return NativeCall<float>(this, "APrimalDinoCharacter.BPOverrideAttachedSoundPitchMultiplier()"); }
	static void SetbIsInTurretMode_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsInTurretMode_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPPreventUpdateMountedHiddenShadow() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventUpdateMountedHiddenShadow()"); }
	void BPOnGestationChange(bool bIsGestating) { NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnGestationChange(bool)", bIsGestating); }
	static void GetMutagenApplied_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetMutagenApplied_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsWildWandering() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsWildWandering()"); }
	void MaxTamedDinos_SoftTameLimit_DestroyAfterCountdown() { NativeCall<void>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_DestroyAfterCountdown()"); }
	bool CanEquipCarts_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanEquipCarts_Implementation()"); }
	void BPBecomeBaby() { NativeCall<void>(this, "APrimalDinoCharacter.BPBecomeBaby()"); }
	void BPKilledSomethingEvent_Implementation(APrimalCharacter* killedTarget) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPKilledSomethingEvent_Implementation(APrimalCharacter*)", killedTarget); }
	bool IsPublicTeleporter() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsPublicTeleporter()"); }
	void ServerSetRiderMountedWeaponRotationYawPitch_Implementation(float InValYaw, float InValPitch) { NativeCall<void, float, float>(this, "APrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch_Implementation(float,float)", InValYaw, InValPitch); }
	void BPForceReachedDestination() { NativeCall<void>(this, "APrimalDinoCharacter.BPForceReachedDestination()"); }
	bool WildCanDamageFoliage() { return NativeCall<bool>(this, "APrimalDinoCharacter.WildCanDamageFoliage()"); }
	void ApplyMutagen() { NativeCall<void>(this, "APrimalDinoCharacter.ApplyMutagen()"); }
	bool BPPreventSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "APrimalDinoCharacter.BPPreventSpawnForPlayer(AShooterPlayerController*,bool)", PC, bCheckCooldownTime); }
	UE::Math::TVector<double>* GetSocketLocationTemp(UE::Math::TVector<double>* result, FName SocketName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "APrimalDinoCharacter.GetSocketLocationTemp(FName)", result, SocketName); }
	static void GetbIsLatching_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsLatching_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TRotator<double>* GetPlayerSpawnRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.GetPlayerSpawnRotation()", result); }
	bool AllowTickPhysics() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowTickPhysics()"); }
	void OnAsPassengerMovedToSeat(int FromIndex, int ToIndex) { NativeCall<void, int, int>(this, "APrimalDinoCharacter.OnAsPassengerMovedToSeat(int,int)", FromIndex, ToIndex); }
	bool CanPlayerCheatSpawn(APlayerController* player) { return NativeCall<bool, APlayerController*>(this, "APrimalDinoCharacter.CanPlayerCheatSpawn(APlayerController*)", player); }
	static void SetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetMaxTamedDinos_SoftTameLimit_MarkedForDeletionTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbHasPlayerController_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbHasPlayerController_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetTamedName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTamedName_WrapperImpl(void*,void*)", Object, InValue); }
	void BP_OverrideBasedCharactersCameraInterpSpeed(APrimalCharacter* ForBasedChar, float DefaultTPVCameraSpeedInterpMultiplier, float DefaultTPVOffsetInterpSpeed, float& TPVCameraSpeedInterpMultiplier, float& TPVOffsetInterpSpeed) { NativeCall<void, APrimalCharacter*, float, float, float&, float&>(this, "APrimalDinoCharacter.BP_OverrideBasedCharactersCameraInterpSpeed(APrimalCharacter*,float,float,float&,float&)", ForBasedChar, DefaultTPVCameraSpeedInterpMultiplier, DefaultTPVOffsetInterpSpeed, TPVCameraSpeedInterpMultiplier, TPVOffsetInterpSpeed); }
	void BPOnCheatAddMutation() { NativeCall<void>(this, "APrimalDinoCharacter.BPOnCheatAddMutation()"); }
	void GetDinoIDs(int& OutDinoID1, int& OutDinoID2) { NativeCall<void, int&, int&>(this, "APrimalDinoCharacter.GetDinoIDs(int&,int&)", OutDinoID1, OutDinoID2); }
	void GetDinoIDsAsStrings(FString& OutDinoID1, FString& OutDinoID2) { NativeCall<void, FString&, FString&>(this, "APrimalDinoCharacter.GetDinoIDsAsStrings(FString&,FString&)", OutDinoID1, OutDinoID2); }
	void BPOnDinoFiredProjectile(AShooterProjectile* Projectile) { NativeCall<void, AShooterProjectile*>(this, "APrimalDinoCharacter.BPOnDinoFiredProjectile(AShooterProjectile*)", Projectile); }
	bool PlayRandomIdleFidgetAnimation(float& outAnimLength, int& outAnimIndex) { return NativeCall<bool, float&, int&>(this, "APrimalDinoCharacter.PlayRandomIdleFidgetAnimation(float&,int&)", outAnimLength, outAnimIndex); }
	bool BPPreventCopySettingsToDino(APrimalDinoCharacter* OtherDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.BPPreventCopySettingsToDino(APrimalDinoCharacter*)", OtherDino); }
	bool ShouldDisableTPVCameraInterpolationWhileBasedOn() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldDisableTPVCameraInterpolationWhileBasedOn()"); }
	float BPGetCrosshairAlpha() { return NativeCall<float>(this, "APrimalDinoCharacter.BPGetCrosshairAlpha()"); }
	bool BPCanTakePassenger(APrimalCharacter* Character, int PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos) { return NativeCall<bool, APrimalCharacter*, int, bool, bool>(this, "APrimalDinoCharacter.BPCanTakePassenger(APrimalCharacter*,int,bool,bool)", Character, PassengerSeatIndex, bForcePassenger, bAllowFlyersAndWaterDinos); }
	TArray<APawn*, TSizedDefaultAllocator<32> >* GetDinoBasedPawns(TArray<APawn*, TSizedDefaultAllocator<32> >* result, USceneComponent* OnComponent, bool bOnlyActivePawns) { return NativeCall<TArray<APawn*, TSizedDefaultAllocator<32> >*, TArray<APawn*, TSizedDefaultAllocator<32> >*, USceneComponent*, bool>(this, "APrimalDinoCharacter.GetDinoBasedPawns(USceneComponent*,bool)", result, OnComponent, bOnlyActivePawns); }
	static void GetbBonesHidden_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbBonesHidden_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetCurrentSpecificHarvestResourceIndex_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetCurrentSpecificHarvestResourceIndex_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPShowTamingPanel(bool currentVisibility) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.BPShowTamingPanel(bool)", currentVisibility); }
	static void SetbHasBotRider_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbHasBotRider_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetUploadEarliestValidTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetUploadEarliestValidTime_WrapperImpl(void*,void*)", Object, OutValue); }
	bool DoesUseHibernation() { return NativeCall<bool>(this, "APrimalDinoCharacter.DoesUseHibernation()"); }
	void HandleMountedDinoAction(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.HandleMountedDinoAction(AShooterPlayerController*)", PC); }
	bool BPPreventOrderAllowed(APrimalCharacter* FromCharacter, EDinoTamedOrder::Type OrderType, bool bForce, AActor* enemyTarget, bool orderNotExecuted) { return NativeCall<bool, APrimalCharacter*, EDinoTamedOrder::Type, bool, AActor*, bool>(this, "APrimalDinoCharacter.BPPreventOrderAllowed(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,bool)", FromCharacter, OrderType, bForce, enemyTarget, orderNotExecuted); }
	bool GetReplicatedAttackTargets(AActor*& OutAttackTarget, UE::Math::TVector<double>& OutAttackLocation) { return NativeCall<bool, AActor*&, UE::Math::TVector<double>&>(this, "APrimalDinoCharacter.GetReplicatedAttackTargets(AActor*&,UE::Math::TVector<double>&)", OutAttackTarget, OutAttackLocation); }
	static void GetbCuddleRequestRefreshed_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbCuddleRequestRefreshed_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPPreventUploading() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPPreventUploading()"); }
	bool AllowPhysMovementSweeps() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowPhysMovementSweeps()"); }
	void BPOnClearMountedDino(bool bIsSecondary) { NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnClearMountedDino(bool)", bIsSecondary); }
	static void SetTamerString_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTamerString_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPModifyDesiredRotation(float DeltaTime, const UE::Math::TRotator<double>& InDesiredRotation, UE::Math::TRotator<double>& OutDesiredRotation) { return NativeCall<bool, float, const UE::Math::TRotator<double>&, UE::Math::TRotator<double>&>(this, "APrimalDinoCharacter.BPModifyDesiredRotation(float,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", DeltaTime, InDesiredRotation, OutDesiredRotation); }
	void BPOnResetBoneModifiers() { NativeCall<void>(this, "APrimalDinoCharacter.BPOnResetBoneModifiers()"); }
	bool IKFootTrace(int LegIndex, FIKLegInfo& LegInfo, UE::Math::TVector<double>* ActorLocation, UE::Math::TVector<double>* ActorForward, UE::Math::TVector<double>* TraceDirection, float TraceDistance) { if (!ActorLocation) throw std::invalid_argument("Null native value parameter"); if (!ActorForward) throw std::invalid_argument("Null native value parameter"); if (!TraceDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, int, FIKLegInfo &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, float>(this, "APrimalDinoCharacter.IKFootTrace(int,FIKLegInfo&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float)", LegIndex, LegInfo, *ActorLocation, *ActorForward, *TraceDirection, TraceDistance); }
	void MaxTamedDinos_SoftTameLimit_UpdateCreatureStatusRegardingSoftTameLimitDestruction(bool DecrementTimeInStasis, float DeltaSeconds, bool IsTheInitialGamemodeSearch) { NativeCall<void, bool, float, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_UpdateCreatureStatusRegardingSoftTameLimitDestruction(bool,float,bool)", DecrementTimeInStasis, DeltaSeconds, IsTheInitialGamemodeSearch); }
	void BPNotifyStructurePlacedNearby(APrimalStructure* NewStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.BPNotifyStructurePlacedNearby(APrimalStructure*)", NewStructure); }
	static void GetbCheatForceTameRide_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbCheatForceTameRide_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetAIFollowStoppingDistanceOffset() { return NativeCall<float>(this, "APrimalDinoCharacter.GetAIFollowStoppingDistanceOffset()"); }
	UE::Math::TVector<double>* GetActorCenterTraceLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetActorCenterTraceLocation()", result); }
	static void SetbIsParentWildDino_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsParentWildDino_WrapperImpl(void*,void*)", Object, InValue); }
	void RefreshAttachments() { NativeCall<void>(this, "APrimalDinoCharacter.RefreshAttachments()"); }
	bool ControllerCanOrder(AController* FromController, bool bBuildingStructures) { return NativeCall<bool, AController*, bool>(this, "APrimalDinoCharacter.ControllerCanOrder(AController*,bool)", FromController, bBuildingStructures); }
	void SetRandomLookAtTarget(AActor* NewTarget) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.SetRandomLookAtTarget(AActor*)", NewTarget); }
	void BPKilledSomethingEvent(APrimalCharacter* killedTarget) { NativeCall<void, APrimalCharacter*>(this, "APrimalDinoCharacter.BPKilledSomethingEvent(APrimalCharacter*)", killedTarget); }
	void UnregisterWithSignificanceManager() { NativeCall<void>(this, "APrimalDinoCharacter.UnregisterWithSignificanceManager()"); }
	void DestroyController() { NativeCall<void>(this, "APrimalDinoCharacter.DestroyController()"); }
	void BPDoAttack(int AttackIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.BPDoAttack(int)", AttackIndex); }
	void AnimNotifyMountedDino() { NativeCall<void>(this, "APrimalDinoCharacter.AnimNotifyMountedDino()"); }
	static void GetbOnlyTargetConscious_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbOnlyTargetConscious_WrapperImpl(void*,void*)", Object, OutValue); }
	void ServerCheckIfWildDinoChildCanBeImprintedTimerFunction() { NativeCall<void>(this, "APrimalDinoCharacter.ServerCheckIfWildDinoChildCanBeImprintedTimerFunction()"); }
	void ServerRequestToggleFlight() { NativeCall<void>(this, "APrimalDinoCharacter.ServerRequestToggleFlight()"); }
	void BSetupDinoTameable() { NativeCall<void>(this, "APrimalDinoCharacter.BSetupDinoTameable()"); }
	bool IsSwimmingWithAttachedBox_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsSwimmingWithAttachedBox_Implementation()"); }
	static void GetTribeGroupPetOrderingRank_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTribeGroupPetOrderingRank_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbCuddleRequestRefreshed_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbCuddleRequestRefreshed_WrapperImpl(void*,void*)", Object, InValue); }
	bool UsePlayerControlCollisionIK() { return NativeCall<bool>(this, "APrimalDinoCharacter.UsePlayerControlCollisionIK()"); }
	static void SetImprinterName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetImprinterName_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetCurrentSpecificHarvestResourceIndex_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetCurrentSpecificHarvestResourceIndex_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TRotator<double>* GetPlayerSpawnRotation_Implementation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalDinoCharacter.GetPlayerSpawnRotation_Implementation()", result); }
	bool ShouldTreatPassengerAsCarriedCharacterForDamage(APrimalCharacter* Passenger) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.ShouldTreatPassengerAsCarriedCharacterForDamage(APrimalCharacter*)", Passenger); }
	static void GetTamedName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTamedName_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* GetLandingLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetLandingLocation()", result); }
	bool ShouldEnableIKBasedOn() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldEnableIKBasedOn()"); }
	bool BPDisplayTamedMessage() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPDisplayTamedMessage()"); }
	void StartSurfaceCameraForPassenger(AShooterCharacter* Passenger, float yaw, float pitch, float roll, bool bInvertTurnInput) { NativeCall<void, AShooterCharacter*, float, float, float, bool>(this, "APrimalDinoCharacter.StartSurfaceCameraForPassenger(AShooterCharacter*,float,float,float,bool)", Passenger, yaw, pitch, roll, bInvertTurnInput); }
	bool CanPlayRandomIdleFidgetAnimation_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanPlayRandomIdleFidgetAnimation_Implementation()"); }
	static void SetTamedAITargetingRange_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTamedAITargetingRange_WrapperImpl(void*,void*)", Object, InValue); }
	FName BPGetDragSocketName(APrimalCharacter* DraggingChar) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, APrimalCharacter *>(this, "APrimalDinoCharacter.BPGetDragSocketName(APrimalCharacter*)", AsaReturnPointer, DraggingChar); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static void SetbPassiveFlee_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbPassiveFlee_WrapperImpl(void*,void*)", Object, InValue); }
	bool MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyMarkedForDestruction(bool AlreadyMarked) { return NativeCall<bool, bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_ShouldCreatureBeNewlyMarkedForDestruction(bool)", AlreadyMarked); }
	bool BPCanPassengerManuallyUnboard(APrimalCharacter* PassengerChar, int PassengerSeatIndex) { return NativeCall<bool, APrimalCharacter*, int>(this, "APrimalDinoCharacter.BPCanPassengerManuallyUnboard(APrimalCharacter*,int)", PassengerChar, PassengerSeatIndex); }
	void ForceSetTamedAggressionLevel(int AggressionLevel) { NativeCall<void, int>(this, "APrimalDinoCharacter.ForceSetTamedAggressionLevel(int)", AggressionLevel); }
	static void GetPreventMateBoostUntilTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetPreventMateBoostUntilTime_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetBabyGestationProgress_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetBabyGestationProgress_WrapperImpl(void*,void*)", Object, OutValue); }
	void AddedImprintingQuality(float Amount) { NativeCall<void, float>(this, "APrimalDinoCharacter.AddedImprintingQuality(float)", Amount); }
	float BP_GetCustomModifier_RotationRate() { return NativeCall<float>(this, "APrimalDinoCharacter.BP_GetCustomModifier_RotationRate()"); }
	static void GetbCollectVictimItems_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbCollectVictimItems_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPAllowTeamToTrackTamingDino_Implementation(int TargetingTeamID) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPAllowTeamToTrackTamingDino_Implementation(int)", TargetingTeamID); }
	bool IsPhysicalPrimalRaft() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsPhysicalPrimalRaft()"); }
	AActor* BPGetTamedFollowTarget() { return NativeCall<AActor*>(this, "APrimalDinoCharacter.BPGetTamedFollowTarget()"); }
	static void SetbIsTemporaryMissionDino_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsTemporaryMissionDino_WrapperImpl(void*,void*)", Object, InValue); }
	void SetNextAllowedMatingTime(double nextAllowedMatingTime) { NativeCall<void, double>(this, "APrimalDinoCharacter.SetNextAllowedMatingTime(double)", nextAllowedMatingTime); }
	void BPOverrideCameraViewTarget(FName CurrentCameraMode, UE::Math::TVector<double>* DesiredCameraLocation, UE::Math::TRotator<double>* DesiredCameraRotation, float DesiredFOV, bool& bOverrideCameraLocation, UE::Math::TVector<double>& CameraLocation, bool& bOverrideCameraRotation, UE::Math::TRotator<double>& CameraRotation, bool& bOverrideCameraFOV, float& CameraFOV) { if (!DesiredCameraLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredCameraRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, float, bool &, UE :: Math :: TVector < double > &, bool &, UE :: Math :: TRotator < double > &, bool &, float &>(this, "APrimalDinoCharacter.BPOverrideCameraViewTarget(FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,bool&,UE::Math::TVector<double>&,bool&,UE::Math::TRotator<double>&,bool&,float&)", CurrentCameraMode, *DesiredCameraLocation, *DesiredCameraRotation, DesiredFOV, bOverrideCameraLocation, CameraLocation, bOverrideCameraRotation, CameraRotation, bOverrideCameraFOV, CameraFOV); }
	void BrakeDinoBP(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.BrakeDinoBP(float)", Val); }
	void LowerDinoBP(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.LowerDinoBP(float)", Val); }
	UAnimSequence* GetSecondaryDinoMountedAnimOverride() { return NativeCall<UAnimSequence*>(this, "APrimalDinoCharacter.GetSecondaryDinoMountedAnimOverride()"); }
	void BPNotifyTamedLevelsRemoved(int NumLevelsRemoved) { NativeCall<void, int>(this, "APrimalDinoCharacter.BPNotifyTamedLevelsRemoved(int)", NumLevelsRemoved); }
	float BPUnstasisConsumeFood(float FoodNeeded) { return NativeCall<float, float>(this, "APrimalDinoCharacter.BPUnstasisConsumeFood(float)", FoodNeeded); }
	void BPOnEndCharging() { NativeCall<void>(this, "APrimalDinoCharacter.BPOnEndCharging()"); }
	void BPGetCurrentAttackTargets(AActor*& OutAttackTarget, UE::Math::TVector<double>& OutAttackLocation, bool& bOutHasTarget, bool bAllowFriendlyTargets) { NativeCall<void, AActor*&, UE::Math::TVector<double>&, bool&, bool>(this, "APrimalDinoCharacter.BPGetCurrentAttackTargets(AActor*&,UE::Math::TVector<double>&,bool&,bool)", OutAttackTarget, OutAttackLocation, bOutHasTarget, bAllowFriendlyTargets); }
	void BP_OnUncryo(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.BP_OnUncryo(AShooterPlayerController*)", ForPC); }
	static void SetbOnlyTargetConscious_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbOnlyTargetConscious_WrapperImpl(void*,void*)", Object, InValue); }
	void SetForceDisableClientGravitySim(bool bForceDisable) { NativeCall<void, bool>(this, "APrimalDinoCharacter.SetForceDisableClientGravitySim(bool)", bForceDisable); }
	void RemoveFromMeleeSwingHurtList(AActor* AnActor) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.RemoveFromMeleeSwingHurtList(AActor*)", AnActor); }
	bool PreventSpawnDeathEssence() { return NativeCall<bool>(this, "APrimalDinoCharacter.PreventSpawnDeathEssence()"); }
	bool CanCombineMoves() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanCombineMoves()"); }
	bool RecentlyHadRider(float threshold) { return NativeCall<bool, float>(this, "APrimalDinoCharacter.RecentlyHadRider(float)", threshold); }
	void BPTamedConsumeFoodItem(UPrimalItem* foodItem) { NativeCall<void, UPrimalItem*>(this, "APrimalDinoCharacter.BPTamedConsumeFoodItem(UPrimalItem*)", foodItem); }
	UE::Math::TVector<double>* BPGetRiderUnboardDirection(UE::Math::TVector<double>* result, APrimalCharacter* RidingCharacter) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalDinoCharacter.BPGetRiderUnboardDirection(APrimalCharacter*)", result, RidingCharacter); }
	bool HasSelfBuried_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.HasSelfBuried_Implementation()"); }
	static void GetbReachedMaxStructures_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbReachedMaxStructures_WrapperImpl(void*,void*)", Object, OutValue); }
	void StopRepair() { NativeCall<void>(this, "APrimalDinoCharacter.StopRepair()"); }
	float GetCurrentMaxRepairHealthPercentage() { return NativeCall<float>(this, "APrimalDinoCharacter.GetCurrentMaxRepairHealthPercentage()"); }
	static void SetbCheatForceTameRide_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbCheatForceTameRide_WrapperImpl(void*,void*)", Object, InValue); }
	void BPOnRepIsCharging() { NativeCall<void>(this, "APrimalDinoCharacter.BPOnRepIsCharging()"); }
	static void GetbPassiveFlee_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbPassiveFlee_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPKilledSomethingEventWithInfo(APrimalCharacter* killedTarget, float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer) { NativeCall<void, APrimalCharacter*, float, const FDamageEvent&, AController*>(this, "APrimalDinoCharacter.BPKilledSomethingEventWithInfo(APrimalCharacter*,float,FDamageEvent&,AController*)", killedTarget, KillingDamage, DamageEvent, Killer); }
	static void GetbIsTemporaryMissionDino_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsTemporaryMissionDino_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbIsParentWildDino_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIsParentWildDino_WrapperImpl(void*,void*)", Object, OutValue); }
	void ClearCharacterAIMovement() { NativeCall<void>(this, "APrimalDinoCharacter.ClearCharacterAIMovement()"); }
	bool GetTyrantsInfluenceEffect(UE::Math::TVector2<double>& Values) { return NativeCall<bool, UE::Math::TVector2<double>&>(this, "APrimalDinoCharacter.GetTyrantsInfluenceEffect(UE::Math::TVector2<double>&)", Values); }
	bool BPCanDragCharacter(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalDinoCharacter.BPCanDragCharacter(APrimalCharacter*)", Character); }
	static void GetGangCount_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetGangCount_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetTamedFollowTarget_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTamedFollowTarget_WrapperImpl(void*,void*)", Object, InValue); }
	void BPSentKilledNotification(AShooterPlayerController* ToPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPSentKilledNotification(AShooterPlayerController*)", ToPC); }
	void BPDinoPostBeginPlay() { NativeCall<void>(this, "APrimalDinoCharacter.BPDinoPostBeginPlay()"); }
	static void GetNextAllowedBedUseTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetNextAllowedBedUseTime_WrapperImpl(void*,void*)", Object, OutValue); }
	void BP_OnLandingInterruptedNotify() { NativeCall<void>(this, "APrimalDinoCharacter.BP_OnLandingInterruptedNotify()"); }
	static UScriptStruct* StaticGetPrimalDinoCharacterSparseClassDataScriptStruct() { return NativeCall<UScriptStruct*>(nullptr, "APrimalDinoCharacter.StaticGetPrimalDinoCharacterSparseClassDataScriptStruct()"); }
	bool ShouldRouteGiveHarvestingResourcesToCustomFunction() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldRouteGiveHarvestingResourcesToCustomFunction()"); }
	static void GetTamedAITargetingRange_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetTamedAITargetingRange_WrapperImpl(void*,void*)", Object, OutValue); }
	bool WantsToEnableNavRelevancy_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.WantsToEnableNavRelevancy_Implementation()"); }
	float GetInventoryWeightMultiplierForSaddledContainers() { return NativeCall<float>(this, "APrimalDinoCharacter.GetInventoryWeightMultiplierForSaddledContainers()"); }
	void SetMovementAccelerationVector(UE::Math::TVector<double>* fVector) { if (!fVector) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalDinoCharacter.SetMovementAccelerationVector(UE::Math::TVector<double>)", *fVector); }
	UE::Math::TRotator<double>* ModifyAimOffsetRandomLookAtTarget(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& Aim) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "APrimalDinoCharacter.ModifyAimOffsetRandomLookAtTarget(UE::Math::TRotator<double>&)", result, Aim); }
	void OnSaddleStructRemoved(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.OnSaddleStructRemoved(APrimalStructure*)", TheStruct); }
	static void SetUploadedFromServerName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetUploadedFromServerName_WrapperImpl(void*,void*)", Object, InValue); }
	void BP_OnBasedPawnRemovedNotify(AActor* RemovedActor) { NativeCall<void, AActor*>(this, "APrimalDinoCharacter.BP_OnBasedPawnRemovedNotify(AActor*)", RemovedActor); }
	void MaxTamedDinos_SoftTameLimit_DecrementTimeSinceStasis() { NativeCall<void>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_DecrementTimeSinceStasis()"); }
	float GetDinoDeathTime() { return NativeCall<float>(this, "APrimalDinoCharacter.GetDinoDeathTime()"); }
	bool BP_PreventUnmounting() { return NativeCall<bool>(this, "APrimalDinoCharacter.BP_PreventUnmounting()"); }
	static void GetCustomReplicatedData_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetCustomReplicatedData_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPHandleOnStopFire() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPHandleOnStopFire()"); }
	bool GetForceTickPose() { return NativeCall<bool>(this, "APrimalDinoCharacter.GetForceTickPose()"); }
	void AddDinoReferenceInLatchingStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.AddDinoReferenceInLatchingStructure(APrimalStructure*)", Structure); }
	static void GetbIgnoreAllyLook_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbIgnoreAllyLook_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetOwningPlayerID_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetOwningPlayerID_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbIsHordeDino_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsHordeDino_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsRiderSkillUnlocked(FName SkillName) { return NativeCall<bool, FName>(this, "APrimalDinoCharacter.IsRiderSkillUnlocked(FName)", SkillName); }
	float GetDistanceToSpawnedLocation() { return NativeCall<float>(this, "APrimalDinoCharacter.GetDistanceToSpawnedLocation()"); }
	FString* BP_OverrideDinoName(FString* result, const FString& CurrentDinoName, APlayerController* ForPC) { return NativeCall<FString*, FString*, const FString&, APlayerController*>(this, "APrimalDinoCharacter.BP_OverrideDinoName(FString&,APlayerController*)", result, CurrentDinoName, ForPC); }
	USceneComponent* GetOverrideAttachedSaddleMesh_Implementation() { return NativeCall<USceneComponent*>(this, "APrimalDinoCharacter.GetOverrideAttachedSaddleMesh_Implementation()"); }
	void SetPreventSaving(bool fPreventSaving) { NativeCall<void, bool>(this, "APrimalDinoCharacter.SetPreventSaving(bool)", fPreventSaving); }
	UE::Math::TVector<double>* GetRestrictedCarriedPlayerViewEndLoc(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalDinoCharacter.GetRestrictedCarriedPlayerViewEndLoc()", result); }
	bool BPAllowTeamToTrackTamingDino(int TargetingTeamID) { return NativeCall<bool, int>(this, "APrimalDinoCharacter.BPAllowTeamToTrackTamingDino(int)", TargetingTeamID); }
	static void SetGeneTraits_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetGeneTraits_WrapperImpl(void*,void*)", Object, InValue); }
	bool BP_AllowWalkableSlopeOverride(UPrimitiveComponent* ForComponent) { return NativeCall<bool, UPrimitiveComponent*>(this, "APrimalDinoCharacter.BP_AllowWalkableSlopeOverride(UPrimitiveComponent*)", ForComponent); }
	bool AllowPhysWalking() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowPhysWalking()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalDinoCharacter._getUObject()"); }
	static void SetBabyCuddleFood_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetBabyCuddleFood_WrapperImpl(void*,void*)", Object, InValue); }
	bool MovePassengerToSeat(int FromIndex, int ToIndex) { return NativeCall<bool, int, int>(this, "APrimalDinoCharacter.MovePassengerToSeat(int,int)", FromIndex, ToIndex); }
	static void SetWildRandomScale_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetWildRandomScale_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbEnableTamedMating_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbEnableTamedMating_WrapperImpl(void*,void*)", Object, InValue); }
	void BPPreServerUploadDino(AShooterPlayerController* UploadedBy) { NativeCall<void, AShooterPlayerController*>(this, "APrimalDinoCharacter.BPPreServerUploadDino(AShooterPlayerController*)", UploadedBy); }
	bool ShouldSkipForceUpdateWhenAimedCharacter() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldSkipForceUpdateWhenAimedCharacter()"); }
	void ShowInsufficientStaminaMessage() { NativeCall<void>(this, "APrimalDinoCharacter.ShowInsufficientStaminaMessage()"); }
	bool CanBoardCharacters_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanBoardCharacters_Implementation()"); }
	static void SetbBonesHidden_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbBonesHidden_WrapperImpl(void*,void*)", Object, InValue); }
	UAnimSequence* BPOverridePassengerAdditiveAnim(APrimalCharacter* ForPassenger) { return NativeCall<UAnimSequence*, APrimalCharacter*>(this, "APrimalDinoCharacter.BPOverridePassengerAdditiveAnim(APrimalCharacter*)", ForPassenger); }
	void OnRep_bIsFlying() { NativeCall<void>(this, "APrimalDinoCharacter.OnRep_bIsFlying()"); }
	static void GetOwningPlayerName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetOwningPlayerName_WrapperImpl(void*,void*)", Object, OutValue); }
	float DoOverrideMountedAirControl(float AirControlIn) { return NativeCall<float, float>(this, "APrimalDinoCharacter.DoOverrideMountedAirControl(float)", AirControlIn); }
	bool AllowedToPlayIdleFidgetAnimations() { return NativeCall<bool>(this, "APrimalDinoCharacter.AllowedToPlayIdleFidgetAnimations()"); }
	bool MaxTamedDinos_SoftTameLimit_IsCreatureMarkedForDestruction() { return NativeCall<bool>(this, "APrimalDinoCharacter.MaxTamedDinos_SoftTameLimit_IsCreatureMarkedForDestruction()"); }
	bool IsTamingDisabled() { return NativeCall<bool>(this, "APrimalDinoCharacter.IsTamingDisabled()"); }
	bool CanPlayRandomIdleFidgetAnimation() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanPlayRandomIdleFidgetAnimation()"); }
	static void GetLastMovementDesiredRotation_MountedWeaponry_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetLastMovementDesiredRotation_MountedWeaponry_WrapperImpl(void*,void*)", Object, OutValue); }
	bool UsesDinoAutoDestroyDecay() { return NativeCall<bool>(this, "APrimalDinoCharacter.UsesDinoAutoDestroyDecay()"); }
	static void GetbAllowPublicSeating_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbAllowPublicSeating_WrapperImpl(void*,void*)", Object, OutValue); }
	void FireMultipleProjectiles(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Locations, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Directions, bool bScaleProjectileDamageByDinoDamage) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, bool>(this, "APrimalDinoCharacter.FireMultipleProjectiles(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,bool)", Locations, Directions, bScaleProjectileDamageByDinoDamage); }
	bool BPIsLandingOnDino(const UE::Math::TVector<double>& Location) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalDinoCharacter.BPIsLandingOnDino(UE::Math::TVector<double>&)", Location); }
	static void SetTameIneffectivenessModifier_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetTameIneffectivenessModifier_WrapperImpl(void*,void*)", Object, InValue); }
	float BPClampMaxHarvestHealth() { return NativeCall<float>(this, "APrimalDinoCharacter.BPClampMaxHarvestHealth()"); }
	void BPNotifyClaimed() { NativeCall<void>(this, "APrimalDinoCharacter.BPNotifyClaimed()"); }
	void ServerFinishedLanding() { NativeCall<void>(this, "APrimalDinoCharacter.ServerFinishedLanding()"); }
	void UpdateCached_GeneTraitWeightReductions() { NativeCall<void>(this, "APrimalDinoCharacter.UpdateCached_GeneTraitWeightReductions()"); }
	bool GetDinoUsesStat(int StatTypeIndex, bool bWild) { return NativeCall<bool, int, bool>(this, "APrimalDinoCharacter.GetDinoUsesStat(int,bool)", StatTypeIndex, bWild); }
	bool BP_InterceptMoveRight(float axisValue) { return NativeCall<bool, float>(this, "APrimalDinoCharacter.BP_InterceptMoveRight(float)", axisValue); }
	int WakingTameConsumeFoodItem(AShooterPlayerController* ForPC, UPrimalItem* TheItem, bool bAlsoRemoveItemsFromLastItemSlot) { return NativeCall<int, AShooterPlayerController*, UPrimalItem*, bool>(this, "APrimalDinoCharacter.WakingTameConsumeFoodItem(AShooterPlayerController*,UPrimalItem*,bool)", ForPC, TheItem, bAlsoRemoveItemsFromLastItemSlot); }
	static void SetLastMovementDesiredRotation_MountedWeaponry_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetLastMovementDesiredRotation_MountedWeaponry_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbIgnoreAllyLook_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIgnoreAllyLook_WrapperImpl(void*,void*)", Object, InValue); }
	void ReduceTameEffectiveness(float PercentPoints) { NativeCall<void, float>(this, "APrimalDinoCharacter.ReduceTameEffectiveness(float)", PercentPoints); }
	void ElevateDinoBP(float Val) { NativeCall<void, float>(this, "APrimalDinoCharacter.ElevateDinoBP(float)", Val); }
	int GetNumAvailablePassengerSeats(bool bOnlyManualPassengerSeats) { return NativeCall<int, bool>(this, "APrimalDinoCharacter.GetNumAvailablePassengerSeats(bool)", bOnlyManualPassengerSeats); }
	void BPOnSetMountedDino(bool bIsSecondary) { NativeCall<void, bool>(this, "APrimalDinoCharacter.BPOnSetMountedDino(bool)", bIsSecondary); }
	float BPGetCurrentSignificance() { return NativeCall<float>(this, "APrimalDinoCharacter.BPGetCurrentSignificance()"); }
	static void SetbHasPlayerController_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbHasPlayerController_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TVector<double>* BPModifyAimOffsetTargetLocation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& AimTargetLocation) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalDinoCharacter.BPModifyAimOffsetTargetLocation(UE::Math::TVector<double>&)", result, AimTargetLocation); }
	void BPNotifySetRider(AShooterCharacter* RiderSetting) { NativeCall<void, AShooterCharacter*>(this, "APrimalDinoCharacter.BPNotifySetRider(AShooterCharacter*)", RiderSetting); }
	bool CanSkipAnimGraph() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanSkipAnimGraph()"); }
	void CopySettingsToOtherDino(APlayerController* ForPC, APrimalDinoCharacter* FromDino, APrimalDinoCharacter* OtherDino, int SettingTypeUseIndex) { NativeCall<void, APlayerController*, APrimalDinoCharacter*, APrimalDinoCharacter*, int>(this, "APrimalDinoCharacter.CopySettingsToOtherDino(APlayerController*,APrimalDinoCharacter*,APrimalDinoCharacter*,int)", ForPC, FromDino, OtherDino, SettingTypeUseIndex); }
	bool CanThrottleWanderingMovement() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanThrottleWanderingMovement()"); }
	void BPOnTamedProcessOrder(APrimalCharacter* FromCharacter, EDinoTamedOrder::Type OrderType, bool bForce, AActor* enemyTarget, bool orderNotExecuted) { NativeCall<void, APrimalCharacter*, EDinoTamedOrder::Type, bool, AActor*, bool>(this, "APrimalDinoCharacter.BPOnTamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*,bool)", FromCharacter, OrderType, bForce, enemyTarget, orderNotExecuted); }
	AActor* BPSetTamedFollowTarget(AActor* NewTarget) { return NativeCall<AActor*, AActor*>(this, "APrimalDinoCharacter.BPSetTamedFollowTarget(AActor*)", NewTarget); }
	bool ShouldAttackOfPlayedAnimationStopMovement() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldAttackOfPlayedAnimationStopMovement()"); }
	bool CanFly() { return NativeCall<bool>(this, "APrimalDinoCharacter.CanFly()"); }
	bool BPOverrideRiderInventoryAccessInput_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOverrideRiderInventoryAccessInput_Implementation()"); }
	void BPSetForcedAggro(AActor* TargetableActor, float AggroAmount, float ForcedAggroTime) { NativeCall<void, AActor*, float, float>(this, "APrimalDinoCharacter.BPSetForcedAggro(AActor*,float,float)", TargetableActor, AggroAmount, ForcedAggroTime); }
	void OnSaddleStructLoaded(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalDinoCharacter.OnSaddleStructLoaded(APrimalStructure*)", TheStruct); }
	static void GetUploadedFromServerName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetUploadedFromServerName_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetAttackCooldownTimeRemaining(int Index, bool& CooldownOver) { return NativeCall<float, int, bool&>(this, "APrimalDinoCharacter.GetAttackCooldownTimeRemaining(int,bool&)", Index, CooldownOver); }
	void BPBecomeAdult() { NativeCall<void>(this, "APrimalDinoCharacter.BPBecomeAdult()"); }
	static void SetbIsCharging_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsCharging_WrapperImpl(void*,void*)", Object, InValue); }
	UE::Math::TVector<double>* GetPassengerOffset(UE::Math::TVector<double>* result, APrimalCharacter* Passenger) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*>(this, "APrimalDinoCharacter.GetPassengerOffset(APrimalCharacter*)", result, Passenger); }
	static void SetCustomReplicatedData_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetCustomReplicatedData_WrapperImpl(void*,void*)", Object, InValue); }
	void ClientStartLanding(UE::Math::TVector<double>* landingLoc) { if (!landingLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalDinoCharacter.ClientStartLanding(UE::Math::TVector<double>)", *landingLoc); }
	bool ShouldActivateNavigationInvokerComponent() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldActivateNavigationInvokerComponent()"); }
	bool BPForceTurretFastTargeting() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPForceTurretFastTargeting()"); }
	static void SetbIsNursing_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbIsNursing_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetbAllowPublicSeating_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbAllowPublicSeating_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPForcePreventMountedWeaponry() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPForcePreventMountedWeaponry()"); }
	int BPOverrideGetAttackAnimationIndex(int AttackIndex, const TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& AnimationArray) { return NativeCall<int, int, const TArray<UAnimMontage*, TSizedDefaultAllocator<32> >&>(this, "APrimalDinoCharacter.BPOverrideGetAttackAnimationIndex(int,TArray<UAnimMontage*,TSizedDefaultAllocator<32>>&)", AttackIndex, AnimationArray); }
	bool UpdateHasBuffPreventingUploading() { return NativeCall<bool>(this, "APrimalDinoCharacter.UpdateHasBuffPreventingUploading()"); }
	bool ShouldPreventHibernation() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldPreventHibernation()"); }
	float GetImprintQualitySpeedForItem_Implementation(UPrimalItem* Item) { return NativeCall<float, UPrimalItem*>(this, "APrimalDinoCharacter.GetImprintQualitySpeedForItem_Implementation(UPrimalItem*)", Item); }
	void ProcessOrderFollowTarget(AActor* TheTarget, bool bClearFollowTargets) { NativeCall<void, AActor*, bool>(this, "APrimalDinoCharacter.ProcessOrderFollowTarget(AActor*,bool)", TheTarget, bClearFollowTargets); }
	bool BPOnStartJump_Implementation() { return NativeCall<bool>(this, "APrimalDinoCharacter.BPOnStartJump_Implementation()"); }
	static void GetbEnableTamedMating_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalDinoCharacter.GetbEnableTamedMating_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPClearForcedAggro() { NativeCall<void>(this, "APrimalDinoCharacter.BPClearForcedAggro()"); }
	void BPOnRiderShoulderMountDinoChange(bool bIsClear, AShooterCharacter* ForRider, APrimalDinoCharacter* ForShoulderMount, bool bIsSecondary) { NativeCall<void, bool, AShooterCharacter*, APrimalDinoCharacter*, bool>(this, "APrimalDinoCharacter.BPOnRiderShoulderMountDinoChange(bool,AShooterCharacter*,APrimalDinoCharacter*,bool)", bIsClear, ForRider, ForShoulderMount, bIsSecondary); }
	void ServerSetRiderMountedWeaponRotationYawPitch(float InValYaw, float InValPitch) { NativeCall<void, float, float>(this, "APrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch(float,float)", InValYaw, InValPitch); }
	UE::Math::TVector<double>* BPGetPassengerDinoAdditionalOffset(UE::Math::TVector<double>* result, APrimalDinoCharacter* Passenger) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalDinoCharacter*>(this, "APrimalDinoCharacter.BPGetPassengerDinoAdditionalOffset(APrimalDinoCharacter*)", result, Passenger); }
	bool BP_InterceptMoveForward(float axisValue) { return NativeCall<bool, float>(this, "APrimalDinoCharacter.BP_InterceptMoveForward(float)", axisValue); }
	bool ShouldDinoThatSupportsStructuresPreventBasing() { return NativeCall<bool>(this, "APrimalDinoCharacter.ShouldDinoThatSupportsStructuresPreventBasing()"); }
	int WakingTameGetNumItemsToConsume(UPrimalItem* TheItem) { return NativeCall<int, UPrimalItem*>(this, "APrimalDinoCharacter.WakingTameGetNumItemsToConsume(UPrimalItem*)", TheItem); }
	static void SetbForceHideSaddle_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetbForceHideSaddle_WrapperImpl(void*,void*)", Object, InValue); }
	void ClearTamedLandTarget() { NativeCall<void>(this, "APrimalDinoCharacter.ClearTamedLandTarget()"); }
	void BPNotifyClearRider(AShooterCharacter* RiderClearing) { NativeCall<void, AShooterCharacter*>(this, "APrimalDinoCharacter.BPNotifyClearRider(AShooterCharacter*)", RiderClearing); }
	float GetMaxRepairHealth() { return NativeCall<float>(this, "APrimalDinoCharacter.GetMaxRepairHealth()"); }
	void BPDoHarvestAttack(int harvestIndex) { NativeCall<void, int>(this, "APrimalDinoCharacter.BPDoHarvestAttack(int)", harvestIndex); }
	void DoNeuter() { NativeCall<void>(this, "APrimalDinoCharacter.DoNeuter()"); }
	static void SetOwningPlayerName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalDinoCharacter.SetOwningPlayerName_WrapperImpl(void*,void*)", Object, InValue); }
};