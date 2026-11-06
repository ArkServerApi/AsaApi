#pragma once
#include "BulkForward.h"


struct APrimalStructureItemContainer_SupplyCrate : APrimalStructureItemContainer
{
    // Fields

    float& MinItemSetsField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MinItemSets"); }
    float& MaxItemSetsField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxItemSets"); }
    float& NumItemSetsPowerField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.NumItemSetsPower"); }
    float& MinQualityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MinQualityMultiplier"); }
    float& MaxQualityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxQualityMultiplier"); }
    float& AboveOneExtraQualityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.AboveOneExtraQualityMultiplier"); }
    TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >& ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_SupplyCrate.ItemSets"); }
    TSubclassOf<UPrimalSupplyCrateItemSets>& ItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "APrimalStructureItemContainer_SupplyCrate.ItemSetsOverride"); }
    TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >& AdditionalItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_SupplyCrate.AdditionalItemSets"); }
    TSubclassOf<UPrimalSupplyCrateItemSets>& AdditionalItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "APrimalStructureItemContainer_SupplyCrate.AdditionalItemSetsOverride"); }
    int& RequiredLevelToAccessField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_SupplyCrate.RequiredLevelToAccess"); }
    int& MaxLevelToAccessField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_SupplyCrate.MaxLevelToAccess"); }
    float& InitialTimeToLoseHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.InitialTimeToLoseHealth"); }
    float& IntervalTimeToLoseHealthField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.IntervalTimeToLoseHealth"); }
    float& IntervalPercentHealthToLoseField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.IntervalPercentHealthToLose"); }
    UE::Math::TVector<double>& HUDWorldOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.HUDWorldOffset"); }
    TWeakObjectPtr<ASupplyCrateSpawningVolume>& LinkedToCrateSpawnVolumeField() { return *GetNativePointerField<TWeakObjectPtr<ASupplyCrateSpawningVolume>*>(this, "APrimalStructureItemContainer_SupplyCrate.LinkedToCrateSpawnVolume"); }
    TArray<TWeakObjectPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& LinkedNPCsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_SupplyCrate.LinkedNPCs"); }
    UE::Math::TVector<double>& LastMatineeUpdatedActorLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.LastMatineeUpdatedActorLocation"); }
    UE::Math::TVector<double>& SpawnInInDamageCollisionBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.SpawnInInDamageCollisionBoxExtent"); }
    float& CrateMovementDurationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateMovementDuration"); }
    //TObjectPtr<UCurveVector>& CrateLocationCurveField() { return *GetNativePointerField<TObjectPtr<UCurveVector>*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateLocationCurve"); }
    //TObjectPtr<UCurveVector>& CrateRotationCurveField() { return *GetNativePointerField<TObjectPtr<UCurveVector>*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateRotationCurve"); }
    UE::Math::TVector2<double>& ServerCrateMovementUpdateRateMinMaxField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.ServerCrateMovementUpdateRateMinMax"); }
    UE::Math::TVector2<double>& ClientCrateMovementUpdateRateMinMaxField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.ClientCrateMovementUpdateRateMinMax"); }
    TObjectPtr<UMaterialInterface>& InvisibleMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "APrimalStructureItemContainer_SupplyCrate.InvisibleMaterial"); }
    FLinearColor& CrateColorParameterField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateColorParameter"); }
    //TObjectPtr<UCurveFloat>& CrateDissolveCurveField() { return *GetNativePointerField<TObjectPtr<UCurveFloat>*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateDissolveCurve"); }
    TSubclassOf<APrimalEmitterSpawnable>& CrateSpawnInLocationEffectField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateSpawnInLocationEffect"); }
    APrimalEmitterSpawnable*& CrateSpawnInLocationEffectRefField() { return *GetNativePointerField<APrimalEmitterSpawnable**>(this, "APrimalStructureItemContainer_SupplyCrate.CrateSpawnInLocationEffectRef"); }
    UMeshComponent*& RenderedCrateMeshComponentField() { return *GetNativePointerField<UMeshComponent**>(this, "APrimalStructureItemContainer_SupplyCrate.RenderedCrateMeshComponent"); }
    UE::Math::TVector<double>& FinalCrateLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.FinalCrateLocation"); }
    UE::Math::TRotator<double>& FinalCrateRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.FinalCrateRotation"); }
    UE::Math::TVector<double>& CurrentCrateLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateLocation"); }
    UE::Math::TRotator<double>& CurrentCrateRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateRotation"); }
    UE::Math::TVector<double>& CurrentCrateRelLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateRelLocation"); }
    long double& StartedCrateMovementTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_SupplyCrate.StartedCrateMovementTime"); }
    long double& NextCrateMovementUpdateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_SupplyCrate.NextCrateMovementUpdateTime"); }
    float& CurrentCrateCurveTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentCrateCurveTime"); }
    float& CrateStartHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateStartHeight"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OriginalMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_SupplyCrate.OriginalMaterials"); }
    long double& NextCheckHideSupplyCratesTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_SupplyCrate.NextCheckHideSupplyCratesTime"); }
    UPrimalWindSourceComponent*& WindSourceComponentRefField() { return *GetNativePointerField<UPrimalWindSourceComponent**>(this, "APrimalStructureItemContainer_SupplyCrate.WindSourceComponentRef"); }
    float& CurrentFadeOutTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_SupplyCrate.CurrentFadeOutTime"); }
    TObjectPtr<UTexture2D>& SurvivorLevelUpIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_SupplyCrate.SurvivorLevelUpIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bGeneratedCrateItems() { return { this, "APrimalStructureItemContainer_SupplyCrate.bGeneratedCrateItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsBonusCrate() { return { this, "APrimalStructureItemContainer_SupplyCrate.bIsBonusCrate" }; }
    BitFieldValue<bool, unsigned __int32> bIsQuestCrate() { return { this, "APrimalStructureItemContainer_SupplyCrate.bIsQuestCrate" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnCrateOnTopOfStructures() { return { this, "APrimalStructureItemContainer_SupplyCrate.bSpawnCrateOnTopOfStructures" }; }
    BitFieldValue<bool, unsigned __int32> bAppliedBuff() { return { this, "APrimalStructureItemContainer_SupplyCrate.bAppliedBuff" }; }
    BitFieldValue<bool, unsigned __int32> bEnableHideSupplyCratesCheck() { return { this, "APrimalStructureItemContainer_SupplyCrate.bEnableHideSupplyCratesCheck" }; }
    BitFieldValue<bool, unsigned __int32> bFinishedCrateMovement() { return { this, "APrimalStructureItemContainer_SupplyCrate.bFinishedCrateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bWantsOriginalMats() { return { this, "APrimalStructureItemContainer_SupplyCrate.bWantsOriginalMats" }; }
    BitFieldValue<bool, unsigned __int32> bIsCrateRendered() { return { this, "APrimalStructureItemContainer_SupplyCrate.bIsCrateRendered" }; }
    BitFieldValue<bool, unsigned __int32> bSupplyCrateHidden() { return { this, "APrimalStructureItemContainer_SupplyCrate.bSupplyCrateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWindSourceComponentOnLand() { return { this, "APrimalStructureItemContainer_SupplyCrate.bDestroyWindSourceComponentOnLand" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_SupplyCrate"); }
    void OnRep_FinishedCrateMovement() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement()"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureItemContainer_SupplyCrate();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.BeginPlay()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureItemContainer_SupplyCrate.Tick(float)", DeltaSeconds); }
    void LoseHealth() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.LoseHealth()"); }
    void StartLosingHealth() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.StartLosingHealth()"); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer_SupplyCrate.CanOpen(APlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureItemContainer_SupplyCrate.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void GenerateCrateItems() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.GenerateCrateItems()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_SupplyCrate.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_SupplyCrate.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.Destroyed()"); }
    void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_SupplyCrate.SetContainerActive(bool)", bNewActive); }
    void OnRep_FinishedCrateMovement_Implementation() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement_Implementation()"); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureItemContainer_SupplyCrate.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void TickFadeOut() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.TickFadeOut()"); }

	bool& bSetsRandomWithoutReplacementField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_SupplyCrate.bSetsRandomWithoutReplacement"); }
	bool& bIsUnderWaterCrateField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_SupplyCrate.bIsUnderWaterCrate"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_SupplyCrate"); }

	ECrateMovementMode& CrateMovementModeField() { return *GetNativePointerField<ECrateMovementMode*>(this, "APrimalStructureItemContainer_SupplyCrate.CrateMovementMode"); }
	BitFieldValue<bool, unsigned char> bInventoryAccessOnlyActivated() { return { this, "APrimalStructureItemContainer_SupplyCrate.bInventoryAccessOnlyActivated"}; }
	BitFieldValue<bool, unsigned char> bDontGenerateCrateItems() { return { this, "APrimalStructureItemContainer_SupplyCrate.bDontGenerateCrateItems"}; }
	BitFieldValue<bool, unsigned char> bAlwaysAllowTributeInventory() { return { this, "APrimalStructureItemContainer_SupplyCrate.bAlwaysAllowTributeInventory"}; }
	bool IsSupplyCrate() { return NativeCall<bool>(this, "APrimalStructureItemContainer_SupplyCrate.IsSupplyCrate()"); }
	bool AllowGrappling_Implementation() { return NativeCall<bool>(this, "APrimalStructureItemContainer_SupplyCrate.AllowGrappling_Implementation()"); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_SupplyCrate.GetInterpolatedLocation()", result); }
	void SetAppliedBuff(bool bSet) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_SupplyCrate.SetAppliedBuff(bool)", bSet); }
};