#pragma once

#include "..\Base.h"
#include "Actor.h"
#include "..\Enums.h"

struct APrimalBotAIController : APrimalDinoAIController
{
    // Fields

    float& DinoSearchRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBotAIController.DinoSearchRadius"); }
    AAIAttackCoordinator*& AttackCoordinatorField() { return *GetNativePointerField<AAIAttackCoordinator**>(this, "APrimalBotAIController.AttackCoordinator"); }
    TSubclassOf<APrimalDinoAIController>& RiddenDinoControllerClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoAIController>*>(this, "APrimalBotAIController.RiddenDinoControllerClass"); }
    TWeakObjectPtr<APrimalDinoCharacter>& ClaimedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalBotAIController.ClaimedDino"); }
    long double& LastTimeGivenAttackPriorityField() { return *GetNativePointerField<long double*>(this, "APrimalBotAIController.LastTimeGivenAttackPriority"); }

    // Bitfields


    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBotAIController.StaticClass()"); }
    static void StaticRegisterNativesAPrimalBotAIController() { NativeCall<void>(nullptr, "APrimalBotAIController.StaticRegisterNativesAPrimalBotAIController()"); }
    //void InitializeBlackboardValues(const APrimalBotCharacter* Bot) { NativeCall<void, const APrimalBotCharacter*>(this, "APrimalBotAIController.InitializeBlackboardValues(APrimalBotCharacter*)", Bot); }
    void OnPossess(APawn* InPawn) { NativeCall<void, APawn*>(this, "APrimalBotAIController.OnPossess(APawn*)", InPawn); }
    float TimeSinceGivenAttackPriority() { return NativeCall<float>(this, "APrimalBotAIController.TimeSinceGivenAttackPriority()"); }
    void UpdateDinoClaim() { NativeCall<void>(this, "APrimalBotAIController.UpdateDinoClaim()"); }
    APrimalDinoCharacter* FindADinoToClaim() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotAIController.FindADinoToClaim()"); }
    bool ClaimDino(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotAIController.ClaimDino(APrimalDinoCharacter*)", Dino); }
    void ReleaseClaimOnDino() { NativeCall<void>(this, "APrimalBotAIController.ReleaseClaimOnDino()"); }
    bool IsDinoRideable(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotAIController.IsDinoRideable(APrimalDinoCharacter*)", Dino); }
    void OnCharacterAttachedToDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.OnCharacterAttachedToDino(APrimalDinoCharacter*)", Dino); }
    void OnCharacterDetachedFromDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.OnCharacterDetachedFromDino(APrimalDinoCharacter*)", Dino); }
    void ChangedAITarget_Implementation() { NativeCall<void>(this, "APrimalBotAIController.ChangedAITarget_Implementation()"); }
    void SetHasAttackPriority(bool Value) { NativeCall<void, bool>(this, "APrimalBotAIController.SetHasAttackPriority(bool)", Value); }
    bool WantsAttackPriority() { return NativeCall<bool>(this, "APrimalBotAIController.WantsAttackPriority()"); }
    bool GetHasAttackPriority() { return NativeCall<bool>(this, "APrimalBotAIController.GetHasAttackPriority()"); }
    void SetRiddenDinoAttackPriority() { NativeCall<void>(this, "APrimalBotAIController.SetRiddenDinoAttackPriority()"); }
    void SetControllerOnDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.SetControllerOnDino(APrimalDinoCharacter*)", Dino); }
    //UPrimalBotRidingComponent* GetBotRidingComponent(const APrimalDinoCharacter* Dino) { return NativeCall<UPrimalBotRidingComponent*, const APrimalDinoCharacter*>(this, "APrimalBotAIController.GetBotRidingComponent(APrimalDinoCharacter*)", Dino); }
};

struct APrimalBotCharacter : APrimalDinoCharacter
{
    // Fields

    //UAnimBlueprintGeneratedClass*& AlternateAnimBPField() { return *GetNativePointerField<UAnimBlueprintGeneratedClass**>(this, "APrimalBotCharacter.AlternateAnimBP"); }
    UAnimSequence*& AlternateDinoRidingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalBotCharacter.AlternateDinoRidingAnimation"); }
    UAnimSequence*& AlternateDinoRidingMoveAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalBotCharacter.AlternateDinoRidingMoveAnimation"); }
    TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& RideableDinoClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalBotCharacter.RideableDinoClasses"); }
    UAnimSequence*& DefaultDinoRidingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalBotCharacter.DefaultDinoRidingAnimation"); }
    UAnimSequence*& DefaultDinoRidingMoveAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalBotCharacter.DefaultDinoRidingMoveAnimation"); }
    bool& bIsStationaryField() { return *GetNativePointerField<bool*>(this, "APrimalBotCharacter.bIsStationary"); }
    TWeakObjectPtr<APrimalDinoCharacter>& DinoBeingRiddenField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalBotCharacter.DinoBeingRidden"); }
    TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >& AnimSequenceOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >*>(this, "APrimalBotCharacter.AnimSequenceOverrides"); }

    // Bitfields


    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBotCharacter.StaticClass()"); }
    static void StaticRegisterNativesAPrimalBotCharacter() { NativeCall<void>(nullptr, "APrimalBotCharacter.StaticRegisterNativesAPrimalBotCharacter()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalBotCharacter.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBotCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalBotCharacter.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBotCharacter.BeginPlay()"); }
    bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalBotCharacter.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBotCharacter.Tick(float)", DeltaSeconds); }
    bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APrimalBotCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
    float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalBotCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    void AttachToDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotCharacter.AttachToDino(APrimalDinoCharacter*)", Dino); }
    APrimalDinoCharacter* CurrentlyRiddenDino() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotCharacter.CurrentlyRiddenDino()"); }
    void ClearRidingDino() { NativeCall<void>(this, "APrimalBotCharacter.ClearRidingDino()"); }
    UAnimSequence* GetDinoRidingAnimation() { return NativeCall<UAnimSequence*>(this, "APrimalBotCharacter.GetDinoRidingAnimation()"); }
    UAnimSequence* GetDinoRidingMoveAnimation() { return NativeCall<UAnimSequence*>(this, "APrimalBotCharacter.GetDinoRidingMoveAnimation()"); }
    float GetMinAttackRange() { return NativeCall<float>(this, "APrimalBotCharacter.GetMinAttackRange()"); }
    float GetMaxAttackRange() { return NativeCall<float>(this, "APrimalBotCharacter.GetMaxAttackRange()"); }
    void InitializeAnimOverrides() { NativeCall<void>(this, "APrimalBotCharacter.InitializeAnimOverrides()"); }
    UAnimSequence* GetBotAnimSequenceOverride(UAnimSequence* AnimSeq) { return NativeCall<UAnimSequence*, UAnimSequence*>(this, "APrimalBotCharacter.GetBotAnimSequenceOverride(UAnimSequence*)", AnimSeq); }
};
struct AEmitter : AActor { };
struct APrimalEmitterSpawnable : AEmitter {};
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
    static void StaticRegisterNativesAPrimalBuff() { NativeCall<void>(nullptr, "APrimalBuff.StaticRegisterNativesAPrimalBuff()"); }
    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBuff.GetPrivateStaticClass()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
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
    bool ResetBuffStart() { return NativeCall<bool>(this, "APrimalBuff.ResetBuffStart()"); }
    APrimalBuff* AddBuff(APrimalCharacter* ForCharacter, AActor* DamageCauser) { return NativeCall<APrimalBuff*, APrimalCharacter*, AActor*>(this, "APrimalBuff.AddBuff(APrimalCharacter*,AActor*)", ForCharacter, DamageCauser); }
    void ServerRequestRelatedMissionData_Implementation() { NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData_Implementation()"); }
    void ClientReceiveRelatedMissionData_Implementation(AMissionType* InMission, bool InHasRelatedMission) { NativeCall<void, AMissionType*, bool>(this, "APrimalBuff.ClientReceiveRelatedMissionData_Implementation(AMissionType*,bool)", InMission, InHasRelatedMission); }
    void GetHUDElements(APlayerController* ForPC, TArray<FHUDElement, TSizedDefaultAllocator<32> >* OutHUDElements) { NativeCall<void, APlayerController*, TArray<FHUDElement, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>>&)", ForPC, OutHUDElements); }
    static APrimalBuff* StaticAddBuffToSpectatorController(TSubclassOf<APrimalBuff> BuffClass, AShooterPlayerController* SpectatorPlayerController) { return NativeCall<APrimalBuff*, TSubclassOf<APrimalBuff>, AShooterPlayerController*>(nullptr, "APrimalBuff.StaticAddBuffToSpectatorController(TSubclassOf<APrimalBuff>,AShooterPlayerController*)", BuffClass, SpectatorPlayerController); }
    static APrimalBuff* StaticAddBuff(TSubclassOf<APrimalBuff> BuffClass, APrimalCharacter* ForCharacter, UPrimalItem* AssociatedItem, AActor* DamageCauser, bool bForceOnClient) { return NativeCall<APrimalBuff*, TSubclassOf<APrimalBuff>, APrimalCharacter*, UPrimalItem*, AActor*, bool>(nullptr, "APrimalBuff.StaticAddBuff(TSubclassOf<APrimalBuff>,APrimalCharacter*,UPrimalItem*,AActor*,bool)", BuffClass, ForCharacter, AssociatedItem, DamageCauser, bForceOnClient); }
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
    UMaterialInstanceDynamic* GetBuffPostprocessMaterial() { return NativeCall<UMaterialInstanceDynamic*>(this, "APrimalBuff.GetBuffPostprocessMaterial()"); }
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
    float GetRemainingTime() { return NativeCall<float>(this, "APrimalBuff.GetRemainingTime()"); }
    void OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff.OnOwnerTeleported()"); }
    FString* GetUniqueName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalBuff.GetUniqueName()", result); }
    FColor* BPGetDinoNameColorOverride_Implementation(FColor* result, AShooterHUD* HUD, FColor ColorToOverride) { return NativeCall<FColor*, FColor*, AShooterHUD*, FColor>(this, "APrimalBuff.BPGetDinoNameColorOverride_Implementation(AShooterHUD*,FColor)", result, HUD, ColorToOverride); }
    void ApplyPhysicsImpulses_Implementation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.ApplyPhysicsImpulses_Implementation(float)", DeltaSeconds); }
    void ModifyBuffMPCValues(bool bReset) { NativeCall<void, bool>(this, "APrimalBuff.ModifyBuffMPCValues(bool)", bReset); }
    int GetAlternateMultiUseCategory() { return NativeCall<int>(this, "APrimalBuff.GetAlternateMultiUseCategory()"); }
    void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalBuff.FinalLoadedFromSaveGame()"); }
};

struct APrimalBuff_MissionData : APrimalBuff
{
    // Fields

