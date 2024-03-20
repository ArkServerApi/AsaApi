#pragma once
#include "UE.h"

struct UPrimalItem : UObject
{
    // Fields

    TSoftObjectPtr<USkeletalMesh>& CostumeDinoSaddleOverrideMeshField() { return *GetNativePointerField<TSoftObjectPtr<USkeletalMesh>*>(this, "UPrimalItem.CostumeDinoSaddleOverrideMesh"); }
    TSoftObjectPtr<USkeletalMesh>& CostumeDinoSaddleOverrideTorchMeshField() { return *GetNativePointerField<TSoftObjectPtr<USkeletalMesh>*>(this, "UPrimalItem.CostumeDinoSaddleOverrideTorchMesh"); }
    float& DinoAutoHealingThresholdPercentField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DinoAutoHealingThresholdPercent"); }
    float& DinoAutoHealingUseTimeIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DinoAutoHealingUseTimeInterval"); }
    int& ArkTributeVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ArkTributeVersion"); }
    TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& EquipRequiresExplicitOwnerClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquipRequiresExplicitOwnerClasses"); }
    TArray<FName, TSizedDefaultAllocator<32> >& EquipRequiresExplicitOwnerTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquipRequiresExplicitOwnerTags"); }
    TSoftClassPtr<APrimalBuff>& BuffToGiveOwnerWhenEquippedField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped"); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.ExpirationTimeUTC"); }
    int& BlueprintAllowMaxCraftingsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.BlueprintAllowMaxCraftings"); }
    FString& AbstractItemCraftingDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.AbstractItemCraftingDescription"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemSkinUseOnItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemSkinUseOnItemClasses"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& AllowClassesToBeUsedAsParentSkinField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.AllowClassesToBeUsedAsParentSkin"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemSkinPreventOnItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemSkinPreventOnItemClasses"); }
    USoundBase*& ItemBrokenSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.ItemBrokenSound"); }
    USoundCue*& UseItemSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalItem.UseItemSound"); }
    USoundBase*& EquipSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.EquipSound"); }
    USoundBase*& UnEquipSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.UnEquipSound"); }
    USoundBase*& UsedOnOtherItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.UsedOnOtherItemSound"); }
    USoundBase*& RemovedFromOtherItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.RemovedFromOtherItemSound"); }
    float& RandomChanceToBeBlueprintField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RandomChanceToBeBlueprint"); }
    TArray<FActorClassAttachmentInfo, TSizedDefaultAllocator<32> >& ActorClassAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ActorClassAttachmentInfos"); }
    TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*& ItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >**>(this, "UPrimalItem.ItemAttachmentInfos"); }
    TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >& DynamicItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.DynamicItemAttachmentInfos"); }
    TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >& ItemSkinAddItemAttachmentsField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemSkinAddItemAttachments"); }
    TEnumAsByte<enum EPrimalItemType::Type>& MyItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemType::Type>*>(this, "UPrimalItem.MyItemType"); }
    TEnumAsByte<enum EPrimalConsumableType::Type>& MyConsumableTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalConsumableType::Type>*>(this, "UPrimalItem.MyConsumableType"); }
    TEnumAsByte<enum EPrimalEquipmentType::Type>& MyEquipmentTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "UPrimalItem.MyEquipmentType"); }
    int& ExtraItemCategoryFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ExtraItemCategoryFlags"); }
    float& ItemIconScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemIconScale"); }
    UE::Math::TVector<double>& BlockingShieldFPVTranslationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.BlockingShieldFPVTranslation"); }
    UE::Math::TRotator<double>& BlockingShieldFPVRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalItem.BlockingShieldFPVRotation"); }
    float& ShieldBlockDamagePercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ShieldBlockDamagePercentage"); }
    float& ShieldDamageToDurabilityRatioField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ShieldDamageToDurabilityRatio"); }
    UAnimMontage*& PlayAnimationOnUseField() { return *GetNativePointerField<UAnimMontage**>(this, "UPrimalItem.PlayAnimationOnUse"); }
    UAnimMontage*& ShowAnimationMaleField() { return *GetNativePointerField<UAnimMontage**>(this, "UPrimalItem.ShowAnimationMale"); }
    UAnimMontage*& ShowAnimationFemaleField() { return *GetNativePointerField<UAnimMontage**>(this, "UPrimalItem.ShowAnimationFemale"); }
    UAnimMontage*& HideAnimationMaleField() { return *GetNativePointerField<UAnimMontage**>(this, "UPrimalItem.HideAnimationMale"); }
    UAnimMontage*& HideAnimationFemaleField() { return *GetNativePointerField<UAnimMontage**>(this, "UPrimalItem.HideAnimationFemale"); }
    int& CraftingMinLevelRequirementField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingMinLevelRequirement"); }
    float& CraftingCooldownIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingCooldownInterval"); }
    TSoftClassPtr<AActor>& CraftingActorToSpawnField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "UPrimalItem.CraftingActorToSpawn"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BlueprintBackgroundOverrideTexture"); }
    FString& CraftItemButtonStringOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CraftItemButtonStringOverride"); }
    TSoftClassPtr<AActor>& UseSpawnActorClassField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "UPrimalItem.UseSpawnActorClass"); }
    UE::Math::TVector<double>& UseSpawnActorLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.UseSpawnActorLocOffset"); }
    int& SlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.SlotIndex"); }
    FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem.ItemID"); }
    int& ItemCustomDataField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemCustomData"); }
    TSubclassOf<UPrimalItem>& ItemCustomClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.ItemCustomClass"); }
    int& ItemSkinTemplateIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemSkinTemplateIndex"); }
    TSubclassOf<UPrimalItem>& ItemSkinTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.ItemSkinTemplate"); }
    float& ItemRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemRating"); }
    unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "UPrimalItem.CraftQueue"); }
    float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkill"); }
    FString& CustomItemNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemName"); }
    FString& CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomItemDescription"); }
    TArray<FColor, TSizedDefaultAllocator<32> >& CustomColorsField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CustomColors"); }
    TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CustomResourceRequirements"); }
    long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextCraftCompletionTime"); }
    TWeakObjectPtr<UPrimalInventoryComponent>& OwnerInventoryField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent>*>(this, "UPrimalItem.OwnerInventory"); }
    TSubclassOf<UPrimalItem>& SupportDragOntoItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.SupportDragOntoItemClass"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& SupportDragOntoItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SupportDragOntoItemClasses"); }
    TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& SkinWeaponTemplatesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SkinWeaponTemplates"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& SupportAmmoItemForWeaponSkinField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SupportAmmoItemForWeaponSkin"); }
    TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& SkinWeaponTemplatesForAmmoField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SkinWeaponTemplatesForAmmo"); }
    TSoftClassPtr<AShooterWeapon>& AmmoSupportDragOntoWeaponItemWeaponTemplateField() { return *GetNativePointerField<TSoftClassPtr<AShooterWeapon>*>(this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplate"); }
    TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& AmmoSupportDragOntoWeaponItemWeaponTemplatesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplates"); }
    TArray<FUseItemAddCharacterStatusValue, TSizedDefaultAllocator<32> >& UseItemAddCharacterStatusValuesField() { return *GetNativePointerField<TArray<FUseItemAddCharacterStatusValue, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.UseItemAddCharacterStatusValues"); }
    float& Ingredient_WeightIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_WeightIncreasePerQuantity"); }
    float& Ingredient_FoodIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_FoodIncreasePerQuantity"); }
    float& Ingredient_HealthIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_HealthIncreasePerQuantity"); }
    float& Ingredient_WaterIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_WaterIncreasePerQuantity"); }
    float& Ingredient_StaminaIncreasePerQuantityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.Ingredient_StaminaIncreasePerQuantity"); }
    FString& DescriptiveNameBaseField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DescriptiveNameBase"); }
    FString& ItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemDescription"); }
    FString& DurabilityStringShortField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityStringShort"); }
    FString& DurabilityStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityString"); }
    FString& CustomRepairTextField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CustomRepairText"); }
    float& DroppedItemLifeSpanOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DroppedItemLifeSpanOverride"); }
    UE::Math::TVector<double>& DroppedItemCenterLocationOffsetOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.DroppedItemCenterLocationOffsetOverride"); }
    TSoftObjectPtr<UStaticMesh>& DroppedMeshOverrideField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "UPrimalItem.DroppedMeshOverride"); }
    UMaterialInterface*& DroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.DroppedMeshMaterialOverride"); }
    UE::Math::TVector<double>& DroppedMeshOverrideScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.DroppedMeshOverrideScale3D"); }
    TSubclassOf<UPrimalItem>& SpoilingItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.SpoilingItem"); }
    TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& UseRequiresOwnerActorClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.UseRequiresOwnerActorClasses"); }
    TSubclassOf<UPrimalItem>& PreservingItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.PreservingItemClass"); }
    float& PreservingItemSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreservingItemSpoilingTimeMultiplier"); }
    float& SpoilingTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SpoilingTime"); }
    int& CraftingConsumesDurabilityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingConsumesDurability"); }
    float& RepairResourceRequirementMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RepairResourceRequirementMultiplier"); }
    float& BaseItemWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseItemWeight"); }
    float& DurabilityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityIncreaseMultiplier"); }
    float& NewItemDurabilityOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NewItemDurabilityOverride"); }
    float& DurabilityDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityDecreaseMultiplier"); }
    float& UseDecreaseDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseDecreaseDurability"); }
    float& AutoDurabilityDecreaseIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDurabilityDecreaseInterval"); }
    float& AutoDecreaseMinDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseMinDurability"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseDurabilityAmountPerInterval"); }
    float& UseDecreaseDurabilityMinField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseDecreaseDurabilityMin"); }
    float& UseMinDurabilityRequirementField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseMinDurabilityRequirement"); }
    float& ResourceRarityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRarity"); }
    float& BlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintTimeToCraft"); }
    float& MinBlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinBlueprintTimeToCraft"); }
    float& BlueprintWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintWeight"); }
    float& MinimumUseIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinimumUseInterval"); }
    float& TimeForFullRepairField() { return *GetNativePointerField<float*>(this, "UPrimalItem.TimeForFullRepair"); }
    float& BaseCraftingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseCraftingXP"); }
    float& BaseRepairingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseRepairingXP"); }
    TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.BaseCraftingResourceRequirements"); }
    TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& OverrideRepairingRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.OverrideRepairingRequirements"); }
    FieldArray<FItemStatInfo, 8> ItemStatInfosField() { return { this, "UPrimalItem.ItemStatInfos" }; }
    FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "UPrimalItem.ItemStatValues" }; }
    int& WeaponClipAmmoField() { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponClipAmmo"); }
    float& WeaponFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalItem.WeaponFrequency"); }
    long double& LastTimeToShowInfoField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastTimeToShowInfo"); }
    float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemDurability"); }
    float& MinItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinItemDurability"); }
    float& SavedDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SavedDurability"); }
    TSoftClassPtr<AShooterWeapon>& WeaponTemplateField() { return *GetNativePointerField<TSoftClassPtr<AShooterWeapon>*>(this, "UPrimalItem.WeaponTemplate"); }
    UTexture2D*& BrokenIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BrokenIcon"); }
    UTexture2D*& CustomBrokenOverlayIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.CustomBrokenOverlayIcon"); }
    UTexture2D*& ItemIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.ItemIcon"); }
    UTexture2D*& AlternateItemIconBelowDurabilityField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AlternateItemIconBelowDurability"); }
    float& AlternateItemIconBelowDurabilityValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AlternateItemIconBelowDurabilityValue"); }
    float& DurabilityNotifyThresholdValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DurabilityNotifyThresholdValue"); }
    UMaterialInterface*& ItemIconMaterialParentField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.ItemIconMaterialParent"); }
    FieldArray<__int16, 6> ItemColorIDField() { return { this, "UPrimalItem.ItemColorID" }; }
    FieldArray<__int16, 6> PreSkinItemColorIDField() { return { this, "UPrimalItem.PreSkinItemColorID" }; }
    FieldArray<unsigned __int8, 6> bUseItemColorField() { return { this, "UPrimalItem.bUseItemColor" }; }
    TSubclassOf<UPrimalColorSet>& RandomColorSetField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "UPrimalItem.RandomColorSet"); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem.ItemIconMaterial"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem.HUDIconMaterial"); }
    int& ItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.ItemQuantity"); }
    int& MaxItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxItemQuantity"); }
    TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>, TSizedDefaultAllocator<32> >& EquippedHideOtherEquipmentAttachTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<unsigned __int64, TSizedDefaultAllocator<32> >& SteamItemUserIDsField() { return *GetNativePointerField<TArray<unsigned __int64, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SteamItemUserIDs"); }
    TSoftClassPtr<APrimalStructure>& StructureToBuildField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructure>*>(this, "UPrimalItem.StructureToBuild"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& StructuresToBuildField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.StructuresToBuild"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& CachedStructuresToBuildField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CachedStructuresToBuild"); }
    int& StructureToBuildIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.StructureToBuildIndex"); }
    TSubclassOf<UPrimalItem>& GiveItemWhenUsedField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.GiveItemWhenUsed"); }
    TArray<TSoftClassPtr<UPrimalInventoryComponent>, TSizedDefaultAllocator<32> >& CraftingRequiresInventoryComponentField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalInventoryComponent>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CraftingRequiresInventoryComponent"); }
    TSoftClassPtr<ADroppedItem>& DroppedItemTemplateOverrideField() { return *GetNativePointerField<TSoftClassPtr<ADroppedItem>*>(this, "UPrimalItem.DroppedItemTemplateOverride"); }
    TSoftClassPtr<ADroppedItem>& DroppedItemTemplateForSecondryActionField() { return *GetNativePointerField<TSoftClassPtr<ADroppedItem>*>(this, "UPrimalItem.DroppedItemTemplateForSecondryAction"); }
    TSoftClassPtr<APrimalBuff>& BuffToGiveOwnerCharacterField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "UPrimalItem.BuffToGiveOwnerCharacter"); }
    UE::Math::TRotator<double>& PreviewCameraRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalItem.PreviewCameraRotation"); }
    UE::Math::TVector<double>& PreviewCameraPivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.PreviewCameraPivotOffset"); }
    float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraDistanceScaleFactor"); }
    float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraDefaultZoomMultiplier"); }
    float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.PreviewCameraMaxZoomMultiplier"); }
    FName& PlayerMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.PlayerMeshTextureMaskParamName"); }
    UTexture2D*& PlayerMeshTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.PlayerMeshTextureMask"); }
    UTexture2D*& PlayerMeshNoItemDefaultTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.PlayerMeshNoItemDefaultTextureMask"); }
    int& PlayerMeshTextureMaskMaterialIndexNewField() { return *GetNativePointerField<int*>(this, "UPrimalItem.PlayerMeshTextureMaskMaterialIndexNew"); }
    int& PlayerMeshTextureMaskMaterialIndexAltField() { return *GetNativePointerField<int*>(this, "UPrimalItem.PlayerMeshTextureMaskMaterialIndexAlt"); }
    FName& FPVHandsMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.FPVHandsMeshTextureMaskParamName"); }
    UTexture2D*& FPVHandsMeshTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.FPVHandsMeshTextureMask"); }
    int& FPVHandsMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex"); }
    int& FPVHandsMeshTextureMaskMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "UPrimalItem.FPVHandsMeshTextureMaskMaterialIndex2"); }
    UPrimalItem*& WeaponAmmoOverrideItemCDOField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.WeaponAmmoOverrideItemCDO"); }
    long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.CreationTime"); }
    long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastAutoDurabilityDecreaseTime"); }
    long double& LastUseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastUseTime"); }
    long double& LastLocalUseTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastLocalUseTime"); }
    int& MaxCustomItemDescriptionLengthField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxCustomItemDescriptionLength"); }
    int& TempSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.TempSlotIndex"); }
    int& LastSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastSlotIndex"); }
    TWeakObjectPtr<AShooterWeapon>& AssociatedWeaponField() { return *GetNativePointerField<TWeakObjectPtr<AShooterWeapon>*>(this, "UPrimalItem.AssociatedWeapon"); }
    UPrimalItem*& MyItemSkinField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.MyItemSkin"); }
    UPrimalItem*& SkinnedOntoItemField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.SkinnedOntoItem"); }
    TArray<TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& WheelItemsAmmoField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.WheelItemsAmmo"); }
    TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "UPrimalItem.LastOwnerPlayer"); }
    TArray<FCropItemPhaseData, TSizedDefaultAllocator<32> >& CropPhasesDataField() { return *GetNativePointerField<TArray<FCropItemPhaseData, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CropPhasesData"); }
    float& CropGrowingFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropGrowingFertilizerConsumptionRate"); }
    float& CropMaxFruitFertilizerConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropMaxFruitFertilizerConsumptionRate"); }
    float& CropGrowingWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropGrowingWaterConsumptionRate"); }
    float& CropMaxFruitWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropMaxFruitWaterConsumptionRate"); }
    int& CropMaxFruitsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CropMaxFruits"); }
    float& CropNoFertilizerOrWaterCacheReductionRateField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CropNoFertilizerOrWaterCacheReductionRate"); }
    float& FertilizerEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.FertilizerEffectivenessMultiplier"); }
    float& EggAlertDinosAggroAmountField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroAmount"); }
    float& EggAlertDinosAggroRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroRadius"); }
    TArray<FName, TSizedDefaultAllocator<32> >& EggAlertDinosAggroTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EggAlertDinosAggroTags"); }
    float& EggAlertDinosForcedAggroTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosForcedAggroTime"); }
    float& EggMaximumDistanceFromOriginalDropToAlertDinosField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaximumDistanceFromOriginalDropToAlertDinos"); }
    TSubclassOf<UPrimalItem>& BrokenGiveItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.BrokenGiveItemClass"); }
    float& ClearColorDurabilityThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ClearColorDurabilityThreshold"); }
    TSubclassOf<UPrimalItem>& ItemClassToUseAsInitialCustomDataField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.ItemClassToUseAsInitialCustomData"); }
    UE::Math::TVector<double>& OriginalItemDropLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.OriginalItemDropLocation"); }
    FLinearColor& DurabilityBarColorForegroundField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem.DurabilityBarColorForeground"); }
    FLinearColor& DurabilityBarColorBackgroundField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalItem.DurabilityBarColorBackground"); }
    TSubclassOf<UPrimalItem>& OverrideCooldownTimeItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.OverrideCooldownTimeItemClass"); }
    float& MinDurabilityForCraftingResourceField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinDurabilityForCraftingResource"); }
    float& ResourceRequirementIncreaseRatingPowerField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementIncreaseRatingPower"); }
    float& ResourceRequirementRatingScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementRatingScale"); }
    float& ResourceRequirementRatingIncreasePercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRequirementRatingIncreasePercentage"); }
    long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextSpoilingTime"); }
    long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastSpoilingTime"); }
    TArray<FString, TSizedDefaultAllocator<32> >& DefaultFolderPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.DefaultFolderPaths"); }
    FString& ItemRatingStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemRatingString"); }
    FName& DefaultWeaponMeshNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.DefaultWeaponMeshName"); }
    int& LastCalculatedTotalAmmoInvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastCalculatedTotalAmmoInvUpdatedFrame"); }
    int& WeaponTotalAmmoField() { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponTotalAmmo"); }
    TSubclassOf<UPrimalItem>& EngramRequirementItemClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.EngramRequirementItemClassOverride"); }
    TArray<unsigned short, TSizedDefaultAllocator<32> >& CraftingResourceRequirementsField() { return *GetNativePointerField<TArray<unsigned short, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CraftingResourceRequirements"); }
    USoundBase*& ExtraThrowItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.ExtraThrowItemSound"); }
    bool& bForceNotificationItemCombatModeField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bForceNotificationItemCombatMode"); }
    UE::Math::TVector<double>& SpawnOnWaterEncroachmentBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.SpawnOnWaterEncroachmentBoxExtent"); }
    TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& OnlyUsableOnSpecificClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.OnlyUsableOnSpecificClasses"); }
    TArray<FSaddlePassengerSeatDefinition, TSizedDefaultAllocator<32> >& SaddlePassengerSeatsField() { return *GetNativePointerField<TArray<FSaddlePassengerSeatDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SaddlePassengerSeats"); }
    FName& SaddleOverrideRiderSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.SaddleOverrideRiderSocketName"); }
    TSoftClassPtr<APrimalDinoCharacter>& EggDinoClassToSpawnField() { return *GetNativePointerField<TSoftClassPtr<APrimalDinoCharacter>*>(this, "UPrimalItem.EggDinoClassToSpawn"); }
    FieldArray<unsigned __int8, 12> EggNumberOfLevelUpPointsAppliedField() { return { this, "UPrimalItem.EggNumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned __int8, 12> EggNumberMutationsAppliedField() { return { this, "UPrimalItem.EggNumberMutationsApplied" }; }
    float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggTamedIneffectivenessModifier"); }
    FieldArray<unsigned __int8, 6> EggColorSetIndicesField() { return { this, "UPrimalItem.EggColorSetIndices" }; }
    int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggLoseDurabilityPerSecond"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    float& EggMinTemperatureField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMinTemperature"); }
    float& EggMaxTemperatureField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggMaxTemperature"); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    USoundBase*& ShieldHitSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.ShieldHitSound"); }
    float& RecipeCraftingSkillScaleField() { return *GetNativePointerField<float*>(this, "UPrimalItem.RecipeCraftingSkillScale"); }
    int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomItemID"); }
    float& AddDinoTargetingRangeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AddDinoTargetingRange"); }
    float& DamageTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DamageTorpidityArmorRating"); }
    float& IndirectTorpidityArmorRatingField() { return *GetNativePointerField<float*>(this, "UPrimalItem.IndirectTorpidityArmorRating"); }
    TSoftClassPtr<APrimalEmitterSpawnable>& UseParticleEffectField() { return *GetNativePointerField<TSoftClassPtr<APrimalEmitterSpawnable>*>(this, "UPrimalItem.UseParticleEffect"); }
    FName& UseParticleEffectSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.UseParticleEffectSocketName"); }
    float& UseGiveDinoTameAffinityPercentField() { return *GetNativePointerField<float*>(this, "UPrimalItem.UseGiveDinoTameAffinityPercent"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& CraftingAdditionalItemsToGiveField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CraftingAdditionalItemsToGive"); }
    int& LastValidItemVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastValidItemVersion"); }
    float& GlobalTameAffinityMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.GlobalTameAffinityMultiplier"); }
    int& CraftingGiveItemCountField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingGiveItemCount"); }
    int& CraftingGivesItemQuantityOverrideField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CraftingGivesItemQuantityOverride"); }
    USoundBase*& UseItemOnItemSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.UseItemOnItemSound"); }
    FName& UseUnlocksEmoteNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.UseUnlocksEmoteName"); }
    long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.ClusterSpoilingTimeUTC"); }
    TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EggDinoAncestors"); }
    TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EggDinoAncestorsMale"); }
    int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsMale"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& EquippingRequiresEngramsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquippingRequiresEngrams"); }
    TArray<FCustomItemData, TSizedDefaultAllocator<32> >& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CustomItemDatas"); }
    FString& OverrideUseStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.OverrideUseString"); }
    TSubclassOf<UPrimalItem>& SendToClientClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalItem.SendToClientClassOverride"); }
    FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterCharacterName"); }
    FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterTribeName"); }
    float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftedSkillBonus"); }
    float& CraftingSkillQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkillQualityMultiplierMin"); }
    float& CraftingSkillQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftingSkillQualityMultiplierMax"); }
    float& SinglePlayerCraftingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SinglePlayerCraftingSpeedMultiplier"); }
    int& NoLevelEngramSortingPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.NoLevelEngramSortingPriority"); }
    int& CustomFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomFlags"); }
    FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.CustomTag"); }
    float& EquippedReduceDurabilityIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EquippedReduceDurabilityInterval"); }
    long double& LastEquippedReduceDurabilityTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastEquippedReduceDurabilityTime"); }
    float& EquippedReduceDurabilityPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EquippedReduceDurabilityPerInterval"); }
    float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemStatClampsMultiplier"); }
    float& MaxDurabiltiyOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MaxDurabiltiyOverride"); }
    long double& LastItemAdditionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastItemAdditionTime"); }
    long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.UploadEarliestValidTime"); }
    float& NextRepairPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NextRepairPercentage"); }
    UStaticMesh*& NetDroppedMeshOverrideField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem.NetDroppedMeshOverride"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.NetDroppedMeshMaterialOverride"); }
    UE::Math::TVector<double>& NetDroppedMeshOverrideScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.NetDroppedMeshOverrideScale3D"); }
    FSlateBrush& WidgetCustomBrokenOverlayStyleBrushField() { return *GetNativePointerField<FSlateBrush*>(this, "UPrimalItem.WidgetCustomBrokenOverlayStyleBrush"); }
    FColor& CustomBrokenBorderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalItem.CustomBrokenBorderColor"); }
    TSoftObjectPtr<USkeletalMesh>& DyePreviewMeshOverrideSKField() { return *GetNativePointerField<TSoftObjectPtr<USkeletalMesh>*>(this, "UPrimalItem.DyePreviewMeshOverrideSK"); }
    TSoftObjectPtr<UStaticMesh>& DyePreviewMeshOverrideSMField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "UPrimalItem.DyePreviewMeshOverrideSM"); }
    UTexture2D*& AccessoryActivatedIconOverrideField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AccessoryActivatedIconOverride"); }
    TSubclassOf<UUserWidget>& CustomItemTooltipOverrideField() { return *GetNativePointerField<TSubclassOf<UUserWidget>*>(this, "UPrimalItem.CustomItemTooltipOverride"); }
    bool& bUseBPPreventUploadField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bUseBPPreventUpload"); }
    FName& EquippingCosmeticRequiresUnlockedEmoteNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.EquippingCosmeticRequiresUnlockedEmoteName"); }
    float& CustomInventoryWidgetTextVerticalOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CustomInventoryWidgetTextVerticalOffset"); }
    TArray<FName, TSizedDefaultAllocator<32> >& TopLevelCustomContextMenuOptionsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.TopLevelCustomContextMenuOptions"); }
    TArray<FCustomContextSubmenu, TSizedDefaultAllocator<32> >& CustomContextSubMenusField() { return *GetNativePointerField<TArray<FCustomContextSubmenu, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CustomContextSubMenus"); }
    TArray<FCustomContextMenuData, TSizedDefaultAllocator<32> >& CustomContextOptionDataField() { return *GetNativePointerField<TArray<FCustomContextMenuData, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CustomContextOptionData"); }
    bool& bUseBPOnLocalUseField() { return *GetNativePointerField<bool*>(this, "UPrimalItem.bUseBPOnLocalUse"); }
    unsigned int& AssociatedDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.AssociatedDinoID2"); }
    unsigned char& ItemQualityIndexField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.ItemQualityIndex"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bCanBuildStructures() { return { this, "UPrimalItem.bCanBuildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEquppingItem() { return { this, "UPrimalItem.bAllowEquppingItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEquipOnTaxidermyBase() { return { this, "UPrimalItem.bPreventEquipOnTaxidermyBase" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInventoryItem() { return { this, "UPrimalItem.bAllowInventoryItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "UPrimalItem.bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bEquippedItem() { return { this, "UPrimalItem.bEquippedItem" }; }
    BitFieldValue<bool, unsigned __int32> bCanSlot() { return { this, "UPrimalItem.bCanSlot" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemColors() { return { this, "UPrimalItem.bUseItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bShowTooltipColors() { return { this, "UPrimalItem.bShowTooltipColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitItemColors() { return { this, "UPrimalItem.bUseBPInitItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshOnDyeUsed() { return { this, "UPrimalItem.bRefreshOnDyeUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostAddBuffToGiveOwnerCharacter() { return { this, "UPrimalItem.bUseBPPostAddBuffToGiveOwnerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bForceDediAttachments() { return { this, "UPrimalItem.bForceDediAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomColors() { return { this, "UPrimalItem.bAllowCustomColors" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowRemovalWhenDead() { return { this, "UPrimalItem.bForceAllowRemovalWhenDead" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCraftBlueprint() { return { this, "UPrimalItem.bAutoCraftBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay() { return { this, "UPrimalItem.bHideFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemStats() { return { this, "UPrimalItem.bUseItemStats" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorWhenRiding() { return { this, "UPrimalItem.bUseSpawnActorWhenRiding" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActor() { return { this, "UPrimalItem.bUseSpawnActor" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDefaultCharacterAttachment() { return { this, "UPrimalItem.bAllowDefaultCharacterAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemDurability() { return { this, "UPrimalItem.bUseItemDurability" }; }
    BitFieldValue<bool, unsigned __int32> bNewWeaponAutoFillClipAmmo() { return { this, "UPrimalItem.bNewWeaponAutoFillClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyBrokenItem() { return { this, "UPrimalItem.bDestroyBrokenItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsMisssionItem() { return { this, "UPrimalItem.bIsMisssionItem" }; }
    BitFieldValue<bool, unsigned __int32> bThrowOnHotKeyUse() { return { this, "UPrimalItem.bThrowOnHotKeyUse" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlueprint() { return { this, "UPrimalItem.bIsBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeBlueprint() { return { this, "UPrimalItem.bCanBeBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUpload() { return { this, "UPrimalItem.bPreventUpload" }; }
    BitFieldValue<bool, unsigned __int32> bIsEngram() { return { this, "UPrimalItem.bIsEngram" }; }
    BitFieldValue<bool, unsigned __int32> bIsCustomRecipe() { return { this, "UPrimalItem.bIsCustomRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoodRecipe() { return { this, "UPrimalItem.bIsFoodRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bTekItem() { return { this, "UPrimalItem.bTekItem" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseInInventory() { return { this, "UPrimalItem.bAllowUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteUseInInventory() { return { this, "UPrimalItem.bAllowRemoteUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintEquippedNotifications() { return { this, "UPrimalItem.bUseBlueprintEquippedNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bUseInWaterRestoreDurability() { return { this, "UPrimalItem.bUseInWaterRestoreDurability" }; }
    BitFieldValue<bool, unsigned __int32> bValidCraftingResource() { return { this, "UPrimalItem.bValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupHUDIconMaterial() { return { this, "UPrimalItem.bUseBPSetupHUDIconMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_ScorchedEarth() { return { this, "UPrimalItem.bEquipRequiresDLC_ScorchedEarth" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Aberration() { return { this, "UPrimalItem.bEquipRequiresDLC_Aberration" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Extinction() { return { this, "UPrimalItem.bEquipRequiresDLC_Extinction" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Genesis() { return { this, "UPrimalItem.bEquipRequiresDLC_Genesis" }; }
    BitFieldValue<bool, unsigned __int32> bDurabilityRequirementIgnoredInWater() { return { this, "UPrimalItem.bDurabilityRequirementIgnoredInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRepair() { return { this, "UPrimalItem.bAllowRepair" }; }
    BitFieldValue<bool, unsigned __int32> bCustomBrokenIcon() { return { this, "UPrimalItem.bCustomBrokenIcon" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "UPrimalItem.bAllowRemovalFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "UPrimalItem.bFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "UPrimalItem.bIsFromAllClustersInventory" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeItemOnUse() { return { this, "UPrimalItem.bConsumeItemOnUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnItemConsumed() { return { this, "UPrimalItem.bUseBPOnItemConsumed" }; }
    BitFieldValue<bool, unsigned __int32> bConfirmBeforeUsing() { return { this, "UPrimalItem.bConfirmBeforeUsing" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyCanUseInWater() { return { this, "UPrimalItem.bOnlyCanUseInWater" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseSwimming() { return { this, "UPrimalItem.bCanUseSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bIsDescriptionOnlyItem() { return { this, "UPrimalItem.bIsDescriptionOnlyItem" }; }
    BitFieldValue<bool, unsigned __int32> bRestoreDurabilityWhenColorized() { return { this, "UPrimalItem.bRestoreDurabilityWhenColorized" }; }
    BitFieldValue<bool, unsigned __int32> bAppendPrimaryColorToName() { return { this, "UPrimalItem.bAppendPrimaryColorToName" }; }
    BitFieldValue<bool, unsigned __int32> bUseScaleStatEffectivenessByDurability() { return { this, "UPrimalItem.bUseScaleStatEffectivenessByDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUsesCreationTime() { return { this, "UPrimalItem.bUsesCreationTime" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseWhileRiding() { return { this, "UPrimalItem.bAllowUseWhileRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceAtFullDurability() { return { this, "UPrimalItem.bPreventCraftingResourceAtFullDurability" }; }
    BitFieldValue<bool, unsigned __int32> bGiveItemWhenUsedCopyItemStats() { return { this, "UPrimalItem.bGiveItemWhenUsedCopyItemStats" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromRemoteInventoryDisplay() { return { this, "UPrimalItem.bHideFromRemoteInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDecreaseDurabilityOverTime() { return { this, "UPrimalItem.bAutoDecreaseDurabilityOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDragOntoOtherItemIfSameCustomData() { return { this, "UPrimalItem.bPreventDragOntoOtherItemIfSameCustomData" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnItemWeaponRemoveClipAmmo() { return { this, "UPrimalItem.bUseOnItemWeaponRemoveClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnItemSetIndexAsDestinationItemCustomData() { return { this, "UPrimalItem.bUseOnItemSetIndexAsDestinationItemCustomData" }; }
    BitFieldValue<bool, unsigned __int32> bSupportDragOntoOtherItem() { return { this, "UPrimalItem.bSupportDragOntoOtherItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsItemSkin() { return { this, "UPrimalItem.bIsItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSkinTab() { return { this, "UPrimalItem.bPreventOnSkinTab" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetAttachmentIfNotUpdatingItem() { return { this, "UPrimalItem.bDontResetAttachmentIfNotUpdatingItem" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinIgnoreSkinIcon() { return { this, "UPrimalItem.bItemSkinIgnoreSkinIcon" }; }
    BitFieldValue<bool, unsigned __int32> bPickupEggAlertsDinos() { return { this, "UPrimalItem.bPickupEggAlertsDinos" }; }
    BitFieldValue<bool, unsigned __int32> bEggSpoilsWhenFertilized() { return { this, "UPrimalItem.bEggSpoilsWhenFertilized" }; }
    BitFieldValue<bool, unsigned __int32> bHideCustomDescription() { return { this, "UPrimalItem.bHideCustomDescription" }; }
    BitFieldValue<bool, unsigned __int32> bCopyCustomDescriptionIntoSpoiledItem() { return { this, "UPrimalItem.bCopyCustomDescriptionIntoSpoiledItem" }; }
    BitFieldValue<bool, unsigned __int32> bCopyDurabilityIntoSpoiledItem() { return { this, "UPrimalItem.bCopyDurabilityIntoSpoiledItem" }; }
    BitFieldValue<bool, unsigned __int32> bCraftedRequestCustomItemDescription() { return { this, "UPrimalItem.bCraftedRequestCustomItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowCustomItemDescription() { return { this, "UPrimalItem.bForceAllowCustomItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedItem() { return { this, "UPrimalItem.bInitializedItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsDroppedItem() { return { this, "UPrimalItem.bIsDroppedItem" }; }
    BitFieldValue<bool, unsigned __int32> bEggIsTooCold() { return { this, "UPrimalItem.bEggIsTooCold" }; }
    BitFieldValue<bool, unsigned __int32> bEggIsTooHot() { return { this, "UPrimalItem.bEggIsTooHot" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventUseOntoItem() { return { this, "UPrimalItem.bUseBPPreventUseOntoItem" }; }
    BitFieldValue<bool, unsigned __int32> bSkinDisableWhenSubmerged() { return { this, "UPrimalItem.bSkinDisableWhenSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbstractItem() { return { this, "UPrimalItem.bIsAbstractItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemSkins() { return { this, "UPrimalItem.bPreventItemSkins" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyCanUseInFalling() { return { this, "UPrimalItem.bOnlyCanUseInFalling" }; }
    BitFieldValue<bool, unsigned __int32> bForceDropDestruction() { return { this, "UPrimalItem.bForceDropDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeArkTributeItem() { return { this, "UPrimalItem.bCanBeArkTributeItem" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInvalidItemVersion() { return { this, "UPrimalItem.bAllowInvalidItemVersion" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorRelativeLoc() { return { this, "UPrimalItem.bUseSpawnActorRelativeLoc" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorTakeOwnerRotation() { return { this, "UPrimalItem.bUseSpawnActorTakeOwnerRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquippedItemBlueprintTick() { return { this, "UPrimalItem.bUseEquippedItemBlueprintTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquippedItemNativeTick() { return { this, "UPrimalItem.bUseEquippedItemNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnActorOnWaterOnly() { return { this, "UPrimalItem.bSpawnActorOnWaterOnly" }; }
    BitFieldValue<bool, unsigned __int32> bAutoTameSpawnedActor() { return { this, "UPrimalItem.bAutoTameSpawnedActor" }; }
    BitFieldValue<bool, unsigned __int32> bShowItemRatingAsPercent() { return { this, "UPrimalItem.bShowItemRatingAsPercent" }; }
    BitFieldValue<bool, unsigned __int32> bPreventArmorDurabiltyConsumption() { return { this, "UPrimalItem.bPreventArmorDurabiltyConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bIsEgg() { return { this, "UPrimalItem.bIsEgg" }; }
    BitFieldValue<bool, unsigned __int32> bIsCookingIngredient() { return { this, "UPrimalItem.bIsCookingIngredient" }; }
    BitFieldValue<bool, unsigned __int32> bDragClearDyedItem() { return { this, "UPrimalItem.bDragClearDyedItem" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateItem() { return { this, "UPrimalItem.bDeprecateItem" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedRecipeStats() { return { this, "UPrimalItem.bInitializedRecipeStats" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalWeaponTemplate() { return { this, "UPrimalItem.bItemSkinKeepOriginalWeaponTemplate" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalIcon() { return { this, "UPrimalItem.bItemSkinKeepOriginalIcon" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintEvents() { return { this, "UPrimalItem.bItemSkinReceiveOwnerEquippedBlueprintEvents" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintTick() { return { this, "UPrimalItem.bItemSkinReceiveOwnerEquippedBlueprintTick" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinAllowEquipping() { return { this, "UPrimalItem.bItemSkinAllowEquipping" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisplayInInventory() { return { this, "UPrimalItem.bForceDisplayInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bDroppedItemAllowDinoPickup() { return { this, "UPrimalItem.bDroppedItemAllowDinoPickup" }; }
    BitFieldValue<bool, unsigned __int32> bCraftDontActuallyGiveItem() { return { this, "UPrimalItem.bCraftDontActuallyGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseWhenSleeping() { return { this, "UPrimalItem.bPreventUseWhenSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRepairingRequirements() { return { this, "UPrimalItem.bOverrideRepairingRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bScaleOverridenRepairingRequirements() { return { this, "UPrimalItem.bScaleOverridenRepairingRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseItemAddCharacterStatsOnDinos() { return { this, "UPrimalItem.bForceUseItemAddCharacterStatsOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyEquipWhenUnconscious() { return { this, "UPrimalItem.bOnlyEquipWhenUnconscious" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventConsumableWhileHandcuffed() { return { this, "UPrimalItem.bForcePreventConsumableWhileHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideExactClassCraftingRequirement() { return { this, "UPrimalItem.bOverrideExactClassCraftingRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventConsumeItemOnDrag() { return { this, "UPrimalItem.bPreventConsumeItemOnDrag" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowGrinding() { return { this, "UPrimalItem.bForceAllowGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventGrinding() { return { this, "UPrimalItem.bForcePreventGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateBlueprint() { return { this, "UPrimalItem.bDeprecateBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoAutoConsume() { return { this, "UPrimalItem.bPreventDinoAutoConsume" }; }
    BitFieldValue<bool, unsigned __int32> bIsDinoAutoHealingItem() { return { this, "UPrimalItem.bIsDinoAutoHealingItem" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowRemoteAddToInventory() { return { this, "UPrimalItem.bBPAllowRemoteAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowRemoteRemoveFromInventory() { return { this, "UPrimalItem.bBPAllowRemoteRemoveFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemHeadHair() { return { this, "UPrimalItem.bEquipmentHatHideItemHeadHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemFacialHair() { return { this, "UPrimalItem.bEquipmentHatHideItemFacialHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceHairHiding() { return { this, "UPrimalItem.bEquipmentForceHairHiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoveFromSteamInventory() { return { this, "UPrimalItem.bAllowRemoveFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryNotifyCraftingFinished() { return { this, "UPrimalItem.bBPInventoryNotifyCraftingFinished" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBPAllowCrafting() { return { this, "UPrimalItem.bCheckBPAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowAddToInventory() { return { this, "UPrimalItem.bUseBPAllowAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemBlueprint() { return { this, "UPrimalItem.bPreventItemBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseByDinos() { return { this, "UPrimalItem.bPreventUseByDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseByHumans() { return { this, "UPrimalItem.bPreventUseByHumans" }; }
    BitFieldValue<bool, unsigned __int32> bBPCanUse() { return { this, "UPrimalItem.bBPCanUse" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOverrideItemAutoDecreaseDurability() { return { this, "UPrimalItem.bAllowOverrideItemAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bCopyItemDurabilityFromCraftingResource() { return { this, "UPrimalItem.bCopyItemDurabilityFromCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bIsInitialItem() { return { this, "UPrimalItem.bIsInitialItem" }; }
    BitFieldValue<bool, unsigned __int32> bPickupEggForceAggro() { return { this, "UPrimalItem.bPickupEggForceAggro" }; }
    BitFieldValue<bool, unsigned __int32> bClearSkinOnInventoryRemoval() { return { this, "UPrimalItem.bClearSkinOnInventoryRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomAutoDecreaseDurabilityPerInterval() { return { this, "UPrimalItem.bUseBPCustomAutoDecreaseDurabilityPerInterval" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetText() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextColor() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextForBlueprint() { return { this, "UPrimalItem.bUseBPCustomInventoryWidgetTextForBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bUseSkinnedBPCustomInventoryWidgetText() { return { this, "UPrimalItem.bUseSkinnedBPCustomInventoryWidgetText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityText() { return { this, "UPrimalItem.bUseBPCustomDurabilityText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityTextColor() { return { this, "UPrimalItem.bUseBPCustomDurabilityTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitFromItemNetInfo() { return { this, "UPrimalItem.bUseBPInitFromItemNetInfo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeItem() { return { this, "UPrimalItem.bUseBPInitializeItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemNetInfo() { return { this, "UPrimalItem.bUseBPGetItemNetInfo" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalItemName() { return { this, "UPrimalItem.bItemSkinKeepOriginalItemName" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploadingWeaponClipAmmo() { return { this, "UPrimalItem.bPreventUploadingWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNativeItemBroken() { return { this, "UPrimalItem.bPreventNativeItemBroken" }; }
    BitFieldValue<bool, unsigned __int32> bResourcePreventGivingFromDemolition() { return { this, "UPrimalItem.bResourcePreventGivingFromDemolition" }; }
    BitFieldValue<bool, unsigned __int32> bNameForceNoStatQualityRank() { return { this, "UPrimalItem.bNameForceNoStatQualityRank" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysLearnedEngram() { return { this, "UPrimalItem.bAlwaysLearnedEngram" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMinimumUseIntervalForDinoAutoEatingFood() { return { this, "UPrimalItem.bIgnoreMinimumUseIntervalForDinoAutoEatingFood" }; }
    BitFieldValue<bool, unsigned __int32> bUnappliedItemSkinIgnoreItemAttachments() { return { this, "UPrimalItem.bUnappliedItemSkinIgnoreItemAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bHideMoreOptionsIfNonRemovable() { return { this, "UPrimalItem.bHideMoreOptionsIfNonRemovable" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemDescription() { return { this, "UPrimalItem.bUseBPGetItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCrafted() { return { this, "UPrimalItem.bUseBPCrafted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemName() { return { this, "UPrimalItem.bUseBPGetItemName" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseAtTameLimit() { return { this, "UPrimalItem.bPreventUseAtTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bDivideTimeToCraftByGlobalCropGrowthSpeed() { return { this, "UPrimalItem.bDivideTimeToCraftByGlobalCropGrowthSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCheatGive() { return { this, "UPrimalItem.bPreventCheatGive" }; }
    BitFieldValue<bool, unsigned __int32> bUsingRequiresStandingOnSolidGround() { return { this, "UPrimalItem.bUsingRequiresStandingOnSolidGround" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddedAttachments() { return { this, "UPrimalItem.bUseBPAddedAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPConsumeProjectileImpact() { return { this, "UPrimalItem.bUseBPConsumeProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideProjectileType() { return { this, "UPrimalItem.bUseBPOverrideProjectileType" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnUpdatedItemContextMenu() { return { this, "UPrimalItem.bUseBPOnUpdatedItemContextMenu" }; }
    BitFieldValue<bool, unsigned __int32> bUsableWithTekGrenadeLauncher() { return { this, "UPrimalItem.bUsableWithTekGrenadeLauncher" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyDropped() { return { this, "UPrimalItem.bUseBPNotifyDropped" }; }
    BitFieldValue<bool, unsigned __int32> bThrowUsesSecondaryActionDrop() { return { this, "UPrimalItem.bThrowUsesSecondaryActionDrop" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemIcon() { return { this, "UPrimalItem.bUseBPGetItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseSlottedTick() { return { this, "UPrimalItem.bUseSlottedTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawItemIcon() { return { this, "UPrimalItem.bUseBPDrawItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowRemoteAddToInventory() { return { this, "UPrimalItem.bUseBPForceAllowRemoteAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bSkinAddWeightToSkinnedItem() { return { this, "UPrimalItem.bSkinAddWeightToSkinnedItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidForCrafting() { return { this, "UPrimalItem.bUseBPIsValidForCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCraftingConsumption() { return { this, "UPrimalItem.bUseBPOverrideCraftingConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bMergeCustomDataFromCraftingResources() { return { this, "UPrimalItem.bMergeCustomDataFromCraftingResources" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDrawingItemButtonIcon() { return { this, "UPrimalItem.bIgnoreDrawingItemButtonIcon" }; }
    BitFieldValue<bool, unsigned __int32> bCensoredItemSkin() { return { this, "UPrimalItem.bCensoredItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemDurabilityPercentage() { return { this, "UPrimalItem.bUseBPGetItemDurabilityPercentage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPEquippedItemOnXPEarning() { return { this, "UPrimalItem.bUseBPEquippedItemOnXPEarning" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysTriggerTributeDownloaded() { return { this, "UPrimalItem.bAlwaysTriggerTributeDownloaded" }; }
    BitFieldValue<bool, unsigned __int32> bDeferWeaponBeginPlayToAssociatedItemSetTime() { return { this, "UPrimalItem.bDeferWeaponBeginPlayToAssociatedItemSetTime" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRemovingClipAmmo() { return { this, "UPrimalItem.bPreventRemovingClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bCustomBrokenOverlayIcon() { return { this, "UPrimalItem.bCustomBrokenOverlayIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMaxAmmo() { return { this, "UPrimalItem.bUseBPGetMaxAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRefreshed() { return { this, "UPrimalItem.bUseBPNotifyItemRefreshed" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoLearnedEngramRequirement() { return { this, "UPrimalItem.bForceNoLearnedEngramRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseIgnoreMovementMode() { return { this, "UPrimalItem.bAllowUseIgnoreMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnFullEquippedSuitHUD() { return { this, "UPrimalItem.bPreventOnFullEquippedSuitHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingShield() { return { this, "UPrimalItem.bNonBlockingShield" }; }
    BitFieldValue<bool, unsigned __int32> bNetInfoFromClient() { return { this, "UPrimalItem.bNetInfoFromClient" }; }
    BitFieldValue<bool, unsigned __int32> bAddedToWorldItemMap() { return { this, "UPrimalItem.bAddedToWorldItemMap" }; }
    BitFieldValue<bool, unsigned __int32> bDisableItemUITooltip() { return { this, "UPrimalItem.bDisableItemUITooltip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDepositDropping() { return { this, "UPrimalItem.bPreventDepositDropping" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowSkinColorization() { return { this, "UPrimalItem.bForceAllowSkinColorization" }; }
    BitFieldValue<bool, unsigned __int32> bEquipAddTekExtendedInfo() { return { this, "UPrimalItem.bEquipAddTekExtendedInfo" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCraftingWithStarterAmmo() { return { this, "UPrimalItem.bAllowCraftingWithStarterAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideInheritedStatWeight() { return { this, "UPrimalItem.bUseBPOverrideInheritedStatWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseSkinDroppedItemTemplateForSecondryAction() { return { this, "UPrimalItem.bUseSkinDroppedItemTemplateForSecondryAction" }; }

    // Functions

    bool AllowInventoryItem(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.AllowInventoryItem(UPrimalInventoryComponent*)", toInventory); }
    void ApplyingSkinOntoItem(UPrimalItem* ToOwnerItem, bool bIsFirstTime) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalItem.ApplyingSkinOntoItem(UPrimalItem*,bool)", ToOwnerItem, bIsFirstTime); }
    void BlueprintEquipped(bool bIsFromSaveGame) { NativeCall<void, bool>(this, "UPrimalItem.BlueprintEquipped(bool)", bIsFromSaveGame); }
    FString* BPAllowCrafting(FString* result, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, AShooterPlayerController*>(this, "UPrimalItem.BPAllowCrafting(AShooterPlayerController*)", result, ForPC); }
    bool BPCanAddToInventory(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.BPCanAddToInventory(UPrimalInventoryComponent*)", toInventory); }
    FString* BPGetCustomDurabilityText(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPGetCustomDurabilityText()", result); }
    FString* BPGetCustomInventoryWidgetText(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPGetCustomInventoryWidgetText()", result); }
    FString* BPGetItemDescription(FString* result, const FString* InDescription, bool bGetLongDescription, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, const FString*, bool, AShooterPlayerController*>(this, "UPrimalItem.BPGetItemDescription(FString&,bool,AShooterPlayerController*)", result, InDescription, bGetLongDescription, ForPC); }
    void BPNotifyDropped(APrimalCharacter* FromCharacter, bool bWasThrown) { NativeCall<void, APrimalCharacter*, bool>(this, "UPrimalItem.BPNotifyDropped(APrimalCharacter*,bool)", FromCharacter, bWasThrown); }
    void BPOnLocalUse(AShooterCharacter* ForCharacter) { NativeCall<void, AShooterCharacter*>(this, "UPrimalItem.BPOnLocalUse(AShooterCharacter*)", ForCharacter); }
    void BPOverrideEquippedDurabilityPercentage(float* OutDurabilityPercentageValue) { NativeCall<void, float*>(this, "UPrimalItem.BPOverrideEquippedDurabilityPercentage(float&)", OutDurabilityPercentageValue); }
    void BPPostAddBuffToGiveOwnerCharacter(APrimalCharacter* OwnerCharacter, APrimalBuff* Buff) { NativeCall<void, APrimalCharacter*, APrimalBuff*>(this, "UPrimalItem.BPPostAddBuffToGiveOwnerCharacter(APrimalCharacter*,APrimalBuff*)", OwnerCharacter, Buff); }
    bool BPShouldHideTopLevelCustomContextMenuOption(const FName* ContextItem) { return NativeCall<bool, const FName*>(this, "UPrimalItem.BPShouldHideTopLevelCustomContextMenuOption(FName&)", ContextItem); }
    void BPTributeItemDownloaded(UObject* ContextObject) { NativeCall<void, UObject*>(this, "UPrimalItem.BPTributeItemDownloaded(UObject*)", ContextObject); }
    bool IsCustomContextMenuItemEnabled(const FName* ContextItem) { return NativeCall<bool, const FName*>(this, "UPrimalItem.IsCustomContextMenuItemEnabled(FName&)", ContextItem); }
    USoundBase* OverrideCrouchingSound(USoundBase* InSound, bool bIsProne, int soundState) { return NativeCall<USoundBase*, USoundBase*, bool, int>(this, "UPrimalItem.OverrideCrouchingSound(USoundBase*,bool,int)", InSound, bIsProne, soundState); }
    void RemovedSkinFromItem(UPrimalItem* FromOwnerItem, bool bIsFirstTime) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalItem.RemovedSkinFromItem(UPrimalItem*,bool)", FromOwnerItem, bIsFirstTime); }
    void SelectedCustomContextMenuItem(const FName* ContextItem, AShooterPlayerController* ForPC) { NativeCall<void, const FName*, AShooterPlayerController*>(this, "UPrimalItem.SelectedCustomContextMenuItem(FName&,AShooterPlayerController*)", ContextItem, ForPC); }
    void SlottedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.SlottedTick(float)", DeltaSeconds); }
    static void StaticRegisterNativesUPrimalItem() { NativeCall<void>(nullptr, "UPrimalItem.StaticRegisterNativesUPrimalItem()"); }
    static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalItem.StaticClass()"); }
    void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPrimalItem.Serialize(FStructuredArchiveRecord)", Record); }
    UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UPrimalItem.GetWorld()"); }
    FItemNetInfo* GetItemNetInfo(FItemNetInfo* result, bool bIsForSendingToClient) { return NativeCall<FItemNetInfo*, FItemNetInfo*, bool>(this, "UPrimalItem.GetItemNetInfo(bool)", result, bIsForSendingToClient); }
    void InitFromNetInfo(const FItemNetInfo* theInfo) { NativeCall<void, const FItemNetInfo*>(this, "UPrimalItem.InitFromNetInfo(FItemNetInfo&)", theInfo); }
    UWorld* GetWorldHelper(UObject* WorldContextObject) { return NativeCall<UWorld*, UObject*>(this, "UPrimalItem.GetWorldHelper(UObject*)", WorldContextObject); }
    int GetMaxItemQuantity(UObject* WorldContextObject) { return NativeCall<int, UObject*>(this, "UPrimalItem.GetMaxItemQuantity(UObject*)", WorldContextObject); }
    void AddItemDurability(float durabilityToAdd) { NativeCall<void, float>(this, "UPrimalItem.AddItemDurability(float)", durabilityToAdd); }
    void InitNewItem(float ItemQuality, UPrimalInventoryComponent* toInventory, float MaxItemDifficultyClamp, float MinRandomQuality) { NativeCall<void, float, UPrimalInventoryComponent*, float, float>(this, "UPrimalItem.InitNewItem(float,UPrimalInventoryComponent*,float,float)", ItemQuality, toInventory, MaxItemDifficultyClamp, MinRandomQuality); }
    bool AllowEquipItem(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.AllowEquipItem(UPrimalInventoryComponent*)", toInventory); }
    void AddToInventory(UPrimalInventoryComponent* toInventory, bool bEquipItem, bool AddToSlotItems, FItemNetID* InventoryInsertAfterItemID, bool bShowHUDNotification, bool bDontRecalcSpoilingTime, bool bIgnoreAbsoluteMaxInventory, bool bInsertAtItemIDIndexInstead) { NativeCall<void, UPrimalInventoryComponent*, bool, bool, FItemNetID*, bool, bool, bool, bool>(this, "UPrimalItem.AddToInventory(UPrimalInventoryComponent*,bool,bool,FItemNetID*,bool,bool,bool,bool)", toInventory, bEquipItem, AddToSlotItems, InventoryInsertAfterItemID, bShowHUDNotification, bDontRecalcSpoilingTime, bIgnoreAbsoluteMaxInventory, bInsertAtItemIDIndexInstead); }
    bool RemoveItemFromArkTributeInventory() { return NativeCall<bool>(this, "UPrimalItem.RemoveItemFromArkTributeInventory()"); }
    bool RemoveItemFromInventory(bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, bool, bool>(this, "UPrimalItem.RemoveItemFromInventory(bool,bool)", bForceRemoval, showHUDMessage); }
    float GetSpoilingTime() { return NativeCall<float>(this, "UPrimalItem.GetSpoilingTime()"); }
    void GetItemBytes(TArray<unsigned char, TSizedDefaultAllocator<32> >* Bytes) { NativeCall<void, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.GetItemBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", Bytes); }
    static UPrimalItem* CreateFromBytes(const TArray<unsigned char, TSizedDefaultAllocator<32> >* Bytes) { return NativeCall<UPrimalItem*, const TArray<unsigned char, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalItem.CreateFromBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", Bytes); }
    static UPrimalItem* AddNewItem(TSubclassOf<UPrimalItem> ItemArchetype, UPrimalInventoryComponent* GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, float MaxItemDifficultyClamp, bool CreateOnClient, TSubclassOf<UPrimalItem> ApplyItemSkin, float MinRandomQuality, bool clampStats, bool bIgnoreAbsoluteMaxInventory, bool bSkipDenySpawningInThisMap) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent*, bool, bool, float, bool, int, bool, float, bool, TSubclassOf<UPrimalItem>, float, bool, bool, bool>(nullptr, "UPrimalItem.AddNewItem(TSubclassOf<UPrimalItem>,UPrimalInventoryComponent*,bool,bool,float,bool,int,bool,float,bool,TSubclassOf<UPrimalItem>,float,bool,bool,bool)", ItemArchetype, GiveToInventory, bEquipItem, bDontStack, ItemQuality, bForceNoBlueprint, quantityOverride, bForceBlueprint, MaxItemDifficultyClamp, CreateOnClient, ApplyItemSkin, MinRandomQuality, clampStats, bIgnoreAbsoluteMaxInventory, bSkipDenySpawningInThisMap); }
    static UPrimalItem* CreateItemFromNetInfo(const FItemNetInfo* newItemInfo) { return NativeCall<UPrimalItem*, const FItemNetInfo*>(nullptr, "UPrimalItem.CreateItemFromNetInfo(FItemNetInfo&)", newItemInfo); }
    FString* GetItemName(FString* result, bool bIncludeQuantity, bool bShortName, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, bool, bool, AShooterPlayerController*>(this, "UPrimalItem.GetItemName(bool,bool,AShooterPlayerController*)", result, bIncludeQuantity, bShortName, ForPC); }
    FLinearColor* GetItemQualityColor(FLinearColor* result) { return NativeCall<FLinearColor*, FLinearColor*>(this, "UPrimalItem.GetItemQualityColor()", result); }
    FString* GetItemDescription(FString* result, bool bGetLongDescription, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, bool, AShooterPlayerController*>(this, "UPrimalItem.GetItemDescription(bool,AShooterPlayerController*)", result, bGetLongDescription, ForPC); }
    UTexture2D* GetItemIcon(AShooterPlayerController* ForPC) { return NativeCall<UTexture2D*, AShooterPlayerController*>(this, "UPrimalItem.GetItemIcon(AShooterPlayerController*)", ForPC); }
    void EquippedItem() { NativeCall<void>(this, "UPrimalItem.EquippedItem()"); }
    void EquipAnimationFinished() { NativeCall<void>(this, "UPrimalItem.EquipAnimationFinished()"); }
    void UnequippedItem() { NativeCall<void>(this, "UPrimalItem.UnequippedItem()"); }
    void UpdatedItem(bool ResetUploadTime) { NativeCall<void, bool>(this, "UPrimalItem.UpdatedItem(bool)", ResetUploadTime); }
    void RefreshAttachments(bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh, bool bIsFromUpdateItem) { NativeCall<void, bool, bool, bool>(this, "UPrimalItem.RefreshAttachments(bool,bool,bool)", bRefreshDefaultAttachments, isShieldSpecificRefresh, bIsFromUpdateItem); }
    void AddAttachments(AActor* UseOtherActor, bool bDontRemoveBeforeAttaching, USkeletalMeshComponent* Saddle, bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh, bool bIsFromUpdateItem) { NativeCall<void, AActor*, bool, USkeletalMeshComponent*, bool, bool, bool>(this, "UPrimalItem.AddAttachments(AActor*,bool,USkeletalMeshComponent*,bool,bool,bool)", UseOtherActor, bDontRemoveBeforeAttaching, Saddle, bRefreshDefaultAttachments, isShieldSpecificRefresh, bIsFromUpdateItem); }
    void ApplyColorsToMesh(UMeshComponent* mComp) { NativeCall<void, UMeshComponent*>(this, "UPrimalItem.ApplyColorsToMesh(UMeshComponent*)", mComp); }
    void SetFirstPersonMasterPoseComponent(USkeletalMeshComponent* NewMasterPoseComponent) { NativeCall<void, USkeletalMeshComponent*>(this, "UPrimalItem.SetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)", NewMasterPoseComponent); }
    void SetOwnerNoSee(bool bNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalItem.SetOwnerNoSee(bool,bool)", bNoSee, bForceHideFirstPerson); }
    void RemoveAttachments(AActor* UseOtherActor, bool bRefreshDefaultAttachments, bool isShieldSpecificRefresh) { NativeCall<void, AActor*, bool, bool>(this, "UPrimalItem.RemoveAttachments(AActor*,bool,bool)", UseOtherActor, bRefreshDefaultAttachments, isShieldSpecificRefresh); }
    UActorComponent* GetAttachedComponent(int attachmentIndex, AActor* UseOtherActor) { return NativeCall<UActorComponent*, int, AActor*>(this, "UPrimalItem.GetAttachedComponent(int,AActor*)", attachmentIndex, UseOtherActor); }
    UActorComponent* GetComponentToAttach(int attachmentIndex, AActor* UseOtherActor) { return NativeCall<UActorComponent*, int, AActor*>(this, "UPrimalItem.GetComponentToAttach(int,AActor*)", attachmentIndex, UseOtherActor); }
    AActor* GetOwnerActor() { return NativeCall<AActor*>(this, "UPrimalItem.GetOwnerActor()"); }
    UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalItem.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
    FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetEntryString()", result); }
    float GetItemWeight(bool bJustOneQuantity, bool bForceNotBlueprintWeight) { return NativeCall<float, bool, bool>(this, "UPrimalItem.GetItemWeight(bool,bool)", bJustOneQuantity, bForceNotBlueprintWeight); }
    void AddToSlot(int theSlotIndex, bool bForce, bool bFastInventory) { NativeCall<void, int, bool, bool>(this, "UPrimalItem.AddToSlot(int,bool,bool)", theSlotIndex, bForce, bFastInventory); }
    void RemoveFromSlot(bool bForce, bool bFastInventory) { NativeCall<void, bool, bool>(this, "UPrimalItem.RemoveFromSlot(bool,bool)", bForce, bFastInventory); }
    bool AllowSlotting(UPrimalInventoryComponent* toInventory, bool bForce) { return NativeCall<bool, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.AllowSlotting(UPrimalInventoryComponent*,bool)", toInventory, bForce); }
    bool IsBroken() { return NativeCall<bool>(this, "UPrimalItem.IsBroken()"); }
    int GetExplicitEntryIndexType(bool bGetBaseValue) { return NativeCall<int, bool>(this, "UPrimalItem.GetExplicitEntryIndexType(bool)", bGetBaseValue); }
    float GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalItem.GetUseItemAddCharacterStatusValue(EPrimalCharacterStatusValue::Type)", valueType); }
    APhysicsVolume* GetLocationPhysicsVolume(const UE::Math::TVector<double>* Location) { return NativeCall<APhysicsVolume*, const UE::Math::TVector<double>*>(this, "UPrimalItem.GetLocationPhysicsVolume(UE::Math::TVector<double>&)", Location); }
    void Use(bool bOverridePlayerInput) { NativeCall<void, bool>(this, "UPrimalItem.Use(bool)", bOverridePlayerInput); }
    float GetRemainingCooldownTime() { return NativeCall<float>(this, "UPrimalItem.GetRemainingCooldownTime()"); }
    bool CanSpawnOverWater(AActor* ownerActor, UE::Math::TTransform<double>* SpawnTransform) { return NativeCall<bool, AActor*, UE::Math::TTransform<double>*>(this, "UPrimalItem.CanSpawnOverWater(AActor*,UE::Math::TTransform<double>&)", ownerActor, SpawnTransform); }
    bool IsCooldownReadyForUse(__int16 a2) { return NativeCall<bool, __int16>(this, "UPrimalItem.IsCooldownReadyForUse()", a2); }
    FString* GetInventoryIconDisplayText_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetInventoryIconDisplayText_Implementation()", result); }
    bool CanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.CanUse(bool)", bIgnoreCooldown); }
    void LocalUse(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUse(AShooterPlayerController*)", ForPC); }
    void LocalUseAfterHold(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUseAfterHold(AShooterPlayerController*)", ForPC); }
    void LocalUseStartHold(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUseStartHold(AShooterPlayerController*)", ForPC); }
    void LocalUseItemRelease(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUseItemRelease(AShooterPlayerController*)", ForPC); }
    void UnequipWeapon(bool bDelayedUnequip) { NativeCall<void, bool>(this, "UPrimalItem.UnequipWeapon(bool)", bDelayedUnequip); }
    FString* GetEntryDescription(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetEntryDescription()", result); }
    void AddedToInventory(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.AddedToInventory()", a2); }
    void ClampStats(UPrimalInventoryComponent* inventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "UPrimalItem.ClampStats(UPrimalInventoryComponent*)", inventory); }
    void ClampItemRating(UPrimalInventoryComponent* inventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "UPrimalItem.ClampItemRating(UPrimalInventoryComponent*)", inventory); }
    void InitializeItem(bool bForceReinit, UWorld* OptionalInitWorld) { NativeCall<void, bool, UWorld*>(this, "UPrimalItem.InitializeItem(bool,UWorld*)", bForceReinit, OptionalInitWorld); }
    void EquippedWeapon() { NativeCall<void>(this, "UPrimalItem.EquippedWeapon()"); }
    void UnequippedWeapon() { NativeCall<void>(this, "UPrimalItem.UnequippedWeapon()"); }
    unsigned __int16 calcResourceQuantityRequired(const TSubclassOf<UPrimalItem> itemType, const float baseRequiredAmount, UPrimalInventoryComponent* inventory, bool isCrafting) { return NativeCall<unsigned __int16, const TSubclassOf<UPrimalItem>, const float, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.calcResourceQuantityRequired(TSubclassOf<UPrimalItem>,float,UPrimalInventoryComponent*,bool)", itemType, baseRequiredAmount, inventory, isCrafting); }
    void GetUnreplicatedEggData(FUnreplicatedEggData* EggData) { NativeCall<void, FUnreplicatedEggData*>(this, "UPrimalItem.GetUnreplicatedEggData(FUnreplicatedEggData&)", EggData); }
    void SetUnreplicatedEggData(const FUnreplicatedEggData* EggData) { NativeCall<void, const FUnreplicatedEggData*>(this, "UPrimalItem.SetUnreplicatedEggData(FUnreplicatedEggData&)", EggData); }
    FLinearColor* GetColorForItemColorID(FLinearColor* result, int SetNum, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "UPrimalItem.GetColorForItemColorID(int,int)", result, SetNum, ID); }
    static FLinearColor* StaticGetColorForItemColorID(FLinearColor* result, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int>(nullptr, "UPrimalItem.StaticGetColorForItemColorID(int)", result, ID); }
    static int StaticGetDinoColorSetIndexForItemColorIDFromDyeList(int ID) { return NativeCall<int, int>(nullptr, "UPrimalItem.StaticGetDinoColorSetIndexForItemColorIDFromDyeList(int)", ID); }
    UMaterialInterface* GetEntryIconMaterial(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface*, UObject*, bool>(this, "UPrimalItem.GetEntryIconMaterial(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
    int GetItemQuantity() { return NativeCall<int>(this, "UPrimalItem.GetItemQuantity()"); }
    float GetMiscInfoFontScale() { return NativeCall<float>(this, "UPrimalItem.GetMiscInfoFontScale()"); }
    FString* GetMiscInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetMiscInfoString()", result); }
    UClass* GetBuffToGiveOwnerWhenEquipped(bool bForceResolveSoftRef) { return NativeCall<UClass*, bool>(this, "UPrimalItem.GetBuffToGiveOwnerWhenEquipped(bool)", bForceResolveSoftRef); }
    bool HasBuffToGiveOwnerWhenEquipped() { return NativeCall<bool>(this, "UPrimalItem.HasBuffToGiveOwnerWhenEquipped()"); }
    int IncrementItemQuantity(int amount, bool bReplicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption) { return NativeCall<int, int, bool, bool, bool, bool, bool>(this, "UPrimalItem.IncrementItemQuantity(int,bool,bool,bool,bool,bool)", amount, bReplicateToClient, bDontUpdateWeight, bIsFromUseConsumption, bIsArkTributeItem, bIsFromCraftingConsumption); }
    FString* GetItemTypeString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemTypeString()", result); }
    FString* GetItemSubtypeString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemSubtypeString()", result); }
    FString* GetItemStatsString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemStatsString()", result); }
    bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent* compareInventoryComp, int CraftAmountOverride, AShooterPlayerController* ForPlayer, bool bIsForCraftQueueAddition, bool bTestFullQueue, bool bForceUpdateWirelessResources) { return NativeCall<bool, UPrimalInventoryComponent*, int, AShooterPlayerController*, bool, bool, bool>(this, "UPrimalItem.MeetBlueprintCraftingRequirements(UPrimalInventoryComponent*,int,AShooterPlayerController*,bool,bool,bool)", compareInventoryComp, CraftAmountOverride, ForPlayer, bIsForCraftQueueAddition, bTestFullQueue, bForceUpdateWirelessResources); }
    bool CheckForRepairResources(UPrimalInventoryComponent* invComp, float Percent, APlayerController* PC) { return NativeCall<bool, UPrimalInventoryComponent*, float, APlayerController*>(this, "UPrimalItem.CheckForRepairResources(UPrimalInventoryComponent*,float,APlayerController*)", invComp, Percent, PC); }
    void ConsumeResourcesForRepair(UPrimalInventoryComponent* invComp, float Percent, APlayerController* PC) { NativeCall<void, UPrimalInventoryComponent*, float, APlayerController*>(this, "UPrimalItem.ConsumeResourcesForRepair(UPrimalInventoryComponent*,float,APlayerController*)", invComp, Percent, PC); }
    FString* GetCraftingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp, bool bMinimalVersion) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.GetCraftingRequirementsString(UPrimalInventoryComponent*,bool)", result, compareInventoryComp, bMinimalVersion); }
    bool MeetRepairingRequirements(UPrimalInventoryComponent* compareInventoryComp, bool bIsForCraftQueueAddition, bool bForceUpdateWirelessResources) { return NativeCall<bool, UPrimalInventoryComponent*, bool, bool>(this, "UPrimalItem.MeetRepairingRequirements(UPrimalInventoryComponent*,bool,bool)", compareInventoryComp, bIsForCraftQueueAddition, bForceUpdateWirelessResources); }
    FString* GetRepairingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp, bool bUseBaseRequirements, float OverrideRepairPercent, APlayerController* OwningPlayer) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*, bool, float, APlayerController*>(this, "UPrimalItem.GetRepairingRequirementsString(UPrimalInventoryComponent*,bool,float,APlayerController*)", result, compareInventoryComp, bUseBaseRequirements, OverrideRepairPercent, OwningPlayer); }
    __int64 IterateRepairingRequirements(std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>* lambda, UPrimalInventoryComponent* compareInventoryComp, bool bUseBaseRequirements, float OverrideRepairPercent, APlayerController* OwningPlayer) { return NativeCall<__int64, std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>*, UPrimalInventoryComponent*, bool, float, APlayerController*>(this, "UPrimalItem.IterateRepairingRequirements(std::function<void__cdecl(UPrimalItem&,int,int,int,bool)", lambda, compareInventoryComp, bUseBaseRequirements, OverrideRepairPercent, OwningPlayer); }
    __int64 IterateCraftingRequirements(std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>* lambda, UPrimalInventoryComponent* compareInventoryComp, APlayerController* OwningPlayer) { return NativeCall<__int64, std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>*, UPrimalInventoryComponent*, APlayerController*>(this, "UPrimalItem.IterateCraftingRequirements(std::function<void__cdecl(UPrimalItem&,int,int,int,bool)", lambda, compareInventoryComp, OwningPlayer); }
    float GetItemStatModifier(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatModifier(EPrimalItemStat::Type)", statType); }
    FString* GetItemStatString(FString* result, int statType) { return NativeCall<FString*, FString*, int>(this, "UPrimalItem.GetItemStatString(EPrimalItemStat::Type)", result, statType); }
    bool UsesDurability() { return NativeCall<bool>(this, "UPrimalItem.UsesDurability()"); }
    bool CanRepair(bool bIgnoreInventoryRequirement) { return NativeCall<bool, bool>(this, "UPrimalItem.CanRepair(bool)", bIgnoreInventoryRequirement); }
    bool CanRepairInInventory(UPrimalInventoryComponent* invComp) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.CanRepairInInventory(UPrimalInventoryComponent&)", invComp); }
    float GetDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.GetDurabilityPercentage()"); }
    float GetMaxDurability() { return NativeCall<float>(this, "UPrimalItem.GetMaxDurability()"); }
    void CraftBlueprint(bool bConsumeResources) { NativeCall<void, bool>(this, "UPrimalItem.CraftBlueprint(bool)", bConsumeResources); }
    bool CanFullyCraft(bool bForceUpdateWirelessResources) { return NativeCall<bool, bool>(this, "UPrimalItem.CanFullyCraft(bool)", bForceUpdateWirelessResources); }
    void StopCraftingRepairing(bool bCheckIfCraftingOrRepairing) { NativeCall<void, bool>(this, "UPrimalItem.StopCraftingRepairing(bool)", bCheckIfCraftingOrRepairing); }
    UPrimalItem* FinishCraftingBlueprint() { return NativeCall<UPrimalItem*>(this, "UPrimalItem.FinishCraftingBlueprint()"); }
    float GetTimeToCraftBlueprint() { return NativeCall<float>(this, "UPrimalItem.GetTimeToCraftBlueprint()"); }
    float GetTimeForFullRepair() { return NativeCall<float>(this, "UPrimalItem.GetTimeForFullRepair()"); }
    static void GenerateItemID(FItemNetID* TheItemID) { NativeCall<void, FItemNetID*>(nullptr, "UPrimalItem.GenerateItemID(FItemNetID&)", TheItemID); }
    void TickCraftingItem(float DeltaTime, AShooterGameState* theGameState) { NativeCall<void, float, AShooterGameState*>(this, "UPrimalItem.TickCraftingItem(float,AShooterGameState*)", DeltaTime, theGameState); }
    float GetCraftingPercent() { return NativeCall<float>(this, "UPrimalItem.GetCraftingPercent()"); }
    float GetRepairingPercent() { return NativeCall<float>(this, "UPrimalItem.GetRepairingPercent()"); }
    void SetQuantity(int NewQuantity, bool ShowHUDNotification) { NativeCall<void, int, bool>(this, "UPrimalItem.SetQuantity(int,bool)", NewQuantity, ShowHUDNotification); }
    void RepairItem(bool bIgnoreInventoryRequirement, float UseNextRepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, bool, float, float>(this, "UPrimalItem.RepairItem(bool,float,float)", bIgnoreInventoryRequirement, UseNextRepairPercentage, RepairSpeedMultiplier); }
    void FinishRepairing() { NativeCall<void>(this, "UPrimalItem.FinishRepairing()"); }
    void Used(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem.Used(UPrimalItem*,int)", DestinationItem, AdditionalData); }
    void RemoveWeaponAccessory() { NativeCall<void>(this, "UPrimalItem.RemoveWeaponAccessory()"); }
    void ServerRemoveItemSkin(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.ServerRemoveItemSkin()", a2); }
    void ServerRemoveItemSkinOnly(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.ServerRemoveItemSkinOnly()", a2); }
    void ServerRemoveWeaponAccessoryOnly(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.ServerRemoveWeaponAccessoryOnly()", a2); }
    void RemoveClipAmmo(bool bDontUpdateItem) { NativeCall<void, bool>(this, "UPrimalItem.RemoveClipAmmo(bool)", bDontUpdateItem); }
    bool CanStackWithItem(UPrimalItem* otherItem, int* QuantityOverride) { return NativeCall<bool, UPrimalItem*, int*>(this, "UPrimalItem.CanStackWithItem(UPrimalItem*,int*)", otherItem, QuantityOverride); }
    bool CheckAutoCraftBlueprint() { return NativeCall<bool>(this, "UPrimalItem.CheckAutoCraftBlueprint()"); }
    bool CanCraft() { return NativeCall<bool>(this, "UPrimalItem.CanCraft()"); }
    bool CanCraftInInventory(UPrimalInventoryComponent* invComp) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.CanCraftInInventory(UPrimalInventoryComponent&)", invComp); }
    FString* GetCraftRepairInvReqString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetCraftRepairInvReqString()", result); }
    bool AllowUseInInventory(bool bIsRemoteInventory, AShooterPlayerController* ByPC, bool DontCheckActor) { return NativeCall<bool, bool, AShooterPlayerController*, bool>(this, "UPrimalItem.AllowUseInInventory(bool,AShooterPlayerController*,bool)", bIsRemoteInventory, ByPC, DontCheckActor); }
    bool CanBeArkTributeItem() { return NativeCall<bool>(this, "UPrimalItem.CanBeArkTributeItem()"); }
    void SetEngramBlueprint() { NativeCall<void>(this, "UPrimalItem.SetEngramBlueprint()"); }
    bool CanSpoil() { return NativeCall<bool>(this, "UPrimalItem.CanSpoil()"); }
    void RecalcSpoilingTime(long double TimeSeconds, float SpoilPercent, UPrimalInventoryComponent* forComp) { NativeCall<void, long double, float, UPrimalInventoryComponent*>(this, "UPrimalItem.RecalcSpoilingTime(double,float,UPrimalInventoryComponent*)", TimeSeconds, SpoilPercent, forComp); }
    void InventoryRefreshCheckItem() { NativeCall<void>(this, "UPrimalItem.InventoryRefreshCheckItem()"); }
    bool IsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.IsValidForCrafting()"); }
    bool IsOwnerInWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInWater()"); }
    bool IsOwnerInNoPainWater() { return NativeCall<bool>(this, "UPrimalItem.IsOwnerInNoPainWater()"); }
    bool AllowRemoteAddToInventory(UPrimalInventoryComponent* invComp, AShooterPlayerController* ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, bool>(this, "UPrimalItem.AllowRemoteAddToInventory(UPrimalInventoryComponent*,AShooterPlayerController*,bool)", invComp, ByPC, bRequestedByPlayer); }
    bool CanDrop() { return NativeCall<bool>(this, "UPrimalItem.CanDrop()"); }
    void PickupAlertDinos(AActor* groundItem) { NativeCall<void, AActor*>(this, "UPrimalItem.PickupAlertDinos(AActor*)", groundItem); }
    void GetItemAttachmentInfos(AActor* OwnerActor) { NativeCall<void, AActor*>(this, "UPrimalItem.GetItemAttachmentInfos(AActor*)", OwnerActor); }
    void SetAttachedMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "UPrimalItem.SetAttachedMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
    bool CanUseWithItemSource(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.CanUseWithItemSource(UPrimalItem*)", DestinationItem); }
    bool IsDyed() { return NativeCall<bool>(this, "UPrimalItem.IsDyed()"); }
    bool CanUseWithItemDestination(UPrimalItem* SourceItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.CanUseWithItemDestination(UPrimalItem*)", SourceItem); }
    bool UseItemOntoItem(UPrimalItem* DestinationItem, int AdditionalData) { return NativeCall<bool, UPrimalItem*, int>(this, "UPrimalItem.UseItemOntoItem(UPrimalItem*,int)", DestinationItem, AdditionalData); }
    void LocalUseItemOntoItem(AShooterPlayerController* ForPC, UPrimalItem* DestinationItem) { NativeCall<void, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalItem.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)", ForPC, DestinationItem); }
    FString* GetPrimaryColorName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetPrimaryColorName()", result); }
    void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UPrimalItem.Serialize(FArchive&)", Ar); }
    bool ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { return NativeCall<bool, AShooterPlayerController*, const FString*, bool>(this, "UPrimalItem.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void NotifyEditText(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.NotifyEditText(AShooterPlayerController*)", PC); }
    void AddToArkTributeInvenroty(UPrimalInventoryComponent* toInventory, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.AddToArkTributeInvenroty(UPrimalInventoryComponent*,bool)", toInventory, bFromLoad); }
    int GetMaximumAdditionalCrafting(UPrimalInventoryComponent* forComp, AShooterPlayerController* PC) { return NativeCall<int, UPrimalInventoryComponent*, AShooterPlayerController*>(this, "UPrimalItem.GetMaximumAdditionalCrafting(UPrimalInventoryComponent*,AShooterPlayerController*)", forComp, PC); }
    bool CanShowNotificationItem() { return NativeCall<bool>(this, "UPrimalItem.CanShowNotificationItem()"); }
    bool IsItemSkin() { return NativeCall<bool>(this, "UPrimalItem.IsItemSkin()"); }
    void InventoryLoadedFromSaveGame() { NativeCall<void>(this, "UPrimalItem.InventoryLoadedFromSaveGame()"); }
    bool CheckForInventoryDupes() { return NativeCall<bool>(this, "UPrimalItem.CheckForInventoryDupes()"); }
    void CalcRecipeStats() { NativeCall<void>(this, "UPrimalItem.CalcRecipeStats()"); }
    bool IsUsableConsumable() { return NativeCall<bool>(this, "UPrimalItem.IsUsableConsumable()"); }
    bool CanEquipWeapon() { return NativeCall<bool>(this, "UPrimalItem.CanEquipWeapon()"); }
    bool GetCustomItemData(FName CustomDataName, FCustomItemData* OutData) { return NativeCall<bool, FName, FCustomItemData*>(this, "UPrimalItem.GetCustomItemData(FName,FCustomItemData&)", CustomDataName, OutData); }
    void SetCustomItemData(const FCustomItemData* InData) { NativeCall<void, const FCustomItemData*>(this, "UPrimalItem.SetCustomItemData(FCustomItemData&)", InData); }
    int GetEngramRequirementLevel() { return NativeCall<int>(this, "UPrimalItem.GetEngramRequirementLevel()"); }
    void Crafted_Implementation(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted_Implementation(bool)", bWasCraftedFromEngram); }
    UMaterialInterface* GetHUDIconMaterial() { return NativeCall<UMaterialInterface*>(this, "UPrimalItem.GetHUDIconMaterial()"); }
    float GetEggHatchTimeRemaining(UWorld* theWorld, float additionalMultiplier) { return NativeCall<float, UWorld*, float>(this, "UPrimalItem.GetEggHatchTimeRemaining(UWorld*,float)", theWorld, additionalMultiplier); }
    bool IsReadyToUpload(UWorld* theWorld) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsReadyToUpload(UWorld*)", theWorld); }
    float GetTimeUntilUploadAllowed(UWorld* theWorld) { return NativeCall<float, UWorld*>(this, "UPrimalItem.GetTimeUntilUploadAllowed(UWorld*)", theWorld); }
    void ClientHandleItemNetExecCommand(FName CommandName, const FBPNetExecParams* ExecParams, AShooterPlayerController* ForPC) { NativeCall<void, FName, const FBPNetExecParams*, AShooterPlayerController*>(this, "UPrimalItem.ClientHandleItemNetExecCommand(FName,FBPNetExecParams&,AShooterPlayerController*)", CommandName, ExecParams, ForPC); }
    void ServerHandleItemNetExecCommand(AShooterPlayerController* ForPC, FName CommandName, const FBPNetExecParams* ExecParams) { NativeCall<void, AShooterPlayerController*, FName, const FBPNetExecParams*>(this, "UPrimalItem.ServerHandleItemNetExecCommand(AShooterPlayerController*,FName,FBPNetExecParams&)", ForPC, CommandName, ExecParams); }
    void ServerSendItemExecCommandToPlayer(AShooterPlayerController* ToPC, FName CommandName, const FBPNetExecParams* ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, AShooterPlayerController*, FName, const FBPNetExecParams*, bool, bool, bool>(this, "UPrimalItem.ServerSendItemExecCommandToPlayer(AShooterPlayerController*,FName,FBPNetExecParams&,bool,bool,bool)", ToPC, CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
    void ServerSendItemExecCommandToEveryone(FName CommandName, const FBPNetExecParams* ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, FName, const FBPNetExecParams*, bool, bool, bool>(this, "UPrimalItem.ServerSendItemExecCommandToEveryone(FName,FBPNetExecParams&,bool,bool,bool)", CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
    float HandleShieldDamageBlocking_Implementation(AShooterCharacter* ForShooterCharacter, float DamageIn, const FDamageEvent* DamageEvent) { return NativeCall<float, AShooterCharacter*, float, const FDamageEvent*>(this, "UPrimalItem.HandleShieldDamageBlocking_Implementation(AShooterCharacter*,float,FDamageEvent&,AController*,AActor*,UE::Math::TVector<double>)", ForShooterCharacter, DamageIn, DamageEvent); }
    TSubclassOf<AShooterProjectile>* BPOverrideProjectileType_Implementation(TSubclassOf<AShooterProjectile>* result) { return NativeCall<TSubclassOf<AShooterProjectile> *, TSubclassOf<AShooterProjectile>*>(this, "UPrimalItem.BPOverrideProjectileType_Implementation()", result); }
    void BeginDestroy() { NativeCall<void>(this, "UPrimalItem.BeginDestroy()"); }
    static TArray<FCustomItemData, TSizedDefaultAllocator<32> >* MergeCustomItemDatas(TArray<FCustomItemData, TSizedDefaultAllocator<32> >* result, const TArray<FCustomItemData, TSizedDefaultAllocator<32> >* DataSet1, const TArray<FCustomItemData, TSizedDefaultAllocator<32> >* DataSet2) { return NativeCall<TArray<FCustomItemData, TSizedDefaultAllocator<32> >*, TArray<FCustomItemData, TSizedDefaultAllocator<32> >*, const TArray<FCustomItemData, TSizedDefaultAllocator<32> >*, const TArray<FCustomItemData, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalItem.MergeCustomItemDatas(TArray<FCustomItemData,TSizedDefaultAllocator<32>>&,TArray<FCustomItemData,TSizedDefaultAllocator<32>>&)", result, DataSet1, DataSet2); }
    void OnVersionChange(bool* doDestroy, UWorld* World, AShooterGameMode* gameMode) { NativeCall<void, bool*, UWorld*, AShooterGameMode*>(this, "UPrimalItem.OnVersionChange(bool&,UWorld*,AShooterGameMode*)", doDestroy, World, gameMode); }
    void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalItem.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
    void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "UPrimalItem.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "UPrimalItem.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
    TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >* GetCraftingRequirements(TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >* result, TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >* CombinedRequirements, float Percent) { return NativeCall<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*, TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*, TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*, float>(this, "UPrimalItem.GetCraftingRequirements(TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>&,float)", result, CombinedRequirements, Percent); }
    static FString* MakeRepairingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp, TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >* InRepairingRequirements) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*, TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalItem.MakeRepairingRequirementsString(UPrimalInventoryComponent*,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>)", result, compareInventoryComp, InRepairingRequirements); }
    FString* GetDisplayStringForContextMenuItem(FString* result, const FName* ContextItem) { return NativeCall<FString*, FString*, const FName*>(this, "UPrimalItem.GetDisplayStringForContextMenuItem(FName&)", result, ContextItem); }
    bool PreemptiveRequestLoad() { return NativeCall<bool>(this, "UPrimalItem.PreemptiveRequestLoad()"); }
    FLinearColor* GetColorForItemColorIDFromDyeList(FLinearColor* result, int SetNum, int ID) { return NativeCall<FLinearColor*, FLinearColor*, int, int>(this, "UPrimalItem.GetColorForItemColorIDFromDyeList(int,int)", result, SetNum, ID); }
    const TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >* GetAllStructuresToBuild() { return NativeCall<const TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.GetAllStructuresToBuild()"); }
    void ConsumeCraftingResources(TArray<FCustomItemData, TSizedDefaultAllocator<32> >* ItemDataOutBuffer, float* ItemDurabilityUsed) { NativeCall<void, TArray<FCustomItemData, TSizedDefaultAllocator<32> >*, float*>(this, "UPrimalItem.ConsumeCraftingResources(TArray<FCustomItemData,TSizedDefaultAllocator<32>>*,float*)", ItemDataOutBuffer, ItemDurabilityUsed); }
    void ConsumeRepairingResources(float RepairPercent) { NativeCall<void, float>(this, "UPrimalItem.ConsumeRepairingResources(float)", RepairPercent); }

    inline bool HasCustomItemData(FName& CustomDataName)
    {
        for (auto& customItemData : this->CustomItemDatasField())
		{
			if (customItemData.CustomDataNameField().IsEqual(CustomDataName))
				return true;
		}

        return false;
    }
};

struct UPrimalInventoryComponent : UActorComponent
{
    // Fields

    TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >& RemoteViewingInventoryPlayerControllersField() { return *GetNativePointerField<TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.RemoteViewingInventoryPlayerControllers"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& InventoryItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.InventoryItems"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& EquippedItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.EquippedItems"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& ItemSlotsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemSlots"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& ArkTributeItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ArkTributeItems"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& AllDyeColorItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.AllDyeColorItems"); }
    TArray<FItemCraftQueueEntry, TSizedDefaultAllocator<32> >& ItemCraftQueueEntriesField() { return *GetNativePointerField<TArray<FItemCraftQueueEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemCraftQueueEntries"); }
    int& OverrideInventoryDefaultTabField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.OverrideInventoryDefaultTab"); }
    TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>, TSizedDefaultAllocator<32> >& EquippableItemTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalEquipmentType::Type>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.EquippableItemTypes"); }
    float& CraftingItemSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.CraftingItemSpeed"); }
    TArray<FItemMultiplier, TSizedDefaultAllocator<32> >& ItemSpoilingTimeMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemSpoilingTimeMultipliers"); }
    UGenericDataListEntry* ExtraItemDisplayField() { return *GetNativePointerField<UGenericDataListEntry**>(this, "UPrimalInventoryComponent.ExtraItemDisplay"); }
    int& MaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxInventoryItems"); }
    float& MaxInventoryWeightField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryWeight"); }
    int& AbsoluteMaxVanityItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.AbsoluteMaxVanityItems"); }
    int& NumVanityItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumVanityItems"); }
    int& NumSlotsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.NumSlots"); }
    int& MaxItemCraftQueueEntriesField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.MaxItemCraftQueueEntries"); }
    FString& RemoteInventoryDescriptionStringField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.RemoteInventoryDescriptionString"); }
    //TSubclassOf<UPrimalItem>& EngramRequirementClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalInventoryComponent.EngramRequirementClassOverride"); }
    //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& RemoteAddItemOnlyAllowItemClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.RemoteAddItemOnlyAllowItemClasses"); }
    //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& RemoteAddItemPreventItemClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.RemoteAddItemPreventItemClasses"); }
    TArray<FEventItem, TSizedDefaultAllocator<32> >& EventItemsField() { return *GetNativePointerField<TArray<FEventItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.EventItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultInventoryItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultInventoryItems2Field() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItems2"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultInventoryItems3Field() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItems3"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultInventoryItems4Field() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItems4"); }
    //TArray<//TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >& DefaultInventoryItemsClasses_DEPRECATEDField() { return *GetNativePointerField<//TArray<//TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsClasses_DEPRECATED"); }
    //TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& DefaultInventoryItemsClassesNewField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsClassesNew"); }
    //TArray<FString, TSizedDefaultAllocator<32> >& DefaultInventoryItemsRandomCustomStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStrings"); }
    //TArray<float, TSizedDefaultAllocator<32> >& DefaultInventoryItemsRandomCustomStringsWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryItemsRandomCustomStringsWeights"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& CheatInventoryItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.CheatInventoryItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultEquippedItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultEquippedItems"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultEquippedItemSkinsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultEquippedItemSkins"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultSlotItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultSlotItems"); }
    TArray<FItemSpawnActorClassOverride, TSizedDefaultAllocator<32> >& ItemSpawnActorClassOverridesField() { return *GetNativePointerField<TArray<FItemSpawnActorClassOverride, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemSpawnActorClassOverrides"); }
    //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& OnlyAllowCraftingItemClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.OnlyAllowCraftingItemClasses"); }
    TArray<unsigned char, TSizedDefaultAllocator<32> >& DefaultEngramsField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultEngrams"); }
    TArray<unsigned char, TSizedDefaultAllocator<32> >& DefaultEngrams2Field() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultEngrams2"); }
    TArray<unsigned char, TSizedDefaultAllocator<32> >& DefaultEngrams3Field() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultEngrams3"); }
    TArray<unsigned char, TSizedDefaultAllocator<32> >& DefaultEngrams4Field() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultEngrams4"); }
    TArray<float, TSizedDefaultAllocator<32> >& DefaultInventoryQualitiesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DefaultInventoryQualities"); }
    FString& InventoryNameOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.InventoryNameOverride"); }
    float& MaxRemoteInventoryViewingDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxRemoteInventoryViewingDistance"); }
    float& ActiveInventoryRefreshIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.ActiveInventoryRefreshInterval"); }
    int& StartingAbsoluteMaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.StartingAbsoluteMaxInventoryItems"); }
    int& AbsoluteMaxInventoryItemsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.AbsoluteMaxInventoryItems"); }
    int& SlotMaxMagicNumberField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.SlotMaxMagicNumber"); }
    int& CurrentSlotMaxMagicNumberField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.CurrentSlotMaxMagicNumber"); }
    long double& LastInventoryRefreshTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastInventoryRefreshTime"); }
    //TSubclassOf<ADroppedItem>& DroppedItemTemplateOverrideField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalInventoryComponent.DroppedItemTemplateOverride"); }
    //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ForceAllowItemStackingsField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ForceAllowItemStackings"); }
    UE::Math::TRotator<double>& DropItemRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalInventoryComponent.DropItemRotationOffset"); }
    TArray<FItemCraftingConsumptionReplenishment, TSizedDefaultAllocator<32> >& ItemCraftingConsumptionReplenishmentsField() { return *GetNativePointerField<TArray<FItemCraftingConsumptionReplenishment, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemCraftingConsumptionReplenishments"); }
    float& MaxItemCooldownTimeClearField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemCooldownTimeClear"); }
    TArray<FItemMultiplier, TSizedDefaultAllocator<32> >& MaxItemTemplateQuantitiesField() { return *GetNativePointerField<TArray<FItemMultiplier, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.MaxItemTemplateQuantities"); }
    USoundBase* ItemCraftingSoundOverrideField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.ItemCraftingSoundOverride"); }
    TArray<FActorClassAttachmentInfo, TSizedDefaultAllocator<32> >& WeaponAsEquipmentAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.WeaponAsEquipmentAttachmentInfos"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& CraftingItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.CraftingItems"); }
    int& DisplayDefaultItemInventoryCountField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DisplayDefaultItemInventoryCount"); }
    //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& LastUsedItemClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.LastUsedItemClasses"); }
    TArray<double, TSizedDefaultAllocator<32> >& LastUsedItemTimesField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.LastUsedItemTimes"); }
    int& InvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.InvUpdatedFrame"); }
    long double& LastRefreshCheckItemTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastRefreshCheckItemTime"); }
    FItemNetID& NextItemSpoilingIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalInventoryComponent.NextItemSpoilingID"); }
    FItemNetID& NextItemConsumptionIDField() { return *GetNativePointerField<FItemNetID*>(this, "UPrimalInventoryComponent.NextItemConsumptionID"); }
    float& MinItemSetsField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MinItemSets"); }
    float& MaxItemSetsField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxItemSets"); }
    float& NumItemSetsPowerField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.NumItemSetsPower"); }
    //_BYTE[6] & _padding_44aField() { return *GetNativePointerField<_BYTE[6] *>(this, "UPrimalInventoryComponent._padding_44a"); }
    TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >& ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemSets"); }
    TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >& AdditionalItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.AdditionalItemSets"); }
    //TSubclassOf<UPrimalSupplyCrateItemSets>& ItemSetsOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalSupplyCrateItemSets>*>(this, "UPrimalInventoryComponent.ItemSetsOverride"); }
    TArray<float, TSizedDefaultAllocator<32> >& SetQuantityWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.SetQuantityWeights"); }
    TArray<float, TSizedDefaultAllocator<32> >& SetQuantityValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.SetQuantityValues"); }
    USoundBase* ItemRemovedBySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.ItemRemovedBySound"); }
    USoundBase* OpenInventorySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.OpenInventorySound"); }
    USoundBase* CloseInventorySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.CloseInventorySound"); }
    float& MaxInventoryAccessDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.MaxInventoryAccessDistance"); }
    TArray<FServerCustomFolder, TSizedDefaultAllocator<32> >& CustomFolderItemsField() { return *GetNativePointerField<TArray<FServerCustomFolder, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.CustomFolderItems"); }
    TArray<FString, TSizedDefaultAllocator<32> >& ServerCustomFolderField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ServerCustomFolder"); }
    //TArray<//TSoftClassPtr<UPrimalInventoryComponent>, TSizedDefaultAllocator<32> >& ForceAllowCraftingForInventoryComponentsField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalInventoryComponent>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ForceAllowCraftingForInventoryComponents"); }
    TArray<FItemMultiplier, TSizedDefaultAllocator<32> >& ItemClassWeightMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ItemClassWeightMultipliers"); }
    float& GenerateItemSetsQualityMultiplierMinField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMin"); }
    float& GenerateItemSetsQualityMultiplierMaxField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.GenerateItemSetsQualityMultiplierMax"); }
    float& DefaultCraftingRequirementsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent.DefaultCraftingRequirementsMultiplier"); }
    int& DefaultCraftingQuantityMultiplierField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.DefaultCraftingQuantityMultiplier"); }
    int& ActionWheelAccessInventoryPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ActionWheelAccessInventoryPriority"); }
    int& SavedForceDefaultInventoryRefreshVersionField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.SavedForceDefaultInventoryRefreshVersion"); }
    int& ForceDefaultInventoryRefreshVersionField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.ForceDefaultInventoryRefreshVersion"); }
    //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& TamedDinoForceConsiderFoodTypesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.TamedDinoForceConsiderFoodTypes"); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& DinoAutoHealingItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.DinoAutoHealingItems"); }
    USoundBase* OverrideCraftingFinishedSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalInventoryComponent.OverrideCraftingFinishedSound"); }
    long double& LastAddToCraftQueueSoundTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastAddToCraftQueueSoundTime"); }
    FString& ForceAddToFolderField() { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent.ForceAddToFolder"); }
    UE::Math::TVector<double>& GroundDropTraceLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalInventoryComponent.GroundDropTraceLocationOffset"); }
    FInventoryItemAdded& OnInventoryItemAddedField() { return *GetNativePointerField<FInventoryItemAdded*>(this, "UPrimalInventoryComponent.OnInventoryItemAdded"); }
    FInventoryItemRemoved& OnInventoryItemRemovedField() { return *GetNativePointerField<FInventoryItemRemoved*>(this, "UPrimalInventoryComponent.OnInventoryItemRemoved"); }
    //_BYTE[7] & _padding_591Field() { return *GetNativePointerField<_BYTE[7] *>(this, "UPrimalInventoryComponent._padding_591"); }
    //TArray<FOverrideMultiuseButtonStyle, TSizedDefaultAllocator<32> >& MultiUseButtonStyleOverridesField() { return *GetNativePointerField<TArray<FOverrideMultiuseButtonStyle, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.MultiUseButtonStyleOverrides"); }
    bool& bForceAllowCustomFoldersField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent.bForceAllowCustomFolders"); }
    long double& LastCraftRequestTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastCraftRequestTime"); }
    int& FreeCraftingModeQuantityValueField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.FreeCraftingModeQuantityValue"); }
    //_BYTE[3] & _padding_5bdField() { return *GetNativePointerField<_BYTE[3] *>(this, "UPrimalInventoryComponent._padding_5bd"); }
    UE::Math::TVector<double>& LastWirelessCraftingCheckLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalInventoryComponent.LastWirelessCraftingCheckLoc"); }
    //TArray<UPrimalWirelessExchangeData*, TSizedDefaultAllocator<32> >& WirelessExchangesField() { return *GetNativePointerField<TArray<UPrimalWirelessExchangeData*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.WirelessExchanges"); }
    //TMap<TWeakObjectPtr<UClass>, FWirelessResourceData, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass>, FWirelessResourceData, 0> >& WirelessResourceMapField() { return *GetNativePointerField<TMap<TWeakObjectPtr<UClass>, FWirelessResourceData, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass>, FWirelessResourceData, 0> >*>(this, "UPrimalInventoryComponent.WirelessResourceMap"); }
    long double& LastWirelessUpdateTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalInventoryComponent.LastWirelessUpdateTime"); }
    int& LastWirelessUpdateFrameField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent.LastWirelessUpdateFrame"); }
    TObjectPtr<UTexture2D>& AccessInventoryIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UPrimalInventoryComponent.AccessInventoryIcon"); }
    TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >& TribeInventoryAccessRankSelectionIconsField() { return *GetNativePointerField<TArray<TObjectPtr<UTexture2D>, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.TribeInventoryAccessRankSelectionIcons"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bInitializedMe() { return { this, "UPrimalInventoryComponent.bInitializedMe" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingEquippedItems() { return { this, "UPrimalInventoryComponent.bReceivingEquippedItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingInventoryItems() { return { this, "UPrimalInventoryComponent.bReceivingInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingArkInventoryItems() { return { this, "UPrimalInventoryComponent.bReceivingArkInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bFreeCraftingMode() { return { this, "UPrimalInventoryComponent.bFreeCraftingMode" }; }
    BitFieldValue<bool, unsigned __int32> bCanEquipItems() { return { this, "UPrimalInventoryComponent.bCanEquipItems" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseWeaponAsEquipment() { return { this, "UPrimalInventoryComponent.bCanUseWeaponAsEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bCanInventoryItems() { return { this, "UPrimalInventoryComponent.bCanInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeCraftingRepairingRequirementsOnStart() { return { this, "UPrimalInventoryComponent.bConsumeCraftingRepairingRequirementsOnStart" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteCrafting() { return { this, "UPrimalInventoryComponent.bAllowRemoteCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDeactivatedCrafting() { return { this, "UPrimalInventoryComponent.bAllowDeactivatedCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAutoDecreaseDurability() { return { this, "UPrimalInventoryComponent.bPreventAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteRepairing() { return { this, "UPrimalInventoryComponent.bAllowRemoteRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowItemStacking() { return { this, "UPrimalInventoryComponent.bAllowItemStacking" }; }
    BitFieldValue<bool, unsigned __int32> bUseCraftQueue() { return { this, "UPrimalInventoryComponent.bUseCraftQueue" }; }
    BitFieldValue<bool, unsigned __int32> bShowHiddenRemoteInventoryItems() { return { this, "UPrimalInventoryComponent.bShowHiddenRemoteInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryBlueprints() { return { this, "UPrimalInventoryComponent.bForceInventoryBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryNonRemovable() { return { this, "UPrimalInventoryComponent.bForceInventoryNonRemovable" }; }
    BitFieldValue<bool, unsigned __int32> bHideDefaultInventoryItemsFromDisplay() { return { this, "UPrimalInventoryComponent.bHideDefaultInventoryItemsFromDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bDataListPadMaxInventoryItems() { return { this, "UPrimalInventoryComponent.bDataListPadMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bAddMaxInventoryItemsToDefaultItems() { return { this, "UPrimalInventoryComponent.bAddMaxInventoryItemsToDefaultItems" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForAutoCraftBlueprints() { return { this, "UPrimalInventoryComponent.bCheckForAutoCraftBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bIsTributeInventory() { return { this, "UPrimalInventoryComponent.bIsTributeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentMustRequireExplicitOwnerClass() { return { this, "UPrimalInventoryComponent.bEquipmentMustRequireExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentPlayerForceRequireExplicitOwnerClass() { return { this, "UPrimalInventoryComponent.bEquipmentPlayerForceRequireExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceIgnoreExplicitOwnerClass() { return { this, "UPrimalInventoryComponent.bEquipmentForceIgnoreExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryRefresh() { return { this, "UPrimalInventoryComponent.bUseBPInventoryRefresh" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeInventory() { return { this, "UPrimalInventoryComponent.bUseBPInitializeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowAddInventoryItem() { return { this, "UPrimalInventoryComponent.bUseBPAllowAddInventoryItem" }; }
    BitFieldValue<bool, unsigned __int32> bHideSaddleFromInventoryDisplay() { return { this, "UPrimalInventoryComponent.bHideSaddleFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingEnabled() { return { this, "UPrimalInventoryComponent.bCraftingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bRepairingEnabled() { return { this, "UPrimalInventoryComponent.bRepairingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateComponent() { return { this, "UPrimalInventoryComponent.bReplicateComponent" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOneCraftQueueItem() { return { this, "UPrimalInventoryComponent.bOnlyOneCraftQueueItem" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowTribe() { return { this, "UPrimalInventoryComponent.bRemoteInventoryOnlyAllowTribe" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCraftingMinDurabilityRequirement() { return { this, "UPrimalInventoryComponent.bOverrideCraftingMinDurabilityRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowRemoveItems() { return { this, "UPrimalInventoryComponent.bRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowAddItems() { return { this, "UPrimalInventoryComponent.bRemoteInventoryAllowAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteInventory() { return { this, "UPrimalInventoryComponent.bAllowRemoteInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseCheatInventory() { return { this, "UPrimalInventoryComponent.bUseCheatInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAddingToArkTribute() { return { this, "UPrimalInventoryComponent.bAllowAddingToArkTribute" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowSelf() { return { this, "UPrimalInventoryComponent.bRemoteInventoryOnlyAllowSelf" }; }
    BitFieldValue<bool, unsigned __int32> bMaxInventoryWeightUseCharacterStatus() { return { this, "UPrimalInventoryComponent.bMaxInventoryWeightUseCharacterStatus" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDropInventoryDeposit() { return { this, "UPrimalInventoryComponent.bPreventDropInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bShowItemDefaultFolders() { return { this, "UPrimalInventoryComponent.bShowItemDefaultFolders" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDropAllItems() { return { this, "UPrimalInventoryComponent.bDisableDropAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxInventoryItems() { return { this, "UPrimalInventoryComponent.bIgnoreMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsSecondaryInventory() { return { this, "UPrimalInventoryComponent.bIsSecondaryInventory" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteOnlyAllowBlueprintsOrItemClasses() { return { this, "UPrimalInventoryComponent.bRemoteOnlyAllowBlueprintsOrItemClasses" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSendingData() { return { this, "UPrimalInventoryComponent.bPreventSendingData" }; }
    BitFieldValue<bool, unsigned __int32> bSupressInventoryItemNetworking() { return { this, "UPrimalInventoryComponent.bSupressInventoryItemNetworking" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryViewTrace() { return { this, "UPrimalInventoryComponent.bPreventInventoryViewTrace" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnActorOnTopOfStructure() { return { this, "UPrimalInventoryComponent.bSpawnActorOnTopOfStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDropPhysicalInventoryDeposit() { return { this, "UPrimalInventoryComponent.bDropPhysicalInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bUseExtendedCharacterCraftingFunctionality() { return { this, "UPrimalInventoryComponent.bUseExtendedCharacterCraftingFunctionality" }; }
    BitFieldValue<bool, unsigned __int32> bForceGenerateItemSets() { return { this, "UPrimalInventoryComponent.bForceGenerateItemSets" }; }
    BitFieldValue<bool, unsigned __int32> bBPHandleAccessInventory() { return { this, "UPrimalInventoryComponent.bBPHandleAccessInventory" }; }
    BitFieldValue<bool, unsigned __int32> bGivesAchievementItems() { return { this, "UPrimalInventoryComponent.bGivesAchievementItems" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowUseInInventory() { return { this, "UPrimalInventoryComponent.bBPAllowUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPRemoteInventoryAllowRemoveItems() { return { this, "UPrimalInventoryComponent.bBPRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryGetMaxVisibleSlots() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryGetMaxVisibleSlots" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraItemDisplay() { return { this, "UPrimalInventoryComponent.bUseBPGetExtraItemDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemAdded() { return { this, "UPrimalInventoryComponent.bBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemRemoved() { return { this, "UPrimalInventoryComponent.bBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemQuantityUpdated() { return { this, "UPrimalInventoryComponent.bBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideItemMinimumUseInterval() { return { this, "UPrimalInventoryComponent.bBPOverrideItemMinimumUseInterval" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowAddItems() { return { this, "UPrimalInventoryComponent.bBPForceCustomRemoteInventoryAllowAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowRemoveItems() { return { this, "UPrimalInventoryComponent.bBPForceCustomRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryNotifyCraftingFinished() { return { this, "UPrimalInventoryComponent.bForceInventoryNotifyCraftingFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWorldSettingsInventoryComponentAppends() { return { this, "UPrimalInventoryComponent.bAllowWorldSettingsInventoryComponentAppends" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceConsumption() { return { this, "UPrimalInventoryComponent.bPreventCraftingResourceConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryDepositClassDontForceDrop() { return { this, "UPrimalInventoryComponent.bOverrideInventoryDepositClassDontForceDrop" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCraftingAllowed() { return { this, "UPrimalInventoryComponent.bUseBPIsCraftingAllowed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowCrafting() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyAddedOnClientReceive() { return { this, "UPrimalInventoryComponent.bNotifyAddedOnClientReceive" }; }
    BitFieldValue<bool, unsigned __int32> bIsTaxidermyBase() { return { this, "UPrimalInventoryComponent.bIsTaxidermyBase" }; }
    BitFieldValue<bool, unsigned __int32> bDeferCheckForAutoCraftBlueprintsOnInventoryChange() { return { this, "UPrimalInventoryComponent.bDeferCheckForAutoCraftBlueprintsOnInventoryChange" }; }
    BitFieldValue<bool, unsigned __int32> bShowQuickSlotPanel() { return { this, "UPrimalInventoryComponent.bShowQuickSlotPanel" }; }
    BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement() { return { this, "UPrimalInventoryComponent.bSetsRandomWithoutReplacement" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAllUseInInventory() { return { this, "UPrimalInventoryComponent.bForceAllowAllUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidCraftingResource() { return { this, "UPrimalInventoryComponent.bUseBPIsValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bUseParentStructureIsValidCraftingResource() { return { this, "UPrimalInventoryComponent.bUseParentStructureIsValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bSetCraftingEnabledCheckForAutoCraftBlueprints() { return { this, "UPrimalInventoryComponent.bSetCraftingEnabledCheckForAutoCraftBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowViewing() { return { this, "UPrimalInventoryComponent.bUseBPRemoteInventoryAllowViewing" }; }
    BitFieldValue<bool, unsigned __int32> bAllDefaultInventoryIsEngrams() { return { this, "UPrimalInventoryComponent.bAllDefaultInventoryIsEngrams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanGrindItems() { return { this, "UPrimalInventoryComponent.bUseBPCanGrindItems" }; }
    BitFieldValue<bool, unsigned __int32> bGrinderCanGrindAll() { return { this, "UPrimalInventoryComponent.bGrinderCanGrindAll" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedDefaultInventory() { return { this, "UPrimalInventoryComponent.bInitializedDefaultInventory" }; }
    BitFieldValue<bool, unsigned __int32> bGetDataListEntriesOnlyRootItems() { return { this, "UPrimalInventoryComponent.bGetDataListEntriesOnlyRootItems" }; }
    BitFieldValue<bool, unsigned __int32> bConfigOverriden() { return { this, "UPrimalInventoryComponent.bConfigOverriden" }; }
    BitFieldValue<bool, unsigned __int32> bHideTributeUploadDinosPanel() { return { this, "UPrimalInventoryComponent.bHideTributeUploadDinosPanel" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDLCEquipRestrictions() { return { this, "UPrimalInventoryComponent.bIgnoreDLCEquipRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreEngramEquipRestrictions() { return { this, "UPrimalInventoryComponent.bIgnoreEngramEquipRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTransferAll() { return { this, "UPrimalInventoryComponent.bUseBPOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTransferEquipmentOnTransferAll() { return { this, "UPrimalInventoryComponent.bDisableTransferEquipmentOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bShowHiddenDefaultInventoryItemsDuringCrafting() { return { this, "UPrimalInventoryComponent.bShowHiddenDefaultInventoryItemsDuringCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemCountInsteadOfInventory() { return { this, "UPrimalInventoryComponent.bUseItemCountInsteadOfInventory" }; }
    BitFieldValue<bool, unsigned __int32> bHideSlotCountFromHud() { return { this, "UPrimalInventoryComponent.bHideSlotCountFromHud" }; }
    BitFieldValue<bool, unsigned __int32> bNotNearWirelessCrafting() { return { this, "UPrimalInventoryComponent.bNotNearWirelessCrafting" }; }

    // Functions

    bool BPAllowAddInventoryItem(UPrimalItem* Item, int RequestedQuantity, bool bOnlyAddAll) { return NativeCall<bool, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent.BPAllowAddInventoryItem(UPrimalItem*,int,bool)", Item, RequestedQuantity, bOnlyAddAll); }
    bool BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController* PC, UPrimalItem* anItem, int anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowAddItems(AShooterPlayerController*,UPrimalItem*,int,bool)", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
    bool BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController* PC, UPrimalItem* anItemToTransfer, int requestedQuantity, bool bRequestedByPlayer, bool bRequestDropping) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int, bool, bool>(this, "UPrimalInventoryComponent.BPCustomRemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalItem*,int,bool,bool)", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer, bRequestDropping); }
    bool BPRemoteInventoryAllowCrafting(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPRemoteInventoryAllowCrafting(AShooterPlayerController*)", PC); }
    void BPRequestedInventoryItems(AShooterPlayerController* forPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.BPRequestedInventoryItems(AShooterPlayerController*)", forPC); }
    bool CanGrindItems(const AShooterPlayerController* PC) { return NativeCall<bool, const AShooterPlayerController*>(this, "UPrimalInventoryComponent.CanGrindItems(AShooterPlayerController*)", PC); }
    void ClientItemMessageNotification(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification(FItemNetID,EPrimalItemMessage::Type)", ItemID, ItemMessageType); }
    void ClientUpdateFreeCraftingMode(bool bNewFreeCraftingModeValue) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode(bool)", bNewFreeCraftingModeValue); }
    bool GetForceShowCraftablesInventoryTab() { return NativeCall<bool>(this, "UPrimalInventoryComponent.GetForceShowCraftablesInventoryTab()"); }
    void ServerAddItemToSlot(FItemNetID ItemID, int SlotIndex, bool bSuppressSound) { NativeCall<void, FItemNetID, int, bool>(this, "UPrimalInventoryComponent.ServerAddItemToSlot(FItemNetID,int,bool)", ItemID, SlotIndex, bSuppressSound); }
    void ServerForceMergeItemStack(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack(FItemNetID,FItemNetID)", Item1ID, Item2ID); }
    void ServerMakeRecipeItem(APrimalStructureItemContainer* Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, const FString* CustomName, const FString* CustomDescription, const TArray<FColor, TSizedDefaultAllocator<32> >* CustomColors, const TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >* CustomRequirements) { NativeCall<void, APrimalStructureItemContainer*, FItemNetID, TSubclassOf<UPrimalItem>, const FString*, const FString*, const TArray<FColor, TSizedDefaultAllocator<32> >*, const TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem(APrimalStructureItemContainer*,FItemNetID,TSubclassOf<UPrimalItem>,FString&,FString&,TArray<FColor,TSizedDefaultAllocator<32>>*,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>*)", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
    void ServerRemoveItemFromSlot(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot(FItemNetID)", ItemID); }
    void ServerSplitItemStack(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack(FItemNetID,int)", ItemID, AmountToSplit); }
    void UpdateTribeGroupInventoryRank(unsigned __int8 NewRank) { NativeCall<void, unsigned __int8>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank(unsigned__int8)", NewRank); }
    static void StaticRegisterNativesUPrimalInventoryComponent() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.StaticRegisterNativesUPrimalInventoryComponent()"); }
    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalInventoryComponent.GetPrivateStaticClass()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>*)", ClassReps); }
    //void ~UPrimalInventoryComponent() { NativeCall<void>(this, "UPrimalInventoryComponent.~UPrimalInventoryComponent()"); }
    void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPrimalInventoryComponent.Serialize(FStructuredArchiveRecord)", Record); }
    //void UPrimalInventoryComponent(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UPrimalInventoryComponent.UPrimalInventoryComponent(FObjectInitializer*)", ObjectInitializer); }
    void OnRegister() { NativeCall<void>(this, "UPrimalInventoryComponent.OnRegister()"); }
    bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.AllowEquippingItemType(EPrimalEquipmentType::Type)", equipmentType); }
    bool CanEquipItem(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.CanEquipItem(UPrimalItem*)", anItem); }
    bool CanInventoryItem(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.CanInventoryItem(UPrimalItem*)", anItem); }
    bool CheckFullInventoryConditionForItem(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.CheckFullInventoryConditionForItem(UPrimalItem*)", anItem); }
    bool AllowAddInventoryItem(UPrimalItem* anItem, int* requestedQuantity, bool OnlyAddAll) { return NativeCall<bool, UPrimalItem*, int*, bool>(this, "UPrimalInventoryComponent.AllowAddInventoryItem(UPrimalItem*,int*,bool)", anItem, requestedQuantity, OnlyAddAll); }
    UPrimalItem* AddItem(const FItemNetInfo& theItemInfo, bool bEquipItem, bool bAddToSlot, bool bDontStack, FItemNetID* InventoryInsertAfterItemID, bool bShowHUDNotification, bool bDontRecalcSpoilingTime, bool bForceIncompleteStacking, AShooterCharacter* OwnerPlayer, bool bIgnoreAbsoluteMaxInventory, bool bInsertAtItemIDIndexInstead, bool doVersionCheck) { return NativeCall<UPrimalItem*, const FItemNetInfo&, bool, bool, bool, FItemNetID*, bool, bool, bool, AShooterCharacter*, bool, bool, bool>(this, "UPrimalInventoryComponent.AddItem(FItemNetInfo&,bool,bool,bool,FItemNetID*,bool,bool,bool,AShooterCharacter*,bool,bool,bool)", theItemInfo, bEquipItem, bAddToSlot, bDontStack, InventoryInsertAfterItemID, bShowHUDNotification, bDontRecalcSpoilingTime, bForceIncompleteStacking, OwnerPlayer, bIgnoreAbsoluteMaxInventory, bInsertAtItemIDIndexInstead, doVersionCheck); }
    void NotifyItemAdded(UPrimalItem* theItem, bool bEquippedItem) { NativeCall<void, UPrimalItem*, bool>(this, "UPrimalInventoryComponent.NotifyItemAdded(UPrimalItem*,bool)", theItem, bEquippedItem); }
    void UpdateSlotMagicNumber() { NativeCall<void>(this, "UPrimalInventoryComponent.UpdateSlotMagicNumber()"); }
    void NotifyItemRemoved(UPrimalItem* theItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.NotifyItemRemoved(UPrimalItem*)", theItem); }
    void RemoveItemSpoilingTimer(UPrimalItem* theItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.RemoveItemSpoilingTimer(UPrimalItem*)", theItem); }
    bool LoadAdditionalStructureEngrams() { return NativeCall<bool>(this, "UPrimalInventoryComponent.LoadAdditionalStructureEngrams()"); }
    bool RemoveItem(const FItemNetID* itemID, bool bDoDrop, bool bSecondryAction, bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, const FItemNetID*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.RemoveItem(FItemNetID&,bool,bool,bool,bool)", itemID, bDoDrop, bSecondryAction, bForceRemoval, showHUDMessage); }
    ADroppedItem* EjectItem(const FItemNetID* itemID, bool bPreventImpule, bool bForceEject, bool bSetItemLocation, const UE::Math::TVector<double>* LocationOverride, bool showHUDMessage, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, bool bAssignToTribeForPickup, int AssignedTribeID) { return NativeCall<ADroppedItem*, const FItemNetID*, bool, bool, bool, const UE::Math::TVector<double>*, bool, TSubclassOf<ADroppedItem>, bool, int>(this, "UPrimalInventoryComponent.EjectItem(FItemNetID*,bool,bool,bool,UE::Math::TVector<double>*,bool,TSubclassOf<ADroppedItem>,bool,int)", itemID, bPreventImpule, bForceEject, bSetItemLocation, LocationOverride, showHUDMessage, TheDroppedTemplateOverride, bAssignToTribeForPickup, AssignedTribeID); }
    bool ServerEquipItem(FItemNetID& itemID) { return NativeCall<bool, FItemNetID&>(this, "UPrimalInventoryComponent.ServerEquipItem(FItemNetID&)", itemID); }
    void DropItem(const FItemNetInfo* theInfo, bool bOverrideSpawnTransform, const UE::Math::TVector<double>* LocationOverride, const UE::Math::TRotator<double>* RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation) { NativeCall<void, const FItemNetInfo*, bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.DropItem(FItemNetInfo*,bool,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,bool,bool,bool,bool)", theInfo, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation); }
    static ADroppedItem* StaticDropNewItem() { return NativeCall<ADroppedItem*>(nullptr, "UPrimalInventoryComponent.StaticDropNewItem()"); }
    static ADroppedItem* StaticDropItem(AActor* forActor, const FItemNetInfo* theInfo, TSubclassOf<ADroppedItem> TheDroppedTemplateOverride, const UE::Math::TRotator<double>* DroppedRotationOffset, bool bOverrideSpawnTransform, const UE::Math::TVector<double>* LocationOverride, const UE::Math::TRotator<double>* RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondryAction, bool bSetItemDropLocation, UStaticMesh* DroppedMeshOverride, const UE::Math::TVector<double>* DroppedScaleOverride, UMaterialInterface* DroppedMaterialOverride, float DroppedLifeSpanOverride) { return NativeCall<ADroppedItem*, AActor*, const FItemNetInfo*, TSubclassOf<ADroppedItem>, const UE::Math::TRotator<double>*, bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool, bool, bool, UStaticMesh*, const UE::Math::TVector<double>*, UMaterialInterface*, float>(nullptr, "UPrimalInventoryComponent.StaticDropItem(AActor*,FItemNetInfo&,TSubclassOf<ADroppedItem>,UE::Math::TRotator<double>&,bool,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool,bool,bool,UStaticMesh*,UE::Math::TVector<double>&,UMaterialInterface*,float)", forActor, theInfo, TheDroppedTemplateOverride, DroppedRotationOffset, bOverrideSpawnTransform, LocationOverride, RotationOverride, bPreventDropImpulse, bThrow, bSecondryAction, bSetItemDropLocation, DroppedMeshOverride, DroppedScaleOverride, DroppedMaterialOverride, DroppedLifeSpanOverride); }
    AShooterPlayerController* GetOwnerController() { return NativeCall<AShooterPlayerController*>(this, "UPrimalInventoryComponent.GetOwnerController()"); }
    void InventoryViewersPlayLocalSound(USoundBase* aSound, bool bAttach) { NativeCall<void, USoundBase*, bool>(this, "UPrimalInventoryComponent.InventoryViewersPlayLocalSound(USoundBase*,bool)", aSound, bAttach); }
    void InventoryViewersStopLocalSound(USoundBase* aSound) { NativeCall<void, USoundBase*>(this, "UPrimalInventoryComponent.InventoryViewersStopLocalSound(USoundBase*)", aSound); }
    void UpdateNetWeaponClipAmmo(UPrimalItem* anItem, int ammo) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalInventoryComponent.UpdateNetWeaponClipAmmo(UPrimalItem*,int)", anItem, ammo); }
    void NotifyClientsItemStatus(UPrimalItem* anItem, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, UPrimalItem* anItem2, FItemNetID* InventoryInsertAfterItemID, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalItem*, bool, bool, bool, bool, bool, UPrimalItem*, FItemNetID*, bool, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientsItemStatus(UPrimalItem*,bool,bool,bool,bool,bool,UPrimalItem*,FItemNetID*,bool,bool,bool)", anItem, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, anItem2, InventoryInsertAfterItemID, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
    void NotifyClientItemArkTributeStatusChanged(UPrimalItem* anItem, bool bRemoved, bool bFromLoad) { NativeCall<void, UPrimalItem*, bool, bool>(this, "UPrimalInventoryComponent.NotifyClientItemArkTributeStatusChanged(UPrimalItem*,bool,bool)", anItem, bRemoved, bFromLoad); }
    void ServerRequestItems(AShooterPlayerController* forPC, bool bEquippedItems, bool bIsFirstSpawn) { NativeCall<void, AShooterPlayerController*, bool, bool>(this, "UPrimalInventoryComponent.ServerRequestItems(AShooterPlayerController*,bool,bool)", forPC, bEquippedItems, bIsFirstSpawn); }
    void ClientStartReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientStartReceivingItems(bool)", bEquippedItems); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* FindColorItem(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result, FColor theColor, bool bEquippedItems) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, FColor, bool>(this, "UPrimalInventoryComponent.FindColorItem(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>*,FColor,bool)", result, theColor, bEquippedItems); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* FindBrushColorItem(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result, __int16 ArchIndex) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, __int16>(this, "UPrimalInventoryComponent.FindBrushColorItem(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>*,__int16)", result, ArchIndex); }
    UPrimalItem* FindItem(const FItemNetID* ItemID, bool bEquippedItems, bool bAllItems, int* itemIdx) { return NativeCall<UPrimalItem*, const FItemNetID*, bool, bool, int*>(this, "UPrimalInventoryComponent.FindItem(FItemNetID&,bool,bool,int*)", ItemID, bEquippedItems, bAllItems, itemIdx); }
    void GiveInitialItems(bool SkipEngrams) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.GiveInitialItems(bool)", SkipEngrams); }
    void InitDefaultInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitDefaultInventory()"); }
    void InitializeInventory() { NativeCall<void>(this, "UPrimalInventoryComponent.InitializeInventory()"); }
    void CheckRefreshDefaultInventoryItems() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckRefreshDefaultInventoryItems()"); }
    void SetFirstPersonMasterPoseComponent(USkeletalMeshComponent* WeaponComp) { NativeCall<void, USkeletalMeshComponent*>(this, "UPrimalInventoryComponent.SetFirstPersonMasterPoseComponent(USkeletalMeshComponent*)", WeaponComp); }
    void SetEquippedItemsOwnerNoSee(bool bNewOwnerNoSee, bool bForceHideFirstPerson) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.SetEquippedItemsOwnerNoSee(bool,bool)", bNewOwnerNoSee, bForceHideFirstPerson); }
    bool RemoteInventoryAllowViewing(AShooterPlayerController* PC, float MaxAllowedDistanceOffset) { return NativeCall<bool, AShooterPlayerController*, float>(this, "UPrimalInventoryComponent.RemoteInventoryAllowViewing(AShooterPlayerController*,float)", PC, MaxAllowedDistanceOffset); }
    bool RemoteInventoryAllowAddItems(AShooterPlayerController* PC, UPrimalItem* anItem, int* anItemQuantityOverride, bool bRequestedByPlayer) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowAddItems(AShooterPlayerController*,UPrimalItem*,int*,bool)", PC, anItem, anItemQuantityOverride, bRequestedByPlayer); }
    bool RemoteInventoryAllowRemoveItems(AShooterPlayerController* PC, UPrimalItem* anItemToTransfer, int* requestedQuantity, bool bRequestedByPlayer, bool bRequestDropping) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int*, bool, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRemoveItems(AShooterPlayerController*,UPrimalItem*,int*,bool,bool)", PC, anItemToTransfer, requestedQuantity, bRequestedByPlayer, bRequestDropping); }
    bool RemoteInventoryAllowCraftingItems(AShooterPlayerController* PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowCraftingItems(AShooterPlayerController*,bool)", PC, bIgnoreEnabled); }
    bool RemoteInventoryAllowRepairingItems(AShooterPlayerController* PC, bool bIgnoreEnabled) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "UPrimalInventoryComponent.RemoteInventoryAllowRepairingItems(AShooterPlayerController*,bool)", PC, bIgnoreEnabled); }
    void ServerViewRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerViewRemoteInventory(AShooterPlayerController*)", ByPC); }
    void ServerCloseRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerCloseRemoteInventory(AShooterPlayerController*)", ByPC); }
    void ClientUpdateFreeCraftingMode_Implementation(bool bNewVal) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClientUpdateFreeCraftingMode_Implementation(bool)", bNewVal); }
    void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
    static void GetCustomFolderItems() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.GetCustomFolderItems()"); }
    static void SwapCustomFolder() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.SwapCustomFolder()"); }
    bool AddToFolders(TArray<FString, TSizedDefaultAllocator<32> >* FoldersFound, UPrimalItem* anItem) { return NativeCall<bool, TArray<FString, TSizedDefaultAllocator<32> >*, UPrimalItem*>(this, "UPrimalInventoryComponent.AddToFolders(TArray<FString,TSizedDefaultAllocator<32>>*,UPrimalItem*)", FoldersFound, anItem); }
    void GetDataListEntries(TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >* OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString, TSizedDefaultAllocator<32> >* FoldersFound, UObject* ForObject, const wchar_t* CustomFolderFilter, char SortType, const wchar_t* NameFilter, bool includeSkins, bool onlySkins, bool bSkinSelectorMode) { NativeCall<void, TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >*, int, bool, char, TArray<FString, TSizedDefaultAllocator<32> >*, UObject*, const wchar_t*, char, const wchar_t*, bool, bool, bool>(this, "UPrimalInventoryComponent.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>*,int,bool,char,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,char,wchar_t*,bool,bool,bool)", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter, includeSkins, onlySkins, bSkinSelectorMode); }
    FString* GetInventoryName(FString* result, bool bIsEquipped, bool shortDesc) { return NativeCall<FString*, FString*, bool, bool>(this, "UPrimalInventoryComponent.GetInventoryName(FString&,bool,bool)", result, bIsEquipped, shortDesc); }
    int GetFirstUnoccupiedSlot(AShooterPlayerState* forPlayerState, UPrimalItem* forItem) { return NativeCall<int, AShooterPlayerState*, UPrimalItem*>(this, "UPrimalInventoryComponent.GetFirstUnoccupiedSlot(AShooterPlayerState*,UPrimalItem*)", forPlayerState, forItem); }
    void ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer* Container, FItemNetID NoteToConsume, TSubclassOf<UPrimalItem> RecipeItemTemplate, const FString* CustomName, const FString* CustomDescription, const TArray<FColor, TSizedDefaultAllocator<32> >* CustomColors, const TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >* CustomRequirements) { NativeCall<void, APrimalStructureItemContainer*, FItemNetID, TSubclassOf<UPrimalItem>, const FString*, const FString*, const TArray<FColor, TSizedDefaultAllocator<32> >*, const TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.ServerMakeRecipeItem_Implementation(APrimalStructureItemContainer*,FItemNetID,TSubclassOf<UPrimalItem>,FString&,FString&,TArray<FColor,TSizedDefaultAllocator<32>>*,TArray<FCraftingResourceRequirement,TSizedDefaultAllocator<32>>*)", Container, NoteToConsume, RecipeItemTemplate, CustomName, CustomDescription, CustomColors, CustomRequirements); }
    void ServerRemoveItemFromSlot_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerRemoveItemFromSlot_Implementation(FItemNetID)", ItemID); }
    void ServerAddItemToSlot_Implementation(FItemNetID ItemID, int SlotIndex, bool bSuppressSound) { NativeCall<void, FItemNetID, int, bool>(this, "UPrimalInventoryComponent.ServerAddItemToSlot_Implementation(FItemNetID,int,bool)", ItemID, SlotIndex, bSuppressSound); }
    UPrimalItem* GetEquippedItemOfType(EPrimalEquipmentType::Type aType) { return NativeCall<UPrimalItem*, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedItemOfType(EPrimalEquipmentType::Type)", aType); }
    int IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, UPrimalItem** UseSpecificItem, UPrimalItem** IncrementedItem, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool ShowHUDNotification, bool bDontRecalcSpoilingTime, bool bDontExceedMaxItems) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool, bool, UPrimalItem**, UPrimalItem**, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.IncrementItemTemplateQuantity(TSubclassOf<UPrimalItem>,int,bool,bool,UPrimalItem**,UPrimalItem**,bool,bool,bool,bool,bool,bool,bool)", ItemTemplate, amount, bReplicateToClient, bIsBlueprint, UseSpecificItem, IncrementedItem, bRequireExactClassMatch, bIsCraftingResourceConsumption, bIsFromUseConsumption, bIsArkTributeItem, ShowHUDNotification, bDontRecalcSpoilingTime, bDontExceedMaxItems); }
    bool IncrementArkTributeItemQuantity(UPrimalItem* NewItem, UPrimalItem** IncrementedItem) { return NativeCall<bool, UPrimalItem*, UPrimalItem**>(this, "UPrimalInventoryComponent.IncrementArkTributeItemQuantity(UPrimalItem*,UPrimalItem**)", NewItem, IncrementedItem); }
    UPrimalItem* GetItemOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, UPrimalItem* CheckCanStackWithItem, bool bRequiresExactClassMatch, int* CheckCanStackWithItemQuantityOverride, bool bIgnoreSlotItems, bool bOnlyArkTributeItems, bool bPreferEngram, bool bIsForCraftingConsumption) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, UPrimalItem*, bool, int*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemOfTemplate(TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,UPrimalItem*,bool,int*,bool,bool,bool,bool)", ItemTemplate, bOnlyInventoryItems, bOnlyEquippedItems, IgnoreItemsWithFullQuantity, bFavorSlotItems, bIsBlueprint, CheckCanStackWithItem, bRequiresExactClassMatch, CheckCanStackWithItemQuantityOverride, bIgnoreSlotItems, bOnlyArkTributeItems, bPreferEngram, bIsForCraftingConsumption); }
    TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* FindAllItemsOfType(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result, TSubclassOf<UPrimalItem> ItemTemplate, bool bRequiresExactClassMatch, bool bIncludeInventoryItems, bool bIncludeEquippedItems, bool bIncludeArkTributeItems, bool bIncludeSlotItems, bool bIncludeBlueprints, bool bIncludeEngrams) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TSubclassOf<UPrimalItem>, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.FindAllItemsOfType(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>*,TSubclassOf<UPrimalItem>,bool,bool,bool,bool,bool,bool,bool)", result, ItemTemplate, bRequiresExactClassMatch, bIncludeInventoryItems, bIncludeEquippedItems, bIncludeArkTributeItems, bIncludeSlotItems, bIncludeBlueprints, bIncludeEngrams); }
    int GetCraftQueueResourceCost(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem* IgnoreFirstItem) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem*>(this, "UPrimalInventoryComponent.GetCraftQueueResourceCost(TSubclassOf<UPrimalItem>,UPrimalItem*)", ItemTemplate, IgnoreFirstItem); }
    int GetItemTemplateQuantity(TSubclassOf<UPrimalItem> ItemTemplate, UPrimalItem* IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch, bool bForceCheckForDupes) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalItem*, bool, bool, bool, bool>(this, "UPrimalInventoryComponent.GetItemTemplateQuantity(TSubclassOf<UPrimalItem>,UPrimalItem*,bool,bool,bool,bool)", ItemTemplate, IgnoreItem, bIgnoreBlueprints, bCheckValidForCrafting, bRequireExactClassMatch, bForceCheckForDupes); }
    float GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem> ItemTemplate) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.GetTotalDurabilityOfTemplate(TSubclassOf<UPrimalItem>)", ItemTemplate); }
    void LocalUseItemSlot(int slotIndex, bool bForceCraft) { NativeCall<void, int, bool>(this, "UPrimalInventoryComponent.LocalUseItemSlot(int,bool)", slotIndex, bForceCraft); }
    float GetTotalEquippedItemStat(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalInventoryComponent.GetTotalEquippedItemStat(EPrimalItemStat::Type)", statType); }
    float GetEquippedArmorRating(EPrimalEquipmentType::Type equipmentType) { return NativeCall<float, EPrimalEquipmentType::Type>(this, "UPrimalInventoryComponent.GetEquippedArmorRating(EPrimalEquipmentType::Type)", equipmentType); }
    void ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, EPrimalEquipmentType::Type SpecificArmorType, float FromDamageBlocked) { NativeCall<void, float, bool, EPrimalEquipmentType::Type, float>(this, "UPrimalInventoryComponent.ConsumeArmorDurability(float,bool,EPrimalEquipmentType::Type,float)", ConsumptionAmount, bAllArmorTypes, SpecificArmorType, FromDamageBlocked); }
    void ServerCraftItem(FItemNetID* itemID, AShooterPlayerController* ByPC) { NativeCall<void, FItemNetID*, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerCraftItem(FItemNetID*,AShooterPlayerController*)", itemID, ByPC); }
    void AddToCraftQueue(UPrimalItem* anItem, AShooterPlayerController* ByPC, bool bIsRepair, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, UPrimalItem*, AShooterPlayerController*, bool, bool, float, float>(this, "UPrimalInventoryComponent.AddToCraftQueue(UPrimalItem*,AShooterPlayerController*,bool,bool,float,float)", anItem, ByPC, bIsRepair, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
    void ClearCraftQueue(bool bForceClearActiveCraftRepair) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.ClearCraftQueue(bool)", bForceClearActiveCraftRepair); }
    void ServerRepairItem(const FItemNetID* itemID, AShooterPlayerController* ByPC, bool bRepairIgnoreInventoryRequirement, float RepairPercentage, float RepairSpeedMultiplier) { NativeCall<void, const FItemNetID*, AShooterPlayerController*, bool, float, float>(this, "UPrimalInventoryComponent.ServerRepairItem(FItemNetID*,AShooterPlayerController*,bool,float,float)", itemID, ByPC, bRepairIgnoreInventoryRequirement, RepairPercentage, RepairSpeedMultiplier); }
    void SwapInventoryItems(FItemNetID* itemID1, FItemNetID* itemID2) { NativeCall<void, FItemNetID*, FItemNetID*>(this, "UPrimalInventoryComponent.SwapInventoryItems(FItemNetID*,FItemNetID*)", itemID1, itemID2); }
    void AddItemCrafting(UPrimalItem* craftingItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.AddItemCrafting(UPrimalItem*)", craftingItem); }
    void RemoveItemCrafting(UPrimalItem* craftingItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.RemoveItemCrafting(UPrimalItem*)", craftingItem); }
    void StopAllCraftingRepairing() { NativeCall<void>(this, "UPrimalInventoryComponent.StopAllCraftingRepairing()"); }
    void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPrimalInventoryComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
    void TickCraftQueue(float DeltaTime, AShooterGameState* theGameState) { NativeCall<void, float, AShooterGameState*>(this, "UPrimalInventoryComponent.TickCraftQueue(float,AShooterGameState*)", DeltaTime, theGameState); }
    float GetCraftingSpeed() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetCraftingSpeed()"); }
    AShooterHUD* GetLocalOwnerHUD() { return NativeCall<AShooterHUD*>(this, "UPrimalInventoryComponent.GetLocalOwnerHUD()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>*)", OutLifetimeProps); }
    bool IsLocal() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsLocal()"); }
    bool IsLocalToPlayer(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent.IsLocalToPlayer(AShooterPlayerController*)", ForPC); }
    int GetMaxInventoryItems(bool bIgnoreHiddenDefaultInventory) { return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetMaxInventoryItems(bool)", bIgnoreHiddenDefaultInventory); }
    int GetCurrentNumInventoryItems() { return NativeCall<int>(this, "UPrimalInventoryComponent.GetCurrentNumInventoryItems()"); }
    void Unstasised() { NativeCall<void>(this, "UPrimalInventoryComponent.Unstasised()"); }
    void CheckForAutoCraftBlueprints() { NativeCall<void>(this, "UPrimalInventoryComponent.CheckForAutoCraftBlueprints()"); }
    bool IsCraftingAllowed(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent.IsCraftingAllowed(UPrimalItem*)", anItem); }
    void SetCraftingEnabled(bool bEnable) { NativeCall<void, bool>(this, "UPrimalInventoryComponent.SetCraftingEnabled(bool)", bEnable); }
    bool IsRepairingAllowed() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsRepairingAllowed()"); }
    float GetInventoryWeight() { return NativeCall<float>(this, "UPrimalInventoryComponent.GetInventoryWeight()"); }
    void ServerSplitItemStack_Implementation(FItemNetID ItemID, int AmountToSplit) { NativeCall<void, FItemNetID, int>(this, "UPrimalInventoryComponent.ServerSplitItemStack_Implementation(FItemNetID,int)", ItemID, AmountToSplit); }
    void ServerMergeItemStack_Implementation(FItemNetID ItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.ServerMergeItemStack_Implementation(FItemNetID)", ItemID); }
    void OnGrindItem() { NativeCall<void>(this, "UPrimalInventoryComponent.OnGrindItem()"); }
    void ServerForceMergeItemStack_Implementation(FItemNetID Item1ID, FItemNetID Item2ID) { NativeCall<void, FItemNetID, FItemNetID>(this, "UPrimalInventoryComponent.ServerForceMergeItemStack_Implementation(FItemNetID,FItemNetID)", Item1ID, Item2ID); }
    void RemoteAddItemToCustomFolder(const FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, const FString*, int, FItemNetID>(this, "UPrimalInventoryComponent.RemoteAddItemToCustomFolder(FString&,int,FItemNetID)", CFolderName, InventoryCompType, ItemId); }
    UPrimalItem* FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem> ItemClass, bool bFindLeastQuantity, UPrimalItem* StacksWithAndIgnoreItem) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>, bool, UPrimalItem*>(this, "UPrimalInventoryComponent.FindInventoryStackableItemCompareQuantity(TSubclassOf<UPrimalItem>,bool,UPrimalItem*)", ItemClass, bFindLeastQuantity, StacksWithAndIgnoreItem); }
    UPrimalCharacterStatusComponent* GetCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent*>(this, "UPrimalInventoryComponent.GetCharacterStatusComponent()"); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "UPrimalInventoryComponent.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "UPrimalInventoryComponent.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void GetGrinderSettings_Implementation(int* MaxQuantityToGrind, float* GrindGiveItemsPercent, int* MaxItemsToGivePerGrind) { NativeCall<void, int*, float*, int*>(this, "UPrimalInventoryComponent.GetGrinderSettings_Implementation(int*,float*,int*)", MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
    bool IsAllowedInventoryAccess(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalInventoryComponent.IsAllowedInventoryAccess(APlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "UPrimalInventoryComponent.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>*,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void ActivePlayerInventoryTick(float DeltaTime) { NativeCall<void, float>(this, "UPrimalInventoryComponent.ActivePlayerInventoryTick(float)", DeltaTime); }
    void InventoryRefresh() { NativeCall<void>(this, "UPrimalInventoryComponent.InventoryRefresh()"); }
    void RefreshItemSpoilingTimes() { NativeCall<void>(this, "UPrimalInventoryComponent.RefreshItemSpoilingTimes()"); }
    void NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int amount) { NativeCall<void, TSubclassOf<UPrimalItem>, int>(this, "UPrimalInventoryComponent.NotifyCraftingItemConsumption(TSubclassOf<UPrimalItem>,int)", ItemTemplate, amount); }
    float GetSpoilingTimeMultiplier(UPrimalItem* anItem) { return NativeCall<float, UPrimalItem*>(this, "UPrimalInventoryComponent.GetSpoilingTimeMultiplier(UPrimalItem*)", anItem); }
    void UsedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent.UsedItem(UPrimalItem*)", anItem); }
    void UpdatedCraftQueue() { NativeCall<void>(this, "UPrimalInventoryComponent.UpdatedCraftQueue()"); }
    void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "UPrimalInventoryComponent.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void ClientItemMessageNotification_Implementation(FItemNetID ItemID, EPrimalItemMessage::Type ItemMessageType) { NativeCall<void, FItemNetID, EPrimalItemMessage::Type>(this, "UPrimalInventoryComponent.ClientItemMessageNotification_Implementation(FItemNetID,EPrimalItemMessage::Type)", ItemID, ItemMessageType); }
    bool IsOwnedByPlayer() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOwnedByPlayer()"); }
    char DropInventoryDeposit(long double DestroyAtTime, bool bDoPreventSendingData, bool bIgnorEquippedItems, TSubclassOf<APrimalStructureItemContainer> OverrideInventoryDepositClass, APrimalStructureItemContainer* CopyStructureValues, APrimalStructureItemContainer** DepositStructureResult, AActor* GroundIgnoreActor, FString* CurrentCustomFolderFilter, FString* CurrentNameFilter, unsigned __int64 DeathCacheCharacterID, float DropInventoryOnGroundTraceDistance, bool bForceDrop, int OverrideMaxItemsDropped, bool bOverrideDepositLocation, const UE::Math::TVector<double>* DepositLocationOverride, bool bForceLocation) { return NativeCall<char, long double, bool, bool, TSubclassOf<APrimalStructureItemContainer>, APrimalStructureItemContainer*, APrimalStructureItemContainer**, AActor*, FString*, FString*, unsigned __int64, float, bool, int, bool, const UE::Math::TVector<double>*, bool>(this, "UPrimalInventoryComponent.DropInventoryDeposit(double,bool,bool,TSubclassOf<APrimalStructureItemContainer>,APrimalStructureItemContainer*,APrimalStructureItemContainer**,AActor*,FString,FString,unsigned__int64,float,bool,int,bool,UE::Math::TVector<double>&,bool,bool,bool,bool,bool)", DestroyAtTime, bDoPreventSendingData, bIgnorEquippedItems, OverrideInventoryDepositClass, CopyStructureValues, DepositStructureResult, GroundIgnoreActor, CurrentCustomFolderFilter, CurrentNameFilter, DeathCacheCharacterID, DropInventoryOnGroundTraceDistance, bForceDrop, OverrideMaxItemsDropped, bOverrideDepositLocation, DepositLocationOverride, bForceLocation); }
    bool DropNotReadyInventoryDeposit(long double DestroyAtTime) { return NativeCall<bool, long double>(this, "UPrimalInventoryComponent.DropNotReadyInventoryDeposit(longdouble)", DestroyAtTime); }
    bool GetGroundLocation(UE::Math::TVector<double>* theGroundLoc, const UE::Math::TVector<double>* OffsetUp, const UE::Math::TVector<double>* OffsetDown, APrimalStructure** LandedOnStructure, AActor* IgnoreActor, bool bCheckAnyStationary, UPrimitiveComponent** LandedOnComponent, bool bUseInputGroundLocAsBase) { return NativeCall<bool, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, APrimalStructure**, AActor*, bool, UPrimitiveComponent**, bool>(this, "UPrimalInventoryComponent.GetGroundLocation(UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,APrimalStructure**,AActor*,bool,UPrimitiveComponent**,bool)", theGroundLoc, OffsetUp, OffsetDown, LandedOnStructure, IgnoreActor, bCheckAnyStationary, LandedOnComponent, bUseInputGroundLocAsBase); }
    AActor* CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem> ForItemClass, TSubclassOf<AActor> ActorClassToSpawn) { return NativeCall<AActor*, TSubclassOf<UPrimalItem>, TSubclassOf<AActor>>(this, "UPrimalInventoryComponent.CraftedBlueprintSpawnActor(TSubclassOf<UPrimalItem>,TSubclassOf<AActor>)", ForItemClass, ActorClassToSpawn); }
    bool GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier, int NumPasses, float QuantityMultiplier, float SetPowerWeight, float MaxItemDifficultyClamp) { return NativeCall<bool, float, float, int, float, float, float>(this, "UPrimalInventoryComponent.GenerateCrateItems(float,float,int,float,float,float)", MinQualityMultiplier, MaxQualityMultiplier, NumPasses, QuantityMultiplier, SetPowerWeight, MaxItemDifficultyClamp); }
    static __int64 GenerateCustomCrateItems() { return NativeCall<__int64>(nullptr, "UPrimalInventoryComponent.GenerateCustomCrateItems()"); }
    UPrimalItem* FindArkTributeItem(const FItemNetID* ItemID) { return NativeCall<UPrimalItem*, const FItemNetID*>(this, "UPrimalInventoryComponent.FindArkTributeItem(FItemNetID*)", ItemID); }
    void SetNextItemSpoilingID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemSpoilingID_Implementation(FItemNetID)", NextItemID); }
    void SetNextItemConsumptionID_Implementation(FItemNetID NextItemID) { NativeCall<void, FItemNetID>(this, "UPrimalInventoryComponent.SetNextItemConsumptionID_Implementation(FItemNetID)", NextItemID); }
    void CheckReplenishSlotIndex(int slotIndex, TSubclassOf<UPrimalItem> ClassCheckOverride) { NativeCall<void, int, TSubclassOf<UPrimalItem>>(this, "UPrimalInventoryComponent.CheckReplenishSlotIndex(int,TSubclassOf<UPrimalItem>)", slotIndex, ClassCheckOverride); }
    void OnArkTributeItemsRemoved(bool Success, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >* RemovedItems, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >* NotFoundItems, int FailureResponseCode, const FString* FailureResponseMessage, bool bAllowForcedItemDownload) { NativeCall<void, bool, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >*, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >*, int, const FString*, bool>(this, "UPrimalInventoryComponent.OnArkTributeItemsRemoved(bool,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>*,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>*,int,FString&,bool)", Success, RemovedItems, NotFoundItems, FailureResponseCode, FailureResponseMessage, bAllowForcedItemDownload); }
    void ClientOnArkTributeItemsAdded_Implementation() { NativeCall<void>(this, "UPrimalInventoryComponent.ClientOnArkTributeItemsAdded_Implementation()"); }
    void OnArkTributeItemsAdded(bool Success, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >* AddedItems) { NativeCall<void, bool, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.OnArkTributeItemsAdded(bool,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>*)", Success, AddedItems); }
    bool RemoveArkTributeItem(FItemNetID* itemID, unsigned int Quantity) { return NativeCall<bool, FItemNetID*, unsigned int>(this, "UPrimalInventoryComponent.RemoveArkTributeItem(FItemNetID*,unsignedint)", itemID, Quantity); }
    static char ServerAddToArkTributeInventory() { return NativeCall<char>(nullptr, "UPrimalInventoryComponent.ServerAddToArkTributeInventory()"); }
    UPrimalItem* AddAfterRemovingFromArkTributeInventory(UPrimalItem* Item, const FItemNetInfo* MyItem, bool bAllowForcedItemDownload) { return NativeCall<UPrimalItem*, UPrimalItem*, const FItemNetInfo*, bool>(this, "UPrimalInventoryComponent.AddAfterRemovingFromArkTributeInventory(UPrimalItem*,FItemNetInfo*,bool)", Item, MyItem, bAllowForcedItemDownload); }
    bool ServerAddFromArkTributeInventory(FItemNetID* itemID, int Quantity) { return NativeCall<bool, FItemNetID*, int>(this, "UPrimalInventoryComponent.ServerAddFromArkTributeInventory(FItemNetID*,int)", itemID, Quantity); }
    void RequestAddArkTributeItem(const FItemNetInfo* theItemInfo, bool bFromLoad) { NativeCall<void, const FItemNetInfo*, bool>(this, "UPrimalInventoryComponent.RequestAddArkTributeItem(FItemNetInfo*,bool)", theItemInfo, bFromLoad); }
    void AddArkTributeItem(const FItemNetInfo* theItemInfo, bool bFromLoad) { NativeCall<void, const FItemNetInfo*, bool>(this, "UPrimalInventoryComponent.AddArkTributeItem(FItemNetInfo*,bool)", theItemInfo, bFromLoad); }
    void LoadArkTriuteItems(const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >* ItemInfos, bool bClear, bool bFinalBatch) { NativeCall<void, const TArray<FItemNetInfo, TSizedDefaultAllocator<32> >*, bool, bool>(this, "UPrimalInventoryComponent.LoadArkTriuteItems(TArray<FItemNetInfo,TSizedDefaultAllocator<32>>*,bool,bool)", ItemInfos, bClear, bFinalBatch); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalInventoryComponent.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    bool IsServerCustomFolder(int InventoryCompType) { return NativeCall<bool, int>(this, "UPrimalInventoryComponent.IsServerCustomFolder(int)", InventoryCompType); }
    static void AddCustomFolder() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.AddCustomFolder()"); }
    static void RemoveCustomFolder() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.RemoveCustomFolder()"); }
    TArray<FString, TSizedDefaultAllocator<32> >* GetCustomFolders(TArray<FString, TSizedDefaultAllocator<32> >* result, int InventoryCompType) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, int>(this, "UPrimalInventoryComponent.GetCustomFolders(TArray<FString,TSizedDefaultAllocator<32>>*,int)", result, InventoryCompType); }
    static void DeleteItemFromCustomFolder() { NativeCall<void>(nullptr, "UPrimalInventoryComponent.DeleteItemFromCustomFolder()"); }
    float GetItemWeightMultiplier(UPrimalItem* anItem) { return NativeCall<float, UPrimalItem*>(this, "UPrimalInventoryComponent.GetItemWeightMultiplier(UPrimalItem*)", anItem); }
    void UpdateTribeGroupInventoryRank_Implementation(unsigned __int8 NewRank) { NativeCall<void, unsigned __int8>(this, "UPrimalInventoryComponent.UpdateTribeGroupInventoryRank_Implementation(unsigned__int8)", NewRank); }
    float OverrideItemMinimumUseInterval(const UPrimalItem* theItem) { return NativeCall<float, const UPrimalItem*>(this, "UPrimalInventoryComponent.OverrideItemMinimumUseInterval(UPrimalItem*)", theItem); }
    UPrimalItem* AddItemObject(UPrimalItem* anItem) { return NativeCall<UPrimalItem*, UPrimalItem*>(this, "UPrimalInventoryComponent.AddItemObject(UPrimalItem*)", anItem); }
    void OnComponentCreated() { NativeCall<void>(this, "UPrimalInventoryComponent.OnComponentCreated()"); }
    void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UPrimalInventoryComponent.Serialize(FArchive*)", Ar); }
    bool IsAtMaxInventoryItems() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsAtMaxInventoryItems()"); }
    void TransferAllItemsToInventory(UPrimalInventoryComponent* ToInventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "UPrimalInventoryComponent.TransferAllItemsToInventory(UPrimalInventoryComponent*)", ToInventory); }
    void InventoryCustomFilter_Implementation(const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* UnfilteredItemsList, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* FilteredItemsList) { NativeCall<void, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent.InventoryCustomFilter_Implementation(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>*,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>*)", UnfilteredItemsList, FilteredItemsList); }
    void ServerSelectedCustomItemAction(const FItemNetID* itemID, const FName* SelectedOption, AShooterPlayerController* ForPC) { NativeCall<void, const FItemNetID*, const FName*, AShooterPlayerController*>(this, "UPrimalInventoryComponent.ServerSelectedCustomItemAction(FItemNetID*,FName*,AShooterPlayerController*)", itemID, SelectedOption, ForPC); }
    bool IsOnCraftRequestCooldown() { return NativeCall<bool>(this, "UPrimalInventoryComponent.IsOnCraftRequestCooldown()"); }
    APrimalStructureItemContainer* BPCreateDropItemInventoryEmpty(long double DestroyAtTime, TSubclassOf<APrimalStructureItemContainer> OverrideInventoryDepositClass, APrimalStructureItemContainer* CopyStructureValues, AActor* GroundIgnoreActor, int DeadPlayerID, float DropInventoryOnGroundTraceDistance, bool bOverrideDepositLocation, const UE::Math::TVector<double>* DepositLocationOverride) { return NativeCall<APrimalStructureItemContainer*, long double, TSubclassOf<APrimalStructureItemContainer>, APrimalStructureItemContainer*, AActor*, int, float, bool, const UE::Math::TVector<double>*>(this, "UPrimalInventoryComponent.BPCreateDropItemInventoryEmpty(longdouble,TSubclassOf<APrimalStructureItemContainer>,APrimalStructureItemContainer*,AActor*,int,float,bool,UE::Math::TVector<double>*)", DestroyAtTime, OverrideInventoryDepositClass, CopyStructureValues, GroundIgnoreActor, DeadPlayerID, DropInventoryOnGroundTraceDistance, bOverrideDepositLocation, DepositLocationOverride); }
    UPrimalItem* GetLastItemSlot() { return NativeCall<UPrimalItem*>(this, "UPrimalInventoryComponent.GetLastItemSlot()"); }
    UPrimalWirelessExchangeData* IsValidWirelessConnection(UPrimalInventoryComponent* OtherInv, UPrimalWirelessExchangeData* MyExchange) { return NativeCall<UPrimalWirelessExchangeData*, UPrimalInventoryComponent*, UPrimalWirelessExchangeData*>(this, "UPrimalInventoryComponent.IsValidWirelessConnection(UPrimalInventoryComponent*,UPrimalWirelessExchangeData*)", OtherInv, MyExchange); }
    bool UsesWirelessCrafting(UPrimalItem* ItemToCraft, APlayerController* PC) { return NativeCall<bool, UPrimalItem*, APlayerController*>(this, "UPrimalInventoryComponent.UsesWirelessCrafting(UPrimalItem*,APlayerController*)", ItemToCraft, PC); }
    int GetWirelessItemQty(TSubclassOf<UPrimalItem> ItemTemplate, bool bRequireExactClassMatch) { return NativeCall<int, TSubclassOf<UPrimalItem>, bool>(this, "UPrimalInventoryComponent.GetWirelessItemQty(TSubclassOf<UPrimalItem>,bool)", ItemTemplate, bRequireExactClassMatch); }
    bool CanAccessWirelessResources(UPrimalInventoryComponent* OtherInv) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalInventoryComponent.CanAccessWirelessResources(UPrimalInventoryComponent*)", OtherInv); }
    void MulticastUpdateNearbyWirelessCrafting_Implementation() { NativeCall<void>(this, "UPrimalInventoryComponent.MulticastUpdateNearbyWirelessCrafting_Implementation()"); }
    void UpdateWirelessResources(bool bForceUpdate, bool DontTrace) { NativeCall<void, bool, bool>(this, "UPrimalInventoryComponent.UpdateWirelessResources(bool,bool)", bForceUpdate, DontTrace); }
    int ConsumeWirelessResources(TSubclassOf<UPrimalItem> ItemTemplate, int Qty, bool bRequireExactClassMatch) { return NativeCall<int, TSubclassOf<UPrimalItem>, int, bool>(this, "UPrimalInventoryComponent.ConsumeWirelessResources(TSubclassOf<UPrimalItem>,int,bool)", ItemTemplate, Qty, bRequireExactClassMatch); }
    int GetEmptySlotCount(bool bIsVanityItem) { return NativeCall<int, bool>(this, "UPrimalInventoryComponent.GetEmptySlotCount(bool)", bIsVanityItem); }
    int GetNumOfDefaultItemsBlacklisted() { return NativeCall<int>(this, "UPrimalInventoryComponent.GetNumOfDefaultItemsBlacklisted()"); }
};

struct UPrimalCharacterStatusComponent : UActorComponent
{
    // Fields

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
    static void StaticRegisterNativesUPrimalCharacterStatusComponent() { NativeCall<void>(nullptr, "UPrimalCharacterStatusComponent.StaticRegisterNativesUPrimalCharacterStatusComponent()"); }
    static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalCharacterStatusComponent.GetPrivateStaticClass()"); }
    void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps) { NativeCall<void, const TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", ClassReps); }
    void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPrimalCharacterStatusComponent.Serialize(FStructuredArchiveRecord)", Record); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "UPrimalCharacterStatusComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void InitializeComponent() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.InitializeComponent()"); }
    void RemoveStatusValueModifierByIndex(int Index) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByIndex(int)", Index); }
    void AddStatusValueModifier(EPrimalCharacterStatusValue::Type ValueType, float Amount, float Speed, bool bContinueOnUnchangedValue, bool bSetValue, int StatusValueModifierDescriptionIndex, bool bResetExistingModifierDescriptionIndex, float LimitExistingModifierDescriptionToMaxAmount, bool bSetAdditionalValue, EPrimalCharacterStatusValue::Type StopAtValueNearMax, bool bMakeUntameable, TSubclassOf<UDamageType> ScaleValueByCharacterDamageType, AActor* Instigator) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, float, bool, bool, int, bool, float, bool, EPrimalCharacterStatusValue::Type, bool, TSubclassOf<UDamageType>, AActor*>(this, "UPrimalCharacterStatusComponent.AddStatusValueModifier(EPrimalCharacterStatusValue::Type,float,float,bool,bool,int,bool,float,bool,EPrimalCharacterStatusValue::Type,bool,TSubclassOf<UDamageType>,AActor*)", ValueType, Amount, Speed, bContinueOnUnchangedValue, bSetValue, StatusValueModifierDescriptionIndex, bResetExistingModifierDescriptionIndex, LimitExistingModifierDescriptionToMaxAmount, bSetAdditionalValue, StopAtValueNearMax, bMakeUntameable, ScaleValueByCharacterDamageType, Instigator); }
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
};