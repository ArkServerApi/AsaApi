#pragma once


struct FPrimalStructureSparseClassData : FPrimalTargetableActorSparseClassData
{
    // Fields

    TArray<FName, TSizedDefaultAllocator<32> >& SecondaryStructureTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.SecondaryStructureTags"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& StructuresAllowedToBeVerticalGroundField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.StructuresAllowedToBeVerticalGround"); }
    TArray<FName, TSizedDefaultAllocator<32> >& AllowSnapRotationForTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.AllowSnapRotationForTags"); }
    TArray<FName, TSizedDefaultAllocator<32> >& ForceAllowSnapRotationForTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.ForceAllowSnapRotationForTags"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& PreventPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.PreventPlacingOnFloorClasses"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& AllowPlacingOnFloorClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.AllowPlacingOnFloorClasses"); }
    TArray<FName, TSizedDefaultAllocator<32> >& EncroachmentCheckIgnoreStructureTypeTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.EncroachmentCheckIgnoreStructureTypeTags"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PreventReplacementOfStructureClassTypesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.PreventReplacementOfStructureClassTypes"); }
    TArray<FName, TSizedDefaultAllocator<32> >& StructureRangeTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.StructureRangeTags"); }
    TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >& ReturnDamageExcludeIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.ReturnDamageExcludeIncomingTypes"); }
    TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >& ReturnDamageOnlyForIncomingTypesField() { return *GetNativePointerField<TArray<TSubclassOf<UDamageType>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.ReturnDamageOnlyForIncomingTypes"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& SnapToStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.SnapToStructureTypesToExclude"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& SnapFromStructureTypesToExcludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.SnapFromStructureTypesToExclude"); }
    TArray<FName, TSizedDefaultAllocator<32> >& SnapToStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.SnapToStructureTagsToExclude"); }
    TArray<FName, TSizedDefaultAllocator<32> >& SnapFromStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.SnapFromStructureTagsToExclude"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& OnlyAllowStructureClassesToAttachField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.OnlyAllowStructureClassesToAttach"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& OnlyAllowStructureClassesFromAttachField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.OnlyAllowStructureClassesFromAttach"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& ExcludeInStructuresRadiusClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadiusClasses"); }
    TArray<FName, TSizedDefaultAllocator<32> >& ExcludeInStructuresRadiusTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadiusTags"); }
    TArray<FString, TSizedDefaultAllocator<32> >& PreventBuildStructureReasonStringOverridesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.PreventBuildStructureReasonStringOverrides"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& PreventSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.PreventSaddleDinoClasses"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& AllowSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.AllowSaddleDinoClasses"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& ForceAllowWallAttachmentClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.ForceAllowWallAttachmentClasses"); }
    TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >& FastDecayLinkedStructureClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.FastDecayLinkedStructureClasses"); }
    TArray<FName, TSizedDefaultAllocator<32> >& CustomDataModifiedOnStructurePickupField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.CustomDataModifiedOnStructurePickup"); }
    TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& StructureSkinSupportedStructuresField() { return *GetNativePointerField<TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.StructureSkinSupportedStructures"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& TribeActivationRankSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.TribeActivationRankSelectionIcons"); }
    TArray<FName, TSizedDefaultAllocator<32> >& AttachToDinoMeshSocketNameBasesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.AttachToDinoMeshSocketNameBases"); }
    TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& AttachToDinoMeshDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.AttachToDinoMeshDinoClasses"); }
    UE::Math::TRotator<double>& PlacementRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalStructureSparseClassData.PlacementRotOffset"); }
    UE::Math::TRotator<double>& PlacementTraceRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalStructureSparseClassData.PlacementTraceRotOffset"); }
    UE::Math::TRotator<double>& SnappingRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalStructureSparseClassData.SnappingRotationOffset"); }
    UE::Math::TRotator<double>& TakeGroundNormalRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalStructureSparseClassData.TakeGroundNormalRotationOffset"); }
    UE::Math::TRotator<double>& SpawnEmitterRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalStructureSparseClassData.SpawnEmitterRotationOffset"); }
    UE::Math::TVector<double>& SpawnEmitterLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.SpawnEmitterLocationOffset"); }
    UE::Math::TVector<double>& PreviewCameraPivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.PreviewCameraPivotOffset"); }
    UE::Math::TVector<double>& PreviewCameraBoundsOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.PreviewCameraBoundsOverride"); }
    UE::Math::TVector<double>& FlipByScaleDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.FlipByScaleDirection"); }
    UE::Math::TVector<double>& PlacementCollisionAdjustmentBufferField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.PlacementCollisionAdjustmentBuffer"); }
    UE::Math::TVector<double>& WorldGeoCheckExtraBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.WorldGeoCheckExtraBoxExtent"); }
    UE::Math::TVector<double>& WaterVolumeCheckPointOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.WaterVolumeCheckPointOffset"); }
    UE::Math::TVector<double>& ReplacementCheckOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.ReplacementCheckOffset"); }
    UE::Math::TVector<double>& AdvancedRotationPlacementOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.AdvancedRotationPlacementOffset"); }
    UE::Math::TVector<double>& AttachToStaticMeshSocketMinScaleDefaultField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.AttachToStaticMeshSocketMinScaleDefault"); }
    UE::Math::TVector<double>& HideGrassExtentsOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.HideGrassExtentsOverride"); }
    UE::Math::TVector<double>& HideGrassExtentsOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalStructureSparseClassData.HideGrassExtentsOffset"); }
    UE::Math::TVector2<double>& OverlayTooltipPaddingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FPrimalStructureSparseClassData.OverlayTooltipPadding"); }
    UE::Math::TVector2<double>& OverlayTooltipScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FPrimalStructureSparseClassData.OverlayTooltipScale"); }
    FName& StructureTagField() { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.StructureTag"); }
    FName& AttachToStaticMeshSocketNameBaseField() { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.AttachToStaticMeshSocketNameBase"); }
    FName& PlaceOnWallUseStaticMeshTagField() { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.PlaceOnWallUseStaticMeshTag"); }
    TSoftClassPtr<UPrimalItem>& ItemClassToTrapContainerField() { return *GetNativePointerField<TSoftClassPtr<UPrimalItem>*>(this, "FPrimalStructureSparseClassData.ItemClassToTrapContainer"); }
    TSoftClassPtr<APrimalStructure>& StructureExplosionTrapField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "FPrimalStructureSparseClassData.StructureExplosionTrap"); }
    TSoftClassPtr<APrimalStructure>& PreventReplacementOfStructureClassTypeField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "FPrimalStructureSparseClassData.PreventReplacementOfStructureClassType"); }
    TSoftClassPtr<APrimalStructure>& AllowReplacementByStructureClassTypeField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "FPrimalStructureSparseClassData.AllowReplacementByStructureClassType"); }
    TSoftClassPtr<APrimalStructure>& SnapStructureClassField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "FPrimalStructureSparseClassData.SnapStructureClass"); }
    TSubclassOf<UPrimalItem>& ConsumesPrimalItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalStructureSparseClassData.ConsumesPrimalItem"); }
    TSubclassOf<UDamageType>& ReturnDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FPrimalStructureSparseClassData.ReturnDamageType"); }
    TSubclassOf<APrimalEmitterSpawnable>& SpawnEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "FPrimalStructureSparseClassData.SpawnEmitter"); }
    TSubclassOf<UPrimalHarvestingComponent>& StructureHarvestingComponentField() { return *GetNativePointerField<TSubclassOf<UPrimalHarvestingComponent>*>(this, "FPrimalStructureSparseClassData.StructureHarvestingComponent"); }
    //TSubclassOf<UBuildingUI>& BuildingUITemplateOverrideField() { return *GetNativePointerField<TSubclassOf<UBuildingUI>*>(this, "FPrimalStructureSparseClassData.BuildingUITemplateOverride"); }
    TObjectPtr<UTexture2D>& BuildingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.BuildingIcon"); }
    TObjectPtr<UMaterialInterface>& StructureIconMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "FPrimalStructureSparseClassData.StructureIconMaterial"); }
    TObjectPtr<UTexture2D>& RenameIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.RenameIcon"); }
    TObjectPtr<UTexture2D>& PickupIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.PickupIcon"); }
    TObjectPtr<UTexture2D>& DemolishIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.DemolishIcon"); }
    TObjectPtr<UTexture2D>& RepairIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.RepairIcon"); }
    TObjectPtr<UTexture2D>& CantRepairIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.CantRepairIcon"); }
    TObjectPtr<UTexture2D>& ColorizeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ColorizeIcon"); }
    TObjectPtr<UTexture2D>& OpenContainerIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.OpenContainerIcon"); }
    TObjectPtr<UTexture2D>& ClaimIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ClaimIcon"); }
    TObjectPtr<UTexture2D>& UseSoapIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.UseSoapIcon"); }
    TObjectPtr<UTexture2D>& ShowRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ShowRangeIcon"); }
    TObjectPtr<UTexture2D>& HideRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.HideRangeIcon"); }
    TObjectPtr<UTexture2D>& LockIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.LockIcon"); }
    TObjectPtr<UTexture2D>& UnlockIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.UnlockIcon"); }
    TObjectPtr<UTexture2D>& SetPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.SetPinCodeIcon"); }
    TObjectPtr<UTexture2D>& ClearPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ClearPinCodeIcon"); }
    TObjectPtr<UTexture2D>& EnterPinCodeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.EnterPinCodeIcon"); }
    TObjectPtr<UTexture2D>& SetPinCodeInRangeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.SetPinCodeInRangeIcon"); }
    TObjectPtr<UTexture2D>& EnableAdminOnlyAccessField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.EnableAdminOnlyAccess"); }
    TObjectPtr<UTexture2D>& DisableAdminOnlyAccessField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.DisableAdminOnlyAccess"); }
    TObjectPtr<UTexture2D>& TribeRankSettingsIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.TribeRankSettingsIcon"); }
    TObjectPtr<UTexture2D>& VariantsFolderIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.VariantsFolderIcon"); }
    TObjectPtr<UTexture2D>& DefaultVariantIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.DefaultVariantIcon"); }
    TObjectPtr<UTexture2D>& RemoveSkinIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.RemoveSkinIcon"); }
    float& MaxTooltipPawnSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaxTooltipPawnSpeed"); }
    float& ScaleFactorField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ScaleFactor"); }
    float& PlacementOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementOffsetForVerticalGround"); }
    float& PlacementInitialTracePointOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementInitialTracePointOffsetForVerticalGround"); }
    float& TraceDistanceFromActorToWallVerticalGroundField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.TraceDistanceFromActorToWallVerticalGround"); }
    float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.RepairCheckInterval"); }
    float& RepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.RepairPercentPerInterval"); }
    float& HealthPercentOverlayForTrapField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.HealthPercentOverlayForTrap"); }
    float& WaterPlacementMinimumWaterHeightField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.WaterPlacementMinimumWaterHeight"); }
    float& PlacementMaxZDeltaField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementMaxZDelta"); }
    float& PlacementChooseRotationMaxRangeOverrideField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementChooseRotationMaxRangeOverride"); }
    float& PlacementAdjustHeightLimitUpField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementAdjustHeightLimitUp"); }
    float& PlacementAdjustHeightLimitDownField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementAdjustHeightLimitDown"); }
    float& MaxSnapLocRangeField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaxSnapLocRange"); }
    float& MaximumFoundationSupport2DBuildDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumFoundationSupport2DBuildDistance"); }
    float& AdditionalFoundationSupportDistanceForLinkedStructuresField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AdditionalFoundationSupportDistanceForLinkedStructures"); }
    float& MaximumHeightAboveWorldGroundField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumHeightAboveWorldGround"); }
    float& MaximumHeightUnderWorldMaxKillZField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumHeightUnderWorldMaxKillZ"); }
    float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraDistanceScaleFactor"); }
    float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
    float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraMaxZoomMultiplier"); }
    float& ExcludeInStructuresRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadius"); }
    float& UsablePriorityField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.UsablePriority"); }
    float& ForcePreventPlacingInOfflineRaidStructuresRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
    float& UnstasisAutoDestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.UnstasisAutoDestroyAfterTime"); }
    float& DemolishActivationTimeField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.DemolishActivationTime"); }
    float& OverrideEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.OverrideEnemyFoundationPreventionRadius"); }
    float& OverridePVPEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.OverridePVPEnemyFoundationPreventionRadius"); }
    float& ExpandEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ExpandEnemyFoundationPreventionRadius"); }
    float& LimitMaxStructuresInRangeRadiusField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.LimitMaxStructuresInRangeRadius"); }
    float& PlacementMaxZAbovePlayerHeightField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementMaxZAbovePlayerHeight"); }
    float& FloorHideGrassTraceToGroundDistanceNonFoundationField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.FloorHideGrassTraceToGroundDistanceNonFoundation"); }
    int& ItemTrapQuantityRequiredField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.ItemTrapQuantityRequired"); }
    int& TraceIgnoreStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.TraceIgnoreStructuresWithTypeFlags"); }
    int& StructureRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.StructureRangeTypeFlag"); }
    int& LimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.LimitMaxStructuresInRangeTypeFlag"); }
    int& bTraceCheckOnlyUseStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
    int& ForceLimitStructuresInRangeField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.ForceLimitStructuresInRange"); }
    int& StructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.StructureMinAllowedVersion"); }
    int& PlacementMaterialForwardDirIndexField() { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.PlacementMaterialForwardDirIndex"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bIsFlippableField() { return { this, "FPrimalStructureSparseClassData.bIsFlippable" }; }
    BitFieldValue<bool, unsigned __int32> bFlipByScaleField() { return { this, "FPrimalStructureSparseClassData.bFlipByScale" }; }
    BitFieldValue<bool, unsigned __int32> bFlipInvertLocOffsetField() { return { this, "FPrimalStructureSparseClassData.bFlipInvertLocOffset" }; }
    BitFieldValue<bool, unsigned __int32> bShowInPlaceableListField() { return { this, "FPrimalStructureSparseClassData.bShowInPlaceableList" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWallAttachmentsField() { return { this, "FPrimalStructureSparseClassData.bForceAllowWallAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRefreshedStructureColorsField() { return { this, "FPrimalStructureSparseClassData.bUseBPRefreshedStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bClientAddPlacedOnFloorStructuresField() { return { this, "FPrimalStructureSparseClassData.bClientAddPlacedOnFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasisField() { return { this, "FPrimalStructureSparseClassData.bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasisField() { return { this, "FPrimalStructureSparseClassData.bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGameField() { return { this, "FPrimalStructureSparseClassData.bUseBPPostLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementUsesWeaponClipAmmoField() { return { this, "FPrimalStructureSparseClassData.bPlacementUsesWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteTakeAnythingAsGroundField() { return { this, "FPrimalStructureSparseClassData.bAbsoluteTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnDynamicsFoliageAndDoorsField() { return { this, "FPrimalStructureSparseClassData.bDisablePlacementOnDynamicsFoliageAndDoors" }; }
    BitFieldValue<bool, unsigned __int32> bSeatedDisableCollisionCheckField() { return { this, "FPrimalStructureSparseClassData.bSeatedDisableCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsAllowedToBuildExField() { return { this, "FPrimalStructureSparseClassData.bUseBPIsAllowedToBuildEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleStructureEnabledField() { return { this, "FPrimalStructureSparseClassData.bUseBPHandleStructureEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnVerticalGroundField() { return { this, "FPrimalStructureSparseClassData.bForcePlacingOnVerticalGround" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementShouldNotBeHorizontalField() { return { this, "FPrimalStructureSparseClassData.bPlacementShouldNotBeHorizontal" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresGroundedPlacementField() { return { this, "FPrimalStructureSparseClassData.bRequiresGroundedPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresPvPOnlyField() { return { this, "FPrimalStructureSparseClassData.bAllowPlacingOnOtherTeamStructuresPvPOnly" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseSkeletalMeshComponentField() { return { this, "FPrimalStructureSparseClassData.bForceUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableFootSoundField() { return { this, "FPrimalStructureSparseClassData.bForceDisableFootSound" }; }
    BitFieldValue<bool, unsigned __int32> bTraceThruEncroachmentPointsField() { return { this, "FPrimalStructureSparseClassData.bTraceThruEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOverlapInsteadOfEncroachmentPointsField() { return { this, "FPrimalStructureSparseClassData.bUseMeshOverlapInsteadOfEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoPlacementDistanceIncreaseField() { return { this, "FPrimalStructureSparseClassData.bPreventDinoPlacementDistanceIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideCollisionProfileField() { return { this, "FPrimalStructureSparseClassData.bDontOverrideCollisionProfile" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedRotationPlacementField() { return { this, "FPrimalStructureSparseClassData.bUseAdvancedRotationPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bRootFoundationLimitBuildAreaField() { return { this, "FPrimalStructureSparseClassData.bRootFoundationLimitBuildArea" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToPawnField() { return { this, "FPrimalStructureSparseClassData.bAllowAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddleAnywhereField() { return { this, "FPrimalStructureSparseClassData.bAllowAttachToSaddleAnywhere" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToAttachmentBaseField() { return { this, "FPrimalStructureSparseClassData.bAllowAttachToAttachmentBase" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementTraceIgnorePawnsField() { return { this, "FPrimalStructureSparseClassData.bPlacementTraceIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bRequireFreePrimarySnappedStructureField() { return { this, "FPrimalStructureSparseClassData.bRequireFreePrimarySnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiplePrimarySnappedStructuresField() { return { this, "FPrimalStructureSparseClassData.bAllowMultiplePrimarySnappedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowPlacementInWaterField() { return { this, "FPrimalStructureSparseClassData.bOnlyAllowPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnGroundField() { return { this, "FPrimalStructureSparseClassData.bForcePlacingOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bTakeAnythingAsGroundField() { return { this, "FPrimalStructureSparseClassData.bTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceCheckNearbyEnemyFoundationField() { return { this, "FPrimalStructureSparseClassData.bForceCheckNearbyEnemyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsWallField() { return { this, "FPrimalStructureSparseClassData.bIsWall" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPreventCropsBiomesField() { return { this, "FPrimalStructureSparseClassData.bDisallowPreventCropsBiomes" }; }
    BitFieldValue<bool, unsigned __int32> bReturnDamageOnHitFromPawnField() { return { this, "FPrimalStructureSparseClassData.bReturnDamageOnHitFromPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseFromRidingDinoField() { return { this, "FPrimalStructureSparseClassData.bAllowUseFromRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsFenceFoundationField() { return { this, "FPrimalStructureSparseClassData.bIsFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseFenceFoundationField() { return { this, "FPrimalStructureSparseClassData.bUseFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyBlockSelfTraceChannelField() { return { this, "FPrimalStructureSparseClassData.bUseOnlyBlockSelfTraceChannel" }; }
    BitFieldValue<bool, unsigned __int32> bIsCoreStructureField() { return { this, "FPrimalStructureSparseClassData.bIsCoreStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateStructureField() { return { this, "FPrimalStructureSparseClassData.bDeprecateStructure" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresToBeInsideZoneVolumeField() { return { this, "FPrimalStructureSparseClassData.bRequiresToBeInsideZoneVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoadBearingField() { return { this, "FPrimalStructureSparseClassData.bAllowLoadBearing" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnvironmentStructureField() { return { this, "FPrimalStructureSparseClassData.bIsEnvironmentStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnVariantSwitchField() { return { this, "FPrimalStructureSparseClassData.bUseBPOnVariantSwitch" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTrapField() { return { this, "FPrimalStructureSparseClassData.bPreventTrap" }; }
    BitFieldValue<bool, unsigned __int32> bGroundRequiresPlacementOnStructuresField() { return { this, "FPrimalStructureSparseClassData.bGroundRequiresPlacementOnStructures" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnStructureFloorsField() { return { this, "FPrimalStructureSparseClassData.bRequiresPlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnStructureFloorsField() { return { this, "FPrimalStructureSparseClassData.bDisablePlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyStructureIfFloorDestroyedField() { return { this, "FPrimalStructureSparseClassData.bDestroyStructureIfFloorDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlacementCollisionCheckField() { return { this, "FPrimalStructureSparseClassData.bUsePlacementCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseLenientWorldGeoObstructionCheckField() { return { this, "FPrimalStructureSparseClassData.bUseLenientWorldGeoObstructionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresSnappingField() { return { this, "FPrimalStructureSparseClassData.bRequiresSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bSnappingRequiresNearbyFoundationField() { return { this, "FPrimalStructureSparseClassData.bSnappingRequiresNearbyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowSnapRotationForStructureField() { return { this, "FPrimalStructureSparseClassData.bUseBPAllowSnapRotationForStructure" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideObstructedSnapsField() { return { this, "FPrimalStructureSparseClassData.bForceHideObstructedSnaps" }; }
    BitFieldValue<bool, unsigned __int32> bDontCheckSnapsForObstructionField() { return { this, "FPrimalStructureSparseClassData.bDontCheckSnapsForObstruction" }; }
    BitFieldValue<bool, unsigned __int32> bForceOptionalSnappingField() { return { this, "FPrimalStructureSparseClassData.bForceOptionalSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bUseSnapFromPlacementOverrideEvenWhenNotSnappedField() { return { this, "FPrimalStructureSparseClassData.bUseSnapFromPlacementOverrideEvenWhenNotSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideSnapTargetAllowSnapPointField() { return { this, "FPrimalStructureSparseClassData.bUseBPOverrideSnapTargetAllowSnapPoint" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacingOnWallField() { return { this, "FPrimalStructureSparseClassData.bRequiresPlacingOnWall" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacingUnderStructuresField() { return { this, "FPrimalStructureSparseClassData.bRequiresPlacingUnderStructures" }; }
    BitFieldValue<bool, unsigned __int32> bSnapRequiresPlacementOnGroundField() { return { this, "FPrimalStructureSparseClassData.bSnapRequiresPlacementOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapOntoSameLocationField() { return { this, "FPrimalStructureSparseClassData.bAllowSnapOntoSameLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyFoundationIfSnappedToFoundationField() { return { this, "FPrimalStructureSparseClassData.bOnlyFoundationIfSnappedToFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bFoundationRequiresGroundTraceField() { return { this, "FPrimalStructureSparseClassData.bFoundationRequiresGroundTrace" }; }
    BitFieldValue<bool, unsigned __int32> bPlacingOnGroundRequiresNoStructureField() { return { this, "FPrimalStructureSparseClassData.bPlacingOnGroundRequiresNoStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormalField() { return { this, "FPrimalStructureSparseClassData.bTakeGroundNormal" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormalDirectlyField() { return { this, "FPrimalStructureSparseClassData.bTakeGroundNormalDirectly" }; }
    BitFieldValue<bool, unsigned __int32> bFinalPlacementDontAdjustForMaxRangeField() { return { this, "FPrimalStructureSparseClassData.bFinalPlacementDontAdjustForMaxRange" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureColorsField() { return { this, "FPrimalStructureSparseClassData.bAllowStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseFadeInEffectField() { return { this, "FPrimalStructureSparseClassData.bUseFadeInEffect" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDefaultVariantField() { return { this, "FPrimalStructureSparseClassData.bPreventDefaultVariant" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePickingUpStructureAfterPlacementOnTryMultiUseField() { return { this, "FPrimalStructureSparseClassData.bDisablePickingUpStructureAfterPlacementOnTryMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomEventField() { return { this, "FPrimalStructureSparseClassData.bUseBlueprintAnimNotifyCustomEvent" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSnappedToOtherFloorStructuresField() { return { this, "FPrimalStructureSparseClassData.bIgnoreSnappedToOtherFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bEnforceStructureLinkExactRotationField() { return { this, "FPrimalStructureSparseClassData.bEnforceStructureLinkExactRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockIKField() { return { this, "FPrimalStructureSparseClassData.bForceBlockIK" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePawnsField() { return { this, "FPrimalStructureSparseClassData.bIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bForcePushTroughWallCheckField() { return { this, "FPrimalStructureSparseClassData.bForcePushTroughWallCheck" }; }
    BitFieldValue<bool, unsigned __int32> bCanDemolishField() { return { this, "FPrimalStructureSparseClassData.bCanDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresField() { return { this, "FPrimalStructureSparseClassData.bAllowPlacingOnOtherTeamStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPlacementInWaterField() { return { this, "FPrimalStructureSparseClassData.bPreventPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInRegularStructurePreventionZonesField() { return { this, "FPrimalStructureSparseClassData.bAllowInRegularStructurePreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetStructureCollisionChannelsField() { return { this, "FPrimalStructureSparseClassData.bDontSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventEnemyStructuresNearbyField() { return { this, "FPrimalStructureSparseClassData.bForcePreventEnemyStructuresNearby" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEnemyDemolishField() { return { this, "FPrimalStructureSparseClassData.bAllowEnemyDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallySnapJustPlacementField() { return { this, "FPrimalStructureSparseClassData.bDontActuallySnapJustPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInRangeField() { return { this, "FPrimalStructureSparseClassData.bIgnoreMaxStructuresInRange" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingUseSkeletalMeshField() { return { this, "FPrimalStructureSparseClassData.bPaintingUseSkeletalMesh" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPaintingComponentField() { return { this, "FPrimalStructureSparseClassData.bUsesPaintingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bCanBuildUponField() { return { this, "FPrimalStructureSparseClassData.bCanBuildUpon" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowInPreventionVolumesField() { return { this, "FPrimalStructureSparseClassData.bForceAllowInPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bDoForceCreateDynamicMaterialsField() { return { this, "FPrimalStructureSparseClassData.bDoForceCreateDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetInfoFromConsumedItemForPlacedStructureField() { return { this, "FPrimalStructureSparseClassData.bUseBPGetInfoFromConsumedItemForPlacedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bWhileCheatSpawning_UseBPGetInfoFromConsumedItemForPlacedStructureField() { return { this, "FPrimalStructureSparseClassData.bWhileCheatSpawning_UseBPGetInfoFromConsumedItemForPlacedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bImmuneToAutoDemolishField() { return { this, "FPrimalStructureSparseClassData.bImmuneToAutoDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInSmallRadiusField() { return { this, "FPrimalStructureSparseClassData.bIgnoreMaxStructuresInSmallRadius" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustPlacementIfCollideField() { return { this, "FPrimalStructureSparseClassData.bAdjustPlacementIfCollide" }; }
    BitFieldValue<bool, unsigned __int32> bAlignToSaddleWhenPlacingField() { return { this, "FPrimalStructureSparseClassData.bAlignToSaddleWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingByCorruptDinosField() { return { this, "FPrimalStructureSparseClassData.bAllowTargetingByCorruptDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTreatAsFoundationForSnappedStructureField() { return { this, "FPrimalStructureSparseClassData.bUseBPTreatAsFoundationForSnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnStructurePickupField() { return { this, "FPrimalStructureSparseClassData.bUseBPOnStructurePickup" }; }
    BitFieldValue<bool, unsigned __int32> bPerInstanceSnapPointsField() { return { this, "FPrimalStructureSparseClassData.bPerInstanceSnapPoints" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToWaterSurfaceField() { return { this, "FPrimalStructureSparseClassData.bSnapToWaterSurface" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdatedHealthField() { return { this, "FPrimalStructureSparseClassData.bUseBPUpdatedHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveNameField() { return { this, "FPrimalStructureSparseClassData.bUseBPOverrideDescriptiveName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveNameForPreviewField() { return { this, "FPrimalStructureSparseClassData.bUseBPOverrideDescriptiveNameForPreview" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCreationOfDynamicMaterialsField() { return { this, "FPrimalStructureSparseClassData.bPreventCreationOfDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasisUnlessPreventedField() { return { this, "FPrimalStructureSparseClassData.bDestroyOnStasisUnlessPrevented" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachToSaddleField() { return { this, "FPrimalStructureSparseClassData.bPreventAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bForcePersonalStructureOwnershipField() { return { this, "FPrimalStructureSparseClassData.bForcePersonalStructureOwnership" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowStructureAccessField() { return { this, "FPrimalStructureSparseClassData.bBPOverrideAllowStructureAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverideDemolishField() { return { this, "FPrimalStructureSparseClassData.bBPOverideDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDemolishField() { return { this, "FPrimalStructureSparseClassData.bUseBPOnDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWithField() { return { this, "FPrimalStructureSparseClassData.bBPOverrideAllowSnappingWith" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWithButAlsoCallSuperField() { return { this, "FPrimalStructureSparseClassData.bBPOverrideAllowSnappingWithButAlsoCallSuper" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLinkedStructureDestroyedField() { return { this, "FPrimalStructureSparseClassData.bUseBPOnLinkedStructureDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseTribeGroupStructureRankField() { return { this, "FPrimalStructureSparseClassData.bUseTribeGroupStructureRank" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockStationaryTracesField() { return { this, "FPrimalStructureSparseClassData.bForceBlockStationaryTraces" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketField() { return { this, "FPrimalStructureSparseClassData.bAttachToStaticMeshSocket" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketRotationField() { return { this, "FPrimalStructureSparseClassData.bAttachToStaticMeshSocketRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToDinoMeshSocketField() { return { this, "FPrimalStructureSparseClassData.bAttachToDinoMeshSocket" }; }
    BitFieldValue<bool, unsigned __int32> bForceGroundForFoundationField() { return { this, "FPrimalStructureSparseClassData.bForceGroundForFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedToTransformField() { return { this, "FPrimalStructureSparseClassData.bBPOverrideSnappedToTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedFromTransformField() { return { this, "FPrimalStructureSparseClassData.bBPOverrideSnappedFromTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverridePlacementRotationField() { return { this, "FPrimalStructureSparseClassData.bBPOverridePlacementRotation" }; }
    BitFieldValue<bool, unsigned __int32> bStructureUseAltCollisionChannelField() { return { this, "FPrimalStructureSparseClassData.bStructureUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityDemolishField() { return { this, "FPrimalStructureSparseClassData.bHighPriorityDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSnapStructureField() { return { this, "FPrimalStructureSparseClassData.bDisableSnapStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasisField() { return { this, "FPrimalStructureSparseClassData.bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUDField() { return { this, "FPrimalStructureSparseClassData.bBlueprintDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawPreviewHUDField() { return { this, "FPrimalStructureSparseClassData.bBlueprintDrawPreviewHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterialField() { return { this, "FPrimalStructureSparseClassData.bUsesWorldSpaceMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTraceField() { return { this, "FPrimalStructureSparseClassData.bForceIgnoreStationaryObjectTrace" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawnsField() { return { this, "FPrimalStructureSparseClassData.bForceAllowNearSupplyCrateSpawns" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannelsField() { return { this, "FPrimalStructureSparseClassData.bBPPostSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccessField() { return { this, "FPrimalStructureSparseClassData.bPickupGiveItemRequiresAccess" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItemField() { return { this, "FPrimalStructureSparseClassData.bUseBPAllowPickupGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructuresField() { return { this, "FPrimalStructureSparseClassData.bPreventAttachedChildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlacedField() { return { this, "FPrimalStructureSparseClassData.bPreventPreviewIfWeaponPlaced" }; }
    BitFieldValue<bool, unsigned __int32> bStructuresInRangeTypeFlagUseAltCollisionChannelField() { return { this, "FPrimalStructureSparseClassData.bStructuresInRangeTypeFlagUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPConsumeProjectileImpactField() { return { this, "FPrimalStructureSparseClassData.bUseBPConsumeProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bBPCheckItemRequiementsToBuildField() { return { this, "FPrimalStructureSparseClassData.bBPCheckItemRequiementsToBuild" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAggroDinoOnDamageSettingsField() { return { this, "FPrimalStructureSparseClassData.bUseBPGetAggroDinoOnDamageSettings" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDynamicObstacleField() { return { this, "FPrimalStructureSparseClassData.bDontSetDynamicObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bBedUsesDefaultDestinationField() { return { this, "FPrimalStructureSparseClassData.bBedUsesDefaultDestination" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRegisterSkeletalMeshesOnDedicatedServerField() { return { this, "FPrimalStructureSparseClassData.bAllowRegisterSkeletalMeshesOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseInfiniteStaticMeshDrawDistanceField() { return { this, "FPrimalStructureSparseClassData.bUseInfiniteStaticMeshDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bIsStructureSkinField() { return { this, "FPrimalStructureSparseClassData.bIsStructureSkin" }; }
    BitFieldValue<bool, unsigned __int32> bStructureSkinChangesCollisionField() { return { this, "FPrimalStructureSparseClassData.bStructureSkinChangesCollision" }; }
    BitFieldValue<bool, unsigned __int32> bNotifySkinWhenInventoryChangesField() { return { this, "FPrimalStructureSparseClassData.bNotifySkinWhenInventoryChanges" }; }
    BitFieldValue<bool, unsigned __int32> bFloorDontHideGrassField() { return { this, "FPrimalStructureSparseClassData.bFloorDontHideGrass" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideGrassField() { return { this, "FPrimalStructureSparseClassData.bForceHideGrass" }; }
    BitFieldValue<bool, unsigned __int32> bUsesServerSideSkinDataField() { return { this, "FPrimalStructureSparseClassData.bUsesServerSideSkinData" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyOnBlockListUpdateField() { return { this, "FPrimalStructureSparseClassData.bNotifyOnBlockListUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bHasWindSourceComponentsToInteractWithVolumetricDispatcherField() { return { this, "FPrimalStructureSparseClassData.bHasWindSourceComponentsToInteractWithVolumetricDispatcher" }; }
    BitFieldValue<bool, unsigned __int32> bBypassMeleeSwingDamageBlockedByTraceField() { return { this, "FPrimalStructureSparseClassData.bBypassMeleeSwingDamageBlockedByTrace" }; }

    // Functions

    FPrimalStructureSparseClassData& operator=(const FPrimalStructureSparseClassData* __that) { return NativeCall<FPrimalStructureSparseClassData&, const FPrimalStructureSparseClassData*>(this, "FPrimalStructureSparseClassData.operator=(FPrimalStructureSparseClassData&)", __that); }
    static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalStructureSparseClassData>(); }


	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& SecondaryStructureTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.SecondaryStructureTags"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& AllowSnapRotationForTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.AllowSnapRotationForTags"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& ForceAllowSnapRotationForTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.ForceAllowSnapRotationForTags"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& EncroachmentCheckIgnoreStructureTypeTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.EncroachmentCheckIgnoreStructureTypeTags"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& StructureRangeTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.StructureRangeTags"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& SnapToStructureTagsToExcludeField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.SnapToStructureTagsToExclude"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& SnapFromStructureTagsToExcludeField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.SnapFromStructureTagsToExclude"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& ExcludeInStructuresRadiusTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadiusTags"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& CustomDataModifiedOnStructurePickupField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.CustomDataModifiedOnStructurePickup"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& AttachToDinoMeshSocketNameBasesField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.AttachToDinoMeshSocketNameBases"); }

	TArray<FName, TSizedDefaultAllocator<32> >& CollisionComponentsToDestroyOnStasisField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalStructureSparseClassData.CollisionComponentsToDestroyOnStasis"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& CollisionComponentsToDestroyOnStasisField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalStructureSparseClassData.CollisionComponentsToDestroyOnStasis"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& PlacementRotOffsetField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalStructureSparseClassData.PlacementRotOffset"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& PlacementTraceRotOffsetField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalStructureSparseClassData.PlacementTraceRotOffset"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& SnappingRotationOffsetField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalStructureSparseClassData.SnappingRotationOffset"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& TakeGroundNormalRotationOffsetField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalStructureSparseClassData.TakeGroundNormalRotationOffset"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& SpawnEmitterRotationOffsetField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalStructureSparseClassData.SpawnEmitterRotationOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& SpawnEmitterLocationOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.SpawnEmitterLocationOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& PreviewCameraPivotOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.PreviewCameraPivotOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& PreviewCameraBoundsOverrideField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.PreviewCameraBoundsOverride"); }
	std::add_const_t<UE :: Math :: TVector < double >>& FlipByScaleDirectionField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.FlipByScaleDirection"); }
	std::add_const_t<UE :: Math :: TVector < double >>& PlacementCollisionAdjustmentBufferField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.PlacementCollisionAdjustmentBuffer"); }
	std::add_const_t<UE :: Math :: TVector < double >>& WorldGeoCheckExtraBoxExtentField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.WorldGeoCheckExtraBoxExtent"); }
	std::add_const_t<UE :: Math :: TVector < double >>& WaterVolumeCheckPointOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.WaterVolumeCheckPointOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& ReplacementCheckOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.ReplacementCheckOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& AdvancedRotationPlacementOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.AdvancedRotationPlacementOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& AttachToStaticMeshSocketMinScaleDefaultField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.AttachToStaticMeshSocketMinScaleDefault"); }
	std::add_const_t<UE :: Math :: TVector < double >>& HideGrassExtentsOverrideField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.HideGrassExtentsOverride"); }
	std::add_const_t<UE :: Math :: TVector < double >>& HideGrassExtentsOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalStructureSparseClassData.HideGrassExtentsOffset"); }
	std::add_const_t<FName>& StructureTagField() const { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.StructureTag"); }
	std::add_const_t<FName>& AttachToStaticMeshSocketNameBaseField() const { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.AttachToStaticMeshSocketNameBase"); }
	std::add_const_t<FName>& PlaceOnWallUseStaticMeshTagField() const { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.PlaceOnWallUseStaticMeshTag"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& ConsumesPrimalItemField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalStructureSparseClassData.ConsumesPrimalItem"); }

	TSubclassOf<UDLC>& RequiresDLC_ClassField() { return *GetNativePointerField<TSubclassOf<UDLC>*>(this, "FPrimalStructureSparseClassData.RequiresDLC_Class"); }
	std::add_const_t<TSubclassOf < UDLC >>& RequiresDLC_ClassField() const { return *GetNativePointerField<TSubclassOf < UDLC >*>(this, "FPrimalStructureSparseClassData.RequiresDLC_Class"); }
	std::add_const_t<TSubclassOf < UDamageType >>& ReturnDamageTypeField() const { return *GetNativePointerField<TSubclassOf < UDamageType >*>(this, "FPrimalStructureSparseClassData.ReturnDamageType"); }
	std::add_const_t<TSubclassOf < APrimalEmitterSpawnable >>& SpawnEmitterField() const { return *GetNativePointerField<TSubclassOf < APrimalEmitterSpawnable >*>(this, "FPrimalStructureSparseClassData.SpawnEmitter"); }
	std::add_const_t<TSubclassOf < UPrimalHarvestingComponent >>& StructureHarvestingComponentField() const { return *GetNativePointerField<TSubclassOf < UPrimalHarvestingComponent >*>(this, "FPrimalStructureSparseClassData.StructureHarvestingComponent"); }

	TSubclassOf<UBuildingUI>& BuildingUITemplateOverrideField() { return *GetNativePointerField<TSubclassOf<UBuildingUI>*>(this, "FPrimalStructureSparseClassData.BuildingUITemplateOverride"); }
	std::add_const_t<TSubclassOf < UBuildingUI >>& BuildingUITemplateOverrideField() const { return *GetNativePointerField<TSubclassOf < UBuildingUI >*>(this, "FPrimalStructureSparseClassData.BuildingUITemplateOverride"); }

	TSubclassOf<UPrimalUI>& BasedUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "FPrimalStructureSparseClassData.BasedUI"); }
	std::add_const_t<TSubclassOf < UPrimalUI >>& BasedUIField() const { return *GetNativePointerField<TSubclassOf < UPrimalUI >*>(this, "FPrimalStructureSparseClassData.BasedUI"); }
	std::add_const_t<float>& MaxTooltipPawnSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaxTooltipPawnSpeed"); }
	std::add_const_t<float>& ScaleFactorField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ScaleFactor"); }
	std::add_const_t<float>& PlacementOffsetForVerticalGroundField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementOffsetForVerticalGround"); }
	std::add_const_t<float>& PlacementInitialTracePointOffsetForVerticalGroundField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementInitialTracePointOffsetForVerticalGround"); }
	std::add_const_t<float>& TraceDistanceFromActorToWallVerticalGroundField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.TraceDistanceFromActorToWallVerticalGround"); }
	std::add_const_t<float>& RepairCheckIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.RepairCheckInterval"); }
	std::add_const_t<float>& RepairPercentPerIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.RepairPercentPerInterval"); }
	std::add_const_t<float>& HealthPercentOverlayForTrapField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.HealthPercentOverlayForTrap"); }
	std::add_const_t<float>& WaterPlacementMinimumWaterHeightField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.WaterPlacementMinimumWaterHeight"); }
	std::add_const_t<float>& PlacementMaxZDeltaField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementMaxZDelta"); }
	std::add_const_t<float>& PlacementChooseRotationMaxRangeOverrideField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementChooseRotationMaxRangeOverride"); }
	std::add_const_t<float>& PlacementAdjustHeightLimitUpField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementAdjustHeightLimitUp"); }
	std::add_const_t<float>& PlacementAdjustHeightLimitDownField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementAdjustHeightLimitDown"); }
	std::add_const_t<float>& MaxSnapLocRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaxSnapLocRange"); }
	std::add_const_t<float>& MaximumFoundationSupport2DBuildDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumFoundationSupport2DBuildDistance"); }
	std::add_const_t<float>& AdditionalFoundationSupportDistanceForLinkedStructuresField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AdditionalFoundationSupportDistanceForLinkedStructures"); }
	std::add_const_t<float>& MaximumHeightAboveWorldGroundField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumHeightAboveWorldGround"); }
	std::add_const_t<float>& MaximumHeightUnderWorldMaxKillZField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumHeightUnderWorldMaxKillZ"); }
	std::add_const_t<float>& PreviewCameraDistanceScaleFactorField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraDistanceScaleFactor"); }
	std::add_const_t<float>& PreviewCameraDefaultZoomMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
	std::add_const_t<float>& PreviewCameraMaxZoomMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraMaxZoomMultiplier"); }
	std::add_const_t<float>& ExcludeInStructuresRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadius"); }
	std::add_const_t<float>& UsablePriorityField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.UsablePriority"); }
	std::add_const_t<float>& ForcePreventPlacingInOfflineRaidStructuresRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
	std::add_const_t<float>& UnstasisAutoDestroyAfterTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.UnstasisAutoDestroyAfterTime"); }
	std::add_const_t<float>& DemolishActivationTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.DemolishActivationTime"); }
	std::add_const_t<float>& OverrideEnemyFoundationPreventionRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.OverrideEnemyFoundationPreventionRadius"); }
	std::add_const_t<float>& OverridePVPEnemyFoundationPreventionRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.OverridePVPEnemyFoundationPreventionRadius"); }
	std::add_const_t<float>& ExpandEnemyFoundationPreventionRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ExpandEnemyFoundationPreventionRadius"); }
	std::add_const_t<float>& LimitMaxStructuresInRangeRadiusField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.LimitMaxStructuresInRangeRadius"); }
	std::add_const_t<float>& PlacementMaxZAbovePlayerHeightField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementMaxZAbovePlayerHeight"); }
	std::add_const_t<float>& FloorHideGrassTraceToGroundDistanceNonFoundationField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.FloorHideGrassTraceToGroundDistanceNonFoundation"); }

	float& AttackRangeOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AttackRangeOffset"); }
	std::add_const_t<float>& AttackRangeOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AttackRangeOffset"); }

	float& AllowEnemyDemolishActivationTimeField() { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AllowEnemyDemolishActivationTime"); }
	std::add_const_t<float>& AllowEnemyDemolishActivationTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AllowEnemyDemolishActivationTime"); }
	std::add_const_t<int>& ItemTrapQuantityRequiredField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.ItemTrapQuantityRequired"); }
	std::add_const_t<int>& TraceIgnoreStructuresWithTypeFlagsField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.TraceIgnoreStructuresWithTypeFlags"); }
	std::add_const_t<int>& StructureRangeTypeFlagField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.StructureRangeTypeFlag"); }
	std::add_const_t<int>& LimitMaxStructuresInRangeTypeFlagField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.LimitMaxStructuresInRangeTypeFlag"); }
	std::add_const_t<int>& bTraceCheckOnlyUseStructuresWithTypeFlagsField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
	std::add_const_t<int>& ForceLimitStructuresInRangeField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.ForceLimitStructuresInRange"); }
	std::add_const_t<int>& StructureMinAllowedVersionField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.StructureMinAllowedVersion"); }
	std::add_const_t<int>& PlacementMaterialForwardDirIndexField() const { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.PlacementMaterialForwardDirIndex"); }
};