#pragma once

struct FPrimalItemSparseClassData
{
	// Fields

	TSoftObjectPtr<USkeletalMesh>& CostumeDinoSaddleOverrideMeshField() { return *GetNativePointerField<TSoftObjectPtr<USkeletalMesh>*>(this, "FPrimalItemSparseClassData.CostumeDinoSaddleOverrideMesh"); }
	TSoftObjectPtr<USkeletalMesh>& CostumeDinoSaddleOverrideTorchMeshField() { return *GetNativePointerField<TSoftObjectPtr<USkeletalMesh>*>(this, "FPrimalItemSparseClassData.CostumeDinoSaddleOverrideTorchMesh"); }
	TSoftObjectPtr<USkeletalMesh>& DyePreviewMeshOverrideSKField() { return *GetNativePointerField<TSoftObjectPtr<USkeletalMesh>*>(this, "FPrimalItemSparseClassData.DyePreviewMeshOverrideSK"); }
	TSoftObjectPtr<UStaticMesh>& DyePreviewMeshOverrideSMField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "FPrimalItemSparseClassData.DyePreviewMeshOverrideSM"); }
	TSoftObjectPtr<UStaticMesh>& DyeEquippedSkinPreviewMeshOverrideSMField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "FPrimalItemSparseClassData.DyeEquippedSkinPreviewMeshOverrideSM"); }
	TSoftClassPtr<APrimalEmitterSpawnable>& UseParticleEffectField() { return *GetNativePointerField<TSoftClassPtr<APrimalEmitterSpawnable>*>(this, "FPrimalItemSparseClassData.UseParticleEffect"); }
	TSoftClassPtr<AActor>& CraftingActorToSpawnField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "FPrimalItemSparseClassData.CraftingActorToSpawn"); }
	TSoftClassPtr<AActor>& UseSpawnActorClassField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "FPrimalItemSparseClassData.UseSpawnActorClass"); }
	TSoftClassPtr<ADroppedItem>& DroppedItemTemplateOverrideField() { return *GetNativePointerField<TSoftClassPtr<ADroppedItem>*>(this, "FPrimalItemSparseClassData.DroppedItemTemplateOverride"); }
	TSoftClassPtr<ADroppedItem>& DroppedItemTemplateForSecondryActionField() { return *GetNativePointerField<TSoftClassPtr<ADroppedItem>*>(this, "FPrimalItemSparseClassData.DroppedItemTemplateForSecondryAction"); }
	TSoftObjectPtr<UStaticMesh>& DroppedMeshOverrideField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "FPrimalItemSparseClassData.DroppedMeshOverride"); }
	TSoftClassPtr<APrimalBuff>& BuffToGiveOwnerCharacterField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "FPrimalItemSparseClassData.BuffToGiveOwnerCharacter"); }
	UE::Math::TVector<double>& BlockingShieldFPVTranslationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalItemSparseClassData.BlockingShieldFPVTranslation"); }
	UE::Math::TVector<double>& UseSpawnActorLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalItemSparseClassData.UseSpawnActorLocOffset"); }
	UE::Math::TVector<double>& PreviewCameraPivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalItemSparseClassData.PreviewCameraPivotOffset"); }
	UE::Math::TVector<double>& SpawnOnWaterEncroachmentBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalItemSparseClassData.SpawnOnWaterEncroachmentBoxExtent"); }
	UE::Math::TRotator<double>& BlockingShieldFPVRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalItemSparseClassData.BlockingShieldFPVRotation"); }
	UE::Math::TRotator<double>& PreviewCameraRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalItemSparseClassData.PreviewCameraRotation"); }
	FString& CraftItemButtonStringOverrideField() { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.CraftItemButtonStringOverride"); }
	FString& AbstractItemCraftingDescriptionField() { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.AbstractItemCraftingDescription"); }
	FString& ItemRatingStringField() { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.ItemRatingString"); }
	FString& CustomRepairTextField() { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.CustomRepairText"); }
	FString& OverrideUseStringField() { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.OverrideUseString"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TopLevelCustomContextMenuOptionsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.TopLevelCustomContextMenuOptions"); }
	TArray<FCustomContextSubmenu, TSizedDefaultAllocator<32> >& CustomContextSubMenusField() { return *GetNativePointerField<TArray<FCustomContextSubmenu, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.CustomContextSubMenus"); }
	TArray<FCustomContextMenuData, TSizedDefaultAllocator<32> >& CustomContextOptionDataField() { return *GetNativePointerField<TArray<FCustomContextMenuData, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.CustomContextOptionData"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& SupportDragOntoItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.SupportDragOntoItemClasses"); }
	TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& AmmoSupportDragOntoWeaponItemWeaponTemplatesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.AmmoSupportDragOntoWeaponItemWeaponTemplates"); }
	TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& OverrideRepairingRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.OverrideRepairingRequirements"); }
	TArray<FCropItemPhaseData, TSizedDefaultAllocator<32> >& CropPhasesDataField() { return *GetNativePointerField<TArray<FCropItemPhaseData, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.CropPhasesData"); }
	TArray<FName, TSizedDefaultAllocator<32> >& EggAlertDinosAggroTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalItemSparseClassData.EggAlertDinosAggroTags"); }
	FLinearColor& DurabilityBarColorForegroundField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemSparseClassData.DurabilityBarColorForeground"); }
	FLinearColor& DurabilityBarColorBackgroundField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemSparseClassData.DurabilityBarColorBackground"); }
	FName& DefaultWeaponMeshNameField() { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.DefaultWeaponMeshName"); }
	FName& SaddleOverrideRiderSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.SaddleOverrideRiderSocketName"); }
	FName& UseParticleEffectSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.UseParticleEffectSocketName"); }
	FName& UseUnlocksEmoteNameField() { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.UseUnlocksEmoteName"); }
	FName& EquippingCosmeticRequiresUnlockedEmoteNameField() { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.EquippingCosmeticRequiresUnlockedEmoteName"); }
	FColor& CustomBrokenBorderColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalItemSparseClassData.CustomBrokenBorderColor"); }
	USoundBase*& ItemBrokenSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.ItemBrokenSound"); }
	USoundCue*& UseItemSoundField() { return *GetNativePointerField<USoundCue**>(this, "FPrimalItemSparseClassData.UseItemSound"); }
	USoundBase*& EquipSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.EquipSound"); }
	USoundBase*& UnEquipSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.UnEquipSound"); }
	USoundBase*& UsedOnOtherItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.UsedOnOtherItemSound"); }
	USoundBase*& RemovedFromOtherItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.RemovedFromOtherItemSound"); }
	USoundBase*& ExtraThrowItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.ExtraThrowItemSound"); }
	USoundBase*& ShieldHitSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.ShieldHitSound"); }
	USoundBase*& UseItemOnItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.UseItemOnItemSound"); }
	UAnimMontage*& PlayAnimationOnUseField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.PlayAnimationOnUse"); }
	UAnimMontage*& ShowAnimationMaleField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.ShowAnimationMale"); }
	UAnimMontage*& ShowAnimationFemaleField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.ShowAnimationFemale"); }
	UAnimMontage*& HideAnimationMaleField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.HideAnimationMale"); }
	UAnimMontage*& HideAnimationFemaleField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.HideAnimationFemale"); }
	UMaterialInterface*& DroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "FPrimalItemSparseClassData.DroppedMeshMaterialOverride"); }
	TSubclassOf<UPrimalItem>& SpoilingItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.SpoilingItem"); }
	TSubclassOf<UPrimalItem>& PreservingItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.PreservingItemClass"); }
	TSubclassOf<UPrimalItem>& GiveItemWhenUsedField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.GiveItemWhenUsed"); }
	TSubclassOf<UUserWidget>& CustomItemTooltipOverrideField() { return *GetNativePointerField<TSubclassOf<UUserWidget>*>(this, "FPrimalItemSparseClassData.CustomItemTooltipOverride"); }
	TSubclassOf<UPrimalItem>& BrokenGiveItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.BrokenGiveItemClass"); }
	TSubclassOf<UPrimalItem>& ItemClassToUseAsInitialCustomDataField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.ItemClassToUseAsInitialCustomData"); }
	TSubclassOf<UPrimalItem>& OverrideCooldownTimeItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.OverrideCooldownTimeItemClass"); }
	TSubclassOf<UPrimalItem>& EngramRequirementItemClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.EngramRequirementItemClassOverride"); }
	TSubclassOf<UPrimalItem>& SendToClientClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FPrimalItemSparseClassData.SendToClientClassOverride"); }
	float& CraftingCooldownIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingCooldownInterval"); }
	float& DinoAutoHealingThresholdPercentField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DinoAutoHealingThresholdPercent"); }
	float& DinoAutoHealingUseTimeIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DinoAutoHealingUseTimeInterval"); }
	float& RandomChanceToBeBlueprintField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RandomChanceToBeBlueprint"); }
	float& ItemIconScaleField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ItemIconScale"); }
	float& ShieldBlockDamagePercentageField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ShieldBlockDamagePercentage"); }
	float& ShieldDamageToDurabilityRatioField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ShieldDamageToDurabilityRatio"); }
	float& Ingredient_WeightIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_WeightIncreasePerQuantity"); }
	float& Ingredient_FoodIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_FoodIncreasePerQuantity"); }
	float& Ingredient_HealthIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_HealthIncreasePerQuantity"); }
	float& Ingredient_WaterIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_WaterIncreasePerQuantity"); }
	float& Ingredient_StaminaIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_StaminaIncreasePerQuantity"); }
	float& PreservingItemSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreservingItemSpoilingTimeMultiplier"); }
	float& RepairResourceRequirementMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RepairResourceRequirementMultiplier"); }
	float& DurabilityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityIncreaseMultiplier"); }
	float& DurabilityDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityDecreaseMultiplier"); }
	float& UseDecreaseDurabilityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseDecreaseDurability"); }
	float& AutoDurabilityDecreaseIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.AutoDurabilityDecreaseInterval"); }
	float& AutoDecreaseMinDurabilityField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.AutoDecreaseMinDurability"); }
	float& UseDecreaseDurabilityMinField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseDecreaseDurabilityMin"); }
	float& UseMinDurabilityRequirementField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseMinDurabilityRequirement"); }
	float& MinBlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinBlueprintTimeToCraft"); }
	float& BlueprintWeightField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.BlueprintWeight"); }
	float& MinimumUseIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinimumUseInterval"); }
	float& TimeForFullRepairField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.TimeForFullRepair"); }
	float& BaseRepairingXPField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.BaseRepairingXP"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraMaxZoomMultiplier"); }
	float& DurabilityNotifyThresholdValueField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityNotifyThresholdValue"); }
	float& CropGrowingFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropGrowingFertilizerConsumptionRate"); }
	float& CropMaxFruitFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropMaxFruitFertilizerConsumptionRate"); }
	float& CropGrowingWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropGrowingWaterConsumptionRate"); }
	float& CropMaxFruitWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropMaxFruitWaterConsumptionRate"); }
	float& CropNoFertilizerOrWaterCacheReductionRateField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropNoFertilizerOrWaterCacheReductionRate"); }
	float& FertilizerEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.FertilizerEffectivenessMultiplier"); }
	float& EggAlertDinosAggroAmountField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggAlertDinosAggroAmount"); }
	float& EggAlertDinosForcedAggroTimeField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggAlertDinosForcedAggroTime"); }
	float& EggMaximumDistanceFromOriginalDropToAlertDinosField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggMaximumDistanceFromOriginalDropToAlertDinos"); }
	float& MinDurabilityForCraftingResourceField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinDurabilityForCraftingResource"); }
	float& ResourceRequirementIncreaseRatingPowerField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementIncreaseRatingPower"); }
	float& ResourceRequirementRatingScaleField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementRatingScale"); }
	float& ResourceRequirementRatingIncreasePercentageField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementRatingIncreasePercentage"); }
	float& ClearColorDurabilityThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ClearColorDurabilityThreshold"); }
	float& RecipeCraftingSkillScaleField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RecipeCraftingSkillScale"); }
	float& DamageTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DamageTorpidityArmorRating"); }
	float& IndirectTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.IndirectTorpidityArmorRating"); }
	float& UseGiveDinoTameAffinityPercentField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseGiveDinoTameAffinityPercent"); }
	float& GlobalTameAffinityMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.GlobalTameAffinityMultiplier"); }
	float& CraftingSkillQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingSkillQualityMultiplierMin"); }
	float& CraftingSkillQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingSkillQualityMultiplierMax"); }
	float& SinglePlayerCraftingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.SinglePlayerCraftingSpeedMultiplier"); }
	float& EquippedReduceDurabilityIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EquippedReduceDurabilityInterval"); }
	float& EquippedReduceDurabilityPerIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EquippedReduceDurabilityPerInterval"); }
	float& CustomInventoryWidgetTextVerticalOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CustomInventoryWidgetTextVerticalOffset"); }
	float& ImprintingQualitySpeedField() { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ImprintingQualitySpeed"); }
	int& MaxCustomItemDescriptionLengthField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.MaxCustomItemDescriptionLength"); }
	int& CraftingMinLevelRequirementField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingMinLevelRequirement"); }
	int& ArkTributeVersionField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.ArkTributeVersion"); }
	int& BlueprintAllowMaxCraftingsField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.BlueprintAllowMaxCraftings"); }
	int& CraftingConsumesDurabilityField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingConsumesDurability"); }
	int& ExtraItemCategoryFlagsField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.ExtraItemCategoryFlags"); }
	int& NoLevelEngramSortingPriorityField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.NoLevelEngramSortingPriority"); }
	int& CraftingGiveItemCountField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingGiveItemCount"); }
	int& CraftingGivesItemQuantityOverrideField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingGivesItemQuantityOverride"); }
	TEnumAsByte<enum EEngramGroup::Type>& PreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned_WhichDLCField() { return *GetNativePointerField<TEnumAsByte<enum EEngramGroup::Type>*>(this, "FPrimalItemSparseClassData.PreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned_WhichDLC"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseBPOnLocalUseField() { return { this, "FPrimalItemSparseClassData.bUseBPOnLocalUse" }; }
	BitFieldValue<bool, unsigned __int32> bUseCustomContextMenuOptionsField() { return { this, "FPrimalItemSparseClassData.bUseCustomContextMenuOptions" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnItemAddedToInventoryField() { return { this, "FPrimalItemSparseClassData.bUseBPOnItemAddedToInventory" }; }
	BitFieldValue<bool, unsigned __int32> bHideDuringEquipAnimationField() { return { this, "FPrimalItemSparseClassData.bHideDuringEquipAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bHideWeaponDuringEquipAnimationField() { return { this, "FPrimalItemSparseClassData.bHideWeaponDuringEquipAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotificationsField() { return { this, "FPrimalItemSparseClassData.bUseBlueprintAnimNotifications" }; }
	BitFieldValue<bool, unsigned __int32> bDontReplicateCustomItemDataClassesField() { return { this, "FPrimalItemSparseClassData.bDontReplicateCustomItemDataClasses" }; }
	BitFieldValue<bool, unsigned __int32> bDisableAnimUROIfEquippedField() { return { this, "FPrimalItemSparseClassData.bDisableAnimUROIfEquipped" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalItemSparseClassData>(); }
	FPrimalItemSparseClassData& operator=(const FPrimalItemSparseClassData* __that) { return NativeCall<FPrimalItemSparseClassData&, const FPrimalItemSparseClassData*>(this, "FPrimalItemSparseClassData.operator=(FPrimalItemSparseClassData&)", __that); }

	std::add_const_t<UE :: Math :: TVector < double >>& BlockingShieldFPVTranslationField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalItemSparseClassData.BlockingShieldFPVTranslation"); }
	std::add_const_t<UE :: Math :: TVector < double >>& UseSpawnActorLocOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalItemSparseClassData.UseSpawnActorLocOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& PreviewCameraPivotOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalItemSparseClassData.PreviewCameraPivotOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& SpawnOnWaterEncroachmentBoxExtentField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalItemSparseClassData.SpawnOnWaterEncroachmentBoxExtent"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& BlockingShieldFPVRotationField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalItemSparseClassData.BlockingShieldFPVRotation"); }
	std::add_const_t<UE :: Math :: TRotator < double >>& PreviewCameraRotationField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalItemSparseClassData.PreviewCameraRotation"); }
	std::add_const_t<FString>& CraftItemButtonStringOverrideField() const { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.CraftItemButtonStringOverride"); }
	std::add_const_t<FString>& AbstractItemCraftingDescriptionField() const { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.AbstractItemCraftingDescription"); }
	std::add_const_t<FString>& ItemRatingStringField() const { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.ItemRatingString"); }
	std::add_const_t<FString>& CustomRepairTextField() const { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.CustomRepairText"); }
	std::add_const_t<FString>& OverrideUseStringField() const { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.OverrideUseString"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& TopLevelCustomContextMenuOptionsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalItemSparseClassData.TopLevelCustomContextMenuOptions"); }
	std::add_const_t<TArray < FName , TSizedDefaultAllocator < 32 > >>& EggAlertDinosAggroTagsField() const { return *GetNativePointerField<TArray < FName , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalItemSparseClassData.EggAlertDinosAggroTags"); }
	std::add_const_t<FLinearColor>& DurabilityBarColorForegroundField() const { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemSparseClassData.DurabilityBarColorForeground"); }
	std::add_const_t<FLinearColor>& DurabilityBarColorBackgroundField() const { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemSparseClassData.DurabilityBarColorBackground"); }
	std::add_const_t<FName>& DefaultWeaponMeshNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.DefaultWeaponMeshName"); }
	std::add_const_t<FName>& SaddleOverrideRiderSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.SaddleOverrideRiderSocketName"); }
	std::add_const_t<FName>& UseParticleEffectSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.UseParticleEffectSocketName"); }
	std::add_const_t<FName>& UseUnlocksEmoteNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.UseUnlocksEmoteName"); }
	std::add_const_t<FName>& EquippingCosmeticRequiresUnlockedEmoteNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.EquippingCosmeticRequiresUnlockedEmoteName"); }
	std::add_const_t<FColor>& CustomBrokenBorderColorField() const { return *GetNativePointerField<FColor*>(this, "FPrimalItemSparseClassData.CustomBrokenBorderColor"); }
	std::add_const_t<USoundBase *>& ItemBrokenSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.ItemBrokenSound"); }
	std::add_const_t<USoundCue *>& UseItemSoundField() const { return *GetNativePointerField<USoundCue **>(this, "FPrimalItemSparseClassData.UseItemSound"); }
	std::add_const_t<USoundBase *>& EquipSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.EquipSound"); }
	std::add_const_t<USoundBase *>& UnEquipSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.UnEquipSound"); }
	std::add_const_t<USoundBase *>& UsedOnOtherItemSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.UsedOnOtherItemSound"); }
	std::add_const_t<USoundBase *>& RemovedFromOtherItemSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.RemovedFromOtherItemSound"); }
	std::add_const_t<USoundBase *>& ExtraThrowItemSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.ExtraThrowItemSound"); }
	std::add_const_t<USoundBase *>& ShieldHitSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.ShieldHitSound"); }
	std::add_const_t<USoundBase *>& UseItemOnItemSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalItemSparseClassData.UseItemOnItemSound"); }
	std::add_const_t<UAnimMontage *>& PlayAnimationOnUseField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalItemSparseClassData.PlayAnimationOnUse"); }
	std::add_const_t<UAnimMontage *>& ShowAnimationMaleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalItemSparseClassData.ShowAnimationMale"); }
	std::add_const_t<UAnimMontage *>& ShowAnimationFemaleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalItemSparseClassData.ShowAnimationFemale"); }
	std::add_const_t<UAnimMontage *>& HideAnimationMaleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalItemSparseClassData.HideAnimationMale"); }
	std::add_const_t<UAnimMontage *>& HideAnimationFemaleField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalItemSparseClassData.HideAnimationFemale"); }
	std::add_const_t<UMaterialInterface *>& DroppedMeshMaterialOverrideField() const { return *GetNativePointerField<UMaterialInterface **>(this, "FPrimalItemSparseClassData.DroppedMeshMaterialOverride"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& SpoilingItemField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.SpoilingItem"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& PreservingItemClassField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.PreservingItemClass"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& GiveItemWhenUsedField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.GiveItemWhenUsed"); }
	std::add_const_t<TSubclassOf < UUserWidget >>& CustomItemTooltipOverrideField() const { return *GetNativePointerField<TSubclassOf < UUserWidget >*>(this, "FPrimalItemSparseClassData.CustomItemTooltipOverride"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& BrokenGiveItemClassField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.BrokenGiveItemClass"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& ItemClassToUseAsInitialCustomDataField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.ItemClassToUseAsInitialCustomData"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& OverrideCooldownTimeItemClassField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.OverrideCooldownTimeItemClass"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& EngramRequirementItemClassOverrideField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.EngramRequirementItemClassOverride"); }
	std::add_const_t<TSubclassOf < UPrimalItem >>& SendToClientClassOverrideField() const { return *GetNativePointerField<TSubclassOf < UPrimalItem >*>(this, "FPrimalItemSparseClassData.SendToClientClassOverride"); }
	std::add_const_t<float>& CraftingCooldownIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingCooldownInterval"); }
	std::add_const_t<float>& DinoAutoHealingThresholdPercentField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DinoAutoHealingThresholdPercent"); }
	std::add_const_t<float>& DinoAutoHealingUseTimeIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DinoAutoHealingUseTimeInterval"); }
	std::add_const_t<float>& RandomChanceToBeBlueprintField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RandomChanceToBeBlueprint"); }
	std::add_const_t<float>& ItemIconScaleField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ItemIconScale"); }
	std::add_const_t<float>& ShieldBlockDamagePercentageField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ShieldBlockDamagePercentage"); }
	std::add_const_t<float>& ShieldDamageToDurabilityRatioField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ShieldDamageToDurabilityRatio"); }
	std::add_const_t<float>& Ingredient_WeightIncreasePerQuantityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_WeightIncreasePerQuantity"); }
	std::add_const_t<float>& Ingredient_FoodIncreasePerQuantityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_FoodIncreasePerQuantity"); }
	std::add_const_t<float>& Ingredient_HealthIncreasePerQuantityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_HealthIncreasePerQuantity"); }
	std::add_const_t<float>& Ingredient_WaterIncreasePerQuantityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_WaterIncreasePerQuantity"); }
	std::add_const_t<float>& Ingredient_StaminaIncreasePerQuantityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_StaminaIncreasePerQuantity"); }
	std::add_const_t<float>& PreservingItemSpoilingTimeMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreservingItemSpoilingTimeMultiplier"); }
	std::add_const_t<float>& RepairResourceRequirementMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RepairResourceRequirementMultiplier"); }
	std::add_const_t<float>& DurabilityIncreaseMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityIncreaseMultiplier"); }
	std::add_const_t<float>& DurabilityDecreaseMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityDecreaseMultiplier"); }
	std::add_const_t<float>& UseDecreaseDurabilityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseDecreaseDurability"); }
	std::add_const_t<float>& AutoDurabilityDecreaseIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.AutoDurabilityDecreaseInterval"); }
	std::add_const_t<float>& AutoDecreaseMinDurabilityField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.AutoDecreaseMinDurability"); }
	std::add_const_t<float>& UseDecreaseDurabilityMinField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseDecreaseDurabilityMin"); }
	std::add_const_t<float>& UseMinDurabilityRequirementField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseMinDurabilityRequirement"); }
	std::add_const_t<float>& MinBlueprintTimeToCraftField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinBlueprintTimeToCraft"); }
	std::add_const_t<float>& BlueprintWeightField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.BlueprintWeight"); }
	std::add_const_t<float>& MinimumUseIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinimumUseInterval"); }
	std::add_const_t<float>& TimeForFullRepairField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.TimeForFullRepair"); }
	std::add_const_t<float>& BaseRepairingXPField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.BaseRepairingXP"); }
	std::add_const_t<float>& PreviewCameraDistanceScaleFactorField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraDistanceScaleFactor"); }
	std::add_const_t<float>& PreviewCameraDefaultZoomMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
	std::add_const_t<float>& PreviewCameraMaxZoomMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraMaxZoomMultiplier"); }
	std::add_const_t<float>& DurabilityNotifyThresholdValueField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityNotifyThresholdValue"); }
	std::add_const_t<float>& CropGrowingFertilizerConsumptionRateField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropGrowingFertilizerConsumptionRate"); }
	std::add_const_t<float>& CropMaxFruitFertilizerConsumptionRateField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropMaxFruitFertilizerConsumptionRate"); }
	std::add_const_t<float>& CropGrowingWaterConsumptionRateField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropGrowingWaterConsumptionRate"); }
	std::add_const_t<float>& CropMaxFruitWaterConsumptionRateField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropMaxFruitWaterConsumptionRate"); }
	std::add_const_t<float>& CropNoFertilizerOrWaterCacheReductionRateField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropNoFertilizerOrWaterCacheReductionRate"); }
	std::add_const_t<float>& FertilizerEffectivenessMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.FertilizerEffectivenessMultiplier"); }
	std::add_const_t<float>& EggAlertDinosAggroAmountField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggAlertDinosAggroAmount"); }
	std::add_const_t<float>& EggAlertDinosForcedAggroTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggAlertDinosForcedAggroTime"); }
	std::add_const_t<float>& EggMaximumDistanceFromOriginalDropToAlertDinosField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggMaximumDistanceFromOriginalDropToAlertDinos"); }
	std::add_const_t<float>& MinDurabilityForCraftingResourceField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinDurabilityForCraftingResource"); }
	std::add_const_t<float>& ResourceRequirementIncreaseRatingPowerField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementIncreaseRatingPower"); }
	std::add_const_t<float>& ResourceRequirementRatingScaleField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementRatingScale"); }
	std::add_const_t<float>& ResourceRequirementRatingIncreasePercentageField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementRatingIncreasePercentage"); }
	std::add_const_t<float>& ClearColorDurabilityThresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ClearColorDurabilityThreshold"); }
	std::add_const_t<float>& RecipeCraftingSkillScaleField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RecipeCraftingSkillScale"); }
	std::add_const_t<float>& DamageTorpidityArmorRatingField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DamageTorpidityArmorRating"); }
	std::add_const_t<float>& IndirectTorpidityArmorRatingField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.IndirectTorpidityArmorRating"); }
	std::add_const_t<float>& UseGiveDinoTameAffinityPercentField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseGiveDinoTameAffinityPercent"); }
	std::add_const_t<float>& GlobalTameAffinityMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.GlobalTameAffinityMultiplier"); }
	std::add_const_t<float>& CraftingSkillQualityMultiplierMinField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingSkillQualityMultiplierMin"); }
	std::add_const_t<float>& CraftingSkillQualityMultiplierMaxField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingSkillQualityMultiplierMax"); }
	std::add_const_t<float>& SinglePlayerCraftingSpeedMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.SinglePlayerCraftingSpeedMultiplier"); }
	std::add_const_t<float>& EquippedReduceDurabilityIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EquippedReduceDurabilityInterval"); }
	std::add_const_t<float>& EquippedReduceDurabilityPerIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EquippedReduceDurabilityPerInterval"); }
	std::add_const_t<float>& CustomInventoryWidgetTextVerticalOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CustomInventoryWidgetTextVerticalOffset"); }
	std::add_const_t<float>& ImprintingQualitySpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ImprintingQualitySpeed"); }
	std::add_const_t<int>& MaxCustomItemDescriptionLengthField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.MaxCustomItemDescriptionLength"); }
	std::add_const_t<int>& CraftingMinLevelRequirementField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingMinLevelRequirement"); }
	std::add_const_t<int>& ArkTributeVersionField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.ArkTributeVersion"); }
	std::add_const_t<int>& BlueprintAllowMaxCraftingsField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.BlueprintAllowMaxCraftings"); }
	std::add_const_t<int>& CraftingConsumesDurabilityField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingConsumesDurability"); }
	std::add_const_t<int>& ExtraItemCategoryFlagsField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.ExtraItemCategoryFlags"); }
	std::add_const_t<int>& NoLevelEngramSortingPriorityField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.NoLevelEngramSortingPriority"); }
	std::add_const_t<int>& CraftingGiveItemCountField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingGiveItemCount"); }
	std::add_const_t<int>& CraftingGivesItemQuantityOverrideField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingGivesItemQuantityOverride"); }

	int& AlwaysShowInFolderStartIgnoringFolderPathsWhenFoldersDisabledDepthField() { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.AlwaysShowInFolderStartIgnoringFolderPathsWhenFoldersDisabledDepth"); }
	std::add_const_t<int>& AlwaysShowInFolderStartIgnoringFolderPathsWhenFoldersDisabledDepthField() const { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.AlwaysShowInFolderStartIgnoringFolderPathsWhenFoldersDisabledDepth"); }
	std::add_const_t<TEnumAsByte < EEngramGroup :: Type >>& PreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned_WhichDLCField() const { return *GetNativePointerField<TEnumAsByte < EEngramGroup :: Type >*>(this, "FPrimalItemSparseClassData.PreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned_WhichDLC"); }

	TSubclassOf<UDLC>& RequiresDLCField() { return *GetNativePointerField<TSubclassOf<UDLC>*>(this, "FPrimalItemSparseClassData.RequiresDLC"); }
	std::add_const_t<TSubclassOf < UDLC >>& RequiresDLCField() const { return *GetNativePointerField<TSubclassOf < UDLC >*>(this, "FPrimalItemSparseClassData.RequiresDLC"); }
};