    AMissionType*& ActiveMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_MissionData.ActiveMission"); }
    int& ActiveMissionIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_MissionData.ActiveMissionIndex"); }
    //TArray<FClientMissionData, TSizedDefaultAllocator<32> >& CurrentMissionsField() { return *GetNativePointerField<TArray<FClientMissionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.CurrentMissions"); }
    UParticleSystem*& MissionIndicatorParticlesField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalBuff_MissionData.MissionIndicatorParticles"); }
    FString& NonHostPrepAreaNotificationField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_MissionData.NonHostPrepAreaNotification"); }
    TSubclassOf<AMissionType>& PendingMissionField() { return *GetNativePointerField<TSubclassOf<AMissionType>*>(this, "APrimalBuff_MissionData.PendingMission"); }
    //FOnMissionClientEvent& OnPlayerAddedToMissionField() { return *GetNativePointerField<FOnMissionClientEvent*>(this, "APrimalBuff_MissionData.OnPlayerAddedToMission"); }
    //FOnMissionClientBoolEvent& OnPlayerRemovedFromMissionField() { return *GetNativePointerField<FOnMissionClientBoolEvent*>(this, "APrimalBuff_MissionData.OnPlayerRemovedFromMission"); }
    //FOnMissionClientDataUpdated& MissionClientDataUpdatedField() { return *GetNativePointerField<FOnMissionClientDataUpdated*>(this, "APrimalBuff_MissionData.MissionClientDataUpdated"); }
    TMap<FName, TSharedPtr<FJsonObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSharedPtr<FJsonObject>, 0> >& MissionDataMapField() { return *GetNativePointerField<TMap<FName, TSharedPtr<FJsonObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSharedPtr<FJsonObject>, 0> >*>(this, "APrimalBuff_MissionData.MissionDataMap"); }
    //TArray<FClientMissionSubscriptionData, TSizedDefaultAllocator<32> >& ReplicatedMissionDataSubscriptionsField() { return *GetNativePointerField<TArray<FClientMissionSubscriptionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ReplicatedMissionDataSubscriptions"); }
    long double& ServerLastEligibilityCheckNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_MissionData.ServerLastEligibilityCheckNetworkTime"); }
    long double& ClientLastEligibilityCheckNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_MissionData.ClientLastEligibilityCheckNetworkTime"); }
    //TMap<FName, FClientMissionEligibility, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FClientMissionEligibility, 0> >& ClientMissionEligibilityMapField() { return *GetNativePointerField<TMap<FName, FClientMissionEligibility, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FClientMissionEligibility, 0> >*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityMap"); }

