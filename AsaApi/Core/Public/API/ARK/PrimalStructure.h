#pragma once

#include "Actor.h"

struct APrimalStructure : APrimalTargetableActor
{
    // Fields

    UE::Math::TVector2<double>& OverlayTooltipPaddingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalStructure.OverlayTooltipPadding"); }
    UE::Math::TVector2<double>& OverlayTooltipScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalStructure.OverlayTooltipScale"); }
    float& MaxTooltipPawnSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaxTooltipPawnSpeed"); }
    UTexture2D*& BuildingIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructure.BuildingIcon"); }
    FName& StructureTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.StructureTag"); }
    TSubclassOf<UPrimalItem>& ConsumesPrimalItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.ConsumesPrimalItem"); }
    float& ScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ScaleFactor"); }
    int& StructureSnapTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureSnapTypeFlags"); }
    UE::Math::TIntVector3<int>& ExtraStructureSnapTypeFlagsField() { return *GetNativePointerField<UE::Math::TIntVector3<int>*>(this, "APrimalStructure.ExtraStructureSnapTypeFlags"); }
    TArray<FStructureVariant, TSizedDefaultAllocator<32> >& VariantsField() { return *GetNativePointerField<TArray<FStructureVariant, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.Variants"); }
    FName& CurrentVariantTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.CurrentVariantTag"); }
    float& PlacementOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementOffsetForVerticalGround"); }
    float& PlacementInitialTracePointOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementInitialTracePointOffsetForVerticalGround"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& StructuresAllowedToBeVerticalGroundField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.StructuresAllowedToBeVerticalGround"); }
    float& TraceDistanceFromActorToWallVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.TraceDistanceFromActorToWallVerticalGround"); }
    UE::Math::TVector<double>& FlipByScaleDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.FlipByScaleDirection"); }
    UE::Math::TVector<double>& PlacementCollisionAdjustmentBufferField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementCollisionAdjustmentBuffer"); }
    float& PlacementYawOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementYawOffsetIncrement"); }
    UE::Math::TVector<double>& PlacementHitLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementHitLocOffset"); }
    UE::Math::TVector<double>& PlacementEncroachmentCheckOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementEncroachmentCheckOffset"); }
    UE::Math::TVector<double>& PlacementEncroachmentBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementEncroachmentBoxExtent"); }
    UE::Math::TVector<double>& PlacementTraceScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PlacementTraceScale"); }
    UE::Math::TVector<double>& SnapAlternatePlacementTraceScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.SnapAlternatePlacementTraceScale"); }
    UE::Math::TVector<double>& WorldGeoCheckExtraBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.WorldGeoCheckExtraBoxExtent"); }
    UE::Math::TRotator<double>& PlacementRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.PlacementRotOffset"); }
    UE::Math::TRotator<double>& PlacementTraceRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.PlacementTraceRotOffset"); }
    UE::Math::TRotator<double>& SnappingRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.SnappingRotationOffset"); }
    float& RepairAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairAmountRemaining"); }
    float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairCheckInterval"); }
    float& PlacementFloorCheckZExtentUpField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtentUp"); }
    float& RepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairPercentPerInterval"); }
    float& DecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriod"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& PreventPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreventPlacingOnFloorClasses"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& AllowPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.AllowPlacingOnFloorClasses"); }
    UStaticMeshComponent*& MyStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructure.MyStaticMesh"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructure.CosmeticVariantStaticMesh"); }
    USceneComponent*& MyRootTransformField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructure.MyRootTransform"); }
    int& TraceIgnoreStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.TraceIgnoreStructuresWithTypeFlags"); }
    TArray<FName, TSizedDefaultAllocator<32> >& EncroachmentCheckIgnoreStructureTypeTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.EncroachmentCheckIgnoreStructureTypeTags"); }
    TArray<FPrimalStructureSnapPoint, TSizedDefaultAllocator<32> >& SnapPointsField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPoint, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.SnapPoints"); }
    int& bTraceCheckOnlyUseStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
    FieldArray<unsigned __int8, 6> AllowStructureColorSetsField() { return { this, "APrimalStructure.AllowStructureColorSets" }; }
    UE::Math::TVector<double>& WaterVolumeCheckPointOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.WaterVolumeCheckPointOffset"); }
    float& WaterPlacementMinimumWaterHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.WaterPlacementMinimumWaterHeight"); }
    float& PlacementMaxZDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZDelta"); }
    float& PlacementChooseRotationMaxRangeOverrideField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementChooseRotationMaxRangeOverride"); }
    float& PlacementAdjustHeightLimitUpField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementAdjustHeightLimitUp"); }
    float& PlacementAdjustHeightLimitDownField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementAdjustHeightLimitDown"); }
    float& PlacementMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxRange"); }
    float& MaxSnapLocRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaxSnapLocRange"); }
    float& SnapOverlapCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapOverlapCheckRadius"); }
    float& MaximumFoundationSupport2DBuildDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumFoundationSupport2DBuildDistance"); }
    float& AdditionalFoundationSupportDistanceForLinkedStructuresField() { return *GetNativePointerField<float*>(this, "APrimalStructure.AdditionalFoundationSupportDistanceForLinkedStructures"); }
    float& PlacementFloorCheckZExtentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtent"); }
    float& LastHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHealthPercentage"); }
    UE::Math::TRotator<double>& TakeGroundNormalRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.TakeGroundNormalRotationOffset"); }
    float& DemolishGiveItemCraftingResourcePercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage"); }
    TSoftClassPtr<APrimalStructure>& AllowReplacementByStructureClassTypeField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "APrimalStructure.AllowReplacementByStructureClassType"); }
    TSoftClassPtr<APrimalStructure>& PreventReplacementOfStructureClassTypeField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "APrimalStructure.PreventReplacementOfStructureClassType"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PreventReplacementOfStructureClassTypesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreventReplacementOfStructureClassTypes"); }
    UE::Math::TVector<double>& ReplacementCheckOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.ReplacementCheckOffset"); }
    float& MaximumHeightAboveWorldGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightAboveWorldGround"); }
    float& MaximumHeightUnderWorldMaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightUnderWorldMaxKillZ"); }
    UE::Math::TRotator<double>& PreviewCameraRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.PreviewCameraRotation"); }
    UE::Math::TVector<double>& PreviewCameraPivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.PreviewCameraPivotOffset"); }
    float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDistanceScaleFactor"); }
    float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDefaultZoomMultiplier"); }
    float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraMaxZoomMultiplier"); }
    float& ReturnDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageAmount"); }
    int& StructureRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureRangeTypeFlag"); }
    TArray<FName, TSizedDefaultAllocator<32> >& StructureRangeTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.StructureRangeTags"); }
    int& LimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.LimitMaxStructuresInRangeTypeFlag"); }
    float& ReturnDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageImpulse"); }
    TSubclassOf<UDamageType>& ReturnDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructure.ReturnDamageType"); }
    TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >& ReturnDamageExcludeIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ReturnDamageExcludeIncomingTypes"); }
    TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >& ReturnDamageOnlyForIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ReturnDamageOnlyForIncomingTypes"); }
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
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& SnapToStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.SnapToStructureTypesToExclude"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& SnapFromStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.SnapFromStructureTypesToExclude"); }
    TArray<FName, TSizedDefaultAllocator<32> >& SnapToStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.SnapToStructureTagsToExclude"); }
    TArray<FName, TSizedDefaultAllocator<32> >& SnapFromStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.SnapFromStructureTagsToExclude"); }
    APrimalStructure*& PlacedOnFloorStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PlacedOnFloorStructure"); }
    APrimalStructure*& PrimarySnappedStructureChildField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructure.PrimarySnappedStructureParent"); }
    FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwnerName"); }
    FieldArray<__int16, 6> StructureColorsField() { return { this, "APrimalStructure.StructureColors" }; }
    APawn*& AttachedToField() { return *GetNativePointerField<APawn**>(this, "APrimalStructure.AttachedTo"); }
    unsigned int& StructureIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.StructureID"); }
    unsigned int& AttachedToDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.AttachedToDinoID1"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& OnlyAllowStructureClassesToAttachField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.OnlyAllowStructureClassesToAttach"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& OnlyAllowStructureClassesFromAttachField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.OnlyAllowStructureClassesFromAttach"); }
    unsigned int& TaggedIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndex"); }
    unsigned int& TaggedIndexTwoField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndexTwo"); }
    unsigned int& ProcessTreeTagField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.ProcessTreeTag"); }
    ABiomeZoneVolume*& MyBiomeZoneVolumeField() { return *GetNativePointerField<ABiomeZoneVolume**>(this, "APrimalStructure.MyBiomeZoneVolume"); }
    FTimerHandle& RepairCheckTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructure.RepairCheckTimerHandle"); }
    long double& LastStructureStasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastStructureStasisTime"); }
    long double& LastColorizationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastColorizationTime"); }
    UMaterialInterface*& StructureIconMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructure.StructureIconMaterial"); }
    UE::Math::TVector<double>& AdvancedRotationPlacementOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.AdvancedRotationPlacementOffset"); }
    TSubclassOf<APrimalEmitterSpawnable>& SpawnEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructure.SpawnEmitter"); }
    TSubclassOf<APrimalEmitterSpawnable>& DestructionEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructure.DestructionEmitter"); }
    UE::Math::TVector<double>& SpawnEmitterLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.SpawnEmitterLocationOffset"); }
    UE::Math::TRotator<double>& SpawnEmitterRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructure.SpawnEmitterRotationOffset"); }
    TSubclassOf<UPrimalItem>& PickupGivesItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructure.PickupGivesItem"); }
    float& ExcludeInStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExcludeInStructuresRadius"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& ExcludeInStructuresRadiusClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ExcludeInStructuresRadiusClasses"); }
    TArray<FName, TSizedDefaultAllocator<32> >& ExcludeInStructuresRadiusTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ExcludeInStructuresRadiusTags"); }
    float& LastFadeOpacityField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastFadeOpacity"); }
    long double& LastFailedPinTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastFailedPinTime"); }
    TWeakObjectPtr<UMeshComponent>& PrimaryMeshComponentField() { return *GetNativePointerField<TWeakObjectPtr<UMeshComponent>*>(this, "APrimalStructure.PrimaryMeshComponent"); }
    UStructurePaintingComponent*& PaintingComponentField() { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructure.PaintingComponent"); }
    TArray<FString, TSizedDefaultAllocator<32> >& PreventBuildStructureReasonStringOverridesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreventBuildStructureReasonStringOverrides"); }
    UE::Math::TVector<double>& FloatingHudLocTextOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.FloatingHudLocTextOffset"); }
    float& UsablePriorityField() { return *GetNativePointerField<float*>(this, "APrimalStructure.UsablePriority"); }
    long double& LastBumpedDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastBumpedDamageTime"); }
    int& ForceLimitStructuresInRangeField() { return *GetNativePointerField<int*>(this, "APrimalStructure.ForceLimitStructuresInRange"); }
    int& PlacementMaterialForwardDirIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructure.PlacementMaterialForwardDirIndex"); }
    float& ForcePreventPlacingInOfflineRaidStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
    FName& AttachToStaticMeshSocketNameBaseField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.AttachToStaticMeshSocketNameBase"); }
    UE::Math::TVector<double>& AttachToStaticMeshSocketMinScaleDefaultField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.AttachToStaticMeshSocketMinScaleDefault"); }
    TMap<FName, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TVector<double>, 0> >& AttachToStaticMeshSocketMinScaleOverridesField() { return *GetNativePointerField<TMap<FName, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TVector<double>, 0> >*>(this, "APrimalStructure.AttachToStaticMeshSocketMinScaleOverrides"); }
    TSubclassOf<UPrimalHarvestingComponent>& StructureHarvestingComponentField() { return *GetNativePointerField<TSubclassOf<UPrimalHarvestingComponent>*>(this, "APrimalStructure.StructureHarvestingComponent"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructure.MyStructureHarvestingComponent"); }
    TSharedPtr<FAttachedInstancedHarvestingElement>& MyStructureHarvestingElementField() { return *GetNativePointerField<TSharedPtr<FAttachedInstancedHarvestingElement>*>(this, "APrimalStructure.MyStructureHarvestingElement"); }
    TSubclassOf<AActor>& ItemsUseAlternateActorClassAttachmentField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalStructure.ItemsUseAlternateActorClassAttachment"); }
    float& UnstasisAutoDestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.UnstasisAutoDestroyAfterTime"); }
    unsigned __int8& TribeRankHUDYOffsetField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructure.TribeRankHUDYOffset"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& PreventSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreventSaddleDinoClasses"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& AllowSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.AllowSaddleDinoClasses"); }
    FName& PlaceOnWallUseStaticMeshTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PlaceOnWallUseStaticMeshTag"); }
    TSoftClassPtr<APrimalStructure>& SnapStructureClassField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "APrimalStructure.SnapStructureClass"); }
    float& DemolishActivationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishActivationTime"); }
    UE::Math::TVector<double>& GroundEncroachmentCheckLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructure.GroundEncroachmentCheckLocationOffset"); }
    int& StructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureMinAllowedVersion"); }
    int& SavedStructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.SavedStructureMinAllowedVersion"); }
    float& OverrideEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideEnemyFoundationPreventionRadius"); }
    float& OverridePVPEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverridePVPEnemyFoundationPreventionRadius"); }
    float& ExpandEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExpandEnemyFoundationPreventionRadius"); }
    int& BedIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.BedID"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& ForceAllowWallAttachmentClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ForceAllowWallAttachmentClasses"); }
    float& LimitMaxStructuresInRangeRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LimitMaxStructuresInRangeRadius"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& FastDecayLinkedStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.FastDecayLinkedStructureClasses"); }
    float& PlacementMaxZAbovePlayerHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZAbovePlayerHeight"); }
    USkeletalMeshComponent*& MySKCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructure.MySKComp"); }
    TArray<USceneComponent*, TSizedDefaultAllocator<32> >& OverrideTargetComponentsField() { return *GetNativePointerField<TArray<USceneComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.OverrideTargetComponents"); }
    float& OverrideApproachRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideApproachRadius"); }
    AMissionType*& OwnerMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalStructure.OwnerMission"); }
    FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructure.PlaceUsingItemID"); }
    TArray<FName, TSizedDefaultAllocator<32> >& CustomDataModifiedOnStructurePickupField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.CustomDataModifiedOnStructurePickup"); }
    float& FloorHideGrassTraceToGroundDistanceNonFoundationField() { return *GetNativePointerField<float*>(this, "APrimalStructure.FloorHideGrassTraceToGroundDistanceNonFoundation"); }
    FDelegateHandle& OnClientBlockedUserIdsRecievedDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "APrimalStructure.OnClientBlockedUserIdsRecievedDelegateHandle"); }
    TObjectPtr<UTexture2D>& RenameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.RenameIcon"); }
    TObjectPtr<UTexture2D>& PickupIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.PickupIcon"); }
    TObjectPtr<UTexture2D>& DemolishIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.DemolishIcon"); }
    TObjectPtr<UTexture2D>& RepairIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.RepairIcon"); }
    TObjectPtr<UTexture2D>& CantRepairIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.CantRepairIcon"); }
    TObjectPtr<UTexture2D>& ColorizeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.ColorizeIcon"); }
    TObjectPtr<UTexture2D>& OpenContainerIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.OpenContainerIcon"); }
    TObjectPtr<UTexture2D>& ClaimIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.ClaimIcon"); }
    TObjectPtr<UTexture2D>& UseSoapIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.UseSoapIcon"); }
    TObjectPtr<UTexture2D>& ShowRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.ShowRangeIcon"); }
    TObjectPtr<UTexture2D>& HideRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.HideRangeIcon"); }
    TObjectPtr<UTexture2D>& LockIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.LockIcon"); }
    TObjectPtr<UTexture2D>& UnlockIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.UnlockIcon"); }
    TObjectPtr<UTexture2D>& SetPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.SetPinCodeIcon"); }
    TObjectPtr<UTexture2D>& ClearPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.ClearPinCodeIcon"); }
    TObjectPtr<UTexture2D>& EnterPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.EnterPinCodeIcon"); }
    TObjectPtr<UTexture2D>& SetPinCodeInRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.SetPinCodeInRangeIcon"); }
    TObjectPtr<UTexture2D>& EnableAdminOnlyAccessField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.EnableAdminOnlyAccess"); }
    TObjectPtr<UTexture2D>& DisableAdminOnlyAccessField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.DisableAdminOnlyAccess"); }
    TObjectPtr<UTexture2D>& TribeRankSettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.TribeRankSettingsIcon"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& TribeActivationRankSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.TribeActivationRankSelectionIcons"); }
    TObjectPtr<UTexture2D>& VariantsFolderIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.VariantsFolderIcon"); }
    TObjectPtr<UTexture2D>& DefaultVariantIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructure.DefaultVariantIcon"); }
    bool& bHasBeenAttachedToDinoField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bHasBeenAttachedToDino"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bIsFlippable() { return { this, "APrimalStructure.bIsFlippable" }; }
    BitFieldValue<bool, unsigned __int32> bFlipByScale() { return { this, "APrimalStructure.bFlipByScale" }; }
    BitFieldValue<bool, unsigned __int32> bFlipInvertLocOffset() { return { this, "APrimalStructure.bFlipInvertLocOffset" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlipped() { return { this, "APrimalStructure.bIsFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bShowInPlaceableList() { return { this, "APrimalStructure.bShowInPlaceableList" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "APrimalStructure.bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedMaterials() { return { this, "APrimalStructure.bInitializedMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWallAttachments() { return { this, "APrimalStructure.bForceAllowWallAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRefreshedStructureColors() { return { this, "APrimalStructure.bUseBPRefreshedStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed() { return { this, "APrimalStructure.bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsTeleporter() { return { this, "APrimalStructure.bIsTeleporter" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorframe() { return { this, "APrimalStructure.bIsDoorframe" }; }
    BitFieldValue<bool, unsigned __int32> bClientAddPlacedOnFloorStructures() { return { this, "APrimalStructure.bClientAddPlacedOnFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis() { return { this, "APrimalStructure.bUseBPPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis() { return { this, "APrimalStructure.bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis() { return { this, "APrimalStructure.bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGame() { return { this, "APrimalStructure.bUseBPPostLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementUsesWeaponClipAmmo() { return { this, "APrimalStructure.bPlacementUsesWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished() { return { this, "APrimalStructure.bIgnoreDyingWhenDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteTakeAnythingAsGround() { return { this, "APrimalStructure.bAbsoluteTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnDynamicsFoliageAndDoors() { return { this, "APrimalStructure.bDisablePlacementOnDynamicsFoliageAndDoors" }; }
    BitFieldValue<bool, unsigned __int32> bSeatedDisableCollisionCheck() { return { this, "APrimalStructure.bSeatedDisableCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsAllowedToBuildEx() { return { this, "APrimalStructure.bUseBPIsAllowedToBuildEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleStructureEnabled() { return { this, "APrimalStructure.bUseBPHandleStructureEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnVerticalGround() { return { this, "APrimalStructure.bForcePlacingOnVerticalGround" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementShouldNotBeHorizontal() { return { this, "APrimalStructure.bPlacementShouldNotBeHorizontal" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresGroundedPlacement() { return { this, "APrimalStructure.bRequiresGroundedPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresPvPOnly() { return { this, "APrimalStructure.bAllowPlacingOnOtherTeamStructuresPvPOnly" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseSkeletalMeshComponent() { return { this, "APrimalStructure.bForceUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation() { return { this, "APrimalStructure.UseBPOverrideTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance() { return { this, "APrimalStructure.bOverrideFoundationSupportDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableFootSound() { return { this, "APrimalStructure.bForceDisableFootSound" }; }
    BitFieldValue<bool, unsigned __int32> bTraceThruEncroachmentPoints() { return { this, "APrimalStructure.bTraceThruEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOverlapInsteadOfEncroachmentPoints() { return { this, "APrimalStructure.bUseMeshOverlapInsteadOfEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects() { return { this, "APrimalStructure.bDidSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoPlacementDistanceIncrease() { return { this, "APrimalStructure.bPreventDinoPlacementDistanceIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bPendingRemoval() { return { this, "APrimalStructure.bPendingRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bWasAttachedToPawn() { return { this, "APrimalStructure.bWasAttachedToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideCollisionProfile() { return { this, "APrimalStructure.bDontOverrideCollisionProfile" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedRotationPlacement() { return { this, "APrimalStructure.bUseAdvancedRotationPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingReplaced() { return { this, "APrimalStructure.bIsBeingReplaced" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrimitiveColor() { return { this, "APrimalStructure.bSetPrimitiveColor" }; }
    BitFieldValue<bool, unsigned __int32> bSetPrimitiveHealth() { return { this, "APrimalStructure.bSetPrimitiveHealth" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacingPlayerStructure() { return { this, "APrimalStructure.bIsPlacingPlayerStructure" }; }
    BitFieldValue<bool, unsigned __int32> bRootFoundationLimitBuildArea() { return { this, "APrimalStructure.bRootFoundationLimitBuildArea" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets() { return { this, "APrimalStructure.bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToPawn() { return { this, "APrimalStructure.bAllowAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle() { return { this, "APrimalStructure.bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementTraceIgnorePawns() { return { this, "APrimalStructure.bPlacementTraceIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bRequireFreePrimarySnappedStructure() { return { this, "APrimalStructure.bRequireFreePrimarySnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiplePrimarySnappedStructures() { return { this, "APrimalStructure.bAllowMultiplePrimarySnappedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowPlacementInWater() { return { this, "APrimalStructure.bOnlyAllowPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnGround() { return { this, "APrimalStructure.bForcePlacingOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bTakeAnythingAsGround() { return { this, "APrimalStructure.bTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoundation() { return { this, "APrimalStructure.bIsFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bForceCheckNearbyEnemyFoundation() { return { this, "APrimalStructure.bForceCheckNearbyEnemyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsFloor() { return { this, "APrimalStructure.bIsFloor" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup() { return { this, "APrimalStructure.bForceFloorCollisionGroup" }; }
    BitFieldValue<bool, unsigned __int32> bIsWall() { return { this, "APrimalStructure.bIsWall" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPreventCropsBiomes() { return { this, "APrimalStructure.bDisallowPreventCropsBiomes" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired() { return { this, "APrimalStructure.bCanBeRepaired" }; }
    BitFieldValue<bool, unsigned __int32> bReturnDamageOnHitFromPawn() { return { this, "APrimalStructure.bReturnDamageOnHitFromPawn" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis() { return { this, "APrimalStructure.bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseFromRidingDino() { return { this, "APrimalStructure.bAllowUseFromRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsFenceFoundation() { return { this, "APrimalStructure.bIsFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseFenceFoundation() { return { this, "APrimalStructure.bUseFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyBlockSelfTraceChannel() { return { this, "APrimalStructure.bUseOnlyBlockSelfTraceChannel" }; }
    BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped() { return { this, "APrimalStructure.bWasPlacementSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bIsCoreStructure() { return { this, "APrimalStructure.bIsCoreStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateStructure() { return { this, "APrimalStructure.bDeprecateStructure" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresToBeInsideZoneVolume() { return { this, "APrimalStructure.bRequiresToBeInsideZoneVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoadBearing() { return { this, "APrimalStructure.bAllowLoadBearing" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnvironmentStructure() { return { this, "APrimalStructure.bIsEnvironmentStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDemolished() { return { this, "APrimalStructure.bDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bSetStaticMobility() { return { this, "APrimalStructure.bSetStaticMobility" }; }
    BitFieldValue<bool, unsigned __int32> bIsPvE() { return { this, "APrimalStructure.bIsPvE" }; }
    BitFieldValue<bool, unsigned __int32> bBeginPlayIgnoreApplyScale() { return { this, "APrimalStructure.bBeginPlayIgnoreApplyScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnVariantSwitch() { return { this, "APrimalStructure.bUseBPOnVariantSwitch" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnStructureFloors() { return { this, "APrimalStructure.bRequiresPlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnStructureFloors() { return { this, "APrimalStructure.bDisablePlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyStructureIfFloorDestroyed() { return { this, "APrimalStructure.bDestroyStructureIfFloorDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlacementCollisionCheck() { return { this, "APrimalStructure.bUsePlacementCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseLenientWorldGeoObstructionCheck() { return { this, "APrimalStructure.bUseLenientWorldGeoObstructionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresSnapping() { return { this, "APrimalStructure.bRequiresSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bSnappingRequiresNearbyFoundation() { return { this, "APrimalStructure.bSnappingRequiresNearbyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapRotation() { return { this, "APrimalStructure.bAllowSnapRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowSnapRotationForStructure() { return { this, "APrimalStructure.bUseBPAllowSnapRotationForStructure" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideObstructedSnaps() { return { this, "APrimalStructure.bForceHideObstructedSnaps" }; }
    BitFieldValue<bool, unsigned __int32> bDontCheckSnapsForObstruction() { return { this, "APrimalStructure.bDontCheckSnapsForObstruction" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation() { return { this, "APrimalStructure.bPlacementChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementIgnoreChooseRotation() { return { this, "APrimalStructure.bPlacementIgnoreChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementAdjustHeight() { return { this, "APrimalStructure.bPlacementAdjustHeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseSnapFromPlacementOverrideEvenWhenNotSnapped() { return { this, "APrimalStructure.bUseSnapFromPlacementOverrideEvenWhenNotSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacingOnWall() { return { this, "APrimalStructure.bRequiresPlacingOnWall" }; }
    BitFieldValue<bool, unsigned __int32> bSnapRequiresPlacementOnGround() { return { this, "APrimalStructure.bSnapRequiresPlacementOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapOntoSameLocation() { return { this, "APrimalStructure.bAllowSnapOntoSameLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyFoundationIfSnappedToFoundation() { return { this, "APrimalStructure.bOnlyFoundationIfSnappedToFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bFoundationRequiresGroundTrace() { return { this, "APrimalStructure.bFoundationRequiresGroundTrace" }; }
    BitFieldValue<bool, unsigned __int32> bPlacingOnGroundRequiresNoStructure() { return { this, "APrimalStructure.bPlacingOnGroundRequiresNoStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormal() { return { this, "APrimalStructure.bTakeGroundNormal" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormalDirectly() { return { this, "APrimalStructure.bTakeGroundNormalDirectly" }; }
    BitFieldValue<bool, unsigned __int32> bFinalPlacementDontAdjustForMaxRange() { return { this, "APrimalStructure.bFinalPlacementDontAdjustForMaxRange" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureColors() { return { this, "APrimalStructure.bAllowStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bDebug() { return { this, "APrimalStructure.bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bUseFadeInEffect() { return { this, "APrimalStructure.bUseFadeInEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUsingStructureColors() { return { this, "APrimalStructure.bUsingStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDefaultVariant() { return { this, "APrimalStructure.bPreventDefaultVariant" }; }
    BitFieldValue<bool, unsigned __int32> bCarriedByDino() { return { this, "APrimalStructure.bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement() { return { this, "APrimalStructure.bAllowPickingUpStructureAfterPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePickingUpStructureAfterPlacementOnTryMultiUse() { return { this, "APrimalStructure.bDisablePickingUpStructureAfterPlacementOnTryMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomEvent() { return { this, "APrimalStructure.bUseBlueprintAnimNotifyCustomEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUsesHealth() { return { this, "APrimalStructure.bUsesHealth" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSnappedToOtherFloorStructures() { return { this, "APrimalStructure.bIgnoreSnappedToOtherFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bEnforceStructureLinkExactRotation() { return { this, "APrimalStructure.bEnforceStructureLinkExactRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround() { return { this, "APrimalStructure.bForceSnappedStructureToGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockIK() { return { this, "APrimalStructure.bForceBlockIK" }; }
    BitFieldValue<bool, unsigned __int32> bStationaryStructure() { return { this, "APrimalStructure.bStationaryStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePawns() { return { this, "APrimalStructure.bIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bForcePushTroughWallCheck() { return { this, "APrimalStructure.bForcePushTroughWallCheck" }; }
    BitFieldValue<bool, unsigned __int32> bCanDemolish() { return { this, "APrimalStructure.bCanDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructures() { return { this, "APrimalStructure.bAllowPlacingOnOtherTeamStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPlacementInWater() { return { this, "APrimalStructure.bPreventPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInRegularStructurePreventionZones() { return { this, "APrimalStructure.bAllowInRegularStructurePreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetStructureCollisionChannels() { return { this, "APrimalStructure.bDontSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventEnemyStructuresNearby() { return { this, "APrimalStructure.bForcePreventEnemyStructuresNearby" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEnemyDemolish() { return { this, "APrimalStructure.bAllowEnemyDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallySnapJustPlacement() { return { this, "APrimalStructure.bDontActuallySnapJustPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInRange() { return { this, "APrimalStructure.bIgnoreMaxStructuresInRange" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingUseSkeletalMesh() { return { this, "APrimalStructure.bPaintingUseSkeletalMesh" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPaintingComponent() { return { this, "APrimalStructure.bUsesPaintingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bCanBuildUpon() { return { this, "APrimalStructure.bCanBuildUpon" }; }
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime() { return { this, "APrimalStructure.bHasResetDecayTime" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowInPreventionVolumes() { return { this, "APrimalStructure.bForceAllowInPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bDoForceCreateDynamicMaterials() { return { this, "APrimalStructure.bDoForceCreateDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetInfoFromConsumedItemForPlacedStructure() { return { this, "APrimalStructure.bUseBPGetInfoFromConsumedItemForPlacedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bImmuneToAutoDemolish() { return { this, "APrimalStructure.bImmuneToAutoDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInSmallRadius() { return { this, "APrimalStructure.bIgnoreMaxStructuresInSmallRadius" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustPlacementIfCollide() { return { this, "APrimalStructure.bAdjustPlacementIfCollide" }; }
    BitFieldValue<bool, unsigned __int32> bAlignToSaddleWhenPlacing() { return { this, "APrimalStructure.bAlignToSaddleWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingByCorruptDinos() { return { this, "APrimalStructure.bAllowTargetingByCorruptDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTreatAsFoundationForSnappedStructure() { return { this, "APrimalStructure.bUseBPTreatAsFoundationForSnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnStructurePickup() { return { this, "APrimalStructure.bUseBPOnStructurePickup" }; }
    BitFieldValue<bool, unsigned __int32> bPerInstanceSnapPoints() { return { this, "APrimalStructure.bPerInstanceSnapPoints" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToWaterSurface() { return { this, "APrimalStructure.bSnapToWaterSurface" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdatedHealth() { return { this, "APrimalStructure.bUseBPUpdatedHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveName() { return { this, "APrimalStructure.bUseBPOverrideDescriptiveName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveNameForPreview() { return { this, "APrimalStructure.bUseBPOverrideDescriptiveNameForPreview" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCreationOfDynamicMaterials() { return { this, "APrimalStructure.bPreventCreationOfDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasisUnlessPrevented() { return { this, "APrimalStructure.bDestroyOnStasisUnlessPrevented" }; }
    BitFieldValue<bool, unsigned __int32> bPreviewApplyColorToChildComponents() { return { this, "APrimalStructure.bPreviewApplyColorToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachToSaddle() { return { this, "APrimalStructure.bPreventAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bForcePersonalStructureOwnership() { return { this, "APrimalStructure.bForcePersonalStructureOwnership" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowStructureAccess() { return { this, "APrimalStructure.bBPOverrideAllowStructureAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverideDemolish() { return { this, "APrimalStructure.bBPOverideDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDemolish() { return { this, "APrimalStructure.bUseBPOnDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWith() { return { this, "APrimalStructure.bBPOverrideAllowSnappingWith" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWithButAlsoCallSuper() { return { this, "APrimalStructure.bBPOverrideAllowSnappingWithButAlsoCallSuper" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLinkedStructureDestroyed() { return { this, "APrimalStructure.bUseBPOnLinkedStructureDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseTribeGroupStructureRank() { return { this, "APrimalStructure.bUseTribeGroupStructureRank" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockStationaryTraces() { return { this, "APrimalStructure.bForceBlockStationaryTraces" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocket() { return { this, "APrimalStructure.bAttachToStaticMeshSocket" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketRotation() { return { this, "APrimalStructure.bAttachToStaticMeshSocketRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceGroundForFoundation() { return { this, "APrimalStructure.bForceGroundForFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedToTransform() { return { this, "APrimalStructure.bBPOverrideSnappedToTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedFromTransform() { return { this, "APrimalStructure.bBPOverrideSnappedFromTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverridePlacementRotation() { return { this, "APrimalStructure.bBPOverridePlacementRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm() { return { this, "APrimalStructure.bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bNoCollision() { return { this, "APrimalStructure.bNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedDynamicMaterials() { return { this, "APrimalStructure.bCreatedDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewStructure() { return { this, "APrimalStructure.bIsPreviewStructure" }; }
    BitFieldValue<bool, unsigned __int32> bStructureUseAltCollisionChannel() { return { this, "APrimalStructure.bStructureUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy() { return { this, "APrimalStructure.bDemolishJustDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityDemolish() { return { this, "APrimalStructure.bHighPriorityDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSnapStructure() { return { this, "APrimalStructure.bDisableSnapStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis() { return { this, "APrimalStructure.bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUD() { return { this, "APrimalStructure.bBlueprintDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawPreviewHUD() { return { this, "APrimalStructure.bBlueprintDrawPreviewHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterial() { return { this, "APrimalStructure.bUsesWorldSpaceMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTrace() { return { this, "APrimalStructure.bForceIgnoreStationaryObjectTrace" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawns() { return { this, "APrimalStructure.bForceAllowNearSupplyCrateSpawns" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannels() { return { this, "APrimalStructure.bBPPostSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccess() { return { this, "APrimalStructure.bPickupGiveItemRequiresAccess" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItem() { return { this, "APrimalStructure.bUseBPAllowPickupGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructures() { return { this, "APrimalStructure.bPreventAttachedChildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlaced() { return { this, "APrimalStructure.bPreventPreviewIfWeaponPlaced" }; }
    BitFieldValue<bool, unsigned __int32> bStructuresInRangeTypeFlagUseAltCollisionChannel() { return { this, "APrimalStructure.bStructuresInRangeTypeFlagUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bIsDrawingHUDPickupTimer() { return { this, "APrimalStructure.bIsDrawingHUDPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTargeting() { return { this, "APrimalStructure.bIgnoredByTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bBPCheckItemRequiementsToBuild() { return { this, "APrimalStructure.bBPCheckItemRequiementsToBuild" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAggroDinoOnDamageSettings() { return { this, "APrimalStructure.bUseBPGetAggroDinoOnDamageSettings" }; }
    BitFieldValue<bool, unsigned __int32> bWasPickedUp() { return { this, "APrimalStructure.bWasPickedUp" }; }
    BitFieldValue<bool, unsigned __int32> bCanAttachToExosuit() { return { this, "APrimalStructure.bCanAttachToExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeStoredByExosuit() { return { this, "APrimalStructure.bCanBeStoredByExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bStructureIgnoreDying() { return { this, "APrimalStructure.bStructureIgnoreDying" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor() { return { this, "APrimalStructure.bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor() { return { this, "APrimalStructure.bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventCharacterBasing() { return { this, "APrimalStructure.bUseBPPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDynamicObstacle() { return { this, "APrimalStructure.bDontSetDynamicObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters() { return { this, "APrimalStructure.bDontSetDamageParameters" }; }
    BitFieldValue<bool, unsigned __int32> bBedUsesDefaultDestination() { return { this, "APrimalStructure.bBedUsesDefaultDestination" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRegisterSkeletalMeshesOnDedicatedServer() { return { this, "APrimalStructure.bAllowRegisterSkeletalMeshesOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseInfiniteStaticMeshDrawDistance() { return { this, "APrimalStructure.bUseInfiniteStaticMeshDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bDidHideGrass() { return { this, "APrimalStructure.bDidHideGrass" }; }
    BitFieldValue<bool, unsigned __int32> bHasWindSourceComponentsToInteractWithVolumetricDispatcher() { return { this, "APrimalStructure.bHasWindSourceComponentsToInteractWithVolumetricDispatcher" }; }

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
    bool IsValidSnapPointFrom(APrimalStructure* ParentStructure, int MySnapPointFromIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointFrom(APrimalStructure*,int)", ParentStructure, MySnapPointFromIndex); }
    bool IsValidSnapPointTo(APrimalStructure* ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure*, int>(this, "APrimalStructure.IsValidSnapPointTo(APrimalStructure*,int)", ChildStructure, MySnapPointToIndex); }
    void MultiSetPickupAllowedBeforeNetworkTime(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime(double)", NewTime); }
    void NetUpdateTeamAndOwnerName(int NewTeam, const FString* NewOwnerName) { NativeCall<void, int, const FString*>(this, "APrimalStructure.NetUpdateTeamAndOwnerName(int,FString&)", NewTeam, NewOwnerName); }
    void SetDefaultDestinationStructure(APrimalStructure* DestinationStructure, AShooterPlayerController* ForPC) { NativeCall<void, APrimalStructure*, AShooterPlayerController*>(this, "APrimalStructure.SetDefaultDestinationStructure(APrimalStructure*,AShooterPlayerController*)", DestinationStructure, ForPC); }
    void SetEnabledPrimarySnappedStructureParent(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent(bool)", bEnabled); }
    static void StaticRegisterNativesAPrimalStructure() { NativeCall<void>(nullptr, "APrimalStructure.StaticRegisterNativesAPrimalStructure()"); }
    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructure.GetPrivateStaticClass()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
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
    void SetDinoSaddleAttachment(APrimalDinoCharacter* myDino, FName BoneName, UE::Math::TVector<double>* RelLoc, UE::Math::TRotator<double>* RelRot, bool bMaintainWorldPosition) { NativeCall<void, APrimalDinoCharacter*, FName, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool>(this, "APrimalStructure.SetDinoSaddleAttachment(APrimalDinoCharacter*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool)", myDino, BoneName, RelLoc, RelRot, bMaintainWorldPosition); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructure.PostSpawnInitialize()"); }
    //void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructure.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.SetStructureCollisionChannels()"); }
    void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>(this, "APrimalStructure.ApplyScale(bool)", bOnlyInitPhysics); }
    void PostSpawnInitialize(const UE::Math::TTransform<double>* SpawnTransform, AActor* InOwner, APawn* InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay, bool bPrimalDeferConstruction, ESpawnActorScaleMethod TransformScaleMethod) { NativeCall<void, const UE::Math::TTransform<double>*, AActor*, APawn*, bool, bool, bool, bool, bool, ESpawnActorScaleMethod>(this, "APrimalStructure.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool,bool,bool,ESpawnActorScaleMethod)", SpawnTransform, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay, bPrimalDeferConstruction, TransformScaleMethod); }
    bool UseDynamicMobility() { return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility()"); }
    void SetStaticMobility() { NativeCall<void>(this, "APrimalStructure.SetStaticMobility()"); }
    void SetDynamicMobility() { NativeCall<void>(this, "APrimalStructure.SetDynamicMobility()"); }
    void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview()"); }
    bool TickPlacingStructure(APrimalStructurePlacer* PlacerActor, float DeltaTime) { return NativeCall<bool, APrimalStructurePlacer*, float>(this, "APrimalStructure.TickPlacingStructure(APrimalStructurePlacer*,float)", PlacerActor, DeltaTime); }
    FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructure.GetDebugInfoString()", result); }
    int IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, FPlacementData* OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double>* PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData) { return NativeCall<int, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FPlacementData*, bool, UE::Math::TRotator<double>*, bool, bool>(this, "APrimalStructure.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool)", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData); }
    static char IsPointNearSupplyCrateSpawn(UWorld* theWorld, UE::Math::TVector<double>* AtPoint) { return NativeCall<char, UWorld*, UE::Math::TVector<double>*>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn(UWorld*,UE::Math::TVector<double>)", theWorld, AtPoint); }
    TSubclassOf<APrimalStructure>* GetBedFilterClass_Implementation(TSubclassOf<APrimalStructure>* result) { return NativeCall<TSubclassOf<APrimalStructure> *, TSubclassOf<APrimalStructure>*>(this, "APrimalStructure.GetBedFilterClass_Implementation()", result); }
    FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructure.GetSpawnPointInfo()", result); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PostInitializeComponents()"); }
    bool AllowSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime, APrimalStructure* FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructure.AllowSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)", PC, bCheckCooldownTime, FromStructure); }
    void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, const FString* NewOriginalOwnerName) { NativeCall<void, int, const FString*>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation(int,FString&)", NewOriginalOwnerID, NewOriginalOwnerName); }
    void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, const FString* PlacementOwningPlayerName, APrimalStructure* ForcePrimaryParent) { NativeCall<void, int, int, const FString*, APrimalStructure*>(this, "APrimalStructure.NonPlayerFinalStructurePlacement(int,int,FString&,APrimalStructure*)", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent); }
    char FinalStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bFlipped, FPlacementData* PlacementData) { return NativeCall<char, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APawn*, FName, bool, FPlacementData*>(this, "APrimalStructure.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped, PlacementData); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructure.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    bool GetSnapToLocation(UE::Math::TVector<double>* AtLoc, UE::Math::TRotator<double>* AtRotation, FPlacementData* OutPlacementData, APrimalStructure** OutParentStructure, int* OutSnapToIndex, APlayerController* PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FPlacementData*, APrimalStructure**, int*, APlayerController*, bool, int>(this, "APrimalStructure.GetSnapToLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FPlacementData&,APrimalStructure**,int*,APlayerController*,bool,int)", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle); }
    int IsValidStructureReplacement(APrimalStructure* OtherStructure) { return NativeCall<int, APrimalStructure*>(this, "APrimalStructure.IsValidStructureReplacement(APrimalStructure*)", OtherStructure); }
    void GetSnapToParentStructures(UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* SnapToParentStructures, APlayerController* PC) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, APlayerController*>(this, "APrimalStructure.GetSnapToParentStructures(UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,APlayerController*)", AtLocation, AtRotation, SnapToParentStructures, PC); }
    char IsValidSnapParent(APrimalStructure* OtherStructure, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation) { return NativeCall<char, APrimalStructure*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructure.IsValidSnapParent(APrimalStructure*,UE::Math::TVector<double>,UE::Math::TRotator<double>)", OtherStructure, AtLocation, AtRotation); }
    bool GetPlacingGroundLocation(AActor** OutHitActor, FPlacementData* OutPlacementData, APlayerController* PC, bool bFinalPlacement, int SnapPointCycle, UPrimitiveComponent** OutComponent, bool bUseOriginalOutPlacementData) { return NativeCall<bool, AActor**, FPlacementData*, APlayerController*, bool, int, UPrimitiveComponent**, bool>(this, "APrimalStructure.GetPlacingGroundLocation(AActor*&,FPlacementData&,APlayerController*,bool,int,UPrimitiveComponent**,bool)", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle, OutComponent, bUseOriginalOutPlacementData); }
    __int64 CheckForWallParent(APlayerController* PC, UE::Math::TVector<double>* PlacementLoc, UE::Math::TRotator<double>* PlacementRot, FHitResult* OutHit) { return NativeCall<__int64, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FHitResult*>(this, "APrimalStructure.CheckForWallParent(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResult&)", PC, PlacementLoc, PlacementRot, OutHit); }
    FHitResult* CheckForAnyGround(FHitResult* result, APlayerController* PC, UE::Math::TVector<double>* PlacementLoc, bool* OutHit, bool IgnoreDownTrace) { return NativeCall<FHitResult*, FHitResult*, APlayerController*, UE::Math::TVector<double>*, bool*, bool>(this, "APrimalStructure.CheckForAnyGround(APlayerController*,UE::Math::TVector<double>,bool&,bool)", result, PC, PlacementLoc, OutHit, IgnoreDownTrace); }
    bool ClampBuildLocation(UE::Math::TVector<double>* FromLocation, AActor** OutHitActor, FPlacementData* OutPlacementData, bool bDontAdjustForMaxRange, APlayerController* PC, bool bFinalPlacement) { return NativeCall<bool, UE::Math::TVector<double>*, AActor**, FPlacementData*, bool, APlayerController*, bool>(this, "APrimalStructure.ClampBuildLocation(UE::Math::TVector<double>,AActor*&,FPlacementData&,bool,APlayerController*,bool)", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC, bFinalPlacement); }
    char CheckNotEncroaching(UE::Math::TVector<double>* PlacementLocation, UE::Math::TRotator<double>* PlacementRotation, AActor* DinoCharacter, APrimalStructure* SnappedToParentStructure, APrimalStructure* ReplacesStructure, bool bUseAlternatePlacementTraceScale, bool bFirstOnly) { return NativeCall<char, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, AActor*, APrimalStructure*, APrimalStructure*, bool, bool>(this, "APrimalStructure.CheckNotEncroaching(UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,APrimalStructure*,APrimalStructure*,bool,bool)", PlacementLocation, PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale, bFirstOnly); }
    bool IsValidEncroachment(const TArray<FOverlapResult, TSizedDefaultAllocator<32> >* Overlaps, APrimalStructure* ReplacingStructure) { return NativeCall<bool, const TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, APrimalStructure*>(this, "APrimalStructure.IsValidEncroachment(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,APrimalStructure*)", Overlaps, ReplacingStructure); }
    bool IsValidEncroachment(AActor* OverlapActor, UPrimitiveComponent* OverlapComp, APrimalStructure* ReplacingStructure) { return NativeCall<bool, AActor*, UPrimitiveComponent*, APrimalStructure*>(this, "APrimalStructure.IsValidEncroachment(AActor*,UPrimitiveComponent*,APrimalStructure*)", OverlapActor, OverlapComp, ReplacingStructure); }
    __int64 IsObstructedByTerrainOrWorldGeo(APlayerController* PC, UE::Math::TVector<double>* PlacementLocation, UE::Math::TRotator<double>* PlacementRotation, bool bUseAlternatePlacementTraceScale) { return NativeCall<__int64, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool>(this, "APrimalStructure.IsObstructedByTerrainOrWorldGeo(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,bool)", PC, PlacementLocation, PlacementRotation, bUseAlternatePlacementTraceScale); }
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
    static void FindFoundations(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StartingStructures, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.FindFoundations(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", StartingStructures, Foundations); }
    static void FindFoundations(APrimalStructure* StartingStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations) { NativeCall<void, APrimalStructure*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.FindFoundations(APrimalStructure*,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", StartingStructure, Foundations); }
    static void CullAgainstFoundations(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StartingStructures, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.CullAgainstFoundations(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", StartingStructures, Foundations); }
    static bool CullAgainstFoundations(APrimalStructure** StartingStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations) { return NativeCall<bool, APrimalStructure**, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.CullAgainstFoundations(APrimalStructure*&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", StartingStructure, Foundations); }
    static void FlagConnectionsLessThan(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Structures, int Connections, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StructuresToDestroy) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, int, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.FlagConnectionsLessThan(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,int,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", Structures, Connections, StructuresToDestroy); }
    static void FlagReachable(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* Foundations) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(nullptr, "APrimalStructure.FlagReachable(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", Foundations); }
    static void FlagReachable(APrimalStructure* StartingStructure) { NativeCall<void, APrimalStructure*>(nullptr, "APrimalStructure.FlagReachable(APrimalStructure*)", StartingStructure); }
    static void CleanUpTree(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StartingStructures, AController* InstigatorController, AActor* DamageCauser, bool bPickup, bool bDemo) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, AController*, AActor*, bool, bool>(nullptr, "APrimalStructure.CleanUpTree(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,AController*,AActor*,bool,bool)", StartingStructures, InstigatorController, DamageCauser, bPickup, bDemo); }
    //static void CleanUpTree(APrimalStructure* StartingStructure, AController* InstigatorController, AActor* DamageCauser, unsigned int depth, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >* CollectedResources, bool bPickup, bool bDemo, bool bUseResourceMap) { NativeCall<void, APrimalStructure*, AController*, AActor*, unsigned int, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >*, bool, bool, bool>(nullptr, "APrimalStructure.CleanUpTree(APrimalStructure*,AController*,AActor*,unsignedint,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool,bool)", StartingStructure, InstigatorController, DamageCauser, depth, CollectedResources, bPickup, bDemo, bUseResourceMap); }
    void DelayedCleanUpTree() { NativeCall<void>(this, "APrimalStructure.DelayedCleanUpTree()"); }
    void RemoveLinkedStructure(APrimalStructure* Structure, AController* InstigatorController, AActor* DamageCauser) { NativeCall<void, APrimalStructure*, AController*, AActor*>(this, "APrimalStructure.RemoveLinkedStructure(APrimalStructure*,AController*,AActor*)", Structure, InstigatorController, DamageCauser); }
    void ScreenDoorFadeAway(const FDamageEvent* DamageEvent, APawn* InstigatingPawn) { NativeCall<void, const FDamageEvent*, APawn*>(this, "APrimalStructure.ScreenDoorFadeAway(FDamageEvent&,APawn*)", DamageEvent, InstigatingPawn); }
    void DoDie(UPrimalHarvestingComponent* fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalStructure.DoDie()", fromComponent); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void RefreshStructureColors(UMeshComponent* ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructure.RefreshStructureColors(UMeshComponent*)", ForceRefreshComponent); }
    FLinearColor* GetStructureColorForID(FLinearColor* result, int SetNum, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "APrimalStructure.GetStructureColorForID(int,int)", result, SetNum, ID); }
    void BPNetRefreshStructureColors_Implementation(bool bUseColors) { NativeCall<void, bool>(this, "APrimalStructure.BPNetRefreshStructureColors_Implementation(bool)", bUseColors); }
    bool Internal_IsInSnapChain(APrimalStructure* theStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructure.Internal_IsInSnapChain(APrimalStructure*)", theStructure); }
    void GetAllLinkedStructures(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* OutLinkedStructures, TSubclassOf<APrimalStructure> ChildOfClass) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TSubclassOf<APrimalStructure>>(this, "APrimalStructure.GetAllLinkedStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TSubclassOf<APrimalStructure>)", OutLinkedStructures, ChildOfClass); }
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
    void ServerRequestUseItemWithActor(APlayerController* ForPC, UObject* anItem, int AdditionalData) { NativeCall<void, APlayerController*, UObject*, int>(this, "APrimalStructure.ServerRequestUseItemWithActor(APlayerController*,UObject*,int)", ForPC, anItem, AdditionalData); }
    bool IsNetRelevantFor(const AActor* RealViewer, const AActor* Viewer, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APrimalStructure.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, Viewer, SrcLocation); }
    void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation()"); }
    void FadeInEffectTick() { NativeCall<void>(this, "APrimalStructure.FadeInEffectTick()"); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructure.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, bCheckedBox); }
    __int64 GetNumStructuresInRange(UE::Math::TVector<double>* AtLocation, float WithinRange) { return NativeCall<__int64, UE::Math::TVector<double>*, float>(this, "APrimalStructure.GetNumStructuresInRange(UE::Math::TVector<double>,float)", AtLocation, WithinRange); }
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
    bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass) { return NativeCall<bool, TSubclassOf<APrimalStructure>>(this, "APrimalStructure.PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure>)", FloorClass); }
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
    void SetHarvestingActive(bool bActive, bool bOverrideBaseHealth, float BaseHarvestHealthMult, bool bAssignToTribe, int AssignedToTribeID) { NativeCall<void, bool, bool, float, bool, int>(this, "APrimalStructure.SetHarvestingActive(bool,bool,float,bool,int)", bActive, bOverrideBaseHealth, BaseHarvestHealthMult, bAssignToTribe, AssignedToTribeID); }
    bool GetClosestTargetOverride(const UE::Math::TVector<double>* attackPos, UE::Math::TVector<double>* targetPos) { return NativeCall<bool, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.GetClosestTargetOverride(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", attackPos, targetPos); }
    void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalStructure.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    char RefreshStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bFlipped) { return NativeCall<char, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APawn*, FName, bool>(this, "APrimalStructure.RefreshStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool)", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
    void ClearStructureLinks(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructure.ClearStructureLinks(APlayerController*)", ForPC); }
    bool CanAttachToExosuit_Implementation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.CanAttachToExosuit_Implementation(AShooterPlayerController*)", ForPC); }
    bool CanBeStoredByExosuit_Implementation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructure.CanBeStoredByExosuit_Implementation(AShooterPlayerController*)", ForPC); }
    void PickupStructureAndDependingLinkedStructures(APlayerController* ForPC, bool IsFirstPickup) { NativeCall<void, APlayerController*, bool>(this, "APrimalStructure.PickupStructureAndDependingLinkedStructures(APlayerController*,bool)", ForPC, IsFirstPickup); }
    //void DemolishStructureAndDependingLinkedStructures(APlayerController* ForPC, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >* CollectedResources, bool IsFirst, bool bUseResourceMap) { NativeCall<void, APlayerController*, TMap<TSubclassOf<UPrimalItem>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>, int, 0> >*, bool, bool>(this, "APrimalStructure.DemolishStructureAndDependingLinkedStructures(APlayerController*,TMap<TSubclassOf<UPrimalItem>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPrimalItem>,int,0>>&,bool,bool)", ForPC, CollectedResources, IsFirst, bUseResourceMap); }
    TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* PreviewCulledStructures(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* result, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* InOutStructuresOnFloors) { return NativeCall<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreviewCulledStructures(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", result, InOutStructuresOnFloors); }
    void GatherStructuresPlacedOnFloor(APrimalStructure* ForStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* StructuresOnFloors) { NativeCall<void, APrimalStructure*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.GatherStructuresPlacedOnFloor(APrimalStructure*,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", ForStructure, StructuresOnFloors); }
    void PreviewCleanUpTree(APrimalStructure* StartingStructure, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* OutRemovedStructures) { NativeCall<void, APrimalStructure*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructure.PreviewCleanUpTree(APrimalStructure*,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&)", StartingStructure, OutRemovedStructures); }
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
    bool GetSnapPlacementMeshOverride(const FPlacementData* PlacementData, UStaticMesh** OutStaticMesh, UClass** OutReplacementClass, UE::Math::TVector<double>* PreviewLocOffset, UE::Math::TRotator<double>* PreviewRotOffset, UE::Math::TVector<double>* PreviewScaleOffset) { return NativeCall<bool, const FPlacementData*, UStaticMesh**, UClass**, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TVector<double>*>(this, "APrimalStructure.GetSnapPlacementMeshOverride(FPlacementData&,UStaticMesh**,UClass**,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,UE::Math::TVector<double>*)", PlacementData, OutStaticMesh, OutReplacementClass, PreviewLocOffset, PreviewRotOffset, PreviewScaleOffset); }
    void UpdateStructureMesh() { NativeCall<void>(this, "APrimalStructure.UpdateStructureMesh()"); }
    UStaticMesh* GetStructureMeshAndTransform(FName VariantTag, UE::Math::TTransform<double>* MeshTransform) { return NativeCall<UStaticMesh*, FName, UE::Math::TTransform<double>*>(this, "APrimalStructure.GetStructureMeshAndTransform(FName,UE::Math::TTransform<double>&)", VariantTag, MeshTransform); }
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
};

struct APrimalStructureBearTrap : APrimalStructure
{
    // Fields

    USkeletalMeshComponent*& TrapSKField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureBearTrap.TrapSK"); }
    USphereComponent*& TriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureBearTrap.TriggerComponent"); }
    USoundCue*& TrapTriggerSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureBearTrap.TrapTriggerSound"); }
    TSubclassOf<UDamageType>& TrapDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureBearTrap.TrapDamageType"); }
    float& TrapMinPawnMassField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMinPawnMass"); }
    float& TrapMaxPawnMassField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMaxPawnMass"); }
    float& TrapDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapDamageAmount"); }
    float& PeriodicalTrapDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTime"); }
    float& PeriodicalTrapDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageAmount"); }
    float& IgnoreTriggerAfterSpawnTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.IgnoreTriggerAfterSpawnTime"); }
    TArray<FName, TSizedDefaultAllocator<32> >& IgnoreDinosWithCustomTagField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.IgnoreDinosWithCustomTag"); }
    TArray<FName, TSizedDefaultAllocator<32> >& ForceImmobilizeDinosWithCustomTagField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.ForceImmobilizeDinosWithCustomTag"); }
    float& HealthDecreasePerSecPlayersField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecPlayers"); }
    float& HealthDecreasePerSecWildField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecWild"); }
    APrimalCharacter*& ImmobilizedCharacterField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureBearTrap.ImmobilizedCharacter"); }
    char& ClientPrevTrapStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureBearTrap.ClientPrevTrapState"); }
    float& HealthDecreasePerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSec"); }
    long double& DestroyTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBearTrap.DestroyTime"); }
    float& DestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.DestroyAfterTime"); }
    TArray<TSubclassOf<UShooterDamageType>, TSizedDefaultAllocator<32> >& DamagedOnlyByField() { return *GetNativePointerField<TArray<TSubclassOf<UShooterDamageType>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.DamagedOnlyBy"); }
    long double& NetworkPlacementTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBearTrap.NetworkPlacementTime"); }
    UParticleSystem*& OnDestroyFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureBearTrap.OnDestroyFX"); }
    FTimerHandle& HideAnimatedSKHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureBearTrap.HideAnimatedSKHandle"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bBPUseNotifyImmobilizedCharacterIsDeadOrInConscious() { return { this, "APrimalStructureBearTrap.bBPUseNotifyImmobilizedCharacterIsDeadOrInConscious" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureBearTrap.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureBearTrap() { NativeCall<void>(nullptr, "APrimalStructureBearTrap.StaticRegisterNativesAPrimalStructureBearTrap()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureBearTrap.BeginPlay()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureBearTrap.PlacedStructure(AShooterPlayerController*)", PC); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureBearTrap.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureBearTrap.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureBearTrap.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructureBearTrap.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureBearTrap.Destroyed()"); }
    void TriggerTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult* SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult*>(this, "APrimalStructureBearTrap.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
    void DecreaseDamageTimer(bool a2) { NativeCall<void, bool>(this, "APrimalStructureBearTrap.DecreaseDamageTimer()", a2); }
    void PeriodicalTrapDamageTimer() { NativeCall<void>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTimer()"); }
    void ShowAnimatedSK(bool a2) { NativeCall<void, bool>(this, "APrimalStructureBearTrap.ShowAnimatedSK()", a2); }
    void HideAnimatedSK() { NativeCall<void>(this, "APrimalStructureBearTrap.HideAnimatedSK()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBearTrap.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void GotoTrapState(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.GotoTrapState(signedchar)", TrapState); }
    void NetGotoTrapState_Implementation(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.NetGotoTrapState_Implementation(signedchar)", TrapState); }
    void UpdateStructureMesh() { NativeCall<void>(this, "APrimalStructureBearTrap.UpdateStructureMesh()"); }
};

struct APrimalStructureItemContainer : APrimalStructure
{
    // Fields

    UPrimalInventoryComponent* MyInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureItemContainer.MyInventoryComponent"); }
    float& SolarRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMin"); }
    float& SolarRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshInterval"); }
    long double& LastSolarRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSolarRefreshTime"); }
    TSubclassOf<UPrimalItem>& BatteryClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.BatteryClassOverride"); }
    int& PoweredOverrideCounterField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.PoweredOverrideCounter"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ActivateMaterials"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& InActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.InActivateMaterials"); }
    //TArray<FItemToDisplayInStructureTooltip, TSizedDefaultAllocator<32> >& ItemsToDisplayInStructureTooltipField() { return *GetNativePointerField<TArray<FItemToDisplayInStructureTooltip, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ItemsToDisplayInStructureTooltip"); }
    UChildActorComponent*& MyChildEmitterSpawnableField() { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureItemContainer.MyChildEmitterSpawnable"); }
    FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxName"); }
    int& MaxBoxNameLengthField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxBoxNameLength"); }
    float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.InsulationRange"); }
    float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HypoThermiaInsulation"); }
    float& ContainerActiveDecreaseHealthSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ContainerActiveDecreaseHealthSpeed"); }
    float& FuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.FuelConsumptionIntervalsMultiplier"); }
    float& DropInventoryOnDestructionLifespanField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryOnDestructionLifespan"); }
    FString& ActivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.ActivateContainerString"); }
    TObjectPtr<UTexture2D>& ActivateContainerIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.ActivateContainerIcon"); }
    FString& DeactivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DeactivateContainerString"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DeactivateContainerIcon"); }
    TSubclassOf<UDamageType>& ContainerActiveHealthDecreaseDamageTypePassiveField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.ContainerActiveHealthDecreaseDamageTypePassive"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ActiveRequiresFuelItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ActiveRequiresFuelItems"); }
    TArray<float, TSizedDefaultAllocator<32> >& FuelItemsConsumeIntervalField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.FuelItemsConsumeInterval"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& FuelItemsConsumedGiveItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.FuelItemsConsumedGiveItems"); }
    long double& NetDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.NetDestructionTime"); }
    unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureItemContainer.CurrentPinCode"); }
    long double& CurrentFuelTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.CurrentFuelTimeCache"); }
    long double& LastCheckedFuelTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastCheckedFuelTime"); }
    int& LinkedPowerJunctionStructureIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructureID"); }
    int& CurrentItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.CurrentItemCount"); }
    int& BlacklistedItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.BlacklistedItemCount"); }
    int& MaxItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxItemCount"); }
    int& EmitterColorRegionIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.EmitterColorRegionIndex"); }
    TWeakObjectPtr<APrimalStructure>& LinkedPowerJunctionStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure>*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructure"); }
    TSubclassOf<UPrimalItem>& NextConsumeFuelGiveItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.NextConsumeFuelGiveItemType"); }
    long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastLockStateChangeTime"); }
    long double& LastActiveStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActiveStateChangeTime"); }
    int& LastPowerJunctionLinkIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastPowerJunctionLinkID"); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureItemContainer.MapMarkerLocationInfo"); }
    FTimerHandle& UpdateContainerActiveHealthDecreaseHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecreaseHandle"); }
    float& BasedCharacterDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageInterval"); }
    float& BasedCharacterDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageAmount"); }
    TSubclassOf<UDamageType>& BasedCharacterDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.BasedCharacterDamageType"); }
    TSubclassOf<UPrimalItem>& EngramRequirementClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.EngramRequirementClassOverride"); }
    AActor*& LinkedBlueprintSpawnActorPointField() { return *GetNativePointerField<AActor**>(this, "APrimalStructureItemContainer.LinkedBlueprintSpawnActorPoint"); }
    TSoftClassPtr<APrimalStructureItemContainer>& PoweredNearbyStructureTemplateField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureTemplate"); }
    float& PoweredNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureRange"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureItemContainer.JunctionLinkParticleTemplate"); }
    TSubclassOf<UPrimalUI>& UISceneTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "APrimalStructureItemContainer.UISceneTemplate"); }
    FString& OpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.OpenSceneActionName"); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.OpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionName"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionIcon"); }
    TSubclassOf<UPrimalItem>& RequiresItemForOpenSceneActionField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.RequiresItemForOpenSceneAction"); }
    long double& DeathCacheCreationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.DeathCacheCreationTime"); }
    long double& LastBasedCharacterDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageTime"); }
    int& LastBasedCharacterDamageFrameField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageFrame"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSignNamingTime"); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureItemContainer.JunctionLinkCableParticle"); }
    UE::Math::TVector<double>& JunctionCableBeamOffsetStartField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetStart"); }
    UE::Math::TVector<double>& JunctionCableBeamOffsetEndField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetEnd"); }
    USoundBase*& ContainerActivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerActivatedSound"); }
    USoundBase*& ContainerDeactivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerDeactivatedSound"); }
    TSubclassOf<APrimalStructureItemContainer>& DemolishInventoryDepositClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.DemolishInventoryDepositClass"); }
    TSubclassOf<UPrimalItem>& FuelItemTrueClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.FuelItemTrueClass"); }
    TSubclassOf<UPrimalItem>& ReplicatedFuelItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemClass"); }
    float& CurrentFuelQuantityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.CurrentFuelQuantity"); }
    float& DrawFuelRemainingOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DrawFuelRemainingOffset"); }
    float& TimeCooldownRequestFuelRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.TimeCooldownRequestFuelRemaining"); }
    __int16& ReplicatedFuelItemColorIndexField() { return *GetNativePointerField<__int16*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex"); }
    //UFXSystemAsset*& DefaultParticleTemplateField() { return *GetNativePointerField<UFXSystemAsset**>(this, "APrimalStructureItemContainer.DefaultParticleTemplate"); }
    FLinearColor& DefaultParticleLightColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalStructureItemContainer.DefaultParticleLightColor"); }
    USoundBase*& DefaultAudioTemplateField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.DefaultAudioTemplate"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& OverrideParticleTemplateItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleTemplateItemClasses"); }
    //TArray<UFXSystemAsset*, TSizedDefaultAllocator<32> >& OverrideParticleTemplatesField() { return *GetNativePointerField<TArray<UFXSystemAsset*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleTemplates"); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    TArray<FLinearColor, TSizedDefaultAllocator<32> >& OverrideParticleLightColorField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleLightColor"); }
    TArray<USoundBase*, TSizedDefaultAllocator<32> >& OverrideAudioTemplatesField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideAudioTemplates"); }
    float& MaxActivationDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.MaxActivationDistance"); }
    FString& BoxNamePrefaceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxNamePrefaceString"); }
    TArray<float, TSizedDefaultAllocator<32> >& FuelConsumeDecreaseDurabilityAmountsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.FuelConsumeDecreaseDurabilityAmounts"); }
    float& RandomFuelUpdateTimeMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMin"); }
    float& RandomFuelUpdateTimeMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMax"); }
    long double& LastDeactivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastDeactivatedTime"); }
    long double& LastActivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActivatedTime"); }
    float& ValidCraftingResourceMaxDurabilityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ValidCraftingResourceMaxDurability"); }
    float& ActivationCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ActivationCooldownTime"); }
    unsigned __int64& DeathCacheCharacterIDField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureItemContainer.DeathCacheCharacterID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureItemContainer.LocalCorpseEmitter"); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& DropInventoryDepositTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryDepositTraceDistance"); }
    TMap<FName, FPrimalWirelessReferences, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FPrimalWirelessReferences, 0> >& WirelessExchangeRefsField() { return *GetNativePointerField<TMap<FName, FPrimalWirelessReferences, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FPrimalWirelessReferences, 0> >*>(this, "APrimalStructureItemContainer.WirelessExchangeRefs"); }
    TArray<TWeakObjectPtr<AShooterPlayerController>, TSizedDefaultAllocator<32> >& ValidatedByPinCodePlayerControllersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterPlayerController>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ValidatedByPinCodePlayerControllers"); }
    FTimerHandle& AdjustNetDestructionTimeHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureItemContainer.AdjustNetDestructionTimeHandle"); }
    FColor& ActivatedIconColorField() { return *GetNativePointerField<FColor*>(this, "APrimalStructureItemContainer.ActivatedIconColor"); }
    FColor& DeactivatedIconColorField() { return *GetNativePointerField<FColor*>(this, "APrimalStructureItemContainer.DeactivatedIconColor"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.EnableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.AllowWirelessCraftingIcon"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.PreventWirelessCraftingIcon"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DrinkWaterIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAdjustDamageAsPlayerWithEquipment() { return { this, "APrimalStructureItemContainer.bAdjustDamageAsPlayerWithEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bUseCollisionCompsForFloatingDPS() { return { this, "APrimalStructureItemContainer.bUseCollisionCompsForFloatingDPS" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyConsumeDurabilityOnEquipmentForEnemies() { return { this, "APrimalStructureItemContainer.bOnlyConsumeDurabilityOnEquipmentForEnemies" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateContainer() { return { this, "APrimalStructureItemContainer.bAutoActivateContainer" }; }
    BitFieldValue<bool, unsigned __int32> bCanToggleActivation() { return { this, "APrimalStructureItemContainer.bCanToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenFueled() { return { this, "APrimalStructureItemContainer.bAutoActivateWhenFueled" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomName() { return { this, "APrimalStructureItemContainer.bAllowCustomName" }; }
    BitFieldValue<bool, unsigned __int32> bContainerActivated() { return { this, "APrimalStructureItemContainer.bContainerActivated" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated() { return { this, "APrimalStructureItemContainer.bOnlyUseSpoilingMultipliersIfActivated" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingSubstractConnectedWater() { return { this, "APrimalStructureItemContainer.bCraftingSubstractConnectedWater" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking() { return { this, "APrimalStructureItemContainer.bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bClientBPNotifyInventoryItemChanges() { return { this, "APrimalStructureItemContainer.bClientBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUI() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUI" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFuelConsumptionMultiplier() { return { this, "APrimalStructureItemContainer.bUseBPGetFuelConsumptionMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPreventToggleActivation() { return { this, "APrimalStructureItemContainer.bPreventToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChangesUseQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bStartedUnderwater() { return { this, "APrimalStructureItemContainer.bStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bCheckStartedUnderwater() { return { this, "APrimalStructureItemContainer.bCheckStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUISecondary() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUISecondary" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUITertiary() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUITertiary" }; }
    BitFieldValue<bool, unsigned __int32> bFuelAllowActivationWhenNoPower() { return { this, "APrimalStructureItemContainer.bFuelAllowActivationWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBattery() { return { this, "APrimalStructureItemContainer.bPoweredAllowBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBattery() { return { this, "APrimalStructureItemContainer.bPoweredUsingBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBattery() { return { this, "APrimalStructureItemContainer.bPoweredHasBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowSolar() { return { this, "APrimalStructureItemContainer.bPoweredAllowSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingSolar() { return { this, "APrimalStructureItemContainer.bPoweredUsingSolar" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorRegionForEmitterColor() { return { this, "APrimalStructureItemContainer.bUseColorRegionForEmitterColor" }; }
    BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode() { return { this, "APrimalStructureItemContainer.UseBPApplyPinCode" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureItemContainer.bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureItemContainer.bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bHasFuel() { return { this, "APrimalStructureItemContainer.bHasFuel" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderwater() { return { this, "APrimalStructureItemContainer.bIsUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater() { return { this, "APrimalStructureItemContainer.bDisableActivationUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAutoActivateWhenConnectedToWater() { return { this, "APrimalStructureItemContainer.bForcePreventAutoActivateWhenConnectedToWater" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking() { return { this, "APrimalStructureItemContainer.bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking() { return { this, "APrimalStructureItemContainer.bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bDropInventoryOnDestruction() { return { this, "APrimalStructureItemContainer.bDropInventoryOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemoved() { return { this, "APrimalStructureItemContainer.bDestroyWhenAllItemsRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bDrinkingWater() { return { this, "APrimalStructureItemContainer.bDrinkingWater" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredWaterSourceWhenActive() { return { this, "APrimalStructureItemContainer.bPoweredWaterSourceWhenActive" }; }
    BitFieldValue<bool, unsigned __int32> bActiveRequiresPower() { return { this, "APrimalStructureItemContainer.bActiveRequiresPower" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowerJunction() { return { this, "APrimalStructureItemContainer.bIsPowerJunction" }; }
    BitFieldValue<bool, unsigned __int32> bHidePowerJunctionConnection() { return { this, "APrimalStructureItemContainer.bHidePowerJunctionConnection" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateIfPowered() { return { this, "APrimalStructureItemContainer.bAutoActivateIfPowered" }; }
    BitFieldValue<bool, unsigned __int32> bLastToggleActivated() { return { this, "APrimalStructureItemContainer.bLastToggleActivated" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinActivation() { return { this, "APrimalStructureItemContainer.bSupportsPinActivation" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowered() { return { this, "APrimalStructureItemContainer.bIsPowered" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowTeamActivation() { return { this, "APrimalStructureItemContainer.bOnlyAllowTeamActivation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateItemFuelClass() { return { this, "APrimalStructureItemContainer.bReplicateItemFuelClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseOpenSceneAction() { return { this, "APrimalStructureItemContainer.bUseOpenSceneAction" }; }
    BitFieldValue<bool, unsigned __int32> bHandledDestruction() { return { this, "APrimalStructureItemContainer.bHandledDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated() { return { this, "APrimalStructureItemContainer.bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivated() { return { this, "APrimalStructureItemContainer.bUseBPCanBeActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivatedByPlayer() { return { this, "APrimalStructureItemContainer.bUseBPCanBeActivatedByPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bBPOnContainerActiveHealthDecrease() { return { this, "APrimalStructureItemContainer.bBPOnContainerActiveHealthDecrease" }; }
    BitFieldValue<bool, unsigned __int32> bBPIsValidWaterSourceForPipe() { return { this, "APrimalStructureItemContainer.bBPIsValidWaterSourceForPipe" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower() { return { this, "APrimalStructureItemContainer.bAllowAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenNoPower() { return { this, "APrimalStructureItemContainer.bAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUsingAsWirelessCraftingSource() { return { this, "APrimalStructureItemContainer.bPreventUsingAsWirelessCraftingSource" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresItemExactClass() { return { this, "APrimalStructureItemContainer.bRequiresItemExactClass" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemovedExceptDefaults() { return { this, "APrimalStructureItemContainer.bDestroyWhenAllItemsRemovedExceptDefaults" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventRemoteAddItems() { return { this, "APrimalStructureItemContainer.bInventoryForcePreventRemoteAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventItemAppends() { return { this, "APrimalStructureItemContainer.bInventoryForcePreventItemAppends" }; }
    BitFieldValue<bool, unsigned __int32> bDidSetContainerActive() { return { this, "APrimalStructureItemContainer.bDidSetContainerActive" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeathCacheCharacterID() { return { this, "APrimalStructureItemContainer.bUseDeathCacheCharacterID" }; }
    BitFieldValue<bool, unsigned __int32> bHideAutoActivateToggle() { return { this, "APrimalStructureItemContainer.bHideAutoActivateToggle" }; }
    BitFieldValue<bool, unsigned __int32> bUseCooldownOnTransferAll() { return { this, "APrimalStructureItemContainer.bUseCooldownOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoContainerBuff() { return { this, "APrimalStructureItemContainer.bUseAmmoContainerBuff" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFuelRemaining() { return { this, "APrimalStructureItemContainer.bDrawFuelRemaining" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetQuantityOfItemWithoutCheckingInventory() { return { this, "APrimalStructureItemContainer.bUseBPGetQuantityOfItemWithoutCheckingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor() { return { this, "APrimalStructureItemContainer.bUseBPSetPlayerConstructor" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime() { return { this, "APrimalStructureItemContainer.bReplicateLastActivatedTime" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmmoContainer() { return { this, "APrimalStructureItemContainer.bIsAmmoContainer" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseSwapped() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChangesUseSwapped" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyRemoteViewerChange() { return { this, "APrimalStructureItemContainer.bBPNotifyRemoteViewerChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOriginForInventoryAccessTrace() { return { this, "APrimalStructureItemContainer.bUseMeshOriginForInventoryAccessTrace" }; }

    // Functions

    bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPowered()"); }
    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer.StaticClass()"); }
    bool BPApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureItemContainer.BPApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    void NetUpdateBoxName(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureItemContainer.NetUpdateBoxName(FString&)", NewName); }
    void OnContainerRenamed() { NativeCall<void>(this, "APrimalStructureItemContainer.OnContainerRenamed()"); }
    static void StaticRegisterNativesAPrimalStructureItemContainer() { NativeCall<void>(nullptr, "APrimalStructureItemContainer.StaticRegisterNativesAPrimalStructureItemContainer()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated()"); }
    bool AllowToggleActivation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.AllowToggleActivation(AShooterPlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureItemContainer.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureItemContainer.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureItemContainer.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay()"); }
    void PreviewClosestWirelessSources(APrimalDinoCharacter* PlacingOnSaddleDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalStructureItemContainer.PreviewClosestWirelessSources(APrimalDinoCharacter*)", PlacingOnSaddleDino); }
    void AdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructureItemContainer.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    void CheckForDeathCacheEmitter() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter()"); }
    void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructureItemContainer.PlacedStructureLocation()"); }
    void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer.PlacedStructure(AShooterPlayerController*)", PC); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    //UFXSystemAsset* GetOverrideParticleTemplate() { return NativeCall<UFXSystemAsset*>(this, "APrimalStructureItemContainer.GetOverrideParticleTemplate()"); }
    FLinearColor* GetOverrideParticleLightColor(FLinearColor* result) { return NativeCall<FLinearColor*, FLinearColor*>(this, "APrimalStructureItemContainer.GetOverrideParticleLightColor()", result); }
    USoundBase* GetOverrideAudioTemplate() { return NativeCall<USoundBase*>(this, "APrimalStructureItemContainer.GetOverrideAudioTemplate()"); }
    float GetTimeFuelRemaining() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetTimeFuelRemaining()"); }
    bool CanDrawFuelRemaining() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanDrawFuelRemaining()"); }
    bool IsValidWaterSourceForPipe(APrimalStructureWaterPipe* ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe*>(this, "APrimalStructureItemContainer.IsValidWaterSourceForPipe(APrimalStructureWaterPipe*)", ForWaterPipe); }
    void SetDelayedActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation()"); }
    void TryActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation()"); }
    void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive(bool)", bNewActive); }
    FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer.GetDebugInfoString()", result); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.CanOpen(APlayerController*)", ForPC); }
    bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPinLocked()"); }
    int GetPinCode() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetPinCode()"); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer.GetDescriptiveName()", result); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowViewing(APlayerController*)", ForPC); }
    bool RemoteInventoryAllowActivation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowActivation(AShooterPlayerController*)", ForPC); }
    void UpdateContainerActiveHealthDecrease(__int64 a2) { NativeCall<void, __int64>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease()", a2); }
    void CheckAutoReactivate() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate()"); }
    void ConsumeFuel(bool bGiveItem) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel(bool)", bGiveItem); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    void NotifyInventoryItemsSwapped(UPrimalItem* anItem1, UPrimalItem* anItem2) { NativeCall<void, UPrimalItem*, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyInventoryItemsSwapped(UPrimalItem*,UPrimalItem*)", anItem1, anItem2); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void DeferredNotifyItemAdded() { NativeCall<void>(this, "APrimalStructureItemContainer.DeferredNotifyItemAdded()"); }
    void CheckFuelSetActive() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void ClientNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem* theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.ClientNotifyInventoryItemChange(bool,UPrimalItem*,bool)", bIsItemAdd, theItem, bEquipItem); }
    void RefreshFuelState() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState()"); }
    bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers()"); }
    void UpdateSolarPower() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateSolarPower()"); }
    void CharacterBasedOnUpdate(AActor* characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor*, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate(AActor*,float)", characterBasedOnMe, DeltaSeconds); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureItemContainer.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, bCheckedBox); }
    void NetUpdateLocation_Implementation(UE::Math::TVector<double>* NewLocation) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer.NetUpdateLocation_Implementation(UE::Math::TVector<double>)", NewLocation); }
    void NetSetContainerActive_Implementation(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation(bool,TSubclassOf<UPrimalItem>,short)", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
    void NetUpdateBoxName_Implementation(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureItemContainer.NetUpdateBoxName_Implementation(FString&)", NewName); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureItemContainer.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void SetDisabledTimer(float DisabledTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer(float)", DisabledTime); }
    void EnableActive(bool a2) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.EnableActive()", a2); }
    void GetBlueprintSpawnActorTransform(UE::Math::TVector<double>* spawnLoc, UE::Math::TRotator<double>* spawnRot) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", spawnLoc, spawnRot); }
    void UpdateWirelessExchanges() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateWirelessExchanges()"); }
    void UpdateWirelessExchange(UPrimalWirelessExchangeData* myExchange) { NativeCall<void, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.UpdateWirelessExchange(UPrimalWirelessExchangeData*)", myExchange); }
    TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >* GetNearbyWirelessStructures(TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >* result, UPrimalWirelessExchangeData* myExchange) { return NativeCall<TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >*, TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >*, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.GetNearbyWirelessStructures(UPrimalWirelessExchangeData*)", result, myExchange); }
    void RemoveWirelessConnections(__int64 a2) { NativeCall<void, __int64>(this, "APrimalStructureItemContainer.RemoveWirelessConnections()", a2); }
    bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource()"); }
    float SubtractWaterFromConnections(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections(float,bool)", Amount, bAllowNetworking); }
    float SubtractWaterFromPipes(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromPipes(float,bool)", Amount, bAllowNetworking); }
    void SubtractWaterFromWireless(float Amount, float* AmountRemoved, bool bAllowNetworking) { NativeCall<void, float, float*, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromWireless(float,float&,bool)", Amount, AmountRemoved, bAllowNetworking); }
    void RefreshWatered() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshWatered()"); }
    void SetWaterState(bool bValue) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetWaterState(bool)", bValue); }
    bool CheckForWirelessWater(APrimalStructureItemContainer* ForStructure, bool IncrementTagger) { return NativeCall<bool, APrimalStructureItemContainer*, bool>(this, "APrimalStructureItemContainer.CheckForWirelessWater(APrimalStructureItemContainer*,bool)", ForStructure, IncrementTagger); }
    bool IsValidWirelessWaterSource(APrimalStructureItemContainer* ForStructure) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.IsValidWirelessWaterSource(APrimalStructureItemContainer*)", ForStructure); }
    void GetBestWirelessWaterSource(APrimalStructureItemContainer* ForStructure, APrimalStructureItemContainer** OutBestSource, bool IncrementTagger) { NativeCall<void, APrimalStructureItemContainer*, APrimalStructureItemContainer**, bool>(this, "APrimalStructureItemContainer.GetBestWirelessWaterSource(APrimalStructureItemContainer*,APrimalStructureItemContainer*&,bool)", ForStructure, OutBestSource, IncrementTagger); }
    void RefreshPowered(APrimalStructureItemContainer* InDirectPower) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.RefreshPowered(APrimalStructureItemContainer*)", InDirectPower); }
    void MovePowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink()"); }
    void RefreshPowerJunctionLink(__int16 a2) { NativeCall<void, __int16>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink()", a2); }
    void AddPowerJunctionLinkParticle(APrimalStructure* MyOutlet) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureItemContainer.AddPowerJunctionLinkParticle(APrimalStructure*)", MyOutlet); }
    void NotifyCraftedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyCraftedItem(UPrimalItem*)", anItem); }
    //void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructureItemContainer.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void CopyStructureValuesFrom(APrimalStructureItemContainer* otherItemContainer) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom(APrimalStructureItemContainer*)", otherItemContainer); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureItemContainer.PostSpawnInitialize()"); }
    void TargetingTeamChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged()"); }
    FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructureItemContainer.GetSpawnPointInfo()", result); }
    void SetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.SetPlayerConstructor(APlayerController*)", PC); }
    void RefreshInventoryItemCounts() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts()"); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureItemContainer.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    bool AdjustNetDestructionTime(float Delta) { return NativeCall<bool, float>(this, "APrimalStructureItemContainer.AdjustNetDestructionTime(float)", Delta); }
    void DrawStructureTooltip(AShooterHUD* HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD*, bool>(this, "APrimalStructureItemContainer.DrawStructureTooltip(AShooterHUD*,bool)", HUD, bForMultiUseSelector); }
    void UpdateTribeGroupInventoryRank_Implementation(unsigned __int8 NewRank) { NativeCall<void, unsigned __int8>(this, "APrimalStructureItemContainer.UpdateTribeGroupInventoryRank_Implementation(unsignedchar)", NewRank); }
    void NetRefreshActiveEffects_Implementation() { NativeCall<void>(this, "APrimalStructureItemContainer.NetRefreshActiveEffects_Implementation()"); }
    void RefreshActiveEffects() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshActiveEffects()"); }
    void RefreshStructureColors(UMeshComponent* ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructureItemContainer.RefreshStructureColors(UMeshComponent*)", ForceRefreshComponent); }
    void SetDefaultBlacklistedItemCount(int BlacklistedCount) { NativeCall<void, int>(this, "APrimalStructureItemContainer.SetDefaultBlacklistedItemCount(int)", BlacklistedCount); }
    int GetDefaultBlacklistedItemCount() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetDefaultBlacklistedItemCount()"); }
};


struct APrimalStructureSeating : APrimalStructureItemContainer
{
    // Fields

    TWeakObjectPtr<AShooterCharacter>& SeatedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalStructureSeating.SeatedCharacter"); }
    TWeakObjectPtr<AShooterCharacter>& PrevSeatedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalStructureSeating.PrevSeatedCharacter"); }
    TWeakObjectPtr<AShooterPlayerController>& SeatedControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalStructureSeating.SeatedController"); }
    TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >& CharacterPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.CharacterPerSeat"); }
    TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >& PrevCharacterPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.PrevCharacterPerSeat"); }
    int& NumSeatsField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.NumSeats"); }
    UE::Math::TVector<double>& SeatedCharacterLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.SeatedCharacterLocationOffset"); }
    UE::Math::TRotator<double>& SeatedCharacterRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureSeating.SeatedCharacterRotationOffset"); }
    //TArray<FSeatingSpot, TSizedDefaultAllocator<32> >& OtherSeatingSpotsField() { return *GetNativePointerField<TArray<FSeatingSpot, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.OtherSeatingSpots"); }
    float& TPVCameraYawRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.TPVCameraYawRange"); }
    UE::Math::TVector<double>& TPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.TPVCameraOffset"); }
    UE::Math::TVector<double>& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.TPVCameraOffsetMultiplier"); }
    float& UnboardDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.UnboardDistance"); }
    FString& SeatingActionTextField() { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating.SeatingActionText"); }
    TObjectPtr<UTexture2D>& SeatingActionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating.SeatingActionIcon"); }
    USoundCue*& RideSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating.RideSound"); }
    USoundCue*& UnrideSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating.UnrideSound"); }
    UAnimSequence*& SeatingAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalStructureSeating.SeatingAnimOverride"); }
    int& SeatingActionPriorityField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.SeatingActionPriority"); }
    long double& LastServerUpdateSentField() { return *GetNativePointerField<long double*>(this, "APrimalStructureSeating.LastServerUpdateSent"); }
    UE::Math::TVector<double>& ActorPrevRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.ActorPrevRelativeLocation"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAdjustForLegLength() { return { this, "APrimalStructureSeating.bAdjustForLegLength" }; }
    BitFieldValue<bool, unsigned __int32> bRestrictTPVCameraYaw() { return { this, "APrimalStructureSeating.bRestrictTPVCameraYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPrimaryFire() { return { this, "APrimalStructureSeating.bUsesPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesAltFire() { return { this, "APrimalStructureSeating.bUsesAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesItemSlotKeys() { return { this, "APrimalStructureSeating.bUsesItemSlotKeys" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSeatingWhenHandcuffed() { return { this, "APrimalStructureSeating.bPreventSeatingWhenHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSleepingPlayers() { return { this, "APrimalStructureSeating.bAllowSleepingPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bReleaseFindsGroundPlacement() { return { this, "APrimalStructureSeating.bReleaseFindsGroundPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCrouchProneToSit() { return { this, "APrimalStructureSeating.bAllowCrouchProneToSit" }; }
    BitFieldValue<bool, unsigned __int32> bUsesTargeting() { return { this, "APrimalStructureSeating.bUsesTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bHideLegacyStructureAmmoHUD() { return { this, "APrimalStructureSeating.bHideLegacyStructureAmmoHUD" }; }
    BitFieldValue<bool, unsigned __int32> bTraceToUnboardLocation() { return { this, "APrimalStructureSeating.bTraceToUnboardLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnyTeamToSit() { return { this, "APrimalStructureSeating.bAllowAnyTeamToSit" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOrbitCam() { return { this, "APrimalStructureSeating.bAllowOrbitCam" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHandcuffLockedSeating() { return { this, "APrimalStructureSeating.bPreventHandcuffLockedSeating" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnDetach() { return { this, "APrimalStructureSeating.bJumpOnDetach" }; }

    // Functions

    int BPGetBestSeatNumber_Implementation(AShooterPlayerController* ForPC, int InBestSeatNumber) { return NativeCall<int, AShooterPlayerController*, int>(this, "APrimalStructureSeating.BPGetBestSeatNumber_Implementation(AShooterPlayerController*,int)", ForPC, InBestSeatNumber); }
    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureSeating.GetPrivateStaticClass()"); }
    void BPSeatedPlayer(AShooterCharacter* SeatedChar, int AtSeatNumber) { NativeCall<void, AShooterCharacter*, int>(this, "APrimalStructureSeating.BPSeatedPlayer(AShooterCharacter*,int)", SeatedChar, AtSeatNumber); }
    static void StaticRegisterNativesAPrimalStructureSeating() { NativeCall<void>(nullptr, "APrimalStructureSeating.StaticRegisterNativesAPrimalStructureSeating()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureSeating.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
    void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureSeating.Release(AShooterCharacter*)", ShooterCharacter); }
    void GetNearestSitSpot(UE::Math::TVector<double>* CharacterLocation, UE::Math::TVector<double>* OutSitLocation, UE::Math::TRotator<double>* OutSitRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", CharacterLocation, OutSitLocation, OutSitRotation); }
    void GetNearestSitSpot(UE::Math::TVector<double>* CharacterLocation, int SeatNumber, UE::Math::TVector<double>* OutSitLocation, UE::Math::TRotator<double>* OutSitRotation) { NativeCall<void, UE::Math::TVector<double>*, int, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", CharacterLocation, SeatNumber, OutSitLocation, OutSitRotation); }
    __int64 GetNearestFreeSpot(AShooterPlayerController* ForPC, UE::Math::TVector<double>* CharacterLocation) { return NativeCall<__int64, AShooterPlayerController*, UE::Math::TVector<double>*>(this, "APrimalStructureSeating.GetNearestFreeSpot(AShooterPlayerController*,UE::Math::TVector<double>)", ForPC, CharacterLocation); }
    bool CanUse(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureSeating.CanUse(AShooterPlayerController*)", ForPC); }
    void OnRep_SeatedCharacter() { NativeCall<void>(this, "APrimalStructureSeating.OnRep_SeatedCharacter()"); }
    void OnRep_CharacterPerSeat() { NativeCall<void>(this, "APrimalStructureSeating.OnRep_CharacterPerSeat()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureSeating.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    bool CanSeat(AShooterPlayerController* ForPC, AShooterCharacter* ForCharacter, bool bForce) { return NativeCall<bool, AShooterPlayerController*, AShooterCharacter*, bool>(this, "APrimalStructureSeating.CanSeat(AShooterPlayerController*,AShooterCharacter*,bool)", ForPC, ForCharacter, bForce); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureSeating.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureSeating.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureSeating.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureSeating.Destroyed()"); }
    void ClearSeats() { NativeCall<void>(this, "APrimalStructureSeating.ClearSeats()"); }
    void OnStartTargeting() { NativeCall<void>(this, "APrimalStructureSeating.OnStartTargeting()"); }
    void OnStopTargeting() { NativeCall<void>(this, "APrimalStructureSeating.OnStopTargeting()"); }
};

struct APrimalStructureBed : APrimalStructureSeating
{
    // Fields

    UE::Math::TVector<double>& PlayerSpawnLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureBed.PlayerSpawnLocOffset"); }
    UE::Math::TRotator<double>& PlayerSpawnRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureBed.PlayerSpawnRotOffset"); }
    unsigned int& LinkedPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.LinkedPlayerID"); }
    FString& LinkedPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.LinkedPlayerName"); }
    FString& BedNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.BedName"); }
    float& UseCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownTime"); }
    float& UseCooldownRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownRadius"); }
    float& AttachedToPlatformStructureEnemySpawnPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.AttachedToPlatformStructureEnemySpawnPreventionRadius"); }
    TObjectPtr<UTexture2D>& FastTravelIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureBed.FastTravelIcon"); }
    long double& NextAllowedUseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.NextAllowedUseTime"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.LastSignNamingTime"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDestroyAfterRespawnUse() { return { this, "APrimalStructureBed.bDestroyAfterRespawnUse" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureBed.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureBed() { NativeCall<void>(nullptr, "APrimalStructureBed.StaticRegisterNativesAPrimalStructureBed()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBed.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureBed.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureBed.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBed.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureBed.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureBed.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureBed.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureBed.PlacedStructure(AShooterPlayerController*)", PC); }
    bool AllowSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime, APrimalStructure* FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructureBed.AllowSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)", PC, bCheckCooldownTime, FromStructure); }
    bool AllowSpawnForDownloadedPlayer(unsigned __int64 PlayerDataID, unsigned __int64 TribeID, bool bCheckCooldownTime) { return NativeCall<bool, unsigned __int64, unsigned __int64, bool>(this, "APrimalStructureBed.AllowSpawnForDownloadedPlayer(unsigned__int64,unsigned__int64,bool)", PlayerDataID, TribeID, bCheckCooldownTime); }
    bool CheckStructureActivateTribeGroupPermission(unsigned __int64 PlayerDataID, unsigned __int64 TribeID) { return NativeCall<bool, unsigned __int64, unsigned __int64>(this, "APrimalStructureBed.CheckStructureActivateTribeGroupPermission(unsigned__int64,unsigned__int64)", PlayerDataID, TribeID); }
    void SpawnedPlayerFor_Implementation(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalStructureBed.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)", PC, ForPawn); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureBed.Destroyed()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureBed.BeginPlay()"); }
    FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructureBed.GetSpawnPointInfo()", result); }
    static AActor* FindBedWithID(UWorld* forWorld, int theBedID) { return NativeCall<AActor*, UWorld*, int>(nullptr, "APrimalStructureBed.FindBedWithID(UWorld*,int)", forWorld, theBedID); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureBed.PostInitializeComponents()"); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureBed.GetDescriptiveName()", result); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureBed.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
};

struct APrimalStructureDoor : APrimalStructure
{
    // Fields

    USceneComponent*& MyDoorTransformField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureDoor.MyDoorTransform"); }
    UStaticMeshComponent*& SecondDoorCosmeticVariantStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureDoor.SecondDoorCosmeticVariantStaticMesh"); }
    float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.RotationSpeed"); }
    USoundCue*& DoorOpenSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorOpenSound"); }
    USoundCue*& DoorCloseSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureDoor.DoorCloseSound"); }
    unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureDoor.CurrentPinCode"); }
    int& CurrentOpenModeField() { return *GetNativePointerField<int*>(this, "APrimalStructureDoor.CurrentOpenMode"); }
    float& MaxOpenRotDegField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.MaxOpenRotDeg"); }
    float& DoorStateChangeIgnoreEncroachmentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval"); }
    char& ClientPrevDoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.ClientPrevDoorOpenState"); }
    UStaticMeshComponent*& SecondDoorMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureDoor.SecondDoorMesh"); }
    long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastLockStateChangeTime"); }
    UE::Math::TRotator<double>& SecondDoorDefaultRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureDoor.SecondDoorDefaultRot"); }
    float& CurrentDoorAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.CurrentDoorAngle"); }
    USoundBase*& UnlockDoorSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.UnlockDoorSound"); }
    USoundBase*& LockDoorSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockDoorSound"); }
    USoundBase*& LockedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureDoor.LockedSound"); }
    long double& LastPinOpenSuccessTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastPinOpenSuccessTime"); }
    long double& LastDoorStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastDoorStateChangeTime"); }
    TObjectPtr<UTexture2D>& OpenIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenIcon"); }
    TObjectPtr<UTexture2D>& CloseIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.CloseIcon"); }
    TObjectPtr<UTexture2D>& OpenModeInAndOutIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeInAndOutIcon"); }
    TObjectPtr<UTexture2D>& OpenModeAlwaysInIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeAlwaysInIcon"); }
    TObjectPtr<UTexture2D>& OpenModeAlwaysOutIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureDoor.OpenModeAlwaysOutIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bInvertOpenCloseDirection() { return { this, "APrimalStructureDoor.bInvertOpenCloseDirection" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking() { return { this, "APrimalStructureDoor.bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseSecondDoor() { return { this, "APrimalStructureDoor.bUseSecondDoor" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking() { return { this, "APrimalStructureDoor.bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureDoor.bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureDoor.bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess() { return { this, "APrimalStructureDoor.bAdminOnlyAccess" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeForcedOpenByDino() { return { this, "APrimalStructureDoor.bCanBeForcedOpenByDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBasingWhileMoving() { return { this, "APrimalStructureDoor.bPreventBasingWhileMoving" }; }
    BitFieldValue<bool, unsigned __int32> bForceDoorOpenIn() { return { this, "APrimalStructureDoor.bForceDoorOpenIn" }; }
    BitFieldValue<bool, unsigned __int32> bForceDoorOpenOut() { return { this, "APrimalStructureDoor.bForceDoorOpenOut" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorMoving() { return { this, "APrimalStructureDoor.bIsDoorMoving" }; }
    BitFieldValue<bool, unsigned __int32> bForceStaticMobility() { return { this, "APrimalStructureDoor.bForceStaticMobility" }; }
    BitFieldValue<bool, unsigned __int32> bRotatePitch() { return { this, "APrimalStructureDoor.bRotatePitch" }; }
    BitFieldValue<bool, unsigned __int32> bRotateRoll() { return { this, "APrimalStructureDoor.bRotateRoll" }; }
    BitFieldValue<bool, unsigned __int32> bRotateYaw() { return { this, "APrimalStructureDoor.bRotateYaw" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedRotation() { return { this, "APrimalStructureDoor.bInitializedRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDoorInterpolation() { return { this, "APrimalStructureDoor.bPreventDoorInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGotoDoorState() { return { this, "APrimalStructureDoor.bUseBPGotoDoorState" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideChangeDoorState() { return { this, "APrimalStructureDoor.bUseBPOverrideChangeDoorState" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking() { return { this, "APrimalStructureDoor.bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntAffectDinoNavigationWhileOpen() { return { this, "APrimalStructureDoor.bDoesntAffectDinoNavigationWhileOpen" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntUseOpenMode() { return { this, "APrimalStructureDoor.bDoesntUseOpenMode" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureDoor.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureDoor() { NativeCall<void>(nullptr, "APrimalStructureDoor.StaticRegisterNativesAPrimalStructureDoor()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureDoor.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureDoor.Tick(float)", DeltaSeconds); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureDoor.DrawHUD(AShooterHUD*)", HUD); }
    void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState(signedchar)", DoorState); }
    void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState(signedchar,float)", DoorState, DelayTime); }
    void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureDoor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureDoor.IsPinLocked()"); }
    int GetPinCode() { return NativeCall<int>(this, "APrimalStructureDoor.GetPinCode()"); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureDoor.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureDoor.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureDoor.CanOpen(APlayerController*)", ForPC); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureDoor.GetDescriptiveName()", result); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility()"); }
    void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation(signedchar)", DoorState); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents()"); }
    bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureDoor.AllowStructureAccess(APlayerController*)", ForPC); }
    bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalStructureDoor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureDoor.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent* HitComponent, AActor* EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent*, AActor*>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent*,AActor*)", HitComponent, EncroachingCharacter); }
    void UpdateStructureMesh() { NativeCall<void>(this, "APrimalStructureDoor.UpdateStructureMesh()"); }
    void UpdateCosmeticMeshComp(UE::Math::TTransform<double>* CosmeticMeshTransform, UStaticMesh* CosmeticMesh) { NativeCall<void, UE::Math::TTransform<double>*, UStaticMesh*>(this, "APrimalStructureDoor.UpdateCosmeticMeshComp(UE::Math::TTransform<double>,UStaticMesh*)", CosmeticMeshTransform, CosmeticMesh); }
};

struct APrimalStructureElevatorPlatform : APrimalStructure
{
    // Fields

    float& MaxCarryWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxCarryWeight"); }
    float& SpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Speed"); }
    float& DownSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownSpeed"); }
    float& ClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeed"); }
    float& ClientLocationInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeedDown"); }
    float& UpObstructionTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.UpObstructionTraceLength"); }
    float& DownObstructionTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownObstructionTraceLength"); }
    float& TrackTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TrackTraceLength"); }
    USoundBase*& StartMovingSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureElevatorPlatform.StartMovingSound"); }
    USoundBase*& StopMovingSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureElevatorPlatform.StopMovingSound"); }
    float& DistanceToTravelField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceToTravel"); }
    UE::Math::TVector<double>& StartLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureElevatorPlatform.StartLocation"); }
    TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& CarriedActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.CarriedActors"); }
    float& TraveledDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TraveledDistance"); }
    float& CurrentLiftedWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.CurrentLiftedWeight"); }
    float& DistanceRepTimerField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceRepTimer"); }
    TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >& CarriedRagdollsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.CarriedRagdolls"); }
    float& MinHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MinHeight"); }
    float& MaxHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxHeight"); }
    float& HeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Height"); }
    float& ReplicatedZField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ReplicatedZ"); }
    unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureElevatorPlatform.CurrentPinCode"); }
    long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureElevatorPlatform.LastLockStateChangeTime"); }
    TObjectPtr<UTexture2D>& ElevateIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.ElevateIcon"); }
    TObjectPtr<UTexture2D>& DelevateIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.DelevateIcon"); }
    TObjectPtr<UTexture2D>& StopIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.StopIcon"); }
    TObjectPtr<UTexture2D>& CallToMeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.CallToMeIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bIsActivated() { return { this, "APrimalStructureElevatorPlatform.bIsActivated" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated() { return { this, "APrimalStructureElevatorPlatform.bWasActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateLocation() { return { this, "APrimalStructureElevatorPlatform.bUpdateLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAddElevatorMultiUseEntries() { return { this, "APrimalStructureElevatorPlatform.bAddElevatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureElevatorPlatform.bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureElevatorPlatform.bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess() { return { this, "APrimalStructureElevatorPlatform.bAdminOnlyAccess" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureElevatorPlatform.StaticClass()"); }
    void ServerActivate(APlayerController* ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController*, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.ServerActivate(APlayerController*,bool,EPrimalStructureElevatorState,float)", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
    static void StaticRegisterNativesAPrimalStructureElevatorPlatform() { NativeCall<void>(nullptr, "APrimalStructureElevatorPlatform.StaticRegisterNativesAPrimalStructureElevatorPlatform()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureElevatorPlatform.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.Tick(float)", DeltaSeconds); }
    void Activate(APlayerController* ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController*, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.Activate(APlayerController*,bool,EPrimalStructureElevatorState,float)", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
    bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.IsPinLocked()"); }
    int GetPinCode() { return NativeCall<int>(this, "APrimalStructureElevatorPlatform.GetPinCode()"); }
    void Deactivate(bool bSwitchDirection) { NativeCall<void, bool>(this, "APrimalStructureElevatorPlatform.Deactivate(bool)", bSwitchDirection); }
    void UpdateLocation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.UpdateLocation(float)", DeltaSeconds); }
    __int64 IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, FPlacementData* OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double>* PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData) { return NativeCall<__int64, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FPlacementData*, bool, UE::Math::TRotator<double>*, bool, bool>(this, "APrimalStructureElevatorPlatform.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool)", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData); }
    void ServerActivate_Implementation(APlayerController* ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController*, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.ServerActivate_Implementation(APlayerController*,bool,EPrimalStructureElevatorState,float)", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
    void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.PostNetReceiveLocationAndRotation()"); }
    void CalculateTrackHeight() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.CalculateTrackHeight()"); }
    float CalculateCurrentLiftedWeight(__int16 a2) { return NativeCall<float, __int16>(this, "APrimalStructureElevatorPlatform.CalculateCurrentLiftedWeight()", a2); }
    void Destroyed(__int16 a2) { NativeCall<void, __int16>(this, "APrimalStructureElevatorPlatform.Destroyed()", a2); }
    void OnRep_bIsActivated() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.OnRep_bIsActivated()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureElevatorPlatform.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void GetTrackMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.GetTrackMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", ForPC, MultiUseEntries); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureElevatorPlatform.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureElevatorPlatform.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetAllTrackStructures(TArray<AActor*, TSizedDefaultAllocator<32> >* Tracks) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorPlatform.GetAllTrackStructures(TArray<AActor*,TSizedDefaultAllocator<32>>&)", Tracks); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureElevatorPlatform.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureElevatorPlatform.CanOpen(APlayerController*)", ForPC); }
    bool AllowStructureAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureElevatorPlatform.AllowStructureAccess(APlayerController*)", ForPC); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureElevatorPlatform.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
};

struct APrimalStructureElevatorTrack : APrimalStructureItemContainer
{
    // Fields

    TWeakObjectPtr<APrimalStructureElevatorPlatform>& ElevatorBaseField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureElevatorPlatform>*>(this, "APrimalStructureElevatorTrack.ElevatorBase"); }
    float& TrackTopPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorTrack.TrackTopPoint"); }
    float& TrackBottomPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorTrack.TrackBottomPoint"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAddElevatorMultiUseEntries() { return { this, "APrimalStructureElevatorTrack.bAddElevatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPower() { return { this, "APrimalStructureElevatorTrack.bRequiresPower" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureElevatorTrack.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureElevatorTrack() { NativeCall<void>(nullptr, "APrimalStructureElevatorTrack.StaticRegisterNativesAPrimalStructureElevatorTrack()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureElevatorTrack.PostInitializeComponents()"); }
    void SetElevatorBase(APrimalStructureElevatorPlatform* NewBase) { NativeCall<void, APrimalStructureElevatorPlatform*>(this, "APrimalStructureElevatorTrack.SetElevatorBase(APrimalStructureElevatorPlatform*)", NewBase); }
    void MulticastSetElevatorBase_Implementation(APrimalStructureElevatorPlatform* NewBase) { NativeCall<void, APrimalStructureElevatorPlatform*>(this, "APrimalStructureElevatorTrack.MulticastSetElevatorBase_Implementation(APrimalStructureElevatorPlatform*)", NewBase); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureElevatorTrack.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureElevatorTrack.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureElevatorTrack.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.CanBeActivated()"); }
    void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureElevatorTrack.AddedLinkedStructure(APrimalStructure*)", Structure); }
    void RemovedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureElevatorTrack.RemovedLinkedStructure(APrimalStructure*)", Structure); }
    bool HasPlatformAttachedToTheTrack() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.HasPlatformAttachedToTheTrack()"); }
    void CalculateTrackHeight(float* MinZ, float* MaxZ, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >* Tracks) { NativeCall<void, float*, float*, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.CalculateTrackHeight(float&,float&,TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>&)", MinZ, MaxZ, Tracks); }
    bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.IsPowered()"); }
    char IsPoweredEx(TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >* CheckedTracks) { return NativeCall<char, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.IsPoweredEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>)", CheckedTracks); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorTrack.Tick(float)", DeltaSeconds); }
    TWeakObjectPtr<APrimalStructureElevatorPlatform>* GetElevatorPlatformEx(TWeakObjectPtr<APrimalStructureElevatorPlatform>* result, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >* CheckedTracks) { return NativeCall<TWeakObjectPtr<APrimalStructureElevatorPlatform> *, TWeakObjectPtr<APrimalStructureElevatorPlatform>*, TArray<APrimalStructureElevatorTrack*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureElevatorTrack.GetElevatorPlatformEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>)", result, CheckedTracks); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureElevatorTrack.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureElevatorTrack.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
};

struct APrimalStructureExplosive : APrimalStructure
{
    // Fields

    unsigned int& ConstructorPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureExplosive.ConstructorPlayerDataID"); }
    AShooterCharacter*& ConstructorPawnField() { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalStructureExplosive.ConstructorPawn"); }
    int& ConstructorTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.ConstructorTargetingTeam"); }
    UE::Math::TVector<double>& ExplosiveLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureExplosive.ExplosiveLocOffset"); }
    UE::Math::TRotator<double>& ExplosiveRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureExplosive.ExplosiveRotOffset"); }
    float& PlacementInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInitialSpeed"); }
    float& PlacementMaxSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementMaxSpeed"); }
    float& PlacementAccelField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementAccel"); }
    float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionDamage"); }
    float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionRadius"); }
    float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionImpulse"); }
    TSubclassOf<UDamageType>& ExplosionDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureExplosive.ExplosionDamageType"); }
    TSubclassOf<UPrimalItem>& ExplosiveAmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureExplosive.ExplosiveAmmoItemTemplate"); }
    float& AlertDinosRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AlertDinosRange"); }
    TSubclassOf<UPrimalItem>& PickupItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureExplosive.PickupItemClass"); }
    int& PickUpQuantityField() { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.PickUpQuantity"); }
    UStaticMeshComponent*& AnimatedComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureExplosive.AnimatedComponent"); }
    float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureExplosive.FluidSimSplashTemplateOverride"); }
    float& AnimationTargetHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AnimationTargetHeight"); }
    float& PlacementInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInterpSpeed"); }
    UE::Math::TVector<double>& OriginalRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureExplosive.OriginalRelativeLocation"); }
    UE::Math::TRotator<double>& OriginalRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureExplosive.OriginalRelativeRotation"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDoNotUseAmmoOnNextPlace() { return { this, "APrimalStructureExplosive.bDoNotUseAmmoOnNextPlace" }; }
    BitFieldValue<bool, unsigned __int32> bAnimatePlacement() { return { this, "APrimalStructureExplosive.bAnimatePlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAlertDinos() { return { this, "APrimalStructureExplosive.bAlertDinos" }; }
    BitFieldValue<bool, unsigned __int32> bWasJustPlaced() { return { this, "APrimalStructureExplosive.bWasJustPlaced" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureExplosive.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureExplosive() { NativeCall<void>(nullptr, "APrimalStructureExplosive.StaticRegisterNativesAPrimalStructureExplosive()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureExplosive.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureExplosive.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    //void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructureExplosive.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureExplosive.PostSpawnInitialize()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureExplosive.Tick(float)", DeltaSeconds); }
    void SetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureExplosive.SetPlayerConstructor(APlayerController*)", PC); }
    bool CanDetonateMe(AShooterCharacter* Character, bool bUsingRemote) { return NativeCall<bool, AShooterCharacter*, bool>(this, "APrimalStructureExplosive.CanDetonateMe(AShooterCharacter*,bool)", Character, bUsingRemote); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureExplosive.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureExplosive.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructureExplosive.PrepareAsPlacementPreview()"); }
    void ApplyPlacementPreview() { NativeCall<void>(this, "APrimalStructureExplosive.ApplyPlacementPreview()"); }
    void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructureExplosive.NetDoSpawnEffects_Implementation()"); }
};

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

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer_SupplyCrate.GetPrivateStaticClass()"); }
    void OnRep_FinishedCrateMovement() { NativeCall<void>(this, "APrimalStructureItemContainer_SupplyCrate.OnRep_FinishedCrateMovement()"); }
    static void StaticRegisterNativesAPrimalStructureItemContainer_SupplyCrate() { NativeCall<void>(nullptr, "APrimalStructureItemContainer_SupplyCrate.StaticRegisterNativesAPrimalStructureItemContainer_SupplyCrate()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_SupplyCrate.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
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
};

struct APrimalStructureItemContainer_CropPlot : APrimalStructureItemContainer
{
    // Fields

    TSubclassOf<UPrimalItem>& SeedBaseItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.SeedBaseItemTemplate"); }
    TSubclassOf<UPrimalItem>& FertilizerBaseItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerBaseItemTemplate"); }
    TSubclassOf<APrimalStructureItemContainer>& WaterNearbyStructureTemplateField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureTemplate"); }
    float& CropRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMin"); }
    float& CropRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMax"); }
    float& WaterNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureRange"); }
    float& MaxWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxWaterAmount"); }
    float& ActiveRainWaterIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ActiveRainWaterIncreaseSpeed"); }
    float& AverageRainWaterIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.AverageRainWaterIncreaseMultiplier"); }
    float& WaterItemAmountMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterItemAmountMultiplier"); }
    UE::Math::TVector<double>& ExtraCropMeshScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_CropPlot.ExtraCropMeshScale"); }
    float& CropRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshInterval"); }
    float& CropPhaseFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropPhaseFertilizerCache"); }
    float& CropFruitFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropFruitFertilizerCache"); }
    TSubclassOf<UPrimalItem>& PlantedCropField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.PlantedCrop"); }
    TWeakObjectPtr<APrimalStructureItemContainer>& IrrigationWaterTapField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer_CropPlot.IrrigationWaterTap"); }
    long double& LastCropRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.LastCropRefreshTime"); }
    long double& NextAllowedCropRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.NextAllowedCropRefreshTime"); }
    TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >& MyCropMeshesField() { return *GetNativePointerField<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.MyCropMeshes"); }
    APrimalStructure*& MyCropStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureItemContainer_CropPlot.MyCropStructure"); }
    long double& CropRefreshTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshTimeCache"); }
    int& FertilizerAmountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerAmount"); }
    float& WaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterAmount"); }
    bool& bIsOpenToSkyField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_CropPlot.bIsOpenToSky"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& WateringItemTemplatesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.WateringItemTemplates"); }
    float& FertilizerConsumptionRateMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerConsumptionRateMultiplier"); }
    float& LastReplicatedWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.LastReplicatedWaterAmount"); }
    int& LastReplicatedFertilizerAmountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.LastReplicatedFertilizerAmount"); }
    float& LastWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.LastWaterAmount"); }
    TSubclassOf<UPrimalItem>& WateredOverridesCraftingItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.WateredOverridesCraftingItemTemplate"); }
    float& MinWateredOverridesCraftingField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MinWateredOverridesCrafting"); }
    int& MaxGreenHouseStructuresField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseStructures"); }
    float& MaxGreenHouseCropGrowthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseCropGrowthMultiplier"); }
    float& GainWaterRateField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.GainWaterRate"); }
    long double& LastForceReplicatedGreenhouseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.LastForceReplicatedGreenhouseTime"); }
    float& CropMaxFruitsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropMaxFruitsMultiplier"); }
    unsigned __int64& FrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureItemContainer_CropPlot.FrameCounter"); }
    TObjectPtr<UTexture2D>& FertilizerOnIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerOnIcon"); }
    TObjectPtr<UTexture2D>& FertilizerOffIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerOffIcon"); }
    TObjectPtr<UTexture2D>& DestroyPlantedCropIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.DestroyPlantedCropIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bUsesCrop() { return { this, "APrimalStructureItemContainer_CropPlot.bUsesCrop" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterTank() { return { this, "APrimalStructureItemContainer_CropPlot.bIsWaterTank" }; }
    BitFieldValue<bool, unsigned __int32> bGainWaterOverTime() { return { this, "APrimalStructureItemContainer_CropPlot.bGainWaterOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bAutoFill() { return { this, "APrimalStructureItemContainer_CropPlot.bAutoFill" }; }
    BitFieldValue<bool, unsigned __int32> bDontAddWaterOnInventoryItemUsed() { return { this, "APrimalStructureItemContainer_CropPlot.bDontAddWaterOnInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOpenToSky() { return { this, "APrimalStructureItemContainer_CropPlot.bAllowOpenToSky" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAdditionalGrowthMultiplier() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPGetAdditionalGrowthMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bIsFertilized() { return { this, "APrimalStructureItemContainer_CropPlot.bIsFertilized" }; }
    BitFieldValue<bool, unsigned __int32> bIsWatered() { return { this, "APrimalStructureItemContainer_CropPlot.bIsWatered" }; }
    BitFieldValue<bool, unsigned __int32> bIsSeeded() { return { this, "APrimalStructureItemContainer_CropPlot.bIsSeeded" }; }
    BitFieldValue<bool, unsigned __int32> bHasFruitItems() { return { this, "APrimalStructureItemContainer_CropPlot.bHasFruitItems" }; }
    BitFieldValue<bool, unsigned __int32> bCropUsesGreenhouse() { return { this, "APrimalStructureItemContainer_CropPlot.bCropUsesGreenhouse" }; }
    BitFieldValue<bool, unsigned __int32> bShowWaterAmount() { return { this, "APrimalStructureItemContainer_CropPlot.bShowWaterAmount" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer_CropPlot.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureItemContainer_CropPlot() { NativeCall<void>(nullptr, "APrimalStructureItemContainer_CropPlot.StaticRegisterNativesAPrimalStructureItemContainer_CropPlot()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    bool AllowRemoteAddItemToInventory(UPrimalInventoryComponent* invComp, UPrimalItem* anItem) { return NativeCall<bool, UPrimalInventoryComponent*, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.AllowRemoteAddItemToInventory(UPrimalInventoryComponent*,UPrimalItem*)", invComp, anItem); }
    void RefreshOpenToSky(EForceInit a2) { NativeCall<void, EForceInit>(this, "APrimalStructureItemContainer_CropPlot.RefreshOpenToSky()", a2); }
    void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer_CropPlot.Tick(float)", DeltaTime); }
    void RequeueAutoWaterRefreshCrop(bool bReadWaterAmount) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.RequeueAutoWaterRefreshCrop(bool)", bReadWaterAmount); }
    void DoRefreshCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.DoRefreshCrop()"); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.PostInitializeComponents()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.Unstasis()"); }
    float AddWater(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer_CropPlot.AddWater(float,bool)", Amount, bAllowNetworking); }
    bool RefreshCrop(float DeltaTime) { return NativeCall<bool, float>(this, "APrimalStructureItemContainer_CropPlot.RefreshCrop(float)", DeltaTime); }
    int GetPhaseInventoryItemCount(ESeedCropPhase::Type cropPhase) { return NativeCall<int, ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.GetPhaseInventoryItemCount(ESeedCropPhase::Type)", cropPhase); }
    TSubclassOf<UPrimalItem>* GetRandomItemToGive(TSubclassOf<UPrimalItem>* result, ESeedCropPhase::Type cropPhase) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*, ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.GetRandomItemToGive(ESeedCropPhase::Type)", result, cropPhase); }
    void SubtractWaterFromWireless(bool bAllowNetworking, float DeltaTime) { NativeCall<void, bool, float>(this, "APrimalStructureItemContainer_CropPlot.SubtractWaterFromWireless(bool,float)", bAllowNetworking, DeltaTime); }
    void SubtractWaterFromPipes(bool UseTaps, bool bAllowNetworking, float DeltaTime) { NativeCall<void, bool, bool, float>(this, "APrimalStructureItemContainer_CropPlot.SubtractWaterFromPipes(bool,bool,float)", UseTaps, bAllowNetworking, DeltaTime); }
    void RefreshWatered() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshWatered()"); }
    void SetWaterState(bool bValue) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.SetWaterState(bool)", bValue); }
    void RefreshFertilized() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshFertilized()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BeginPlay()"); }
    FString* GetCropName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer_CropPlot.GetCropName()", result); }
    void RemovePlantedCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RemovePlantedCrop()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureItemContainer_CropPlot.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureItemContainer_CropPlot.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void UpdateCropVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.UpdateCropVisuals()"); }
    bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.UseItemSpoilingTimeMultipliers()"); }
    void InventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "APrimalStructureItemContainer_CropPlot.InventoryItemUsed(UObject*)", InventoryItemObject); }
    bool ForceAllowsInventoryUse(const UObject* InventoryItemObject) { return NativeCall<bool, const UObject*>(this, "APrimalStructureItemContainer_CropPlot.ForceAllowsInventoryUse(UObject*)", InventoryItemObject); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureItemContainer_CropPlot.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.OverrideHasWaterSource()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer_CropPlot.PlacedStructure(AShooterPlayerController*)", PC); }
    bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer_CropPlot.RemoteInventoryAllowViewing(APlayerController*)", ForPC); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureItemContainer_CropPlot.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)", ItemTemplate, ItemQuantity); }
    bool AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)", ItemTemplate, ItemQuantity); }
    bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem>,int)", ItemTemplate, ItemQuantity); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureItemContainer_CropPlot.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
};

struct APrimalStructureItemContainer_CropPlot_VisualItems : APrimalStructureItemContainer_CropPlot
{
    // Fields

    UStaticMeshComponent*& MyExtraStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.MyExtraStaticMesh"); }
    UStaticMesh*& ExtraStaticMesh_NoItemsField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.ExtraStaticMesh_NoItems"); }
    UStaticMesh*& ExtraStaticMesh_HasItemsField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.ExtraStaticMesh_HasItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemClassesToCheckField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.ItemClassesToCheck"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bHasItems() { return { this, "APrimalStructureItemContainer_CropPlot_VisualItems.bHasItems" }; }
    BitFieldValue<bool, unsigned __int32> bDoItemVisuals() { return { this, "APrimalStructureItemContainer_CropPlot_VisualItems.bDoItemVisuals" }; }
    BitFieldValue<bool, unsigned __int32> bPreviousHasItems() { return { this, "APrimalStructureItemContainer_CropPlot_VisualItems.bPreviousHasItems" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer_CropPlot_VisualItems.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureItemContainer_CropPlot_VisualItems() { NativeCall<void>(nullptr, "APrimalStructureItemContainer_CropPlot_VisualItems.StaticRegisterNativesAPrimalStructureItemContainer_CropPlot_VisualItems()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void UpdateVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.UpdateVisuals()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer_CropPlot_VisualItems.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
};

struct APrimalStructureItemContainer_HordeCrate : APrimalStructureItemContainer_SupplyCrate
{
    // Fields

    UMaterialInterface*& ElementPostProcessMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureItemContainer_HordeCrate.ElementPostProcessMaterial"); }
    UE::Math::TVector<double>& CrateLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_HordeCrate.CrateLoc"); }
    long double& LastGameplayRelevantTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_HordeCrate.LastGameplayRelevantTime"); }

    // Bitfields


    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer_HordeCrate.GetPrivateStaticClass()"); }
    long double GetLastGameplayRelevantTime() { return NativeCall<long double>(this, "APrimalStructureItemContainer_HordeCrate.GetLastGameplayRelevantTime()"); }
    static void StaticRegisterNativesAPrimalStructureItemContainer_HordeCrate() { NativeCall<void>(nullptr, "APrimalStructureItemContainer_HordeCrate.StaticRegisterNativesAPrimalStructureItemContainer_HordeCrate()"); }
    void SpawnElementNodePostProcess() { NativeCall<void>(this, "APrimalStructureItemContainer_HordeCrate.SpawnElementNodePostProcess()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_HordeCrate.BeginPlay()"); }
};


struct APrimalStructureItemContainer_VisualItems : APrimalStructureItemContainer
{
    // Fields

    UStaticMeshComponent*& MyExtraStaticMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureItemContainer_VisualItems.MyExtraStaticMesh"); }
    UStaticMesh*& ExtraStaticMesh_NoItemsField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_NoItems"); }
    UStaticMesh*& ExtraStaticMesh_HasItemsField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_HasItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemClassesToCheckField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_VisualItems.ItemClassesToCheck"); }
    bool& bIgnoreEngramsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_VisualItems.bIgnoreEngrams"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bHasItems() { return { this, "APrimalStructureItemContainer_VisualItems.bHasItems" }; }
    BitFieldValue<bool, unsigned __int32> bDoItemVisuals() { return { this, "APrimalStructureItemContainer_VisualItems.bDoItemVisuals" }; }
    BitFieldValue<bool, unsigned __int32> bPreviousHasItems() { return { this, "APrimalStructureItemContainer_VisualItems.bPreviousHasItems" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureItemContainer_VisualItems.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureItemContainer_VisualItems() { NativeCall<void>(nullptr, "APrimalStructureItemContainer_VisualItems.StaticRegisterNativesAPrimalStructureItemContainer_VisualItems()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_VisualItems.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_VisualItems.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void UpdateVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.UpdateVisuals()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_VisualItems.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer_VisualItems.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
};

struct APrimalStructureKeypad : APrimalStructureItemContainer
{
    // Fields

    float& DoorActivationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureKeypad.DoorActivationRange"); }
    long double& LastPinToggleTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureKeypad.LastPinToggleTime"); }

    // Bitfields


    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureKeypad.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureKeypad() { NativeCall<void>(nullptr, "APrimalStructureKeypad.StaticRegisterNativesAPrimalStructureKeypad()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureKeypad.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureKeypad.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureKeypad.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureKeypad.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
};

struct APrimalStructureLadder : APrimalStructure
{
    // Fields

    float& LadderTopPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderTopPoint"); }
    float& LadderBottomPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderBottomPoint"); }
    UE::Math::TRotator<double>& LadderClimbRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureLadder.LadderClimbRotationOffset"); }
    USoundBase*& LadderRetractionSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureLadder.LadderRetractionSound"); }
    USoundBase*& LadderUnretractionSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureLadder.LadderUnretractionSound"); }
    TObjectPtr<UTexture2D>& ClimbUpIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ClimbUpIcon"); }
    TObjectPtr<UTexture2D>& ClimbDownIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ClimbDownIcon"); }
    TObjectPtr<UTexture2D>& JumpIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.JumpIcon"); }
    TObjectPtr<UTexture2D>& ExtendLadderIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ExtendLadderIcon"); }
    TObjectPtr<UTexture2D>& RetractLadderIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.RetractLadderIcon"); }
    TObjectPtr<UTexture2D>& EnablePublicRetractionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.EnablePublicRetractionIcon"); }
    TObjectPtr<UTexture2D>& DisablePublicRetractionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.DisablePublicRetractionIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bWasRetracted() { return { this, "APrimalStructureLadder.bWasRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bWasLowerLaddersRetracted() { return { this, "APrimalStructureLadder.bWasLowerLaddersRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bPostSpawnInitialized() { return { this, "APrimalStructureLadder.bPostSpawnInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bCanRetract() { return { this, "APrimalStructureLadder.bCanRetract" }; }
    BitFieldValue<bool, unsigned __int32> bCanRetractFromBottom() { return { this, "APrimalStructureLadder.bCanRetractFromBottom" }; }
    BitFieldValue<bool, unsigned __int32> bIsRetracted() { return { this, "APrimalStructureLadder.bIsRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bHasLowerLaddersRetracted() { return { this, "APrimalStructureLadder.bHasLowerLaddersRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPublicRetraction() { return { this, "APrimalStructureLadder.bAllowPublicRetraction" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureLadder.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureLadder() { NativeCall<void>(nullptr, "APrimalStructureLadder.StaticRegisterNativesAPrimalStructureLadder()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureLadder.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureLadder.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureLadder.PostSpawnInitialize()"); }
    bool IsValidForSnappingFrom_Implementation(APrimalStructure* OtherStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructureLadder.IsValidForSnappingFrom_Implementation(APrimalStructure*)", OtherStructure); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureLadder.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureLadder.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureLadder.Destroyed()"); }
    bool IsLocationClearForCharacter(AShooterCharacter* ForCharacter, const UE::Math::TVector<double>* MountLoc) { return NativeCall<bool, AShooterCharacter*, const UE::Math::TVector<double>*>(this, "APrimalStructureLadder.IsLocationClearForCharacter(AShooterCharacter*,UE::Math::TVector<double>&)", ForCharacter, MountLoc); }
    bool IsNearTopOfLadder(AShooterCharacter* theCharacter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureLadder.IsNearTopOfLadder(AShooterCharacter*)", theCharacter); }
    APrimalStructureLadder* GetTopLadder() { return NativeCall<APrimalStructureLadder*>(this, "APrimalStructureLadder.GetTopLadder()"); }
    APrimalStructureLadder* GetBottomLadder() { return NativeCall<APrimalStructureLadder*>(this, "APrimalStructureLadder.GetBottomLadder()"); }
    APrimalStructureLadder* GetNextLadder(bool Up) { return NativeCall<APrimalStructureLadder*, bool>(this, "APrimalStructureLadder.GetNextLadder(bool)", Up); }
    void StartClimbingLadder(AShooterCharacter* theCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureLadder.StartClimbingLadder(AShooterCharacter*)", theCharacter); }
    void CheckForEndClimbing(AShooterCharacter* theCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureLadder.CheckForEndClimbing(AShooterCharacter*)", theCharacter); }
    static void EndClimbingLadder(AShooterCharacter* theCharacter, bool bServerClimbOver, const UE::Math::TVector<double>* ServerClimbOverLoc, bool bIsFromJump) { NativeCall<void, AShooterCharacter*, bool, const UE::Math::TVector<double>*, bool>(nullptr, "APrimalStructureLadder.EndClimbingLadder(AShooterCharacter*,bool,UE::Math::TVector<double>&,bool)", theCharacter, bServerClimbOver, ServerClimbOverLoc, bIsFromJump); }
    static void ServerEndClimbing(AShooterCharacter* theCharacter, bool bIsClimbOver, UE::Math::TVector<double>* ClimbOverLoc, UE::Math::TVector<double>* JumpDir) { NativeCall<void, AShooterCharacter*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "APrimalStructureLadder.ServerEndClimbing(AShooterCharacter*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", theCharacter, bIsClimbOver, ClimbOverLoc, JumpDir); }
    void SetLaddersRetracted(bool bRetract, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >* TestedLadders) { NativeCall<void, bool, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllocator<32>>&)", bRetract, TestedLadders); }
    void UpdateRetraction() { NativeCall<void>(this, "APrimalStructureLadder.UpdateRetraction()"); }
};

struct APrimalStructureMovingContainer : APrimalStructureItemContainer
{
    // Fields

    UE::Math::TVector<double>& FinalLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureMovingContainer.FinalLocation"); }
    UE::Math::TVector<double>& ItemBalloonLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureMovingContainer.ItemBalloonLocation"); }
    unsigned __int16& ItemLatitudeField() { return *GetNativePointerField<unsigned __int16*>(this, "APrimalStructureMovingContainer.ItemLatitude"); }
    unsigned __int16& ItemLongitudeField() { return *GetNativePointerField<unsigned __int16*>(this, "APrimalStructureMovingContainer.ItemLongitude"); }
    float& LocationNameField() { return *GetNativePointerField<float*>(this, "APrimalStructureMovingContainer.LocationName"); }

    // Bitfields


    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureMovingContainer.StaticClass()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMovingContainer.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureMovingContainer.Tick(float)", DeltaSeconds); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMovingContainer.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureMovingContainer.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
};

struct APrimalStructurePlacer : AInfo
{
    // Fields

    bool& bNoFadeInField() { return *GetNativePointerField<bool*>(this, "APrimalStructurePlacer.bNoFadeIn"); }
    float& FadeTimerField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.FadeTimer"); }
    UE::Math::TRotator<double>& InitialPlacerActorChooseRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructurePlacer.InitialPlacerActorChooseRotation"); }
    UE::Math::TRotator<double>& LastSetViewRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructurePlacer.LastSetViewRotation"); }
    UE::Math::TRotator<double>& LastHitRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructurePlacer.LastHitRotation"); }
    FTimerHandle& OnUseHeldTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePlacer.OnUseHeldTimerHandle"); }
    FTimerHandle& OnSnapCycleHeldTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePlacer.OnSnapCycleHeldTimerHandle"); }
    int& CurrentPlacingStructureIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.CurrentPlacingStructureIndex"); }
    APrimalStructure*& CurrentPlacingStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructurePlacer.CurrentPlacingStructure"); }
    APrimalStructure*& CurrentSnapTargetField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructurePlacer.CurrentSnapTarget"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PlaceableStructuresField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePlacer.PlaceableStructures"); }
    int& PlacingAlignmentModeField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.PlacingAlignmentMode"); }
    int& PlacingRotationModeField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.PlacingRotationMode"); }
    FName& RotationAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.RotationAxisName"); }
    float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationSpeed"); }
    FName& AltRotationAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltRotationAxisName"); }
    float& AltRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltRotationSpeed"); }
    //FCanvasIcon& RotationIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "APrimalStructurePlacer.RotationIcon"); }
    float& RotationIconSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconSize"); }
    float& RotationIconScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconScale"); }
    FName& PitchAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.PitchAxisName"); }
    float& PitchSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.PitchSpeed"); }
    FName& AltPitchAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltPitchAxisName"); }
    float& AltPitchSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltPitchSpeed"); }
    float& YawOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.YawOffset"); }
    float& YawOffsetIncrementField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.YawOffsetIncrement"); }
    //UCurveFloat*& PreviewMaterialLuminanceCurveField() { return *GetNativePointerField<UCurveFloat**>(this, "APrimalStructurePlacer.PreviewMaterialLuminanceCurve"); }
    FString& PressUseStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.PressUseString"); }
    FString& HoldUseStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.HoldUseString"); }
    FString& KeyUseStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyUseString"); }
    UTexture2D*& GamepadButtonUseField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadButtonUse"); }
    FString& PressGiveDefaultWeaponStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.PressGiveDefaultWeaponString"); }
    FString& HoldGiveDefaultWeaponStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.HoldGiveDefaultWeaponString"); }
    FString& KeyGiveDefaultWeaponStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyGiveDefaultWeaponString"); }
    UTexture2D*& GamepadButtonGiveDefaultWeaponField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadButtonGiveDefaultWeapon"); }
    FString& KeyReloadStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyReloadString"); }
    UTexture2D*& GamepadReloadField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadReload"); }
    FString& NumVariantsStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.NumVariantsString"); }
    float& PlacementAdjustHeightAmtField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.PlacementAdjustHeightAmt"); }
    FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructurePlacer.PlaceUsingItemID"); }
    UE::Math::TVector<double>& LastHitLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructurePlacer.LastHitLoc"); }
    TWeakObjectPtr<UPrimalItem>& CurrentlyPlacingWithItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem>*>(this, "APrimalStructurePlacer.CurrentlyPlacingWithItem"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDebugStructures() { return { this, "APrimalStructurePlacer.bDebugStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisplayMissionAreaStructureNoBuildZones() { return { this, "APrimalStructurePlacer.bForceDisplayMissionAreaStructureNoBuildZones" }; }
    BitFieldValue<bool, unsigned __int32> bIsCheating() { return { this, "APrimalStructurePlacer.bIsCheating" }; }
    BitFieldValue<bool, unsigned __int32> bLastPlacementWasSnapped() { return { this, "APrimalStructurePlacer.bLastPlacementWasSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bLastPlacementOnSaddle() { return { this, "APrimalStructurePlacer.bLastPlacementOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacementFlipped() { return { this, "APrimalStructurePlacer.bIsPlacementFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bLockCameraDuringChooseRotation() { return { this, "APrimalStructurePlacer.bLockCameraDuringChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreOptionalSnaps() { return { this, "APrimalStructurePlacer.bIgnoreOptionalSnaps" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructurePlacer.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructurePlacer() { NativeCall<void>(nullptr, "APrimalStructurePlacer.StaticRegisterNativesAPrimalStructurePlacer()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructurePlacer.BeginPlay()"); }
    bool CanStartPlacingStructure() { return NativeCall<bool>(this, "APrimalStructurePlacer.CanStartPlacingStructure()"); }
    void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructurePlacer.Tick(float)", DeltaTime); }
    void BeginState(EPrimalStructurePlacerState PreviousState) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.BeginState(EPrimalStructurePlacerState)", PreviousState); }
    void SetForceDisplayMissionAreaStructureNoBuildZones(bool bForceDisplay) { NativeCall<void, bool>(this, "APrimalStructurePlacer.SetForceDisplayMissionAreaStructureNoBuildZones(bool)", bForceDisplay); }
    void EndState(EPrimalStructurePlacerState NewState) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.EndState(EPrimalStructurePlacerState)", NewState); }
    void StartPlacingStructure(TSubclassOf<APrimalStructure> StructureClass, const FItemNetID* ForItemID, bool bSkipCheatCheck) { NativeCall<void, TSubclassOf<APrimalStructure>, const FItemNetID*, bool>(this, "APrimalStructurePlacer.StartPlacingStructure(TSubclassOf<APrimalStructure>,FItemNetID&,bool)", StructureClass, ForItemID, bSkipCheatCheck); }
    void StartPlacingStructure(int StructureIndex, const FItemNetID* ForItemID, bool bIsCheat, bool bSkipCheatCheck) { NativeCall<void, int, const FItemNetID*, bool, bool>(this, "APrimalStructurePlacer.StartPlacingStructure(int,FItemNetID&,bool,bool)", StructureIndex, ForItemID, bIsCheat, bSkipCheatCheck); }
    bool ConfirmPlacingStructure(bool bDontAdjustForMaxRange) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.ConfirmPlacingStructure(bool)", bDontAdjustForMaxRange); }
    void CancelPlacingStructure(EPrimalStructurePlacerState a2) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.CancelPlacingStructure()", a2); }
    bool TestStructurePlacement(TSubclassOf<APrimalStructure> StructureClass, bool bDontAdjustForMaxRange, bool ForceMessageDisplay) { return NativeCall<bool, TSubclassOf<APrimalStructure>, bool, bool>(this, "APrimalStructurePlacer.TestStructurePlacement(TSubclassOf<APrimalStructure>,bool,bool)", StructureClass, bDontAdjustForMaxRange, ForceMessageDisplay); }
    bool IsPlacingActive() { return NativeCall<bool>(this, "APrimalStructurePlacer.IsPlacingActive()"); }
    void FinalStructurePlacement(APlayerController* PC, int StructureIndex, UE::Math::TVector<double>* TestBuildLocation, UE::Math::TRotator<double>* TestBuildRotation, UE::Math::TRotator<double>* PlayerViewRotation, FItemNetID FinalPlacementItemID, FPlacementData* PlacementData, bool bIsCheat, bool bIsFlipped, int SnapPointCycle) { NativeCall<void, APlayerController*, int, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, FItemNetID, FPlacementData*, bool, bool, int>(this, "APrimalStructurePlacer.FinalStructurePlacement(APlayerController*,int,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,FItemNetID,FPlacementData,bool,bool,int)", PC, StructureIndex, TestBuildLocation, TestBuildRotation, PlayerViewRotation, FinalPlacementItemID, PlacementData, bIsCheat, bIsFlipped, SnapPointCycle); }
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructurePlacer.DrawHUD(AShooterHUD*)", HUD); }
    void DrawStructurePreviewHUD(AShooterHUD* HUD, APrimalStructure* PlacingStructure) { NativeCall<void, AShooterHUD*, APrimalStructure*>(this, "APrimalStructurePlacer.DrawStructurePreviewHUD(AShooterHUD*,APrimalStructure*)", HUD, PlacingStructure); }
    void CycleNextStructureToPlace(__int16 a2) { NativeCall<void, __int16>(this, "APrimalStructurePlacer.CycleNextStructureToPlace()", a2); }
    bool HandleSnapCycleAction(bool WasPressed, bool GoBack) { return NativeCall<bool, bool, bool>(this, "APrimalStructurePlacer.HandleSnapCycleAction(bool,bool)", WasPressed, GoBack); }
    void HandleSnapCycleActionTimer() { NativeCall<void>(this, "APrimalStructurePlacer.HandleSnapCycleActionTimer()"); }
    bool HandleOnUseAction(bool WasPressed) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.HandleOnUseAction(bool)", WasPressed); }
    void HandleOnUseActionTimer() { NativeCall<void>(this, "APrimalStructurePlacer.HandleOnUseActionTimer()"); }
};

struct APrimalStructurePortableLadder : APrimalStructureLadder
{
    // Fields

    float& MaximumHeightAllowedForLadderField() { return *GetNativePointerField<float*>(this, "APrimalStructurePortableLadder.MaximumHeightAllowedForLadder"); }
    USkeletalMeshComponent*& SkeletalMeshThatIsInAnimationField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructurePortableLadder.SkeletalMeshThatIsInAnimation"); }
    //TSubclassOf<UAnimInstance>& BottomAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "APrimalStructurePortableLadder.BottomAnimBlueprint"); }
    //TSubclassOf<UAnimInstance>& MidAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "APrimalStructurePortableLadder.MidAnimBlueprint"); }
    UAnimMontage*& MidRetractedAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidRetractedAnimMontageBlueprint"); }
    UAnimMontage*& BottomRetractedAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomRetractedAnimMontageBlueprint"); }
    UAnimMontage*& MidAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidAnimMontageBlueprint"); }
    UAnimMontage*& BottomAnimMontageBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomAnimMontageBlueprint"); }
    UAnimMontage*& MidAnimMontageExtendedBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidAnimMontageExtendedBlueprint"); }
    UAnimMontage*& BottomAnimMontageExtendedBlueprintField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomAnimMontageExtendedBlueprint"); }
    USkeletalMesh*& MidSkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalStructurePortableLadder.MidSkeletalMesh"); }
    USkeletalMesh*& MyBottomSkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalStructurePortableLadder.MyBottomSkeletalMesh"); }
    TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >& MidLadderSkeletalMeshsField() { return *GetNativePointerField<TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.MidLadderSkeletalMeshs"); }
    USkeletalMeshComponent*& BottomLadderSkeletalMeshField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructurePortableLadder.BottomLadderSkeletalMesh"); }
    TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >& SkeletalMeshsForAnimationField() { return *GetNativePointerField<TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.SkeletalMeshsForAnimation"); }
    FTimerHandle& AnimTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePortableLadder.AnimTimerHandle"); }
    UBoxComponent*& CollisionBoxComponentField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructurePortableLadder.CollisionBoxComponent"); }
    FTimerHandle& PlaySetupAnimationHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePortableLadder.PlaySetupAnimationHandle"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bisDonePlacing() { return { this, "APrimalStructurePortableLadder.bisDonePlacing" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructurePortableLadder.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructurePortableLadder() { NativeCall<void>(nullptr, "APrimalStructurePortableLadder.StaticRegisterNativesAPrimalStructurePortableLadder()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructurePortableLadder.PlacedStructureLocation()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructurePortableLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructurePortableLadder.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void SetLaddersRetracted(bool bRetract, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >* TestedLadders) { NativeCall<void, bool, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllocator<32>>&)", bRetract, TestedLadders); }
    void UpdateRetraction() { NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateRetraction()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructurePortableLadder.BeginPlay()"); }
    void UpdateLadder() { NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateLadder()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePortableLadder.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>* theVec, APlayerController* PC, int index) { NativeCall<void, UE::Math::TVector2<double>*, APlayerController*, int>(this, "APrimalStructurePortableLadder.ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>&,APlayerController*,int)", theVec, PC, index); }
};

struct APrimalStructureSeaMine : APrimalStructure
{
    // Fields

    USphereComponent*& TriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureSeaMine.TriggerComponent"); }
    USphereComponent*& ExplodingTriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureSeaMine.ExplodingTriggerComponent"); }
    UParticleSystem*& ActivatedMineParticleSystemField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystem"); }
    UE::Math::TVector<double>& ActivatedMineParticleSystemOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystemOffset"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.ActivateMaterials"); }
    USoundBase*& ActivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureSeaMine.ActivatedSound"); }
    float& SeaMineSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineSpeed"); }
    float& SeaMineExplodeTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineExplodeTime"); }
    float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionDamage"); }
    float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionRadius"); }
    float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionImpulse"); }
    TSubclassOf<UDamageType>& ExplosionDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureSeaMine.ExplosionDamageType"); }
    int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeaMine.OwnerTargetingTeam"); }
    TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& TriggerOverlappingCharactersField() { return *GetNativePointerField<TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.TriggerOverlappingCharacters"); }
    UE::Math::TVector<double>& LastKnownTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeaMine.LastKnownTargetLocation"); }
    APrimalCharacter*& SeaMineTargetField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureSeaMine.SeaMineTarget"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bActivatedSeaMine() { return { this, "APrimalStructureSeaMine.bActivatedSeaMine" }; }
    BitFieldValue<bool, unsigned __int32> bDisableExplosion() { return { this, "APrimalStructureSeaMine.bDisableExplosion" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureSeaMine.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureSeaMine() { NativeCall<void>(nullptr, "APrimalStructureSeaMine.StaticRegisterNativesAPrimalStructureSeaMine()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureSeaMine.PlacedStructure(AShooterPlayerController*)", PC); }
    bool FinalStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bWithFlipped, FPlacementData* PlacementData) { return NativeCall<bool, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APawn*, FName, bool, FPlacementData*>(this, "APrimalStructureSeaMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bWithFlipped, PlacementData); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureSeaMine.BeginPlay()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureSeaMine.Tick(float)", DeltaSeconds); }
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "APrimalStructureSeaMine.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, Other, OtherComp, OtherBodyIndex); }
    void RefreshSeaMineTarget() { NativeCall<void>(this, "APrimalStructureSeaMine.RefreshSeaMineTarget()"); }
    void ActivateSeaMine() { NativeCall<void>(this, "APrimalStructureSeaMine.ActivateSeaMine()"); }
    void Explode() { NativeCall<void>(this, "APrimalStructureSeaMine.Explode()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureSeaMine.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
};

struct APrimalStructureSeatingMusic : APrimalStructureSeating
{
    // Fields

    UStaticMeshComponent*& StickMesh1Field() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeatingMusic.StickMesh1"); }
    UStaticMeshComponent*& StickMesh2Field() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeatingMusic.StickMesh2"); }
    FName& StickMeshAttachPoint1Field() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint1"); }
    FName& StickMeshAttachPoint2Field() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint2"); }
    TArray<USoundBase*, TSizedDefaultAllocator<32> >& InstrumentSoundsField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeatingMusic.InstrumentSounds"); }
    TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& InstrumentPawnAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeatingMusic.InstrumentPawnAnimations"); }
    float& MinimumTimeBetweenPlaysField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeatingMusic.MinimumTimeBetweenPlays"); }
    TArray<double, TSizedDefaultAllocator<32> >& LastPlayInstrumentTimeField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeatingMusic.LastPlayInstrumentTime"); }

    // Bitfields


    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureSeatingMusic.StaticClass()"); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSeatingMusic.PostInitializeComponents()"); }
    void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureSeatingMusic.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
    void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureSeatingMusic.Release(AShooterCharacter*)", ShooterCharacter); }
    void OnPrimaryFire() { NativeCall<void>(this, "APrimalStructureSeatingMusic.OnPrimaryFire()"); }
    void OnAltFire() { NativeCall<void>(this, "APrimalStructureSeatingMusic.OnAltFire()"); }
    void OnUseKey(int Index) { NativeCall<void, int>(this, "APrimalStructureSeatingMusic.OnUseKey(int)", Index); }
    void LocalSeatingStructureAction(unsigned __int8 ActionNumber) { NativeCall<void, unsigned __int8>(this, "APrimalStructureSeatingMusic.LocalSeatingStructureAction(unsignedchar)", ActionNumber); }
    void ServerSeatingStructureAction(unsigned __int8 ActionNumber) { NativeCall<void, unsigned __int8>(this, "APrimalStructureSeatingMusic.ServerSeatingStructureAction(unsignedchar)", ActionNumber); }
};

struct APrimalStructureSign : APrimalStructure
{
    // Fields

    FString& SignTextField() { return *GetNativePointerField<FString*>(this, "APrimalStructureSign.SignText"); }
    float& SignWidthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignWidth"); }
    int& MaxNumberofCharactersField() { return *GetNativePointerField<int*>(this, "APrimalStructureSign.MaxNumberofCharacters"); }
    float& MinFontSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MinFontSize"); }
    float& DefaultScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.DefaultScale"); }
    //UTextRenderComponent*& TextRenderField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APrimalStructureSign.TextRender"); }
    TObjectPtr<UTexture2D>& SetSignTextIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSign.SetSignTextIcon"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureSign.LastSignNamingTime"); }

    // Bitfields


    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureSign.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureSign() { NativeCall<void>(nullptr, "APrimalStructureSign.StaticRegisterNativesAPrimalStructureSign()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSign.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureSign.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureSign.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureSign.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSign.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureSign.BeginPlay()"); }
    void OnBlockListUpdated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureSign.OnBlockListUpdated(AShooterPlayerController*)", PC); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureSign.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void RefreshStructureColors(UMeshComponent* ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructureSign.RefreshStructureColors(UMeshComponent*)", ForceRefreshComponent); }
};

struct APrimalStructureSkeletalDoor : APrimalStructureDoor
{
    // Fields

    USkeletalMeshComponent*& SkeletalDoorComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureSkeletalDoor.SkeletalDoorComponent"); }
    UShapeComponent*& DoorCollisionComponentField() { return *GetNativePointerField<UShapeComponent**>(this, "APrimalStructureSkeletalDoor.DoorCollisionComponent"); }
    UShapeComponent*& TriggerComponentField() { return *GetNativePointerField<UShapeComponent**>(this, "APrimalStructureSkeletalDoor.TriggerComponent"); }
    TSubclassOf<APrimalBuff>& BuffToApplyWhenInsideStructureField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalStructureSkeletalDoor.BuffToApplyWhenInsideStructure"); }

    // Bitfields


    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureSkeletalDoor.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureSkeletalDoor() { NativeCall<void>(nullptr, "APrimalStructureSkeletalDoor.StaticRegisterNativesAPrimalStructureSkeletalDoor()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureSkeletalDoor.Tick(float)", DeltaSeconds); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSkeletalDoor.PostInitializeComponents()"); }
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult* SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult*>(this, "APrimalStructureSkeletalDoor.OnBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "APrimalStructureSkeletalDoor.OnEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }
};

struct APrimalStructureTribeFlag : APrimalStructure
{
    // Fields

    unsigned int& TribeIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTribeFlag.TribeID"); }

    // Bitfields


    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTribeFlag.StaticClass()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTribeFlag.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    bool AllowColoringBy(APlayerController* ForPC, UObject* anItem) { return NativeCall<bool, APlayerController*, UObject*>(this, "APrimalStructureTribeFlag.AllowColoringBy(APlayerController*,UObject*)", ForPC, anItem); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTribeFlag.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
};

struct APrimalStructureTripwire : APrimalStructureExplosive
{
    // Fields

    UParticleSystemComponent*& WireComponentField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureTripwire.WireComponent"); }
    UBoxComponent*& TriggerComponentField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructureTripwire.TriggerComponent"); }
    UE::Math::TRotator<double>& CableRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTripwire.CableRotOffset"); }
    float& MaximumCableLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTripwire.MaximumCableLength"); }
    USoundBase*& NotifyTripChatSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureTripwire.NotifyTripChatSound"); }
    FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTripwire.BoxName"); }
    APrimalStructureTripwire*& ConnectedToField() { return *GetNativePointerField<APrimalStructureTripwire**>(this, "APrimalStructureTripwire.ConnectedTo"); }
    int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureTripwire.OwnerTargetingTeam"); }
    long double& LastToggleAlliesTripTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTripwire.LastToggleAlliesTripTime"); }
    UE::Math::TVector<double>& WireComponentRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTripwire.WireComponentRelativeLocation"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTripwire.LastSignNamingTime"); }
    TObjectPtr<UTexture2D>& RewireIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.RewireIcon"); }
    TObjectPtr<UTexture2D>& UnwireIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.UnwireIcon"); }
    TObjectPtr<UTexture2D>& EnableTripAlliesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.EnableTripAlliesIcon"); }
    TObjectPtr<UTexture2D>& DisableTripAlliesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.DisableTripAlliesIcon"); }
    TObjectPtr<UTexture2D>& EnableTripWildDinosIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.EnableTripWildDinosIcon"); }
    TObjectPtr<UTexture2D>& DisableTripWildDinosIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.DisableTripWildDinosIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bOnlyPrimalCharacters() { return { this, "APrimalStructureTripwire.bOnlyPrimalCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllies() { return { this, "APrimalStructureTripwire.bIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyTripChat() { return { this, "APrimalStructureTripwire.bNotifyTripChat" }; }
    BitFieldValue<bool, unsigned __int32> bShowingWireComponent() { return { this, "APrimalStructureTripwire.bShowingWireComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreAllies() { return { this, "APrimalStructureTripwire.bForceIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreWildDinos() { return { this, "APrimalStructureTripwire.bForceIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bDoingWireCheck() { return { this, "APrimalStructureTripwire.bDoingWireCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUnwiredTrap() { return { this, "APrimalStructureTripwire.bUnwiredTrap" }; }
    BitFieldValue<bool, unsigned __int32> bAllowToggleForceIgnoreAllies() { return { this, "APrimalStructureTripwire.bAllowToggleForceIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bAllowToggleForceIgnoreWildDinos() { return { this, "APrimalStructureTripwire.bAllowToggleForceIgnoreWildDinos" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTripwire.StaticClass()"); }
    void DisconnectMe() { NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe()"); }
    void NetUpdateBoxName(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureTripwire.NetUpdateBoxName(FString&)", NewName); }
    static void StaticRegisterNativesAPrimalStructureTripwire() { NativeCall<void>(nullptr, "APrimalStructureTripwire.StaticRegisterNativesAPrimalStructureTripwire()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTripwire.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTripwire.BeginPlay()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureTripwire.PlacedStructure(AShooterPlayerController*)", PC); }
    void OnRep_ConnectedTo() { NativeCall<void>(this, "APrimalStructureTripwire.OnRep_ConnectedTo()"); }
    void OnRep_UnwiredTrap() { NativeCall<void>(this, "APrimalStructureTripwire.OnRep_UnwiredTrap()"); }
    void Multicast_ConnectedTo_Implementation(APrimalStructureTripwire* InTripwire) { NativeCall<void, APrimalStructureTripwire*>(this, "APrimalStructureTripwire.Multicast_ConnectedTo_Implementation(APrimalStructureTripwire*)", InTripwire); }
    void SetConnectedTo(APrimalStructureTripwire* InTripwire) { NativeCall<void, APrimalStructureTripwire*>(this, "APrimalStructureTripwire.SetConnectedTo(APrimalStructureTripwire*)", InTripwire); }
    bool IsWireComponentValid() { return NativeCall<bool>(this, "APrimalStructureTripwire.IsWireComponentValid()"); }
    void WireCheck() { NativeCall<void>(this, "APrimalStructureTripwire.WireCheck()"); }
    void Tripped() { NativeCall<void>(this, "APrimalStructureTripwire.Tripped()"); }
    void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureTripwire.SetStaticMobility()"); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureTripwire.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureTripwire.Unstasis()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTripwire.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool CanDetonateMe(AShooterCharacter* Character, bool bUsingRemote) { return NativeCall<bool, AShooterCharacter*, bool>(this, "APrimalStructureTripwire.CanDetonateMe(AShooterCharacter*,bool)", Character, bUsingRemote); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTripwire.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void DisconnectMe_Implementation() { NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe_Implementation()"); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureTripwire.GetDescriptiveName()", result); }
    void PostInitProperties() { NativeCall<void>(this, "APrimalStructureTripwire.PostInitProperties()"); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureTripwire.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void NetUpdateBoxName_Implementation(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureTripwire.NetUpdateBoxName_Implementation(FString&)", NewName); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureTripwire.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTripwire.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void ShowWireComponent() { NativeCall<void>(this, "APrimalStructureTripwire.ShowWireComponent()"); }
    void HideWireComponent() { NativeCall<void>(this, "APrimalStructureTripwire.HideWireComponent()"); }
    void SetUnwiredTrap(bool bUnwire) { NativeCall<void, bool>(this, "APrimalStructureTripwire.SetUnwiredTrap(bool)", bUnwire); }
};

struct APrimalStructureTurret : APrimalStructureItemContainer
{
    // Fields

    TWeakObjectPtr<AActor>& WeakTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalStructureTurret.WeakTarget"); }
    TSubclassOf<UPrimalItem>& AmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureTurret.AmmoItemTemplate"); }
    TSubclassOf<APrimalEmitterSpawnable>& MuzzleFlashEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.MuzzleFlashEmitter"); }
    float& FireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireInterval"); }
    long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastFireTime"); }
    long double& LastLongReloadStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastLongReloadStartTime"); }
    float& MaxFireYawDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFireYawDelta"); }
    float& MaxFirePitchDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFirePitchDelta"); }
    UE::Math::TVector<double>& TargetingLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.TargetingLocOffset"); }
    float& TargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.TargetingRotationInterpSpeed"); }
    float& NonTargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.NonTargetingRotationInterpSpeed"); }
    FieldArray<float, 3> TargetingRangesField() { return { this, "APrimalStructureTurret.TargetingRanges" }; }
    UE::Math::TVector<double>& TargetingTraceOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.TargetingTraceOffset"); }
    TSubclassOf<UDamageType>& FireDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureTurret.FireDamageType"); }
    float& FireDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageAmount"); }
    float& FireDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageImpulse"); }
    UParticleSystem*& TrailFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurret.TrailFX"); }
    UE::Math::TRotator<double>& TurretAimRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurret.TurretAimRotOffset"); }
    UE::Math::TVector<double>& AimTargetLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.AimTargetLocOffset"); }
    UE::Math::TVector<double>& PlayerProneTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.PlayerProneTargetOffset"); }
    float& AimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AimSpread"); }
    unsigned __int8& RangeSettingField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurret.RangeSetting"); }
    unsigned __int8& WarningSettingField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurret.WarningSetting"); }
    unsigned __int8& AISettingField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurret.AISetting"); }
    int& MinTargetLevelField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MinTargetLevel"); }
    int& MaxTargetLevelField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MaxTargetLevel"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& DinoTargetListField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.DinoTargetList"); }
    int& NumBulletsField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBullets"); }
    int& NumBulletsPerShotField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBulletsPerShot"); }
    int& LongAmmoReloadCDField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.LongAmmoReloadCD"); }
    float& MaxAmmoContainerReloadPercentField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxAmmoContainerReloadPercent"); }
    float& AlwaysEnableFastTurretTargetingOverVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AlwaysEnableFastTurretTargetingOverVelocity"); }
    TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "APrimalStructureTurret.ProjectileClass"); }
    float& WarningExpirationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.WarningExpirationTime"); }
    TSubclassOf<APrimalEmitterSpawnable>& WarningEmitterShortField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.WarningEmitterShort"); }
    TSubclassOf<APrimalEmitterSpawnable>& WarningEmitterLongField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurret.WarningEmitterLong"); }
    float& BatteryIntervalFromActivationBeforeFiringField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurret.MySkeletalMeshComp"); }
    FTimerHandle& FinishWarningHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTurret.FinishWarningHandle"); }
    UChildActorComponent*& MyChildEmitterTargetingEffectField() { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
    UE::Math::TRotator<double>& DefaultTurretAimRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurret.DefaultTurretAimRotOffset"); }
    UE::Math::TVector<double>& MuzzleLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurret.MuzzleLocOffset"); }
    long double& LastWarningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastWarningTime"); }
    int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MagazineSize"); }
    float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.RangeToCheckForAmmo"); }
    float& AmmoBoxReloadCooldownField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AmmoBoxReloadCooldown"); }
    UStaticMeshComponent*& CopySettingsRangeMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurret.CopySettingsRangeMesh"); }
    long double& LastCheckNearbyAmmoContainerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastCheckNearbyAmmoContainerTime"); }
    TObjectPtr<UTexture2D>& ShowCopySettingsVisualIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.ShowCopySettingsVisualIcon"); }
    TObjectPtr<UTexture2D>& HideCopySettingsVisualIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.HideCopySettingsVisualIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsInRangeIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeWithPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsInRangeWithPinCodeIcon"); }
    TObjectPtr<UTexture2D>& TargetingOptionsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.TargetingOptionsIcon"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& RangeSettingIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.RangeSettingIcons"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& AISettingIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.AISettingIcons"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& WarningSettingIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.WarningSettingIcons"); }
    TObjectPtr<UTexture2D>& InclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.InclusionListIcon"); }
    TObjectPtr<UTexture2D>& ExclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.ExclusionListIcon"); }
    TObjectPtr<UTexture2D>& AddCreatureToInclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.AddCreatureToInclusionListIcon"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromInclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.RemoveCreatureFromInclusionListIcon"); }
    TObjectPtr<UTexture2D>& AddCreatureToExclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.AddCreatureToExclusionListIcon"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromExclusionListIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.RemoveCreatureFromExclusionListIcon"); }
    float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurret.FluidSimSplashTemplateOverride"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bUseNoWarning() { return { this, "APrimalStructureTurret.bUseNoWarning" }; }
    BitFieldValue<bool, unsigned __int32> bUseLevelLimitsForTargeting() { return { this, "APrimalStructureTurret.bUseLevelLimitsForTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseInclusionListTargeting() { return { this, "APrimalStructureTurret.bUseInclusionListTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseNoAmmo() { return { this, "APrimalStructureTurret.bUseNoAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseAmmoOnDamage() { return { this, "APrimalStructureTurret.bOnlyUseAmmoOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bHasOmniDirectionalFire() { return { this, "APrimalStructureTurret.bHasOmniDirectionalFire" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectiles() { return { this, "APrimalStructureTurret.bFireProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bClientFireProjectile() { return { this, "APrimalStructureTurret.bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargeting() { return { this, "APrimalStructureTurret.bIsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bInWaterOnlyTargetWater() { return { this, "APrimalStructureTurret.bInWaterOnlyTargetWater" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIgnoreProjectiles() { return { this, "APrimalStructureTurret.bTurretIgnoreProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTurretPreventsTargeting() { return { this, "APrimalStructureTurret.bUseBPTurretPreventsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bAimIgnoreSockets() { return { this, "APrimalStructureTurret.bAimIgnoreSockets" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIsDisabledTooManyNearbyTurrets() { return { this, "APrimalStructureTurret.bTurretIsDisabledTooManyNearbyTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer() { return { this, "APrimalStructureTurret.bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseMaxInventoryForAmmoContainerReload() { return { this, "APrimalStructureTurret.bUseMaxInventoryForAmmoContainerReload" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargetListInclusion() { return { this, "APrimalStructureTurret.bIsTargetListInclusion" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTurret.GetPrivateStaticClass()"); }
    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTurret.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureTurret() { NativeCall<void>(nullptr, "APrimalStructureTurret.StaticRegisterNativesAPrimalStructureTurret()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureTurret.DrawHUD(AShooterHUD*)", HUD); }
    AActor* GetTarget() { return NativeCall<AActor*>(this, "APrimalStructureTurret.GetTarget()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurret.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    AActor* FindTarget(bool* bTargetsInRange) { return NativeCall<AActor*, bool*>(this, "APrimalStructureTurret.FindTarget(bool*)", bTargetsInRange); }
    void SetTarget(AActor* aTarget) { NativeCall<void, AActor*>(this, "APrimalStructureTurret.SetTarget(AActor*)", aTarget); }
    void NetMultiUpdateTarget_Implementation(AActor* pNewTarget, long double NewLastFireTime) { NativeCall<void, AActor*, long double>(this, "APrimalStructureTurret.NetMultiUpdateTarget_Implementation(AActor*,double)", pNewTarget, NewLastFireTime); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureTurret.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    void WeaponTraceHits(TArray<FHitResult, TSizedDefaultAllocator<32> >* HitResults, const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace) { NativeCall<void, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalStructureTurret.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", HitResults, StartTrace, EndTrace); }
    void GetAmmoNearby(UClass** FoundAmmoItemType, bool bAlreadyTriedFindTargetThisFrame) { NativeCall<void, UClass**, bool>(this, "APrimalStructureTurret.GetAmmoNearby(UClass**,bool)", FoundAmmoItemType, bAlreadyTriedFindTargetThisFrame); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureTurret.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurret.DoFire(int)", RandomSeed); }
    void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurret.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
    void ClientsFireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", Origin, ShootDir); }
    void SpawnTrailEffect(const UE::Math::TVector<double>* EndPoint) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalStructureTurret.SpawnTrailEffect(UE::Math::TVector<double>&)", EndPoint); }
    bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "APrimalStructureTurret.ShouldDealDamage(AActor*)", TestActor); }
    void DealDamage(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurret.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
    void StartWarning() { NativeCall<void>(this, "APrimalStructureTurret.StartWarning()"); }
    void FinishWarning() { NativeCall<void>(this, "APrimalStructureTurret.FinishWarning()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurret.Tick(float)", DeltaSeconds); }
    bool IsValidToFire() { return NativeCall<bool>(this, "APrimalStructureTurret.IsValidToFire()"); }
    FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName()", result); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTurret.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTurret.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureTurret.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureTurret.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureTurret.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureTurret.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    void UpdateNumBullets() { NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets()"); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents()"); }
    void Stasis() { NativeCall<void>(this, "APrimalStructureTurret.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureTurret.Unstasis()"); }
    void UpdatedTargeting() { NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting()"); }
    bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurret.CanFire()"); }
    FName* GetTargetAltAimSocket(FName* result, APrimalCharacter* ForTarget) { return NativeCall<FName*, FName*, APrimalCharacter*>(this, "APrimalStructureTurret.GetTargetAltAimSocket(APrimalCharacter*)", result, ForTarget); }
    USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructureTurret.GetSkeletalMeshComponent()"); }
    bool UseTurretFastTargeting(bool bCheckFastTargetingAutoEnabled) { return NativeCall<bool, bool>(this, "APrimalStructureTurret.UseTurretFastTargeting(bool)", bCheckFastTargetingAutoEnabled); }
    void ConsumeAmmo() { NativeCall<void>(this, "APrimalStructureTurret.ConsumeAmmo()"); }
    void CopySettingsToTurrentsInRange(APlayerController* ForPC, int PinCode) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureTurret.CopySettingsToTurrentsInRange(APlayerController*,int)", ForPC, PinCode); }
    void SetPinToTurrentsInRange(APlayerController* ForPC, int PinCode) { NativeCall<void, APlayerController*, int>(this, "APrimalStructureTurret.SetPinToTurrentsInRange(APlayerController*,int)", ForPC, PinCode); }
    void ToggleCopySettingsVisualRange() { NativeCall<void>(this, "APrimalStructureTurret.ToggleCopySettingsVisualRange()"); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureTurret.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    bool GetHasNearbyAmmoContainer() { return NativeCall<bool>(this, "APrimalStructureTurret.GetHasNearbyAmmoContainer()"); }
};

struct APrimalStructureTurretBallista : APrimalStructureSeating
{
    // Fields

    FName& TurretTipBoneField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretTipBone"); }
    FName& RiderOverrideSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.RiderOverrideSocketName"); }
    TSubclassOf<UPrimalItem>& AmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureTurretBallista.AmmoItemTemplate"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& AlternateAmmoItemTemplatesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplates"); }
    TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "APrimalStructureTurretBallista.ProjectileClass"); }
    TSubclassOf<UDamageType>& ShootingDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureTurretBallista.ShootingDamageType"); }
    float& ShootingDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageAmount"); }
    float& ShootingDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageImpulse"); }
    UParticleSystem*& ShootingTrailFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurretBallista.ShootingTrailFX"); }
    float& ShootingAimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingAimSpread"); }
    TSubclassOf<APrimalEmitterSpawnable>& MuzzleFlashEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureTurretBallista.MuzzleFlashEmitter"); }
    float& ShootingFireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingFireInterval"); }
    long double& LastShootingFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.LastShootingFireTime"); }
    bool& bIsShootingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsShooting"); }
    bool& bQueuedShotField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bQueuedShot"); }
    float& YawViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.YawViewRotation"); }
    float& OldYawViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.OldYawViewRotation"); }
    float& PitctViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.PitctViewRotation"); }
    UE::Math::TRotator<double>& RotationInputField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurretBallista.RotationInput"); }
    USoundCue*& FireSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.FireSound"); }
    USoundCue*& EmptyFireSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.EmptyFireSound"); }
    USoundCue*& RotateSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.RotateSoundCue"); }
    float& RotateSpeedThresholdField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSpeedThreshold"); }
    float& RotateSoundFadeInSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeInSpeed"); }
    float& RotateSoundFadeOutSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeOutSpeed"); }
    float& RotateSoundMinVolumeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMinVolume"); }
    float& RotateSoundMaxVolumeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMaxVolume"); }
    float& TPVCameraPitchMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMin"); }
    float& TPVCameraPitchMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMax"); }
    float& TPVCameraYawMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMin"); }
    float& TPVCameraYawMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMax"); }
    UAnimMontage*& FireBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.FireBallistaAnimation"); }
    UAnimMontage*& EmptyBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.EmptyBallistaAnimation"); }
    UAnimMontage*& ReloadBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.ReloadBallistaAnimation"); }
    float& ControllerRiddingYawField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ControllerRiddingYaw"); }
    FName& TurretSkeletalMeshComponentNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretSkeletalMeshComponentName"); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretBallista.MySkeletalMeshComp"); }
    FName& AttachedModuleComponentNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.AttachedModuleComponentName"); }
    USkeletalMeshComponent*& AttachedModuleSkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretBallista.AttachedModuleSkeletalMeshComp"); }
    UAnimMontage*& AttachedModuleFireAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.AttachedModuleFireAnimation"); }
    UAnimMontage*& AttachedModuleReloadAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.AttachedModuleReloadAnimation"); }
    FName& ProjectileMeshAttachPointField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPoint"); }
    FName& ProjectileMeshAttachPointForMeshOnlyField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPointForMeshOnly"); }
    FName& ProjectileBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileBoneName"); }
    unsigned __int8& bQueueReloadingAnimationField() { return *GetNativePointerField<unsigned __int8*>(this, "APrimalStructureTurretBallista.bQueueReloadingAnimation"); }
    UStaticMeshComponent*& ProjectileMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurretBallista.ProjectileMesh"); }
    UAudioComponent*& RotateSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalStructureTurretBallista.RotateSoundComponent"); }
    UTexture2D*& ProgressBarBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructureTurretBallista.ProgressBarBackground"); }
    UTexture2D*& ProgressBarForegroundField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructureTurretBallista.ProgressBarForeground"); }
    int& AmmoCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.AmmoCount"); }
    UClass*& CurrentAmmoItemTemplateField() { return *GetNativePointerField<UClass**>(this, "APrimalStructureTurretBallista.CurrentAmmoItemTemplate"); }
    int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.MagazineSize"); }
    float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RangeToCheckForAmmo"); }
    FString& CurrentAmmoSourceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretBallista.CurrentAmmoSourceString"); }
    long double& AuthorityDisableUpdateMeshAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.AuthorityDisableUpdateMeshAtTime"); }
    UStaticMesh*& AmmoItemTemplateMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureTurretBallista.AmmoItemTemplateMesh"); }
    TArray<UStaticMesh*, TSizedDefaultAllocator<32> >& AlternateAmmoItemTemplateMeshesField() { return *GetNativePointerField<TArray<UStaticMesh*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplateMeshes"); }
    TArray<TSubclassOf<AShooterProjectile>, TSizedDefaultAllocator<32> >& AlternateAmmoProjectileClassesField() { return *GetNativePointerField<TArray<TSubclassOf<AShooterProjectile>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoProjectileClasses"); }
    TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >& BuffsWhileSeatedField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.BuffsWhileSeated"); }
    float& DefaultAmmoReloadAnimSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.DefaultAmmoReloadAnimSpeed"); }
    TArray<float, TSizedDefaultAllocator<32> >& AlternateAmmoReloadAnimSpeedsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.AlternateAmmoReloadAnimSpeeds"); }
    float& HealthCostPerShotField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.HealthCostPerShot"); }
    float& MinimumHealthPercentToShootField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.MinimumHealthPercentToShoot"); }
    float& InstantFireTraceRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.InstantFireTraceRange"); }
    long double& lastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.lastFireTime"); }
    float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurretBallista.FluidSimSplashTemplateOverride"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bClientFireProjectile() { return { this, "APrimalStructureTurretBallista.bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstantDamageShooting() { return { this, "APrimalStructureTurretBallista.bUseInstantDamageShooting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableInElectricalStorm() { return { this, "APrimalStructureTurretBallista.bDisableInElectricalStorm" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffsetOnCharacter() { return { this, "APrimalStructureTurretBallista.bUseBallistaAimOffsetOnCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsReloading() { return { this, "APrimalStructureTurretBallista.bIsReloading" }; }
    BitFieldValue<bool, unsigned __int32> bIsFiring() { return { this, "APrimalStructureTurretBallista.bIsFiring" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectileInvertX() { return { this, "APrimalStructureTurretBallista.bFireProjectileInvertX" }; }
    BitFieldValue<bool, unsigned __int32> bShowProjectileOnlyBasedOnAmmo() { return { this, "APrimalStructureTurretBallista.bShowProjectileOnlyBasedOnAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bHideProjectileBone() { return { this, "APrimalStructureTurretBallista.bHideProjectileBone" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFire() { return { this, "APrimalStructureTurretBallista.bUseBPCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFiredWeapon() { return { this, "APrimalStructureTurretBallista.bUseBPFiredWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bHideProjectileBoneOnAttachedModule() { return { this, "APrimalStructureTurretBallista.bHideProjectileBoneOnAttachedModule" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer() { return { this, "APrimalStructureTurretBallista.bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDamageMultiplier() { return { this, "APrimalStructureTurretBallista.bUseBPGetDamageMultiplier" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTurretBallista.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureTurretBallista() { NativeCall<void>(nullptr, "APrimalStructureTurretBallista.StaticRegisterNativesAPrimalStructureTurretBallista()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurretBallista.DoFire(int)", RandomSeed); }
    void TryFiring_Implementation(bool shouldFire) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring_Implementation(bool)", shouldFire); }
    void ServerSwitchAmmoType_Implementation() { NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType_Implementation()"); }
    void StartFire() { NativeCall<void>(this, "APrimalStructureTurretBallista.StartFire()"); }
    void StopFire() { NativeCall<void>(this, "APrimalStructureTurretBallista.StopFire()"); }
    void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalStructureTurretBallista.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurretBallista.PostInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretBallista.BeginPlay()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretBallista.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureTurretBallista.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.Tick(float)", DeltaSeconds); }
    bool CanUse(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureTurretBallista.CanUse(AShooterPlayerController*)", ForPC); }
    void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureTurretBallista.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
    void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureTurretBallista.Release(AShooterCharacter*)", ShooterCharacter); }
    void SwitchAmmoType() { NativeCall<void>(this, "APrimalStructureTurretBallista.SwitchAmmoType()"); }
    void OnRep_Loaded() { NativeCall<void>(this, "APrimalStructureTurretBallista.OnRep_Loaded()"); }
    USkeletalMeshComponent* GetSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructureTurretBallista.GetSkeletalMeshComponent()"); }
    void PlayReloadAnimation() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayReloadAnimation()"); }
    bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanFire()"); }
    bool CanReload() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanReload()"); }
    void GetCameraLocationAndRotation(UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureTurretBallista.GetCameraLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", Location, Rotation); }
    void UpdateAmmoCount(bool bIncludePlayerInventory, bool bIgnoreGetAmmoNearby) { NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.UpdateAmmoCount(bool,bool)", bIncludePlayerInventory, bIgnoreGetAmmoNearby); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureTurretBallista.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureTurretBallista.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureTurretBallista.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
    void ClientsPlayFireAnim_Implementation() { NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim_Implementation()"); }
    void ClientsFireProjectile_Implementation(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*>(this, "APrimalStructureTurretBallista.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", Origin, ShootDir); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureTurretBallista.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    void ShowProjectileMesh(bool Visible, bool bIsFromStartLoading) { NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.ShowProjectileMesh(bool,bool)", Visible, bIsFromStartLoading); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureTurretBallista.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    bool CanDemolish() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanDemolish()"); }
    bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructureTurretBallista.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
    bool IsBallistaPenetratingWalls(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalStructureTurretBallista.IsBallistaPenetratingWalls()", a2); }
    FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurretBallista.GetMuzzleFlashSocketName()", result); }
    void GetShootingOriginAndDirection(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* Direction) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.GetShootingOriginAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, Direction); }
    void DealDamageOnServer(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.DealDamageOnServer(FHitResult&,UE::Math::TVector<double>)", Impact, ShootDir); }
    void DealDamage(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurretBallista.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
    void WeaponTraceHits(TArray<FHitResult, TSizedDefaultAllocator<32> >* HitResults, const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace) { NativeCall<void, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", HitResults, StartTrace, EndTrace); }
    int GetAmmoNearby(UClass* ForAmmoType) { return NativeCall<int, UClass*>(this, "APrimalStructureTurretBallista.GetAmmoNearby(UClass*)", ForAmmoType); }
    void SpawnTrailEffect(const UE::Math::TVector<double>* EndPoint) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretBallista.SpawnTrailEffect(UE::Math::TVector<double>&)", EndPoint); }
    int GetAmmoAmount(UClass* ForAmmoType, bool bIncludePlayerInventory) { return NativeCall<int, UClass*, bool>(this, "APrimalStructureTurretBallista.GetAmmoAmount(UClass*,bool)", ForAmmoType, bIncludePlayerInventory); }
    void ServerSetTargeting_Implementation(bool bTargeting) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.ServerSetTargeting_Implementation(bool)", bTargeting); }
};

struct APrimalStructureTurretPlant : APrimalStructureTurret
{
    // Fields

    TArray<FName, TSizedDefaultAllocator<32> >& PlantMuzzleSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretPlant.PlantMuzzleSockets"); }
    TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& PlantAttackAnimsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretPlant.PlantAttackAnims"); }
    float& PlantHealthRecoverPerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.PlantHealthRecoverPerSec"); }
    float& AmountOfFertilizerToUsePerShotField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.AmountOfFertilizerToUsePerShot"); }
    float& HealthRecoverPerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.HealthRecoverPerSec"); }
    APrimalStructureItemContainer_CropPlot*& OwnerCropPlotField() { return *GetNativePointerField<APrimalStructureItemContainer_CropPlot**>(this, "APrimalStructureTurretPlant.OwnerCropPlot"); }
    FTimerHandle& RecoverHealthTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTurretPlant.RecoverHealthTimerHandle"); }
    FName& AttackOriginSocketField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretPlant.AttackOriginSocket"); }
    UE::Math::TVector<double>& AttackOriginLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurretPlant.AttackOriginLocation"); }
    UE::Math::TRotator<double>& AttackOriginRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurretPlant.AttackOriginRotation"); }
    int& SelectedAttackOriginField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretPlant.SelectedAttackOrigin"); }

    // Bitfields


    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureTurretPlant.GetPrivateStaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureTurretPlant() { NativeCall<void>(nullptr, "APrimalStructureTurretPlant.StaticRegisterNativesAPrimalStructureTurretPlant()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretPlant.BeginPlay()"); }
    void SetHealthRecoveryTimer() { NativeCall<void>(this, "APrimalStructureTurretPlant.SetHealthRecoveryTimer()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTurretPlant.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTurretPlant.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void RecoverHealthTimer() { NativeCall<void>(this, "APrimalStructureTurretPlant.RecoverHealthTimer()"); }
    bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurretPlant.CanFire()"); }
    void SelectAttackOrigin(const UE::Math::TVector<double>* TargetPosition) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretPlant.SelectAttackOrigin(UE::Math::TVector<double>&)", TargetPosition); }
    void PlayShootAnim() { NativeCall<void>(this, "APrimalStructureTurretPlant.PlayShootAnim()"); }
    FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurretPlant.GetMuzzleFlashSocketName()", result); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureTurretPlant.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureTurretPlant.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void Stasis() { NativeCall<void>(this, "APrimalStructureTurretPlant.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureTurretPlant.Unstasis()"); }
};

struct APrimalStructureUnderwaterBase : APrimalStructureItemContainer
{
    // Fields

    TArray<FPorthole, TSizedDefaultAllocator<32> >& PortholesField() { return *GetNativePointerField<TArray<FPorthole, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.Portholes"); }
    TArray<int, TSizedDefaultAllocator<32> >& PortholeStateField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeState"); }
    TArray<int, TSizedDefaultAllocator<32> >& PortholeSaveStateField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeSaveState"); }
    TArray<APrimalStructureUnderwaterBase*, TSizedDefaultAllocator<32> >& PortholeLinksField() { return *GetNativePointerField<TArray<APrimalStructureUnderwaterBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeLinks"); }
    TSubclassOf<APrimalEmitterSpawnable>& FloodedEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureUnderwaterBase.FloodedEmitter"); }
    TSubclassOf<APrimalEmitterSpawnable>& UnfloodedEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "APrimalStructureUnderwaterBase.UnfloodedEmitter"); }
    USoundBase*& OpenPortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.OpenPortholeSound"); }
    USoundBase*& ClosePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.ClosePortholeSound"); }
    USoundBase*& FreezePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.FreezePortholeSound"); }
    USoundBase*& UnfreezePortholeSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureUnderwaterBase.UnfreezePortholeSound"); }
    TArray<unsigned int, TSizedDefaultAllocator<32> >& CurrentPinCodesField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.CurrentPinCodes"); }
    TArray<FString, TSizedDefaultAllocator<32> >& PortholeNameOverridesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeNameOverrides"); }
    TArray<FColor, TSizedDefaultAllocator<32> >& PortholeNameIconColorOverridesField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.PortholeNameIconColorOverrides"); }
    TMap<APlayerController*, UPrimitiveComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APlayerController*, UPrimitiveComponent*, 0> >& ClientsViewingPortholesField() { return *GetNativePointerField<TMap<APlayerController*, UPrimitiveComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APlayerController*, UPrimitiveComponent*, 0> >*>(this, "APrimalStructureUnderwaterBase.ClientsViewingPortholes"); }
    UBoxComponent*& InteriorBoxField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructureUnderwaterBase.InteriorBox"); }
    long double& LastTogglePortholeStateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureUnderwaterBase.LastTogglePortholeStateTime"); }
    TObjectPtr<UTexture2D>& DrainCompartmentIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.DrainCompartmentIcon"); }
    TObjectPtr<UTexture2D>& FloodCompartmentIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.FloodCompartmentIcon"); }
    TObjectPtr<UTexture2D>& DrainAllConnectedIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.DrainAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& FloodAllConnectedIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.FloodAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& OpenIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.OpenIcon"); }
    TObjectPtr<UTexture2D>& OpenWindowIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.OpenWindowIcon"); }
    TObjectPtr<UTexture2D>& CloseIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.CloseIcon"); }
    TObjectPtr<UTexture2D>& ShowFrameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.ShowFrameIcon"); }
    TObjectPtr<UTexture2D>& HideFrameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.HideFrameIcon"); }
    TObjectPtr<UTexture2D>& ShowConnectedFramesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.ShowConnectedFramesIcon"); }
    TObjectPtr<UTexture2D>& HideConnectedFramesIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureUnderwaterBase.HideConnectedFramesIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bIsFlooded() { return { this, "APrimalStructureUnderwaterBase.bIsFlooded" }; }
    BitFieldValue<bool, unsigned __int32> bIsFrameHidden() { return { this, "APrimalStructureUnderwaterBase.bIsFrameHidden" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureUnderwaterBase.GetPrivateStaticClass()"); }
    void SetPortholeState(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.SetPortholeState(int,int)", index, NewState); }
    static void StaticRegisterNativesAPrimalStructureUnderwaterBase() { NativeCall<void>(nullptr, "APrimalStructureUnderwaterBase.StaticRegisterNativesAPrimalStructureUnderwaterBase()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureUnderwaterBase.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void OnRep_IsFlooded() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.OnRep_IsFlooded()"); }
    void OnRep_IsFrameHidden() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.OnRep_IsFrameHidden()"); }
    bool IsInsideBase(const UE::Math::TVector<double>* AtPoint) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalStructureUnderwaterBase.IsInsideBase(UE::Math::TVector<double>&)", AtPoint); }
    void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureUnderwaterBase.AddedLinkedStructure(APrimalStructure*)", Structure); }
    void RemovedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureUnderwaterBase.RemovedLinkedStructure(APrimalStructure*)", Structure); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.BeginPlay()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureUnderwaterBase.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureUnderwaterBase.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureUnderwaterBase.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void SetCurrentViewingPorthole(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructureUnderwaterBase.SetCurrentViewingPorthole(APlayerController*)", ForPC); }
    void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.SetStructureCollisionChannels()"); }
    void PopulatePortholes() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.PopulatePortholes()"); }
    void SetPortholeState_Implementation(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.SetPortholeState_Implementation(int,int)", index, NewState); }
    void DoSetPortholeState(int index, int NewState) { NativeCall<void, int, int>(this, "APrimalStructureUnderwaterBase.DoSetPortholeState(int,int)", index, NewState); }
    void RefreshLinkedPorthole(const FPorthole* porthole) { NativeCall<void, const FPorthole*>(this, "APrimalStructureUnderwaterBase.RefreshLinkedPorthole(FPorthole&)", porthole); }
    void RefreshPortholeLinks() { NativeCall<void>(this, "APrimalStructureUnderwaterBase.RefreshPortholeLinks()"); }
    APrimalStructureUnderwaterBase* GetLinkedBaseByPortholeIndex(int PortholeIndex, int* LinkedPortholeIndex) { return NativeCall<APrimalStructureUnderwaterBase*, int, int*>(this, "APrimalStructureUnderwaterBase.GetLinkedBaseByPortholeIndex(int,int&)", PortholeIndex, LinkedPortholeIndex); }
    bool CanOpenPorthole(const FPorthole* porthole) { return NativeCall<bool, const FPorthole*>(this, "APrimalStructureUnderwaterBase.CanOpenPorthole(FPorthole&)", porthole); }
    bool IsPortholeObstructed(const FPorthole* porthole, bool CheckForPawns) { return NativeCall<bool, const FPorthole*, bool>(this, "APrimalStructureUnderwaterBase.IsPortholeObstructed(FPorthole&,bool)", porthole, CheckForPawns); }
    bool AreBasesOpenToEachOther(APrimalStructureUnderwaterBase* OtherBase, int MyPortholeIndex, int OtherPortholeIndex) { return NativeCall<bool, APrimalStructureUnderwaterBase*, int, int>(this, "APrimalStructureUnderwaterBase.AreBasesOpenToEachOther(APrimalStructureUnderwaterBase*,int,int)", OtherBase, MyPortholeIndex, OtherPortholeIndex); }
    void UpdateFloodState(APlayerController* PC, bool DoFlood, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateFloodState(APlayerController*,bool,bool)", PC, DoFlood, bDontIncrementTagger); }
    void UpdateFrameState(APlayerController* PC, bool HideFrame, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateFrameState(APlayerController*,bool,bool)", PC, HideFrame, bDontIncrementTagger); }
    void UpdateLockState(APlayerController* PC, bool DoLock, bool bDontIncrementTagger) { NativeCall<void, APlayerController*, bool, bool>(this, "APrimalStructureUnderwaterBase.UpdateLockState(APlayerController*,bool,bool)", PC, DoLock, bDontIncrementTagger); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureUnderwaterBase.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
};

struct APrimalStructureWaterPipe : APrimalStructure
{
    // Fields

    float& AutoDestroyPeriodWhenUnconnectedToNonPipeField() { return *GetNativePointerField<float*>(this, "APrimalStructureWaterPipe.AutoDestroyPeriodWhenUnconnectedToNonPipe"); }
    UMaterialInterface*& HasWaterMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureWaterPipe.HasWaterMaterial"); }
    UMaterialInterface*& NoWaterMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureWaterPipe.NoWaterMaterial"); }
    int& WaterMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureWaterPipe.WaterMaterialIndex"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAlwaysHasWater() { return { this, "APrimalStructureWaterPipe.bAlwaysHasWater" }; }
    BitFieldValue<bool, unsigned __int32> bHasWater() { return { this, "APrimalStructureWaterPipe.bHasWater" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeshHidden() { return { this, "APrimalStructureWaterPipe.bIsMeshHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterPipe() { return { this, "APrimalStructureWaterPipe.bIsWaterPipe" }; }
    BitFieldValue<bool, unsigned __int32> bConnectedToNonPipe() { return { this, "APrimalStructureWaterPipe.bConnectedToNonPipe" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRefreshPipeMaterials() { return { this, "APrimalStructureWaterPipe.bUseBPOnRefreshPipeMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnWaterStateChange() { return { this, "APrimalStructureWaterPipe.bUseBPOnWaterStateChange" }; }
    BitFieldValue<bool, unsigned __int32> bCanHideMesh() { return { this, "APrimalStructureWaterPipe.bCanHideMesh" }; }
    BitFieldValue<bool, unsigned __int32> bHasRefreshedConnectedToNonPipe() { return { this, "APrimalStructureWaterPipe.bHasRefreshedConnectedToNonPipe" }; }

    // Functions

    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalStructureWaterPipe.StaticClass()"); }
    static void StaticRegisterNativesAPrimalStructureWaterPipe() { NativeCall<void>(nullptr, "APrimalStructureWaterPipe.StaticRegisterNativesAPrimalStructureWaterPipe()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureWaterPipe.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureWaterPipe.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void OnRep_IsMeshHidden() { NativeCall<void>(this, "APrimalStructureWaterPipe.OnRep_IsMeshHidden()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureWaterPipe.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureWaterPipe.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void SetHasWater(bool bNewHasWater) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.SetHasWater(bool)", bNewHasWater); }
    void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureWaterPipe.FinalLoadedFromSaveGame()"); }
    void RemovedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureWaterPipe.RemovedLinkedStructure(APrimalStructure*)", Structure); }
    void AddedLinkedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureWaterPipe.AddedLinkedStructure(APrimalStructure*)", Structure); }
    void PreLinkedStructure() { NativeCall<void>(this, "APrimalStructureWaterPipe.PreLinkedStructure()"); }
    void RefreshLinkedToNonPipeState() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshLinkedToNonPipeState()"); }
    bool Internal_CheckForNonPipeLink() { return NativeCall<bool>(this, "APrimalStructureWaterPipe.Internal_CheckForNonPipeLink()"); }
    void Internal_PushNonPipeLink(bool bHasLinkToNonPipe) { NativeCall<void, bool>(this, "APrimalStructureWaterPipe.Internal_PushNonPipeLink(bool)", bHasLinkToNonPipe); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureWaterPipe.Unstasis()"); }
    void RefreshWaterState() { NativeCall<void>(this, "APrimalStructureWaterPipe.RefreshWaterState()"); }
    void ParseGraphForWater(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* InContainerOverrideWaterSpots, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* InAlwaysWaterSpots, APrimalStructureWaterPipe* OriginalWaterPipe) { NativeCall<void, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, APrimalStructureWaterPipe*>(this, "APrimalStructureWaterPipe.ParseGraphForWater(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,APrimalStructureWaterPipe*)", InContainerOverrideWaterSpots, InAlwaysWaterSpots, OriginalWaterPipe); }
    void PushWaterState(bool bHasInContainerOverrideSpots, bool bHasAlwaysWaterSpots) { NativeCall<void, bool, bool>(this, "APrimalStructureWaterPipe.PushWaterState(bool,bool)", bHasInContainerOverrideSpots, bHasAlwaysWaterSpots); }
    bool CheckForWater(TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>* TestedStructures, bool bAllowWateredOverride, APrimalStructureWaterPipe* OriginalWaterPipe) { return NativeCall<bool, TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>*, bool, APrimalStructureWaterPipe*>(this, "APrimalStructureWaterPipe.CheckForWater(TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>&,bool,APrimalStructureWaterPipe*)", TestedStructures, bAllowWateredOverride, OriginalWaterPipe); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureWaterPipe.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureWaterPipe.PostInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureWaterPipe.BeginPlay()"); }
    void SubtractWaterFromConnections_Internal(float Amount, float* AmountRemoved, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* TestedStructures, bool bAllowNetworking) { NativeCall<void, float, float*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalStructureWaterPipe.SubtractWaterFromConnections_Internal(float,float&,TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,bool)", Amount, AmountRemoved, TestedStructures, bAllowNetworking); }
    void GetAllLinkedPipes(TArray<APrimalStructureWaterPipe*, TSizedDefaultAllocator<32> >* OutLinkedPipes) { NativeCall<void, TArray<APrimalStructureWaterPipe*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureWaterPipe.GetAllLinkedPipes(TArray<APrimalStructureWaterPipe*,TSizedDefaultAllocator<32>>&)", OutLinkedPipes); }
};
