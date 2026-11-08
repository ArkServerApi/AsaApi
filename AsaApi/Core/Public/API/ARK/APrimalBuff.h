#pragma once
#include "BulkForward.h"

struct APrimalBuff : APrimalEmitterSpawnable
{
    // Fields

    float& DeactivationLifespanField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivationLifespan"); }
    FName& InstigatorAttachmentSocketField() { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket_PlayerOverride"); }
    float& RemoteForcedFleeDurationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.RemoteForcedFleeDuration"); }
    UE::Math::TVector<double>& AoETraceToTargetsStartOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff.AoETraceToTargetsStartOffset"); }
    TWeakObjectPtr<AActor>& TargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalBuff.Target"); }
    TWeakObjectPtr<UPrimalItem>& InstigatorItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem>*>(this, "APrimalBuff.InstigatorItem"); }
    float& SlowInstigatorFallingAddZVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingDampenZVelocity"); }
    float& DeactivateAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivateAfterTime"); }
    float& WeaponRecoilMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.WeaponRecoilMultiplier"); }
    float& ReceiveDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ReceiveDamageMultiplier"); }
    float& MeleeDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MeleeDamageMultiplier"); }
    float& DepleteInstigatorItemDurabilityPerSecondField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DepleteInstigatorItemDurabilityPerSecond"); }
    FieldArray<float, 12> ValuesToAddPerSecondField() { return { this, "APrimalBuff.ValuesToAddPerSecond" }; }
    FStatusValueModifierDescription& BuffDescriptionField() { return *GetNativePointerField<FStatusValueModifierDescription*>(this, "APrimalBuff.BuffDescription"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    float& ViewMinExposureMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMinExposureMultiplier"); }
    float& ViewMaxExposureMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMaxExposureMultiplier"); }
    float& XPtoAddField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAdd"); }
    float& XPtoAddRateField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAddRate"); }
    int& DinoColorizationPriorityField() { return *GetNativePointerField<int*>(this, "APrimalBuff.DinoColorizationPriority"); }
    float& DinoColorizationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DinoColorizationInterpSpeed"); }
    TArray<FItemMultiplier, TSizedDefaultAllocator<32> >& OverrideInventoryItemClassWeightMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.OverrideInventoryItemClassWeightMultipliers"); }
    FieldArray<FLinearColor, 6> DesiredDinoColorsField() { return { this, "APrimalBuff.DesiredDinoColors" }; }
    float& SubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxSpeedModifier"); }
    float& UnsubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxSpeedModifier"); }
    float& SubmergedMaxAccelerationModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxAccelerationModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxAccelerationModifier"); }
    float& SubmergedRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedRotationRateModifier"); }
    float& UnsubmergedRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedRotationRateModifier"); }
    float& FrictionModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.FrictionModifier"); }
    TArray<FDamagePrimalCharacterStatusValueModifier, TSizedDefaultAllocator<32> >& CharacterStatusValueModifiersField() { return *GetNativePointerField<TArray<FDamagePrimalCharacterStatusValueModifier, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.CharacterStatusValueModifiers"); }
    FTimerHandle& DeactivateHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff.DeactivateHandle"); }
    long double& BuffStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.BuffStartTime"); }
    TWeakObjectPtr<AShooterPlayerController>& ForcedOnSpectatorPlayerControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalBuff.ForcedOnSpectatorPlayerController"); }
    TSoftObjectPtr<UMaterialInterface>& BuffPostProcessEffectField() { return *GetNativePointerField<TSoftObjectPtr<UMaterialInterface>*>(this, "APrimalBuff.BuffPostProcessEffect"); }
    TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& PreventActorClassesTargetingField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.PreventActorClassesTargeting"); }
    TArray<float, TSizedDefaultAllocator<32> >& PreventActorClassesTargetingRangesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.PreventActorClassesTargetingRanges"); }
    AMissionType*& RelatedMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff.RelatedMission"); }
    float& PreventIfMovementMassGreaterThanField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PreventIfMovementMassGreaterThan"); }
    TSoftClassPtr<APrimalBuff>& AOEOtherBuffToApplyField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "APrimalBuff.AOEOtherBuffToApply"); }
    float& AOEBuffRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffRange"); }
    float& CharacterAOEBuffDamageField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffResistance"); }
    float& Maximum2DVelocityForStaminaRecoveryField() { return *GetNativePointerField<float*>(this, "APrimalBuff.Maximum2DVelocityForStaminaRecovery"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& PostprocessBlendablesToExcludeField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.PostprocessBlendablesToExclude"); }
    TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& BuffedCharactersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.BuffedCharacters"); }
    long double& LastItemDurabilityDepletionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastItemDurabilityDepletionTime"); }
    TSoftClassPtr<APrimalBuff>& BuffToGiveOnDeactivationField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "APrimalBuff.BuffToGiveOnDeactivation"); }
    TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& BuffClassesToCancelOnActivationField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.BuffClassesToCancelOnActivation"); }
    TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& ActivePreventsBuffClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.ActivePreventsBuffClasses"); }
    TArray<TSoftClassPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& BuffRequiresOwnerClassField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.BuffRequiresOwnerClass"); }
    TArray<TSoftClassPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& BuffPreventsOwnerClassField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.BuffPreventsOwnerClass"); }
    float& XPEarningMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPEarningMultiplier"); }
    bool& bUseBPDeactivatedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPDeactivated"); }
    bool& bUseBPCustomAllowAddBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPCustomAllowAddBuff"); }
    UE::Math::TVector<double>& staticPathingDestinationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff.staticPathingDestination"); }
    long double& TickingDeactivationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TickingDeactivationTime"); }
    TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >& BPNotifyActivationToOtherBuffClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.BPNotifyActivationToOtherBuffClasses"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff.MyBuffPersistentData"); }
    TSubclassOf<UPrimalBuffPersistentData>& BuffPersistentDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalBuffPersistentData>*>(this, "APrimalBuff.BuffPersistentDataClass"); }
    TArray<FMaxStatScaler, TSizedDefaultAllocator<32> >& MaxStatScalersField() { return *GetNativePointerField<TArray<FMaxStatScaler, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.MaxStatScalers"); }
    TWeakObjectPtr<AActor>& BuffDamageCauserField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalBuff.BuffDamageCauser"); }
    USoundBase*& ExtraActivationSoundToPlayField() { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff.ExtraActivationSoundToPlay"); }
    float& AoEApplyDamageField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamageInterval"); }
    TSubclassOf<UDamageType>& AoEApplyDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalBuff.AoEApplyDamageType"); }
    TSoftClassPtr<APrimalBuff>& ForceNetworkSpatializationMaxLimitBuffTypeField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "APrimalBuff.ForceNetworkSpatializationMaxLimitBuffType"); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalBuff.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() { return *GetNativePointerField<int*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitRange"); }
    float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.InsulationRange"); }
    float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HypoThermiaInsulation"); }
    UE::Math::TVector<double>& AoEBuffLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff.AoEBuffLocOffset"); }
    TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& AoEClassesToIncludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.AoEClassesToInclude"); }
    TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& AoEClassesToExcludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.AoEClassesToExclude"); }
    bool& bOverrideBuffDescriptionField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideBuffDescription"); }
    bool& bOnlyTickIfPlayerCharacterField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOnlyTickIfPlayerCharacter"); }
    bool& bDestroyWhenUnpossessedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDestroyWhenUnpossessed"); }
    long double& LastAoEApplyDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastAoEApplyDamageTime"); }
    float& OnlyForInstigatorSoundFadeInTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.OnlyForInstigatorSoundFadeInTime"); }
    bool& bUseBuffTickClientField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickClient"); }
    float& BuffTickServerMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMinTime"); }
    float& BuffTickClientMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickRemoteClientMinTime"); }
    bool& bContinueTickingClientAfterDeactivateField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingClientAfterDeactivate"); }
    long double& LastBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeServer"); }
    long double& LastBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeClient"); }
    long double& NextBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeServer"); }
    long double& NextBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeClient"); }
    bool& bWasStasisedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bWasStasised"); }
    int& AddBuffMaxNumStacksField() { return *GetNativePointerField<int*>(this, "APrimalBuff.AddBuffMaxNumStacks"); }
    USoundBase*& DeactivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff.DeactivatedSound"); }
    bool& bDisableBloomField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableBloom"); }
    bool& bDisableLightShaftsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableLightShafts"); }
    float& PostProcessInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedUp"); }
    float& TPVCameraSpeedInterpolationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.TPVCameraSpeedInterpolationMultiplier"); }
    TArray<FPostProcessMaterialAdjuster, TSizedDefaultAllocator<32> >& PostprocessMaterialAdjustersField() { return *GetNativePointerField<TArray<FPostProcessMaterialAdjuster, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.PostprocessMaterialAdjusters"); }
    long double& TimeForNextAOECheckField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TimeForNextAOECheck"); }
    float& AOEBuffIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMin"); }
    float& AOEBuffIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMax"); }
    float& MaximumVelocityZForSlowingFallField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MaximumVelocityZForSlowingFall"); }
    int& FNameIntField() { return *GetNativePointerField<int*>(this, "APrimalBuff.FNameInt"); }
    bool& bAddTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bAddTPVCameraOffset"); }
    UE::Math::TVector<double>& TPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff.TPVCameraOffset"); }
    UE::Math::TVector<double>& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff.TPVCameraOffsetMultiplier"); }
    bool& bUseBlueprintAnimNotificationsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBlueprintAnimNotifications"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& StaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.StaminaDrainMultiplier"); }
    TArray<FName, TSizedDefaultAllocator<32> >& DisabledWeaponTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.DisabledWeaponTags"); }
    bool& bUseBPGetPlayerFootStepSoundField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPGetPlayerFootStepSound"); }
    bool& bShowMammalIncubationOptionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bShowMammalIncubationOptions"); }
    float& ExtendBuffTimeOverrideField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ExtendBuffTimeOverride"); }
    float& AdditionalRidingDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AdditionalRidingDistance"); }
    bool& bRelatedMissionWasInvalidField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bRelatedMissionWasInvalid"); }
    float& teleporterHapticTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.teleporterHapticTime"); }
    //TArray<FBuffMPCAdjuster, TSizedDefaultAllocator<32> >& MPCAdjustersField() { return *GetNativePointerField<TArray<FBuffMPCAdjuster, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.MPCAdjusters"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling() { return { this, "APrimalBuff.bSlowInstigatorFalling" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateOnJump() { return { this, "APrimalBuff.bDeactivateOnJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump() { return { this, "APrimalBuff.bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoRiding() { return { this, "APrimalBuff.bPreventDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoDismount() { return { this, "APrimalBuff.bPreventDinoDismount" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyPreventDismounting() { return { this, "APrimalBuff.bUseBPNotifyPreventDismounting" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowFloatingName() { return { this, "APrimalBuff.bForceShowFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideFloatingName() { return { this, "APrimalBuff.bForceHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryOrPassenger() { return { this, "APrimalBuff.bPreventCarryOrPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivated() { return { this, "APrimalBuff.bDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUsesInstigator() { return { this, "APrimalBuff.bUsesInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bFollowTarget() { return { this, "APrimalBuff.bFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRightShoulderOnPlayer() { return { this, "APrimalBuff.bOverrideRightShoulderOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bAddCharacterValues() { return { this, "APrimalBuff.bAddCharacterValues" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAddCharacterValuesUnderwater() { return { this, "APrimalBuff.bOnlyAddCharacterValuesUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableIfCharacterUnderwater() { return { this, "APrimalBuff.bDisableIfCharacterUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstigatorItem() { return { this, "APrimalBuff.bUseInstigatorItem" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnTargetStasis() { return { this, "APrimalBuff.bDestroyOnTargetStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAoETraceToTargets() { return { this, "APrimalBuff.bAoETraceToTargets" }; }
    BitFieldValue<bool, unsigned __int32> bAOEOnlyApplyOtherBuffToWildDinos() { return { this, "APrimalBuff.bAOEOnlyApplyOtherBuffToWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAoEIgnoreDinosTargetingInstigator() { return { this, "APrimalBuff.bAoEIgnoreDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoEOnlyOnDinosTargetingInstigator() { return { this, "APrimalBuff.bAoEOnlyOnDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTick() { return { this, "APrimalBuff.bBuffForceNoTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTickDedicated() { return { this, "APrimalBuff.bBuffForceNoTickDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth() { return { this, "APrimalBuff.bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride() { return { this, "APrimalBuff.bCompleteCustomDepthStencilOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseActivateSoundFadeInDuration() { return { this, "APrimalBuff.bUseActivateSoundFadeInDuration" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIgnoreBuffPostprocessEffectWhenRidden() { return { this, "APrimalBuff.bDinoIgnoreBuffPostprocessEffectWhenRidden" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIgnoreBuffPostprocessEffectWhenRidingDino() { return { this, "APrimalBuff.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteForcedFlee() { return { this, "APrimalBuff.bRemoteForcedFlee" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoRefreshColorization() { return { this, "APrimalBuff.bUseBPDinoRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryWeightMultipliers() { return { this, "APrimalBuff.bOverrideInventoryWeightMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateAfterAddingXP() { return { this, "APrimalBuff.bDeactivateAfterAddingXP" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator() { return { this, "APrimalBuff.bOnlyActivateSoundForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly() { return { this, "APrimalBuff.bAOEBuffCarnosOnly" }; }
    BitFieldValue<bool, unsigned __int32> bCausesCryoSickness() { return { this, "APrimalBuff.bCausesCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxSpeed() { return { this, "APrimalBuff.bModifyMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHUDProgressBar() { return { this, "APrimalBuff.bDisplayHUDProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargeting() { return { this, "APrimalBuff.bForceUsePreventTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargetingTurret() { return { this, "APrimalBuff.bForceUsePreventTargetingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideWeaponBob() { return { this, "APrimalBuff.bBPOverrideWeaponBob" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyPlayerBoneModifiers() { return { this, "APrimalBuff.bUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerUseBPModifyPlayerBoneModifiers() { return { this, "APrimalBuff.bDediServerUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNonDedicatedPlayerPostAnimUpdate() { return { this, "APrimalBuff.bUseBPNonDedicatedPlayerPostAnimUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCharacterHardAttached() { return { this, "APrimalBuff.bUseBPIsCharacterHardAttached" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachment() { return { this, "APrimalBuff.bDoCharacterDetachment" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeRiding() { return { this, "APrimalBuff.bDoCharacterDetachmentIncludeRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeCarrying() { return { this, "APrimalBuff.bDoCharacterDetachmentIncludeCarrying" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializedCharacterAnimScriptInstance() { return { this, "APrimalBuff.bUseBPInitializedCharacterAnimScriptInstance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeCarried() { return { this, "APrimalBuff.bUseBPCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostAdjustDamage() { return { this, "APrimalBuff.bUsePostAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallDamage() { return { this, "APrimalBuff.bPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorCapsuleComponentHit() { return { this, "APrimalBuff.bUseBPOnInstigatorCapsuleComponentHit" }; }
    BitFieldValue<bool, unsigned __int32> bEnabledCollisionNotify() { return { this, "APrimalBuff.bEnabledCollisionNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget() { return { this, "APrimalBuff.bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle() { return { this, "APrimalBuff.bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor() { return { this, "APrimalBuff.bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsNetRelevantFor() { return { this, "APrimalBuff.bUseBPOverrideIsNetRelevantFor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearRiderOnDinoImmobilize() { return { this, "APrimalBuff.bPreventClearRiderOnDinoImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysShowBuffDescription() { return { this, "APrimalBuff.bAlwaysShowBuffDescription" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnPlayers() { return { this, "APrimalBuff.bAOEApplyOtherBuffOnPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnDinos() { return { this, "APrimalBuff.bAOEApplyOtherBuffOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffIgnoreSameTeam() { return { this, "APrimalBuff.bAOEApplyOtherBuffIgnoreSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffRequireSameTeam() { return { this, "APrimalBuff.bAOEApplyOtherBuffRequireSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUD() { return { this, "APrimalBuff.bBuffDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bAddResetsBuffTime() { return { this, "APrimalBuff.bAddResetsBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAoEBuffAllowIfAlreadyBuffed() { return { this, "APrimalBuff.bAoEBuffAllowIfAlreadyBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bNetResetBuffStart() { return { this, "APrimalBuff.bNetResetBuffStart" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTarget() { return { this, "APrimalBuff.bImmobilizeTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlayerProne() { return { this, "APrimalBuff.bForcePlayerProne" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUD() { return { this, "APrimalBuff.bHideBuffFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideTimerFromHUD() { return { this, "APrimalBuff.bHideTimerFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBPAddMultiUseEntries() { return { this, "APrimalBuff.bBPAddMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffPersistent() { return { this, "APrimalBuff.bIsBuffPersistent" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedByPawn() { return { this, "APrimalBuff.bBPUseBumpedByPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedPawn() { return { this, "APrimalBuff.bBPUseBumpedPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffWhenInstigatorDead() { return { this, "APrimalBuff.bAllowBuffWhenInstigatorDead" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyDamage() { return { this, "APrimalBuff.bNotifyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffStasis() { return { this, "APrimalBuff.bAllowBuffStasis" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToPlayers() { return { this, "APrimalBuff.bApplyStatModifierToPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToDinos() { return { this, "APrimalBuff.bApplyStatModifierToDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnWildDino() { return { this, "APrimalBuff.bPreventOnWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDino() { return { this, "APrimalBuff.bPreventOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnPlayer() { return { this, "APrimalBuff.bPreventOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBigDino() { return { this, "APrimalBuff.bPreventOnBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBossDino() { return { this, "APrimalBuff.bPreventOnBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnRobotDino() { return { this, "APrimalBuff.bPreventOnRobotDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsDisease() { return { this, "APrimalBuff.bIsDisease" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff() { return { this, "APrimalBuff.bUseBPPreventAddingOtherBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning() { return { this, "APrimalBuff.bUseBPPreventRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemAdded() { return { this, "APrimalBuff.bUseBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemQuantityUpdated() { return { this, "APrimalBuff.bUseBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRemoved() { return { this, "APrimalBuff.bUseBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bAddReactivates() { return { this, "APrimalBuff.bAddReactivates" }; }
    BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables() { return { this, "APrimalBuff.bAoEApplyDamageAllTargetables" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse() { return { this, "APrimalBuff.bUseBPAdjustCharacterMovementImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage() { return { this, "APrimalBuff.bUseBPAdjustImpulseFromDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements() { return { this, "APrimalBuff.bUseBPGetHUDElements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraShakeScalar() { return { this, "APrimalBuff.bUseBPGetCameraShakeScalar" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawMissionDinoTargetHealthbars() { return { this, "APrimalBuff.bForceDrawMissionDinoTargetHealthbars" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetWaypointsBuff() { return { this, "APrimalBuff.bUseBPGetWaypointsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated() { return { this, "APrimalBuff.bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartFire() { return { this, "APrimalBuff.bUseBPHandleOnStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartAltFire() { return { this, "APrimalBuff.bUseBPHandleOnStartAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopAltFire() { return { this, "APrimalBuff.bUseBPHandleOnStopAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFlight() { return { this, "APrimalBuff.bUseBPPreventFlight" }; }
    BitFieldValue<bool, unsigned __int32> bRequireController() { return { this, "APrimalBuff.bRequireController" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayInstigatorActiveSoundOnDino() { return { this, "APrimalBuff.bDontPlayInstigatorActiveSoundOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bAddExtendBuffTime() { return { this, "APrimalBuff.bAddExtendBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickingDeactivation() { return { this, "APrimalBuff.bUseTickingDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bCheckPreventInput() { return { this, "APrimalBuff.bCheckPreventInput" }; }
    BitFieldValue<bool, unsigned __int32> bBPDrawBuffStatusHUD() { return { this, "APrimalBuff.bBPDrawBuffStatusHUD" }; }
    BitFieldValue<bool, unsigned __int32> bStatusComponentUsingExtendedHUDText() { return { this, "APrimalBuff.bStatusComponentUsingExtendedHUDText" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStaticPathing() { return { this, "APrimalBuff.bEnableStaticPathing" }; }
    BitFieldValue<bool, unsigned __int32> bHUDFormatTimerAsTimecode() { return { this, "APrimalBuff.bHUDFormatTimerAsTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventThrowingItem() { return { this, "APrimalBuff.bUseBPPreventThrowingItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInputDoesOffset() { return { this, "APrimalBuff.bPreventInputDoesOffset" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained() { return { this, "APrimalBuff.bNotifyExperienceGained" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenVisible() { return { this, "APrimalBuff.bOnlyTickWhenVisible" }; }
    BitFieldValue<bool, unsigned __int32> bBPAdjustStatusValueModification() { return { this, "APrimalBuff.bBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bWasDestroyed() { return { this, "APrimalBuff.bWasDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffActivated() { return { this, "APrimalBuff.bUseBPNotifyOtherBuffActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffDeactivated() { return { this, "APrimalBuff.bUseBPNotifyOtherBuffDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFirstPerson() { return { this, "APrimalBuff.bUseBPPreventFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bForceAddUnderwaterCharacterStatusValues() { return { this, "APrimalBuff.bForceAddUnderwaterCharacterStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInstigatorAttack() { return { this, "APrimalBuff.bPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorMovementModeChangedNotify() { return { this, "APrimalBuff.bUseBPOnInstigatorMovementModeChangedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorMovementMode() { return { this, "APrimalBuff.bUseBPPreventInstigatorMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTalkerCharacter() { return { this, "APrimalBuff.bUseBPOverrideTalkerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHandleInstigatorMultiUseEntries() { return { this, "APrimalBuff.bBuffHandleInstigatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorAttack() { return { this, "APrimalBuff.bUseBPPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventOnStartJump() { return { this, "APrimalBuff.bUseBPPreventOnStartJump" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterWalkVelocity() { return { this, "APrimalBuff.bBPOverrideCharacterWalkVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterSwimmingVelocity() { return { this, "APrimalBuff.bBPOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterNewFallVelocity() { return { this, "APrimalBuff.bBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterFlyingVelocity() { return { this, "APrimalBuff.bBPOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterWalkingVelocity() { return { this, "APrimalBuff.bForceOverrideCharacterWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterSwimmingVelocity() { return { this, "APrimalBuff.bForceOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterFlyingVelocity() { return { this, "APrimalBuff.bForceOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterNewFallVelocity() { return { this, "APrimalBuff.bForceOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterLanding() { return { this, "APrimalBuff.bOverrideCharacterLanding" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterMovementInput() { return { this, "APrimalBuff.bOverrideCharacterMovementInput" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseEntriesFromSelf() { return { this, "APrimalBuff.bAllowMultiUseEntriesFromSelf" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopFire() { return { this, "APrimalBuff.bUseBPHandleOnStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bForceCrosshair() { return { this, "APrimalBuff.bForceCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLogoutSleeping() { return { this, "APrimalBuff.bPreventLogoutSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptInstigatorPlayerEmote() { return { this, "APrimalBuff.bUseInterceptInstigatorPlayerEmote" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis() { return { this, "APrimalBuff.bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis() { return { this, "APrimalBuff.bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity() { return { this, "APrimalBuff.bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnOwnerMassTeleportEvent() { return { this, "APrimalBuff.bUseBPOnOwnerMassTeleportEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldForceOwnerDedicatedMovementTickPerFrame() { return { this, "APrimalBuff.bUseBPShouldForceOwnerDedicatedMovementTickPerFrame" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOnlyCustomFallDamage() { return { this, "APrimalBuff.bAllowOnlyCustomFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMoveAnimRate() { return { this, "APrimalBuff.bUseBPGetMoveAnimRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingDesire() { return { this, "APrimalBuff.bUseBPOverrideTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsApplyingLevelUps() { return { this, "APrimalBuff.bBuffPreventsApplyingLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreSerializeForInstigator() { return { this, "APrimalBuff.bBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseFinalAdjustDamage() { return { this, "APrimalBuff.bUseFinalAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWaterJumpVelocity() { return { this, "APrimalBuff.bUseBPOverrideWaterJumpVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerDealtDamage() { return { this, "APrimalBuff.bUseBP_OnOwnerDealtDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetGravityZScale() { return { this, "APrimalBuff.bUseGetGravityZScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustDamageEx() { return { this, "APrimalBuff.bUseBP_AdjustDamageEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity() { return { this, "APrimalBuff.bUseBP_OverrideTerminalVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideFinalWanderLocation() { return { this, "APrimalBuff.bUseBuffOverrideFinalWanderLocation" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxAcceleration() { return { this, "APrimalBuff.bModifyMaxAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bModifyRotationRate() { return { this, "APrimalBuff.bModifyRotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bModifyFriction() { return { this, "APrimalBuff.bModifyFriction" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFootstepsParticles() { return { this, "APrimalBuff.bDisableFootstepsParticles" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAddingWithoutController() { return { this, "APrimalBuff.bForceAllowAddingWithoutController" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWhileBuried() { return { this, "APrimalBuff.bForceAllowWhileBuried" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerTeleported() { return { this, "APrimalBuff.bUseBP_OnOwnerTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustRadialDamage() { return { this, "APrimalBuff.bUseBPAdjustRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcedBuffAimOverride() { return { this, "APrimalBuff.bUseForcedBuffAimOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventTekArmorBuffs() { return { this, "APrimalBuff.bUseBPPreventTekArmorBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccess() { return { this, "APrimalBuff.bBuffPreventsInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bReactivateWithNewDamageCauser() { return { this, "APrimalBuff.bReactivateWithNewDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoNameColorOverride() { return { this, "APrimalBuff.bUseBPDinoNameColorOverride" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsCryo() { return { this, "APrimalBuff.bBuffPreventsCryo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideInventoryAccessInput() { return { this, "APrimalBuff.bUseBuffOverrideInventoryAccessInput" }; }
    BitFieldValue<bool, unsigned __int32> bListenForInput() { return { this, "APrimalBuff.bListenForInput" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptUseAction() { return { this, "APrimalBuff.bInterceptUseAction" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptWeaponToggle() { return { this, "APrimalBuff.bInterceptWeaponToggle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySound() { return { this, "APrimalBuff.bUseBPPreventNotifySound" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUDRemotePlayers() { return { this, "APrimalBuff.bBuffDrawFloatingHUDRemotePlayers" }; }
    BitFieldValue<bool, unsigned __int32> bUseConsolidatedMultiUseWheel() { return { this, "APrimalBuff.bUseConsolidatedMultiUseWheel" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBuff() { return { this, "APrimalBuff.bForceAlwaysAllowBuff" }; }
    BitFieldValue<bool, unsigned __int32> bForceSelfTick() { return { this, "APrimalBuff.bForceSelfTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceInstigatorTick() { return { this, "APrimalBuff.bForceInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bSkipInstigatorTick() { return { this, "APrimalBuff.bSkipInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffTickByInstigator() { return { this, "APrimalBuff.bBuffTickByInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bTriggeredInstigatorDie() { return { this, "APrimalBuff.bTriggeredInstigatorDie" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretsToTargetInstigatorIfTraceHitsBuff() { return { this, "APrimalBuff.bAllowTurretsToTargetInstigatorIfTraceHitsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsHighRiskMissionBuff() { return { this, "APrimalBuff.bIsHighRiskMissionBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreClaimWildFollower() { return { this, "APrimalBuff.bUseBPPreClaimWildFollower" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffLevelUpStatOverride() { return { this, "APrimalBuff.bUseBPGetBuffLevelUpStatOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffKilledSomethingEvent() { return { this, "APrimalBuff.bUseBPBuffKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNofityMontagePlay() { return { this, "APrimalBuff.bUseBPNofityMontagePlay" }; }

    // Functions

    void BPActivated(AActor* ForInstigator) { NativeCall<void, AActor*>(this, "APrimalBuff.BPActivated(AActor*)", ForInstigator); }
    float BPAdjustDamage_Ex(float Damage, const FHitResult* HitInfo, const UE::Math::TVector<double>* ImpulseDir, AController* EventInstigator, AActor* InDamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, const FHitResult*, const UE::Math::TVector<double>*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BPAdjustDamage_Ex(float,FHitResult&,UE::Math::TVector<double>&,AController*,AActor*,TSubclassOf<UDamageType>)", Damage, HitInfo, ImpulseDir, EventInstigator, InDamageCauser, TheDamgeType); }
    float BPAdjustRadialDamage(float currentDamage, const UE::Math::TVector<double>* Origin, const FRadialDamageEvent* DamageEvent) { return NativeCall<float, float, const UE::Math::TVector<double>*, const FRadialDamageEvent*>(this, "APrimalBuff.BPAdjustRadialDamage(float,UE::Math::TVector<double>&,FRadialDamageEvent&)", currentDamage, Origin, DamageEvent); }
    void BPDinoRefreshColorization(const TArray<FLinearColor, TSizedDefaultAllocator<32> >* DinoColors, TArray<FLinearColor, TSizedDefaultAllocator<32> >* OverrideColors) { NativeCall<void, const TArray<FLinearColor, TSizedDefaultAllocator<32> >*, TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.BPDinoRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&,TArray<FLinearColor,TSizedDefaultAllocator<32>>&)", DinoColors, OverrideColors); }
    FColor* BPGetDinoNameColorOverride(FColor* result, AShooterHUD* HUD, FColor ColorToOverride) { return NativeCall<FColor*, FColor*, AShooterHUD*, FColor>(this, "APrimalBuff.BPGetDinoNameColorOverride(AShooterHUD*,FColor)", result, HUD, ColorToOverride); }
    void BPPreSetupForInstigator(AActor* ForInstigator) { NativeCall<void, AActor*>(this, "APrimalBuff.BPPreSetupForInstigator(AActor*)", ForInstigator); }
    void BPSetupForInstigator(AActor* ForInstigator) { NativeCall<void, AActor*>(this, "APrimalBuff.BPSetupForInstigator(AActor*)", ForInstigator); }
    float BuffAdjustDamage(float Damage, const FHitResult* HitInfo, AController* EventInstigator, AActor* TheDamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, const FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)", Damage, HitInfo, EventInstigator, TheDamageCauser, TheDamgeType); }
    void BuffPostAdjustDamage(float Damage, const FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { NativeCall<void, float, const FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffPostAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
    void DrawBuffFloatingHUD(int BuffIndex, AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD*, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD(int,AShooterHUD*,float,float,float)", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
    FStatusValueModifierDescription* GetBuffDescription(FStatusValueModifierDescription* result) { return NativeCall<FStatusValueModifierDescription*, FStatusValueModifierDescription*>(this, "APrimalBuff.GetBuffDescription()", result); }
    TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* GetEnabledGestationMonitoringTargets(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.GetEnabledGestationMonitoringTargets()", result); }
    void InstigatorDie() { NativeCall<void>(this, "APrimalBuff.InstigatorDie()"); }
    bool InterceptInstigatorPlayerEmoteAnim(UAnimMontage* EmoteAnim) { return NativeCall<bool, UAnimMontage*>(this, "APrimalBuff.InterceptInstigatorPlayerEmoteAnim(UAnimMontage*)", EmoteAnim); }
    void ServerRequestRelatedMissionData() { NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData()"); }
    void SetBuffCauser(AActor* CausedBy) { NativeCall<void, AActor*>(this, "APrimalBuff.SetBuffCauser(AActor*)", CausedBy); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalBuff();
    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>* AtLocation, const UE::Math::TRotator<double>* AtRotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "APrimalBuff.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
    void Deactivate() { NativeCall<void>(this, "APrimalBuff.Deactivate()"); }
    void NetDeactivate_Implementation() { NativeCall<void>(this, "APrimalBuff.NetDeactivate_Implementation()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBuff.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff.SetupForInstigator()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.Tick(float)", DeltaSeconds); }
    void ProcessStaticPathing(bool triggerRunning) { NativeCall<void, bool>(this, "APrimalBuff.ProcessStaticPathing(bool)", triggerRunning); }
    bool AOEBuffCanAffect(APrimalCharacter* forChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff.AOEBuffCanAffect(APrimalCharacter*)", forChar); }
    void InstigatorJumped() { NativeCall<void>(this, "APrimalBuff.InstigatorJumped()"); }
    void Destroyed() { NativeCall<void>(this, "APrimalBuff.Destroyed()"); }
    void NetResetBuffStart_Implementation() { NativeCall<void>(this, "APrimalBuff.NetResetBuffStart_Implementation()"); }
    bool ResetBuffStart(bool bMulticastBuffDuration) { return NativeCall<bool, bool>(this, "APrimalBuff.ResetBuffStart(bool)", bMulticastBuffDuration); }
    APrimalBuff* AddBuff(APrimalCharacter* ForCharacter, AActor* DamageCauser, TFunction<void __cdecl(APrimalBuff*)>* PreSpawnCustomizeFunc) { return NativeCall<APrimalBuff*, APrimalCharacter*, AActor*, TFunction<void __cdecl(APrimalBuff*)>*>(this, "APrimalBuff.AddBuff(APrimalCharacter*,AActor*,TFunction<void__cdecl(APrimalBuff*))", ForCharacter, DamageCauser, PreSpawnCustomizeFunc); }
    void ServerRequestRelatedMissionData_Implementation() { NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData_Implementation()"); }
    void ClientReceiveRelatedMissionData_Implementation(AMissionType* InMission, bool InHasRelatedMission) { NativeCall<void, AMissionType*, bool>(this, "APrimalBuff.ClientReceiveRelatedMissionData_Implementation(AMissionType*,bool)", InMission, InHasRelatedMission); }
    void GetHUDElements(APlayerController* ForPC, TArray<FHUDElement, TSizedDefaultAllocator<32> >* OutHUDElements) { NativeCall<void, APlayerController*, TArray<FHUDElement, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>>&)", ForPC, OutHUDElements); }
    static APrimalBuff* StaticAddBuffToSpectatorController(TSubclassOf<APrimalBuff> BuffClass, AShooterPlayerController* SpectatorPlayerController) { return NativeCall<APrimalBuff*, TSubclassOf<APrimalBuff>, AShooterPlayerController*>(nullptr, "APrimalBuff.StaticAddBuffToSpectatorController(TSubclassOf<APrimalBuff>,AShooterPlayerController*)", BuffClass, SpectatorPlayerController); }
    static APrimalBuff* StaticAddBuff(TSubclassOf<APrimalBuff> BuffClass, APrimalCharacter* ForCharacter, UPrimalItem* AssociatedItem, AActor* DamageCauser, bool bForceOnClient) { return NativeCall<APrimalBuff*, TSubclassOf<APrimalBuff>&, APrimalCharacter*, UPrimalItem*, AActor*, bool>(nullptr, "APrimalBuff.StaticAddBuff(TSubclassOf<APrimalBuff>,APrimalCharacter*,UPrimalItem*,AActor*,bool)", BuffClass, ForCharacter, AssociatedItem, DamageCauser, bForceOnClient); }
    bool ExcludePostProcessBlendableMaterial(const UMaterialInterface* BlendableMaterialInterface) { return NativeCall<bool, const UMaterialInterface*>(this, "APrimalBuff.ExcludePostProcessBlendableMaterial(UMaterialInterface*)", BlendableMaterialInterface); }
    void PostProcessModifyBlendableMaterial(const UMaterialInterface* BlendableMaterialInterface, UMaterialInstanceDynamic* MID) { NativeCall<void, const UMaterialInterface*, UMaterialInstanceDynamic*>(this, "APrimalBuff.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic*)", BlendableMaterialInterface, MID); }
    bool PreventActorTargeting_Implementation(const AActor* ByActor) { return NativeCall<bool, const AActor*>(this, "APrimalBuff.PreventActorTargeting_Implementation(AActor*)", ByActor); }
    bool PreventRunning() { return NativeCall<bool>(this, "APrimalBuff.PreventRunning()"); }
    bool ExcludeAoEActor(AActor* ActorToConsider) { return NativeCall<bool, AActor*>(this, "APrimalBuff.ExcludeAoEActor(AActor*)", ActorToConsider); }
    bool HideBuffFromHUD_Implementation() { return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD_Implementation()"); }
    void Stasis() { NativeCall<void>(this, "APrimalBuff.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalBuff.Unstasis()"); }
    bool ExtendBuffTime(float AmountOfAdditionalTime) { return NativeCall<bool, float>(this, "APrimalBuff.ExtendBuffTime(float)", AmountOfAdditionalTime); }
    int GetBuffType_Implementation() { return NativeCall<int>(this, "APrimalBuff.GetBuffType_Implementation()"); }
    bool ReduceBuffTime(float AmountOfTimeToReduce) { return NativeCall<bool, float>(this, "APrimalBuff.ReduceBuffTime(float)", AmountOfTimeToReduce); }
    UMaterialInstanceDynamic* GetBuffPostprocessMaterial(AShooterPlayerController* ControllerOverride) { return NativeCall<UMaterialInstanceDynamic*, AShooterPlayerController*>(this, "APrimalBuff.GetBuffPostprocessMaterial(AShooterPlayerController*)", ControllerOverride); }
    void OnCapsuleHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult* Hit) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, UE::Math::TVector<double>*, const FHitResult*>(this, "APrimalBuff.OnCapsuleHitCallback(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", HitComponent, OtherActor, OtherComp, NormalImpulse, Hit); }
    void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalBuff.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalBuff.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
    void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "APrimalBuff.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    float GetGravityZScale(float CurrentScale) { return NativeCall<float, float>(this, "APrimalBuff.GetGravityZScale(float)", CurrentScale); }
    bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APrimalBuff.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
    bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "APrimalBuff.IsValidUnStasisCaster()"); }
    FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalBuff.GetDebugInfoString()", result); }
    void DinoRefreshColorization(const TArray<FLinearColor, TSizedDefaultAllocator<32> >* DinoColors) { NativeCall<void, const TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.DinoRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&)", DinoColors); }
    //bool PreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned __int8 NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned __int8>(this, "APrimalBuff.PreventInstigatorMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
    bool PreventInstigatorAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBuff.PreventInstigatorAttack(int)", AttackIndex); }
    void OverrideCharacterWalkingVelocity(UE::Math::TVector<double>* InitialVelocity, const float* Friction, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const float*, float>(this, "APrimalBuff.OverrideCharacterWalkingVelocity(UE::Math::TVector<double>&,float&,float)", InitialVelocity, Friction, DeltaTime); }
    void OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, const float* FluidFriction, const float* NetBuoyancy, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const float*, const float*, float>(this, "APrimalBuff.OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
    void OverrideCharacterNewFallVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalBuff.OverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
    void OverrideCharacterFlyingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalBuff.OverrideCharacterFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
    bool PreventCharacterLanding(const UE::Math::TVector<double>* ImpactPoint, const UE::Math::TVector<double>* ImpactAccel, UE::Math::TVector<double>* Velocity) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBuff.PreventCharacterLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", ImpactPoint, ImpactAccel, Velocity); }
    bool ShouldForceOwnerDedicatedMovementTickPerFrame() { return NativeCall<bool>(this, "APrimalBuff.ShouldForceOwnerDedicatedMovementTickPerFrame()"); }
    void AddBuffLifetime(const float AdditionalLifetime) { NativeCall<void, const float>(this, "APrimalBuff.AddBuffLifetime(float)", AdditionalLifetime); }
    void NetSyncBuffLifetime() { NativeCall<void>(this, "APrimalBuff.NetSyncBuffLifetime()"); }
    void Multi_SyncBuffLifetime_Implementation(const float NewDeactivateAfterTime) { NativeCall<void, const float>(this, "APrimalBuff.Multi_SyncBuffLifetime_Implementation(float)", NewDeactivateAfterTime); }
    void OnBuffLifetimeUpdated() { NativeCall<void>(this, "APrimalBuff.OnBuffLifetimeUpdated()"); }
    float GetRemainingTime(float DeactivateAfterTimeOverride) { return NativeCall<float, float>(this, "APrimalBuff.GetRemainingTime(float)", DeactivateAfterTimeOverride); }
    float GetTimeLeft() { return NativeCall<float>(this, "APrimalBuff.GetTimeLeft()"); }
    void OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff.OnOwnerTeleported()"); }
    FString* GetUniqueName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalBuff.GetUniqueName()", result); }
    FColor* BPGetDinoNameColorOverride_Implementation(FColor* result, AShooterHUD* HUD, FColor ColorToOverride) { return NativeCall<FColor*, FColor*, AShooterHUD*, FColor>(this, "APrimalBuff.BPGetDinoNameColorOverride_Implementation(AShooterHUD*,FColor)", result, HUD, ColorToOverride); }
    void ApplyPhysicsImpulses_Implementation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.ApplyPhysicsImpulses_Implementation(float)", DeltaSeconds); }
    void ModifyBuffMPCValues(bool bReset) { NativeCall<void, bool>(this, "APrimalBuff.ModifyBuffMPCValues(bool)", bReset); }
    int GetAlternateMultiUseCategory() { return NativeCall<int>(this, "APrimalBuff.GetAlternateMultiUseCategory()"); }
    void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalBuff.FinalLoadedFromSaveGame()"); }

	bool& bForcedOnSpectatorPlayerControllerField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bForcedOnSpectatorPlayerController"); }
	bool& bHasRelatedMissionField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bHasRelatedMission"); }
	bool& bUseBPSetupForInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPSetupForInstigator"); }
	bool& bUseBPOverrideBuffToGiveOnDeactivationField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPOverrideBuffToGiveOnDeactivation"); }
	bool& bUseBPInformDamageCauserOfBuffAddedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPInformDamageCauserOfBuffAdded"); }
	bool& bUseBPExcludeAoEActorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPExcludeAoEActor"); }
	bool& bOverrideBuffTypeField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideBuffType"); }
	bool& bOnlyTickWhenPossessedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOnlyTickWhenPossessed"); }
	bool& bContinueTickingServerAfterDeactivateField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingServerAfterDeactivate"); }
	bool& bUseBuffTickServerField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickServer"); }
	bool& bUseRemoteClientTickField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseRemoteClientTick"); }
	bool& bUseBPHandleInstigatorItemDropField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPHandleInstigatorItemDrop"); }
	bool& bTickFunctionDisabledField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bTickFunctionDisabled"); }
	bool& bOverrideTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideTPVCameraOffset"); }
	bool& bDeactivatedSoundOnlyLocalField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDeactivatedSoundOnlyLocal"); }
	bool& bBPModifyCharacterFOVField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBPModifyCharacterFOV"); }
	bool& bUseCenteredTPVCameraField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseCenteredTPVCamera"); }
	bool& bUseBPGetCrosshairColorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPGetCrosshairColor"); }
	bool& bUseBPModifyArmorValueField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPModifyArmorValue"); }
	bool& bIsCarryBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bIsCarryBuff"); }
	bool& bPersistentBuffSurvivesLevelUpField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bPersistentBuffSurvivesLevelUp"); }
	bool& bAlreadyRequestedRelatedMissionDataField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bAlreadyRequestedRelatedMissionData"); }
	float& TargetingTooltipCheckRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.TargetingTooltipCheckRange"); }
	bool& bBuffHidesNonWeaponHUDField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBuffHidesNonWeaponHUD"); }
	bool& bUseInterceptItemSlotUseField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseInterceptItemSlotUse"); }
	bool& bBuffPreventsInventoryAccessAllowMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBuffPreventsInventoryAccessAllowMissions"); }
	bool& bUseBPOverrideAoEBuffDamageCauserField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPOverrideAoEBuffDamageCauser"); }
	bool& bOverrideTPVCameraOffsetMultiplierField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideTPVCameraOffsetMultiplier"); }
	double& LastTimeAddedStackField() { return *GetNativePointerField<double*>(this, "APrimalBuff.LastTimeAddedStack"); }
	float& MinTimeBetweenStacksField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MinTimeBetweenStacks"); }
	float& StackingUpdatedBuffLifetimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.StackingUpdatedBuffLifetime"); }
	float& StackDurationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.StackDuration"); }
	int& MaxNumStacksField() { return *GetNativePointerField<int*>(this, "APrimalBuff.MaxNumStacks"); }
	int& AltNumStacksField() { return *GetNativePointerField<int*>(this, "APrimalBuff.AltNumStacks"); }
	float& ReflectMeleeDamagePercentField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ReflectMeleeDamagePercent"); }
	float& HarvestQuantityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HarvestQuantityMultiplier"); }
	bool& bIsFromSkillField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bIsFromSkill"); }
	float& SkillActivationCostField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SkillActivationCost"); }
	bool& validateRidingField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.validateRiding"); }
	float& DinoDamageCauserAggroToAddTowardsInstigatorField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DinoDamageCauserAggroToAddTowardsInstigator"); }
	float& DinoInstigatorAggroToAddTowardsDamageCauserField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DinoInstigatorAggroToAddTowardsDamageCauser"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff"); }

	FTimerHandle& StackUpdateHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff.StackUpdateHandle"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad"); }
	UE::Math::TVector2<double>& TargetingInfoTooltipPaddingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff.TargetingInfoTooltipPadding"); }
	UE::Math::TVector2<double>& TargetingInfoTooltipScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff.TargetingInfoTooltipScale"); }
	TEnumAsByte<EPrimalCharacterStatusValue::Type>& SkillActivationStatusCostTypeField() { return *GetNativePointerField<TEnumAsByte<EPrimalCharacterStatusValue::Type>*>(this, "APrimalBuff.SkillActivationStatusCostType"); }
	BitFieldValue<bool, unsigned char> bPreventCarryCharacter() { return { this, "APrimalBuff.bPreventCarryCharacter"}; }
	BitFieldValue<bool, unsigned char> bDisableFaceRotation() { return { this, "APrimalBuff.bDisableFaceRotation"}; }
	BitFieldValue<bool, unsigned __int32> bShowBuffModifierDescription() { return { this, "APrimalBuff.bShowBuffModifierDescription"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamage() { return { this, "APrimalBuff.bUseBPPreventFallDamage"}; }
	BitFieldValue<bool, unsigned __int32> bImmobilizeTargetPreventDismount() { return { this, "APrimalBuff.bImmobilizeTargetPreventDismount"}; }
	BitFieldValue<bool, unsigned __int32> bHideBuffFromHUDOnly() { return { this, "APrimalBuff.bHideBuffFromHUDOnly"}; }
	BitFieldValue<bool, unsigned char> bHideFootStepDecals() { return { this, "APrimalBuff.bHideFootStepDecals"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnHexagonCountChanged() { return { this, "APrimalBuff.bUseBPOnHexagonCountChanged"}; }
	BitFieldValue<bool, unsigned char> bFirstTimeCallingBPNonDedicatedPlayerPostAnimUpdate() { return { this, "APrimalBuff.bFirstTimeCallingBPNonDedicatedPlayerPostAnimUpdate"}; }
	BitFieldValue<bool, unsigned char> bUseSetHiddenInGameFromInstigator() { return { this, "APrimalBuff.bUseSetHiddenInGameFromInstigator"}; }
	BitFieldValue<bool, unsigned char> bAddStackResetsBuffStart() { return { this, "APrimalBuff.bAddStackResetsBuffStart"}; }
	BitFieldValue<bool, unsigned char> bPreventOnShip() { return { this, "APrimalBuff.bPreventOnShip"}; }
	BitFieldValue<bool, unsigned char> bUseBPFullyHarvestedNode() { return { this, "APrimalBuff.bUseBPFullyHarvestedNode"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnPlayerShoulderMountDinoChange() { return { this, "APrimalBuff.bUseBPOnPlayerShoulderMountDinoChange"}; }
	BitFieldValue<bool, unsigned char> bSupportsCustomHexagonConversionShop() { return { this, "APrimalBuff.bSupportsCustomHexagonConversionShop"}; }
	BitFieldValue<bool, unsigned __int32> bBuffPreventsPlayerDropAllInventory() { return { this, "APrimalBuff.bBuffPreventsPlayerDropAllInventory"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnTamedWildDino() { return { this, "APrimalBuff.bUseBPOnTamedWildDino"}; }
	BitFieldValue<bool, unsigned char> bIgnoreWeightWhenUsingExtraMaxSpeedModifier() { return { this, "APrimalBuff.bIgnoreWeightWhenUsingExtraMaxSpeedModifier"}; }
	BitFieldValue<bool, unsigned char> bBPModifyAimOffsetNoTarget() { return { this, "APrimalBuff.bBPModifyAimOffsetNoTarget"}; }
	BitFieldValue<bool, unsigned char> bUseOnCarryCharacter() { return { this, "APrimalBuff.bUseOnCarryCharacter"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnRiderChangeWeapons() { return { this, "APrimalBuff.bUseBPOnRiderChangeWeapons"}; }
	BitFieldValue<bool, unsigned char> bCallRiderChangeWeaponsOnClient() { return { this, "APrimalBuff.bCallRiderChangeWeaponsOnClient"}; }
	BitFieldValue<bool, unsigned char> bUseBPPreServerUpload() { return { this, "APrimalBuff.bUseBPPreServerUpload"}; }
	BitFieldValue<bool, unsigned char> bBPOverrideActorForTargetingTooltip() { return { this, "APrimalBuff.bBPOverrideActorForTargetingTooltip"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideBloodDecals() { return { this, "APrimalBuff.bUseBPOverrideBloodDecals"}; }
	BitFieldValue<bool, unsigned char> bCallRiderNotifiesOnClient() { return { this, "APrimalBuff.bCallRiderNotifiesOnClient"}; }
	BitFieldValue<bool, unsigned char> bUseBPPreventEquipWeapons() { return { this, "APrimalBuff.bUseBPPreventEquipWeapons"}; }
	BitFieldValue<bool, unsigned char> bInterceptInputEvents() { return { this, "APrimalBuff.bInterceptInputEvents"}; }
	BitFieldValue<bool, unsigned char> bUseBPChangeBuffStatusValueModifiers() { return { this, "APrimalBuff.bUseBPChangeBuffStatusValueModifiers"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideCharacterLocalControlZInterpSpeed() { return { this, "APrimalBuff.bUseBPOverrideCharacterLocalControlZInterpSpeed"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideCameraDesiredPivotLocation() { return { this, "APrimalBuff.bUseBPOverrideCameraDesiredPivotLocation"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideCameraArmLength() { return { this, "APrimalBuff.bUseBPOverrideCameraArmLength"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideCameraPivotLocationInterpParams() { return { this, "APrimalBuff.bUseBPOverrideCameraPivotLocationInterpParams"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideCameraArmLengthInterpParams() { return { this, "APrimalBuff.bUseBPOverrideCameraArmLengthInterpParams"}; }
	BitFieldValue<bool, unsigned char> bUseASACameraPivotLocationForOldCamera() { return { this, "APrimalBuff.bUseASACameraPivotLocationForOldCamera"}; }
	BitFieldValue<bool, unsigned char> bEnableBuffStacking() { return { this, "APrimalBuff.bEnableBuffStacking"}; }
	BitFieldValue<bool, unsigned char> bResetTopStackTimeWhenAddingNewStack() { return { this, "APrimalBuff.bResetTopStackTimeWhenAddingNewStack"}; }
	BitFieldValue<bool, unsigned char> bReactivationAddsNewStack() { return { this, "APrimalBuff.bReactivationAddsNewStack"}; }
	BitFieldValue<bool, unsigned char> bIsSkillBuff() { return { this, "APrimalBuff.bIsSkillBuff"}; }
	BitFieldValue<bool, unsigned char> bSkillAddBuffDeactivationTimeToCooldown() { return { this, "APrimalBuff.bSkillAddBuffDeactivationTimeToCooldown"}; }
	BitFieldValue<bool, unsigned char> bSkillBuffSetCooldown() { return { this, "APrimalBuff.bSkillBuffSetCooldown"}; }
	BitFieldValue<bool, unsigned char> bSkillAllowUseWhileSeated() { return { this, "APrimalBuff.bSkillAllowUseWhileSeated"}; }
	BitFieldValue<bool, unsigned char> bSkillAllowUseWhileEncumbered() { return { this, "APrimalBuff.bSkillAllowUseWhileEncumbered"}; }
	BitFieldValue<bool, unsigned char> bAddRequireSameDamageCauser() { return { this, "APrimalBuff.bAddRequireSameDamageCauser"}; }
	BitFieldValue<bool, unsigned char> bEnableTargetingTooltip() { return { this, "APrimalBuff.bEnableTargetingTooltip"}; }
	BitFieldValue<bool, unsigned char> bUseDinoRangeForTooltip() { return { this, "APrimalBuff.bUseDinoRangeForTooltip"}; }
	BitFieldValue<bool, unsigned char> UseBPAdjustOutputDamage() { return { this, "APrimalBuff.UseBPAdjustOutputDamage"}; }
	BitFieldValue<bool, unsigned char> UseBPAdjustOutputDamageForNonMeleePlayerDamage() { return { this, "APrimalBuff.UseBPAdjustOutputDamageForNonMeleePlayerDamage"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideValuesToAddPerSecond() { return { this, "APrimalBuff.bUseBPOverrideValuesToAddPerSecond"}; }
	BitFieldValue<bool, unsigned char> bApplyOneMaxSpeedModifierPerStack() { return { this, "APrimalBuff.bApplyOneMaxSpeedModifierPerStack"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetBuffDamageCauser() { return { this, "APrimalBuff.bUseBPGetBuffDamageCauser"}; }
	BitFieldValue<bool, unsigned char> bEnablesSpyglassEffect() { return { this, "APrimalBuff.bEnablesSpyglassEffect"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetAltInventoryForAmmoConsumption() { return { this, "APrimalBuff.bUseBPGetAltInventoryForAmmoConsumption"}; }
	BitFieldValue<bool, unsigned char> bForceUseStackCount() { return { this, "APrimalBuff.bForceUseStackCount"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetAttackAnimPlayRateModifier() { return { this, "APrimalBuff.bUseBPGetAttackAnimPlayRateModifier"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanFly() { return { this, "APrimalBuff.bUseBPCanFly"}; }
	BitFieldValue<bool, unsigned char> bUseBPForceOverrideWeaponFireTransform() { return { this, "APrimalBuff.bUseBPForceOverrideWeaponFireTransform"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideCuddleFoodTypes() { return { this, "APrimalBuff.bUseBPOverrideCuddleFoodTypes"}; }
	BitFieldValue<bool, unsigned char> bUseBPPassHarvestExperienceToActor() { return { this, "APrimalBuff.bUseBPPassHarvestExperienceToActor"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetBuffDescriptionIconAlphaMult() { return { this, "APrimalBuff.bUseBPGetBuffDescriptionIconAlphaMult"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideIsImprintPlayer() { return { this, "APrimalBuff.bUseBPOverrideIsImprintPlayer"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideMaxInventoryAccessDistance() { return { this, "APrimalBuff.bUseBPOverrideMaxInventoryAccessDistance"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideMaxUseDistance() { return { this, "APrimalBuff.bUseBPOverrideMaxUseDistance"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnDestroyInstigator() { return { this, "APrimalBuff.bUseBPOnDestroyInstigator"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetCustomTooltipActor() { return { this, "APrimalBuff.bUseBPGetCustomTooltipActor"}; }
	BitFieldValue<bool, unsigned char> bSavePlayerDataOnSaveWorld() { return { this, "APrimalBuff.bSavePlayerDataOnSaveWorld"}; }
	BitFieldValue<bool, unsigned char> bBuffPreventsMountedWeaponry() { return { this, "APrimalBuff.bBuffPreventsMountedWeaponry"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnAoeBuffAdded() { return { this, "APrimalBuff.bUseBPOnAoeBuffAdded"}; }
	BitFieldValue<bool, unsigned char> bPreventOnSeatingStructures() { return { this, "APrimalBuff.bPreventOnSeatingStructures"}; }
	BitFieldValue<bool, unsigned char> bUseBPBuffPreventBuilding() { return { this, "APrimalBuff.bUseBPBuffPreventBuilding"}; }
	BitFieldValue<bool, unsigned char> bUseBPBuffPreventsMultiuseEntries() { return { this, "APrimalBuff.bUseBPBuffPreventsMultiuseEntries"}; }
	BitFieldValue<bool, unsigned char> bBPFilterMultiUseFilterTargetEntries() { return { this, "APrimalBuff.bBPFilterMultiUseFilterTargetEntries"}; }
	BitFieldValue<bool, unsigned char> bUseBPInstigatorAllowDinoTargetingRange() { return { this, "APrimalBuff.bUseBPInstigatorAllowDinoTargetingRange"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnInstigatorLootedCrate() { return { this, "APrimalBuff.bUseBPOnInstigatorLootedCrate"}; }
	BitFieldValue<bool, unsigned char> bUseBPBuffPreventsImmobilization() { return { this, "APrimalBuff.bUseBPBuffPreventsImmobilization"}; }
	BitFieldValue<bool, unsigned char> bGetInstigatorChatMessages() { return { this, "APrimalBuff.bGetInstigatorChatMessages"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideDynamicMusic() { return { this, "APrimalBuff.bUseBPOverrideDynamicMusic"}; }
	BitFieldValue<bool, unsigned char> bUseBPBuffControllerKilledSomethingEvent() { return { this, "APrimalBuff.bUseBPBuffControllerKilledSomethingEvent"}; }
	BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_IncludeSmallAmounts() { return { this, "APrimalBuff.bNotifyExperienceGained_IncludeSmallAmounts"}; }
	BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_AllowCountingAlphaKills() { return { this, "APrimalBuff.bNotifyExperienceGained_AllowCountingAlphaKills"}; }
	BitFieldValue<bool, unsigned __int32> bAdditionalExperienceMultiplier() { return { this, "APrimalBuff.bAdditionalExperienceMultiplier"}; }
	BitFieldValue<bool, unsigned __int32> bAdditionalTamingSpeedMultiplier() { return { this, "APrimalBuff.bAdditionalTamingSpeedMultiplier"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyBuffWeaponFired() { return { this, "APrimalBuff.bUseBPNotifyBuffWeaponFired"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetStructureSettingsDamageAdjuster() { return { this, "APrimalBuff.bUseBPOverrideTargetStructureSettingsDamageAdjuster"}; }
	BitFieldValue<bool, unsigned __int32> bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad() { return { this, "APrimalBuff.bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage() { return { this, "APrimalBuff.bUseBPAllowPlayMontage"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetJumpZVelocityModifier() { return { this, "APrimalBuff.bUseBPGetJumpZVelocityModifier"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPShieldStateChanged() { return { this, "APrimalBuff.bUseBPShieldStateChanged"}; }
	bool PreventJump_Implementation() { return NativeCall<bool>(this, "APrimalBuff.PreventJump_Implementation()"); }
	bool BPCheckPreventInput(EPrimalCharacterInputType::Type inputType) { return NativeCall<bool, EPrimalCharacterInputType::Type>(this, "APrimalBuff.BPCheckPreventInput(EPrimalCharacterInputType::Type)", inputType); }
	void BPOnTamedWildDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBuff.BPOnTamedWildDino(APrimalDinoCharacter*)", Dino); }
	ECameraStyle::Type BPForceCameraStyle(APrimalCharacter* ForViewTarget) { return NativeCall<ECameraStyle::Type, APrimalCharacter*>(this, "APrimalBuff.BPForceCameraStyle(APrimalCharacter*)", ForViewTarget); }
	void OnClearCarriedCharacter(APrimalCharacter* Carrier, APrimalCharacter* Carried) { NativeCall<void, APrimalCharacter*, APrimalCharacter*>(this, "APrimalBuff.OnClearCarriedCharacter(APrimalCharacter*,APrimalCharacter*)", Carrier, Carried); }
	bool OverrideHurtFX(UParticleSystem*& OutHurtFX, bool bIsAttacker) { return NativeCall<bool, UParticleSystem*&, bool>(this, "APrimalBuff.OverrideHurtFX(UParticleSystem*&,bool)", OutHurtFX, bIsAttacker); }
	bool BuffOverrideInventoryAccessInput_Implementation(AController* InController, bool bInputPressed) { return NativeCall<bool, AController*, bool>(this, "APrimalBuff.BuffOverrideInventoryAccessInput_Implementation(AController*,bool)", InController, bInputPressed); }
	void Multi_SyncBuffLifetime(float NewDeactivateAfterTime) { NativeCall<void, float>(this, "APrimalBuff.Multi_SyncBuffLifetime(float)", NewDeactivateAfterTime); }
	void ClearDeactivateTimer() { NativeCall<void>(this, "APrimalBuff.ClearDeactivateTimer()"); }
	float GetSkillActivationCost_Implementation(FName SkillName) { return NativeCall<float, FName>(this, "APrimalBuff.GetSkillActivationCost_Implementation(FName)", SkillName); }
	bool OverrideAttackerDamageImpactFX_Implementation(FName SocketName, APrimalCharacter* AttackingChar, APrimalCharacter* VictimChar) { return NativeCall<bool, FName, APrimalCharacter*, APrimalCharacter*>(this, "APrimalBuff.OverrideAttackerDamageImpactFX_Implementation(FName,APrimalCharacter*,APrimalCharacter*)", SocketName, AttackingChar, VictimChar); }
	void BPCharacterDetach() { NativeCall<void>(this, "APrimalBuff.BPCharacterDetach()"); }
	USoundCue* BPGetPlayerFootStepSound() { return NativeCall<USoundCue*>(this, "APrimalBuff.BPGetPlayerFootStepSound()"); }
	APrimalCharacter* BPOverrideTalkerCharacter() { return NativeCall<APrimalCharacter*>(this, "APrimalBuff.BPOverrideTalkerCharacter()"); }
	bool BPPreventCharacterLanding(UE::Math::TVector<double>* ImpactPoint, UE::Math::TVector<double>* ImpactAccel, UE::Math::TVector<double>* ImpactVelocity, UE::Math::TVector<double>& NewVelocity) { if (!ImpactPoint) throw std::invalid_argument("Null native value parameter"); if (!ImpactAccel) throw std::invalid_argument("Null native value parameter"); if (!ImpactVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &>(this, "APrimalBuff.BPPreventCharacterLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", *ImpactPoint, *ImpactAccel, *ImpactVelocity, NewVelocity); }
	bool AllowPlayMontage(UAnimMontage* Montage) { return NativeCall<bool, UAnimMontage*>(this, "APrimalBuff.AllowPlayMontage(UAnimMontage*)", Montage); }
	bool OverrideHurtFX_Niagara(UNiagaraSystem*& OutHurtFX, bool bIsAttacker) { return NativeCall<bool, UNiagaraSystem*&, bool>(this, "APrimalBuff.OverrideHurtFX_Niagara(UNiagaraSystem*&,bool)", OutHurtFX, bIsAttacker); }
	void OnMadeCustomHexagonShopPurchase(int TradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "APrimalBuff.OnMadeCustomHexagonShopPurchase(int,int)", TradableItemIndex, Quantity); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalBuff.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void UpdateBuffPersistentData_Implementation(bool bFromInstigatorDeath, bool bInstigatorDisconnected) { NativeCall<void, bool, bool>(this, "APrimalBuff.UpdateBuffPersistentData_Implementation(bool,bool)", bFromInstigatorDeath, bInstigatorDisconnected); }
	float BPOverrideMaxInventoryAccessDistance(UPrimalInventoryComponent* ForComponent, APrimalCharacter* ForChar) { return NativeCall<float, UPrimalInventoryComponent*, APrimalCharacter*>(this, "APrimalBuff.BPOverrideMaxInventoryAccessDistance(UPrimalInventoryComponent*,APrimalCharacter*)", ForComponent, ForChar); }
	bool BPBuffPreventsMultiuseEntry(UObject* ForObject, int useIndex, FString& PreventReason) { return NativeCall<bool, UObject*, int, FString&>(this, "APrimalBuff.BPBuffPreventsMultiuseEntry(UObject*,int,FString&)", ForObject, useIndex, PreventReason); }
	void BPNotifyLevelUpAvailable() { NativeCall<void>(this, "APrimalBuff.BPNotifyLevelUpAvailable()"); }
	void BPStasis() { NativeCall<void>(this, "APrimalBuff.BPStasis()"); }
	void BPDeactivate() { NativeCall<void>(this, "APrimalBuff.BPDeactivate()"); }
	bool ShouldUseAutonomousCorrectionOffset() { return NativeCall<bool>(this, "APrimalBuff.ShouldUseAutonomousCorrectionOffset()"); }
	void DinoInstigatorReceivedBotRider(APrimalBotCharacter* BotRider) { NativeCall<void, APrimalBotCharacter*>(this, "APrimalBuff.DinoInstigatorReceivedBotRider(APrimalBotCharacter*)", BotRider); }
	void ClientReceiveRelatedMissionData(AMissionType* InMission, bool InHasRelatedMission) { NativeCall<void, AMissionType*, bool>(this, "APrimalBuff.ClientReceiveRelatedMissionData(AMissionType*,bool)", InMission, InHasRelatedMission); }
	void UpdateAltInventoryState() { NativeCall<void>(this, "APrimalBuff.UpdateAltInventoryState()"); }
	FString* BPGetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalBuff.BPGetDebugInfoString()", result); }
	float BPModifyArmorValue(UPrimalItem* ForItem, float BaseArmorValue) { return NativeCall<float, UPrimalItem*, float>(this, "APrimalBuff.BPModifyArmorValue(UPrimalItem*,float)", ForItem, BaseArmorValue); }
	float GetBuffTickServerDeltaTime() { return NativeCall<float>(this, "APrimalBuff.GetBuffTickServerDeltaTime()"); }
	float BPOverrideTargetingDesire(AActor* ForTarget, float ForTargetingDesireValue) { return NativeCall<float, AActor*, float>(this, "APrimalBuff.BPOverrideTargetingDesire(AActor*,float)", ForTarget, ForTargetingDesireValue); }
	float GetHUDProgressBarPercent_Implementation() { return NativeCall<float>(this, "APrimalBuff.GetHUDProgressBarPercent_Implementation()"); }
	void DinoInstigatorPreReceivedRider(AShooterCharacter* Rider) { NativeCall<void, AShooterCharacter*>(this, "APrimalBuff.DinoInstigatorPreReceivedRider(AShooterCharacter*)", Rider); }
	bool BPPreventOnStartJump_Implementation() { return NativeCall<bool>(this, "APrimalBuff.BPPreventOnStartJump_Implementation()"); }
	void BPInstigatorUnpossessed() { NativeCall<void>(this, "APrimalBuff.BPInstigatorUnpossessed()"); }
	UE::Math::TVector<double>* BPOverrideCharacterNewFallVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "APrimalBuff.BPOverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", result, InitialVelocity, Gravity, DeltaTime); }
	bool BPBypassPreventDinoDismount(bool FromRider, bool bCancelForceLand, bool SpawnDinoDefaultController, int OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear, bool bFromUse) { return NativeCall<bool, bool, bool, bool, int, bool, bool>(this, "APrimalBuff.BPBypassPreventDinoDismount(bool,bool,bool,int,bool,bool)", FromRider, bCancelForceLand, SpawnDinoDefaultController, OverrideUnboardDirection, bForceEvenIfBuffPreventsClear, bFromUse); }
	bool BPInterceptWeaponToggle() { return NativeCall<bool>(this, "APrimalBuff.BPInterceptWeaponToggle()"); }
	bool BPValueToAddPerSecondIsManualModification(EPrimalCharacterStatusValue::Type StatType) { return NativeCall<bool, EPrimalCharacterStatusValue::Type>(this, "APrimalBuff.BPValueToAddPerSecondIsManualModification(EPrimalCharacterStatusValue::Type)", StatType); }
	void NotifyBumpedPawn(APrimalCharacter* BumpedPawn) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff.NotifyBumpedPawn(APrimalCharacter*)", BumpedPawn); }
	bool BPIsValidUnStasisCaster() { return NativeCall<bool>(this, "APrimalBuff.BPIsValidUnStasisCaster()"); }
	void ResetClientBuffTick(float MinTime, float MaxTime) { NativeCall<void, float, float>(this, "APrimalBuff.ResetClientBuffTick(float,float)", MinTime, MaxTime); }
	UE::Math::TRotator<double>* GetForcedBuffAimOverride(UE::Math::TRotator<double>* result, bool bIsWeaponAim) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, bool>(this, "APrimalBuff.GetForcedBuffAimOverride(bool)", result, bIsWeaponAim); }
	void BPHandleOnStopAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStopAltFire(bool)", bFromGamepad); }
	bool OverrideAttackerDamageImpactFX(FName SocketName, APrimalCharacter* AttackingChar, APrimalCharacter* VictimChar) { return NativeCall<bool, FName, APrimalCharacter*, APrimalCharacter*>(this, "APrimalBuff.OverrideAttackerDamageImpactFX(FName,APrimalCharacter*,APrimalCharacter*)", SocketName, AttackingChar, VictimChar); }
	void BPBuffKilledSomethingEvent(APrimalCharacter* KilledTarget) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff.BPBuffKilledSomethingEvent(APrimalCharacter*)", KilledTarget); }
	FColor BPGetCrosshairColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalBuff.BPGetCrosshairColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void ServerRequestCustomHexagonTrade_Implementation(int RequestedTradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "APrimalBuff.ServerRequestCustomHexagonTrade_Implementation(int,int)", RequestedTradableItemIndex, Quantity); }
	bool InterceptInstigatorPlayerEmoteAnim_Implementation(UAnimMontage* EmoteAnim) { return NativeCall<bool, UAnimMontage*>(this, "APrimalBuff.InterceptInstigatorPlayerEmoteAnim_Implementation(UAnimMontage*)", EmoteAnim); }
	void ActivateEmitter() { NativeCall<void>(this, "APrimalBuff.ActivateEmitter()"); }
	void NetDeactivate() { NativeCall<void>(this, "APrimalBuff.NetDeactivate()"); }
	void BPShieldStateChanged(bool bNewState) { NativeCall<void, bool>(this, "APrimalBuff.BPShieldStateChanged(bool)", bNewState); }
	bool BPPreventFirstPerson() { return NativeCall<bool>(this, "APrimalBuff.BPPreventFirstPerson()"); }
	void BPNotifyOtherBuffDeactivated(APrimalBuff* OtherBuff) { NativeCall<void, APrimalBuff*>(this, "APrimalBuff.BPNotifyOtherBuffDeactivated(APrimalBuff*)", OtherBuff); }
	bool BPPreventflight() { return NativeCall<bool>(this, "APrimalBuff.BPPreventflight()"); }
	void BPNotifyPreventDismounting(APrimalDinoCharacter* FromDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBuff.BPNotifyPreventDismounting(APrimalDinoCharacter*)", FromDino); }
	void BPOnAOEBuffAdded(APrimalBuff* BuffAdded, APrimalCharacter* ToInstigator) { NativeCall<void, APrimalBuff*, APrimalCharacter*>(this, "APrimalBuff.BPOnAOEBuffAdded(APrimalBuff*,APrimalCharacter*)", BuffAdded, ToInstigator); }
	float BPOverrideValuesToAddPerSecond(float InValue, EPrimalCharacterStatusValue::Type StatType) { return NativeCall<float, float, EPrimalCharacterStatusValue::Type>(this, "APrimalBuff.BPOverrideValuesToAddPerSecond(float,EPrimalCharacterStatusValue::Type)", InValue, StatType); }
	UE::Math::TRotator<double>* BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& Aim) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "APrimalBuff.BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>&)", result, Aim); }
	void NotifyBumpedPawn_Implementation(APrimalCharacter* BumpedPawn) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff.NotifyBumpedPawn_Implementation(APrimalCharacter*)", BumpedPawn); }
	bool IsGodModeBuff() { return NativeCall<bool>(this, "APrimalBuff.IsGodModeBuff()"); }
	void BPHandleOnStartAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStartAltFire(bool)", bFromGamepad); }
	bool BPPreventRidingInstigator(APrimalCharacter* ForPawn) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff.BPPreventRidingInstigator(APrimalCharacter*)", ForPawn); }
	bool IsOwningClient() { return NativeCall<bool>(this, "APrimalBuff.IsOwningClient()"); }
	bool PreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned char>(this, "APrimalBuff.PreventInstigatorMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	float BPGetBabyImprintingSpeedMultiplier_Implementation() { return NativeCall<float>(this, "APrimalBuff.BPGetBabyImprintingSpeedMultiplier_Implementation()"); }
	float BP_OverrideTerminalVelocity() { return NativeCall<float>(this, "APrimalBuff.BP_OverrideTerminalVelocity()"); }
	void BPNotifyOtherBuffActivatedToThisBuffClass(APrimalBuff* ActivatedBuff) { NativeCall<void, APrimalBuff*>(this, "APrimalBuff.BPNotifyOtherBuffActivatedToThisBuffClass(APrimalBuff*)", ActivatedBuff); }
	UE::Math::TRotator<double>* GetForcedBuffAimOverride_Implementation(UE::Math::TRotator<double>* result, bool bIsWeaponAim) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, bool>(this, "APrimalBuff.GetForcedBuffAimOverride_Implementation(bool)", result, bIsWeaponAim); }
	void NetUpdateStackingBuffLifetime_Implementation(float NewLifetime) { NativeCall<void, float>(this, "APrimalBuff.NetUpdateStackingBuffLifetime_Implementation(float)", NewLifetime); }
	static void GetStackingUpdatedBuffLifetime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetStackingUpdatedBuffLifetime_WrapperImpl(void*,void*)", Object, OutValue); }
	void UpdateAltInventoryStateAfterAmmoItemConsumption(int InitialQuantity) { NativeCall<void, int>(this, "APrimalBuff.UpdateAltInventoryStateAfterAmmoItemConsumption(int)", InitialQuantity); }
	bool BuffOverrideInventoryAccessInput(AController* InController, bool bInputPressed) { return NativeCall<bool, AController*, bool>(this, "APrimalBuff.BuffOverrideInventoryAccessInput(AController*,bool)", InController, bInputPressed); }
	float BPGetBabyImprintingSpeedMultiplier() { return NativeCall<float>(this, "APrimalBuff.BPGetBabyImprintingSpeedMultiplier()"); }
	void NetResetBuffStart() { NativeCall<void>(this, "APrimalBuff.NetResetBuffStart()"); }
	void BPPreSerializeForInstigator(bool bBeginningSerialize) { NativeCall<void, bool>(this, "APrimalBuff.BPPreSerializeForInstigator(bool)", bBeginningSerialize); }
	bool BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>* CurrentCameraPivotLocation, UE::Math::TVector<double>& DesiredCameraPivotLocation) { if (!CurrentCameraPivotLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &>(this, "APrimalBuff.BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>,UE::Math::TVector<double>&)", *CurrentCameraPivotLocation, DesiredCameraPivotLocation); }
	void DinoInstigatorClearedRider(AShooterCharacter* ClearedRider) { NativeCall<void, AShooterCharacter*>(this, "APrimalBuff.DinoInstigatorClearedRider(AShooterCharacter*)", ClearedRider); }
	bool PreventJump() { return NativeCall<bool>(this, "APrimalBuff.PreventJump()"); }
	void BPForceEnableTickFunction() { NativeCall<void>(this, "APrimalBuff.BPForceEnableTickFunction()"); }
	bool BPPreventOnStartJump() { return NativeCall<bool>(this, "APrimalBuff.BPPreventOnStartJump()"); }
	void OnCarryCharacter(APrimalCharacter* Carrier, APrimalCharacter* Carried) { NativeCall<void, APrimalCharacter*, APrimalCharacter*>(this, "APrimalBuff.OnCarryCharacter(APrimalCharacter*,APrimalCharacter*)", Carrier, Carried); }
	bool BPShouldBlockLocalChatMessage(const FString& ChatMessage, EChatSendMode::Type SendMode, int senderPlatform) { return NativeCall<bool, const FString&, EChatSendMode::Type, int>(this, "APrimalBuff.BPShouldBlockLocalChatMessage(FString&,EChatSendMode::Type,int)", ChatMessage, SendMode, senderPlatform); }
	void BPNotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalBuff.BPNotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
	void DirectSetBuffDuration(float Duration) { NativeCall<void, float>(this, "APrimalBuff.DirectSetBuffDuration(float)", Duration); }
	void NotifyBumpedByPawn_Implementation(APrimalCharacter* BumpedBy) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff.NotifyBumpedByPawn_Implementation(APrimalCharacter*)", BumpedBy); }
	float GetStackDuration() { return NativeCall<float>(this, "APrimalBuff.GetStackDuration()"); }
	void BPAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalBuff.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyPhysicsImpulses(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.ApplyPhysicsImpulses(float)", DeltaSeconds); }
	bool BPOverrideCameraPivotLocationInterpParams(const FPrimalCameraParams& CameraParams, const FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const FPrimalCameraInterpParams& LastInterpParamsX, const FPrimalCameraInterpParams& LastInterpParamsY, const FPrimalCameraInterpParams& LastInterpParamsZ, FPrimalCameraInterpParams& OutInterpParamsX, FPrimalCameraInterpParams& OutInterpParamsY, FPrimalCameraInterpParams& OutInterpParamsZ, const FPrimalCameraInterpParams& PreCharModifiers_InterpParamsX, const FPrimalCameraInterpParams& PreCharModifiers_InterpParamsY, const FPrimalCameraInterpParams& PreCharModifiers_InterpParamsZ) { return NativeCall<bool, const FPrimalCameraParams&, const FPrimalCameraPivotZInterpOverrides&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&, const FPrimalCameraInterpParams&>(this, "APrimalBuff.BPOverrideCameraPivotLocationInterpParams(FPrimalCameraParams&,FPrimalCameraPivotZInterpOverrides&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", CameraParams, PivotZInterpOverrides, LastInterpParamsX, LastInterpParamsY, LastInterpParamsZ, OutInterpParamsX, OutInterpParamsY, OutInterpParamsZ, PreCharModifiers_InterpParamsX, PreCharModifiers_InterpParamsY, PreCharModifiers_InterpParamsZ); }
	void OnInstigatorDeathHarvesting() { NativeCall<void>(this, "APrimalBuff.OnInstigatorDeathHarvesting()"); }
	UPrimalUI* GetCustomHexagonConversionShopUI() { return NativeCall<UPrimalUI*>(this, "APrimalBuff.GetCustomHexagonConversionShopUI()"); }
	void DrawBuffFloatingHUD_Implementation(int BuffIndex, AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD*, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD_Implementation(int,AShooterHUD*,float,float,float)", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
	void BPOnStacksUpdated(bool bStackRemoved) { NativeCall<void, bool>(this, "APrimalBuff.BPOnStacksUpdated(bool)", bStackRemoved); }
	static void SetBuffDamageCauser_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetBuffDamageCauser_WrapperImpl(void*,void*)", Object, InValue); }
	bool AllowPostProcessEffect() { return NativeCall<bool>(this, "APrimalBuff.AllowPostProcessEffect()"); }
	void BPInstigatorStartedRiding() { NativeCall<void>(this, "APrimalBuff.BPInstigatorStartedRiding()"); }
	void BPNotifyExperienceGained(float ActualExpGained, float ExpectedExpGain, EXPType::Type ExpTypeGained) { NativeCall<void, float, float, EXPType::Type>(this, "APrimalBuff.BPNotifyExperienceGained(float,float,EXPType::Type)", ActualExpGained, ExpectedExpGain, ExpTypeGained); }
	void DeactivateEmitter() { NativeCall<void>(this, "APrimalBuff.DeactivateEmitter()"); }
	void BP_OnRiderChangeWeapons(AShooterCharacter* theRider, UPrimalItem* newWeapon) { NativeCall<void, AShooterCharacter*, UPrimalItem*>(this, "APrimalBuff.BP_OnRiderChangeWeapons(AShooterCharacter*,UPrimalItem*)", theRider, newWeapon); }
	void BPBuffControllerKilledSomethingEvent(APrimalCharacter* KilledTarget, AActor* DamageCauser) { NativeCall<void, APrimalCharacter*, AActor*>(this, "APrimalBuff.BPBuffControllerKilledSomethingEvent(APrimalCharacter*,AActor*)", KilledTarget, DamageCauser); }
	void SetStacks(int NumStacks) { NativeCall<void, int>(this, "APrimalBuff.SetStacks(int)", NumStacks); }
	bool OverrideAttackerDamageImpactFXAsVictim(FName SocketName, APrimalCharacter* AttackingChar, APrimalCharacter* VictimChar) { return NativeCall<bool, FName, APrimalCharacter*, APrimalCharacter*>(this, "APrimalBuff.OverrideAttackerDamageImpactFXAsVictim(FName,APrimalCharacter*,APrimalCharacter*)", SocketName, AttackingChar, VictimChar); }
	void BPInstigatorSeated() { NativeCall<void>(this, "APrimalBuff.BPInstigatorSeated()"); }
	void CheckAddDinoAggro(AActor* DamageCauser) { NativeCall<void, AActor*>(this, "APrimalBuff.CheckAddDinoAggro(AActor*)", DamageCauser); }
	void OnStacksRemoved() { NativeCall<void>(this, "APrimalBuff.OnStacksRemoved()"); }
	bool BPOverrideRightShoulderOnPlayer(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "APrimalBuff.BPOverrideRightShoulderOnPlayer(APlayerController*)", PC); }
	APlayerController* GetInstigatorPlayerController() { return NativeCall<APlayerController*>(this, "APrimalBuff.GetInstigatorPlayerController()"); }
	bool BPCustomRequest(FName RequestName, int& OutIndex, int InIndex, AActor* FromActor, float FloatArg) { return NativeCall<bool, FName, int&, int, AActor*, float>(this, "APrimalBuff.BPCustomRequest(FName,int&,int,AActor*,float)", RequestName, OutIndex, InIndex, FromActor, FloatArg); }
	void BPUnstasis() { NativeCall<void>(this, "APrimalBuff.BPUnstasis()"); }
	bool PreventBlockingWithShield() { return NativeCall<bool>(this, "APrimalBuff.PreventBlockingWithShield()"); }
	void BPInstigatorDied(AActor* DamageCauser) { NativeCall<void, AActor*>(this, "APrimalBuff.BPInstigatorDied(AActor*)", DamageCauser); }
	void BuffTickClient(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickClient(float)", DeltaTime); }
	bool BPBuffPreventUploading() { return NativeCall<bool>(this, "APrimalBuff.BPBuffPreventUploading()"); }
	bool BPBuffPreventBuilding(const APrimalStructure* Structure, const FPlacementData& PlacementData) { return NativeCall<bool, const APrimalStructure*, const FPlacementData&>(this, "APrimalBuff.BPBuffPreventBuilding(APrimalStructure*,FPlacementData&)", Structure, PlacementData); }
	float BPGetMoveAnimRate() { return NativeCall<float>(this, "APrimalBuff.BPGetMoveAnimRate()"); }
	void EnableTickFunction() { NativeCall<void>(this, "APrimalBuff.EnableTickFunction()"); }
	float GetOverrideWaterJumpVelocity(float OutOfWaterZ) { return NativeCall<float, float>(this, "APrimalBuff.GetOverrideWaterJumpVelocity(float)", OutOfWaterZ); }
	bool BPInterceptUseAction() { return NativeCall<bool>(this, "APrimalBuff.BPInterceptUseAction()"); }
	FName GetMySkillName_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalBuff.GetMySkillName_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TVector<double>* BP_OverrideCharacterWalkingVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const float& Friction, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const float&, float>(this, "APrimalBuff.BP_OverrideCharacterWalkingVelocity(UE::Math::TVector<double>&,float&,float)", result, InitialVelocity, Friction, DeltaTime); }
	void BPPreServerUpload(AShooterPlayerController* UploadedBy) { NativeCall<void, AShooterPlayerController*>(this, "APrimalBuff.BPPreServerUpload(AShooterPlayerController*)", UploadedBy); }
	double GetDeactivationTime() { return NativeCall<double>(this, "APrimalBuff.GetDeactivationTime()"); }
	UE::Math::TVector<double>* BPOverrideWeaponBob(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InWeaponBob) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalBuff.BPOverrideWeaponBob(UE::Math::TVector<double>&)", result, InWeaponBob); }
	void InitializeStackDuration() { NativeCall<void>(this, "APrimalBuff.InitializeStackDuration()"); }
	void BuffTickServer(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickServer(float)", DeltaTime); }
	void BPInitializedCharacterAnimScriptInstance() { NativeCall<void>(this, "APrimalBuff.BPInitializedCharacterAnimScriptInstance()"); }
	bool BPPreventEquipWeapons() { return NativeCall<bool>(this, "APrimalBuff.BPPreventEquipWeapons()"); }
	void BPOnDestroyInstigator() { NativeCall<void>(this, "APrimalBuff.BPOnDestroyInstigator()"); }
	void NetUpdateStackingBuffLifetime(float NewLifetime) { NativeCall<void, float>(this, "APrimalBuff.NetUpdateStackingBuffLifetime(float)", NewLifetime); }
	void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode, EMovementMode NewMovementMode, unsigned char NewCustomMode) { NativeCall<void, EMovementMode, unsigned char, EMovementMode, unsigned char>(this, "APrimalBuff.BPOnInstigatorMovementModeChangedNotify(EMovementMode,unsignedchar,EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode, NewMovementMode, NewCustomMode); }
	void BP_OnOwnerDealtDamage(AActor* DamagedActor, float DamageAmount, const FDamageEvent& DamageEvent) { NativeCall<void, AActor*, float, const FDamageEvent&>(this, "APrimalBuff.BP_OnOwnerDealtDamage(AActor*,float,FDamageEvent&)", DamagedActor, DamageAmount, DamageEvent); }
	bool BPCustomAllowAddBuff(APrimalCharacter* ForCharacter, AActor* DamageCauser) { return NativeCall<bool, APrimalCharacter*, AActor*>(this, "APrimalBuff.BPCustomAllowAddBuff(APrimalCharacter*,AActor*)", ForCharacter, DamageCauser); }
	void BPForceOverrideWeaponFireTransform(AShooterWeapon* Weapon, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& Direction, FHitResult& Impact) { NativeCall<void, AShooterWeapon*, UE::Math::TVector<double>&, UE::Math::TVector<double>&, FHitResult&>(this, "APrimalBuff.BPForceOverrideWeaponFireTransform(AShooterWeapon*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&)", Weapon, Origin, Direction, Impact); }
	void BPInstigatorReceivedKillingDamage() { NativeCall<void>(this, "APrimalBuff.BPInstigatorReceivedKillingDamage()"); }
	void NotifyBumpedByPawn(APrimalCharacter* BumpedBy) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff.NotifyBumpedByPawn(APrimalCharacter*)", BumpedBy); }
	USoundBase* BPOverrideDynamicMusic() { return NativeCall<USoundBase*>(this, "APrimalBuff.BPOverrideDynamicMusic()"); }
	void BPInstigatorLocalPossessed(AShooterPlayerController* ByController) { NativeCall<void, AShooterPlayerController*>(this, "APrimalBuff.BPInstigatorLocalPossessed(AShooterPlayerController*)", ByController); }
	void BPDeactivated(AActor* ForInstigator) { NativeCall<void, AActor*>(this, "APrimalBuff.BPDeactivated(AActor*)", ForInstigator); }
	void BPOnPlayerShoulderMountDinoChange(bool bIsClear, APrimalDinoCharacter* ForShoulderMount, bool bIsSecondary) { NativeCall<void, bool, APrimalDinoCharacter*, bool>(this, "APrimalBuff.BPOnPlayerShoulderMountDinoChange(bool,APrimalDinoCharacter*,bool)", bIsClear, ForShoulderMount, bIsSecondary); }
	void BPInstigatorDisconnected() { NativeCall<void>(this, "APrimalBuff.BPInstigatorDisconnected()"); }
	static void SetRelatedMission_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetRelatedMission_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPInstigatorAllowDinoTargetingRange(const UE::Math::TVector<double>& AtLoc, float TargetingRange, APrimalDinoCharacter* ByDino) { return NativeCall<bool, const UE::Math::TVector<double>&, float, APrimalDinoCharacter*>(this, "APrimalBuff.BPInstigatorAllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", AtLoc, TargetingRange, ByDino); }
	void ResetServerBuffTick(float MinTime, float MaxTime) { NativeCall<void, float, float>(this, "APrimalBuff.ResetServerBuffTick(float,float)", MinTime, MaxTime); }
	bool BPPreventThrowingItem(UPrimalItem* ForItem) { return NativeCall<bool, UPrimalItem*>(this, "APrimalBuff.BPPreventThrowingItem(UPrimalItem*)", ForItem); }
	AActor* BPGetBuffDamageCauser() { return NativeCall<AActor*>(this, "APrimalBuff.BPGetBuffDamageCauser()"); }
	bool BPShouldForceOwnerDedicatedMovementTickPerFrame() { return NativeCall<bool>(this, "APrimalBuff.BPShouldForceOwnerDedicatedMovementTickPerFrame()"); }
	float BPOverrideMaxUseDistance(AActor* ForActor) { return NativeCall<float, AActor*>(this, "APrimalBuff.BPOverrideMaxUseDistance(AActor*)", ForActor); }
	static void SetStackingUpdatedBuffLifetime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetStackingUpdatedBuffLifetime_WrapperImpl(void*,void*)", Object, InValue); }
	float GetBuffPostprocessIntensity_Implementation() { return NativeCall<float>(this, "APrimalBuff.GetBuffPostprocessIntensity_Implementation()"); }
	bool BPExcludeAoEActor(AActor* ActorToConsider) { return NativeCall<bool, AActor*>(this, "APrimalBuff.BPExcludeAoEActor(AActor*)", ActorToConsider); }
	bool BuffOverrideFinalWanderLocation_Implementation(UE::Math::TVector<double>& outVec) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "APrimalBuff.BuffOverrideFinalWanderLocation_Implementation(UE::Math::TVector<double>&)", outVec); }
	UPrimalInventoryComponent* BPGetAltInventoryForAmmoConsumption() { return NativeCall<UPrimalInventoryComponent*>(this, "APrimalBuff.BPGetAltInventoryForAmmoConsumption()"); }
	void BPHandleOnStopFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStopFire(bool)", bFromGamepad); }
	void SetStackDuration(float NewStackDuration, bool bUpdateBuffLifetime) { NativeCall<void, float, bool>(this, "APrimalBuff.SetStackDuration(float,bool)", NewStackDuration, bUpdateBuffLifetime); }
	bool HideBuffFromHUD() { return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD()"); }
	void BPOnOwnerMassTeleportEvent(EMassTeleportState::Type EventState, const APrimalCharacter* TeleportInitiatedByChar) { NativeCall<void, EMassTeleportState::Type, const APrimalCharacter*>(this, "APrimalBuff.BPOnOwnerMassTeleportEvent(EMassTeleportState::Type,APrimalCharacter*)", EventState, TeleportInitiatedByChar); }
	int BPForceDinoNameTargetingTeamOverride(AShooterHUD* HUD, int TargetingTeamToCheck) { return NativeCall<int, AShooterHUD*, int>(this, "APrimalBuff.BPForceDinoNameTargetingTeamOverride(AShooterHUD*,int)", HUD, TargetingTeamToCheck); }
	bool BPOverrideCameraArmLengthInterpParams(const FPrimalCameraProfile& ForCameraProfile, const FPrimalCameraParams& ForCameraParams, const FPrimalCameraInterpParams& LastInterpParams, FPrimalCameraInterpParams& OutInterpParams) { return NativeCall<bool, const FPrimalCameraProfile&, const FPrimalCameraParams&, const FPrimalCameraInterpParams&, FPrimalCameraInterpParams&>(this, "APrimalBuff.BPOverrideCameraArmLengthInterpParams(FPrimalCameraProfile&,FPrimalCameraParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", ForCameraProfile, ForCameraParams, LastInterpParams, OutInterpParams); }
	bool BPPassHarvestExperienceToActor(AActor* ToActor) { return NativeCall<bool, AActor*>(this, "APrimalBuff.BPPassHarvestExperienceToActor(AActor*)", ToActor); }
	bool BPPreventRunning() { return NativeCall<bool>(this, "APrimalBuff.BPPreventRunning()"); }
	bool PreventActorTargeting(const AActor* ByActor) { return NativeCall<bool, const AActor*>(this, "APrimalBuff.PreventActorTargeting(AActor*)", ByActor); }
	AActor* BPGetCustomTooltipActor() { return NativeCall<AActor*>(this, "APrimalBuff.BPGetCustomTooltipActor()"); }
	void BPAnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalBuff.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void TryApplyStatusModifiersForInstigator() { NativeCall<void>(this, "APrimalBuff.TryApplyStatusModifiersForInstigator()"); }
	void ApplyBuffStatusValueModifiers(bool bIsFromBuffReset) { NativeCall<void, bool>(this, "APrimalBuff.ApplyBuffStatusValueModifiers(bool)", bIsFromBuffReset); }
	float BPAdditionalExperienceMultiplier(EXPType::Type ExpTypeGained) { return NativeCall<float, EXPType::Type>(this, "APrimalBuff.BPAdditionalExperienceMultiplier(EXPType::Type)", ExpTypeGained); }
	bool BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned char>(this, "APrimalBuff.BPPreventInstigatorMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	bool BuffOverrideFinalWanderLocation(UE::Math::TVector<double>& outVec) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "APrimalBuff.BuffOverrideFinalWanderLocation(UE::Math::TVector<double>&)", outVec); }
	void SetGestationMonitoringTarget(APrimalDinoCharacter* ForTarget, bool bEnable) { NativeCall<void, APrimalDinoCharacter*, bool>(this, "APrimalBuff.SetGestationMonitoringTarget(APrimalDinoCharacter*,bool)", ForTarget, bEnable); }
	void DinoInstigatorClearedBotRider(APrimalBotCharacter* ClearedBotRider) { NativeCall<void, APrimalBotCharacter*>(this, "APrimalBuff.DinoInstigatorClearedBotRider(APrimalBotCharacter*)", ClearedBotRider); }
	void BPInstigatorStoppedRiding(APrimalDinoCharacter* TheDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBuff.BPInstigatorStoppedRiding(APrimalDinoCharacter*)", TheDino); }
	bool OverrideHurtFX_Implementation(UParticleSystem*& OutHurtFX, bool bIsAttacker) { return NativeCall<bool, UParticleSystem*&, bool>(this, "APrimalBuff.OverrideHurtFX_Implementation(UParticleSystem*&,bool)", OutHurtFX, bIsAttacker); }
	void AddStacks(int NumStacks) { NativeCall<void, int>(this, "APrimalBuff.AddStacks(int)", NumStacks); }
	bool BPIsCharacterHardAttached() { return NativeCall<bool>(this, "APrimalBuff.BPIsCharacterHardAttached()"); }
	static void GetBuffDamageCauser_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetBuffDamageCauser_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPBypassPreventDinoDismount_Implementation(bool FromRider, bool bCancelForceLand, bool SpawnDinoDefaultController, int OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear, bool bFromUse) { return NativeCall<bool, bool, bool, bool, int, bool, bool>(this, "APrimalBuff.BPBypassPreventDinoDismount_Implementation(bool,bool,bool,int,bool,bool)", FromRider, bCancelForceLand, SpawnDinoDefaultController, OverrideUnboardDirection, bForceEvenIfBuffPreventsClear, bFromUse); }
	static void GetDeactivateAfterTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetDeactivateAfterTime_WrapperImpl(void*,void*)", Object, OutValue); }
	bool PreventFlight() { return NativeCall<bool>(this, "APrimalBuff.PreventFlight()"); }
	void OnInputEvent(APrimalCharacter* ForPrimalCharacter, EPrimalCharacterInputType::Type inputType) { NativeCall<void, APrimalCharacter*, EPrimalCharacterInputType::Type>(this, "APrimalBuff.OnInputEvent(APrimalCharacter*,EPrimalCharacterInputType::Type)", ForPrimalCharacter, inputType); }
	int CalculateNumStacksFromLifetime() { return NativeCall<int>(this, "APrimalBuff.CalculateNumStacksFromLifetime()"); }
	bool BPCanFly() { return NativeCall<bool>(this, "APrimalBuff.BPCanFly()"); }
	static void SetbHasRelatedMission_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetbHasRelatedMission_WrapperImpl(void*,void*)", Object, InValue); }
	float GetBuffPostprocessIntensity() { return NativeCall<float>(this, "APrimalBuff.GetBuffPostprocessIntensity()"); }
	bool BPOverrideCameraArmLength(const FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float& DesiredCameraArmLength) { return NativeCall<bool, const FPrimalCameraParams&, float, float&>(this, "APrimalBuff.BPOverrideCameraArmLength(FPrimalCameraParams&,float,float&)", CameraParams, CurrentCameraArmLength, DesiredCameraArmLength); }
	float GetHUDProgressBarPercent() { return NativeCall<float>(this, "APrimalBuff.GetHUDProgressBarPercent()"); }
	bool OverrideAttackerDamageImpactFXAsVictim_Implementation(FName SocketName, APrimalCharacter* AttackingChar, APrimalCharacter* VictimChar) { return NativeCall<bool, FName, APrimalCharacter*, APrimalCharacter*>(this, "APrimalBuff.OverrideAttackerDamageImpactFXAsVictim_Implementation(FName,APrimalCharacter*,APrimalCharacter*)", SocketName, AttackingChar, VictimChar); }
	bool AllowPostProcessEffect_Implementation() { return NativeCall<bool>(this, "APrimalBuff.AllowPostProcessEffect_Implementation()"); }
	float GetSalePriceMultForHexagonTradeOption_Implementation(int TradableItemIndex) { return NativeCall<float, int>(this, "APrimalBuff.GetSalePriceMultForHexagonTradeOption_Implementation(int)", TradableItemIndex); }
	void BPReactivateWithDamageCauser(AActor* ForInstigator, AActor* ForDamageCauser) { NativeCall<void, AActor*, AActor*>(this, "APrimalBuff.BPReactivateWithDamageCauser(AActor*,AActor*)", ForInstigator, ForDamageCauser); }
	void BPOnInstigatorCapsuleComponentHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, const UE::Math::TVector<double>& NormalImpulse, const FHitResult& Hit) { NativeCall<void, AActor*, UPrimitiveComponent*, const UE::Math::TVector<double>&, const FHitResult&>(this, "APrimalBuff.BPOnInstigatorCapsuleComponentHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>&,FHitResult&)", OtherActor, OtherComp, NormalImpulse, Hit); }
	float BP_OverrideTerminalVelocity_Implementation() { return NativeCall<float>(this, "APrimalBuff.BP_OverrideTerminalVelocity_Implementation()"); }
	void InterceptItemSlotUse(int Index, bool bIsRelease) { NativeCall<void, int, bool>(this, "APrimalBuff.InterceptItemSlotUse(int,bool)", Index, bIsRelease); }
	void BPResetBuffStart() { NativeCall<void>(this, "APrimalBuff.BPResetBuffStart()"); }
	void BPDrawBuffStatusHUD(AShooterHUD* HUD, float XPos, float YPos, float ScaleMult) { NativeCall<void, AShooterHUD*, float, float, float>(this, "APrimalBuff.BPDrawBuffStatusHUD(AShooterHUD*,float,float,float)", HUD, XPos, YPos, ScaleMult); }
	void UpdateBuffPersistentData(bool bFromInstigatorDeath, bool bInstigatorDisconnected) { NativeCall<void, bool, bool>(this, "APrimalBuff.UpdateBuffPersistentData(bool,bool)", bFromInstigatorDeath, bInstigatorDisconnected); }
	static void SetAltNumStacks_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetAltNumStacks_WrapperImpl(void*,void*)", Object, InValue); }
	void BPOnPreventedFiringDisabledWeapon(AShooterWeapon* Weapon, FName PreventingTag) { NativeCall<void, AShooterWeapon*, FName>(this, "APrimalBuff.BPOnPreventedFiringDisabledWeapon(AShooterWeapon*,FName)", Weapon, PreventingTag); }
	float BPAdditionalTamingSpeedMultiplier() { return NativeCall<float>(this, "APrimalBuff.BPAdditionalTamingSpeedMultiplier()"); }
	void UpdateBuffLifetime(float NewLifetime, bool bRestartBuffLifetime) { NativeCall<void, float, bool>(this, "APrimalBuff.UpdateBuffLifetime(float,bool)", NewLifetime, bRestartBuffLifetime); }
	void BPOnInstigatorLootedCrate(APrimalStructureItemContainer_SupplyCrate* CrateLooted) { NativeCall<void, APrimalStructureItemContainer_SupplyCrate*>(this, "APrimalBuff.BPOnInstigatorLootedCrate(APrimalStructureItemContainer_SupplyCrate*)", CrateLooted); }
	bool BPPreventInstigatorAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBuff.BPPreventInstigatorAttack(int)", AttackIndex); }
	float BPGetJumpZVelocityModifier() { return NativeCall<float>(this, "APrimalBuff.BPGetJumpZVelocityModifier()"); }
	void BPFullyHarvestedNode(UPrimalHarvestingComponent* HarvestComp, bool bIsDirectDamage, UPrimalInventoryComponent* invComp, float Damage, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, UPrimalHarvestingComponent*, bool, UPrimalInventoryComponent*, float, AController*, AActor*>(this, "APrimalBuff.BPFullyHarvestedNode(UPrimalHarvestingComponent*,bool,UPrimalInventoryComponent*,float,AController*,AActor*)", HarvestComp, bIsDirectDamage, invComp, Damage, EventInstigator, DamageCauser); }
	float BP_OverrideMoveForwardInput(float CurrentInput) { return NativeCall<float, float>(this, "APrimalBuff.BP_OverrideMoveForwardInput(float)", CurrentInput); }
	float BPGetBuffDescriptionIconAlphaMult() { return NativeCall<float>(this, "APrimalBuff.BPGetBuffDescriptionIconAlphaMult()"); }
	void BPOverrideCameraViewTarget(FName CurrentCameraMode, UE::Math::TVector<double>* DesiredCameraLocation, UE::Math::TRotator<double>* DesiredCameraRotation, float DesiredFOV, bool& bOverrideCameraLocation, UE::Math::TVector<double>& CameraLocation, bool& bOverrideCameraRotation, UE::Math::TRotator<double>& CameraRotation, bool& bOverrideCameraFOV, float& CameraFOV) { if (!DesiredCameraLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredCameraRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, float, bool &, UE :: Math :: TVector < double > &, bool &, UE :: Math :: TRotator < double > &, bool &, float &>(this, "APrimalBuff.BPOverrideCameraViewTarget(FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,bool&,UE::Math::TVector<double>&,bool&,UE::Math::TRotator<double>&,bool&,float&)", CurrentCameraMode, *DesiredCameraLocation, *DesiredCameraRotation, DesiredFOV, bOverrideCameraLocation, CameraLocation, bOverrideCameraRotation, CameraRotation, bOverrideCameraFOV, CameraFOV); }
	void BPNotifyBuffWeaponFired() { NativeCall<void>(this, "APrimalBuff.BPNotifyBuffWeaponFired()"); }
	void BPOnInputEvent(EPrimalCharacterInputType::Type inputType) { NativeCall<void, EPrimalCharacterInputType::Type>(this, "APrimalBuff.BPOnInputEvent(EPrimalCharacterInputType::Type)", inputType); }
	bool BPPreventNotifySound(USoundBase* SoundIn) { return NativeCall<bool, USoundBase*>(this, "APrimalBuff.BPPreventNotifySound(USoundBase*)", SoundIn); }
	void BPPreClaimWildFollower(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalBuff.BPPreClaimWildFollower(AShooterPlayerController*)", ByPC); }
	void BPHandleInstigatorItemDrop(UPrimalItem* Item, int Quantity, AShooterCharacter* Character) { NativeCall<void, UPrimalItem*, int, AShooterCharacter*>(this, "APrimalBuff.BPHandleInstigatorItemDrop(UPrimalItem*,int,AShooterCharacter*)", Item, Quantity, Character); }
	static void SetBuffStartTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetBuffStartTime_WrapperImpl(void*,void*)", Object, InValue); }
	void RefreshInstigatorPersistentBuffs(bool bSavePlayerData, bool bFromInstigatorDeath) { NativeCall<void, bool, bool>(this, "APrimalBuff.RefreshInstigatorPersistentBuffs(bool,bool)", bSavePlayerData, bFromInstigatorDeath); }
	void BPNotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalBuff.BPNotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
	void BPOverrideCharacterLocalControlZInterpSpeed(float& CharacterLocalControlZInterpSpeed) { NativeCall<void, float&>(this, "APrimalBuff.BPOverrideCharacterLocalControlZInterpSpeed(float&)", CharacterLocalControlZInterpSpeed); }
	bool OverrideHurtFX_Niagara_Implementation(UNiagaraSystem*& OutHurtFX, bool bIsAttacker) { return NativeCall<bool, UNiagaraSystem*&, bool>(this, "APrimalBuff.OverrideHurtFX_Niagara_Implementation(UNiagaraSystem*&,bool)", OutHurtFX, bIsAttacker); }
	float GetSkillActivationCost(FName SkillName) { return NativeCall<float, FName>(this, "APrimalBuff.GetSkillActivationCost(FName)", SkillName); }
	bool BPBuffPreventsImmobilization() { return NativeCall<bool>(this, "APrimalBuff.BPBuffPreventsImmobilization()"); }
	void DoTeleporterHaptics(APlayerController* PC, const UE::Math::TVector<double>& location, float elapsedTime) { NativeCall<void, APlayerController*, const UE::Math::TVector<double>&, float>(this, "APrimalBuff.DoTeleporterHaptics(APlayerController*,UE::Math::TVector<double>&,float)", PC, location, elapsedTime); }
	void ServerRequestCustomHexagonTrade(int RequestedTradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "APrimalBuff.ServerRequestCustomHexagonTrade(int,int)", RequestedTradableItemIndex, Quantity); }
	float BP_OverrideMoveRightInput(float CurrentInput) { return NativeCall<float, float>(this, "APrimalBuff.BP_OverrideMoveRightInput(float)", CurrentInput); }
	void BPNofityMontagePlay(UAnimMontage* Montage) { NativeCall<void, UAnimMontage*>(this, "APrimalBuff.BPNofityMontagePlay(UAnimMontage*)", Montage); }
	AActor* BPOverrideActorForTargetingTooltip() { return NativeCall<AActor*>(this, "APrimalBuff.BPOverrideActorForTargetingTooltip()"); }
	bool BPDrawSkillIcon_Implementation(AShooterCharacter* thePlayerCharacter, FName SkillName, UCanvas* Canvas, const UE::Math::TVector2<double>& IconPosition, float IconWidth, float IconHeight, float WrapWidth, float WrapHeight, float TextScale, float Opacity, bool bForceDrawNameText, bool bIsTinyIcon, bool bForceDrawDescription) { return NativeCall<bool, AShooterCharacter*, FName, UCanvas*, const UE::Math::TVector2<double>&, float, float, float, float, float, float, bool, bool, bool>(this, "APrimalBuff.BPDrawSkillIcon_Implementation(AShooterCharacter*,FName,UCanvas*,UE::Math::TVector2<double>&,float,float,float,float,float,float,bool,bool,bool)", thePlayerCharacter, SkillName, Canvas, IconPosition, IconWidth, IconHeight, WrapWidth, WrapHeight, TextScale, Opacity, bForceDrawNameText, bIsTinyIcon, bForceDrawDescription); }
	static void GetRelatedMission_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetRelatedMission_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>* BP_OverrideCharacterFlyingVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "APrimalBuff.BP_OverrideCharacterFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", result, InitialVelocity, Gravity, DeltaTime); }
	void OnItemTraitActivated(const FBPNetExecParams& Params) { NativeCall<void, const FBPNetExecParams&>(this, "APrimalBuff.OnItemTraitActivated(FBPNetExecParams&)", Params); }
	void BPNotifyOtherBuffActivated(APrimalBuff* OtherBuff) { NativeCall<void, APrimalBuff*>(this, "APrimalBuff.BPNotifyOtherBuffActivated(APrimalBuff*)", OtherBuff); }
	void BP_OnBuffLifetimeUpdated() { NativeCall<void>(this, "APrimalBuff.BP_OnBuffLifetimeUpdated()"); }
	void BPAnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "APrimalBuff.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	int GetBuffType() { return NativeCall<int>(this, "APrimalBuff.GetBuffType()"); }
	void BP_OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff.BP_OnOwnerTeleported()"); }
	static void SetDeactivateAfterTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetDeactivateAfterTime_WrapperImpl(void*,void*)", Object, InValue); }
	float BPGetGravityZScale(float CurrentScale) { return NativeCall<float, float>(this, "APrimalBuff.BPGetGravityZScale(float)", CurrentScale); }
	void BPNotifyInstigatorLevelUp() { NativeCall<void>(this, "APrimalBuff.BPNotifyInstigatorLevelUp()"); }
	void BPOnHexagonCountChanged(int AmountAdded) { NativeCall<void, int>(this, "APrimalBuff.BPOnHexagonCountChanged(int)", AmountAdded); }
	bool ShouldUseAutonomousCorrectionOffset_Implementation() { return NativeCall<bool>(this, "APrimalBuff.ShouldUseAutonomousCorrectionOffset_Implementation()"); }
	void BPInstigatorUnseated(APrimalStructureSeating* TheSeatingStructure) { NativeCall<void, APrimalStructureSeating*>(this, "APrimalBuff.BPInstigatorUnseated(APrimalStructureSeating*)", TheSeatingStructure); }
	void BPOnAmmoConsummedFromAltInventory(float TotalAmountToReload, float AmountTakenFromAltInventory) { NativeCall<void, float, float>(this, "APrimalBuff.BPOnAmmoConsummedFromAltInventory(float,float)", TotalAmountToReload, AmountTakenFromAltInventory); }
	bool BPCanBeCarried(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff.BPCanBeCarried(APrimalCharacter*)", ByCarrier); }
	void BPNotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalBuff.BPNotifyItemRemoved(UPrimalItem*)", anItem); }
	float GetSalePriceMultForHexagonTradeOption(int TradableItemIndex) { return NativeCall<float, int>(this, "APrimalBuff.GetSalePriceMultForHexagonTradeOption(int)", TradableItemIndex); }
	static void GetAltNumStacks_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetAltNumStacks_WrapperImpl(void*,void*)", Object, OutValue); }
	void DinoInstigatorReceivedRider(AShooterCharacter* Rider) { NativeCall<void, AShooterCharacter*>(this, "APrimalBuff.DinoInstigatorReceivedRider(AShooterCharacter*)", Rider); }
	bool BPOverrideIsImprintPlayer(APrimalDinoCharacter* ForDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBuff.BPOverrideIsImprintPlayer(APrimalDinoCharacter*)", ForDino); }
	void BPOnStacksAdded(int NumStacks) { NativeCall<void, int>(this, "APrimalBuff.BPOnStacksAdded(int)", NumStacks); }
	bool BPOverrideIsNetRelevantFor(APlayerController* RealViewer, AActor* Viewer, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, APlayerController*, AActor*, const UE::Math::TVector<double>&>(this, "APrimalBuff.BPOverrideIsNetRelevantFor(APlayerController*,AActor*,UE::Math::TVector<double>&)", RealViewer, Viewer, SrcLocation); }
	void BPInstigatorPossessed(AController* ByController) { NativeCall<void, AController*>(this, "APrimalBuff.BPInstigatorPossessed(AController*)", ByController); }
	int BPForceDinoNameTargetingTeamOverride_Implementation(AShooterHUD* HUD, int TargetingTeamToCheck) { return NativeCall<int, AShooterHUD*, int>(this, "APrimalBuff.BPForceDinoNameTargetingTeamOverride_Implementation(AShooterHUD*,int)", HUD, TargetingTeamToCheck); }
	UE::Math::TVector<double>* BP_OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, const float& FluidFriction, const float& NetBuoyancy, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const float&, const float&, float>(this, "APrimalBuff.BP_OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", result, InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	void BPHandleOnStartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStartFire(bool)", bFromGamepad); }
	static void GetbHasRelatedMission_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetbHasRelatedMission_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPPreventFallDamage(const FHitResult& HitResult, float FallDamageAmount, bool CustomFallDamage) { return NativeCall<bool, const FHitResult&, float, bool>(this, "APrimalBuff.BPPreventFallDamage(FHitResult&,float,bool)", HitResult, FallDamageAmount, CustomFallDamage); }
	static void GetBuffStartTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff.GetBuffStartTime_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetStackDuration_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff.SetStackDuration_WrapperImpl(void*,void*)", Object, InValue); }
	bool BPBuffPreventUploading_Implementation() { return NativeCall<bool>(this, "APrimalBuff.BPBuffPreventUploading_Implementation()"); }
	bool BPPreventCharacterStatusValueModifiers(APrimalCharacter* ForInstigator) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff.BPPreventCharacterStatusValueModifiers(APrimalCharacter*)", ForInstigator); }
	int GetNumStacks() { return NativeCall<int>(this, "APrimalBuff.GetNumStacks()"); }
	AActor* BPOverrideAoEBuffDamageCauser() { return NativeCall<AActor*>(this, "APrimalBuff.BPOverrideAoEBuffDamageCauser()"); }
	void UpdateLastStackTimer() { NativeCall<void>(this, "APrimalBuff.UpdateLastStackTimer()"); }
	void BPInstigatorSleeped(bool bIsSleeped) { NativeCall<void, bool>(this, "APrimalBuff.BPInstigatorSleeped(bool)", bIsSleeped); }
	float BP_ModifyCharacterFOV(float inFOV) { return NativeCall<float, float>(this, "APrimalBuff.BP_ModifyCharacterFOV(float)", inFOV); }
	float GetBuffTickClientDeltaTime() { return NativeCall<float>(this, "APrimalBuff.GetBuffTickClientDeltaTime()"); }
	float GetRemainingTimeInTopStack() { return NativeCall<float>(this, "APrimalBuff.GetRemainingTimeInTopStack()"); }
};