    // Bitfields


    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBuff_MissionData.GetPrivateStaticClass()"); }
    void ClientLoadMissionLevels(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels(FName)", MissionTag); }
    //void ClientMissionEligibilityResponse(const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >* EligibilityData) { NativeCall<void, const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse(TArray<FMissionEligibilityData,TSizedDefaultAllocator<32>>&)", EligibilityData); }
    void ClientSendMissionAlert(EMissionAlertType::Type AlertType, const FString* AlertTitle, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >* AlertEntries, float DisplayTime, USoundBase* Sound, bool FlyoutFromTop) { NativeCall<void, EMissionAlertType::Type, const FString*, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >*, float, USoundBase*, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert(EMissionAlertType::Type,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", AlertType, AlertTitle, AlertEntries, DisplayTime, Sound, FlyoutFromTop); }
    void ServerRequestMissionEligibilityCheck(const AMissionDispatcher* dispatcherFilter) { NativeCall<void, const AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck(AMissionDispatcher*)", dispatcherFilter); }
    void ServerRequestStartMission(TSubclassOf<AMissionType> MissionType, AMissionDispatcher* FromDispatcher) { NativeCall<void, TSubclassOf<AMissionType>, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMission(TSubclassOf<AMissionType>,AMissionDispatcher*)", MissionType, FromDispatcher); }
    void ServerRequestStartMissionWithMissionTag(FName MissionTag, AMissionDispatcher* FromDispatcher) { NativeCall<void, FName, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag(FName,AMissionDispatcher*)", MissionTag, FromDispatcher); }
    void ServerRequestToggleWeapon(AMissionType* Mission) { NativeCall<void, AMissionType*>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon(AMissionType*)", Mission); }
    static void StaticRegisterNativesAPrimalBuff_MissionData() { NativeCall<void>(nullptr, "APrimalBuff_MissionData.StaticRegisterNativesAPrimalBuff_MissionData()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>* AtLocation, const UE::Math::TRotator<double>* AtRotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "APrimalBuff_MissionData.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBuff_MissionData.BeginPlay()"); }
    void PostBeginPlay(__int64 a2) { NativeCall<void, __int64>(this, "APrimalBuff_MissionData.PostBeginPlay()", a2); }
    void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_MissionData.Tick(float)", DeltaTime); }
    void UpdateBuffPersistentData_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.UpdateBuffPersistentData_Implementation()"); }
    int FindCurrentMissionIdx(AMissionType* mission, bool bCreateIfMissing) { return NativeCall<int, AMissionType*, bool>(this, "APrimalBuff_MissionData.FindCurrentMissionIdx(AMissionType*,bool)", mission, bCreateIfMissing); }
    //void UpdateMissionRequirements(AMissionType* ForMission, const TArray<FMissionPhaseRequirement, TSizedDefaultAllocator<32> >* UpdatedRequirements, bool bPerPlayerIndicators) { NativeCall<void, AMissionType*, const TArray<FMissionPhaseRequirement, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalBuff_MissionData.UpdateMissionRequirements(AMissionType*,TArray<FMissionPhaseRequirement,TSizedDefaultAllocator<32>>&,bool)", ForMission, UpdatedRequirements, bPerPlayerIndicators); }
    //void UpdateMissionWorldIndicators(AMissionType* ForMission, const TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >* UpdatedWorldIndicators, bool bPerPlayerIndicators) { NativeCall<void, AMissionType*, const TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalBuff_MissionData.UpdateMissionWorldIndicators(AMissionType*,TArray<FMissionWorldIndicator,TSizedDefaultAllocator<32>>&,bool)", ForMission, UpdatedWorldIndicators, bPerPlayerIndicators); }
    void AddPlayerToMission(AMissionType* Mission, bool bSetAsActiveMission) { NativeCall<void, AMissionType*, bool>(this, "APrimalBuff_MissionData.AddPlayerToMission(AMissionType*,bool)", Mission, bSetAsActiveMission); }
    bool RemovePlayerFromMission(AMissionType* Mission, bool bMissionCompletedSuccessfully) { return NativeCall<bool, AMissionType*, bool>(this, "APrimalBuff_MissionData.RemovePlayerFromMission(AMissionType*,bool)", Mission, bMissionCompletedSuccessfully); }
    void ServerMulticastRequiredProps_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps_Implementation()"); }
    void ServerRequestStartMissionWithMissionTag_Implementation(FName MissionTag, AMissionDispatcher* FromDispatcher) { NativeCall<void, FName, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag_Implementation(FName,AMissionDispatcher*)", MissionTag, FromDispatcher); }
    void ClientLoadMissionLevels_Implementation(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels_Implementation(FName)", MissionTag); }
    void LoadLevelsForMissionTag(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.LoadLevelsForMissionTag(FName)", MissionTag); }
    void ClientUnloadMissionLevels_Implementation(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientUnloadMissionLevels_Implementation(FName)", MissionTag); }
    void UnloadLevelsForMissionTag(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.UnloadLevelsForMissionTag(FName)", MissionTag); }
    void ServerRequestStartMission_Implementation(TSubclassOf<AMissionType> MissionType, AMissionDispatcher* FromDispatcher) { NativeCall<void, TSubclassOf<AMissionType>, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMission_Implementation(TSubclassOf<AMissionType>,AMissionDispatcher*)", MissionType, FromDispatcher); }
    void ServerRequestCancelMission_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission_Implementation()"); }
    void ClientSendMissionNotification_Implementation(AMissionType* FromMission, FName NotificationTag, FLinearColor* MessageColor, UTexture2D* MessageIcon, float DisplayTime, float DisplayScale, bool bIsSingleton, USoundBase* MessageSound) { NativeCall<void, AMissionType*, FName, FLinearColor*, UTexture2D*, float, float, bool, USoundBase*>(this, "APrimalBuff_MissionData.ClientSendMissionNotification_Implementation(AMissionType*,FName,FLinearColor,UTexture2D*,float,float,bool,USoundBase*)", FromMission, NotificationTag, MessageColor, MessageIcon, DisplayTime, DisplayScale, bIsSingleton, MessageSound); }
    void ClientSendMissionAlert_Implementation(EMissionAlertType::Type AlertType, const FString* AlertTitle, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >* AlertEntries, float DisplayTime, USoundBase* Sound, bool FlyoutFromTop) { NativeCall<void, EMissionAlertType::Type, const FString*, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >*, float, USoundBase*, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert_Implementation(EMissionAlertType::Type,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", AlertType, AlertTitle, AlertEntries, DisplayTime, Sound, FlyoutFromTop); }
    void ServerRequestEquipMissionItem_Implementation(AMissionType* Mission, FItemNetID ItemID) { NativeCall<void, AMissionType*, FItemNetID>(this, "APrimalBuff_MissionData.ServerRequestEquipMissionItem_Implementation(AMissionType*,FItemNetID)", Mission, ItemID); }
    void ServerRequestToggleWeapon_Implementation(AMissionType* Mission) { NativeCall<void, AMissionType*>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon_Implementation(AMissionType*)", Mission); }
    void ServerRequestMissionEligibilityCheck_Implementation(const AMissionDispatcher* dispatcherFilter) { NativeCall<void, const AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck_Implementation(AMissionDispatcher*)", dispatcherFilter); }
    //void ClientMissionEligibilityResponse_Implementation(const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >* EligibilityData) { NativeCall<void, const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse_Implementation(TArray<FMissionEligibilityData,TSizedDefaultAllocator<32>>&)", EligibilityData); }
    void MultiClearParticleIndicator_Implementation(float RemoveAfterDuration) { NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator_Implementation(float)", RemoveAfterDuration); }
    void ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable> EmitterType, UE::Math::TTransform<double>* EmitterTransform, float EmitterLifespan) { NativeCall<void, TSubclassOf<APrimalEmitterSpawnable>, UE::Math::TTransform<double>*, float>(this, "APrimalBuff_MissionData.ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TTransform<double>,float)", EmitterType, EmitterTransform, EmitterLifespan); }
    void AutoHideIndicatorParticles() { NativeCall<void>(this, "APrimalBuff_MissionData.AutoHideIndicatorParticles()"); }
    //bool IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType> MissionType, bool* bOutIsRecentData, FClientMissionEligibility* OutEligibilityData, float MaxTimeConsideredRecent, const AMissionDispatcher* dispatcherFilter) { return NativeCall<bool, TSubclassOf<AMissionType>, bool*, FClientMissionEligibility*, float, const AMissionDispatcher*>(this, "APrimalBuff_MissionData.IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType>,bool&,FClientMissionEligibility&,float,AMissionDispatcher*)", MissionType, bOutIsRecentData, OutEligibilityData, MaxTimeConsideredRecent, dispatcherFilter); }
    void ClientMissionEvent_Implementation(AMissionType* Mission, bool bMissionStarted, bool bMissionCompletedSuccessfully) { NativeCall<void, AMissionType*, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent_Implementation(AMissionType*,bool,bool)", Mission, bMissionStarted, bMissionCompletedSuccessfully); }
    bool IsMissionTypeActive(TSubclassOf<AMissionType> MissionType, bool bExactClassMatch) { return NativeCall<bool, TSubclassOf<AMissionType>, bool>(this, "APrimalBuff_MissionData.IsMissionTypeActive(TSubclassOf<AMissionType>,bool)", MissionType, bExactClassMatch); }
    bool IsMissionTypeActiveWithMissionTag(FName MissionTag) { return NativeCall<bool, FName>(this, "APrimalBuff_MissionData.IsMissionTypeActiveWithMissionTag(FName)", MissionTag); }
    //void GetWorldIndicatorsForMission(AMissionType* Mission, TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >* OutWorldIndicators, bool bCompanionOnly, bool bSortByPriority) { NativeCall<void, AMissionType*, TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >*, bool, bool>(this, "APrimalBuff_MissionData.GetWorldIndicatorsForMission(AMissionType*,TArray<FMissionWorldIndicator,TSizedDefaultAllocator<32>>&,bool,bool)", Mission, OutWorldIndicators, bCompanionOnly, bSortByPriority); }
    void ReplicatedMissionDataUpdated(__int64 a2) { NativeCall<void, __int64>(this, "APrimalBuff_MissionData.ReplicatedMissionDataUpdated()", a2); }
    void MultiUpdateMissionData_Bool_Implementation(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Bool_Implementation(FName,FName,bool)", MissionTag, Key, Value); }
    void MultiUpdateMissionData_Int_Implementation(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Int_Implementation(FName,FName,int)", MissionTag, Key, Value); }
    bool GetMissionData_Bool(FName MissionTag, FName Key, bool* OutValue) { return NativeCall<bool, FName, FName, bool*>(this, "APrimalBuff_MissionData.GetMissionData_Bool(FName,FName,bool&)", MissionTag, Key, OutValue); }
    void SetMissionData_Bool(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.SetMissionData_Bool(FName,FName,bool)", MissionTag, Key, Value); }
    bool GetMissionData_String(FName MissionTag, FName Key, FString* OutValue) { return NativeCall<bool, FName, FName, FString*>(this, "APrimalBuff_MissionData.GetMissionData_String(FName,FName,FString&)", MissionTag, Key, OutValue); }
    void SetMissionData_String(FName MissionTag, FName Key, const FString* Value) { NativeCall<void, FName, FName, const FString*>(this, "APrimalBuff_MissionData.SetMissionData_String(FName,FName,FString&)", MissionTag, Key, Value); }
    bool GetMissionData_Int(FName MissionTag, FName Key, int* OutValue) { return NativeCall<bool, FName, FName, int*>(this, "APrimalBuff_MissionData.GetMissionData_Int(FName,FName,int&)", MissionTag, Key, OutValue); }
    void SetMissionData_Int(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.SetMissionData_Int(FName,FName,int)", MissionTag, Key, Value); }
    bool GetMissionData_Float(FName MissionTag, FName Key, float* OutValue) { return NativeCall<bool, FName, FName, float*>(this, "APrimalBuff_MissionData.GetMissionData_Float(FName,FName,float&)", MissionTag, Key, OutValue); }
    void SetMissionData_Float(FName MissionTag, FName Key, float Value) { NativeCall<void, FName, FName, float>(this, "APrimalBuff_MissionData.SetMissionData_Float(FName,FName,float)", MissionTag, Key, Value); }
    bool GetMissionData_Double(FName MissionTag, FName Key, long double* OutValue) { return NativeCall<bool, FName, FName, long double*>(this, "APrimalBuff_MissionData.GetMissionData_Double(FName,FName,double&)", MissionTag, Key, OutValue); }
    void SetMissionData_Double(FName MissionTag, FName Key, long double Value) { NativeCall<void, FName, FName, long double>(this, "APrimalBuff_MissionData.SetMissionData_Double(FName,FName,double)", MissionTag, Key, Value); }
    bool GetMissionData_Vector(FName MissionTag, FName Key, UE::Math::TVector<double>* OutValue) { return NativeCall<bool, FName, FName, UE::Math::TVector<double>*>(this, "APrimalBuff_MissionData.GetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)", MissionTag, Key, OutValue); }
    void SetMissionData_Vector(FName MissionTag, FName Key, const UE::Math::TVector<double>* Value) { NativeCall<void, FName, FName, const UE::Math::TVector<double>*>(this, "APrimalBuff_MissionData.SetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)", MissionTag, Key, Value); }
    bool GetMissionData_Rotator(FName MissionTag, FName Key, UE::Math::TRotator<double>* OutValue) { return NativeCall<bool, FName, FName, UE::Math::TRotator<double>*>(this, "APrimalBuff_MissionData.GetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)", MissionTag, Key, OutValue); }
    void SetMissionData_Rotator(FName MissionTag, FName Key, const UE::Math::TRotator<double>* Value) { NativeCall<void, FName, FName, const UE::Math::TRotator<double>*>(this, "APrimalBuff_MissionData.SetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)", MissionTag, Key, Value); }
    //void GetMissionDebugData(TArray<FSerializedMissionData, TSizedDefaultAllocator<32> >* OutMissionData) { NativeCall<void, TArray<FSerializedMissionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.GetMissionDebugData(TArray<FSerializedMissionData,TSizedDefaultAllocator<32>>&)", OutMissionData); }
    FName* GetBiomeMissionTag(FName* result, const UE::Math::TVector<double>* Location) { return NativeCall<FName*, FName*, const UE::Math::TVector<double>*>(this, "APrimalBuff_MissionData.GetBiomeMissionTag(UE::Math::TVector<double>&)", result, Location); }
    void OnRep_MissionIndicatorParticles() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_MissionIndicatorParticles()"); }
    void SetupClientMissionCallbacks() { NativeCall<void>(this, "APrimalBuff_MissionData.SetupClientMissionCallbacks()"); }
    void OnActiveMissionPhaseStarted(AMissionType* Mission, FName OldPhase, FName NewPhase) { NativeCall<void, AMissionType*, FName, FName>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseStarted(AMissionType*,FName,FName)", Mission, OldPhase, NewPhase); }
    void OnActiveMissionPhaseEnded(AMissionType* Mission, FName OldPhase, FName NewPhase) { NativeCall<void, AMissionType*, FName, FName>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseEnded(AMissionType*,FName,FName)", Mission, OldPhase, NewPhase); }
    bool IsMissionDataReplicated(FName MissionTag, FName Key) { return NativeCall<bool, FName, FName>(this, "APrimalBuff_MissionData.IsMissionDataReplicated(FName,FName)", MissionTag, Key); }
    void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_MissionData.SetupForInstigator()"); }
};


struct APrimalBuff_Companion : APrimalBuff
{
    // Fields

    USceneComponent*& CompanionRootField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalBuff_Companion.CompanionRoot"); }
    //USkeletalMeshComponentWithSoftRef*& CompanionMeshCompField() { return *GetNativePointerField<USkeletalMeshComponentWithSoftRef**>(this, "APrimalBuff_Companion.CompanionMeshComp"); }
    USphereComponent*& CompanionUseSphereCompField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalBuff_Companion.CompanionUseSphereComp"); }
    TWeakObjectPtr<AShooterCharacter>& MyPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalBuff_Companion.MyPlayer"); }
    TWeakObjectPtr<AShooterPlayerController>& MyPCField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalBuff_Companion.MyPC"); }
    float& ReachPointOrbitWithinDistField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReachPointOrbitWithinDist"); }
    float& ReactionDialogVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReactionDialogVolumeMultiplier"); }
    float& CompanionViewDotField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionViewDot"); }
    USoundAttenuation*& CompanionSoundAttenuationField() { return *GetNativePointerField<USoundAttenuation**>(this, "APrimalBuff_Companion.CompanionSoundAttenuation"); }
    //TSubclassOf<UPrimalStaticData_MissionCompanionReactionData>& DefaultMissionCompanionReactionDataField() { return *GetNativePointerField<TSubclassOf<UPrimalStaticData_MissionCompanionReactionData>*>(this, "APrimalBuff_Companion.DefaultMissionCompanionReactionData"); }
    UParticleSystemComponent*& CurrentCompanionReactionVFXField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalBuff_Companion.CurrentCompanionReactionVFX"); }
    UAudioComponent*& CurrentCompanionReactionSFXField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_Companion.CurrentCompanionReactionSFX"); }
    TArray<FPointOfInterestData_ForCompanion, TSizedDefaultAllocator<32> >& CurrentPointsOfInterestField() { return *GetNativePointerField<TArray<FPointOfInterestData_ForCompanion, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.CurrentPointsOfInterest"); }
    //TEnumAsByte<enum ECompanionState::Type>& CompanionState_PreviousField() { return *GetNativePointerField<TEnumAsByte<enum ECompanionState::Type>*>(this, "APrimalBuff_Companion.CompanionState_Previous"); }
    TArray<FCompanionReactionData, TSizedDefaultAllocator<32> >& ReactionStackField() { return *GetNativePointerField<TArray<FCompanionReactionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.ReactionStack"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& DialogueIconOverrideStackField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.DialogueIconOverrideStack"); }
    TArray<int, TSizedDefaultAllocator<32> >& CurrentIDStackField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.CurrentIDStack"); }
    UE::Math::TVector<double>& CurrentFocusedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.CurrentFocusedLocation"); }
    FPointOfInterestData_ForCompanion& CurrentFocusedPointDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.CurrentFocusedPointData"); }
    //FCompanionEventData& CurrentEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "APrimalBuff_Companion.CurrentEventData"); }
    AActor*& CurrentEventActorField() { return *GetNativePointerField<AActor**>(this, "APrimalBuff_Companion.CurrentEventActor"); }
    FName& LastPointTag_StartOrbitField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_StartOrbit"); }
    FName& LastPointTag_ReachedOrbitField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_ReachedOrbit"); }
    long double& LastPlayedReactionNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Companion.LastPlayedReactionNetworkTime"); }
    FCompanionReactionData& PreviouslyPlayedReactionField() { return *GetNativePointerField<FCompanionReactionData*>(this, "APrimalBuff_Companion.PreviouslyPlayedReaction"); }
    TArray<FString, TSizedDefaultAllocator<32> >& FullyTranslatedLanguagesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.FullyTranslatedLanguages"); }
    //TSubclassOf<UPrimalDinoToolTipWidget>& HUDOverlayToolTipWidgetExtendedField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoToolTipWidget>*>(this, "APrimalBuff_Companion.HUDOverlayToolTipWidgetExtended"); }
    TArray<int, TSizedDefaultAllocator<32> >& ReactionExplorerNotesToUnlockField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.ReactionExplorerNotesToUnlock"); }
    FTimerHandle& LoadAudioTimeoutHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_Companion.LoadAudioTimeoutHandle"); }
    FTimerHandle& MaxReactionLimitTimeoutHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_Companion.MaxReactionLimitTimeoutHandle"); }
    FTimerHandle& AnimateOutHLNASubtitleIconHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_Companion.AnimateOutHLNASubtitleIconHandle"); }
    UTexture2D*& AsyncLoadedDialogueAnimTextureField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_Companion.AsyncLoadedDialogueAnimTexture"); }
    USoundCue*& AsyncLoadedSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Companion.AsyncLoadedSoundCue"); }
    USoundWave*& AsyncLoadedSoundWaveField() { return *GetNativePointerField<USoundWave**>(this, "APrimalBuff_Companion.AsyncLoadedSoundWave"); }
    FName& AnimTextureParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureParamName"); }
    FName& AnimTextureStartTimeParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureStartTimeParamName"); }
    FName& AnimTextureDurationParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureDurationParamName"); }
    float& AnimTextureDurationOffsetField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AnimTextureDurationOffset"); }
    int& CurrentReactionSFXIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.CurrentReactionSFXIndex"); }
    int& PreviousReactionSFXIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.PreviousReactionSFXIndex"); }
    FSoftObjectPath& CurrentSoundWaveStringAssetReferenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.CurrentSoundWaveStringAssetReference"); }
    FSoftObjectPath& CurrentSoundCueStringAssetReferenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.CurrentSoundCueStringAssetReference"); }
    FSoftObjectPath& CurrentAnimTextureStringAssetReferenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.CurrentAnimTextureStringAssetReference"); }
    FSoftObjectPath& FallbackSubtitleAudioStringField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.FallbackSubtitleAudioString"); }
    TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >& MeshDynamicMaterialsField() { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.MeshDynamicMaterials"); }
    UMaterialInterface*& CompanionReactionSubtitleIconField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalBuff_Companion.CompanionReactionSubtitleIcon"); }
    FSoftObjectPath& DefaultReactionAnimtextureField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.DefaultReactionAnimtexture"); }
    FLocalizedSoundWaveAnimTexturePairArrays& LocalizedAudioTracksField() { return *GetNativePointerField<FLocalizedSoundWaveAnimTexturePairArrays*>(this, "APrimalBuff_Companion.LocalizedAudioTracks"); }
    bool& DebugBypassVRTeleportRestrictionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.DebugBypassVRTeleportRestrictions"); }
    TSoftClassPtr<AMissionType>& FinalBossFightEasyField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightEasy"); }
    TSoftClassPtr<AMissionType>& FinalBossFightMedField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightMed"); }
    TSoftClassPtr<AMissionType>& FinalBossFightHardField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightHard"); }
    TSoftClassPtr<AMissionType>& FinalBossFightFlowTestField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightFlowTest"); }
    float& AllowedHLNAFocusedSelectedRemoteTargetDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AllowedHLNAFocusedSelectedRemoteTargetDistance"); }
    TArray<FSoftObjectPath, TSizedDefaultAllocator<32> >& StreamedAssetsField() { return *GetNativePointerField<TArray<FSoftObjectPath, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.StreamedAssets"); }
    float& CompanionAmbientSoundReductionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionAmbientSoundReductionMultiplier"); }
    float& CompanionVoiceVolumeMultiplierVRBiomeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionVoiceVolumeMultiplierVRBiome"); }
    //FDelegate_OnCompanionReactionPlayed& OnReactionPlayed_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionPlayed*>(this, "APrimalBuff_Companion.OnReactionPlayed_Delegate"); }
    //FDelegate_OnCompanionReactionStopped& OnReactionStopped_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionStopped*>(this, "APrimalBuff_Companion.OnReactionStopped_Delegate"); }
    //FDelegate_OnCompanionReactionAnimPlayed& OnReactionAnimPlayed_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionAnimPlayed*>(this, "APrimalBuff_Companion.OnReactionAnimPlayed_Delegate"); }
    //FDelegate_OnCompanionReactionVfxSpawned& OnReactionComponentSpawned_VFX_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionVfxSpawned*>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_VFX_Delegate"); }
    //FDelegate_OnCompanionReactionSfxSpawned& OnReactionComponentSpawned_SFX_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionSfxSpawned*>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_SFX_Delegate"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDebugCompanion() { return { this, "APrimalBuff_Companion.bDebugCompanion" }; }
    BitFieldValue<bool, unsigned __int32> bIsOrbitingPointOfInterest() { return { this, "APrimalBuff_Companion.bIsOrbitingPointOfInterest" }; }
    BitFieldValue<bool, unsigned __int32> bHasReachedPointOrbit() { return { this, "APrimalBuff_Companion.bHasReachedPointOrbit" }; }
    BitFieldValue<bool, unsigned __int32> bShowsHexagonsInInventory() { return { this, "APrimalBuff_Companion.bShowsHexagonsInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebugReactions() { return { this, "APrimalBuff_Companion.bEnableDebugReactions" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayEnglishLinesAsLocalizationFallback() { return { this, "APrimalBuff_Companion.bDontPlayEnglishLinesAsLocalizationFallback" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedTexture() { return { this, "APrimalBuff_Companion.bIsAwaitingLoadedTexture" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingTexture() { return { this, "APrimalBuff_Companion.bHasFinishedLoadingTexture" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedSoundCue() { return { this, "APrimalBuff_Companion.bIsAwaitingLoadedSoundCue" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingSoundWave() { return { this, "APrimalBuff_Companion.bHasFinishedLoadingSoundWave" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedSoundWave() { return { this, "APrimalBuff_Companion.bIsAwaitingLoadedSoundWave" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingFallbackSubtitleAudio() { return { this, "APrimalBuff_Companion.bIsAwaitingFallbackSubtitleAudio" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingSoundCue() { return { this, "APrimalBuff_Companion.bHasFinishedLoadingSoundCue" }; }
    BitFieldValue<bool, unsigned __int32> bProbablyPlayingReaction() { return { this, "APrimalBuff_Companion.bProbablyPlayingReaction" }; }
    BitFieldValue<bool, unsigned __int32> bHasSomePaddingBeforePlayingReaction() { return { this, "APrimalBuff_Companion.bHasSomePaddingBeforePlayingReaction" }; }
    BitFieldValue<bool, unsigned __int32> bGoingToTryToSplitSoundCueForLocalization() { return { this, "APrimalBuff_Companion.bGoingToTryToSplitSoundCueForLocalization" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayedDefaultReactionAnimTexture() { return { this, "APrimalBuff_Companion.bHasPlayedDefaultReactionAnimTexture" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingFallbackReactionAnimTexture() { return { this, "APrimalBuff_Companion.bIsPlayingFallbackReactionAnimTexture" }; }
    BitFieldValue<bool, unsigned __int32> bForceCompanionHidden() { return { this, "APrimalBuff_Companion.bForceCompanionHidden" }; }

    // Functions

    bool CanPlayCompanionReaction(const FCompanionReactionData* CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData*>(this, "APrimalBuff_Companion.CanPlayCompanionReaction(FCompanionReactionData&)", CanPlayReactionData); }
    bool CanStartCompanionEvent(const AActor* EventActor, FCompanionEventData* WithEventData) { return NativeCall<bool, const AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.CanStartCompanionEvent(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void Client_AddCompanionReaction(FCompanionReactionData* WithReactionData, const bool bForcePlayNow, UMaterialInterface* DialogueIconOverride, const int UniqueID) { NativeCall<void, FCompanionReactionData*, const bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction(FCompanionReactionData,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIconOverride, UniqueID); }
    void FocusOnRemoteTarget() { NativeCall<void>(this, "APrimalBuff_Companion.FocusOnRemoteTarget()"); }
    bool IsCompanionAbleToMonologue() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionAbleToMonologue()"); }
    void NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "APrimalBuff_Companion.NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter>)", DinoClass); }
    void RefreshCompanionColorization() { NativeCall<void>(this, "APrimalBuff_Companion.RefreshCompanionColorization()"); }
    void Server_SetCompanionState(const ECompanionState::Type NewState) { NativeCall<void, const ECompanionState::Type>(this, "APrimalBuff_Companion.Server_SetCompanionState(ECompanionState::Type)", NewState); }
    void StartCompanionEvent(AActor* EventActor, FCompanionEventData* WithEventData) { NativeCall<void, AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.StartCompanionEvent(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void StopCompanionEvent() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent()"); }
    void Tick_CompanionReactions(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions(float)", DeltaTime); }
    void Tick_CompanionSearchForPOIs(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs(float)", DeltaTime); }
    static void StaticRegisterNativesAPrimalBuff_Companion() { NativeCall<void>(nullptr, "APrimalBuff_Companion.StaticRegisterNativesAPrimalBuff_Companion()"); }
    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBuff_Companion.GetPrivateStaticClass()"); }
    void ClientAllowVRTeleport_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.ClientAllowVRTeleport_Implementation()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBuff_Companion.BeginPlay()"); }
    void Timer_CheckForValidInstigator() { NativeCall<void>(this, "APrimalBuff_Companion.Timer_CheckForValidInstigator()"); }
    void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_Companion.SetupForInstigator()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick(float)", DeltaSeconds); }
    void Deactivate() { NativeCall<void>(this, "APrimalBuff_Companion.Deactivate()"); }
    void OnSpawnedForPlayer_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalBuff_Companion.OnSpawnedForPlayer_Implementation()", a2); }
    void OnPlayerDeath_Implementation(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_Companion.OnPlayerDeath_Implementation(APrimalCharacter*)", DiedCharacter); }
    void Tick_CompanionSearchForPOIs_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs_Implementation(float)", DeltaTime); }
    void Tick_UpdateCompanionState_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState_Implementation(float)", DeltaTime); }
    void Tick_CompanionEvents_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents_Implementation(float)", DeltaTime); }
    void Tick_CompanionReactions_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions_Implementation(float)", DeltaTime); }
    void AnimateOutHLNASubtitleIcon() { NativeCall<void>(this, "APrimalBuff_Companion.AnimateOutHLNASubtitleIcon()"); }
    void AnimateInHLNASubtitleIcon() { NativeCall<void>(this, "APrimalBuff_Companion.AnimateInHLNASubtitleIcon()"); }
    void SetUpAnimTexture() { NativeCall<void>(this, "APrimalBuff_Companion.SetUpAnimTexture()"); }
    void LoadAudioTimeout() { NativeCall<void>(this, "APrimalBuff_Companion.LoadAudioTimeout()"); }
    void MaxReactionLimitTimeout() { NativeCall<void>(this, "APrimalBuff_Companion.MaxReactionLimitTimeout()"); }
    void FinishAsyncLoading() { NativeCall<void>(this, "APrimalBuff_Companion.FinishAsyncLoading()"); }
    void UnloadAsyncLoadedAudioAndTexture(int a2) { NativeCall<void, int>(this, "APrimalBuff_Companion.UnloadAsyncLoadedAudioAndTexture()", a2); }
    void OutputAsyncLoadedFiles() { NativeCall<void>(this, "APrimalBuff_Companion.OutputAsyncLoadedFiles()"); }
    void ClientOutputAsyncLoadedFiles_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.ClientOutputAsyncLoadedFiles_Implementation()"); }
    bool IsPlayerLookingAtCompanion_Implementation(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalBuff_Companion.IsPlayerLookingAtCompanion_Implementation()", a2); }
    bool GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion* ClosestPointData, UE::Math::TVector<double>* ClosestPointLoc) { return NativeCall<bool, FPointOfInterestData_ForCompanion*, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion&,UE::Math::TVector<double>&)", ClosestPointData, ClosestPointLoc); }
    bool ShouldOrbitPointOfInterest(const FPointOfInterestData_ForCompanion* WithPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.ShouldOrbitPointOfInterest(FPointOfInterestData_ForCompanion&)", WithPointData); }
    bool HasCompanionReachedPointOrbit_Implementation(const FPointOfInterestData_ForCompanion* OfPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit_Implementation(FPointOfInterestData_ForCompanion&)", OfPointData); }
    void Net_SetCompanionState(const TEnumAsByte<ECompanionState::Type> NewState) { NativeCall<void, const TEnumAsByte<ECompanionState::Type>>(this, "APrimalBuff_Companion.Net_SetCompanionState(TEnumAsByte<ECompanionState::Type>)", NewState); }
    void Server_SetCompanionState_Implementation(const ECompanionState::Type NewState) { NativeCall<void, const ECompanionState::Type>(this, "APrimalBuff_Companion.Server_SetCompanionState_Implementation(ECompanionState::Type)", NewState); }
    void OnRep_CompanionState() { NativeCall<void>(this, "APrimalBuff_Companion.OnRep_CompanionState()"); }
    bool CanStartCompanionEvent_Implementation(const AActor* EventActor, FCompanionEventData* WithEventData) { return NativeCall<bool, const AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.CanStartCompanionEvent_Implementation(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void StartCompanionEvent_Implementation(AActor* EventActor, FCompanionEventData* WithEventData) { NativeCall<void, AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.StartCompanionEvent_Implementation(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void StopCompanionEvent_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent_Implementation()"); }
    bool CanPlayCompanionReaction_Implementation(const FCompanionReactionData* CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData*>(this, "APrimalBuff_Companion.CanPlayCompanionReaction_Implementation(FCompanionReactionData&)", CanPlayReactionData); }
    void AddCompanionReaction(FCompanionReactionData* WithReactionData, const bool bForcePlayNow, UMaterialInterface* DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData*, const bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.AddCompanionReaction(FCompanionReactionData&,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
    void AddCompanionReaction_Internal(FCompanionReactionData* WithReactionData, const bool bForcePlayNow, UMaterialInterface* DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData*, const bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.AddCompanionReaction_Internal(FCompanionReactionData&,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
    void Client_AddCompanionReaction_Implementation(FCompanionReactionData* WithReactionData, bool bForcePlayNow, UMaterialInterface* DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData*, bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction_Implementation(FCompanionReactionData,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
    void PlayCompanionReaction(FCompanionReactionData* WithReactionData) { NativeCall<void, FCompanionReactionData*>(this, "APrimalBuff_Companion.PlayCompanionReaction(FCompanionReactionData&)", WithReactionData); }
    void StopCompanionReaction() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionReaction()"); }
    void OnCompanionReactionPlayed_Implementation(const FCompanionReactionData* PlayedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData*, const int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed_Implementation(FCompanionReactionData&,int)", PlayedReactionData, UniqueID); }
    void OnCompanionReactionStopped_Implementation(const FCompanionReactionData* StoppedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData*, const int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped_Implementation(FCompanionReactionData&,int)", StoppedReactionData, UniqueID); }
    bool IsPlayingCompanionReaction() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayingCompanionReaction()"); }
    void OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData* MissionDataBuff, AMissionType* Mission) { NativeCall<void, APrimalBuff_MissionData*, AMissionType*>(this, "APrimalBuff_Companion.OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData*,AMissionType*)", MissionDataBuff, Mission); }
    void OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData* MissionDataBuff, AMissionType* Mission, bool bSuccess) { NativeCall<void, APrimalBuff_MissionData*, AMissionType*, bool>(this, "APrimalBuff_Companion.OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData*,AMissionType*,bool)", MissionDataBuff, Mission, bSuccess); }
    AShooterHUD* GetMyPlayerHUD(__int16 a2) { return NativeCall<AShooterHUD*, __int16>(this, "APrimalBuff_Companion.GetMyPlayerHUD()", a2); }
    FCompanionReactionData* GetCurrentCompanionReactionData(FCompanionReactionData* result) { return NativeCall<FCompanionReactionData*, FCompanionReactionData*>(this, "APrimalBuff_Companion.GetCurrentCompanionReactionData()", result); }
    void OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion* FoundPointData, const AActor* FoundPointActor) { NativeCall<void, FPointOfInterestData_ForCompanion*, const AActor*>(this, "APrimalBuff_Companion.OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion&,AActor*)", FoundPointData, FoundPointActor); }
    void OnBeginOverlapCompanionEventTrigger_Implementation(AActor* ForTrigger) { NativeCall<void, AActor*>(this, "APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger_Implementation(AActor*)", ForTrigger); }
    void OnEndOverlapCompanionEventTrigger_Implementation(const AActor* ForTrigger) { NativeCall<void, const AActor*>(this, "APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger_Implementation(AActor*)", ForTrigger); }
    bool IsPlayerADS_Implementation(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalBuff_Companion.IsPlayerADS_Implementation()", a2); }
    bool TraceForCompanionBlockersFromPlayer_Implementation(UE::Math::TVector<double>* AdjustedLocation, const UE::Math::TVector<double>* TraceStart, const UE::Math::TVector<double>* TraceEnd, bool bDebug, float TraceRadius) { return NativeCall<bool, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, bool, float>(this, "APrimalBuff_Companion.TraceForCompanionBlockersFromPlayer_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,float)", AdjustedLocation, TraceStart, TraceEnd, bDebug, TraceRadius); }
    float PlayCompanionMontage(UAnimMontage* MontageToPlay, const float BlendInTime, const float BlendOutTime, const float PlayRate) { return NativeCall<float, UAnimMontage*, const float, const float, const float>(this, "APrimalBuff_Companion.PlayCompanionMontage(UAnimMontage*,float,float,float)", MontageToPlay, BlendInTime, BlendOutTime, PlayRate); }
    void StopCompanionMontage(UAnimMontage* AnimToStop, const float BlendOutTime) { NativeCall<void, UAnimMontage*, const float>(this, "APrimalBuff_Companion.StopCompanionMontage(UAnimMontage*,float)", AnimToStop, BlendOutTime); }
    void SetCompaionHiddenSetting_Implementation(bool IsHidden) { NativeCall<void, bool>(this, "APrimalBuff_Companion.SetCompaionHiddenSetting_Implementation(bool)", IsHidden); }
    void AllowVRTeleport() { NativeCall<void>(this, "APrimalBuff_Companion.AllowVRTeleport()"); }
    float GetUsablePriority_Implementation() { return NativeCall<float>(this, "APrimalBuff_Companion.GetUsablePriority_Implementation()"); }
    void RefreshCompanionColorization_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalBuff_Companion.RefreshCompanionColorization_Implementation()", a2); }
    __int64 ForceUnhibernateAtLocation(UE::Math::TVector<double>* AtLocation) { return NativeCall<__int64, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.ForceUnhibernateAtLocation(UE::Math::TVector<double>)", AtLocation); }
    void ToggleForceMonologue() { NativeCall<void>(this, "APrimalBuff_Companion.ToggleForceMonologue()"); }
    void ClientToggleForceMonologue_Implementation(bool Newval) { NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue_Implementation(bool)", Newval); }
    void RequestLoadFallbackSubtitlesAudio(int a2) { NativeCall<void, int>(this, "APrimalBuff_Companion.RequestLoadFallbackSubtitlesAudio()", a2); }
    void BPServerside_IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex, bool* CouldDetermine, bool* HasPlayerUnlockedNote) { NativeCall<void, int, bool*, bool*>(this, "APrimalBuff_Companion.BPServerside_IsPerMapExplorerNoteUnlocked(int,bool&,bool&)", ExplorerNoteIndex, CouldDetermine, HasPlayerUnlockedNote); }
};

struct APrimalBuff_Grappled : APrimalBuff
{
    // Fields

    TArray<FGrappleTether, TSizedDefaultAllocator<32> >& CurrentGrappleTethersField() { return *GetNativePointerField<TArray<FGrappleTether, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.CurrentGrappleTethers"); }
    TArray<FGrappleTether, TSizedDefaultAllocator<32> >& LastSyncedGrappleTethersField() { return *GetNativePointerField<TArray<FGrappleTether, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.LastSyncedGrappleTethers"); }
    TArray<FReplicatedGrappleTetherData, TSizedDefaultAllocator<32> >& ReplicatedGrappleTethersField() { return *GetNativePointerField<TArray<FReplicatedGrappleTetherData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.ReplicatedGrappleTethers"); }
    APrimalCharacter*& MyOwnerField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalBuff_Grappled.MyOwner"); }
    APrimalCharacter*& MyOwnerCDOField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalBuff_Grappled.MyOwnerCDO"); }
    TEnumAsByte<enum EGrappleState::Type>& GrappleState_PreviousField() { return *GetNativePointerField<TEnumAsByte<enum EGrappleState::Type>*>(this, "APrimalBuff_Grappled.GrappleState_Previous"); }
    TSubclassOf<APrimalBuff_Grappled>& DefaultGrappledBuffClassField() { return *GetNativePointerField<TSubclassOf<APrimalBuff_Grappled>*>(this, "APrimalBuff_Grappled.DefaultGrappledBuffClass"); }
    USoundCue*& PullingSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Grappled.PullingSoundCue"); }
    USoundCue*& ReleasingSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Grappled.ReleasingSoundCue"); }
    UStaticMesh*& GrappleTetherMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalBuff_Grappled.GrappleTetherMesh"); }
    int& MaxAllowedGrappleTethersField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Grappled.MaxAllowedGrappleTethers"); }
    float& ForceFallingWhenDirToTetherAboveUpDotField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingWhenDirToTetherAboveUpDot"); }
    float& ForceFallingWhenAboveVelocityAwayFromAnchorField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingWhenAboveVelocityAwayFromAnchor"); }
    float& ForceFallingBelowTetherToOwnerDeltaZField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingBelowTetherToOwnerDeltaZ"); }
    float& ReduceFallDamageUnderAngleToAnchorField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ReduceFallDamageUnderAngleToAnchor"); }
    float& GrappledFallDamageMult_MINField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledFallDamageMult_MIN"); }
    float& OwnerInput_SwingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerInput_SwingSpeed"); }
    float& SwingingVelocityDampingRate_IdleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Idle"); }
    float& SwingingVelocityDampingRate_PullingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Pulling"); }
    UE::Math::TVector2<double>& SwingingVelocityDampingRateAxisMults_PullingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRateAxisMults_Pulling"); }
    float& SwingingVelocityDampingRate_ReleasingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Releasing"); }
    float& SwingingVelocityDampingRate_OwnerInputField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_OwnerInput"); }
    float& TetherTensionVelocityDampingRateField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionVelocityDampingRate"); }
    float& GrappleVelocityMAXField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappleVelocityMAX"); }
    float& SwingingClientPositionErrorOverride_PlayerField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Player"); }
    float& SwingingClientPositionErrorOverride_Dino_MovingFlyingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Dino_MovingFlying"); }
    float& SwingingClientPositionErrorOverride_Dino_StoppedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Dino_Stopped"); }
    float& SwingingClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientLocationInterpSpeed"); }
    float& SwingingClientRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientRotationInterpSpeed"); }
    float& SyncGrappleTetherLengthIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SyncGrappleTetherLengthInterval"); }
    float& PullableWeightLimitField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.PullableWeightLimit"); }
    float& TetherMaxLengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherMaxLength"); }
    float& TetherMinLengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherMinLength"); }
    float& TetherAutoDetachUnderLengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherAutoDetachUnderLength"); }
    float& TetherBreakLimit_OwnerPastCurrentLengthDeltaField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_OwnerPastCurrentLengthDelta"); }
    float& TetherBreakLimit_OwnerPastCurrentLengthForTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_OwnerPastCurrentLengthForTime"); }
    float& TetherBreakLimit_GrappledActorAboveVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_GrappledActorAboveVelocity"); }
    float& TetherWidthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherWidth"); }
    long double& LastGrappleTetherLengthSyncTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Grappled.LastGrappleTetherLengthSyncTime"); }
    UE::Math::TVector<double>& OwnerInput_CurrentSwingingVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.OwnerInput_CurrentSwingingVelocity"); }
    UE::Math::TVector2<double>& OwnerInput_CurrentSyncedField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.OwnerInput_CurrentSynced"); }
    UE::Math::TVector2<double>& OwnerInput_LastSyncedField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.OwnerInput_LastSynced"); }
    long double& OwnerInput_LastSyncTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Grappled.OwnerInput_LastSyncTime"); }
    float& OwnerInput_SyncInvervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerInput_SyncInverval"); }
    UE::Math::TVector<double>& DirToAgainstSurfaceField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.DirToAgainstSurface"); }
    UE::Math::TVector<double>& LastDirToAgainstSurfaceField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.LastDirToAgainstSurface"); }
    float& RequiredDirToSurfaceDotDeltaToUpdateField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.RequiredDirToSurfaceDotDeltaToUpdate"); }
    UE::Math::TVector<double>& AgainstSurfaceNormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.AgainstSurfaceNormal"); }
    float& TetherPullMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullMaxVelocity"); }
    float& TetherPullAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullAcceleration"); }
    float& TetherPullMaxVelocity_GrappledCharField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullMaxVelocity_GrappledChar"); }
    float& TetherPullAcceleration_GrappledCharField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullAcceleration_GrappledChar"); }
    float& TetherReleaseMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherReleaseMaxVelocity"); }
    float& TetherReleaseMaxVelocity_GrappledCharField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherReleaseMaxVelocity_GrappledChar"); }
    UE::Math::TVector<double>& CurrentTetherMoveVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.CurrentTetherMoveVelocity"); }
    UE::Math::TVector<double>& AvgParentCharVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.AvgParentCharVelocity"); }
    float& ClientSuggestTetherLength_AllowedDeltaField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_AllowedDelta"); }
    float& ClientSuggestTetherLength_AllowedIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_AllowedInterval"); }
    long double& ClientSuggestTetherLength_LastReceivedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_LastReceivedTime"); }
    float& ValidHitSurface_DistanceFromCapsuleEdgeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ValidHitSurface_DistanceFromCapsuleEdge"); }
    UE::Math::TVector2<double>& ValidHitSurface_UpVectorAngleRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.ValidHitSurface_UpVectorAngleRange"); }
    UE::Math::TVector2<double>& LastProjectedOwnerInputsField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.LastProjectedOwnerInputs"); }
    float& OwnerCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerCapsuleRadius"); }
    float& OwnerCapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerCapsuleHalfHeight"); }
    UE::Math::TVector<double>& PreviousOwnerVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.PreviousOwnerVelocity"); }
    float& TetherTensionStrengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionStrength"); }
    float& TetherTensionExponentField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionExponent"); }
    float& ForceFallingStateImpulseField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingStateImpulse"); }
    TArray<FString, TSizedDefaultAllocator<32> >& ReservedTetherTagsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.ReservedTetherTags"); }
    FString& TetherTagOwnerConnectorStringField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_Grappled.TetherTagOwnerConnectorString"); }
    UE::Math::TVector2<double>& GrappledGravityScaleRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.GrappledGravityScaleRange"); }
    float& GrappledGravityScaleMult_IdleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Idle"); }
    float& GrappledGravityScaleMult_PullingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Pulling"); }
    float& GrappledGravityScaleMult_ReleasingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Releasing"); }
    float& AtTetherLimitBelowDistFromEndField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.AtTetherLimitBelowDistFromEnd"); }
    UE::Math::TVector<double>& LastGravityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.LastGravity"); }
    float& LookingAtAgainstSurfaceAngleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.LookingAtAgainstSurfaceAngle"); }
    float& VelocityOverrideMaxDeltaTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.VelocityOverrideMaxDeltaTime"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDetachGrappledChars() { return { this, "APrimalBuff_Grappled.bDetachGrappledChars" }; }
    BitFieldValue<bool, unsigned __int32> bDebugGrappling() { return { this, "APrimalBuff_Grappled.bDebugGrappling" }; }
    BitFieldValue<bool, unsigned __int32> bDebugGrappling_AgainstSurface() { return { this, "APrimalBuff_Grappled.bDebugGrappling_AgainstSurface" }; }
    BitFieldValue<bool, unsigned __int32> bAllowGrappleLogicOnRemoteClients() { return { this, "APrimalBuff_Grappled.bAllowGrappleLogicOnRemoteClients" }; }
    BitFieldValue<bool, unsigned __int32> bForceIdleGrappleState() { return { this, "APrimalBuff_Grappled.bForceIdleGrappleState" }; }
    BitFieldValue<bool, unsigned __int32> bHasGrappleBuffInitialized() { return { this, "APrimalBuff_Grappled.bHasGrappleBuffInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bIsOwnerAgainstSurface() { return { this, "APrimalBuff_Grappled.bIsOwnerAgainstSurface" }; }
    BitFieldValue<bool, unsigned __int32> bOwnerMovementAffectedByGrappleTethers() { return { this, "APrimalBuff_Grappled.bOwnerMovementAffectedByGrappleTethers" }; }
    BitFieldValue<bool, unsigned __int32> bLastIsOwnerSubmerged() { return { this, "APrimalBuff_Grappled.bLastIsOwnerSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bLastIsOwnerSwinging() { return { this, "APrimalBuff_Grappled.bLastIsOwnerSwinging" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyValidTethers() { return { this, "APrimalBuff_Grappled.bHasAnyValidTethers" }; }
    BitFieldValue<bool, unsigned __int32> bHasValidReservedTethers() { return { this, "APrimalBuff_Grappled.bHasValidReservedTethers" }; }
    BitFieldValue<bool, unsigned __int32> bBrokeAnyTethersThisFrame() { return { this, "APrimalBuff_Grappled.bBrokeAnyTethersThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyGrappledChars() { return { this, "APrimalBuff_Grappled.bHasAnyGrappledChars" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyTethersAttachedToDynamicActors() { return { this, "APrimalBuff_Grappled.bHasAnyTethersAttachedToDynamicActors" }; }
    BitFieldValue<bool, unsigned __int32> bDidOverrideVelocityThisFrame() { return { this, "APrimalBuff_Grappled.bDidOverrideVelocityThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bShouldResetOwnerVars() { return { this, "APrimalBuff_Grappled.bShouldResetOwnerVars" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBuff_Grappled.StaticClass()"); }
    bool AllowGrappleLogic() { return NativeCall<bool>(this, "APrimalBuff_Grappled.AllowGrappleLogic()"); }
    void ApplyTetherMoveVelocity(UE::Math::TVector<double>* CurrentVelocity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.ApplyTetherMoveVelocity(UE::Math::TVector<double>&,float)", CurrentVelocity, DeltaTime); }
    bool BP_InterceptGrappleLogic(UE::Math::TVector<double>* CharVelocity) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.BP_InterceptGrappleLogic(UE::Math::TVector<double>&)", CharVelocity); }
    bool CanBeGrappledAgainstSurface() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanBeGrappledAgainstSurface()"); }
    bool CanPullChar(APrimalCharacter* PullChar, const bool bForStart) { return NativeCall<bool, APrimalCharacter*, const bool>(this, "APrimalBuff_Grappled.CanPullChar(APrimalCharacter*,bool)", PullChar, bForStart); }
    void ClampGrappleVelocity(UE::Math::TVector<double>* ClampVelocity) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.ClampGrappleVelocity(UE::Math::TVector<double>&)", ClampVelocity); }
    bool DisplayGrappleSystemHudNotification(AShooterPlayerController* ForPC, const AActor* FromActor, const unsigned __int8 NotificationType, const int NotificationID, const FString* ReasonString) { return NativeCall<bool, AShooterPlayerController*, const AActor*, const unsigned __int8, const int, const FString*>(this, "APrimalBuff_Grappled.DisplayGrappleSystemHudNotification(AShooterPlayerController*,AActor*,unsignedchar,int,FString&)", ForPC, FromActor, NotificationType, NotificationID, ReasonString); }
    void EndGrapple() { NativeCall<void>(this, "APrimalBuff_Grappled.EndGrapple()"); }
    float GetGrappleTetherPullAcceleration(const APrimalCharacter* ForPullingChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleTetherPullAcceleration(APrimalCharacter*,FGrappleTether&)", ForPullingChar, ForTether); }
    float GetGrappleTetherPullMaxVelocity(const APrimalCharacter* ForPullingChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleTetherPullMaxVelocity(APrimalCharacter*,FGrappleTether&)", ForPullingChar, ForTether); }
    float GetGrappleTetherReleaseMaxVelocity(const APrimalCharacter* ForReleasingChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleTetherReleaseMaxVelocity(APrimalCharacter*,FGrappleTether&)", ForReleasingChar, ForTether); }
    float GetGrappleVelocityDampingRate(const APrimalCharacter* ForChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleVelocityDampingRate(APrimalCharacter*,FGrappleTether&)", ForChar, ForTether); }
    float GetMaxTetherLength(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetMaxTetherLength(FGrappleTether&)", ForTether); }
    float GetMinTetherLength(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetMinTetherLength(FGrappleTether&)", ForTether); }
    float GetTetherBreakLimit_OwnerPastCurrentLengthDelta(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthDelta(FGrappleTether&)", ForTether); }
    float GetTetherBreakLimit_OwnerPastCurrentLengthForTime(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthForTime(FGrappleTether&)", ForTether); }
    void InitGrappleBuff() { NativeCall<void>(this, "APrimalBuff_Grappled.InitGrappleBuff()"); }
    bool IsGrappledCharHardAttached(APrimalCharacter* ForChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff_Grappled.IsGrappledCharHardAttached(APrimalCharacter*)", ForChar); }
    void ModifyOverriddenCharVelocity(UE::Math::TVector<double>* CurrentCharVelocity, const float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const float>(this, "APrimalBuff_Grappled.ModifyOverriddenCharVelocity(UE::Math::TVector<double>&,float)", CurrentCharVelocity, DeltaTime); }
    void ModifyTetherMoveVelocity(UE::Math::TVector<double>* CurrentMoveVelocity, const FGrappleTether* ForTether) { NativeCall<void, UE::Math::TVector<double>*, const FGrappleTether*>(this, "APrimalBuff_Grappled.ModifyTetherMoveVelocity(UE::Math::TVector<double>&,FGrappleTether&)", CurrentMoveVelocity, ForTether); }
    void Multi_SyncGrappleTetherLength(const float SyncedTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLength(float)", SyncedTetherLength); }
    void OnAgainstValidSurfaceStateChanged() { NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged()"); }
    void OnGrappleTetherRemoved(const FGrappleTether* RemovedTether) { NativeCall<void, const FGrappleTether*>(this, "APrimalBuff_Grappled.OnGrappleTetherRemoved(FGrappleTether&)", RemovedTether); }
    void OnGrappleTethersChanged() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleTethersChanged()"); }
    void OnReleasedPrimalChar(APrimalCharacter* ReleasedChar) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_Grappled.OnReleasedPrimalChar(APrimalCharacter*)", ReleasedChar); }
    void ResetOwnerVars() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerVars()"); }
    void SetupDelegateBindingsForChar(APrimalCharacter* ForChar, const bool bDoBind) { NativeCall<void, APrimalCharacter*, const bool>(this, "APrimalBuff_Grappled.SetupDelegateBindingsForChar(APrimalCharacter*,bool)", ForChar, bDoBind); }
    bool ShouldForceOwnerIntoFallingState(const FGrappleTether* ForTether, const UE::Math::TVector<double>* WithOwnerVelocity, const EMovementMode CheckMovementModeOverride) { return NativeCall<bool, const FGrappleTether*, const UE::Math::TVector<double>*, const EMovementMode>(this, "APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState(FGrappleTether&,UE::Math::TVector<double>&,EMovementMode)", ForTether, WithOwnerVelocity, CheckMovementModeOverride); }
    void SimulateTautTetherForces(UE::Math::TVector<double>* WithCharVelocity, float DeltaTime, float LastGravityZ) { NativeCall<void, UE::Math::TVector<double>*, float, float>(this, "APrimalBuff_Grappled.SimulateTautTetherForces(UE::Math::TVector<double>&,float,float)", WithCharVelocity, DeltaTime, LastGravityZ); }
    void SimulateTetherFriction(UE::Math::TVector<double>* WithCharVelocity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.SimulateTetherFriction(UE::Math::TVector<double>&,float)", WithCharVelocity, DeltaTime); }
    static void StaticRegisterNativesAPrimalBuff_Grappled() { NativeCall<void>(nullptr, "APrimalBuff_Grappled.StaticRegisterNativesAPrimalBuff_Grappled()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBuff_Grappled.BeginPlay()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff_Grappled.Tick(float)", DeltaSeconds); }
    void Destroyed() { NativeCall<void>(this, "APrimalBuff_Grappled.Destroyed()"); }
    bool PreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned __int8 NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned __int8>(this, "APrimalBuff_Grappled.PreventInstigatorMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
    void Unstasis() { NativeCall<void>(this, "APrimalBuff_Grappled.Unstasis()"); }
    void InitGrappleBuff_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.InitGrappleBuff_Implementation()"); }
    void SetupDelegateBindingsForChar_Implementation(APrimalCharacter* ForChar, bool bDoBind) { NativeCall<void, APrimalCharacter*, bool>(this, "APrimalBuff_Grappled.SetupDelegateBindingsForChar_Implementation(APrimalCharacter*,bool)", ForChar, bDoBind); }
    void GrappleTick(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.GrappleTick(float)", DeltaTime); }
    void Tick_UpdateGrappleTethers(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Tick_UpdateGrappleTethers(float)", DeltaTime); }
    void Tick_UpdateAgainstSurface(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Tick_UpdateAgainstSurface(float)", DeltaTime); }
    bool AllowGrappleLogic_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.AllowGrappleLogic_Implementation()"); }
    void UpdateTethersByState(const float* DeltaTime) { NativeCall<void, const float*>(this, "APrimalBuff_Grappled.UpdateTethersByState(float&)", DeltaTime); }
    //int AddGrappleTether(const FCreateGrappleTetherData* FromData, const bool bPreventNetSync, const int AddAtIndex) { return NativeCall<int, const FCreateGrappleTetherData*, const bool, const int>(this, "APrimalBuff_Grappled.AddGrappleTether(FCreateGrappleTetherData&,bool,int)", FromData, bPreventNetSync, AddAtIndex); }
    void ReceiveRepGrappleTether(const FReplicatedGrappleTetherData* FromRepData, const int ReceivedTetherIndex) { NativeCall<void, const FReplicatedGrappleTetherData*, const int>(this, "APrimalBuff_Grappled.ReceiveRepGrappleTether(FReplicatedGrappleTetherData&,int)", FromRepData, ReceivedTetherIndex); }
    char RemoveGrappleTether(const int AtIndex, const FString* WithTag, const APrimalBuff_Grappled* WithMasterBuff, const bool bForceNetSync, const bool bRemoveAllTethersWithTag) { return NativeCall<char, const int, const FString*, const APrimalBuff_Grappled*, const bool, const bool>(this, "APrimalBuff_Grappled.RemoveGrappleTether(int,FString,APrimalBuff_Grappled*,bool,bool)", AtIndex, WithTag, WithMasterBuff, bForceNetSync, bRemoveAllTethersWithTag); }
    char BreakGrappleTether(const int AtIndex, const FString* WithTag, const APrimalBuff_Grappled* WithMasterBuff, const bool bBreakAllTethersWithTag) { return NativeCall<char, const int, const FString*, const APrimalBuff_Grappled*, const bool>(this, "APrimalBuff_Grappled.BreakGrappleTether(int,FString,APrimalBuff_Grappled*,bool)", AtIndex, WithTag, WithMasterBuff, bBreakAllTethersWithTag); }
    void UpdateBrokenTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.UpdateBrokenTethers()"); }
    void NetSyncGrappleTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.NetSyncGrappleTethers()"); }
    void OnRep_ReplicatedGrappleTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.OnRep_ReplicatedGrappleTethers()"); }
    void OnGrappleTethersChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleTethersChanged_Implementation()"); }
    void OnGrappleStateChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleStateChanged_Implementation()"); }
    bool CanUpdateTetherLength_Implementation(const FGrappleTether* ForTether, const float WithLength) { return NativeCall<bool, const FGrappleTether*, const float>(this, "APrimalBuff_Grappled.CanUpdateTetherLength_Implementation(FGrappleTether&,float)", ForTether, WithLength); }
    bool CanChangeGrappleState_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanChangeGrappleState_Implementation(unsignedchar)"); }
    bool ShouldUseDynamicTetherTension_Implementation(const FGrappleTether* ForTether) { return NativeCall<bool, const FGrappleTether*>(this, "APrimalBuff_Grappled.ShouldUseDynamicTetherTension_Implementation(FGrappleTether&)", ForTether); }
    void ApplyTetherMoveVelocity_Implementation(UE::Math::TVector<double>* CurrentVelocity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.ApplyTetherMoveVelocity_Implementation(UE::Math::TVector<double>&,float)", CurrentVelocity, DeltaTime); }
    void AdjustMovementVectorIfAgainstSurface_Implementation(UE::Math::TVector<double>* AdjustVector) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface_Implementation(UE::Math::TVector<double>&)", AdjustVector); }
    bool ShouldReplicateOwnerInputs_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReplicateOwnerInputs_Implementation()"); }
    void Server_SyncOwnerInputs_Implementation(UE::Math::TVector2<double>* NewInputs) { NativeCall<void, UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.Server_SyncOwnerInputs_Implementation(UE::Math::TVector2<double>)", NewInputs); }
    void SyncOwnerInputs(UE::Math::TVector2<double>* NewInputs) { NativeCall<void, UE::Math::TVector2<double>*>(this, "APrimalBuff_Grappled.SyncOwnerInputs(UE::Math::TVector2<double>)", NewInputs); }
    bool SetGrappleState(const TEnumAsByte<EGrappleState::Type> NewGrappleState, const bool bForceUpdate) { return NativeCall<bool, const TEnumAsByte<EGrappleState::Type>, const bool>(this, "APrimalBuff_Grappled.SetGrappleState(TEnumAsByte<EGrappleState::Type>,bool)", NewGrappleState, bForceUpdate); }
    void Server_SetGrappleState_Implementation(const unsigned __int8 NewGrappleState, bool bForceUpdate) { NativeCall<void, const unsigned __int8, bool>(this, "APrimalBuff_Grappled.Server_SetGrappleState_Implementation(unsignedchar,bool)", NewGrappleState, bForceUpdate); }
    void OnGrappledPrimalChar_Implementation(APrimalCharacter* GrappledChar, const FGrappleTether* WithMasterTether) { NativeCall<void, APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.OnGrappledPrimalChar_Implementation(APrimalCharacter*,FGrappleTether&)", GrappledChar, WithMasterTether); }
    void OnReleasedPrimalChar_Implementation(APrimalCharacter* ReleasedChar) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_Grappled.OnReleasedPrimalChar_Implementation(APrimalCharacter*)", ReleasedChar); }
    void OnGrappledCharSleepStateChange_Implementation(APrimalCharacter* ForChar, bool bIsSleeping) { NativeCall<void, APrimalCharacter*, bool>(this, "APrimalBuff_Grappled.OnGrappledCharSleepStateChange_Implementation(APrimalCharacter*,bool)", ForChar, bIsSleeping); }
    void OnGrappledCharDeath_Implementation(APrimalCharacter* DyingChar) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_Grappled.OnGrappledCharDeath_Implementation(APrimalCharacter*)", DyingChar); }
    float ModifyTetherTensionLerpValue_Implementation(const float CurrentLerpValue) { return NativeCall<float, const float>(this, "APrimalBuff_Grappled.ModifyTetherTensionLerpValue_Implementation(float)", CurrentLerpValue); }
    bool ShouldReturnToIdleGrappleState_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReturnToIdleGrappleState_Implementation()"); }
    void UpdateOwnerSwingingVelocity() { NativeCall<void>(this, "APrimalBuff_Grappled.UpdateOwnerSwingingVelocity()"); }
    void ApplyOwnerSwingingVelocity_Implementation(UE::Math::TVector<double>* CurrentVelocity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.ApplyOwnerSwingingVelocity_Implementation(UE::Math::TVector<double>&,float)", CurrentVelocity, DeltaTime); }
    void ClampOwnerReleasingVelocity_Implementation(UE::Math::TVector<double>* WithReleasingVelocity) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.ClampOwnerReleasingVelocity_Implementation(UE::Math::TVector<double>&)", WithReleasingVelocity); }
    void OverrideCharacterWalkingVelocity(UE::Math::TVector<double>* InitialVelocity, const float* Friction, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const float*, float>(this, "APrimalBuff_Grappled.OverrideCharacterWalkingVelocity(UE::Math::TVector<double>&,float&,float)", InitialVelocity, Friction, DeltaTime); }
    void OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, const float* FluidFriction, const float* NetBuoyancy, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const float*, const float*, float>(this, "APrimalBuff_Grappled.OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
    void OverrideCharacterNewFallVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.OverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
    void OverrideCharacterFlyingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.OverrideCharacterFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
    float GetGravityZScale(float CurrentScale) { return NativeCall<float, float>(this, "APrimalBuff_Grappled.GetGravityZScale(float)", CurrentScale); }
    bool ShouldForceOwnerDedicatedMovementTickPerFrame() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldForceOwnerDedicatedMovementTickPerFrame()"); }
    void OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff_Grappled.OnOwnerTeleported()"); }
    void SimulateTetherFriction_Implementation(UE::Math::TVector<double>* WithCharVelocity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalBuff_Grappled.SimulateTetherFriction_Implementation(UE::Math::TVector<double>&,float)", WithCharVelocity, DeltaTime); }
    void SimulateTautTetherForces_Implementation(UE::Math::TVector<double>* WithCharVelocity, float DeltaTime, float LastGravityZ) { NativeCall<void, UE::Math::TVector<double>*, float, float>(this, "APrimalBuff_Grappled.SimulateTautTetherForces_Implementation(UE::Math::TVector<double>&,float,float)", WithCharVelocity, DeltaTime, LastGravityZ); }
    void UpdateOwnerMovementSpeed_Implementation(UE::Math::TVector<double>* WithCharVelocity) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.UpdateOwnerMovementSpeed_Implementation(UE::Math::TVector<double>&)", WithCharVelocity); }
    bool IsSwingingTowardsAxisCenter(const FGrappleTether* ForTether) { return NativeCall<bool, const FGrappleTether*>(this, "APrimalBuff_Grappled.IsSwingingTowardsAxisCenter(FGrappleTether&)", ForTether); }
    bool IsValidGrappleHit(const FHitResult* ForHit) { return NativeCall<bool, const FHitResult*>(this, "APrimalBuff_Grappled.IsValidGrappleHit(FHitResult&)", ForHit); }
    bool IsHitWithinGrappleRange_Implementation(const FHitResult* ForHit) { return NativeCall<bool, const FHitResult*>(this, "APrimalBuff_Grappled.IsHitWithinGrappleRange_Implementation(FHitResult&)", ForHit); }
    void OnOwnerCapsuleHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult* Hit) { NativeCall<void, AActor*, UPrimitiveComponent*, UE::Math::TVector<double>*, const FHitResult*>(this, "APrimalBuff_Grappled.OnOwnerCapsuleHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", OtherActor, OtherComp, NormalImpulse, Hit); }
    void OnOwnerSleepStateChanged_Implementation(APrimalCharacter* ForChar, bool bIsSleeping) { NativeCall<void, APrimalCharacter*, bool>(this, "APrimalBuff_Grappled.OnOwnerSleepStateChanged_Implementation(APrimalCharacter*,bool)", ForChar, bIsSleeping); }
    void OnOwnerDeath_Implementation(APrimalCharacter* DyingChar) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_Grappled.OnOwnerDeath_Implementation(APrimalCharacter*)", DyingChar); }
    bool CanBeGrappledAgainstSurface_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanBeGrappledAgainstSurface_Implementation()"); }
    bool IsValidSurfaceHit(const FHitResult* ForHit) { return NativeCall<bool, const FHitResult*>(this, "APrimalBuff_Grappled.IsValidSurfaceHit(FHitResult&)", ForHit); }
    void UpdateAgainstSurfaceFromHits(const TArray<FHitResult, TSizedDefaultAllocator<32> >* Hits) { NativeCall<void, const TArray<FHitResult, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.UpdateAgainstSurfaceFromHits(TArray<FHitResult,TSizedDefaultAllocator<32>>)", Hits); }
    void OnAgainstValidSurfaceStateChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged_Implementation()"); }
    bool IsOwnerAgainstValidSurface() { return NativeCall<bool>(this, "APrimalBuff_Grappled.IsOwnerAgainstValidSurface()"); }
    bool IsOwnerLookingAtAgainstSurface_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.IsOwnerLookingAtAgainstSurface_Implementation()"); }
    int GetNumValidTethers(const bool bOnlyReservedTethers) { return NativeCall<int, const bool>(this, "APrimalBuff_Grappled.GetNumValidTethers(bool)", bOnlyReservedTethers); }
    bool ShouldForceOwnerIntoFallingState_Implementation(const FGrappleTether* ForGrappleTether, const UE::Math::TVector<double>* WithOwnerVelocity, const EMovementMode CheckMovementModeOverride) { return NativeCall<bool, const FGrappleTether*, const UE::Math::TVector<double>*, const EMovementMode>(this, "APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState_Implementation(FGrappleTether&,UE::Math::TVector<double>&,EMovementMode)", ForGrappleTether, WithOwnerVelocity, CheckMovementModeOverride); }
    void ResetOwnerVars_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerVars_Implementation()"); }
    void ResetOwnerClientPositionErrorTolerance_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance_Implementation()"); }
    void SyncGrappleTetherLengths() { NativeCall<void>(this, "APrimalBuff_Grappled.SyncGrappleTetherLengths()"); }
    void Multi_SyncGrappleTetherLength_Implementation(const float SyncedTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLength_Implementation(float)", SyncedTetherLength); }
    void Multi_SyncGrappleTetherLengths_Implementation(const TArray<float, TSizedDefaultAllocator<32> >* SyncedTetherLengths) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths_Implementation(TArray<float,TSizedDefaultAllocator<32>>&)", SyncedTetherLengths); }
    void OnGrappleStateChangedNotify_Implementation(const unsigned __int8* NewGrappleState, bool bIsEarlyNotify) { NativeCall<void, const unsigned __int8*, bool>(this, "APrimalBuff_Grappled.OnGrappleStateChangedNotify_Implementation(unsignedchar&,bool)", NewGrappleState, bIsEarlyNotify); }
    void Server_SuggestTetherLength_Implementation(const float NewTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Server_SuggestTetherLength_Implementation(float)", NewTetherLength); }
    void Server_SuggestTetherLengths_Implementation(const TArray<float, TSizedDefaultAllocator<32> >* NewTetherLengths) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.Server_SuggestTetherLengths_Implementation(TArray<float,TSizedDefaultAllocator<32>>&)", NewTetherLengths); }
    void ReceiveTetherLengthSuggestion(const int* ForTetherIndex, const float* NewTetherLength) { NativeCall<void, const int*, const float*>(this, "APrimalBuff_Grappled.ReceiveTetherLengthSuggestion(int&,float&)", ForTetherIndex, NewTetherLength); }
    void ReceiveTetherLengthsSuggestion(const TArray<float, TSizedDefaultAllocator<32> >* NewTetherLengths) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Grappled.ReceiveTetherLengthsSuggestion(TArray<float,TSizedDefaultAllocator<32>>&)", NewTetherLengths); }
    void CheckForTetherBreak(FGrappleTether* CheckTether, const int WithIndex, const float OverrideBreakPastDist) { NativeCall<void, FGrappleTether*, const int, const float>(this, "APrimalBuff_Grappled.CheckForTetherBreak(FGrappleTether&,int,float)", CheckTether, WithIndex, OverrideBreakPastDist); }
    void EndGrapple_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.EndGrapple_Implementation()"); }
    bool IsTetherAtMaxLength(const FGrappleTether* ForTether) { return NativeCall<bool, const FGrappleTether*>(this, "APrimalBuff_Grappled.IsTetherAtMaxLength(FGrappleTether&)", ForTether); }
    bool CanPullChar_Implementation(APrimalCharacter* ForChar, bool bForStart) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalBuff_Grappled.CanPullChar_Implementation(APrimalCharacter*,bool)", ForChar, bForStart); }
    bool IsTethersMasterGrappleBuff(const FGrappleTether* CheckTether) { return NativeCall<bool, const FGrappleTether*>(this, "APrimalBuff_Grappled.IsTethersMasterGrappleBuff(FGrappleTether&)", CheckTether); }
    static float GetCharAngleToGrappleTetherEnd(const FGrappleTether* ForTether, const APrimalCharacter* ForChar) { return NativeCall<float, const FGrappleTether*, const APrimalCharacter*>(nullptr, "APrimalBuff_Grappled.GetCharAngleToGrappleTetherEnd(FGrappleTether&,APrimalCharacter*)", ForTether, ForChar); }
    static bool CanTetherOwnerPullGrappledChar(const FGrappleTether* ForTether) { return NativeCall<bool, const FGrappleTether*>(nullptr, "APrimalBuff_Grappled.CanTetherOwnerPullGrappledChar(FGrappleTether&)", ForTether); }
    static bool ShouldOwnerBeAffectedByTether(const FGrappleTether* ForTether, const TEnumAsByte<EGrappleState::Type> ForGrappeState) { return NativeCall<bool, const FGrappleTether*, const TEnumAsByte<EGrappleState::Type>>(nullptr, "APrimalBuff_Grappled.ShouldOwnerBeAffectedByTether(FGrappleTether&,TEnumAsByte<EGrappleState::Type>)", ForTether, ForGrappeState); }
    static APrimalCharacter* GetActorAttachParentChar(const AActor* ForActor) { return NativeCall<APrimalCharacter*, const AActor*>(nullptr, "APrimalBuff_Grappled.GetActorAttachParentChar(AActor*)", ForActor); }
    static bool InitializeGrappleTether(FGrappleTether* InitTether, APrimalBuff_Grappled* ByGrappleBuff) { return NativeCall<bool, FGrappleTether*, APrimalBuff_Grappled*>(nullptr, "APrimalBuff_Grappled.InitializeGrappleTether(FGrappleTether&,APrimalBuff_Grappled*)", InitTether, ByGrappleBuff); }
    bool UpdateTetherMasterRef(FGrappleTether* ForTether, const bool bInit) { return NativeCall<bool, FGrappleTether*, const bool>(this, "APrimalBuff_Grappled.UpdateTetherMasterRef(FGrappleTether&,bool)", ForTether, bInit); }
    void RefreshAllTetherMasterRefs() { NativeCall<void>(this, "APrimalBuff_Grappled.RefreshAllTetherMasterRefs()"); }
    bool CheckForAutoBreakTether_Implementation(const FGrappleTether* CheckTether) { return NativeCall<bool, const FGrappleTether*>(this, "APrimalBuff_Grappled.CheckForAutoBreakTether_Implementation(FGrappleTether&)", CheckTether); }
    bool BreakChildTetherOnGrappledChar(const FGrappleTether* WithTether) { return NativeCall<bool, const FGrappleTether*>(this, "APrimalBuff_Grappled.BreakChildTetherOnGrappledChar(FGrappleTether&)", WithTether); }
    void ClampGrappleVelocity_Implementation(UE::Math::TVector<double>* ClampVelocity) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalBuff_Grappled.ClampGrappleVelocity_Implementation(UE::Math::TVector<double>&)", ClampVelocity); }
    static void UpdateGrappleTetherVars(FGrappleTether* ForTether) { NativeCall<void, FGrappleTether*>(nullptr, "APrimalBuff_Grappled.UpdateGrappleTetherVars(FGrappleTether&)", ForTether); }
    static FString* GetOwnerAppendedTetherTag(FString* result, const FString* WithRootTag, const APrimalBuff_Grappled* OwnerGrappleBuff) { return NativeCall<FString*, FString*, const FString*, const APrimalBuff_Grappled*>(nullptr, "APrimalBuff_Grappled.GetOwnerAppendedTetherTag(FString,APrimalBuff_Grappled*)", result, WithRootTag, OwnerGrappleBuff); }
    static bool SetGrappleTetherLength(FGrappleTether* ForTether, float SetNewLength, const int ForTetherIndex) { return NativeCall<bool, FGrappleTether*, float, const int>(nullptr, "APrimalBuff_Grappled.SetGrappleTetherLength(FGrappleTether&,float,int)", ForTether, SetNewLength, ForTetherIndex); }
    static float GetRequiredTetherLengthForChar(const FGrappleTether* ForTether, const APrimalCharacter* ForChar) { return NativeCall<float, const FGrappleTether*, const APrimalCharacter*>(nullptr, "APrimalBuff_Grappled.GetRequiredTetherLengthForChar(FGrappleTether&,APrimalCharacter*)", ForTether, ForChar); }
    bool ShouldTetherBreak_Implementation(FGrappleTether* ForTether, const APrimalCharacter* ForChar, const float OverrideBreakPastDist) { return NativeCall<bool, FGrappleTether*, const APrimalCharacter*, const float>(this, "APrimalBuff_Grappled.ShouldTetherBreak_Implementation(FGrappleTether&,APrimalCharacter*,float)", ForTether, ForChar, OverrideBreakPastDist); }
    bool CanReceiveNewGrappleTether(const FString* WithTag) { return NativeCall<bool, const FString*>(this, "APrimalBuff_Grappled.CanReceiveNewGrappleTether(FString)", WithTag); }
    bool AreGrappleTetherTagsEqual(const FString* TagA, const FString* TagB, const bool bOnlyCompareRootTag) { return NativeCall<bool, const FString*, const FString*, const bool>(this, "APrimalBuff_Grappled.AreGrappleTetherTagsEqual(FString,FString,bool)", TagA, TagB, bOnlyCompareRootTag); }
    FString* GetGrappleTetherRootTag(FString* result, const FString* ForTag) { return NativeCall<FString*, FString*, const FString*>(this, "APrimalBuff_Grappled.GetGrappleTetherRootTag(FString)", result, ForTag); }
    float GetGrappleVelocityDampingRate_Implementation(const APrimalCharacter* ForChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleVelocityDampingRate_Implementation(APrimalCharacter*,FGrappleTether&)", ForChar, ForTether); }
    float GetGrappleTetherPullMaxVelocity_Implementation(const APrimalCharacter* ForPullingChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleTetherPullMaxVelocity_Implementation(APrimalCharacter*,FGrappleTether&)", ForPullingChar, ForTether); }
    float GetGrappleTetherPullAcceleration_Implementation(const APrimalCharacter* ForPullingChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleTetherPullAcceleration_Implementation(APrimalCharacter*,FGrappleTether&)", ForPullingChar, ForTether); }
    float GetGrappleTetherReleaseMaxVelocity_Implementation(const APrimalCharacter* ForReleasingChar, const FGrappleTether* ForTether) { return NativeCall<float, const APrimalCharacter*, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetGrappleTetherReleaseMaxVelocity_Implementation(APrimalCharacter*,FGrappleTether&)", ForReleasingChar, ForTether); }
    void ModifyGrappledCharVelocity_Implementation(UE::Math::TVector<double>* CurrentCharVelocity, const FGrappleTether* ForTether, const float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const FGrappleTether*, const float>(this, "APrimalBuff_Grappled.ModifyGrappledCharVelocity_Implementation(UE::Math::TVector<double>&,FGrappleTether&,float)", CurrentCharVelocity, ForTether, DeltaTime); }
    void ModifyTetherMoveVelocity_Implementation(UE::Math::TVector<double>* CurrentMoveVelocity, const FGrappleTether* ForTether) { NativeCall<void, UE::Math::TVector<double>*, const FGrappleTether*>(this, "APrimalBuff_Grappled.ModifyTetherMoveVelocity_Implementation(UE::Math::TVector<double>&,FGrappleTether&)", CurrentMoveVelocity, ForTether); }
    float GetMinTetherLength_Implementation(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetMinTetherLength_Implementation(FGrappleTether&)", ForTether); }
    float GetMaxTetherLength_Implementation(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetMaxTetherLength_Implementation(FGrappleTether&)", ForTether); }
    bool CanOwnerGrappleSwing_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanOwnerGrappleSwing_Implementation()"); }
    void BreakAllTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.BreakAllTethers()"); }
    float GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Implementation(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Implementation(FGrappleTether&)", ForTether); }
    float GetTetherBreakLimit_OwnerPastCurrentLengthForTime_Implementation(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthForTime_Implementation(FGrappleTether&)", ForTether); }
    float GetTetherBreakLimit_GrappledActorAboveVelocity_Implementation(const FGrappleTether* ForTether) { return NativeCall<float, const FGrappleTether*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_GrappledActorAboveVelocity_Implementation(FGrappleTether&)", ForTether); }
    bool CanSyncGrappleTetherLengths_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanSyncGrappleTetherLengths_Implementation()"); }
    bool IsGrappledCharHardAttached_Implementation(APrimalCharacter* ForChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff_Grappled.IsGrappledCharHardAttached_Implementation(APrimalCharacter*)", ForChar); }
    bool DisplayGrappleSystemHudNotification_Implementation(AShooterPlayerController* ForPC, const AActor* FromActor, const unsigned __int8 NotificationType, const int NotificationID, const FString* ReasonString) { return NativeCall<bool, AShooterPlayerController*, const AActor*, const unsigned __int8, const int, const FString*>(this, "APrimalBuff_Grappled.DisplayGrappleSystemHudNotification_Implementation(AShooterPlayerController*,AActor*,unsignedchar,int,FString&)", ForPC, FromActor, NotificationType, NotificationID, ReasonString); }
};
