#pragma once
#include "BulkForward.h"


struct UPrimalCharacterStatusComponent : UActorComponent
{
	// Fields

	TEnumAsByte<enum ELevelExperienceRampType::Type>& LevelExperienceRampTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELevelExperienceRampType::Type>*>(this, "UPrimalCharacterStatusComponent.LevelExperienceRampType"); }
	FieldArray<float, 12> MaxStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.MaxStatusValues" }; }
	FieldArray<float, 12> BaseLevelMaxStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.BaseLevelMaxStatusValues" }; }
	FieldArray<unsigned __int8, 12> NumberOfLevelUpPointsAppliedField() { return { this, "UPrimalCharacterStatusComponent.NumberOfLevelUpPointsApplied" }; }
	FieldArray<unsigned __int8, 12> NumberOfLevelUpPointsAppliedTamedField() { return { this, "UPrimalCharacterStatusComponent.NumberOfLevelUpPointsAppliedTamed" }; }
	FieldArray<unsigned __int8, 12> NumberOfMutationsAppliedTamedField() { return { this, "UPrimalCharacterStatusComponent.NumberOfMutationsAppliedTamed" }; }
	float& TamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedIneffectivenessModifier"); }
	float& MovingStaminaRecoveryRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MovingStaminaRecoveryRateMultiplier"); }
	FieldArray<float, 12> RecoveryRateStatusValueField() { return { this, "UPrimalCharacterStatusComponent.RecoveryRateStatusValue" }; }
	FieldArray<float, 12> TimeToRecoverAfterDepletionStatusValueField() { return { this, "UPrimalCharacterStatusComponent.TimeToRecoverAfterDepletionStatusValue" }; }
	FieldArray<float, 12> TimeToRecoverAfterDecreaseStatusValueField() { return { this, "UPrimalCharacterStatusComponent.TimeToRecoverAfterDecreaseStatusValue" }; }
	FieldArray<float, 12> AmountMaxGainedPerLevelUpValueField() { return { this, "UPrimalCharacterStatusComponent.AmountMaxGainedPerLevelUpValue" }; }
	FieldArray<float, 12> AmountMaxGainedPerLevelUpValueTamedField() { return { this, "UPrimalCharacterStatusComponent.AmountMaxGainedPerLevelUpValueTamed" }; }
	FieldArray<unsigned __int8, 12> MaxGainedPerLevelUpValueIsPercentField() { return { this, "UPrimalCharacterStatusComponent.MaxGainedPerLevelUpValueIsPercent" }; }
	FieldArray<unsigned __int8, 12> RecoveryRateIsPercentField() { return { this, "UPrimalCharacterStatusComponent.RecoveryRateIsPercent" }; }
	FieldArray<float, 12> TamingMaxStatMultipliersField() { return { this, "UPrimalCharacterStatusComponent.TamingMaxStatMultipliers" }; }
	FieldArray<float, 12> TamingMaxStatAdditionsField() { return { this, "UPrimalCharacterStatusComponent.TamingMaxStatAdditions" }; }
	FieldArray<float, 12> MaxLevelUpMultiplierField() { return { this, "UPrimalCharacterStatusComponent.MaxLevelUpMultiplier" }; }
	FieldArray<float, 12> MutationMultiplierField() { return { this, "UPrimalCharacterStatusComponent.MutationMultiplier" }; }
	float& TamedLandDinoSwimSpeedLevelUpEffectivenessField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedLandDinoSwimSpeedLevelUpEffectiveness"); }
	float& TamingIneffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamingIneffectivenessMultiplier"); }
	float& DinoRiderWeightMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoRiderWeightMultiplier"); }
	FieldArray<unsigned __int8, 12> CanLevelUpValueField() { return { this, "UPrimalCharacterStatusComponent.CanLevelUpValue" }; }
	FieldArray<unsigned __int8, 12> DontUseValueField() { return { this, "UPrimalCharacterStatusComponent.DontUseValue" }; }
	FieldArray<unsigned __int8, 12> SkipWildLevelUpValueField() { return { this, "UPrimalCharacterStatusComponent.SkipWildLevelUpValue" }; }
	FieldArray<FPrimalCharacterStatusStateThresholds, 12> StatusStateThresholdsField() { return { this, "UPrimalCharacterStatusComponent.StatusStateThresholds" }; }
	float& ExperienceAutomaticConsciousIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExperienceAutomaticConsciousIncreaseSpeed"); }
	float& CheatMaxWeightField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CheatMaxWeight"); }
	int& CharacterStatusComponentPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterStatusComponent.CharacterStatusComponentPriority"); }
	float& SuffocationHealthPercentDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SuffocationHealthPercentDecreaseSpeed"); }
	float& UnsubmergedOxygenIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.UnsubmergedOxygenIncreaseSpeed"); }
	float& SubmergedOxygenDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SubmergedOxygenDecreaseSpeed"); }
	float& RunningStaminaConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.RunningStaminaConsumptionRate"); }
	float& WalkingStaminaConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WalkingStaminaConsumptionRate"); }
	float& SwimmingOrFlyingStaminaConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SwimmingOrFlyingStaminaConsumptionRate"); }
	float& JumpStaminaConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.JumpStaminaConsumption"); }
	float& WindedSpeedModifierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WindedSpeedModifier"); }
	float& WindedSpeedModifierSwimmingOrFlyingField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WindedSpeedModifierSwimmingOrFlying"); }
	float& InjuredSpeedModifierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InjuredSpeedModifier"); }
	float& HypothermicHealthDecreaseRateBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermicHealthDecreaseRateBase"); }
	float& HypothermicHealthDecreaseRatePerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermicHealthDecreaseRatePerDegree"); }
	float& HyperthermicHealthDecreaseRateBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermicHealthDecreaseRateBase"); }
	float& HyperthermicHealthDecreaseRatePerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermicHealthDecreaseRatePerDegree"); }
	float& XPEarnedPerStaminaConsumedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.XPEarnedPerStaminaConsumed"); }
	float& KillXPMultiplierPerCharacterLevelField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KillXPMultiplierPerCharacterLevel"); }
	float& ShareXPWithTribeRangeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ShareXPWithTribeRange"); }
	int& BaseCharacterLevelField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterStatusComponent.BaseCharacterLevel"); }
	unsigned __int16& ExtraCharacterLevelField() { return *GetNativePointerField<unsigned __int16*>(this, "UPrimalCharacterStatusComponent.ExtraCharacterLevel"); }
	float& ExperiencePointsField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExperiencePoints"); }
	float& ReplicatedExperiencePointsField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ReplicatedExperiencePoints"); }
	float& MaxExperiencePointsField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MaxExperiencePoints"); }
	float& BaseFoodConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BaseFoodConsumptionRate"); }
	float& BaseWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BaseWaterConsumptionRate"); }
	float& FortitudeTorpidityDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FortitudeTorpidityDecreaseMultiplier"); }
	float& FortitudeTorpidityIncreaseResistanceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FortitudeTorpidityIncreaseResistance"); }
	float& SubmergedWaterIncreaseRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SubmergedWaterIncreaseRate"); }
	float& CrouchedWaterFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CrouchedWaterFoodConsumptionMultiplier"); }
	float& ProneWaterFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ProneWaterFoodConsumptionMultiplier"); }
	float& StaminaRecoveryDecreaseFoodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryDecreaseFoodMultiplier"); }
	float& StaminaRecoveryDecreaseWaterMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryDecreaseWaterMultiplier"); }
	float& HealthRecoveryDecreaseFoodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HealthRecoveryDecreaseFoodMultiplier"); }
	float& BabyDinoConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyDinoConsumingFoodRateMultiplier"); }
	float& DinoTamedAdultConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoTamedAdultConsumingFoodRateMultiplier"); }
	float& BabyGestationConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyGestationConsumingFoodRateMultiplier"); }
	float& BabyDinoStarvationHealthDecreaseRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyDinoStarvationHealthDecreaseRateMultiplier"); }
	float& BabyMaxHealthPercentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyMaxHealthPercent"); }
	float& CrouchedStaminaConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CrouchedStaminaConsumptionMultiplier"); }
	float& ProneStaminaConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ProneStaminaConsumptionMultiplier"); }
	float& StarvationHealthConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationHealthConsumptionRate"); }
	float& DehyrdationHealthConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehyrdationHealthConsumptionRate"); }
	float& StaminaConsumptionDecreaseWaterMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaConsumptionDecreaseWaterMultiplier"); }
	float& StaminaConsumptionDecreaseFoodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaConsumptionDecreaseFoodMultiplier"); }
	float& HypothermiaDecreaseFoodMultiplierBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaDecreaseFoodMultiplierBase"); }
	float& HypothermiaDecreaseFoodMultiplierPerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaDecreaseFoodMultiplierPerDegree"); }
	float& HyperthermiaDecreaseWaterMultiplierBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaDecreaseWaterMultiplierBase"); }
	float& HyperthermiaDecreaseWaterMultiplierPerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaDecreaseWaterMultiplierPerDegree"); }
	float& HyperthermiaTemperatureThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaTemperatureThreshold"); }
	float& HypothermiaTemperatureThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaTemperatureThreshold"); }
	float& TorporExitPercentThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TorporExitPercentThreshold"); }
	float& KnockedOutTorpidityRecoveryRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KnockedOutTorpidityRecoveryRateMultiplier"); }
	float& DehydrationTorpidityMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehydrationTorpidityMultiplier"); }
	float& StarvationTorpidityMultuplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationTorpidityMultuplier"); }
	float& StarvationTorpidityIncreaseRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationTorpidityIncreaseRate"); }
	float& DehyrdationTorpidityIncreaseRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehyrdationTorpidityIncreaseRate"); }
	float& InjuredTorpidityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InjuredTorpidityIncreaseMultiplier"); }
	float& WeightSpeedDecreasePowerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightSpeedDecreasePower"); }
	float& WeightJumpDecreasePowerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightJumpDecreasePower"); }
	float& PoopItemMinFoodConsumptionIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemMinFoodConsumptionInterval"); }
	float& PoopItemMaxFoodConsumptionIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemMaxFoodConsumptionInterval"); }
	float& TheMaxTorporIncreasePerBaseLevelField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TheMaxTorporIncreasePerBaseLevel"); }
	float& CurrentStatusValuesReplicationIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CurrentStatusValuesReplicationInterval"); }
	float& InsulationHyperthermiaOffsetExponentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHyperthermiaOffsetExponent"); }
	float& InsulationHyperthermiaOffsetScalerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHyperthermiaOffsetScaler"); }
	float& InsulationHypothermiaOffsetExponentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHypothermiaOffsetExponent"); }
	float& InsulationHypothermiaOffsetScalerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHypothermiaOffsetScaler"); }
	float& HypoCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypoCharacterInsulationValue"); }
	float& HyperCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperCharacterInsulationValue"); }
	float& PoopItemFoodConsumptionCacheField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemFoodConsumptionCache"); }
	float& LastHypothermalCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.LastHypothermalCharacterInsulationValue"); }
	float& LastHyperthermalCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.LastHyperthermalCharacterInsulationValue"); }
	float& GenericXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.GenericXPMultiplier"); }
	float& CraftEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CraftEarnXPMultiplier"); }
	float& MinInventoryWeightField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MinInventoryWeight"); }
	float& KillEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KillEarnXPMultiplier"); }
	float& GenericEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.GenericEarnXPMultiplier"); }
	float& SpecialEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SpecialEarnXPMultiplier"); }
	float& ExplorerNoteEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExplorerNoteEarnXPMultiplier"); }
	float& HarvestEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HarvestEarnXPMultiplier"); }
	float& DefaultHyperthermicInsulationField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultHyperthermicInsulation"); }
	float& DefaultHypothermicInsulationField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultHypothermicInsulation"); }
	float& MaxTamingEffectivenessBaseLevelMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MaxTamingEffectivenessBaseLevelMultiplier"); }
	FString& FoodStatusNameOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalCharacterStatusComponent.FoodStatusNameOverride"); }
	UTexture2D*& FoodStatusIconBackgroundOverrideField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalCharacterStatusComponent.FoodStatusIconBackgroundOverride"); }
	UTexture2D*& FoodStatusIconForegroundOverrideField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalCharacterStatusComponent.FoodStatusIconForegroundOverride"); }
	TArray<FPrimalCharacterStatusValueModifier, TSizedDefaultAllocator<32> >& StatusValueModifiersField() { return *GetNativePointerField<TArray<FPrimalCharacterStatusValueModifier, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.StatusValueModifiers"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& StatusValueModifierDescriptionIndicesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.StatusValueModifierDescriptionIndices"); }
	FieldArray<float, 12> CurrentStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.CurrentStatusValues" }; }
	FieldArray<float, 12> AdditionalStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.AdditionalStatusValues" }; }
	FieldArray<float, 12> ReplicatedCurrentStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.ReplicatedCurrentStatusValues" }; }
	FieldArray<float, 12> ReplicatedGlobalMaxStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.ReplicatedGlobalMaxStatusValues" }; }
	FieldArray<float, 12> ReplicatedBaseLevelMaxStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.ReplicatedBaseLevelMaxStatusValues" }; }
	FieldArray<float, 12> ReplicatedGlobalCurrentStatusValuesField() { return { this, "UPrimalCharacterStatusComponent.ReplicatedGlobalCurrentStatusValues" }; }
	FieldArray<char, 12> CurrentStatusStatesField() { return { this, "UPrimalCharacterStatusComponent.CurrentStatusStates" }; }
	FieldArray<long double, 12> LastDecreasedStatusValuesTimesField() { return { this, "UPrimalCharacterStatusComponent.LastDecreasedStatusValuesTimes" }; }
	FieldArray<long double, 12> LastIncreasedStatusValuesTimesField() { return { this, "UPrimalCharacterStatusComponent.LastIncreasedStatusValuesTimes" }; }
	FieldArray<long double, 12> LastMaxedStatusValuesTimesField() { return { this, "UPrimalCharacterStatusComponent.LastMaxedStatusValuesTimes" }; }
	FieldArray<long double, 12> LastDepletedStatusValuesTimesField() { return { this, "UPrimalCharacterStatusComponent.LastDepletedStatusValuesTimes" }; }
	float& StaminaRecoveryExtraResourceDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryExtraResourceDecreaseMultiplier"); }
	float& DehydrationStaminaRecoveryRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehydrationStaminaRecoveryRate"); }
	float& WaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WaterConsumptionMultiplier"); }
	float& FoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FoodConsumptionMultiplier"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >& EnteredStatusStateSoundsField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.EnteredStatusStateSounds"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >& ExitStatusStateSoundsField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.ExitStatusStateSounds"); }
	float& ExtraOxygenSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraOxygenSpeedStatMultiplier"); }
	float& ExtraTamedHealthMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraTamedHealthMultiplier"); }
	float& WakingTameFoodConsumptionRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WakingTameFoodConsumptionRateMultiplier"); }
	float& SwimmingStaminaRecoveryRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SwimmingStaminaRecoveryRateMultiplier"); }
	float& ExtraWaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraWaterConsumptionMultiplier"); }
	float& ExtraFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraFoodConsumptionMultiplier"); }
	float& DefaultMaxOxygenField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultMaxOxygen"); }
	long double& LastReplicatedCurrentStatusValuesTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent.LastReplicatedCurrentStatusValuesTime"); }
	float& OriginalMaxTorporField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.OriginalMaxTorpor"); }
	float& MountedDinoDinoWeightMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MountedDinoDinoWeightMultiplier"); }
	float& ExtraWildDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraWildDinoDamageMultiplier"); }
	float& ExtraTamedDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraTamedDinoDamageMultiplier"); }
	float& WeightMultiplierWhenCarriedOrBasedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierWhenCarriedOrBased"); }
	float& WeightMultiplierForCarriedPassengersField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierForCarriedPassengers"); }
	float& WeightMultiplierForPlatformPassengersInventoryField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierForPlatformPassengersInventory"); }
	FieldArray<float, 12> DinoMaxStatAddMultiplierImprintingField() { return { this, "UPrimalCharacterStatusComponent.DinoMaxStatAddMultiplierImprinting" }; }
	float& DinoImprintingQualityField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoImprintingQuality"); }
	float& TamedBaseHealthMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedBaseHealthMultiplier"); }
	float& ExtraBabyDinoConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraBabyDinoConsumingFoodRateMultiplier"); }
	TArray<FString, TSizedDefaultAllocator<32> >& StatusValueNameOverridesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.StatusValueNameOverrides"); }
	TSubclassOf<UDamageType>& RegainOxygenDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "UPrimalCharacterStatusComponent.RegainOxygenDamageType"); }
	bool& bInWeightLockField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bInWeightLock"); }
	long double& LastReplicatedXPTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent.LastReplicatedXPTime"); }
	bool& bHasUnlockedMaxDinoLevelAchievementThisSessionField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bHasUnlockedMaxDinoLevelAchievementThisSession"); }
	long double& DeferredLevelUpSaveTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent.DeferredLevelUpSaveTimeSeconds"); }
	//TArray<FHUDStatusEntry, TSizedDefaultAllocator<32> >& HUDStatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FHUDStatusEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.HUDStatusValueModifierDescriptions"); }
	//FieldArray<FHUDStatusEntry, 14> HUDStatusStatesField() { return { this, "UPrimalCharacterStatusComponent.HUDStatusStates" }; }
	TArray<float, TSizedDefaultAllocator<32> >& LevelUpStatWeightOverridesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.LevelUpStatWeightOverrides"); }
	float BPGetMaxStatusValue(EPrimalCharacterStatusValue::Type valueType) const { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetMaxStatusValue(EPrimalCharacterStatusValue::Type)", valueType); }
	float BPGetCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType) const { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetCurrentStatusValue(EPrimalCharacterStatusValue::Type)", valueType); }
	int GetNumLevelUpsAvailable() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetNumLevelUpsAvailable()"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bCanSuffocate() { return { this, "UPrimalCharacterStatusComponent.bCanSuffocate" }; }
	BitFieldValue<bool, unsigned __int32> bCanSuffocateIfTamed() { return { this, "UPrimalCharacterStatusComponent.bCanSuffocateIfTamed" }; }
	BitFieldValue<bool, unsigned __int32> bCanGetHungry() { return { this, "UPrimalCharacterStatusComponent.bCanGetHungry" }; }
	BitFieldValue<bool, unsigned __int32> bUseStamina() { return { this, "UPrimalCharacterStatusComponent.bUseStamina" }; }
	BitFieldValue<bool, unsigned __int32> bWalkingConsumesStamina() { return { this, "UPrimalCharacterStatusComponent.bWalkingConsumesStamina" }; }
	BitFieldValue<bool, unsigned __int32> bRunningConsumesStamina() { return { this, "UPrimalCharacterStatusComponent.bRunningConsumesStamina" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeFoodAutomatically() { return { this, "UPrimalCharacterStatusComponent.bConsumeFoodAutomatically" }; }
	BitFieldValue<bool, unsigned __int32> bInfiniteFood() { return { this, "UPrimalCharacterStatusComponent.bInfiniteFood" }; }
	BitFieldValue<bool, unsigned __int32> bAddExperienceAutomatically() { return { this, "UPrimalCharacterStatusComponent.bAddExperienceAutomatically" }; }
	BitFieldValue<bool, unsigned __int32> bConsumeWaterAutomatically() { return { this, "UPrimalCharacterStatusComponent.bConsumeWaterAutomatically" }; }
	BitFieldValue<bool, unsigned __int32> bAutomaticallyUpdateTemperature() { return { this, "UPrimalCharacterStatusComponent.bAutomaticallyUpdateTemperature" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateGlobalStatusValues() { return { this, "UPrimalCharacterStatusComponent.bReplicateGlobalStatusValues" }; }
	BitFieldValue<bool, unsigned __int32> bAllowLevelUps() { return { this, "UPrimalCharacterStatusComponent.bAllowLevelUps" }; }
	BitFieldValue<bool, unsigned __int32> bInfiniteStats() { return { this, "UPrimalCharacterStatusComponent.bInfiniteStats" }; }
	BitFieldValue<bool, unsigned __int32> bAllowSharingXPWithTribe() { return { this, "UPrimalCharacterStatusComponent.bAllowSharingXPWithTribe" }; }
	BitFieldValue<bool, unsigned __int32> bUseStatusSpeedModifiers() { return { this, "UPrimalCharacterStatusComponent.bUseStatusSpeedModifiers" }; }
	BitFieldValue<bool, unsigned __int32> bStatusSpeedModifierOnlyFullOrNone() { return { this, "UPrimalCharacterStatusComponent.bStatusSpeedModifierOnlyFullOrNone" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreStatusSpeedModifierIfSwimming() { return { this, "UPrimalCharacterStatusComponent.bIgnoreStatusSpeedModifierIfSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bPreventJump() { return { this, "UPrimalCharacterStatusComponent.bPreventJump" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedBaseLevelMaxStatusValues() { return { this, "UPrimalCharacterStatusComponent.bInitializedBaseLevelMaxStatusValues" }; }
	BitFieldValue<bool, unsigned __int32> bInitializedMe() { return { this, "UPrimalCharacterStatusComponent.bInitializedMe" }; }
	BitFieldValue<bool, unsigned __int32> bServerFirstInitialized() { return { this, "UPrimalCharacterStatusComponent.bServerFirstInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bRunningUseDefaultSpeed() { return { this, "UPrimalCharacterStatusComponent.bRunningUseDefaultSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bNeverAllowXP() { return { this, "UPrimalCharacterStatusComponent.bNeverAllowXP" }; }
	BitFieldValue<bool, unsigned __int32> bPreventTamedStatReplication() { return { this, "UPrimalCharacterStatusComponent.bPreventTamedStatReplication" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustStatusValueModification() { return { this, "UPrimalCharacterStatusComponent.bUseBPAdjustStatusValueModification" }; }
	BitFieldValue<bool, unsigned __int32> bForceDefaultSpeed() { return { this, "UPrimalCharacterStatusComponent.bForceDefaultSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bCheatStatus() { return { this, "UPrimalCharacterStatusComponent.bCheatStatus" }; }
	BitFieldValue<bool, unsigned __int32> bForceRefreshWeight() { return { this, "UPrimalCharacterStatusComponent.bForceRefreshWeight" }; }
	BitFieldValue<bool, unsigned __int32> bHideFoodStatusFromHUD() { return { this, "UPrimalCharacterStatusComponent.bHideFoodStatusFromHUD" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetStatusNameString() { return { this, "UPrimalCharacterStatusComponent.bUseBPGetStatusNameString" }; }
	BitFieldValue<bool, unsigned __int32> bHideStaminaStatusFromHUD() { return { this, "UPrimalCharacterStatusComponent.bHideStaminaStatusFromHUD" }; }
	BitFieldValue<bool, unsigned __int32> bDontUseSpeedMultipleAsSpeed() { return { this, "UPrimalCharacterStatusComponent.bDontUseSpeedMultipleAsSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bForceGainOxygen() { return { this, "UPrimalCharacterStatusComponent.bForceGainOxygen" }; }
	BitFieldValue<bool, unsigned __int32> bFreezeStatusValues() { return { this, "UPrimalCharacterStatusComponent.bFreezeStatusValues" }; }
	BitFieldValue<bool, unsigned __int32> bTicked() { return { this, "UPrimalCharacterStatusComponent.bTicked" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyMaxLevel() { return { this, "UPrimalCharacterStatusComponent.bUseBPModifyMaxLevel" }; }
	BitFieldValue<bool, unsigned __int32> bNoStaminaRecoveryWhenStarving() { return { this, "UPrimalCharacterStatusComponent.bNoStaminaRecoveryWhenStarving" }; }
	BitFieldValue<bool, unsigned __int32> bApplyingStatusValueModifiers() { return { this, "UPrimalCharacterStatusComponent.bApplyingStatusValueModifiers" }; }
	BitFieldValue<bool, unsigned __int32> bDontScaleMeleeDamage() { return { this, "UPrimalCharacterStatusComponent.bDontScaleMeleeDamage" }; }
	BitFieldValue<bool, unsigned __int32> bInfiniteWeight() { return { this, "UPrimalCharacterStatusComponent.bInfiniteWeight" }; }
	BitFieldValue<bool, unsigned __int32> bUseLevelUpStatWeightOverrides() { return { this, "UPrimalCharacterStatusComponent.bUseLevelUpStatWeightOverrides" }; }

	// Functions

	float BPModifyMaxExperiencePoints(float InMaxExperiencePoints) { return NativeCall<float, float>(this, "UPrimalCharacterStatusComponent.BPModifyMaxExperiencePoints(float)", InMaxExperiencePoints); }
	int BPModifyMaxLevel(int InMaxLevel) { return NativeCall<int, int>(this, "UPrimalCharacterStatusComponent.BPModifyMaxLevel(int)", InMaxLevel); }
	void ClientSyncMaxStatusValues(const TArray<float, TSizedDefaultAllocator<32> >* NetMaxStatusValues, const TArray<float, TSizedDefaultAllocator<32> >* NetBaseMaxStatusValues) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void NetSyncMaxStatusValues(const TArray<float, TSizedDefaultAllocator<32> >* NetMaxStatusValues, const TArray<float, TSizedDefaultAllocator<32> >* NetBaseMaxStatusValues) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.NetSyncMaxStatusValues(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", NetMaxStatusValues, NetBaseMaxStatusValues); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalCharacterStatusComponent();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCharacterStatusComponent"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPrimalCharacterStatusComponent.Serialize(FStructuredArchiveRecord)", Record); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void InitializeComponent() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.InitializeComponent()"); }
	void RemoveStatusValueModifierByIndex(int Index) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByIndex(int)", Index); }
	void AddStatusValueModifier(EPrimalCharacterStatusValue::Type ValueType, float Amount, float Speed, bool bContinueOnUnchangedValue, bool bSetValue, int StatusValueModifierDescriptionIndex, bool bResetExistingModifierDescriptionIndex, float LimitExistingModifierDescriptionToMaxAmount, bool bSetAdditionalValue, EPrimalCharacterStatusValue::Type StopAtValueNearMax, bool bMakeUntameable, TSubclassOf<UDamageType> ScaleValueByCharacterDamageType, AActor* Instigator) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, float, bool, bool, int, bool, float, bool, EPrimalCharacterStatusValue::Type, bool, TSubclassOf<UDamageType>, AActor*>(this, "UPrimalCharacterStatusComponent.AddStatusValueModifier(EPrimalCharacterStatusValue::Type,float,float,bool,bool,int,bool,float,bool,EPrimalCharacterStatusValue::Type,bool,TSubclassOf<UDamageType>,AActor*,bool)", ValueType, Amount, Speed, bContinueOnUnchangedValue, bSetValue, StatusValueModifierDescriptionIndex, bResetExistingModifierDescriptionIndex, LimitExistingModifierDescriptionToMaxAmount, bSetAdditionalValue, StopAtValueNearMax, bMakeUntameable, ScaleValueByCharacterDamageType, Instigator); }
	void ApplyStatusValueModifiers(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.ApplyStatusValueModifiers(float)", DeltaTime); }
	void SetAllStatsToMaximum() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.SetAllStatsToMaximum()"); }
	void SetAllStatsToMaximumExcluding(EPrimalCharacterStatusValue::Type exclude) { NativeCall<void, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.SetAllStatsToMaximumExcluding(EPrimalCharacterStatusValue::Type)", exclude); }
	void TickStatus(float DeltaTime, bool bForceStatusUpdate) { NativeCall<void, float, bool>(this, "UPrimalCharacterStatusComponent.TickStatus(float,bool)", DeltaTime, bForceStatusUpdate); }
	void UpdateStatusValue(EPrimalCharacterStatusValue::Type valueType, float DeltaTime, bool bManualUpdate) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool>(this, "UPrimalCharacterStatusComponent.UpdateStatusValue(EPrimalCharacterStatusValue::Type,float,bool)", valueType, DeltaTime, bManualUpdate); }
	void UpdateWeightStat(bool bForceSetValue) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.UpdateWeightStat(bool)", bForceSetValue); }
	void AdjustStatusValueModification(EPrimalCharacterStatusValue::Type valueType, float* Amount, TSubclassOf<UDamageType> DamageTypeClass, bool bManualModification) { NativeCall<void, EPrimalCharacterStatusValue::Type, float*, TSubclassOf<UDamageType>, bool>(this, "UPrimalCharacterStatusComponent.AdjustStatusValueModification(EPrimalCharacterStatusValue::Type,float&,TSubclassOf<UDamageType>,bool)", valueType, Amount, DamageTypeClass, bManualModification); }
	void GetDinoFoodConsumptionRateMultiplier(float* Amount) { NativeCall<void, float*>(this, "UPrimalCharacterStatusComponent.GetDinoFoodConsumptionRateMultiplier(float&)", Amount); }
	void UninitializeComponent() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.UninitializeComponent()"); }
	float ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float Amount, bool bPercentOfMax, bool bPercentOfCurrent, bool bManualModification, bool bSetValue, TSubclassOf<UDamageType> DamageTypeClass, bool bDamageDontKill, bool bForceSetValue) { return NativeCall<float, EPrimalCharacterStatusValue::Type, float, bool, bool, bool, bool, TSubclassOf<UDamageType>, bool, bool>(this, "UPrimalCharacterStatusComponent.ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type,float,bool,bool,bool,bool,TSubclassOf<UDamageType>,bool,bool)", valueType, Amount, bPercentOfMax, bPercentOfCurrent, bManualModification, bSetValue, DamageTypeClass, bDamageDontKill, bForceSetValue); }
	void ChangedStatusState(EPrimalCharacterStatusState::Type valueType, bool bEnteredState) { NativeCall<void, EPrimalCharacterStatusState::Type, bool>(this, "UPrimalCharacterStatusComponent.ChangedStatusState(EPrimalCharacterStatusState::Type,bool)", valueType, bEnteredState); }
	void CharacterUpdatedInventory(bool bEquippedOrUneqippedItem) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.CharacterUpdatedInventory(bool)", bEquippedOrUneqippedItem); }
	void UpdateInventoryWeight(APrimalCharacter* aPrimalChar) { NativeCall<void, APrimalCharacter*>(this, "UPrimalCharacterStatusComponent.UpdateInventoryWeight(APrimalCharacter*)", aPrimalChar); }
	void RefreshInsulation() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.RefreshInsulation()"); }
	void RescaleMaxStat(EPrimalCharacterStatusValue::Type LevelUpValueType, float TargetValue, bool bIsPercentOfTrueValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool>(this, "UPrimalCharacterStatusComponent.RescaleMaxStat(EPrimalCharacterStatusValue::Type,float,bool)", LevelUpValueType, TargetValue, bIsPercentOfTrueValue); }
	void RefreshTemperature() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.RefreshTemperature()"); }
	void UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float Amount, bool bManualModification, TSubclassOf<UDamageType> DamageTypeClass, bool bDamageDontKill, bool bDontAdjustOtherStats) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool, TSubclassOf<UDamageType>, bool, bool>(this, "UPrimalCharacterStatusComponent.UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type,float,bool,TSubclassOf<UDamageType>,bool,bool)", valueType, Amount, bManualModification, DamageTypeClass, bDamageDontKill, bDontAdjustOtherStats); }
	float GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type)", valueType); }
	void DrawLocalPlayerHUD(AShooterHUD* HUD, float ScaleMult, bool bFromBottomRight) { NativeCall<void, AShooterHUD*, float, bool>(this, "UPrimalCharacterStatusComponent.DrawLocalPlayerHUD(AShooterHUD*,float,bool)", HUD, ScaleMult, bFromBottomRight); }
	void DrawLocalPlayerHUDDescriptions(AShooterHUD* HUD, long double TheTimeSeconds, float ScaleMult, bool bDrawBottomRight) { NativeCall<void, AShooterHUD*, long double, float, bool>(this, "UPrimalCharacterStatusComponent.DrawLocalPlayerHUDDescriptions(AShooterHUD*,double,float,bool)", HUD, TheTimeSeconds, ScaleMult, bDrawBottomRight); }
	bool IsInStatusState(EPrimalCharacterStatusState::Type StateType) { return NativeCall<bool, EPrimalCharacterStatusState::Type>(this, "UPrimalCharacterStatusComponent.IsInStatusState(EPrimalCharacterStatusState::Type)", StateType); }
	void OnJumped() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnJumped()"); }
	float GetMeleeDamageModifier(FScriptContainerElement* a2) { return NativeCall<float, FScriptContainerElement*>(this, "UPrimalCharacterStatusComponent.GetMeleeDamageModifier()", a2); }
	float GetMovementSpeedModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetMovementSpeedModifier()"); }
	float GetJumpZModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetJumpZModifier()"); }
	void ServerSyncReplicatedValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.ServerSyncReplicatedValues()"); }
	bool CanLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType, bool bCheckExperience) { return NativeCall<bool, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.CanLevelUp(EPrimalCharacterStatusValue::Type,bool)", LevelUpValueType, bCheckExperience); }
	void ServerApplyLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType, AShooterPlayerController* ByPC, bool AllowSave) { NativeCall<void, EPrimalCharacterStatusValue::Type, AShooterPlayerController*, bool>(this, "UPrimalCharacterStatusComponent.ServerApplyLevelUp(EPrimalCharacterStatusValue::Type,AShooterPlayerController*,bool)", LevelUpValueType, ByPC, AllowSave); }
	void SetBaseLevel(int Level, bool bDontCurrentSetToMax) { NativeCall<void, int, bool>(this, "UPrimalCharacterStatusComponent.SetBaseLevel(int,bool)", Level, bDontCurrentSetToMax); }
	void SetBaseLevelNoStatChange(int Level) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetBaseLevelNoStatChange(int)", Level); }
	void SetBaseLevelCustomized(int Level, const TArray<FStatValuePair, TSizedDefaultAllocator<32> >* CustomBaseStats, const TArray<TEnumAsByte<EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >* PrioritizeStats, bool bDontCurrentSetToMax) { NativeCall<void, int, const TArray<FStatValuePair, TSizedDefaultAllocator<32> >*, const TArray<TEnumAsByte<EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >*, bool>(this, "UPrimalCharacterStatusComponent.SetBaseLevelCustomized(int,TArray<FStatValuePair,TSizedDefaultAllocator<32>>&,TArray<TEnumAsByte<EPrimalCharacterStatusValue::Type>,TSizedDefaultAllocator<32>>&,bool)", Level, CustomBaseStats, PrioritizeStats, bDontCurrentSetToMax); }
	void SetTameable(bool bTameable) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.SetTameable(bool)", bTameable); }
	void SetTamed(float TameIneffectivenessModifier, bool bSkipAddingTamedLevels) { NativeCall<void, float, bool>(this, "UPrimalCharacterStatusComponent.SetTamed(float,bool)", TameIneffectivenessModifier, bSkipAddingTamedLevels); }
	void ApplyTamingStatModifiers(float TameIneffectivenessModifier) { NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.ApplyTamingStatModifiers(float)", TameIneffectivenessModifier); }
	FString* GetStatusValueString(FString* result, int ValueType, bool bValueOnly) { return NativeCall<FString*, FString*, int, bool>(this, "UPrimalCharacterStatusComponent.GetStatusValueString(EPrimalCharacterStatusValue::Type,bool)", result, ValueType, bValueOnly); }
	FString* GetStatusNameString(FString* result, int ValueType) { return NativeCall<FString*, FString*, int>(this, "UPrimalCharacterStatusComponent.GetStatusNameString(EPrimalCharacterStatusValue::Type)", result, ValueType); }
	FString* GetStatusMaxValueString(FString* result, int ValueType, bool bValueOnly) { return NativeCall<FString*, FString*, int, bool>(this, "UPrimalCharacterStatusComponent.GetStatusMaxValueString(EPrimalCharacterStatusValue::Type,bool)", result, ValueType, bValueOnly); }
	int GetCharacterLevel() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetCharacterLevel()"); }
	int GetBaseLevelFromLevelUpPoints(bool bIncludePlayerAddedLevels) { return NativeCall<int, bool>(this, "UPrimalCharacterStatusComponent.GetBaseLevelFromLevelUpPoints(bool)", bIncludePlayerAddedLevels); }
	void AddExperience(float HowMuch, bool bShareWithTribe, EXPType::Type XPType) { NativeCall<void, float, bool, EXPType::Type>(this, "UPrimalCharacterStatusComponent.AddExperience(float,bool,EXPType::Type)", HowMuch, bShareWithTribe, XPType); }
	float GetExperienceRequiredForNextLevelUp() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperienceRequiredForNextLevelUp()"); }
	float GetExperienceRequiredForPreviousLevelUp() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperienceRequiredForPreviousLevelUp()"); }
	int GetMaxLevel() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetMaxLevel()"); }
	bool IsAtMaxExperience() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsAtMaxExperience()"); }
	bool CanGainLevel() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.CanGainLevel()"); }
	bool HasExperienceForLevelUp() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.HasExperienceForLevelUp()"); }
	float GetExperiencePercent() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperiencePercent()"); }
	void NetSyncMaxStatusValues_Implementation(const TArray<float, TSizedDefaultAllocator<32> >* NetMaxStatusValues, const TArray<float, TSizedDefaultAllocator<32> >* NetBaseMaxStatusValues) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.NetSyncMaxStatusValues_Implementation(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void ClientSyncMaxStatusValues_Implementation(const TArray<float, TSizedDefaultAllocator<32> >* NetMaxStatusValues, const TArray<float, TSizedDefaultAllocator<32> >* NetBaseMaxStatusValues) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues_Implementation(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UPrimalCharacterStatusComponent.Serialize(FArchive&)", Ar); }
	void BPDirectSetCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPDirectSetCurrentStatusValue(EPrimalCharacterStatusValue::Type,float)", valueType, newValue); }
	void SetMaxStatusValue(EPrimalCharacterStatusValue::Type StatType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.SetMaxStatusValue(EPrimalCharacterStatusValue::Type,float)", StatType, newValue); }
	void RescaleAllStats() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.RescaleAllStats()"); }
	UPrimalCharacterStatusComponent* GetDefaultCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent*>(this, "UPrimalCharacterStatusComponent.GetDefaultCharacterStatusComponent()"); }
	FString* GetDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalCharacterStatusComponent.GetDebugString()", result); }
	void ServerApplyMutagen(bool bHasAncestors) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.ServerApplyMutagen(bool)", bHasAncestors); }
	void ServerForceUpdateMaxStatValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.ServerForceUpdateMaxStatValues()"); }
	float GetDinoStatDistributionAgainstMax(EPrimalCharacterStatusValue::Type valueType, bool bTamedPoints, bool bCheckLevel, bool bIncludeMaxTamingEffLevels) { return NativeCall<float, EPrimalCharacterStatusValue::Type, bool, bool, bool>(this, "UPrimalCharacterStatusComponent.GetDinoStatDistributionAgainstMax(EPrimalCharacterStatusValue::Type,bool,bool,bool)", valueType, bTamedPoints, bCheckLevel, bIncludeMaxTamingEffLevels); }

	bool& bForceAllowStatusModifierSortingWhenTamedField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bForceAllowStatusModifierSortingWhenTamed"); }
	bool& bHasUnlockedMaxPlayerLevelAchievementThisSessionField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bHasUnlockedMaxPlayerLevelAchievementThisSession"); }
	double& LastReplicatedXPMilestoneTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCharacterStatusComponent.LastReplicatedXPMilestoneTime"); }
	float& MountedReceiveRiderXPPercentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MountedReceiveRiderXPPercent"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCharacterStatusComponent"); }

	FName& SkillTreeQuickAccessField() { return *GetNativePointerField<FName*>(this, "UPrimalCharacterStatusComponent.SkillTreeQuickAccess"); }
	TEnumAsByte<EPrimalCharacterStatusValue::Type>& MaxStatusValueToAutoUpdateField() { return *GetNativePointerField<TEnumAsByte<EPrimalCharacterStatusValue::Type>*>(this, "UPrimalCharacterStatusComponent.MaxStatusValueToAutoUpdate"); }
	BitFieldValue<bool, unsigned __int32> bAlsoUseLevelUpAnimWhenSwimming() { return { this, "UPrimalCharacterStatusComponent.bAlsoUseLevelUpAnimWhenSwimming"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetOverrideMaxStatusValue() { return { this, "UPrimalCharacterStatusComponent.bUseBPGetOverrideMaxStatusValue"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideShouldSkipWildLevelUpValue() { return { this, "UPrimalCharacterStatusComponent.bUseBPOverrideShouldSkipWildLevelUpValue"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanLevelUp() { return { this, "UPrimalCharacterStatusComponent.bUseBPCanLevelUp"}; }
	BitFieldValue<bool, unsigned char> bHideXPStatusFromHUD() { return { this, "UPrimalCharacterStatusComponent.bHideXPStatusFromHUD"}; }
	static void SetBaseCharacterLevel_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetBaseCharacterLevel_WrapperImpl(void*,void*)", Object, InValue); }
	void OnRep_GlobalMaxStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues()"); }
	static void GetbAllowLevelUps_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetbAllowLevelUps_WrapperImpl(void*,void*)", Object, OutValue); }
	void OnMaxStatusValueChanged() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnMaxStatusValueChanged()"); }
	void ClearAllMutationPoints() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.ClearAllMutationPoints()"); }
	APrimalCharacter* GetPrimalCharacter() { return NativeCall<APrimalCharacter*>(this, "UPrimalCharacterStatusComponent.GetPrimalCharacter()"); }
	static void GetDinoImprintingQuality_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetDinoImprintingQuality_WrapperImpl(void*,void*)", Object, OutValue); }
	float BPGetMaxExperiencePoints() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.BPGetMaxExperiencePoints()"); }
	static void SetHyperCharacterInsulationValue_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetHyperCharacterInsulationValue_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetDinoImprintingQuality_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetDinoImprintingQuality_WrapperImpl(void*,void*)", Object, InValue); }
	void OnRep_ReplicatedExperiencePoints() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints()"); }
	float BPGetOverrideMaxStatusValue(EPrimalCharacterStatusValue::Type LevelUpValueType, float NormalMaxStatusValues) { return NativeCall<float, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPGetOverrideMaxStatusValue(EPrimalCharacterStatusValue::Type,float)", LevelUpValueType, NormalMaxStatusValues); }
	static void SetMaxTamingEffectivenessBaseLevelMultiplier_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetMaxTamingEffectivenessBaseLevelMultiplier_WrapperImpl(void*,void*)", Object, InValue); }
	void SetCheatLevels(const TArray<int, TSizedDefaultAllocator<32> >& LevelsToApply) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "UPrimalCharacterStatusComponent.SetCheatLevels(TArray<int,TSizedDefaultAllocator<32>>&)", LevelsToApply); }
	bool AllowTaming() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.AllowTaming()"); }
	bool BPCanRecoverStatusValue(EPrimalCharacterStatusValue::Type ValueType) { return NativeCall<bool, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPCanRecoverStatusValue(EPrimalCharacterStatusValue::Type)", ValueType); }
	static void GetHyperCharacterInsulationValue_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetHyperCharacterInsulationValue_WrapperImpl(void*,void*)", Object, OutValue); }
	void SetLevelUpPoints(EPrimalCharacterStatusValue::Type valueType, bool bTamedPoints, int newPoints) { NativeCall<void, EPrimalCharacterStatusValue::Type, bool, int>(this, "UPrimalCharacterStatusComponent.SetLevelUpPoints(EPrimalCharacterStatusValue::Type,bool,int)", valueType, bTamedPoints, newPoints); }
	bool GetCanLevelUpValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<bool, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetCanLevelUpValue(EPrimalCharacterStatusValue::Type)", valueType); }
	void BPSetRecoveryRateStatusValue(EPrimalCharacterStatusValue::Type valueType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue(EPrimalCharacterStatusValue::Type,float)", valueType, newValue); }
	void CopyPrimalStatusComponentValues(const UPrimalCharacterStatusComponent* src) { NativeCall<void, const UPrimalCharacterStatusComponent*>(this, "UPrimalCharacterStatusComponent.CopyPrimalStatusComponentValues(UPrimalCharacterStatusComponent*)", src); }
	static void SetExtraCharacterLevel_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetExtraCharacterLevel_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetBaseCharacterLevel_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetBaseCharacterLevel_WrapperImpl(void*,void*)", Object, OutValue); }
	float BPGetPendingTotalStatusValueModificationFromModifiers(EPrimalCharacterStatusValue::Type ValueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetPendingTotalStatusValueModificationFromModifiers(EPrimalCharacterStatusValue::Type)", ValueType); }
	void OnRep_CurrentStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_CurrentStatusValues()"); }
	static void GetMaxTamingEffectivenessBaseLevelMultiplier_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetMaxTamingEffectivenessBaseLevelMultiplier_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPDirectSetMaxStatusValue(EPrimalCharacterStatusValue::Type valueType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPDirectSetMaxStatusValue(EPrimalCharacterStatusValue::Type,float)", valueType, newValue); }
	int GetLevelUpPoints(EPrimalCharacterStatusValue::Type valueType, bool bTamedPoints) { return NativeCall<int, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.GetLevelUpPoints(EPrimalCharacterStatusValue::Type,bool)", valueType, bTamedPoints); }
	void NetSetMaxTamingEffectivenessBaseLevelMultiplier_Implementation(float NewValue) { NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.NetSetMaxTamingEffectivenessBaseLevelMultiplier_Implementation(float)", NewValue); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalCharacterStatusComponent._getUObject()"); }
	bool IsAtMaxLevel() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsAtMaxLevel()"); }
	bool IsPrimalDinoStatusComponent() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsPrimalDinoStatusComponent()"); }
	static void GetHypoCharacterInsulationValue_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetHypoCharacterInsulationValue_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPForceAllowUntamedStaminaReduction() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.BPForceAllowUntamedStaminaReduction()"); }
	bool BPOverrideShouldSkipWildLevelUpValue(EPrimalCharacterStatusValue::Type ValueType, bool OriginalSkipWildLevelUpValue, unsigned char AppliedLevelUpPointsForStat) { return NativeCall<bool, EPrimalCharacterStatusValue::Type, bool, unsigned char>(this, "UPrimalCharacterStatusComponent.BPOverrideShouldSkipWildLevelUpValue(EPrimalCharacterStatusValue::Type,bool,unsignedchar)", ValueType, OriginalSkipWildLevelUpValue, AppliedLevelUpPointsForStat); }
	float BPGetAmountMaxGainedPerLevelUpValue(EPrimalCharacterStatusValue::Type ValueType, bool bTamed) { return NativeCall<float, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.BPGetAmountMaxGainedPerLevelUpValue(EPrimalCharacterStatusValue::Type,bool)", ValueType, bTamed); }
	void NetSetMaxTamingEffectivenessBaseLevelMultiplier(float NewValue) { NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.NetSetMaxTamingEffectivenessBaseLevelMultiplier(float)", NewValue); }
	static void SetReplicatedExperiencePoints_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetReplicatedExperiencePoints_WrapperImpl(void*,void*)", Object, InValue); }
	static EPrimalCharacterStatusValue::Type ConvertIntToCharacterStatusEnum(int InInteger) { return NativeCall<EPrimalCharacterStatusValue::Type, int>(nullptr, "UPrimalCharacterStatusComponent.ConvertIntToCharacterStatusEnum(int)", InInteger); }
	void SetMutationPoints(EPrimalCharacterStatusValue::Type valueType, int newPoints) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "UPrimalCharacterStatusComponent.SetMutationPoints(EPrimalCharacterStatusValue::Type,int)", valueType, newPoints); }
	float BPModifyMaxExperiencePoints_Implementation(float InMaxExperiencePoints) { return NativeCall<float, float>(this, "UPrimalCharacterStatusComponent.BPModifyMaxExperiencePoints_Implementation(float)", InMaxExperiencePoints); }
	float GetCraftingSpeedModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetCraftingSpeedModifier()"); }
	bool GetDontUseValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<bool, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetDontUseValue(EPrimalCharacterStatusValue::Type)", valueType); }
	bool GetStatusCompUsesStat(int StatTypeIndex, bool bWild) { return NativeCall<bool, int, bool>(this, "UPrimalCharacterStatusComponent.GetStatusCompUsesStat(int,bool)", StatTypeIndex, bWild); }
	void RemoveStatusValueModifierByInstigator(AActor* Instigator) { NativeCall<void, AActor*>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByInstigator(AActor*)", Instigator); }
	static void SetbAllowLevelUps_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetbAllowLevelUps_WrapperImpl(void*,void*)", Object, InValue); }
	int GetExtraCharacterLevel() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetExtraCharacterLevel()"); }
	void ClearAllLevelUpPoints(bool bTamedPoints) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.ClearAllLevelUpPoints(bool)", bTamedPoints); }
	bool HasStatusValueModifierWithInstigator(AActor* Instigator, bool bCheckSameInstigatorClass) { return NativeCall<bool, AActor*, bool>(this, "UPrimalCharacterStatusComponent.HasStatusValueModifierWithInstigator(AActor*,bool)", Instigator, bCheckSameInstigatorClass); }
	bool BPCanLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType, bool bCheckExperience) { return NativeCall<bool, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.BPCanLevelUp(EPrimalCharacterStatusValue::Type,bool)", LevelUpValueType, bCheckExperience); }
	static void SetHypoCharacterInsulationValue_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetHypoCharacterInsulationValue_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetStatusValueModifierDescriptionIndices_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimalCharacterStatusComponent.SetStatusValueModifierDescriptionIndices_WrapperImpl(void*,void*)", Object, InValue); }
	void CopyReplicatedBaseLevelMaxStatusValuesAndMarkDirty(const float* pSourceValues) { NativeCall<void, const float*>(this, "UPrimalCharacterStatusComponent.CopyReplicatedBaseLevelMaxStatusValuesAndMarkDirty(float*)", pSourceValues); }
	static void GetReplicatedExperiencePoints_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimalCharacterStatusComponent.GetReplicatedExperiencePoints_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsAlignedWithTeam(int TargetingTeam) { return NativeCall<bool, int>(this, "UPrimalCharacterStatusComponent.IsAlignedWithTeam(int)", TargetingTeam); }
	int GetMutationPoints(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<int, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetMutationPoints(EPrimalCharacterStatusValue::Type)", valueType); }
	void OnRep_GlobalBaseLevelMaxStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues()"); }
	void OnRep_GlobalCurrentStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues()"); }
	float PredictSingleMaxStatusValue(unsigned char inputNumberOfLevelUpPointsApplied, EPrimalCharacterStatusValue::Type StatType) { return NativeCall<float, unsigned char, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.PredictSingleMaxStatusValue(unsignedchar,EPrimalCharacterStatusValue::Type)", inputNumberOfLevelUpPointsApplied, StatType); }
	float BPGetPercentStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetPercentStatusValue(EPrimalCharacterStatusValue::Type)", valueType); }
	float GetRawStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetRawStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type)", valueType); }
	void SetExtraCharacterLevel(int NewExtraCharacterLevel) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetExtraCharacterLevel(int)", NewExtraCharacterLevel); }
};