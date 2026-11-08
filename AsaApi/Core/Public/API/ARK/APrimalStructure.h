#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalStructure : APrimalTargetableActor
{
    // Fields

    
    
    
    
    
    
    int& StructureSnapTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureSnapTypeFlags"); }
    UE::Math::TIntVector3<int>& ExtraStructureSnapTypeFlagsField() { return *GetNativePointerField<UE::Math::TIntVector3<int>*>(this, "APrimalStructure.ExtraStructureSnapTypeFlags"); }
    TArray<FStructureVariant, TSizedDefaultAllocator<32> >& VariantsField() { return *GetNativePointerField<TArray<FStructureVariant, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.Variants"); }
    FName& CurrentVariantTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.CurrentVariantTag"); }
    
    
    
    
    
    
    float& PlacementYawOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementYawOffsetIncrement"); }
    UE::Math::TVector<double>& PlacementHitLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementHitLocOffset"); }
    UE::Math::TVector<double>& PlacementEncroachmentCheckOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementEncroachmentCheckOffset"); }
    UE::Math::TVector<double>& PlacementEncroachmentBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementEncroachmentBoxExtent"); }
    UE::Math::TVector<double>& PlacementTraceScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementTraceScale"); }
    UE::Math::TVector<double>& SnapAlternatePlacementTraceScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.SnapAlternatePlacementTraceScale"); }
    
    
    
    
    float& RepairAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairAmountRemaining"); }
    
    float& PlacementFloorCheckZExtentUpField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtentUp"); }
    
    float& DecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriod"); }
    
    
    UStaticMeshComponent*& MyStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructure.MyStaticMesh"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructure.CosmeticVariantStaticMesh"); }
    USceneComponent*& MyRootTransformField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructure.MyRootTransform"); }
    
    
    TArray<FPrimalStructureSnapPoint, TSizedDefaultAllocator<32> >& SnapPointsField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPoint, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.SnapPoints"); }
    
    FieldArray<unsigned __int8, 6> AllowStructureColorSetsField() { return { this, "APrimalStructure.AllowStructureColorSets" }; }
    
    
    
    
    
    
    float& PlacementMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxRange"); }
    
    float& SnapOverlapCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapOverlapCheckRadius"); }
    
    
    float& PlacementFloorCheckZExtentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtent"); }
    float& LastHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHealthPercentage"); }
    
    float& DemolishGiveItemCraftingResourcePercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage"); }
    
    
    
    
    
    
    UE::Math::TRotator<double>& PreviewCameraRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.PreviewCameraRotation"); }
    
    
    
    
    float& ReturnDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageAmount"); }
    
    
    
    float& ReturnDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageImpulse"); }
    
    
    
    int& OwningPlayerIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.OwningPlayerID"); }
    FString& OwningPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwningPlayerName"); }
    long double& LastInAllyRangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastInAllyRangeTime"); }
    long double& PickupAllowedBeforeNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.PickupAllowedBeforeNetworkTime"); }
    float& DecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriodMultiplier"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructure.PreviewSnapOverride"); }
    TWeakObjectPtr<APrimalDinoCharacter>& SaddleDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalStructure.SaddleDino"); }
    TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >& LatchedDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.LatchedDinos"); }
    UMaterialInterface*& PreviewMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.PreviewMaterial"); }
    UMaterialInterface*& PreviewMaterialMaskedField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.PreviewMaterialMasked"); }
    TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >& PreviewMaterialInstancesField() { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreviewMaterialInstances"); }
    FName& PreviewMaterialColorParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PreviewMaterialColorParamName"); }
    TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& LinkedStructuresField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.LinkedStructures"); }
    TArray<unsigned int, TSizedDefaultAllocator<32> >& LinkedStructuresIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.LinkedStructuresID"); }
    TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& StructuresPlacedOnFloorField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.StructuresPlacedOnFloor"); }
    
    
    
    
    APrimalStructure*& PlacedOnFloorStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PlacedOnFloorStructure"); }
    APrimalStructure*& PrimarySnappedStructureChildField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureParent"); }
    FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwnerName"); }
    FieldArray<__int16, 6> StructureColorsField() { return { this, "APrimalStructure.StructureColors" }; }
    APawn*& AttachedToField() { return *GetNativePointerField<APawn**>(this, "APrimalStructure.AttachedTo"); }
    unsigned int& StructureIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.StructureID"); }
    unsigned int& AttachedToDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.AttachedToDinoID1"); }
    
    
    unsigned int& TaggedIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndex"); }
    unsigned int& TaggedIndexTwoField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndexTwo"); }
    unsigned int& ProcessTreeTagField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.ProcessTreeTag"); }
    ABiomeZoneVolume*& MyBiomeZoneVolumeField() { return *GetNativePointerField<ABiomeZoneVolume**>(this, "APrimalStructure.MyBiomeZoneVolume"); }
    FTimerHandle& RepairCheckTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructure.RepairCheckTimerHandle"); }
    long double& LastStructureStasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastStructureStasisTime"); }
    long double& LastColorizationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastColorizationTime"); }
    
    
    
    TSubclassOf<APrimalEmitterSpawnable>& DestructionEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructure.DestructionEmitter"); }
    
    
    TSubclassOf<UPrimalItem>& PickupGivesItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.PickupGivesItem"); }
    
    
    
    float& LastFadeOpacityField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastFadeOpacity"); }
    long double& LastFailedPinTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastFailedPinTime"); }
    TWeakObjectPtr<UMeshComponent>& PrimaryMeshComponentField() { return *GetNativePointerField<TWeakObjectPtr<UMeshComponent>*>(this, "APrimalStructure.PrimaryMeshComponent"); }
    UStructurePaintingComponent*& PaintingComponentField() { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructure.PaintingComponent"); }
    
    UE::Math::TVector<double>& FloatingHudLocTextOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.FloatingHudLocTextOffset"); }
    
    long double& LastBumpedDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastBumpedDamageTime"); }
    
    
    
    
    
    TMap<FName, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TVector<double>, 0> >& AttachToStaticMeshSocketMinScaleOverridesField() { return *GetNativePointerField<TMap<FName, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TVector<double>, 0> >*>(this, "APrimalStructure.AttachToStaticMeshSocketMinScaleOverrides"); }
    
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructure.MyStructureHarvestingComponent"); }
    TSharedPtr<FAttachedInstancedHarvestingElement>& MyStructureHarvestingElementField() { return *GetNativePointerField<TSharedPtr<FAttachedInstancedHarvestingElement>*>(this, "APrimalStructure.MyStructureHarvestingElement"); }
    TSubclassOf<AActor>& ItemsUseAlternateActorClassAttachmentField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalStructure.ItemsUseAlternateActorClassAttachment"); }
    
    unsigned __int8& TribeRankHUDYOffsetField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructure.TribeRankHUDYOffset"); }
    
    
    
    
    
    UE::Math::TVector<double>& GroundEncroachmentCheckLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.GroundEncroachmentCheckLocationOffset"); }
    
    int& SavedStructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.SavedStructureMinAllowedVersion"); }
    
    
    
    int& BedIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.BedID"); }
    
    
    
    
    USkeletalMeshComponent*& MySKCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructure.MySKComp"); }
    TArray<USceneComponent*, TSizedDefaultAllocator<32> >& OverrideTargetComponentsField() { return *GetNativePointerField<TArray<USceneComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.OverrideTargetComponents"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& OverrideApproachRadiusField();
    AMissionType*& OwnerMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalStructure.OwnerMission"); }
    FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructure.PlaceUsingItemID"); }
    
    
    FDelegateHandle& OnClientBlockedUserIdsRecievedDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "APrimalStructure.OnClientBlockedUserIdsRecievedDelegateHandle"); }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bHasBeenAttachedToDinoField();

    // Bitfields

    
    
    
    BitFieldValue<bool, unsigned __int32> bIsFlipped() { return { this, "APrimalStructure.bIsFlipped" }; }
    
    BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "APrimalStructure.bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedMaterials() { return { this, "APrimalStructure.bInitializedMaterials" }; }
    
    
    BitFieldValue<bool, unsigned __int32> bIsBed() { return { this, "APrimalStructure.bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsTeleporter() { return { this, "APrimalStructure.bIsTeleporter" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorframe() { return { this, "APrimalStructure.bIsDoorframe" }; }
    
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis() { return { this, "APrimalStructure.bUseBPPreventStasis" }; }
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished() { return { this, "APrimalStructure.bIgnoreDyingWhenDemolished" }; }
    
    
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation() { return { this, "APrimalStructure.UseBPOverrideTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance() { return { this, "APrimalStructure.bOverrideFoundationSupportDistance" }; }
    
    
    
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects() { return { this, "APrimalStructure.bDidSpawnEffects" }; }
    
    BitFieldValue<bool, unsigned __int32> bPendingRemoval() { return { this, "APrimalStructure.bPendingRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bWasAttachedToPawn() { return { this, "APrimalStructure.bWasAttachedToPawn" }; }
    
    
    BitFieldValue<bool, unsigned __int32> bIsBeingReplaced() { return { this, "APrimalStructure.bIsBeingReplaced" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrimitiveColor() { return { this, "APrimalStructure.bSetPrimitiveColor" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrimitiveHealth() { return { this, "APrimalStructure.bSetPrimitiveHealth" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacingPlayerStructure() { return { this, "APrimalStructure.bIsPlacingPlayerStructure" }; }
    
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets() { return { this, "APrimalStructure.bCenterOffscreenFloatingHUDWidgets" }; }
    
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle() { return { this, "APrimalStructure.bAllowAttachToSaddle" }; }
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bIsFoundation() { return { this, "APrimalStructure.bIsFoundation" }; }
    
    BitFieldValue<bool, unsigned __int32> bIsFloor() { return { this, "APrimalStructure.bIsFloor" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup() { return { this, "APrimalStructure.bForceFloorCollisionGroup" }; }
    
    
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired() { return { this, "APrimalStructure.bCanBeRepaired" }; }
    
    BitFieldValue<bool, unsigned __int32> bPreventStasis() { return { this, "APrimalStructure.bPreventStasis" }; }
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped() { return { this, "APrimalStructure.bWasPlacementSnapped" }; }
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bDemolished() { return { this, "APrimalStructure.bDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bSetStaticMobility() { return { this, "APrimalStructure.bSetStaticMobility" }; }
    BitFieldValue<bool, unsigned __int32> bIsPvE() { return { this, "APrimalStructure.bIsPvE" }; }
    BitFieldValue<bool, unsigned __int32> bBeginPlayIgnoreApplyScale() { return { this, "APrimalStructure.bBeginPlayIgnoreApplyScale" }; }
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bAllowSnapRotation() { return { this, "APrimalStructure.bAllowSnapRotation" }; }
    
    
    
    BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation() { return { this, "APrimalStructure.bPlacementChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementIgnoreChooseRotation() { return { this, "APrimalStructure.bPlacementIgnoreChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementAdjustHeight() { return { this, "APrimalStructure.bPlacementAdjustHeight" }; }
    
    
    
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bDebug() { return { this, "APrimalStructure.bDebug" }; }
    
    BitFieldValue<bool, unsigned __int32> bUsingStructureColors() { return { this, "APrimalStructure.bUsingStructureColors" }; }
    
    BitFieldValue<bool, unsigned __int32> bCarriedByDino() { return { this, "APrimalStructure.bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement() { return { this, "APrimalStructure.bAllowPickingUpStructureAfterPlacement" }; }
    
    
    BitFieldValue<bool, unsigned __int32> bUsesHealth() { return { this, "APrimalStructure.bUsesHealth" }; }
    
    
    BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround() { return { this, "APrimalStructure.bForceSnappedStructureToGround" }; }
    
    BitFieldValue<bool, unsigned __int32> bStationaryStructure() { return { this, "APrimalStructure.bStationaryStructure" }; }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime() { return { this, "APrimalStructure.bHasResetDecayTime" }; }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bPreviewApplyColorToChildComponents() { return { this, "APrimalStructure.bPreviewApplyColorToChildComponents" }; }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm() { return { this, "APrimalStructure.bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bNoCollision() { return { this, "APrimalStructure.bNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials() { return { this, "APrimalStructure.bCreatedDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewStructure() { return { this, "APrimalStructure.bIsPreviewStructure" }; }
    
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy() { return { this, "APrimalStructure.bDemolishJustDestroy" }; }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    BitFieldValue<bool, unsigned __int32> bIsDrawingHUDPickupTimer() { return { this, "APrimalStructure.bIsDrawingHUDPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTargeting() { return { this, "APrimalStructure.bIgnoredByTargeting" }; }
    
    
    BitFieldValue<bool, unsigned __int32> bWasPickedUp() { return { this, "APrimalStructure.bWasPickedUp" }; }
    BitFieldValue<bool, unsigned __int32> bCanAttachToExosuit() { return { this, "APrimalStructure.bCanAttachToExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeStoredByExosuit() { return { this, "APrimalStructure.bCanBeStoredByExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bStructureIgnoreDying() { return { this, "APrimalStructure.bStructureIgnoreDying" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor() { return { this, "APrimalStructure.bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor() { return { this, "APrimalStructure.bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventCharacterBasing() { return { this, "APrimalStructure.bUseBPPreventCharacterBasing" }; }
    
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters() { return { this, "APrimalStructure.bDontSetDamageParameters" }; }
    
    
    
    BitFieldValue<bool, unsigned __int32> bDidHideGrass() { return { this, "APrimalStructure.bDidHideGrass" }; }
    

    // Functions

    bool BPAllowSnappingWith(APrimalStructure* OtherStructure, APlayerController* ForPC) { return NativeCall<bool, APrimalStructure*, APlayerController*>(this, "APrimalStructure.BPAllowSnappingWith(APrimalStructure*,APlayerController*)", OtherStructure, ForPC); }
    bool BPAllowSwitchToVariant(FName VariantTag) { return NativeCall<bool, FName>(this, "APrimalStructure.BPAllowSwitchToVariant(FName)", VariantTag); }
    void BPApplyCustomDurabilityOnPickup(UPrimalItem* pickedup) { NativeCall<void, UPrimalItem*>(this, "APrimalStructure.BPApplyCustomDurabilityOnPickup(UPrimalItem*)", pickedup); }
    void BPDefaultProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool checkedBox) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructure.BPDefaultProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, checkedBox); }
    int BPIsAllowedToBuild(const FPlacementData* OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, const FPlacementData*, int>(this, "APrimalStructure.BPIsAllowedToBuild(FPlacementData&,int)", OutPlacementData, CurrentAllowedReason); }
    int BPIsAllowedToBuildEx(const FPlacementData* OutPlacementData, int CurrentAllowedReason, APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation) { return NativeCall<int, const FPlacementData*, int, APlayerController*, bool, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx(FPlacementData&,int,APlayerController*,bool,bool)", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement, bChoosingRotation); }
    void BPNotifyAmmoBoxReloadedStructure(APrimalStructure* ReloadedStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.BPNotifyAmmoBoxReloadedStructure(APrimalStructure*)", ReloadedStructure); }
    void BPOnStructurePickup(APlayerController* PlayerController, TSubclassOf<UPrimalItem> ItemType, UPrimalItem* NewlyPickedUpItem, bool bIsQuickPickup) { NativeCall<void, APlayerController*, TSubclassOf<UPrimalItem>, UPrimalItem*, bool>(this, "APrimalStructure.BPOnStructurePickup(APlayerController*,TSubclassOf<UPrimalItem>,UPrimalItem*,bool)", PlayerController, ItemType, NewlyPickedUpItem, bIsQuickPickup); }
    bool BPOverrideAllowStructureAccess(AShooterPlayerController* ForPC, bool bIsAccessAllowed, bool bForInventoryOnly) { return NativeCall<bool, AShooterPlayerController*, bool, bool>(this, "APrimalStructure.BPOverrideAllowStructureAccess(AShooterPlayerController*,bool,bool)", ForPC, bIsAccessAllowed, bForInventoryOnly); }
    bool BPOverrideDemolish(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.BPOverrideDemolish(AShooterPlayerController*)", ForPC); }
    bool BPPreventPlacingStructureOntoMe(APlayerController* PC, APrimalStructure* ForNewStructure, const FHitResult* ForHitResult) { return NativeCall<bool, APlayerController*, APrimalStructure*, const FHitResult*>(this, "APrimalStructure.BPPreventPlacingStructureOntoMe(APlayerController*,APrimalStructure*,FHitResult&)", PC, ForNewStructure, ForHitResult); }
    bool BPPreventSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime, APrimalStructure* FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructure.BPPreventSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)", PC, bCheckCooldownTime, FromStructure); }
    void BPRefreshedStructureColors() { NativeCall<void>(this, "APrimalStructure.BPRefreshedStructureColors()"); }
    bool BPUseCountStructureInRange() { return NativeCall<bool>(this, "APrimalStructure.BPUseCountStructureInRange()"); }
    void ClearCustomColors() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors()"); }
    void ClientUpdateLinkedStructures(const TArray<unsigned int, TSizedDefaultAllocator<32> >* NewLinkedStructures) { NativeCall<void, const TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ClientUpdateLinkedStructures(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", NewLinkedStructures); }
    int GetDefaultDestinationID() { return NativeCall<int>(this, "APrimalStructure.GetDefaultDestinationID()"); }
    UStaticMeshComponent* GetPaintingStaticMesh() { return NativeCall<UStaticMeshComponent*>(this, "APrimalStructure.GetPaintingStaticMesh()"); }
    bool IsValidForSnappingFrom(APrimalStructure* OtherStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.IsValidForSnappingFrom(APrimalStructure*)", OtherStructure); }
    bool IsValidSnapPointFrom(APrimalStructure* ParentStructure, int MySnapPointFromIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointFrom(APrimalStructure*,int,int)", ParentStructure, MySnapPointFromIndex); }
    bool IsValidSnapPointTo(APrimalStructure* ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointTo(APrimalStructure*,int,int)", ChildStructure, MySnapPointToIndex); }
    void MultiSetPickupAllowedBeforeNetworkTime(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime(double)", NewTime); }
    void NetUpdateTeamAndOwnerName(int NewTeam, const FString* NewOwnerName) { NativeCall<void, int, const FString*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName(int,FString&)", NewTeam, NewOwnerName); }
    void SetDefaultDestinationStructure(APrimalStructure* DestinationStructure, AShooterPlayerController* ForPC) { NativeCall<void, APrimalStructure*, AShooterPlayerController*>(this, "APrimalStructure.SetDefaultDestinationStructure(APrimalStructure*,AShooterPlayerController*)", DestinationStructure, ForPC); }
    void SetEnabledPrimarySnappedStructureParent(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent(bool)", bEnabled); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructure();
    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructure"); }
    static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructure"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool FillVolumetricDispatchesForFluidInteraction(bool bDebugb, bool bTriggerEvents, UActorComponent* interactionComponent, AActor* dispatcher) { return NativeCall<bool, bool, bool, UActorComponent*, AActor*>(this, "APrimalStructure.FillVolumetricDispatchesForFluidInteraction(bool,bool,UActorComponent*,AActor*)", bDebugb, bTriggerEvents, interactionComponent, dispatcher); }
    bool FillVolumetricDispatchesForFoliageInteraction(bool bDebugb, UActorComponent* interactionComponent) { return NativeCall<bool, bool, UActorComponent*>(this, "APrimalStructure.FillVolumetricDispatchesForFoliageInteraction(bool,UActorComponent*)", bDebugb, interactionComponent); }
    int GetHitPawnCollisionGroup() { return NativeCall<int>(this, "APrimalStructure.GetHitPawnCollisionGroup()"); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructure.BeginPlay()"); }
    void DestroyByMeshing() { NativeCall<void>(this, "APrimalStructure.DestroyByMeshing()"); }
    void SetLinkedIDs() { NativeCall<void>(this, "APrimalStructure.SetLinkedIDs()"); }
    void ApplyLinkedIDs(bool bRelinkParents) { NativeCall<void, bool>(this, "APrimalStructure.ApplyLinkedIDs(bool)", bRelinkParents); }
    static APrimalStructure* GetFromID(UWorld* World, unsigned int TheStructureID) { return NativeCall<APrimalStructure*, UWorld*, unsigned int>(nullptr, "APrimalStructure.GetFromID(UWorld*,unsignedint)", World, TheStructureID); }
    bool IsReadyForDynamicBasing() { return NativeCall<bool>(this, "APrimalStructure.IsReadyForDynamicBasing()"); }
    void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalStructure.OnRep_AttachmentReplication()"); }
    void SetDinoSaddleAttachment(APrimalDinoCharacter* myDino, FName BoneName, UE::Math::TVector<double>* RelLoc, UE::Math::TRotator<double>* RelRot, bool bMaintainWorldPosition) { NativeCall<void, APrimalDinoCharacter*, FName, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool>(this, "APrimalStructure.SetDinoSaddleAttachment(APrimalDinoCharacter*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,bool)", myDino, BoneName, RelLoc, RelRot, bMaintainWorldPosition); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructure.PostSpawnInitialize()"); }
    //void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructure.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.SetStructureCollisionChannels(bool)"); }
    void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>(this, "APrimalStructure.ApplyScale(bool)", bOnlyInitPhysics); }
    void PostSpawnInitialize(const UE::Math::TTransform<double>* SpawnTransform, AActor* InOwner, APawn* InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay, bool bPrimalDeferConstruction, ESpawnActorScaleMethod TransformScaleMethod) { NativeCall<void, const UE::Math::TTransform<double>*, AActor*, APawn*, bool, bool, bool, bool, bool, ESpawnActorScaleMethod>(this, "APrimalStructure.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool,bool,bool,ESpawnActorScaleMethod)", SpawnTransform, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay, bPrimalDeferConstruction, TransformScaleMethod); }
    bool UseDynamicMobility() { return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility()"); }
    void SetStaticMobility() { NativeCall<void>(this, "APrimalStructure.SetStaticMobility()"); }
    void SetDynamicMobility() { NativeCall<void>(this, "APrimalStructure.SetDynamicMobility()"); }
    void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview()"); }
    bool TickPlacingStructure(APrimalStructurePlacer* PlacerActor, float DeltaTime) { return NativeCall<bool, APrimalStructurePlacer*, float>(this, "APrimalStructure.TickPlacingStructure(APrimalStructurePlacer*,float)", PlacerActor, DeltaTime); }
    FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetDebugInfoString()", result); }
    int IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double> AtLocation, UE::Math::TRotator<double> AtRotation, FPlacementData* OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double> PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData, APawn* BuildingPawnOverride) { return NativeCall<int, APlayerController*, UE::Math::TVector<double>, UE::Math::TRotator<double>, FPlacementData*, bool, UE::Math::TRotator<double>, bool, bool, APawn*>(this, "APrimalStructure.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData, BuildingPawnOverride); }
    static char IsPointNearSupplyCrateSpawn(UWorld* theWorld, UE::Math::TVector<double>* AtPoint) { return NativeCall<char, UWorld*, UE::Math::TVector<double>*>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn(UWorld*,UE::Math::TVector<double>)", theWorld, AtPoint); }
    TSubclassOf<APrimalStructure>* GetBedFilterClass_Implementation(TSubclassOf<APrimalStructure>* result) { return NativeCall<TSubclassOf<APrimalStructure> *, TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.GetBedFilterClass_Implementation()", result); }
    FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructure.GetSpawnPointInfo()", result); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PostInitializeComponents()"); }
    bool AllowSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime, APrimalStructure* FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructure.AllowSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)", PC, bCheckCooldownTime, FromStructure); }
    void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, const FString* NewOriginalOwnerName) { NativeCall<void, int, const FString*>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation(int,FString&)", NewOriginalOwnerID, NewOriginalOwnerName); }
    void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, const FString* PlacementOwningPlayerName, APrimalStructure* ForcePrimaryParent) { NativeCall<void, int, int, const FString*, APrimalStructure*>(this, "APrimalStructure.NonPlayerFinalStructurePlacement(int,int,FString&,APrimalStructure*)", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent); }
    char FinalStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bFlipped, FPlacementData* PlacementData) { return NativeCall<char, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APawn*, FName, bool, FPlacementData*>(this, "APrimalStructure.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped, PlacementData); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructure.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    bool GetSnapToLocation(UE::Math::TVector<double>& AtLoc, UE::Math::TRotator<double>& AtRotation, FPlacementData& OutPlacementData, APrimalStructure** OutParentStructure, TArray<FAttachmentPoint, TSizedDefaultAllocator<32> >* OutOtherAttachmentPoints, int* OutSnapToIndex, APlayerController* PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, FPlacementData&, APrimalStructure**, TArray<FAttachmentPoint, TSizedDefaultAllocator<32> >*, int*, APlayerController*, bool, int>(this, "APrimalStructure.GetSnapToLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FPlacementData&,APrimalStructure**,TArray<FAttachmentPoint,TSizedDefaultAllocator<32>>*,int*,APlayerController*,bool,int)", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutOtherAttachmentPoints, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle); }
    int IsValidStructureReplacement(APrimalStructure* OtherStructure, bool IsPlacingAsGhost) { return NativeCall<int, APrimalStructure*, bool>(this, "APrimalStructure.IsValidStructureReplacement(APrimalStructure*,bool)", OtherStructure, IsPlacingAsGhost); }
    void GetSnapToParentStructures(FPlacementData& OutPlacementData, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& SnapToParentStructures, APlayerController* PC) { NativeCall<void, FPlacementData&, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&, APlayerController*>(this, "APrimalStructure.GetSnapToParentStructures(FPlacementData&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,APlayerController*)", OutPlacementData, SnapToParentStructures, PC); }
    char IsValidSnapParent(APrimalStructure* OtherStructure, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation) { return NativeCall<char, APrimalStructure*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructure.IsValidSnapParent(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotator<double>)", OtherStructure, AtLocation, AtRotation); }
    bool GetPlacingGroundLocation(AActor** OutHitActor, FPlacementData* OutPlacementData, APlayerController* PC, bool bFinalPlacement, int SnapPointCycle, UPrimitiveComponent** OutComponent, bool bUseOriginalOutPlacementData) { return NativeCall<bool, AActor**, FPlacementData*, APlayerController*, bool, int, UPrimitiveComponent**, bool>(this, "APrimalStructure.GetPlacingGroundLocation(AActor*&,FPlacementData&,APlayerController*,bool,int,UPrimitiveComponent**,bool)", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle, OutComponent, bUseOriginalOutPlacementData); }
    bool CheckForWallParent(APlayerController* PC, UE::Math::TVector<double>* PlacementLoc, UE::Math::TRotator<double>* PlacementRot, FHitResult& OutHit, bool IsPlacingGhost) { if (!PlacementLoc) throw std::invalid_argument("Null native value parameter"); if (!PlacementRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, FHitResult &, bool>(this, "APrimalStructure.CheckForWallParent(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResult&,bool)", PC, *PlacementLoc, *PlacementRot, OutHit, IsPlacingGhost); }
    FHitResult* CheckForAnyGround(FHitResult* result, APlayerController* PC, UE::Math::TVector<double>* PlacementLoc, bool& OutHit, const FPlacementData& PlacementData, bool IgnoreDownTrace) { return NativeCall<FHitResult*, FHitResult*, APlayerController*, UE::Math::TVector<double>*, bool&, const FPlacementData&, bool>(this, "APrimalStructure.CheckForAnyGround(APlayerController*,UE::Math::TVector<double>,bool&,FPlacementData&,bool)", result, PC, PlacementLoc, OutHit, PlacementData, IgnoreDownTrace); }
    bool ClampBuildLocation(UE::Math::TVector<double>* FromLocation, AActor** OutHitActor, FPlacementData* OutPlacementData, bool bDontAdjustForMaxRange, APlayerController* PC, bool bFinalPlacement) { return NativeCall<bool, UE::Math::TVector<double>*, AActor**, FPlacementData*, bool, APlayerController*, bool>(this, "APrimalStructure.ClampBuildLocation(UE::Math::TVector<double>,AActor*&,FPlacementData&,bool,APlayerController*,bool)", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC, bFinalPlacement); }
    bool CheckNotEncroaching(APlayerController* PC, UE::Math::TVector<double>* PlacementLocation, UE::Math::TRotator<double>* PlacementRotation, AActor* DinoCharacter, APrimalStructure* SnappedToParentStructure, APrimalStructure* ReplacesStructure, bool bUseAlternatePlacementTraceScale, bool bFirstOnly, bool bIgnoreParent, bool bIsPlacingGhost) { if (!PlacementLocation) throw std::invalid_argument("Null native value parameter"); if (!PlacementRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, AActor *, APrimalStructure *, APrimalStructure *, bool, bool, bool, bool>(this, "APrimalStructure.CheckNotEncroaching(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,APrimalStructure*,APrimalStructure*,bool,bool,bool,bool)", PC, *PlacementLocation, *PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale, bFirstOnly, bIgnoreParent, bIsPlacingGhost); }
    bool IsValidEncroachment(const TArray<FOverlapResult, TSizedDefaultAllocator<32> >& Overlaps, APrimalStructure* ReplacingStructure, APrimalStructure* ParentStructure, bool bIgnoreParentStructure, bool bIsPlacingGhost) { return NativeCall<bool, const TArray<FOverlapResult, TSizedDefaultAllocator<32> >&, APrimalStructure*, APrimalStructure*, bool, bool>(this, "APrimalStructure.IsValidEncroachment(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,APrimalStructure*,APrimalStructure*,bool,bool)", Overlaps, ReplacingStructure, ParentStructure, bIgnoreParentStructure, bIsPlacingGhost); }
    bool IsValidEncroachment(AActor* OverlapActor, UPrimitiveComponent* OverlapComp, APrimalStructure* ReplacingStructure, APrimalStructure* ParentStructure, bool bIgnoreParentStructure, bool bIsPlacingGhost) { return NativeCall<bool, AActor*, UPrimitiveComponent*, APrimalStructure*, APrimalStructure*, bool, bool>(this, "APrimalStructure.IsValidEncroachment(AActor*,UPrimitiveComponent*,APrimalStructure*,APrimalStructure*,bool,bool)", OverlapActor, OverlapComp, ReplacingStructure, ParentStructure, bIgnoreParentStructure, bIsPlacingGhost); }
    int IsObstructedByTerrainOrWorldGeo(APlayerController* PC, UE::Math::TVector<double>* PlacementLocation, UE::Math::TRotator<double>* PlacementRotation, const FPlacementData& PlacementData, bool bUseAlternatePlacementTraceScale, bool bDoSimpleCheck, APawn* BuildingPawnOverride) { if (!PlacementLocation) throw std::invalid_argument("Null native value parameter"); if (!PlacementRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<int, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, const FPlacementData &, bool, bool, APawn *>(this, "APrimalStructure.IsObstructedByTerrainOrWorldGeo(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,bool,APawn*)", PC, *PlacementLocation, *PlacementRotation, PlacementData, bUseAlternatePlacementTraceScale, bDoSimpleCheck, BuildingPawnOverride); }
    APrimalStructure* GetNearbyFoundation(FPlacementData* PlacementData, APlayerController* ForPC) { return NativeCall<APrimalStructure*, FPlacementData*, APlayerController*>(this, "APrimalStructure.GetNearbyFoundation(FPlacementData&,APlayerController*)", PlacementData, ForPC); }
    void NetSpawnCoreStructureDeathActor_Implementation() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation()"); }
    float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructure.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructure.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructure.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void DestroyStructuresPlacedOnFloor() { NativeCall<void>(this, "APrimalStructure.DestroyStructuresPlacedOnFloor()"); }
    //TSoftObjectPtr<UGeometryCollection>* GetDestroyedMesh(TSoftObjectPtr<UGeometryCollection>* result) { return NativeCall<TSoftObjectPtr<UGeometryCollection> *, TSoftObjectPtr<UGeometryCollection>*>(this, "APrimalStructure.GetDestroyedMesh()", result); }
    //TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >* GetDestroyedMeshes(TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*, TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GetDestroyedMeshes()", result); }
    static void ProcessBulkCleanUpTreeKills() { NativeCall<void>(nullptr, "APrimalStructure.ProcessBulkCleanUpTreeKills()"); }
    static void ReprocessTree(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StartingStructures, AController* InstigatorController, AActor* DamageCauser, bool bPickup, bool bDemo) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, AController*, AActor*, bool, bool>(nullptr, "APrimalStructure.ReprocessTree(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AController*,AActor*,bool,bool)", StartingStructures, InstigatorController, DamageCauser, bPickup, bDemo); }
    static void FindFoundations(APrimalStructure* StartingStructure, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& FoundationDatas, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& NonFoundationDatas, bool& bContainsFoundationOverride) { NativeCall<void, APrimalStructure*, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&, bool&>(nullptr, "APrimalStructure.FindFoundations(APrimalStructure*,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,bool&)", StartingStructure, FoundationDatas, NonFoundationDatas, bContainsFoundationOverride); }
	static void FindFoundations(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& StartingStructures, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& FoundationDatas, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& NonFoundationDatas, bool& bContainsFoundationOverride) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&, bool&>(nullptr, "APrimalStructure.FindFoundations(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,bool&)", StartingStructures, FoundationDatas, NonFoundationDatas, bContainsFoundationOverride); }
    // Current counterpart already declared for: static void FindFoundations(APrimalStructure* StartingStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations);
    static void CullAgainstFoundations(TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& FoundationDatas, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& NonFoundationDatas) { NativeCall<void, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&>(nullptr, "APrimalStructure.CullAgainstFoundations(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&)", FoundationDatas, NonFoundationDatas); }
    // Current counterpart already declared for: static bool CullAgainstFoundations(APrimalStructure** StartingStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations);
    static void FlagConnectionsLessThan(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Structures, int Connections, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StructuresToDestroy) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, int, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.FlagConnectionsLessThan(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,int,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", Structures, Connections, StructuresToDestroy); }
    static void FlagReachable(TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& FoundationDatas) { NativeCall<void, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&>(nullptr, "APrimalStructure.FlagReachable(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&)", FoundationDatas); }
    static void FlagReachable(APrimalStructure* StartingStructure) { NativeCall<void, APrimalStructure*>(nullptr, "APrimalStructure.FlagReachable(APrimalStructure*)", StartingStructure); }
    static void CleanUpTree(TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >& StartingStructures, AController* InstigatorController, AActor* DamageCauser, bool bPickup, bool bDemo) { NativeCall<void, TMap<APrimalStructure*, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructure*, UE::Math::TVector<double>, 0> >&, AController*, AActor*, bool, bool>(nullptr, "APrimalStructure.CleanUpTree(TMap<APrimalStructure*,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<APrimalStructure*,UE::Math::TVector<double>,0>>&,AController*,AActor*,bool,bool)", StartingStructures, InstigatorController, DamageCauser, bPickup, bDemo); }
	static void CleanUpTree(APrimalStructure* StartingStructure, AController* InstigatorController, AActor* DamageCauser, unsigned int depth, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >& CollectedResources, bool bPickup, bool bDemo, bool bUseResourceMap) { NativeCall<void, APrimalStructure*, AController*, AActor*, unsigned int, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >&, bool, bool, bool>(nullptr, "APrimalStructure.CleanUpTree(APrimalStructure*,AController*,AActor*,unsignedint,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool,bool)", StartingStructure, InstigatorController, DamageCauser, depth, CollectedResources, bPickup, bDemo, bUseResourceMap); }
    //static void CleanUpTree(APrimalStructure* StartingStructure, AController* InstigatorController, AActor* DamageCauser, unsigned int depth, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >* CollectedResources, bool bPickup, bool bDemo, bool bUseResourceMap) { NativeCall<void, APrimalStructure*, AController*, AActor*, unsigned int, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >*, bool, bool, bool>(nullptr, "APrimalStructure.CleanUpTree(APrimalStructure*,AController*,AActor*,unsignedint,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool,bool)", StartingStructure, InstigatorController, DamageCauser, depth, CollectedResources, bPickup, bDemo, bUseResourceMap); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void DelayedCleanUpTree();
    void RemoveLinkedStructure(APrimalStructure* Structure, AController* InstigatorController, AActor* DamageCauser) { NativeCall<void, APrimalStructure*, AController*, AActor*>(this, "APrimalStructure.RemoveLinkedStructure(APrimalStructure*,AController*,AActor*)", Structure, InstigatorController, DamageCauser); }
    void ScreenDoorFadeAway(const FDamageEvent* DamageEvent, APawn* InstigatingPawn) { NativeCall<void, const FDamageEvent*, APawn*>(this, "APrimalStructure.ScreenDoorFadeAway(FDamageEvent&,APawn*)", DamageEvent, InstigatingPawn); }
    void DoDie(UPrimalHarvestingComponent* fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalStructure.DoDie()", fromComponent); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void RefreshStructureColors(UMeshComponent* ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.RefreshStructureColors(UMeshComponent*)", ForceRefreshComponent); }
    FLinearColor* GetStructureColorForID(FLinearColor* result, int SetNum, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "APrimalStructure.GetStructureColorForID(int,int)", result, SetNum, ID); }
    void BPNetRefreshStructureColors_Implementation(bool bUseColors) { NativeCall<void, bool>(this, "APrimalStructure.BPNetRefreshStructureColors_Implementation(bool)", bUseColors); }
    bool Internal_IsInSnapChain(APrimalStructure* theStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.Internal_IsInSnapChain(APrimalStructure*)", theStructure); }
    void GetAllLinkedStructures(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* OutLinkedStructures, TSubclassOf<APrimalStructure> ChildOfClass, bool ExcludeStructuresOn) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TSubclassOf<APrimalStructure>&, bool>(this, "APrimalStructure.GetAllLinkedStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TSubclassOf<APrimalStructure>,bool)", OutLinkedStructures, ChildOfClass, ExcludeStructuresOn); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructure.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    long double GetForceDemolishTime() { return NativeCall<long double>(this, "APrimalStructure.GetForceDemolishTime()"); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructure.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    UPrimalItem* PickupStructure(bool bIsQuickPickup, AShooterPlayerController* pc) { return NativeCall<UPrimalItem*, bool, AShooterPlayerController*>(this, "APrimalStructure.PickupStructure(bool,AShooterPlayerController*)", bIsQuickPickup, pc); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructure.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructure.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructure.DrawHUD(AShooterHUD*)", HUD); }
    bool DoAnyTribePermissionsRestrict(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.DoAnyTribePermissionsRestrict(AShooterPlayerController*)", ForPC); }
    void DrawStructureTooltip(AShooterHUD* HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD*, bool>(this, "APrimalStructure.DrawStructureTooltip(AShooterHUD*,bool)", HUD, bForMultiUseSelector); }
    void DrawStructureTooltipAction(AShooterHUD* HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD*, bool>(this, "APrimalStructure.DrawStructureTooltipAction(AShooterHUD*,bool)", HUD, bForMultiUseSelector); }
    void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam(int)", NewTeam); }
    void NetUpdateTeamAndOwnerName_Implementation(int NewTeam, const FString* NewOwnerName) { NativeCall<void, int, const FString*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName_Implementation(int,FString&)", NewTeam, NewOwnerName); }
    void SetBiomeZoneVolume(ABiomeZoneVolume* theVolume) { NativeCall<void, ABiomeZoneVolume*>(this, "APrimalStructure.SetBiomeZoneVolume(ABiomeZoneVolume*)", theVolume); }
    void ClearBiomeZoneVolume(ABiomeZoneVolume* theVolume) { NativeCall<void, ABiomeZoneVolume*>(this, "APrimalStructure.ClearBiomeZoneVolume(ABiomeZoneVolume*)", theVolume); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetDescriptiveName()", result); }
    bool AllowSnapRotationForStructure(int ThisSnapPointIndex, APrimalStructure* OtherStructure, int OtherStructureSnapPointIndex) { return NativeCall<bool, int, APrimalStructure*, int>(this, "APrimalStructure.AllowSnapRotationForStructure(int,APrimalStructure*,int)", ThisSnapPointIndex, OtherStructure, OtherStructureSnapPointIndex); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructure.PlacedStructure(AShooterPlayerController*)", PC); }
    void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.UpdatedHealth(bool)", bDoReplication); }
    void SetupDynamicMeshMaterials(UMeshComponent* meshComp) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.SetupDynamicMeshMaterials(UMeshComponent*)", meshComp); }
    void StartRepair() { NativeCall<void>(this, "APrimalStructure.StartRepair()"); }
    void RepairCheckTimer() { NativeCall<void>(this, "APrimalStructure.RepairCheckTimer()"); }
    void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APrimalStructure.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
    void Stasis() { NativeCall<void>(this, "APrimalStructure.Stasis()"); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructure.Destroyed()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructure.Unstasis()"); }
    UPrimitiveComponent* GetPrimaryHitComponent() { return NativeCall<UPrimitiveComponent*>(this, "APrimalStructure.GetPrimaryHitComponent()"); }
    static void GetNearbyStructuresOfClass(UWorld* World, TSubclassOf<APrimalStructure> StructureClass, const UE::Math::TVector<double>* Location, float Range, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Structures) { NativeCall<void, UWorld*, TSubclassOf<APrimalStructure>, const UE::Math::TVector<double>*, float, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.GetNearbyStructuresOfClass(UWorld*,TSubclassOf<APrimalStructure>,UE::Math::TVector<double>&,float,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", World, StructureClass, Location, Range, Structures); }
    void ClientUpdateLinkedStructures_Implementation(const TArray<unsigned int, TSizedDefaultAllocator<32> >* NewLinkedStructures) { NativeCall<void, const TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation(TArray<unsignedint,TSizedDefaultAllocator<32>>&)", NewLinkedStructures); }
    bool AllowColoringBy(APlayerController* ForPC, UObject* anItem) { return NativeCall<bool, APlayerController*, UObject*>(this, "APrimalStructure.AllowColoringBy(APlayerController*,UObject*)", ForPC, anItem); }
    void ServerRequestUseItemWithActor(APlayerController* ForPC, UObject* anItem, int AdditionalData, bool bReduceDurability) { NativeCall<void, APlayerController*, UObject*, int, bool>(this, "APrimalStructure.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", ForPC, anItem, AdditionalData, bReduceDurability); }
    bool IsNetRelevantFor(const AActor* RealViewer, const AActor* Viewer, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APrimalStructure.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, Viewer, SrcLocation); }
    void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation()"); }
    void FadeInEffectTick() { NativeCall<void>(this, "APrimalStructure.FadeInEffectTick()"); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructure.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, bCheckedBox); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// __int64 GetNumStructuresInRange(UE::Math::TVector<double>* AtLocation, float WithinRange);
    static void GetStructuresInRange(UWorld* theWorld, UE::Math::TVector<double>* AtLocation, float WithinRange, TSubclassOf<APrimalStructure> StructureClass, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StructuresOut, bool bUseInternalOctree, APrimalStructure* IgnoreStructure) { NativeCall<void, UWorld*, UE::Math::TVector<double>*, float, TSubclassOf<APrimalStructure>, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, bool, APrimalStructure*>(nullptr, "APrimalStructure.GetStructuresInRange(UWorld*,UE::Math::TVector<double>,float,TSubclassOf<APrimalStructure>,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool,APrimalStructure*)", theWorld, AtLocation, WithinRange, StructureClass, StructuresOut, bUseInternalOctree, IgnoreStructure); }
    static __int64 GetNumStructuresInRangeStructureTypeFlag(UWorld* theWorld, UE::Math::TVector<double>* AtLocation, int TypeFlag, TArray<FName, TSizedDefaultAllocator<32> >* StructureTags, float WithinRange, bool bCheckBPCountStructureInRange, bool bUseInternalOctree, APrimalStructure* IgnoreStructure, bool bCheckWithAltCollisionChannel, APrimalDinoCharacter* OnSaddleDino, int ForTeam) { return NativeCall<__int64, UWorld*, UE::Math::TVector<double>*, int, TArray<FName, TSizedDefaultAllocator<32> >*, float, bool, bool, APrimalStructure*, bool, APrimalDinoCharacter*, int>(nullptr, "APrimalStructure.GetNumStructuresInRangeStructureTypeFlag(UWorld*,UE::Math::TVector<double>,int,TArray<FName,TSizedDefaultAllocator<32>>,float,bool,bool,APrimalStructure*,bool,APrimalDinoCharacter*,int)", theWorld, AtLocation, TypeFlag, StructureTags, WithinRange, bCheckBPCountStructureInRange, bUseInternalOctree, IgnoreStructure, bCheckWithAltCollisionChannel, OnSaddleDino, ForTeam); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    bool CanPickupStructureFromRecentPlacement() { return NativeCall<bool>(this, "APrimalStructure.CanPickupStructureFromRecentPlacement()"); }
    void DisableStructurePickup() { NativeCall<void>(this, "APrimalStructure.DisableStructurePickup()"); }
    void MultiSetPickupAllowedBeforeNetworkTime_Implementation(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime_Implementation(double)", NewTime); }
    bool AllowSnappingWith(APrimalStructure* OtherStructure, APlayerController* ForPC) { return NativeCall<bool, APrimalStructure*, APlayerController*>(this, "APrimalStructure.AllowSnappingWith(APrimalStructure*,APlayerController*)", OtherStructure, ForPC); }
    bool AllowSnappingWithClass(APrimalStructure* OtherStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.AllowSnappingWithClass(APrimalStructure*)", OtherStructure); }
    bool AllowSnapByTypeFlags(const FPrimalStructureSnapPoint* MySnapPoint, APrimalStructure* OtherStructure, int OtherSnapIndex) { return NativeCall<bool, const FPrimalStructureSnapPoint*, APrimalStructure*, int>(this, "APrimalStructure.AllowSnapByTypeFlags(FPrimalStructureSnapPoint&,APrimalStructure*,int)", MySnapPoint, OtherStructure, OtherSnapIndex); }
    bool AllowSnapByClassAndTags(const FPrimalStructureSnapPoint* MySnapPoint, APrimalStructure* OtherStructure, const FPrimalStructureSnapPoint* OtherSnapPoint) { return NativeCall<bool, const FPrimalStructureSnapPoint*, APrimalStructure*, const FPrimalStructureSnapPoint*>(this, "APrimalStructure.AllowSnapByClassAndTags(FPrimalStructureSnapPoint&,APrimalStructure*,FPrimalStructureSnapPoint&)", MySnapPoint, OtherStructure, OtherSnapPoint); }
    int GetVariantNum() { return NativeCall<int>(this, "APrimalStructure.GetVariantNum()"); }
    //const FStructureVariantAdditionEntry* GetAdditionalVariants() { return NativeCall<const FStructureVariantAdditionEntry*>(this, "APrimalStructure.GetAdditionalVariants()"); }
    const FStructureVariant* GetVariantByTag(FName VariantTag) { return NativeCall<const FStructureVariant*, FName>(this, "APrimalStructure.GetVariantByTag(FName)", VariantTag); }
    bool SetVariant(FName VariantTag, bool bForceSet) { return NativeCall<bool, FName, bool>(this, "APrimalStructure.SetVariant(FName,bool)", VariantTag, bForceSet); }
    void UpdateCosmeticMeshComp(UE::Math::TTransform<double>* CosmeticMeshTransform, UStaticMesh* CosmeticMesh) { NativeCall<void, UE::Math::TTransform<double>*, UStaticMesh*>(this, "APrimalStructure.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)", CosmeticMeshTransform, CosmeticMesh); }
    void ToggleCosmeticMeshComp(UE::Math::TTransform<double>* CosmeticMeshTransform, UStaticMeshComponent** CosmeticMeshComp, UStaticMesh* CosmeticMesh, UStaticMeshComponent* MyMeshComp) { NativeCall<void, UE::Math::TTransform<double>*, UStaticMeshComponent**, UStaticMesh*, UStaticMeshComponent*>(this, "APrimalStructure.ToggleCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMeshComponent*&,UStaticMesh*,UStaticMeshComponent*)", CosmeticMeshTransform, CosmeticMeshComp, CosmeticMesh, MyMeshComp); }
    FStructureVariant* GetDefaultVariant(FStructureVariant* result) { return NativeCall<FStructureVariant*, FStructureVariant*>(this, "APrimalStructure.GetDefaultVariant()", result); }
    bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructure.AllowStructureAccess(APlayerController*)", ForPC); }
    static char IsPointObstructedByWorldGeometry(UWorld* ForWorld, UE::Math::TVector<double>* ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bIgnoreFoliage, float OBSTRUCTION_CHECK_DIST) { return NativeCall<char, UWorld*, UE::Math::TVector<double>*, bool, bool, bool, float>(nullptr, "APrimalStructure.IsPointObstructedByWorldGeometry(UWorld*,UE::Math::TVector<double>,bool,bool,bool,float)", ForWorld, ThePoint, bIgnoreTerrain, bOnlyCheckTerrain, bIgnoreFoliage, OBSTRUCTION_CHECK_DIST); }
    bool CanBePainted() { return NativeCall<bool>(this, "APrimalStructure.CanBePainted()"); }
    UPaintingTexture* GetPaintingTexture() { return NativeCall<UPaintingTexture*>(this, "APrimalStructure.GetPaintingTexture()"); }
    APrimalStructureDoor* GetLinkedDoor() { return NativeCall<APrimalStructureDoor*>(this, "APrimalStructure.GetLinkedDoor()"); }
    FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetEntryString()", result); }
    UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "APrimalStructure.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
    UMaterialInterface* GetEntryIconMaterial(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface*, UObject*, bool>(this, "APrimalStructure.GetEntryIconMaterial(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
    bool CanBeBaseForCharacter(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "APrimalStructure.CanBeBaseForCharacter(APawn*)", Pawn); }
    FString* GetEntryDescription(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetEntryDescription()", result); }
    bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalStructure.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
    void ClearCustomColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation()"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass);
    void UpdateTribeGroupStructureRank_Implementation(unsigned __int8 NewRank) { NativeCall<void, unsigned __int8>(this, "APrimalStructure.UpdateTribeGroupStructureRank_Implementation(unsignedchar)", NewRank); }
    bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter* theDino, bool bForcePrevent, int* overrideReturnCode, AShooterPlayerController* PC) { return NativeCall<bool, APrimalDinoCharacter*, bool, int*, AShooterPlayerController*>(this, "APrimalStructure.AllowPlacingOnSaddleParentClass(APrimalDinoCharacter*,bool,int*,AShooterPlayerController*)", theDino, bForcePrevent, overrideReturnCode, PC); }
    char GetAttachedToStaticMeshTransform(APlayerController* PC, UStaticMeshComponent* onComponent, UE::Math::TVector<double>* AtLocation, UE::Math::TVector<double>* OutLocation, UE::Math::TRotator<double>* OutRotation, FHitResult* HitResult, APrimalStructure** OutReplaceStructure) { return NativeCall<char, APlayerController*, UStaticMeshComponent*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FHitResult*, APrimalStructure**>(this, "APrimalStructure.GetAttachedToStaticMeshTransform(APlayerController*,UStaticMeshComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FHitResult&,APrimalStructure**)", PC, onComponent, AtLocation, OutLocation, OutRotation, HitResult, OutReplaceStructure); }
    static AActor* GetClosestStructureToPoint(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, float OverlapRadius) { return NativeCall<AActor*, UWorld*, UE::Math::TVector<double>*, float>(nullptr, "APrimalStructure.GetClosestStructureToPoint(UWorld*,UE::Math::TVector<double>,float)", ForWorld, AtPoint, OverlapRadius); }
    float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime()"); }
    bool IsOnlyLinkedToFastDecayStructures() { return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures()"); }
    bool IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>* TestedStructures) { return NativeCall<bool, TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>*>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>&)", TestedStructures); }
    USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructure.GetSkeletalMeshComponent()"); }
    bool CanAutoDemolish() { return NativeCall<bool>(this, "APrimalStructure.CanAutoDemolish()"); }
    void DelayedDisableSnapParent() { NativeCall<void>(this, "APrimalStructure.DelayedDisableSnapParent()"); }
    void SetEnabledPrimarySnappedStructureParent_Implementation(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation(bool)", bEnabled); }
    void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabled(bool)", bEnabled); }
    void CreateDynamicMaterials(UMeshComponent* ForceCreateForComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.CreateDynamicMaterials(UMeshComponent*)", ForceCreateForComponent); }
    FLinearColor* GetStructureColor(FLinearColor* result, int ColorRegionIndex) { return NativeCall<FLinearColor*, FLinearColor*, int>(this, "APrimalStructure.GetStructureColor(int)", result, ColorRegionIndex); }
    void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.FinalLoadedFromSaveGame()"); }
    void UpdateStencilValues() { NativeCall<void>(this, "APrimalStructure.UpdateStencilValues()"); }
    void UpdateStencilValuesWithStenilDepth(EStencilAlliance::Type InAlliance) { NativeCall<void, EStencilAlliance::Type>(this, "APrimalStructure.UpdateStencilValuesWithStenilDepth(EStencilAlliance::Type)", InAlliance); }
    void SetHarvestingActive(bool bActive, bool bOverrideBaseHealth, float BaseHarvestHealthMult, bool bAssignToTribe, int AssignedToTribeID, bool bForceUpdateHealthOnActivate, bool bForceCheckComponentClass) { NativeCall<void, bool, bool, float, bool, int, bool, bool>(this, "APrimalStructure.SetHarvestingActive(bool,bool,float,bool,int,bool,bool)", bActive, bOverrideBaseHealth, BaseHarvestHealthMult, bAssignToTribe, AssignedToTribeID, bForceUpdateHealthOnActivate, bForceCheckComponentClass); }
    bool GetClosestTargetOverride(const UE::Math::TVector<double>* attackPos, UE::Math::TVector<double>* targetPos) { return NativeCall<bool, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", attackPos, targetPos); }
    void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalStructure.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    char RefreshStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bFlipped) { return NativeCall<char, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APawn*, FName, bool>(this, "APrimalStructure.RefreshStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool)", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
    void ClearStructureLinks(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.ClearStructureLinks(APlayerController*)", ForPC); }
    bool CanAttachToExosuit_Implementation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.CanAttachToExosuit_Implementation(AShooterPlayerController*)", ForPC); }
    bool CanBeStoredByExosuit_Implementation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.CanBeStoredByExosuit_Implementation(AShooterPlayerController*)", ForPC); }
    void PickupStructureAndDependingLinkedStructures(APlayerController* ForPC, bool IsFirstPickup, UPrimalInventoryComponent* OverrideInventory) { NativeCall<void, APlayerController*, bool, UPrimalInventoryComponent*>(this, "APrimalStructure.PickupStructureAndDependingLinkedStructures(APlayerController*,bool,UPrimalInventoryComponent*)", ForPC, IsFirstPickup, OverrideInventory); }
    //void DemolishStructureAndDependingLinkedStructures(APlayerController* ForPC, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >* CollectedResources, bool IsFirst, bool bUseResourceMap) { NativeCall<void, APlayerController*, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >*, bool, bool>(this, "APrimalStructure.DemolishStructureAndDependingLinkedStructures(APlayerController*,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool)", ForPC, CollectedResources, IsFirst, bUseResourceMap); }
    TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* PreviewCulledStructures(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* result, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* InOutStructuresOnFloors) { return NativeCall<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreviewCulledStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", result, InOutStructuresOnFloors); }
    void GatherStructuresPlacedOnFloor(APrimalStructure* ForStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StructuresOnFloors) { NativeCall<void, APrimalStructure*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GatherStructuresPlacedOnFloor(APrimalStructure*,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", ForStructure, StructuresOnFloors); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void PreviewCleanUpTree(APrimalStructure* StartingStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* OutRemovedStructures);
    void NetSetIgnoreDestructionEffects_Implementation(bool bNewIgnoreDestructionEffects) { NativeCall<void, bool>(this, "APrimalStructure.NetSetIgnoreDestructionEffects_Implementation(bool)", bNewIgnoreDestructionEffects); }
    void NetResetClientReceivedStructuersPlacedOnFloors_Implementation() { NativeCall<void>(this, "APrimalStructure.NetResetClientReceivedStructuersPlacedOnFloors_Implementation()"); }
    bool IsTargetable() { return NativeCall<bool>(this, "APrimalStructure.IsTargetable()"); }
    void GetCantBuildReasonString(int ReasonVal, FString* reasonString) { NativeCall<void, int, FString*>(this, "APrimalStructure.GetCantBuildReasonString(int,FString&)", ReasonVal, reasonString); }
    void OnPaintingComponentInitialized(const UStructurePaintingComponent* PaintingComp) { NativeCall<void, const UStructurePaintingComponent*>(this, "APrimalStructure.OnPaintingComponentInitialized(UStructurePaintingComponent*)", PaintingComp); }
    void PostInitProperties() { NativeCall<void>(this, "APrimalStructure.PostInitProperties()"); }
    bool DoesGameModeShowDemolishTimer() { return NativeCall<bool>(this, "APrimalStructure.DoesGameModeShowDemolishTimer()"); }
    bool ForceInfiniteDrawDistanceOnComponent(const UPrimitiveComponent* OnComponent) { return NativeCall<bool, const UPrimitiveComponent*>(this, "APrimalStructure.ForceInfiniteDrawDistanceOnComponent(UPrimitiveComponent*)", OnComponent); }
    static void SpawnZiplineActors(APrimalStructure* ziplineAnchor0, APrimalStructure* ziplineAnchor1) { NativeCall<void, APrimalStructure*, APrimalStructure*>(nullptr, "APrimalStructure.SpawnZiplineActors(APrimalStructure*,APrimalStructure*)", ziplineAnchor0, ziplineAnchor1); }
    bool AdjustPlacementOnCollision(APlayerController* PC, UE::Math::TVector<double>* PlacementLocation, UE::Math::TRotator<double>* PlacementRotation, int AlignmentMode) { return NativeCall<bool, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, int>(this, "APrimalStructure.AdjustPlacementOnCollision(APlayerController*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int)", PC, PlacementLocation, PlacementRotation, AlignmentMode); }
    void SetSnapPreviewOverride(const FPlacementData* PlacementData) { NativeCall<void, const FPlacementData*>(this, "APrimalStructure.SetSnapPreviewOverride(FPlacementData&)", PlacementData); }
    bool GetSnapPlacementMeshOverride(const FPlacementData* PlacementData, UStaticMesh** OutStaticMesh, UClass** OutReplacementClass, UE::Math::TVector<double>* PreviewLocOffset, UE::Math::TRotator<double>* PreviewRotOffset, UE::Math::TVector<double>* PreviewScaleOffset) { return NativeCall<bool, const FPlacementData*, UStaticMesh**, UClass**, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.GetSnapPlacementMeshOverride(FPlacementData&,UStaticMesh**,UClass**,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,UE::Math::TVector<double>*,bool*)", PlacementData, OutStaticMesh, OutReplacementClass, PreviewLocOffset, PreviewRotOffset, PreviewScaleOffset); }
    void UpdateStructureMesh() { NativeCall<void>(this, "APrimalStructure.UpdateStructureMesh()"); }
    UStaticMesh* GetStructureMeshAndTransform(FName VariantTag, UE::Math::TTransform<double>& MeshTransform, bool ForceFlipped) { return NativeCall<UStaticMesh*, FName, UE::Math::TTransform<double>&, bool>(this, "APrimalStructure.GetStructureMeshAndTransform(FName,UE::Math::TTransform<double>&,bool)", VariantTag, MeshTransform, ForceFlipped); }
    __int64 GetSnappedLocAndRot(int MySnapIndex, APrimalStructure* OtherStructure, int OtherSnapIndex, UE::Math::TVector<double>* AtLoc, UE::Math::TRotator<double>* AtRot, UE::Math::TTransform<double>* OutTransform) { return NativeCall<__int64, int, APrimalStructure*, int, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TTransform<double>*>(this, "APrimalStructure.GetSnappedLocAndRot(int,APrimalStructure*,int,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TTransform<double>&)", MySnapIndex, OtherStructure, OtherSnapIndex, AtLoc, AtRot, OutTransform); }
    void HideGrass() { NativeCall<void>(this, "APrimalStructure.HideGrass()"); }
    void UnhideGrass() { NativeCall<void>(this, "APrimalStructure.UnhideGrass()"); }
    bool SnapsAreOptional() { return NativeCall<bool>(this, "APrimalStructure.SnapsAreOptional()"); }
    bool AllowRegisterComponentWithWorld(UActorComponent* MyComponent) { return NativeCall<bool, UActorComponent*>(this, "APrimalStructure.AllowRegisterComponentWithWorld(UActorComponent*)", MyComponent); }
    bool IsComponentRelevantForNavigation(UActorComponent* Component) { return NativeCall<bool, UActorComponent*>(this, "APrimalStructure.IsComponentRelevantForNavigation(UActorComponent*)", Component); }
    UStaticMeshComponent* GetPaintingStaticMesh_Implementation() { return NativeCall<UStaticMeshComponent*>(this, "APrimalStructure.GetPaintingStaticMesh_Implementation()"); }
    float GetUsablePriority_Implementation() { return NativeCall<float>(this, "APrimalStructure.GetUsablePriority_Implementation()"); }
    void GetWindSourceComponents(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* Components, int includePriorityGreaterThan, bool bIsFirstPerson) { NativeCall<void, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, int, bool>(this, "APrimalStructure.GetWindSourceComponents(TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,int,bool)", Components, includePriorityGreaterThan, bIsFirstPerson); }
    bool ShouldPerformMeshingCheck(bool bIsFinalPlacement) { return NativeCall<bool, bool>(this, "APrimalStructure.ShouldPerformMeshingCheck(bool)", bIsFinalPlacement); }
    AActor* GetBasedOnDinoAsActor(bool bUseReplicatedData, bool bOnlyConsciousDino) { return NativeCall<AActor*, bool, bool>(this, "APrimalStructure.GetBasedOnDinoAsActor(bool,bool)", bUseReplicatedData, bOnlyConsciousDino); }
    TSubclassOf<UPrimalItem> GetConsumesPrimalItem() { return this->GetPrimalStructureSparseClassData()->ConsumesPrimalItemField(); }
    FPrimalStructureSparseClassData* GetPrimalStructureSparseClassData()
    {
        return (FPrimalStructureSparseClassData*)this->ClassPrivateField()->GetSparseClassData(EGetSparseClassDataMethod::CreateIfNull);
    }

	float& CachedActiveEffectsDamageMultField() { return *GetNativePointerField<float*>(this, "APrimalStructure.CachedActiveEffectsDamageMult"); }
	double& LastInAllyRangeTimeSerializedField() { return *GetNativePointerField<double*>(this, "APrimalStructure.LastInAllyRangeTimeSerialized"); }
	double& LastSkinAppliedTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructure.LastSkinAppliedTime"); }
	__int64& MyCustomCosmeticStructureSkinIDField() { return *GetNativePointerField<__int64*>(this, "APrimalStructure.MyCustomCosmeticStructureSkinID"); }
	float& SkinCooldownDurationField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SkinCooldownDuration"); }
	int& OriginalPlacerPlayerIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.OriginalPlacerPlayerID"); }
	int& MyCustomCosmeticStructureSkinVariantIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.MyCustomCosmeticStructureSkinVariantID"); }
	int& StructureAttachmentBaseMaxStructuresField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureAttachmentBaseMaxStructures"); }
	unsigned char& TribeGroupStructureRankField() { return *GetNativePointerField<unsigned char*>(this, "APrimalStructure.TribeGroupStructureRank"); }
	float& LastHibernationAwakeTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHibernationAwakeTime"); }
	unsigned char& SnowTraceResultsField() { return *GetNativePointerField<unsigned char*>(this, "APrimalStructure.SnowTraceResults"); }
	char& CachedSnowStateField() { return *GetNativePointerField<char*>(this, "APrimalStructure.CachedSnowState"); }
	bool& bGeneratedOverlapEventsField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bGeneratedOverlapEvents"); }
	bool& bUpdatedPhysicsVolumeField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bUpdatedPhysicsVolume"); }
	bool& bAffectedNavigationField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bAffectedNavigation"); }
	bool& bUsedAttachParentBoundField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bUsedAttachParentBound"); }
	unsigned __int64& LastWeldTransformRefreshFrameField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructure.LastWeldTransformRefreshFrame"); }
	bool& bWeldedToHullField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bWeldedToHull"); }
	bool& bWeldRoundRobinActiveField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bWeldRoundRobinActive"); }

	const FPrimalStructureSparseClassData* GetPrimalStructureSparseClassData(EGetSparseClassDataMethod GetMethod) { return NativeCall<const FPrimalStructureSparseClassData*, EGetSparseClassDataMethod>(this, "APrimalStructure.GetPrimalStructureSparseClassData(EGetSparseClassDataMethod)", GetMethod); }

	FPrimalStructureSparseClassData* GetMutablePrimalStructureSparseClassData() { return const_cast<FPrimalStructureSparseClassData*>(GetPrimalStructureSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	FPlacementData& SnappedChooseRotationPlacementDataField() { return *GetNativePointerField<FPlacementData*>(this, "APrimalStructure.SnappedChooseRotationPlacementData"); }
	FSkinNetMessageParams& SkinPersistentDataField() { return *GetNativePointerField<FSkinNetMessageParams*>(this, "APrimalStructure.SkinPersistentData"); }
	FBPNetExecParams& LocalOnlySkinCustomPersistentDataField() { return *GetNativePointerField<FBPNetExecParams*>(this, "APrimalStructure.LocalOnlySkinCustomPersistentData"); }
	FTimerHandle& StructureSkinLoopingTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructure.StructureSkinLoopingTimerHandle"); }
	FTimerHandle& StructureSkinNonLoopingTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructure.StructureSkinNonLoopingTimerHandle"); }
	FTimerHandle& StructureSkinUndoPreviewTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructure.StructureSkinUndoPreviewTimerHandle"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ActiveEffectIdsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ActiveEffectIds"); }
	FTimerHandle& EffectExpiryTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructure.EffectExpiryTimerHandle"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& HibernationSupportIDsField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.HibernationSupportIDs"); }
	TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& AttachedStructuresField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.AttachedStructures"); }
	FString& OriginalPlacedTimeStampField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OriginalPlacedTimeStamp"); }
	APrimalStructure*& PlacedByTemplateField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PlacedByTemplate"); }
	FStructureCarriedByDinoEvent& NotifyCarriedByDinoChangedField() { return *GetNativePointerField<FStructureCarriedByDinoEvent*>(this, "APrimalStructure.NotifyCarriedByDinoChanged"); }
	TWeakObjectPtr<APrimalShip, FWeakObjectPtr>& WeakWeldShipPtrField() { return *GetNativePointerField<TWeakObjectPtr<APrimalShip, FWeakObjectPtr>*>(this, "APrimalStructure.WeakWeldShipPtr"); }
	BitFieldValue<bool, unsigned char> bPreventStructureHibernation() { return { this, "APrimalStructure.bPreventStructureHibernation"}; }
	BitFieldValue<bool, unsigned char> bStructureLoadedFromSaveGame() { return { this, "APrimalStructure.bStructureLoadedFromSaveGame"}; }
	BitFieldValue<bool, unsigned char> bNumStructureActorsCounted() { return { this, "APrimalStructure.bNumStructureActorsCounted"}; }
	BitFieldValue<bool, unsigned char> bIsTrapped() { return { this, "APrimalStructure.bIsTrapped"}; }
	BitFieldValue<bool, unsigned char> bPlacementPreventLockingCameraWhileChooseRotation() { return { this, "APrimalStructure.bPlacementPreventLockingCameraWhileChooseRotation"}; }
	BitFieldValue<bool, unsigned char> bAllowChooseRotationWhenSnapped() { return { this, "APrimalStructure.bAllowChooseRotationWhenSnapped"}; }
	BitFieldValue<bool, unsigned char> bDontResetPickupTimer() { return { this, "APrimalStructure.bDontResetPickupTimer"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnClientUpdatedLinkedStructures() { return { this, "APrimalStructure.bUseBPOnClientUpdatedLinkedStructures"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnServerUpdatedLinkedStructures() { return { this, "APrimalStructure.bUseBPOnServerUpdatedLinkedStructures"}; }
	BitFieldValue<bool, unsigned char> bUseBPPostPreviewStructureFlipped() { return { this, "APrimalStructure.bUseBPPostPreviewStructureFlipped"}; }
	BitFieldValue<bool, unsigned char> bLinkedStructureRemovalForceClientUpdate() { return { this, "APrimalStructure.bLinkedStructureRemovalForceClientUpdate"}; }
	BitFieldValue<bool, unsigned char> bIsStructureAttachmentBase() { return { this, "APrimalStructure.bIsStructureAttachmentBase"}; }
	BitFieldValue<bool, unsigned char> bAllowStructureSkinsWithoutTeamCheck() { return { this, "APrimalStructure.bAllowStructureSkinsWithoutTeamCheck"}; }
	BitFieldValue<bool, unsigned char> bStructureFiresProjectiles() { return { this, "APrimalStructure.bStructureFiresProjectiles"}; }
	BitFieldValue<bool, unsigned char> bStructureCosmeticOverrideStructureColorSets() { return { this, "APrimalStructure.bStructureCosmeticOverrideStructureColorSets"}; }
	BitFieldValue<bool, unsigned char> bAllowWeldingToShips() { return { this, "APrimalStructure.bAllowWeldingToShips"}; }
	BitFieldValue<bool, unsigned char> bPlaceholderBool1() { return { this, "APrimalStructure.bPlaceholderBool1"}; }
	BitFieldValue<bool, unsigned char> bPlaceholderBool2() { return { this, "APrimalStructure.bPlaceholderBool2"}; }
	BitFieldValue<bool, unsigned char> bClientAddedToStructuresArray() { return { this, "APrimalStructure.bClientAddedToStructuresArray"}; }
	BitFieldValue<bool, unsigned char> bSetStructureSkinLoopingTimer() { return { this, "APrimalStructure.bSetStructureSkinLoopingTimer"}; }
	BitFieldValue<bool, unsigned char> bSetStructureSkinNonLoopingTimer() { return { this, "APrimalStructure.bSetStructureSkinNonLoopingTimer"}; }
	BitFieldValue<bool, unsigned char> bHasBeenAttachedToDino() { return { this, "APrimalStructure.bHasBeenAttachedToDino"}; }
	BitFieldValue<bool, unsigned char> bAllowWeldRoundRobin() { return { this, "APrimalStructure.bAllowWeldRoundRobin"}; }
	UPrimitiveComponent* GetStructureOverrideTargetComponent() { return NativeCall<UPrimitiveComponent*>(this, "APrimalStructure.GetStructureOverrideTargetComponent()"); }
	bool HasAppliedCustomCosmetic() { return NativeCall<bool>(this, "APrimalStructure.HasAppliedCustomCosmetic()"); }
	void ClientSendPaintingRevision_Implementation(UStructurePaintingComponent* StructurePaintingComponent, int PaintingRevision) { NativeCall<void, UStructurePaintingComponent*, int>(this, "APrimalStructure.ClientSendPaintingRevision_Implementation(UStructurePaintingComponent*,int)", StructurePaintingComponent, PaintingRevision); }
	FName OverrideAttachToStaticMeshSocketNameBase() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalStructure.OverrideAttachToStaticMeshSocketNameBase()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void MultiSetupTrap(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.MultiSetupTrap(bool)", bEnabled); }
	void SetSnowState(int NewSnowState, bool bForce) { NativeCall<void, int, bool>(this, "APrimalStructure.SetSnowState(int,bool)", NewSnowState, bForce); }
	void BPStructurePreGetMultiUseEntries(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.BPStructurePreGetMultiUseEntries(APlayerController*)", ForPC); }
	void NonPlayerFinalStructurePlacementForPC(AShooterPlayerController* ForPC, APrimalStructure* ForcePrimaryParent) { NativeCall<void, AShooterPlayerController*, APrimalStructure*>(this, "APrimalStructure.NonPlayerFinalStructurePlacementForPC(AShooterPlayerController*,APrimalStructure*)", ForPC, ForcePrimaryParent); }
	void ReplicateAttachmentForShips() { NativeCall<void>(this, "APrimalStructure.ReplicateAttachmentForShips()"); }
	void AddHostileStacks(int NumStacksToAdd, bool bShareWithTribeMembers, bool bShareWithOfflineMembers) { NativeCall<void, int, bool, bool>(this, "APrimalStructure.AddHostileStacks(int,bool,bool)", NumStacksToAdd, bShareWithTribeMembers, bShareWithOfflineMembers); }
	bool IsRepairAllowed() { return NativeCall<bool>(this, "APrimalStructure.IsRepairAllowed()"); }
	bool Primal_AllowInstancingOfSubobjects(FName PropertyName) { return NativeCall<bool, FName>(this, "APrimalStructure.Primal_AllowInstancingOfSubobjects(FName)", PropertyName); }
	void OnEffectExpiryTimer() { NativeCall<void>(this, "APrimalStructure.OnEffectExpiryTimer()"); }
	void AttachToStructureAttachmentBase(APrimalStructure* AttachParent) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.AttachToStructureAttachmentBase(APrimalStructure*)", AttachParent); }
	void MultiRefreshVariantSettings_Implementation(FName NewVariantTag) { NativeCall<void, FName>(this, "APrimalStructure.MultiRefreshVariantSettings_Implementation(FName)", NewVariantTag); }
	void SetNetworkParentDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalStructure.SetNetworkParentDino(APrimalDinoCharacter*)", Dino); }
	bool IsItemContainer() { return NativeCall<bool>(this, "APrimalStructure.IsItemContainer()"); }
	void MultiRefreshVariantSettings(FName NewVariantTag) { NativeCall<void, FName>(this, "APrimalStructure.MultiRefreshVariantSettings(FName)", NewVariantTag); }
	void RemovedLinkedStructure(APrimalStructure* Structure, APlayerController* Controller) { NativeCall<void, APrimalStructure*, APlayerController*>(this, "APrimalStructure.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", Structure, Controller); }
	bool IsSeatingStructure() { return NativeCall<bool>(this, "APrimalStructure.IsSeatingStructure()"); }
	bool IsCompatibleWithGhostStructure(APrimalStructure* IntoGhostStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.IsCompatibleWithGhostStructure(APrimalStructure*)", IntoGhostStructure); }
	bool CanBeTargetedBy(const ITargetableInterface* Attacker) { return NativeCall<bool, const ITargetableInterface*>(this, "APrimalStructure.CanBeTargetedBy(ITargetableInterface*)", Attacker); }
	void BPGetInfoFromConsumedItemForPlacedStructure_Implementation(UPrimalItem* ItemToConsumed) { NativeCall<void, UPrimalItem*>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure_Implementation(UPrimalItem*)", ItemToConsumed); }
	void DoTrap() { NativeCall<void>(this, "APrimalStructure.DoTrap()"); }
	float BPGetAmmoBoxReloadPercent() { return NativeCall<float>(this, "APrimalStructure.BPGetAmmoBoxReloadPercent()"); }
	void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructure.PlacedStructureLocation()"); }
	bool BPAllowSnapRotationForStructure(int ThisSnapPointIndex, FName ThisSnapPointName, APrimalStructure* OtherStructure, int OtherStructureSnapPointIndex, FName OtherStructureSnapPointName) { return NativeCall<bool, int, FName, APrimalStructure*, int, FName>(this, "APrimalStructure.BPAllowSnapRotationForStructure(int,FName,APrimalStructure*,int,FName)", ThisSnapPointIndex, ThisSnapPointName, OtherStructure, OtherStructureSnapPointIndex, OtherStructureSnapPointName); }
	float GetInstanceWaterPlacementMinimumWaterHeight() { return NativeCall<float>(this, "APrimalStructure.GetInstanceWaterPlacementMinimumWaterHeight()"); }
	void StructureSkinHandleCommand(FName CommandName, APrimalStructure* ForStructure, const FBPNetExecParams& ExecParams) { NativeCall<void, FName, APrimalStructure*, const FBPNetExecParams&>(this, "APrimalStructure.StructureSkinHandleCommand(FName,APrimalStructure*,FBPNetExecParams&)", CommandName, ForStructure, ExecParams); }
	bool GetIgnorePawns() { return NativeCall<bool>(this, "APrimalStructure.GetIgnorePawns()"); }
	UE::Math::TVector<double>* OverrideWaterVolumeCheckPointOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.OverrideWaterVolumeCheckPointOffset()", result); }
	void BPOnClientUpdatedLinkedStructures() { NativeCall<void>(this, "APrimalStructure.BPOnClientUpdatedLinkedStructures()"); }
	FString* BPOverrideCantBuildReasonString(FString* result, int CantBuildReason) { return NativeCall<FString*, FString*, int>(this, "APrimalStructure.BPOverrideCantBuildReasonString(int)", result, CantBuildReason); }
	bool IsUnderwaterBase() { return NativeCall<bool>(this, "APrimalStructure.IsUnderwaterBase()"); }
	void ClientScaleTexture(UStructurePaintingComponent* StructurePaintingComponent, float AddScaleX, float AddScaleY) { NativeCall<void, UStructurePaintingComponent*, float, float>(this, "APrimalStructure.ClientScaleTexture(UStructurePaintingComponent*,float,float)", StructurePaintingComponent, AddScaleX, AddScaleY); }
	bool IsValidSnapPointFrom_Implementation(APrimalStructure* ParentStructure, int MySnapPointFromIndex, int ParentSnapPointToIndex) { return NativeCall<bool, APrimalStructure*, int, int>(this, "APrimalStructure.IsValidSnapPointFrom_Implementation(APrimalStructure*,int,int)", ParentStructure, MySnapPointFromIndex, ParentSnapPointToIndex); }
	unsigned char GetNetRelevancyBiomeId() { return NativeCall<unsigned char>(this, "APrimalStructure.GetNetRelevancyBiomeId()"); }
	bool TryAutoDecayDestruction(bool bImmediateDestroy) { return NativeCall<bool, bool>(this, "APrimalStructure.TryAutoDecayDestruction(bool)", bImmediateDestroy); }
	void BPStructureSkinTimerTriggered(APrimalStructure* ForStructure, bool bLooping) { NativeCall<void, APrimalStructure*, bool>(this, "APrimalStructure.BPStructureSkinTimerTriggered(APrimalStructure*,bool)", ForStructure, bLooping); }
	void BPPostPreviewStructureFlipped() { NativeCall<void>(this, "APrimalStructure.BPPostPreviewStructureFlipped()"); }
	float BPGetCustomItemRepairSpeedMultiplier(UPrimalItem* Item) { return NativeCall<float, UPrimalItem*>(this, "APrimalStructure.BPGetCustomItemRepairSpeedMultiplier(UPrimalItem*)", Item); }
	void BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem* ItemToConsumed) { NativeCall<void, UPrimalItem*>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem*)", ItemToConsumed); }
	FColor BPGetPaintingMaskColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalStructure.BPGetPaintingMaskColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TRotator<double>* GetPlayerSpawnRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructure.GetPlayerSpawnRotation()", result); }
	ADayCycleManager* GetDayCycleManager() { return NativeCall<ADayCycleManager*>(this, "APrimalStructure.GetDayCycleManager()"); }
	void OnStructurePlacementRefreshed() { NativeCall<void>(this, "APrimalStructure.OnStructurePlacementRefreshed()"); }
	void BPBeginPreview() { NativeCall<void>(this, "APrimalStructure.BPBeginPreview()"); }
	void StopRepair() { NativeCall<void>(this, "APrimalStructure.StopRepair()"); }
	void SetBedEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetBedEnabled(bool)", bEnabled); }
	bool OverrideAttachToStaticMeshSocket() { return NativeCall<bool>(this, "APrimalStructure.OverrideAttachToStaticMeshSocket()"); }
	bool IsValidStructureSkinTarget(APrimalStructure* TargetStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.IsValidStructureSkinTarget(APrimalStructure*)", TargetStructure); }
	bool CanDemolish() { return NativeCall<bool>(this, "APrimalStructure.CanDemolish()"); }
	FString* BPOverrideDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.BPOverrideDescriptiveName()", result); }
	bool CheckForHangingParent(APlayerController* PC, UE::Math::TVector<double>* PlacementLoc, FHitResult& OutHit, const FPlacementData& PlacementData) { if (!PlacementLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APlayerController *, UE :: Math :: TVector < double >, FHitResult &, const FPlacementData &>(this, "APrimalStructure.CheckForHangingParent(APlayerController*,UE::Math::TVector<double>,FHitResult&,FPlacementData&)", PC, *PlacementLoc, OutHit, PlacementData); }
	float AddAggroOnBump(APrimalDinoCharacter* BumpedBy) { return NativeCall<float, APrimalDinoCharacter*>(this, "APrimalStructure.AddAggroOnBump(APrimalDinoCharacter*)", BumpedBy); }
	bool PreventPlacingOnFloorActor(AActor* FloorActor, bool IsPlacingGhost) { return NativeCall<bool, AActor*, bool>(this, "APrimalStructure.PreventPlacingOnFloorActor(AActor*,bool)", FloorActor, IsPlacingGhost); }
	void OnClientReceiveStructuresPlacedOnFloor(const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& NewStructuresPlacedOnFloor) { NativeCall<void, const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructure.OnClientReceiveStructuresPlacedOnFloor(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", NewStructuresPlacedOnFloor); }
	int BPCheckItemRequiementsToBuild(UPrimalItem* ItemToConsumed) { return NativeCall<int, UPrimalItem*>(this, "APrimalStructure.BPCheckItemRequiementsToBuild(UPrimalItem*)", ItemToConsumed); }
	void LoopingStructureSkinTimer() { NativeCall<void>(this, "APrimalStructure.LoopingStructureSkinTimer()"); }
	bool IsValidCraftingResource(UPrimalItem* theItem) { return NativeCall<bool, UPrimalItem*>(this, "APrimalStructure.IsValidCraftingResource(UPrimalItem*)", theItem); }
	float GetAttackRangeOffset() { return NativeCall<float>(this, "APrimalStructure.GetAttackRangeOffset()"); }
	void ApplyColorToRegions(short CustomColorID, bool* ApplyToRegions) { NativeCall<void, short, bool*>(this, "APrimalStructure.ApplyColorToRegions(short,bool*)", CustomColorID, ApplyToRegions); }
	bool IsValidStructureSkinTarget_Implementation(APrimalStructure* TargetStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.IsValidStructureSkinTarget_Implementation(APrimalStructure*)", TargetStructure); }
	void CallDrawFloatingHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructure.CallDrawFloatingHUD(AShooterHUD*)", HUD); }
	void ApplyStructureEffect(FName EffectId, AActor* EffectInstigator) { NativeCall<void, FName, AActor*>(this, "APrimalStructure.ApplyStructureEffect(FName,AActor*)", EffectId, EffectInstigator); }
	void BPOverrideStructureHarvestingDepleted(UPrimalHarvestingComponent* fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalStructure.BPOverrideStructureHarvestingDepleted(UPrimalHarvestingComponent*)", fromComponent); }
	bool IsValidStructureForCryopodDeployment_Implementation(AActor* OwnerActor, UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, AActor *, UE :: Math :: TVector < double >>(this, "APrimalStructure.IsValidStructureForCryopodDeployment_Implementation(AActor*,UE::Math::TVector<double>)", OwnerActor, *Location); }
	bool IsUsingWorldSpaceMaterial() { return NativeCall<bool>(this, "APrimalStructure.IsUsingWorldSpaceMaterial()"); }
	bool CheckAdditionalStructureTag_Implementation(FName TagToCheck) { return NativeCall<bool, FName>(this, "APrimalStructure.CheckAdditionalStructureTag_Implementation(FName)", TagToCheck); }
	UE::Math::TVector<double>* GetTargetPathfindingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalStructure.GetTargetPathfindingLocation(AActor*)", result, Attacker); }
	static bool AdjustCollideTrace(UWorld* World, int ForTeam, FHitResult& OutHit, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, ECollisionChannel TraceChannel, const FCollisionQueryParams& Params, const FCollisionResponseParams& ResponseParam) { return NativeCall<bool, UWorld*, int, FHitResult&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, ECollisionChannel, const FCollisionQueryParams&, const FCollisionResponseParams&>(nullptr, "APrimalStructure.AdjustCollideTrace(UWorld*,int,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", World, ForTeam, OutHit, Start, End, TraceChannel, Params, ResponseParam); }
	bool BPOverrideAllowSnapPoint(bool IsAllowed, APrimalStructure* OtherStructure, int OtherSnapIndex, int MySnapIndex) { return NativeCall<bool, bool, APrimalStructure*, int, int>(this, "APrimalStructure.BPOverrideAllowSnapPoint(bool,APrimalStructure*,int,int)", IsAllowed, OtherStructure, OtherSnapIndex, MySnapIndex); }
	bool IsAttachedToSaddlePlatform() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToSaddlePlatform()"); }
	bool BPPreventUseDescriptiveNameOverride(bool bIsPreview) { return NativeCall<bool, bool>(this, "APrimalStructure.BPPreventUseDescriptiveNameOverride(bool)", bIsPreview); }
	void UpdateActorTeamName() { NativeCall<void>(this, "APrimalStructure.UpdateActorTeamName()"); }
	void BPHandleStructureEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.BPHandleStructureEnabled(bool)", bEnabled); }
	void SetNetworkParentStructure(APrimalStructure* ParentStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.SetNetworkParentStructure(APrimalStructure*)", ParentStructure); }
	static UScriptStruct* StaticGetPrimalStructureSparseClassDataScriptStruct() { return NativeCall<UScriptStruct*>(nullptr, "APrimalStructure.StaticGetPrimalStructureSparseClassDataScriptStruct()"); }
	UE::Math::TVector<double>* GetPlayerSpawnLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.GetPlayerSpawnLocation()", result); }
	void NetSpawnCoreStructureDeathActor() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor()"); }
	UE::Math::TVector<double>* GetTargetingLocation(UE::Math::TVector<double>* result, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "APrimalStructure.GetTargetingLocation(AActor*)", result, Attacker); }
	APrimalDinoCharacter* BPGetAttachedToCharacter() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalStructure.BPGetAttachedToCharacter()"); }
	bool IsAllowedToDemolish(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.IsAllowedToDemolish(AShooterPlayerController*)", ForPC); }
	void MultiAddStructuresPlacedOnFloor(APrimalStructure* structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor(APrimalStructure*)", structure); }
	void OnRep_ActiveStructureEffects() { NativeCall<void>(this, "APrimalStructure.OnRep_ActiveStructureEffects()"); }
	void SetCarriedByDino(bool bNewCarriedByDino) { NativeCall<void, bool>(this, "APrimalStructure.SetCarriedByDino(bool)", bNewCarriedByDino); }
	bool BPForceConsideredEnemyFoundation(APlayerController* PC, APrimalStructure* ForNewStructure, const UE::Math::TVector<double>& TestAtLocation) { return NativeCall<bool, APlayerController*, APrimalStructure*, const UE::Math::TVector<double>&>(this, "APrimalStructure.BPForceConsideredEnemyFoundation(APlayerController*,APrimalStructure*,UE::Math::TVector<double>&)", PC, ForNewStructure, TestAtLocation); }
	void ReduceMemoryForStasis() { NativeCall<void>(this, "APrimalStructure.ReduceMemoryForStasis()"); }
	void ClearStructureSkinTimer(bool bClearAll, bool bClearLooping) { NativeCall<void, bool, bool>(this, "APrimalStructure.ClearStructureSkinTimer(bool,bool)", bClearAll, bClearLooping); }
	UClass* GetBasedUIClass() { return NativeCall<UClass*>(this, "APrimalStructure.GetBasedUIClass()"); }
	void OnRep_StructureColors() { NativeCall<void>(this, "APrimalStructure.OnRep_StructureColors()"); }
	void BPPostLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.BPPostLoadedFromSaveGame()"); }
	void ClientHandleNetDestroy() { NativeCall<void>(this, "APrimalStructure.ClientHandleNetDestroy()"); }
	bool IsLinkedToWaterOrPowerSource() { return NativeCall<bool>(this, "APrimalStructure.IsLinkedToWaterOrPowerSource()"); }
	APrimalDinoCharacter* GetAttachedToShipOrRaft() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalStructure.GetAttachedToShipOrRaft()"); }
	void BPTriggerStasisEvent() { NativeCall<void>(this, "APrimalStructure.BPTriggerStasisEvent()"); }
	void BPStructureSkinBlueprintDrawHUD(APrimalStructure* ForStructure, AShooterHUD* HUD, float CenterX, float CenterY) { NativeCall<void, APrimalStructure*, AShooterHUD*, float, float>(this, "APrimalStructure.BPStructureSkinBlueprintDrawHUD(APrimalStructure*,AShooterHUD*,float,float)", ForStructure, HUD, CenterX, CenterY); }
	static void SetZiplineStructurePointersForInstigator(AController* pInInstigator, APrimalStructure* pStructure0, APrimalStructure* pStructure1) { NativeCall<void, AController*, APrimalStructure*, APrimalStructure*>(nullptr, "APrimalStructure.SetZiplineStructurePointersForInstigator(AController*,APrimalStructure*,APrimalStructure*)", pInInstigator, pStructure0, pStructure1); }
	TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* GetAdditionalComponentsForDyePreview(TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*, TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GetAdditionalComponentsForDyePreview()", result); }
	void CallDrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructure.CallDrawHUD(AShooterHUD*)", HUD); }
	bool IsCriticalShipStructure() { return NativeCall<bool>(this, "APrimalStructure.IsCriticalShipStructure()"); }
	void SavePlacementData(UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, FName BoneName) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); if (!PlayerViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TRotator < double >, FName>(this, "APrimalStructure.SavePlacementData(UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,FName)", *AtLocation, *AtRotation, *PlayerViewRotation, BoneName); }
	void OnBlockListUpdated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructure.OnBlockListUpdated(AShooterPlayerController*)", PC); }
	void BPStructureSkinClientDoMultiUse(APrimalStructure* ForStructure, APlayerController* ForPC, int ClientUseIndex) { NativeCall<void, APrimalStructure*, APlayerController*, int>(this, "APrimalStructure.BPStructureSkinClientDoMultiUse(APrimalStructure*,APlayerController*,int)", ForStructure, ForPC, ClientUseIndex); }
	void BPOnServerUpdatedLinkedStructures() { NativeCall<void>(this, "APrimalStructure.BPOnServerUpdatedLinkedStructures()"); }
	void SetStructureSkinTimer(float timerInterval, bool bLooping) { NativeCall<void, float, bool>(this, "APrimalStructure.SetStructureSkinTimer(float,bool)", timerInterval, bLooping); }
	void BPOnDemolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructure.BPOnDemolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
	UClass* GetActualClass() { return NativeCall<UClass*>(this, "APrimalStructure.GetActualClass()"); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructure.GetPinCode()"); }
	void OnModDownloadComplete(bool bSuccess, const FInstalledMod& InstalledMod) { NativeCall<void, bool, const FInstalledMod&>(this, "APrimalStructure.OnModDownloadComplete(bool,FInstalledMod&)", bSuccess, InstalledMod); }
	void ForceAttachStructureToSaddle_Implementation(APrimalDinoCharacter* Dino, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, bool bUseBoneLocation, FName AttachToBone, const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& UnlinkFromStructures, AActor* DetachFromActor) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, APrimalDinoCharacter *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, bool, FName, const TArray < APrimalStructure * , TSizedDefaultAllocator < 32 > > &, AActor *>(this, "APrimalStructure.ForceAttachStructureToSaddle_Implementation(APrimalDinoCharacter*,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FName,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AActor*)", Dino, *AtLocation, *AtRotation, bUseBoneLocation, AttachToBone, UnlinkFromStructures, DetachFromActor); }
	void EnableUnstasisCast(bool enable) { NativeCall<void, bool>(this, "APrimalStructure.EnableUnstasisCast(bool)", enable); }
	bool BPOverrideSnapTargetAllowSnapPoint(bool IsAllowed, APrimalStructure* OtherStructure, int OtherSnapIndex) { return NativeCall<bool, bool, APrimalStructure*, int>(this, "APrimalStructure.BPOverrideSnapTargetAllowSnapPoint(bool,APrimalStructure*,int)", IsAllowed, OtherStructure, OtherSnapIndex); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalStructure._getUObject()"); }
	bool OverrideSnapToWaterSurface() { return NativeCall<bool>(this, "APrimalStructure.OverrideSnapToWaterSurface()"); }
	FName OverrideAttachToStaticMeshSocketNameBase_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalStructure.OverrideAttachToStaticMeshSocketNameBase_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool AreStructureSkinsHidden() { return NativeCall<bool>(this, "APrimalStructure.AreStructureSkinsHidden()"); }
	void DoDestroy() { NativeCall<void>(this, "APrimalStructure.DoDestroy()"); }
	void BPUpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.BPUpdatedHealth(bool)", bDoReplication); }
	bool IsAttachedToShipOrRaft() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToShipOrRaft()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructure.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "APrimalStructure.GetObject()"); }
	void BPBlockListUpdated() { NativeCall<void>(this, "APrimalStructure.BPBlockListUpdated()"); }
	UPrimitiveComponent* GetStructureOverrideTargetComponent_Implementation() { return NativeCall<UPrimitiveComponent*>(this, "APrimalStructure.GetStructureOverrideTargetComponent_Implementation()"); }
	FString* TemplateMiscDataRequested(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.TemplateMiscDataRequested()", result); }
	void ChangeStructureStaticMesh(UStaticMeshComponent* MeshComp, UStaticMesh* NewMesh) { NativeCall<void, UStaticMeshComponent*, UStaticMesh*>(this, "APrimalStructure.ChangeStructureStaticMesh(UStaticMeshComponent*,UStaticMesh*)", MeshComp, NewMesh); }
	bool TryWeldToShipHull() { return NativeCall<bool>(this, "APrimalStructure.TryWeldToShipHull()"); }
	bool IsCustomCosmeticOwned() { return NativeCall<bool>(this, "APrimalStructure.IsCustomCosmeticOwned()"); }
	UE::Math::TVector<double>* BPOverrideTargetLocation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& attackPos, const AActor* Attacker) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const AActor*>(this, "APrimalStructure.BPOverrideTargetLocation(UE::Math::TVector<double>&,AActor*)", result, attackPos, Attacker); }
	void MultiHandleSkinNetMessage_Implementation(FName MessageName, const FSkinNetMessageParams& skinNetMessageParams) { NativeCall<void, FName, const FSkinNetMessageParams&>(this, "APrimalStructure.MultiHandleSkinNetMessage_Implementation(FName,FSkinNetMessageParams&)", MessageName, skinNetMessageParams); }
	bool OverrideAttachToStaticMeshSocket_Implementation() { return NativeCall<bool>(this, "APrimalStructure.OverrideAttachToStaticMeshSocket_Implementation()"); }
	void OnSetupTrap() { NativeCall<void>(this, "APrimalStructure.OnSetupTrap()"); }
	bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>& AtLocation, const UE::Math::TRotator<double>& AtRotation, const FActorSpawnParameters& SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, const FActorSpawnParameters&>(this, "APrimalStructure.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
	bool BPAllowPickupGiveItem(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructure.BPAllowPickupGiveItem(APlayerController*)", ForPC); }
	static bool CanStructureBePlanned(APrimalStructure* TargetStructure) { return NativeCall<bool, APrimalStructure*>(nullptr, "APrimalStructure.CanStructureBePlanned(APrimalStructure*)", TargetStructure); }
	void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructure.SetContainerActive(bool)", bNewActive); }
	void OnWeldedComponentPhysicsStatePreChange(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) { NativeCall<void, UPrimitiveComponent*, EComponentPhysicsStateChange>(this, "APrimalStructure.OnWeldedComponentPhysicsStatePreChange(UPrimitiveComponent*,EComponentPhysicsStateChange)", ChangedComponent, StateChange); }
	void NetDoSpawnEffects() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects()"); }
	void SetBoundsScale(float NewScale) { NativeCall<void, float>(this, "APrimalStructure.SetBoundsScale(float)", NewScale); }
	void NetSetIgnoreDestructionEffects(bool bNewIgnoreDestructionEffects) { NativeCall<void, bool>(this, "APrimalStructure.NetSetIgnoreDestructionEffects(bool)", bNewIgnoreDestructionEffects); }
	TArray<int, TSizedDefaultAllocator<32> >* GetAllowedStructureColorRegions(TArray<int, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GetAllowedStructureColorRegions()", result); }
	UStaticMeshComponent* GetSkinnedPaintingStaticMesh(const APrimalStructure* SkinnedStructure) { return NativeCall<UStaticMeshComponent*, const APrimalStructure*>(this, "APrimalStructure.GetSkinnedPaintingStaticMesh(APrimalStructure*)", SkinnedStructure); }
	const FStructureVariantAdditionEntry* GetAdditionalVariants() { return NativeCall<const FStructureVariantAdditionEntry*>(this, "APrimalStructure.GetAdditionalVariants()"); }
	UE::Math::TVector<double>* BPGetAdditionalScaleForPainting(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.BPGetAdditionalScaleForPainting()", result); }
	static void ProcessTreeQueue() { NativeCall<void>(nullptr, "APrimalStructure.ProcessTreeQueue()"); }
	bool BPPreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalStructure.BPPreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
	void SetStructureColorValue(int ColorRegionIndex, int SetVal) { NativeCall<void, int, int>(this, "APrimalStructure.SetStructureColorValue(int,int)", ColorRegionIndex, SetVal); }
	static int BPGetStructureID(APrimalStructure* PrimalStructure) { return NativeCall<int, APrimalStructure*>(nullptr, "APrimalStructure.BPGetStructureID(APrimalStructure*)", PrimalStructure); }
	bool BPOverrideSnappedToTransform(APrimalStructure* childStructure, int ChildSnapFromIndex, FName ChildSnapFromName, UE::Math::TVector<double>* UnsnappedPlacementPos, UE::Math::TRotator<double>* UnsnappedPlacementRot, UE::Math::TVector<double>* SnappedPlacementPos, UE::Math::TRotator<double>* SnappedPlacementRot, int SnapToIndex, FName SnapToName, UE::Math::TVector<double>& OutLocation, UE::Math::TRotator<double>& OutRotation, int& bForceInvalidateSnap, int& bForceSnapDistanceCheck) { if (!UnsnappedPlacementPos) throw std::invalid_argument("Null native value parameter"); if (!UnsnappedPlacementRot) throw std::invalid_argument("Null native value parameter"); if (!SnappedPlacementPos) throw std::invalid_argument("Null native value parameter"); if (!SnappedPlacementRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APrimalStructure *, int, FName, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int, FName, UE :: Math :: TVector < double > &, UE :: Math :: TRotator < double > &, int &, int &>(this, "APrimalStructure.BPOverrideSnappedToTransform(APrimalStructure*,int,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,int,FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int&,int&)", childStructure, ChildSnapFromIndex, ChildSnapFromName, *UnsnappedPlacementPos, *UnsnappedPlacementRot, *SnappedPlacementPos, *SnappedPlacementRot, SnapToIndex, SnapToName, OutLocation, OutRotation, bForceInvalidateSnap, bForceSnapDistanceCheck); }
	FString* BPGetCantBuildReasonString(FString* result, int ReasonVal) { return NativeCall<FString*, FString*, int>(this, "APrimalStructure.BPGetCantBuildReasonString(int)", result, ReasonVal); }
	void TemplateMiscDataApplied(const FString& MiscData) { NativeCall<void, const FString&>(this, "APrimalStructure.TemplateMiscDataApplied(FString&)", MiscData); }
	bool BPPreventStasis() { return NativeCall<bool>(this, "APrimalStructure.BPPreventStasis()"); }
	bool BPPreventUsingAsFloorForStructure(const FPlacementData& theOutPlacementData, APrimalStructure* StructureToPlaceOnMe) { return NativeCall<bool, const FPlacementData&, APrimalStructure*>(this, "APrimalStructure.BPPreventUsingAsFloorForStructure(FPlacementData&,APrimalStructure*)", theOutPlacementData, StructureToPlaceOnMe); }
	void BPUnstasis() { NativeCall<void>(this, "APrimalStructure.BPUnstasis()"); }
	bool IsGhostStructure() { return NativeCall<bool>(this, "APrimalStructure.IsGhostStructure()"); }
	void ForceReplicateLinkedStructures() { NativeCall<void>(this, "APrimalStructure.ForceReplicateLinkedStructures()"); }
	float GetStructureSquaredRadius() { return NativeCall<float>(this, "APrimalStructure.GetStructureSquaredRadius()"); }
	bool HasStructureTag(FName TagToCheck) { return NativeCall<bool, FName>(this, "APrimalStructure.HasStructureTag(FName)", TagToCheck); }
	UActorComponent* CreateComponentFromTemplateData(const FBlueprintCookedComponentInstancingData* TemplateData, FName InName) { return NativeCall<UActorComponent*, const FBlueprintCookedComponentInstancingData*, FName>(this, "APrimalStructure.CreateComponentFromTemplateData(FBlueprintCookedComponentInstancingData*,FName)", TemplateData, InName); }
	void UpdateSnowTraceResults(int TraceIndex, bool bHit) { NativeCall<void, int, bool>(this, "APrimalStructure.UpdateSnowTraceResults(int,bool)", TraceIndex, bHit); }
	void StructureSkinUndoPreviewTimer() { NativeCall<void>(this, "APrimalStructure.StructureSkinUndoPreviewTimer()"); }
	bool IsReverseVacuumCompartment() { return NativeCall<bool>(this, "APrimalStructure.IsReverseVacuumCompartment()"); }
	static void SetZiplineStructurePointers(APrimalStructure* structure0, APrimalStructure* structure1) { NativeCall<void, APrimalStructure*, APrimalStructure*>(nullptr, "APrimalStructure.SetZiplineStructurePointers(APrimalStructure*,APrimalStructure*)", structure0, structure1); }
	UPrimitiveComponent* GetOverrideTargetComponent() { return NativeCall<UPrimitiveComponent*>(this, "APrimalStructure.GetOverrideTargetComponent()"); }
	void OverrideOwner(AActor* NewOwner, bool ForceOnlyRelevantToOwner) { NativeCall<void, AActor*, bool>(this, "APrimalStructure.OverrideOwner(AActor*,bool)", NewOwner, ForceOnlyRelevantToOwner); }
	void SetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.SetPlayerConstructor(APlayerController*)", PC); }
	void DestroyOutsideWorld() { NativeCall<void>(this, "APrimalStructure.DestroyOutsideWorld()"); }
	APrimalDinoCharacter* BPGetAttachedToCharacter_Implementation() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalStructure.BPGetAttachedToCharacter_Implementation()"); }
	void BPPlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalStructure.BPPlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool BPTreatAsFoundationForSnappedStructure(APrimalStructure* OtherStructure, const FPlacementData& WithPlacementData) { return NativeCall<bool, APrimalStructure*, const FPlacementData&>(this, "APrimalStructure.BPTreatAsFoundationForSnappedStructure(APrimalStructure*,FPlacementData&)", OtherStructure, WithPlacementData); }
	FString* BPOverrideDescriptiveNameForPreview(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.BPOverrideDescriptiveNameForPreview()", result); }
	bool OverrideOnlyAllowPlacementInWater() { return NativeCall<bool>(this, "APrimalStructure.OverrideOnlyAllowPlacementInWater()"); }
	void RemoveStructureEffect(FName EffectId) { NativeCall<void, FName>(this, "APrimalStructure.RemoveStructureEffect(FName)", EffectId); }
	bool IsValidForSnappingFrom_Implementation(APrimalStructure* OtherStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.IsValidForSnappingFrom_Implementation(APrimalStructure*)", OtherStructure); }
	FName GetSnapPointName(int SnapPointIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "APrimalStructure.GetSnapPointName(int)", AsaReturnPointer, SnapPointIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void ApplyPrimalItemSettingsToStructure(UMeshComponent* meshToColorize, UPrimalItem* AssociatedPrimalItem) { NativeCall<void, UMeshComponent*, UPrimalItem*>(this, "APrimalStructure.ApplyPrimalItemSettingsToStructure(UMeshComponent*,UPrimalItem*)", meshToColorize, AssociatedPrimalItem); }
	void PrepareForSaving() { NativeCall<void>(this, "APrimalStructure.PrepareForSaving()"); }
	bool CheckAdditionalStructureTag(FName TagToCheck) { return NativeCall<bool, FName>(this, "APrimalStructure.CheckAdditionalStructureTag(FName)", TagToCheck); }
	bool IsReverseVacuumCompartment_Implementation() { return NativeCall<bool>(this, "APrimalStructure.IsReverseVacuumCompartment_Implementation()"); }
	bool IsAttachedToStructureAttachmentBase() { return NativeCall<bool>(this, "APrimalStructure.IsAttachedToStructureAttachmentBase()"); }
	void RefreshWeldedTransform() { NativeCall<void>(this, "APrimalStructure.RefreshWeldedTransform()"); }
	bool IsValidSnapPointTo_Implementation(APrimalStructure* ChildStructure, int MySnapPointToIndex, int ChildSnapPointFromIndex) { return NativeCall<bool, APrimalStructure*, int, int>(this, "APrimalStructure.IsValidSnapPointTo_Implementation(APrimalStructure*,int,int)", ChildStructure, MySnapPointToIndex, ChildSnapPointFromIndex); }
	void BlueprintAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalStructure.BlueprintAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void BPApplyCustomDurabilityOnPickup_Implementation(UPrimalItem* pickedup) { NativeCall<void, UPrimalItem*>(this, "APrimalStructure.BPApplyCustomDurabilityOnPickup_Implementation(UPrimalItem*)", pickedup); }
	float BPGetAmmoBoxReloadPercent_Implementation() { return NativeCall<float>(this, "APrimalStructure.BPGetAmmoBoxReloadPercent_Implementation()"); }
	void BlueprintDrawPreviewHUD(AShooterHUD* HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD*, float, float>(this, "APrimalStructure.BlueprintDrawPreviewHUD(AShooterHUD*,float,float)", HUD, CenterX, CenterY); }
	static APrimalStructure* BPGetFromID(UWorld* World, int TheStructureID) { return NativeCall<APrimalStructure*, UWorld*, int>(nullptr, "APrimalStructure.BPGetFromID(UWorld*,int)", World, TheStructureID); }
	bool BPPreventPlacementOnPawn(APlayerController* PC, APrimalCharacter* ForCharacter, FName ForBone) { return NativeCall<bool, APlayerController*, APrimalCharacter*, FName>(this, "APrimalStructure.BPPreventPlacementOnPawn(APlayerController*,APrimalCharacter*,FName)", PC, ForCharacter, ForBone); }
	void UnweldFromShipHull(bool bRestorePhysicsState) { NativeCall<void, bool>(this, "APrimalStructure.UnweldFromShipHull(bool)", bRestorePhysicsState); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetCollisionComponentsToDestroyOnStasis(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GetCollisionComponentsToDestroyOnStasis()", result); }
	void BlueprintDrawHUD(AShooterHUD* HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD*, float, float>(this, "APrimalStructure.BlueprintDrawHUD(AShooterHUD*,float,float)", HUD, CenterX, CenterY); }
	void BPPlacedStructure(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.BPPlacedStructure(APlayerController*)", ForPC); }
	void BPGetAggroDinoOnDamageSettings(TArray<FName, TSizedDefaultAllocator<32> >& AggroDinoClassesCustomTags, float& AggroDinoClassesRange) { NativeCall<void, TArray<FName, TSizedDefaultAllocator<32> >&, float&>(this, "APrimalStructure.BPGetAggroDinoOnDamageSettings(TArray<FName,TSizedDefaultAllocator<32>>&,float&)", AggroDinoClassesCustomTags, AggroDinoClassesRange); }
	static void SpawnZiplineActorsForInstigator(AController* pInInstigator, APrimalStructure* pZiplineAnchor0, APrimalStructure* pZiplineAnchor1) { NativeCall<void, AController*, APrimalStructure*, APrimalStructure*>(nullptr, "APrimalStructure.SpawnZiplineActorsForInstigator(AController*,APrimalStructure*,APrimalStructure*)", pInInstigator, pZiplineAnchor0, pZiplineAnchor1); }
	bool IsInsideBase(const UE::Math::TVector<double>& AtPoint) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalStructure.IsInsideBase(UE::Math::TVector<double>&)", AtPoint); }
	void UpdateTribeGroupStructureRank(unsigned char NewRank) { NativeCall<void, unsigned char>(this, "APrimalStructure.UpdateTribeGroupStructureRank(unsignedchar)", NewRank); }
	void LinkStructure(APrimalStructure* NewLinkedStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.LinkStructure(APrimalStructure*)", NewLinkedStructure); }
	UPhysicalMaterial* GetPhysMaterialOverride() { return NativeCall<UPhysicalMaterial*>(this, "APrimalStructure.GetPhysMaterialOverride()"); }
	void SetPreventSaving(bool bPrevent) { NativeCall<void, bool>(this, "APrimalStructure.SetPreventSaving(bool)", bPrevent); }
	bool FastPlaceStructureOnPawnMesh(APawn* AttachToPawn, USkeletalMeshComponent* PlaceOnMesh, FPlacementData& PlacementData) { return NativeCall<bool, APawn*, USkeletalMeshComponent*, FPlacementData&>(this, "APrimalStructure.FastPlaceStructureOnPawnMesh(APawn*,USkeletalMeshComponent*,FPlacementData&)", AttachToPawn, PlaceOnMesh, PlacementData); }
	void StructureHarvestingDepleted(UPrimalHarvestingComponent* fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalStructure.StructureHarvestingDepleted(UPrimalHarvestingComponent*)", fromComponent); }
	bool OverrideSnapToWaterSurface_Implementation() { return NativeCall<bool>(this, "APrimalStructure.OverrideSnapToWaterSurface_Implementation()"); }
	void NonLoopingStructureSkinTimer() { NativeCall<void>(this, "APrimalStructure.NonLoopingStructureSkinTimer()"); }
	void MultiAddStructuresPlacedOnFloor_Implementation(APrimalStructure* structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor_Implementation(APrimalStructure*)", structure); }
	void PlacedOnDino_Implementation(APrimalDinoCharacter* OnChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalStructure.PlacedOnDino_Implementation(APrimalDinoCharacter*)", OnChar); }
	void RestoreMemoryForUnstasis() { NativeCall<void>(this, "APrimalStructure.RestoreMemoryForUnstasis()"); }
	void DoTrapBP() { NativeCall<void>(this, "APrimalStructure.DoTrapBP()"); }
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, const FString& NewOriginalOwnerName) { NativeCall<void, int, const FString&>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID(int,FString&)", NewOriginalOwnerID, NewOriginalOwnerName); }
	void OnRep_CurrentVariantTag() { NativeCall<void>(this, "APrimalStructure.OnRep_CurrentVariantTag()"); }
	static void AddToReprocessTreeQueue(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& LinkedStructures, AController* InstigatorController, AActor* DamageCauser, bool bPickup, bool bDemo) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&, AController*, AActor*, bool, bool>(nullptr, "APrimalStructure.AddToReprocessTreeQueue(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AController*,AActor*,bool,bool)", LinkedStructures, InstigatorController, DamageCauser, bPickup, bDemo); }
	bool AllowHibernation(const wchar_t** OutRejectReason) { return NativeCall<bool, const wchar_t**>(this, "APrimalStructure.AllowHibernation(wchar_t**)", OutRejectReason); }
	UE::Math::TVector<double>* GetFoundationTop(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.GetFoundationTop()", result); }
	void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructure.AddedLinkedStructure(APrimalStructure*)", Structure); }
	void BPNetRefreshStructureColors(bool bUseColors) { NativeCall<void, bool>(this, "APrimalStructure.BPNetRefreshStructureColors(bool)", bUseColors); }
	bool AllowShowUserGeneratedText() { return NativeCall<bool>(this, "APrimalStructure.AllowShowUserGeneratedText()"); }
	bool CanSkipWeldedTransformPropagation() { return NativeCall<bool>(this, "APrimalStructure.CanSkipWeldedTransformPropagation()"); }
	void PreLinkedStructure() { NativeCall<void>(this, "APrimalStructure.PreLinkedStructure()"); }
	void BPOverrideFinalPlacementData(FPlacementData& OutPlacementData) { NativeCall<void, FPlacementData&>(this, "APrimalStructure.BPOverrideFinalPlacementData(FPlacementData&)", OutPlacementData); }
	bool BPOverrideSnappedFromTransform(APrimalStructure* parentStructure, int ParentSnapFromIndex, FName ParentSnapFromName, UE::Math::TVector<double>* UnsnappedPlacementPos, UE::Math::TRotator<double>* UnsnappedPlacementRot, UE::Math::TVector<double>* SnappedPlacementPos, UE::Math::TRotator<double>* SnappedPlacementRot, int SnapToIndex, FName SnapToName, UE::Math::TVector<double>& OutLocation, UE::Math::TRotator<double>& OutRotation, int& bForceInvalidateSnap, int& bForceSnapDistanceCheck) { if (!UnsnappedPlacementPos) throw std::invalid_argument("Null native value parameter"); if (!UnsnappedPlacementRot) throw std::invalid_argument("Null native value parameter"); if (!SnappedPlacementPos) throw std::invalid_argument("Null native value parameter"); if (!SnappedPlacementRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APrimalStructure *, int, FName, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int, FName, UE :: Math :: TVector < double > &, UE :: Math :: TRotator < double > &, int &, int &>(this, "APrimalStructure.BPOverrideSnappedFromTransform(APrimalStructure*,int,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,int,FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,int&,int&)", parentStructure, ParentSnapFromIndex, ParentSnapFromName, *UnsnappedPlacementPos, *UnsnappedPlacementRot, *SnappedPlacementPos, *SnappedPlacementRot, SnapToIndex, SnapToName, OutLocation, OutRotation, bForceInvalidateSnap, bForceSnapDistanceCheck); }
	void PlacedOnDino(APrimalDinoCharacter* OnChar) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalStructure.PlacedOnDino(APrimalDinoCharacter*)", OnChar); }
	void UnweldComponentFromShipHull(UPrimitiveComponent* Component, bool bRestorePhysicsState) { NativeCall<void, UPrimitiveComponent*, bool>(this, "APrimalStructure.UnweldComponentFromShipHull(UPrimitiveComponent*,bool)", Component, bRestorePhysicsState); }
	static bool MultiTraceSingle(UWorld* World, int ForTeam, FHitResult& OutHit, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, ECollisionChannel TraceChannel, const FCollisionQueryParams& Params, const FCollisionResponseParams& ResponseParam) { return NativeCall<bool, UWorld*, int, FHitResult&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, ECollisionChannel, const FCollisionQueryParams&, const FCollisionResponseParams&>(nullptr, "APrimalStructure.MultiTraceSingle(UWorld*,int,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&,FCollisionResponseParams&)", World, ForTeam, OutHit, Start, End, TraceChannel, Params, ResponseParam); }
	bool AllowSetPinCode() { return NativeCall<bool>(this, "APrimalStructure.AllowSetPinCode()"); }
	UE::Math::TVector<double>* BPGetAdditionalScaleForPainting_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.BPGetAdditionalScaleForPainting_Implementation()", result); }
	void ClientScaleTexture_Implementation(UStructurePaintingComponent* StructurePaintingComponent, float AddScaleX, float AddScaleY) { NativeCall<void, UStructurePaintingComponent*, float, float>(this, "APrimalStructure.ClientScaleTexture_Implementation(UStructurePaintingComponent*,float,float)", StructurePaintingComponent, AddScaleX, AddScaleY); }
	const FPrimalStructureSparseClassData* GetEffectiveSparseClassData() { return NativeCall<const FPrimalStructureSparseClassData*>(this, "APrimalStructure.GetEffectiveSparseClassData()"); }
	int BPIsAllowedToBuild_Implementation(const FPlacementData& OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, const FPlacementData&, int>(this, "APrimalStructure.BPIsAllowedToBuild_Implementation(FPlacementData&,int)", OutPlacementData, CurrentAllowedReason); }
	UActorComponent* CreateComponentFromTemplate(UActorComponent* Template, FName InName) { return NativeCall<UActorComponent*, UActorComponent*, FName>(this, "APrimalStructure.CreateComponentFromTemplate(UActorComponent*,FName)", Template, InName); }
	int BPIsAllowedToBuildEx_Implementation(const FPlacementData& OutPlacementData, int CurrentAllowedReason, APlayerController* PC, bool bFinalPlacement, bool bChoosingRotation) { return NativeCall<int, const FPlacementData&, int, APlayerController*, bool, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx_Implementation(FPlacementData&,int,APlayerController*,bool,bool)", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement, bChoosingRotation); }
	bool BPHandleBedFastTravel(AShooterPlayerController* ForPC, APrimalStructure* ToBed) { return NativeCall<bool, AShooterPlayerController*, APrimalStructure*>(this, "APrimalStructure.BPHandleBedFastTravel(AShooterPlayerController*,APrimalStructure*)", ForPC, ToBed); }
	void RearmEffectExpiryTimer() { NativeCall<void>(this, "APrimalStructure.RearmEffectExpiryTimer()"); }
	bool TryForwardDamageToOwnerShip(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, float& AppliedDamage) { return NativeCall<bool, float, const FDamageEvent&, AController*, AActor*, float&>(this, "APrimalStructure.TryForwardDamageToOwnerShip(float,FDamageEvent&,AController*,AActor*,float&)", Damage, DamageEvent, EventInstigator, DamageCauser, AppliedDamage); }
	void RecomputeActiveEffectsDamageMult() { NativeCall<void>(this, "APrimalStructure.RecomputeActiveEffectsDamageMult()"); }
	float BPGetCustomItemRepairPercentage(UPrimalItem* Item) { return NativeCall<float, UPrimalItem*>(this, "APrimalStructure.BPGetCustomItemRepairPercentage(UPrimalItem*)", Item); }
	void ExecSkinNetMessage(APrimalStructure* ForStructure, FName MessageName, const FSkinNetMessageParams& skinNetMessageParams) { NativeCall<void, APrimalStructure*, FName, const FSkinNetMessageParams&>(this, "APrimalStructure.ExecSkinNetMessage(APrimalStructure*,FName,FSkinNetMessageParams&)", ForStructure, MessageName, skinNetMessageParams); }
	void UpdateNavigation() { NativeCall<void>(this, "APrimalStructure.UpdateNavigation()"); }
	void BPPostSetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.BPPostSetStructureCollisionChannels()"); }
	bool IsInsideBase_Implementation(const UE::Math::TVector<double>& AtPoint) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalStructure.IsInsideBase_Implementation(UE::Math::TVector<double>&)", AtPoint); }
	void MultiSetupTrap_Implementation(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.MultiSetupTrap_Implementation(bool)", bEnabled); }
	bool BPStructureSkinTryMultiUse(APrimalStructure* ForStructure, APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APrimalStructure*, APlayerController*, int>(this, "APrimalStructure.BPStructureSkinTryMultiUse(APrimalStructure*,APlayerController*,int)", ForStructure, ForPC, UseIndex); }
	bool IsPublicTeleporter() { return NativeCall<bool>(this, "APrimalStructure.IsPublicTeleporter()"); }
	UE::Math::TVector<double>* BPOverrideMeleeSwingDamageBlockLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.BPOverrideMeleeSwingDamageBlockLocation()", result); }
	void SetStructureSkinUndoPreviewTimer() { NativeCall<void>(this, "APrimalStructure.SetStructureSkinUndoPreviewTimer()"); }
	bool OverrideOnlyAllowPlacementInWater_Implementation() { return NativeCall<bool>(this, "APrimalStructure.OverrideOnlyAllowPlacementInWater_Implementation()"); }
	APrimalShip* GetWeldRootShip() { return NativeCall<APrimalShip*>(this, "APrimalStructure.GetWeldRootShip()"); }
	bool BPConsumeProjectileImpact(AShooterProjectile* theProjectile, const FHitResult& HitResult, AActor* DamageCauser) { return NativeCall<bool, AShooterProjectile*, const FHitResult&, AActor*>(this, "APrimalStructure.BPConsumeProjectileImpact(AShooterProjectile*,FHitResult&,AActor*)", theProjectile, HitResult, DamageCauser); }
	bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructure.IsPinLocked()"); }
	void MultiHandleSkinNetMessage(FName MessageName, const FSkinNetMessageParams& skinNetMessageParams) { NativeCall<void, FName, const FSkinNetMessageParams&>(this, "APrimalStructure.MultiHandleSkinNetMessage(FName,FSkinNetMessageParams&)", MessageName, skinNetMessageParams); }
	int GetStructureColorValue(int ColorRegionIndex) { return NativeCall<int, int>(this, "APrimalStructure.GetStructureColorValue(int)", ColorRegionIndex); }
	bool BPPreventPlacingOnFloorStructure(const FPlacementData& theOutPlacementData, APrimalStructure* FloorStructure) { return NativeCall<bool, const FPlacementData&, APrimalStructure*>(this, "APrimalStructure.BPPreventPlacingOnFloorStructure(FPlacementData&,APrimalStructure*)", theOutPlacementData, FloorStructure); }
	static bool UseStructureHibernation() { return NativeCall<bool>(nullptr, "APrimalStructure.UseStructureHibernation()"); }
	bool IsUnderwaterBase_Implementation() { return NativeCall<bool>(this, "APrimalStructure.IsUnderwaterBase_Implementation()"); }
	__int64 GetCustomCosmeticModID() { return NativeCall<__int64>(this, "APrimalStructure.GetCustomCosmeticModID()"); }
	void PostSpawnStasisCompCleanup() { NativeCall<void>(this, "APrimalStructure.PostSpawnStasisCompCleanup()"); }
	void BP_OnPaintingComponentInitialized(const UStructurePaintingComponent* PaintingComp) { NativeCall<void, const UStructurePaintingComponent*>(this, "APrimalStructure.BP_OnPaintingComponentInitialized(UStructurePaintingComponent*)", PaintingComp); }
	UE::Math::TVector<double>* OverrideWaterVolumeCheckPointOffset_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.OverrideWaterVolumeCheckPointOffset_Implementation()", result); }
};