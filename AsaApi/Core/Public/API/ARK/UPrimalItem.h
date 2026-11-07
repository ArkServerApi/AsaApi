#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct UPrimalItem : UObject
{
	// Fields

	
	
	
	
	
	TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& EquipRequiresExplicitOwnerClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquipRequiresExplicitOwnerClasses"); }
	TArray<FName, TSizedDefaultAllocator<32> >& EquipRequiresExplicitOwnerTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquipRequiresExplicitOwnerTags"); }
	TSoftClassPtr<APrimalBuff>& BuffToGiveOwnerWhenEquippedField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped"); }
	FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem.ExpirationTimeUTC"); }
	
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemSkinUseOnItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemSkinUseOnItemClasses"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& AllowClassesToBeUsedAsParentSkinField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.AllowClassesToBeUsedAsParentSkin"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemSkinPreventOnItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemSkinPreventOnItemClasses"); }
	
	
	
	
	
	
	
	TArray<FActorClassAttachmentInfo, TSizedDefaultAllocator<32> >& ActorClassAttachmentInfosField() { return *GetNativePointerField<TArray<FActorClassAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ActorClassAttachmentInfos"); }
	TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*& ItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >**>(this, "UPrimalItem.ItemAttachmentInfos"); }
	TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >& DynamicItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.DynamicItemAttachmentInfos"); }
	TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >& ItemSkinAddItemAttachmentsField() { return *GetNativePointerField<TArray<FItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemSkinAddItemAttachments"); }
	TEnumAsByte<enum EPrimalItemType::Type>& MyItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemType::Type>*>(this, "UPrimalItem.MyItemType"); }
	TEnumAsByte<enum EPrimalConsumableType::Type>& MyConsumableTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalConsumableType::Type>*>(this, "UPrimalItem.MyConsumableType"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type>& MyEquipmentTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "UPrimalItem.MyEquipmentType"); }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UTexture2D*& BlueprintBackgroundOverrideTextureField();
	
	
	
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
	
	TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& SkinWeaponTemplatesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SkinWeaponTemplates"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& SupportAmmoItemForWeaponSkinField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SupportAmmoItemForWeaponSkin"); }
	TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >& SkinWeaponTemplatesForAmmoField() { return *GetNativePointerField<TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SkinWeaponTemplatesForAmmo"); }
	TSoftClassPtr<AShooterWeapon>& AmmoSupportDragOntoWeaponItemWeaponTemplateField() { return *GetNativePointerField<TSoftClassPtr<AShooterWeapon>*>(this, "UPrimalItem.AmmoSupportDragOntoWeaponItemWeaponTemplate"); }
	
	TArray<FUseItemAddCharacterStatusValue, TSizedDefaultAllocator<32> >& UseItemAddCharacterStatusValuesField() { return *GetNativePointerField<TArray<FUseItemAddCharacterStatusValue, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.UseItemAddCharacterStatusValues"); }
	
	
	
	
	
	FString& DescriptiveNameBaseField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DescriptiveNameBase"); }
	FString& ItemDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.ItemDescription"); }
	FString& DurabilityStringShortField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityStringShort"); }
	FString& DurabilityStringField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.DurabilityString"); }
	
	float& DroppedItemLifeSpanOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.DroppedItemLifeSpanOverride"); }
	UE::Math::TVector<double>& DroppedItemCenterLocationOffsetOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.DroppedItemCenterLocationOffsetOverride"); }
	
	
	UE::Math::TVector<double>& DroppedMeshOverrideScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.DroppedMeshOverrideScale3D"); }
	
	TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& UseRequiresOwnerActorClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.UseRequiresOwnerActorClasses"); }
	
	
	float& SpoilingTimeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SpoilingTime"); }
	
	
	float& BaseItemWeightField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseItemWeight"); }
	
	float& NewItemDurabilityOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NewItemDurabilityOverride"); }
	
	
	
	
	float& AutoDecreaseDurabilityAmountPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AutoDecreaseDurabilityAmountPerInterval"); }
	
	
	float& ResourceRarityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ResourceRarity"); }
	float& BlueprintTimeToCraftField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BlueprintTimeToCraft"); }
	
	
	
	
	float& BaseCraftingXPField() { return *GetNativePointerField<float*>(this, "UPrimalItem.BaseCraftingXP"); }
	
	TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.BaseCraftingResourceRequirements"); }
	
	FieldArray<FItemStatInfo, 8> ItemStatInfosField() { return { this, "UPrimalItem.ItemStatInfos" }; }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "UPrimalItem.ItemStatValues" }; }
	int& WeaponClipAmmoField() { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponClipAmmo"); }
	float& WeaponFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalItem.WeaponFrequency"); }
	long double& LastTimeToShowInfoField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastTimeToShowInfo"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemDurability"); }
	float& MinItemDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MinItemDurability"); }
	float& SavedDurabilityField() { return *GetNativePointerField<float*>(this, "UPrimalItem.SavedDurability"); }
	TSoftClassPtr<AShooterWeapon>& WeaponTemplateField() { return *GetNativePointerField<TSoftClassPtr<AShooterWeapon>*>(this, "UPrimalItem.WeaponTemplate"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UTexture2D*& BrokenIconField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UTexture2D*& CustomBrokenOverlayIconField();
	UTexture2D*& ItemIcon_DEPRECATEDField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.ItemIcon_DEPRECATED"); }
	FJustInTimeTexture2D& ItemIconJITField() { return *GetNativePointerField<FJustInTimeTexture2D*>(this, "UPrimalItem.ItemIconJIT"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UTexture2D*& AlternateItemIconBelowDurabilityField();
	float& AlternateItemIconBelowDurabilityValueField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AlternateItemIconBelowDurabilityValue"); }
	
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
	
	TArray<TSoftClassPtr<UPrimalInventoryComponent>, TSizedDefaultAllocator<32> >& CraftingRequiresInventoryComponentField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalInventoryComponent>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CraftingRequiresInventoryComponent"); }
	
	
	
	
	
	
	
	
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
	
	int& TempSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.TempSlotIndex"); }
	int& LastSlotIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastSlotIndex"); }
	TWeakObjectPtr<AShooterWeapon>& AssociatedWeaponField() { return *GetNativePointerField<TWeakObjectPtr<AShooterWeapon>*>(this, "UPrimalItem.AssociatedWeapon"); }
	UPrimalItem*& MyItemSkinField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.MyItemSkin"); }
	UPrimalItem*& SkinnedOntoItemField() { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem.SkinnedOntoItem"); }
	TArray<TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& WheelItemsAmmoField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.WheelItemsAmmo"); }
	TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "UPrimalItem.LastOwnerPlayer"); }
	
	
	
	
	
	int& CropMaxFruitsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CropMaxFruits"); }
	
	
	
	float& EggAlertDinosAggroRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.EggAlertDinosAggroRadius"); }
	
	
	
	
	
	
	UE::Math::TVector<double>& OriginalItemDropLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.OriginalItemDropLocation"); }
	
	
	
	
	
	
	
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastSpoilingTime"); }
	TArray<FString, TSizedDefaultAllocator<32> >& DefaultFolderPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.DefaultFolderPaths"); }
	
	
	int& LastCalculatedTotalAmmoInvUpdatedFrameField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastCalculatedTotalAmmoInvUpdatedFrame"); }
	int& WeaponTotalAmmoField() { return *GetNativePointerField<int*>(this, "UPrimalItem.WeaponTotalAmmo"); }
	
	TArray<unsigned short, TSizedDefaultAllocator<32> >& CraftingResourceRequirementsField() { return *GetNativePointerField<TArray<unsigned short, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CraftingResourceRequirements"); }
	
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bForceNotificationItemCombatModeField();
	
	TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >& OnlyUsableOnSpecificClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.OnlyUsableOnSpecificClasses"); }
	TArray<FSaddlePassengerSeatDefinition, TSizedDefaultAllocator<32> >& SaddlePassengerSeatsField() { return *GetNativePointerField<TArray<FSaddlePassengerSeatDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.SaddlePassengerSeats"); }
	
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
	
	
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomItemID"); }
	float& AddDinoTargetingRangeField() { return *GetNativePointerField<float*>(this, "UPrimalItem.AddDinoTargetingRange"); }
	
	
	
	
	
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& CraftingAdditionalItemsToGiveField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CraftingAdditionalItemsToGive"); }
	int& LastValidItemVersionField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastValidItemVersion"); }
	
	
	
	
	
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggRandomMutationsMale"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& EquippingRequiresEngramsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EquippingRequiresEngrams"); }
	TArray<FCustomItemData, TSizedDefaultAllocator<32> >& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CustomItemDatas"); }
	
	
	FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterCharacterName"); }
	FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItem.CrafterTribeName"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "UPrimalItem.CraftedSkillBonus"); }
	
	
	
	
	int& CustomFlagsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomFlags"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.CustomTag"); }
	
	long double& LastEquippedReduceDurabilityTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastEquippedReduceDurabilityTime"); }
	
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.ItemStatClampsMultiplier"); }
	float& MaxDurabiltiyOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalItem.MaxDurabiltiyOverride"); }
	long double& LastItemAdditionTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.LastItemAdditionTime"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalItem.UploadEarliestValidTime"); }
	float& NextRepairPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalItem.NextRepairPercentage"); }
	UStaticMesh*& NetDroppedMeshOverrideField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem.NetDroppedMeshOverride"); }
	UMaterialInterface*& NetDroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem.NetDroppedMeshMaterialOverride"); }
	UE::Math::TVector<double>& NetDroppedMeshOverrideScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalItem.NetDroppedMeshOverrideScale3D"); }
	FSlateBrush& WidgetCustomBrokenOverlayStyleBrushField() { return *GetNativePointerField<FSlateBrush*>(this, "UPrimalItem.WidgetCustomBrokenOverlayStyleBrush"); }
	
	
	
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UTexture2D*& AccessoryActivatedIconOverrideField();
	
	// Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bUseBPPreventUploadField();
	
	
	
	
	
	
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
	BitFieldValue<bool, unsigned __int32> bIsCustomCosmeticDisplayField() { return { this, "UPrimalItem.bIsCustomCosmeticDisplay" }; }
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
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalItem();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPrimalItem.Serialize(FStructuredArchiveRecord)", Record); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UPrimalItem.GetWorld()"); }
	FItemNetInfo* GetItemNetInfo(FItemNetInfo* result, bool bIsForSendingToClient) { return NativeCall<FItemNetInfo*, FItemNetInfo*, bool>(this, "UPrimalItem.GetItemNetInfo(bool)", result, bIsForSendingToClient); }
	void InitFromNetInfo(const FItemNetInfo& theInfo, const UWorld* InWorld) { NativeCall<void, const FItemNetInfo&, const UWorld*>(this, "UPrimalItem.InitFromNetInfo(FItemNetInfo&,UWorld*)", theInfo, InWorld); }
	UWorld* GetWorldHelper(UObject* WorldContextObject) { return NativeCall<UWorld*, UObject*>(this, "UPrimalItem.GetWorldHelper(UObject*)", WorldContextObject); }
	int GetMaxItemQuantity(UObject* WorldContextObject) { return NativeCall<int, UObject*>(this, "UPrimalItem.GetMaxItemQuantity(UObject*)", WorldContextObject); }
	void AddItemDurability(float durabilityToAdd, bool bNotifyClientForEquippedItems) { NativeCall<void, float, bool>(this, "UPrimalItem.AddItemDurability(float,bool)", durabilityToAdd, bNotifyClientForEquippedItems); }
	void InitNewItem(float ItemQuality, UPrimalInventoryComponent* toInventory, float MaxItemDifficultyClamp, float MinRandomQuality) { NativeCall<void, float, UPrimalInventoryComponent*, float, float>(this, "UPrimalItem.InitNewItem(float,UPrimalInventoryComponent*,float,float)", ItemQuality, toInventory, MaxItemDifficultyClamp, MinRandomQuality); }
	bool AllowEquipItem(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.AllowEquipItem(UPrimalInventoryComponent*)", toInventory); }
	void AddToInventory(UPrimalInventoryComponent* toInventory, bool bEquipItem, bool AddToSlotItems, FItemNetID* InventoryInsertAfterItemID, bool bShowHUDNotification, bool bDontRecalcSpoilingTime, bool bIgnoreAbsoluteMaxInventory, bool bInsertAtItemIDIndexInstead, bool DontHaveClientRefreshAttachmentsAfterUpdatingItem, bool bDontBroadcastItemUpdateEvents) { NativeCall<void, UPrimalInventoryComponent*, bool, bool, FItemNetID*, bool, bool, bool, bool, bool, bool>(this, "UPrimalItem.AddToInventory(UPrimalInventoryComponent*,bool,bool,FItemNetID*,bool,bool,bool,bool,bool,bool)", toInventory, bEquipItem, AddToSlotItems, InventoryInsertAfterItemID, bShowHUDNotification, bDontRecalcSpoilingTime, bIgnoreAbsoluteMaxInventory, bInsertAtItemIDIndexInstead, DontHaveClientRefreshAttachmentsAfterUpdatingItem, bDontBroadcastItemUpdateEvents); }
	bool RemoveItemFromArkTributeInventory() { return NativeCall<bool>(this, "UPrimalItem.RemoveItemFromArkTributeInventory()"); }
	bool RemoveItemFromInventory(bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, bool, bool>(this, "UPrimalItem.RemoveItemFromInventory(bool,bool)", bForceRemoval, showHUDMessage); }
	float GetSpoilingTime() { return NativeCall<float>(this, "UPrimalItem.GetSpoilingTime()"); }
	void GetItemBytes(TArray<unsigned char, TSizedDefaultAllocator<32> >* Bytes) { NativeCall<void, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.GetItemBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", Bytes); }
	static UPrimalItem* CreateFromBytes(const TArray<unsigned char, TSizedDefaultAllocator<32> >* Bytes) { return NativeCall<UPrimalItem*, const TArray<unsigned char, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalItem.CreateFromBytes(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", Bytes); }
	static UPrimalItem* AddNewItem(TSubclassOf<UPrimalItem> ItemArchetype, UPrimalInventoryComponent* GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, float MaxItemDifficultyClamp, bool CreateOnClient, TSubclassOf<UPrimalItem> ApplyItemSkin, float MinRandomQuality, bool clampStats, bool bIgnoreAbsoluteMaxInventory, bool bSkipDenySpawningInThisMap, bool bShowHUDNotification, bool bDontProgressMilestones, bool bDontBroadcastItemUpdateEvents, UWorld* World) { return NativeCall<UPrimalItem*, TSubclassOf<UPrimalItem>*, UPrimalInventoryComponent*, bool, bool, float, bool, int, bool, float, bool, TSubclassOf<UPrimalItem>*, float, bool, bool, bool, bool, bool, bool, UWorld*>(nullptr, "UPrimalItem.AddNewItem(TSubclassOf<UPrimalItem>,UPrimalInventoryComponent*,bool,bool,float,bool,int,bool,float,bool,TSubclassOf<UPrimalItem>,float,bool,bool,bool,bool,bool,bool,UWorld*)", &ItemArchetype, GiveToInventory, bEquipItem, bDontStack, ItemQuality, bForceNoBlueprint, quantityOverride, bForceBlueprint, MaxItemDifficultyClamp, CreateOnClient, &ApplyItemSkin, MinRandomQuality, clampStats, bIgnoreAbsoluteMaxInventory, bSkipDenySpawningInThisMap, bShowHUDNotification, bDontProgressMilestones, bDontBroadcastItemUpdateEvents, World); }
	static UPrimalItem* CreateItemFromNetInfo(const FItemNetInfo* newItemInfo) { return NativeCall<UPrimalItem*, const FItemNetInfo*>(nullptr, "UPrimalItem.CreateItemFromNetInfo(FItemNetInfo&)", newItemInfo); }
	FString* GetItemName(FString* result, bool bIncludeQuantity, bool bShortName, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, bool, bool, AShooterPlayerController*>(this, "UPrimalItem.GetItemName(bool,bool,AShooterPlayerController*)", result, bIncludeQuantity, bShortName, ForPC); }
	FLinearColor* GetItemQualityColor(FLinearColor* result) { return NativeCall<FLinearColor*, FLinearColor*>(this, "UPrimalItem.GetItemQualityColor()", result); }
	FString* GetItemDescription(FString* result, bool bGetLongDescription, AShooterPlayerController* ForPC, bool bForEngramEntry) { return NativeCall<FString*, FString*, bool, AShooterPlayerController*, bool>(this, "UPrimalItem.GetItemDescription(bool,AShooterPlayerController*,bool)", result, bGetLongDescription, ForPC, bForEngramEntry); }
	UTexture2D* GetItemIcon(AShooterPlayerController* ForPC) { return NativeCall<UTexture2D*, AShooterPlayerController*>(this, "UPrimalItem.GetItemIcon(AShooterPlayerController*)", ForPC); }
	void EquippedItem() { NativeCall<void>(this, "UPrimalItem.EquippedItem()"); }
	void EquipAnimationFinished() { NativeCall<void>(this, "UPrimalItem.EquipAnimationFinished()"); }
	void UnequippedItem() { NativeCall<void>(this, "UPrimalItem.UnequippedItem()"); }
	void UpdatedItem(bool ResetUploadTime, bool DontHaveClientRefreshAttachmentsAfterUpdatingItem) { NativeCall<void, bool, bool>(this, "UPrimalItem.UpdatedItem(bool,bool)", ResetUploadTime, DontHaveClientRefreshAttachmentsAfterUpdatingItem); }
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
	int GetExplicitEntryIndexType(bool bGetBaseValue, UObject* TargetContainer) { return NativeCall<int, bool, UObject*>(this, "UPrimalItem.GetExplicitEntryIndexType(bool,UObject*)", bGetBaseValue, TargetContainer); }
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
	int IncrementItemQuantity(int amount, bool bReplicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption, bool bDontBroadcastItemUpdateEvents) { return NativeCall<int, int, bool, bool, bool, bool, bool, bool>(this, "UPrimalItem.IncrementItemQuantity(int,bool,bool,bool,bool,bool,bool)", amount, bReplicateToClient, bDontUpdateWeight, bIsFromUseConsumption, bIsArkTributeItem, bIsFromCraftingConsumption, bDontBroadcastItemUpdateEvents); }
	FString* GetItemTypeString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemTypeString()", result); }
	FString* GetItemSubtypeString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemSubtypeString()", result); }
	FString* GetItemStatsString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemStatsString()", result); }
	bool MeetBlueprintCraftingRequirements(UPrimalInventoryComponent* compareInventoryComp, int CraftAmountOverride, AShooterPlayerController* ForPlayer, bool bIsForCraftQueueAddition, bool bTestFullQueue, bool bForceUpdateWirelessResources) { return NativeCall<bool, UPrimalInventoryComponent*, int, AShooterPlayerController*, bool, bool, bool>(this, "UPrimalItem.MeetBlueprintCraftingRequirements(UPrimalInventoryComponent*,int,AShooterPlayerController*,bool,bool,bool)", compareInventoryComp, CraftAmountOverride, ForPlayer, bIsForCraftQueueAddition, bTestFullQueue, bForceUpdateWirelessResources); }
	bool CheckForRepairResources(UPrimalInventoryComponent* invComp, float Percent, APlayerController* PC) { return NativeCall<bool, UPrimalInventoryComponent*, float, APlayerController*>(this, "UPrimalItem.CheckForRepairResources(UPrimalInventoryComponent*,float,APlayerController*)", invComp, Percent, PC); }
	void ConsumeResourcesForRepair(UPrimalInventoryComponent* invComp, float Percent, APlayerController* PC) { NativeCall<void, UPrimalInventoryComponent*, float, APlayerController*>(this, "UPrimalItem.ConsumeResourcesForRepair(UPrimalInventoryComponent*,float,APlayerController*)", invComp, Percent, PC); }
	FString* GetCraftingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp, bool bMinimalVersion) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.GetCraftingRequirementsString(UPrimalInventoryComponent*,bool)", result, compareInventoryComp, bMinimalVersion); }
	bool MeetRepairingRequirements(UPrimalInventoryComponent* compareInventoryComp, bool bIsForCraftQueueAddition, bool bForceUpdateWirelessResources, float ForRepairPercentage) { return NativeCall<bool, UPrimalInventoryComponent*, bool, bool, float>(this, "UPrimalItem.MeetRepairingRequirements(UPrimalInventoryComponent*,bool,bool,float)", compareInventoryComp, bIsForCraftQueueAddition, bForceUpdateWirelessResources, ForRepairPercentage); }
	FString* GetRepairingRequirementsString(FString* result, UPrimalInventoryComponent* compareInventoryComp, bool bUseBaseRequirements, float OverrideRepairPercent, APlayerController* OwningPlayer) { return NativeCall<FString*, FString*, UPrimalInventoryComponent*, bool, float, APlayerController*>(this, "UPrimalItem.GetRepairingRequirementsString(UPrimalInventoryComponent*,bool,float,APlayerController*)", result, compareInventoryComp, bUseBaseRequirements, OverrideRepairPercent, OwningPlayer); }
	int IterateRepairingRequirements(std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>* lambda, UPrimalInventoryComponent* compareInventoryComp, bool bUseBaseRequirements, float OverrideRepairPercent, APlayerController* OwningPlayer) { return NativeCall<int, std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>*, UPrimalInventoryComponent*, bool, float, APlayerController*>(this, "UPrimalItem.IterateRepairingRequirements(std::function<void__cdecl(UPrimalItem&,int,int,int,bool)>,UPrimalInventoryComponent*,bool,float,APlayerController*)", lambda, compareInventoryComp, bUseBaseRequirements, OverrideRepairPercent, OwningPlayer); }
	int IterateCraftingRequirements(std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>* lambda, UPrimalInventoryComponent* compareInventoryComp, APlayerController* OwningPlayer) { return NativeCall<int, std::function<void __cdecl(UPrimalItem&, int, int, int, bool)>*, UPrimalInventoryComponent*, APlayerController*>(this, "UPrimalItem.IterateCraftingRequirements(std::function<void__cdecl(UPrimalItem&,int,int,int,bool)>,UPrimalInventoryComponent*,APlayerController*)", lambda, compareInventoryComp, OwningPlayer); }
	float GetItemStatModifier(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatModifier(EPrimalItemStat::Type)", statType); }
	FString* GetItemStatString(FString* result, int statType) { return NativeCall<FString*, FString*, int>(this, "UPrimalItem.GetItemStatString(EPrimalItemStat::Type)", result, statType); }
	bool UsesDurability() { return NativeCall<bool>(this, "UPrimalItem.UsesDurability()"); }
	bool CanRepair(bool bIgnoreInventoryRequirement, bool bIgnoreCraftingRequiresInventoryRequirement, bool bIgnoreBelowMaxDurabilityRequirement) { return NativeCall<bool, bool, bool, bool>(this, "UPrimalItem.CanRepair(bool,bool,bool)", bIgnoreInventoryRequirement, bIgnoreCraftingRequiresInventoryRequirement, bIgnoreBelowMaxDurabilityRequirement); }
	bool CanRepairInInventory(UPrimalInventoryComponent* invComp) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.CanRepairInInventory(UPrimalInventoryComponent&)", invComp); }
	float GetDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.GetDurabilityPercentage()"); }
	float GetMaxDurability() { return NativeCall<float>(this, "UPrimalItem.GetMaxDurability()"); }
	void CraftBlueprint(bool bConsumeResources) { NativeCall<void, bool>(this, "UPrimalItem.CraftBlueprint(bool)", bConsumeResources); }
	bool CanFullyCraft(bool bForceUpdateWirelessResources) { return NativeCall<bool, bool>(this, "UPrimalItem.CanFullyCraft(bool)", bForceUpdateWirelessResources); }
	void StopCraftingRepairing(bool bCheckIfCraftingOrRepairing, bool bSkipClientNotification = false) { NativeCall<void, bool, bool>(this, "UPrimalItem.StopCraftingRepairing(bool,bool)", bCheckIfCraftingOrRepairing, bSkipClientNotification); }
	UPrimalItem* FinishCraftingBlueprint() { return NativeCall<UPrimalItem*>(this, "UPrimalItem.FinishCraftingBlueprint()"); }
	float GetTimeToCraftBlueprint() { return NativeCall<float>(this, "UPrimalItem.GetTimeToCraftBlueprint()"); }
	//     float GetTimeForFullRepair() { return NativeCall<float>(this, "UPrimalItem.GetTimeForFullRepair()"); }
	// FUNCTION MISSING: UPrimalItem.GetTimeForFullRepair()
	static void GenerateItemID(FItemNetID* TheItemID) { NativeCall<void, FItemNetID*>(nullptr, "UPrimalItem.GenerateItemID(FItemNetID&)", TheItemID); }
	void TickCraftingItem(float DeltaTime, AShooterGameState* theGameState) { NativeCall<void, float, AShooterGameState*>(this, "UPrimalItem.TickCraftingItem(float,AShooterGameState*)", DeltaTime, theGameState); }
	float GetCraftingPercent() { return NativeCall<float>(this, "UPrimalItem.GetCraftingPercent()"); }
	float GetRepairingPercent() { return NativeCall<float>(this, "UPrimalItem.GetRepairingPercent()"); }
	void SetQuantity(int NewQuantity, bool ShowHUDNotification) { NativeCall<void, int, bool>(this, "UPrimalItem.SetQuantity(int,bool)", NewQuantity, ShowHUDNotification); }
	bool RepairItem(bool bIgnoreInventoryRequirement, float UseNextRepairPercentage, float RepairSpeedMultiplier, bool bIgnoreCraftingRequiresInventoryRequirement, bool bIgnoreBelowMaxDurabilityRequirement) { return NativeCall<bool, bool, float, float, bool, bool>(this, "UPrimalItem.RepairItem(bool,float,float,bool,bool)", bIgnoreInventoryRequirement, UseNextRepairPercentage, RepairSpeedMultiplier, bIgnoreCraftingRequiresInventoryRequirement, bIgnoreBelowMaxDurabilityRequirement); }
	void FinishRepairing() { NativeCall<void>(this, "UPrimalItem.FinishRepairing()"); }
	void Used(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem.Used(UPrimalItem*,int)", DestinationItem, AdditionalData); }
	void RemoveWeaponAccessory() { NativeCall<void>(this, "UPrimalItem.RemoveWeaponAccessory()"); }
	void ServerRemoveItemSkin(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.ServerRemoveItemSkin()", a2); }
	void ServerRemoveItemSkinOnly(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.ServerRemoveItemSkinOnly()", a2); }
	void ServerRemoveWeaponAccessoryOnly(__int16 a2) { NativeCall<void, __int16>(this, "UPrimalItem.ServerRemoveWeaponAccessoryOnly()", a2); }
	void RemoveClipAmmo(bool bDontUpdateItem) { NativeCall<void, bool>(this, "UPrimalItem.RemoveClipAmmo(bool)", bDontUpdateItem); }
	bool CanStackWithItem(UPrimalItem* otherItem, int* QuantityOverride) { return NativeCall<bool, UPrimalItem*, int*>(this, "UPrimalItem.CanStackWithItem(UPrimalItem*,int*)", otherItem, QuantityOverride); }
	bool CheckAutoCraftBlueprint() { return NativeCall<bool>(this, "UPrimalItem.CheckAutoCraftBlueprint()"); }
	bool CanCraft() { return NativeCall<bool>(this, "UPrimalItem.CanCraft(APlayerController*)"); }
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
	bool CanDrop(bool bForDropInWorld) { return NativeCall<bool, bool>(this, "UPrimalItem.CanDrop(bool)", bForDropInWorld); }
	void PickupAlertDinos(AActor* groundItem) { NativeCall<void, AActor*>(this, "UPrimalItem.PickupAlertDinos(AActor*)", groundItem); }
	void GetItemAttachmentInfos(AActor* OwnerActor) { NativeCall<void, AActor*>(this, "UPrimalItem.GetItemAttachmentInfos(AActor*,bool)", OwnerActor); }
	void SetAttachedMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "UPrimalItem.SetAttachedMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
	bool CanUseWithItemSource(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.CanUseWithItemSource(UPrimalItem*)", DestinationItem); }
	bool IsDyed() { return NativeCall<bool>(this, "UPrimalItem.IsDyed()"); }
	bool CanUseWithItemDestination(UPrimalItem* SourceItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.CanUseWithItemDestination(UPrimalItem*)", SourceItem); }
	bool UseItemOntoItem(UPrimalItem* DestinationItem, int AdditionalData, AShooterPlayerController* ForPC) { return NativeCall<bool, UPrimalItem*, int, AShooterPlayerController*>(this, "UPrimalItem.UseItemOntoItem(UPrimalItem*,int,AShooterPlayerController*)", DestinationItem, AdditionalData, ForPC); }
	void LocalUseItemOntoItem(AShooterPlayerController* ForPC, UPrimalItem* DestinationItem) { NativeCall<void, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalItem.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)", ForPC, DestinationItem); }
	FString* GetPrimaryColorName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetPrimaryColorName()", result); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UPrimalItem.Serialize(FArchive&)", Ar); }
	bool ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { return NativeCall<bool, AShooterPlayerController*, const FString*, bool>(this, "UPrimalItem.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
	void NotifyEditText(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.NotifyEditText(AShooterPlayerController*)", PC); }
	void AddToArkTributeInvenroty(UPrimalInventoryComponent* toInventory, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.AddToArkTributeInvenroty(UPrimalInventoryComponent*,bool)", toInventory, bFromLoad); }
	int GetMaximumAdditionalCrafting(UPrimalInventoryComponent* forComp, AShooterPlayerController* PC) { return NativeCall<int, UPrimalInventoryComponent*, AShooterPlayerController*>(this, "UPrimalItem.GetMaximumAdditionalCrafting(UPrimalInventoryComponent*,AShooterPlayerController*)", forComp, PC); }
	bool CanShowNotificationItem() { return NativeCall<bool>(this, "UPrimalItem.CanShowNotificationItem()"); }
	bool IsItemSkin(bool bCheckCosmeticTabCondition) { return NativeCall<bool, bool>(this, "UPrimalItem.IsItemSkin(bool)", bCheckCosmeticTabCondition); }
	void InventoryLoadedFromSaveGame() { NativeCall<void>(this, "UPrimalItem.InventoryLoadedFromSaveGame()"); }
	bool CheckForInventoryDupes() { return NativeCall<bool>(this, "UPrimalItem.CheckForInventoryDupes()"); }
	void CalcRecipeStats() { NativeCall<void>(this, "UPrimalItem.CalcRecipeStats()"); }
	bool IsUsableConsumable() { return NativeCall<bool>(this, "UPrimalItem.IsUsableConsumable()"); }
	bool CanEquipWeapon() { return NativeCall<bool>(this, "UPrimalItem.CanEquipWeapon()"); }
	bool GetCustomItemData(FName CustomDataName, FCustomItemData* OutData) { return NativeCall<bool, FName, FCustomItemData*>(this, "UPrimalItem.GetCustomItemData(FName,FCustomItemData&)", CustomDataName, OutData); }
	void SetCustomItemData(FCustomItemData* InData) { NativeCall<void, FCustomItemData*>(this, "UPrimalItem.SetCustomItemData(FCustomItemData&)", InData); }
	void RemoveCustomItemData(FName CustomDataName) { NativeCall<void, FName>(this, "UPrimalItem.RemoveCustomItemData(FName)", CustomDataName); }
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
	void OnVersionChange(bool& doDestroy, UWorld* World, AShooterGameMode* gameMode, int versionOverride) { NativeCall<void, bool&, UWorld*, AShooterGameMode*, int>(this, "UPrimalItem.OnVersionChange(bool&,UWorld*,AShooterGameMode*,int)", doDestroy, World, gameMode, versionOverride); }
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
	void ConsumeRepairingResources(float RepairPercent, UPrimalInventoryComponent* OverrideTargetInventory) { NativeCall<void, float, UPrimalInventoryComponent*>(this, "UPrimalItem.ConsumeRepairingResources(float,UPrimalInventoryComponent*)", RepairPercent, OverrideTargetInventory); }
	FPrimalItemSparseClassData* GetPrimalItemSparseClassData(EGetSparseClassDataMethod GetMethod)
	{
		return (FPrimalItemSparseClassData*)this->ClassPrivateField()->GetSparseClassData(GetMethod);
	}
	bool HasCustomItemData(FName CustomDataName) { return NativeCall<bool, FName>(this, "UPrimalItem.HasCustomItemData(FName)", CustomDataName); }

	int& LastMarketIDField() { return *GetNativePointerField<int*>(this, "UPrimalItem.LastMarketID"); }
	float& OverrideCombatMusicPercentageChanceField() { return *GetNativePointerField<float*>(this, "UPrimalItem.OverrideCombatMusicPercentageChance"); }
	__int64& CustomCosmeticModSkinReplacementIDField() { return *GetNativePointerField<__int64*>(this, "UPrimalItem.CustomCosmeticModSkinReplacementID"); }
	float& LastRepairSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalItem.LastRepairSpeedMultiplier"); }
	int& OriginalGenderPlayerMeshTextureMaskMaterialIndexNewField() { return *GetNativePointerField<int*>(this, "UPrimalItem.OriginalGenderPlayerMeshTextureMaskMaterialIndexNew"); }
	int& OriginalGenderPlayerMeshTextureMaskMaterialIndexAltField() { return *GetNativePointerField<int*>(this, "UPrimalItem.OriginalGenderPlayerMeshTextureMaskMaterialIndexAlt"); }
	int& EggNewMutationCountField() { return *GetNativePointerField<int*>(this, "UPrimalItem.EggNewMutationCount"); }
	int& CustomCosmeticModSkinVariantIDField() { return *GetNativePointerField<int*>(this, "UPrimalItem.CustomCosmeticModSkinVariantID"); }
	int& MaxNumItemTraitsField() { return *GetNativePointerField<int*>(this, "UPrimalItem.MaxNumItemTraits"); }
	int& SpoilingItemQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalItem.SpoilingItemQuantity"); }
	unsigned char& ItemVersionField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem.ItemVersion"); }

	FPrimalItemSparseClassData* GetMutablePrimalItemSparseClassData() { return const_cast<FPrimalItemSparseClassData*>(GetPrimalItemSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem"); }

	FJustInTimeTexture2D& BrokenIconJITField() { return *GetNativePointerField<FJustInTimeTexture2D*>(this, "UPrimalItem.BrokenIconJIT"); }
	FJustInTimeTexture2D& CustomBrokenOverlayIconJITField() { return *GetNativePointerField<FJustInTimeTexture2D*>(this, "UPrimalItem.CustomBrokenOverlayIconJIT"); }
	FJustInTimeTexture2D& AlternateItemIconBelowDurabilityJITField() { return *GetNativePointerField<FJustInTimeTexture2D*>(this, "UPrimalItem.AlternateItemIconBelowDurabilityJIT"); }
	FJustInTimeTexture2D& AccessoryActivatedIconOverrideJITField() { return *GetNativePointerField<FJustInTimeTexture2D*>(this, "UPrimalItem.AccessoryActivatedIconOverrideJIT"); }
	FJustInTimeTexture2D& BlueprintBackgroundOverrideTextureJITField() { return *GetNativePointerField<FJustInTimeTexture2D*>(this, "UPrimalItem.BlueprintBackgroundOverrideTextureJIT"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DisabledItemsOnDataListNameField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.DisabledItemsOnDataListName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& EggDinoGeneTraitsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.EggDinoGeneTraits"); }
	TArray<UPrimalItemTrait*, TSizedDefaultAllocator<32> >& MyItemTraitsField() { return *GetNativePointerField<TArray<UPrimalItemTrait*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.MyItemTraits"); }
	TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >& CostumeDinoSaddleOverrideRefsField() { return *GetNativePointerField<TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.CostumeDinoSaddleOverrideRefs"); }
	FName& OriginalGenderPlayerMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem.OriginalGenderPlayerMeshTextureMaskParamName"); }
	FCustomCosmeticAdditionalSettings& CustomCosmeticAuthVarsField() { return *GetNativePointerField<FCustomCosmeticAdditionalSettings*>(this, "UPrimalItem.CustomCosmeticAuthVars"); }
	FTimerHandle& EquipAnimationTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalItem.EquipAnimationTimerHandle"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& NewOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "UPrimalItem.NewOwnerPlayer"); }
	USoundBase*& OverrideCombatMusicSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem.OverrideCombatMusicSound"); }
	UTexture2D*& BlueprintBackgroundOverrideTexture_DEPRECATEDField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BlueprintBackgroundOverrideTexture_DEPRECATED"); }
	UTexture2D*& OriginalGenderPlayerMeshNoItemDefaultTextureMaskField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.OriginalGenderPlayerMeshNoItemDefaultTextureMask"); }
	UTexture2D*& BrokenIcon_DEPRECATEDField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.BrokenIcon_DEPRECATED"); }
	UTexture2D*& CustomBrokenOverlayIcon_DEPRECATEDField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.CustomBrokenOverlayIcon_DEPRECATED"); }
	UTexture2D*& AlternateItemIconBelowDurability_DEPRECATEDField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AlternateItemIconBelowDurability_DEPRECATED"); }
	UAnimSequence*& OverrideDinoRiderMoveAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "UPrimalItem.OverrideDinoRiderMoveAnimation"); }
	UAnimSequence*& OverrideDinoRiderAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "UPrimalItem.OverrideDinoRiderAnimation"); }
	UTexture2D*& AccessoryActivatedIconOverride_DEPRECATEDField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem.AccessoryActivatedIconOverride_DEPRECATED"); }
	UClass*& CustomCosmeticModSkinReplacementOriginalClassField() { return *GetNativePointerField<UClass**>(this, "UPrimalItem.CustomCosmeticModSkinReplacementOriginalClass"); }
	UE::Math::TVector2<double>& CustomCosmeticAttachmentZOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalItem.CustomCosmeticAttachmentZOffset"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ItemRegistryTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItem.ItemRegistryTags"); }
	TEnumAsByte<EPrimalEquipmentType::Type>& AccessorySlotOverrideField() { return *GetNativePointerField<TEnumAsByte<EPrimalEquipmentType::Type>*>(this, "UPrimalItem.AccessorySlotOverride"); }
	TWeakObjectPtr<ADroppedItem, FWeakObjectPtr>& DroppedItemActorField() { return *GetNativePointerField<TWeakObjectPtr<ADroppedItem, FWeakObjectPtr>*>(this, "UPrimalItem.DroppedItemActor"); }
	BitFieldValue<bool, unsigned char> bIsClubArkReward() { return { this, "UPrimalItem.bIsClubArkReward"}; }
	BitFieldValue<bool, unsigned char> bIsClubArkTrade() { return { this, "UPrimalItem.bIsClubArkTrade"}; }
	BitFieldValue<bool, unsigned char> bSkipEquipAnimation() { return { this, "UPrimalItem.bSkipEquipAnimation"}; }
	BitFieldValue<bool, unsigned char> bRequiresBobsTallTalesToCraft() { return { this, "UPrimalItem.bRequiresBobsTallTalesToCraft"}; }
	BitFieldValue<bool, unsigned char> bPreventColdStorage() { return { this, "UPrimalItem.bPreventColdStorage"}; }
	BitFieldValue<bool, unsigned char> bIsItemAccessory() { return { this, "UPrimalItem.bIsItemAccessory"}; }
	BitFieldValue<bool, unsigned char> bSkinReequipOnClientBeginPlay() { return { this, "UPrimalItem.bSkinReequipOnClientBeginPlay"}; }
	BitFieldValue<bool, unsigned char> bIsGhostItemSkin() { return { this, "UPrimalItem.bIsGhostItemSkin"}; }
	BitFieldValue<bool, unsigned char> bIsEmbryo() { return { this, "UPrimalItem.bIsEmbryo"}; }
	BitFieldValue<bool, unsigned char> bEquipmentHatHideItemEyeHair() { return { this, "UPrimalItem.bEquipmentHatHideItemEyeHair"}; }
	BitFieldValue<bool, unsigned char> bEquipmentForceHideAllHairComponents() { return { this, "UPrimalItem.bEquipmentForceHideAllHairComponents"}; }
	BitFieldValue<bool, unsigned char> bUseMultiSaddleMeshOverrideMap() { return { this, "UPrimalItem.bUseMultiSaddleMeshOverrideMap"}; }
	BitFieldValue<bool, unsigned char> bUseBPAddedToInventory() { return { this, "UPrimalItem.bUseBPAddedToInventory"}; }
	BitFieldValue<bool, unsigned char> bUseBPRemovedFromInventory() { return { this, "UPrimalItem.bUseBPRemovedFromInventory"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideRemainingCooldownTime() { return { this, "UPrimalItem.bUseBPOverrideRemainingCooldownTime"}; }
	BitFieldValue<bool, unsigned char> bUseBPPrimalDinoCharacterConsumedItem() { return { this, "UPrimalItem.bUseBPPrimalDinoCharacterConsumedItem"}; }
	BitFieldValue<bool, unsigned char> bAllowWakingTameZeroAffinityEffectivenessMulti() { return { this, "UPrimalItem.bAllowWakingTameZeroAffinityEffectivenessMulti"}; }
	BitFieldValue<bool, unsigned char> bForceRequiresExplicitOwnerChecks() { return { this, "UPrimalItem.bForceRequiresExplicitOwnerChecks"}; }
	BitFieldValue<bool, unsigned char> bBuffToGiveOwnerWhenEquipped_SoftRefCached() { return { this, "UPrimalItem.bBuffToGiveOwnerWhenEquipped_SoftRefCached"}; }
	BitFieldValue<bool, unsigned char> bItemIsUsable() { return { this, "UPrimalItem.bItemIsUsable"}; }
	BitFieldValue<bool, unsigned char> bPreventNotificationItemCombatMode() { return { this, "UPrimalItem.bPreventNotificationItemCombatMode"}; }
	BitFieldValue<bool, unsigned char> bForceNotificationItemCombatMode() { return { this, "UPrimalItem.bForceNotificationItemCombatMode"}; }
	BitFieldValue<bool, unsigned char> bUseBPPreventUpload() { return { this, "UPrimalItem.bUseBPPreventUpload"}; }
	BitFieldValue<bool, unsigned char> bPreventModifyArmorValue() { return { this, "UPrimalItem.bPreventModifyArmorValue"}; }
	BitFieldValue<bool, unsigned char> bDontRemoveOnEquip() { return { this, "UPrimalItem.bDontRemoveOnEquip"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideAnimMontage() { return { this, "UPrimalItem.bUseBPOverrideAnimMontage"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideSound() { return { this, "UPrimalItem.bUseBPOverrideSound"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideDeathAnim() { return { this, "UPrimalItem.bUseBPOverrideDeathAnim"}; }
	BitFieldValue<bool, unsigned char> bIsWaitingForShowAnim() { return { this, "UPrimalItem.bIsWaitingForShowAnim"}; }
	BitFieldValue<bool, unsigned char> bCostumeHideSaddleMesh() { return { this, "UPrimalItem.bCostumeHideSaddleMesh"}; }
	BitFieldValue<bool, unsigned char> bDontUseDurabilityDamageOverlay() { return { this, "UPrimalItem.bDontUseDurabilityDamageOverlay"}; }
	BitFieldValue<bool, unsigned char> bIsCustomCosmeticDisplay() { return { this, "UPrimalItem.bIsCustomCosmeticDisplay"}; }
	BitFieldValue<bool, unsigned char> AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters() { return { this, "UPrimalItem.AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters"}; }
	BitFieldValue<bool, unsigned char> AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers() { return { this, "UPrimalItem.AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers"}; }
	BitFieldValue<bool, unsigned char> bUnlockAsPersistentProfileItemOnCraft() { return { this, "UPrimalItem.bUnlockAsPersistentProfileItemOnCraft"}; }
	BitFieldValue<bool, unsigned char> bForceAllowDragging() { return { this, "UPrimalItem.bForceAllowDragging"}; }
	BitFieldValue<bool, unsigned char> bPreventRegularDroppingButStillDropInBulkAndDestructionCaches() { return { this, "UPrimalItem.bPreventRegularDroppingButStillDropInBulkAndDestructionCaches"}; }
	BitFieldValue<bool, unsigned char> bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned() { return { this, "UPrimalItem.bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetItemStatString() { return { this, "UPrimalItem.bUseBPGetItemStatString"}; }
	BitFieldValue<bool, unsigned char> bUseBPOverrideHoldItemSlotAction() { return { this, "UPrimalItem.bUseBPOverrideHoldItemSlotAction"}; }
	BitFieldValue<bool, unsigned char> bDontCountItemForUploadRestrictions() { return { this, "UPrimalItem.bDontCountItemForUploadRestrictions"}; }
	BitFieldValue<bool, unsigned char> bDoApplyOriginalColorsWhenUnskinned() { return { this, "UPrimalItem.bDoApplyOriginalColorsWhenUnskinned"}; }
	BitFieldValue<bool, unsigned char> bForceQualityColorOverlay() { return { this, "UPrimalItem.bForceQualityColorOverlay"}; }
	BitFieldValue<bool, unsigned char> bUseOntoItemRequiresImmobilization() { return { this, "UPrimalItem.bUseOntoItemRequiresImmobilization"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanPlayerUseItem() { return { this, "UPrimalItem.bUseBPCanPlayerUseItem"}; }
	BitFieldValue<bool, unsigned char> bSaddleUseRegularDurability() { return { this, "UPrimalItem.bSaddleUseRegularDurability"}; }
	BitFieldValue<bool, unsigned char> bSetCraftingActorToSpawnTeamFromCrafter() { return { this, "UPrimalItem.bSetCraftingActorToSpawnTeamFromCrafter"}; }
	BitFieldValue<bool, unsigned char> bMuteExtraEquipmentSounds() { return { this, "UPrimalItem.bMuteExtraEquipmentSounds"}; }
	BitFieldValue<bool, unsigned char> bDontScaleSnapshot() { return { this, "UPrimalItem.bDontScaleSnapshot"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnCropPhaseIncrease() { return { this, "UPrimalItem.bUseBPOnCropPhaseIncrease"}; }
	BitFieldValue<bool, unsigned char> bForceHideAllDefaultPawnAttachmentsWhenEquipped() { return { this, "UPrimalItem.bForceHideAllDefaultPawnAttachmentsWhenEquipped"}; }
	BitFieldValue<bool, unsigned char> bDisableAutoDecreaseDurabilityOverTime() { return { this, "UPrimalItem.bDisableAutoDecreaseDurabilityOverTime"}; }
	BitFieldValue<bool, unsigned char> bEquipPreventsCharacterSkinsCosmetics() { return { this, "UPrimalItem.bEquipPreventsCharacterSkinsCosmetics"}; }
	BitFieldValue<bool, unsigned char> bIsCharacterSkinOrCosmetic() { return { this, "UPrimalItem.bIsCharacterSkinOrCosmetic"}; }
	BitFieldValue<bool, unsigned char> bLazyAutoDecreaseDurability() { return { this, "UPrimalItem.bLazyAutoDecreaseDurability"}; }
	void ClientUpdatedWeaponClipAmmo() { NativeCall<void>(this, "UPrimalItem.ClientUpdatedWeaponClipAmmo()"); }
	UParticleSystem* BPGetFuelParticleSystemOverride(APrimalStructure* ForStructure) { return NativeCall<UParticleSystem*, APrimalStructure*>(this, "UPrimalItem.BPGetFuelParticleSystemOverride(APrimalStructure*)", ForStructure); }
	bool WantsToUseCustomCosmeticEmote(FName EmoteName) { return NativeCall<bool, FName>(this, "UPrimalItem.WantsToUseCustomCosmeticEmote(FName)", EmoteName); }
	bool HasItemTrait(FName TraitName) { return NativeCall<bool, FName>(this, "UPrimalItem.HasItemTrait(FName)", TraitName); }
	void SetAttachmentVisibility(bool bHide) { NativeCall<void, bool>(this, "UPrimalItem.SetAttachmentVisibility(bool)", bHide); }
	float GetInventoryIconDisplayTextSize() { return NativeCall<float>(this, "UPrimalItem.GetInventoryIconDisplayTextSize()"); }
	void BPOverrideFPVAnimMontage(UAnimMontage*& AnimMontage, float& PlayRate, FName& StartSectionName, bool& bForceTickPoseAndServerUpdateMesh, bool& bForceTickPoseOnServer, float& BlendInTime, float& BlendOutTime, bool bPauseOnFinish, APrimalCharacter* ForChar) { NativeCall<void, UAnimMontage*&, float&, FName&, bool&, bool&, float&, float&, bool, APrimalCharacter*>(this, "UPrimalItem.BPOverrideFPVAnimMontage(UAnimMontage*&,float&,FName&,bool&,bool&,float&,float&,bool,APrimalCharacter*)", AnimMontage, PlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime, bPauseOnFinish, ForChar); }
	UTexture2D* OverrideCustomCosmeticEmoteIcon_Implementation(FName EmoteName) { return NativeCall<UTexture2D*, FName>(this, "UPrimalItem.OverrideCustomCosmeticEmoteIcon_Implementation(FName)", EmoteName); }
	FString* BPGetSkinnedCustomInventoryWidgetText(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPGetSkinnedCustomInventoryWidgetText()", result); }
	bool BPSupportUseOntoItem(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.BPSupportUseOntoItem(UPrimalItem*)", DestinationItem); }
	void CatchUpLazyDurability() { NativeCall<void>(this, "UPrimalItem.CatchUpLazyDurability()"); }
	void BPGetItemID(int& ItemID1, int& ItemID2) { NativeCall<void, int&, int&>(this, "UPrimalItem.BPGetItemID(int&,int&)", ItemID1, ItemID2); }
	bool HasCharacterSkinApplied() { return NativeCall<bool>(this, "UPrimalItem.HasCharacterSkinApplied()"); }
	void BPShieldBlockedDamage(AShooterCharacter* ForShooterCharacter, float BlockedDamage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, UE::Math::TVector<double>* HitPoint) { if (!HitPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AShooterCharacter *, float, const FDamageEvent &, AController *, AActor *, UE :: Math :: TVector < double >>(this, "UPrimalItem.BPShieldBlockedDamage(AShooterCharacter*,float,FDamageEvent&,AController*,AActor*,UE::Math::TVector<double>)", ForShooterCharacter, BlockedDamage, DamageEvent, EventInstigator, DamageCauser, *HitPoint); }
	void BPTributeItemUploaded(UObject* ContextObject) { NativeCall<void, UObject*>(this, "UPrimalItem.BPTributeItemUploaded(UObject*)", ContextObject); }
	UPrimalItemTrait* GetItemTrait(FName TraitName) { return NativeCall<UPrimalItemTrait*, FName>(this, "UPrimalItem.GetItemTrait(FName)", TraitName); }
	bool GetInstanceOverrideByValue_IsCursedItem() { return NativeCall<bool>(this, "UPrimalItem.GetInstanceOverrideByValue_IsCursedItem()"); }
	bool IsPreventUploadIncludingLiveTuning() { return NativeCall<bool>(this, "UPrimalItem.IsPreventUploadIncludingLiveTuning()"); }
	void BPNotifyItemRefreshed() { NativeCall<void>(this, "UPrimalItem.BPNotifyItemRefreshed()"); }
	float BPGetItemDurabilityPercentage() { return NativeCall<float>(this, "UPrimalItem.BPGetItemDurabilityPercentage()"); }
	bool GetRequiresTidesOfFortuneToCraft() { return NativeCall<bool>(this, "UPrimalItem.GetRequiresTidesOfFortuneToCraft()"); }
	void BPPreInitializeItem(UWorld* OptionalInitWorld) { NativeCall<void, UWorld*>(this, "UPrimalItem.BPPreInitializeItem(UWorld*)", OptionalInitWorld); }
	void ApplyCustomCosmeticBuff() { NativeCall<void>(this, "UPrimalItem.ApplyCustomCosmeticBuff()"); }
	void Crafted(bool bWasCraftedFromEngram) { NativeCall<void, bool>(this, "UPrimalItem.Crafted(bool)", bWasCraftedFromEngram); }
	USoundBase* BPGetFuelAudioOverride(APrimalStructure* ForStructure) { return NativeCall<USoundBase*, APrimalStructure*>(this, "UPrimalItem.BPGetFuelAudioOverride(APrimalStructure*)", ForStructure); }
	void LocalUseItemReleaseBP(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUseItemReleaseBP(AShooterPlayerController*)", ForPC); }
	void ClearAssociatedDinoID() { NativeCall<void>(this, "UPrimalItem.ClearAssociatedDinoID()"); }
	bool OverrideCustomCosmeticEmoteHideWeapon(FName EmoteName) { return NativeCall<bool, FName>(this, "UPrimalItem.OverrideCustomCosmeticEmoteHideWeapon(FName)", EmoteName); }
	int GetWeaponClipAmmo() { return NativeCall<int>(this, "UPrimalItem.GetWeaponClipAmmo()"); }
	void BlueprintUsed() { NativeCall<void>(this, "UPrimalItem.BlueprintUsed()"); }
	void BPGetItemNetInfo() { NativeCall<void>(this, "UPrimalItem.BPGetItemNetInfo()"); }
	FColor BPGetCustomDurabilityTextColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalItem.BPGetCustomDurabilityTextColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	int GetAttachedComponentsNum() { return NativeCall<int>(this, "UPrimalItem.GetAttachedComponentsNum()"); }
	void ApplyColorsFromStructure(APrimalStructure* theStructure) { NativeCall<void, APrimalStructure*>(this, "UPrimalItem.ApplyColorsFromStructure(APrimalStructure*)", theStructure); }
	bool BPConsumeProjectileImpact(AShooterProjectile* theProjectile, const FHitResult& HitResult) { return NativeCall<bool, AShooterProjectile*, const FHitResult&>(this, "UPrimalItem.BPConsumeProjectileImpact(AShooterProjectile*,FHitResult&)", theProjectile, HitResult); }
	void InitItemIcon() { NativeCall<void>(this, "UPrimalItem.InitItemIcon()"); }
	void BPOnCropPlanted(AActor* CropPlotReference) { NativeCall<void, AActor*>(this, "UPrimalItem.BPOnCropPlanted(AActor*)", CropPlotReference); }
	void BPServerVerifyStructurePlacementData() { NativeCall<void>(this, "UPrimalItem.BPServerVerifyStructurePlacementData()"); }
	bool CanPlayerCheatSpawn(APlayerController* player) { return NativeCall<bool, APlayerController*>(this, "UPrimalItem.CanPlayerCheatSpawn(APlayerController*)", player); }
	void ShowHUDNotificationForAdd() { NativeCall<void>(this, "UPrimalItem.ShowHUDNotificationForAdd()"); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "UPrimalItem.GetObject()"); }
	bool GetMinimapMarkForItem(FMinimapMark& OutMark) { return NativeCall<bool, FMinimapMark&>(this, "UPrimalItem.GetMinimapMarkForItem(FMinimapMark&)", OutMark); }
	void RemoveFromWorldItemMap() { NativeCall<void>(this, "UPrimalItem.RemoveFromWorldItemMap()"); }
	void WantsToOverrideGender_Implementation(bool& bWantsOverride, bool& bNewIsFemale) { NativeCall<void, bool&, bool&>(this, "UPrimalItem.WantsToOverrideGender_Implementation(bool&,bool&)", bWantsOverride, bNewIsFemale); }
	void InitItemTraitsFromCustomData() { NativeCall<void>(this, "UPrimalItem.InitItemTraitsFromCustomData()"); }
	AActor* BPCustomSpawningEvent(UE::Math::TVector<double>* SpawnLocation, UE::Math::TRotator<double>* SpawnRotation, AActor* SpawningActor, AActor* IgnoreActor, bool& bOutSpawned, FString& FailureReason, UE::Math::TVector<double>& OutNewLocation, APlayerController* ByController) { if (!SpawnLocation) throw std::invalid_argument("Null native value parameter"); if (!SpawnRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<AActor *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, AActor *, AActor *, bool &, FString &, UE :: Math :: TVector < double > &, APlayerController *>(this, "UPrimalItem.BPCustomSpawningEvent(UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,AActor*,bool&,FString&,UE::Math::TVector<double>&,APlayerController*)", *SpawnLocation, *SpawnRotation, SpawningActor, IgnoreActor, bOutSpawned, FailureReason, OutNewLocation, ByController); }
	void BPOnUpdatedItemContextMenu() { NativeCall<void>(this, "UPrimalItem.BPOnUpdatedItemContextMenu()"); }
	void BPPreUseItem() { NativeCall<void>(this, "UPrimalItem.BPPreUseItem()"); }
	USkeletalMeshComponent* BPSkinOverrideWeaponFPVMasterPoseComponent() { return NativeCall<USkeletalMeshComponent*>(this, "UPrimalItem.BPSkinOverrideWeaponFPVMasterPoseComponent()"); }
	bool GetRequiresBobsTallTalesORTOFToCraft_Implementation() { return NativeCall<bool>(this, "UPrimalItem.GetRequiresBobsTallTalesORTOFToCraft_Implementation()"); }
	int GetCraftingResourceRequirement(int CraftingResourceIndex) { return NativeCall<int, int>(this, "UPrimalItem.GetCraftingResourceRequirement(int)", CraftingResourceIndex); }
	FString* GetTendingFailReason_Implementation(FString* result, APlayerController* ForPC) { return NativeCall<FString*, FString*, APlayerController*>(this, "UPrimalItem.GetTendingFailReason_Implementation(APlayerController*)", result, ForPC); }
	void ClearItemIcon() { NativeCall<void>(this, "UPrimalItem.ClearItemIcon()"); }
	void BPSetupHUDIconMaterial(UMaterialInstanceDynamic* theMID) { NativeCall<void, UMaterialInstanceDynamic*>(this, "UPrimalItem.BPSetupHUDIconMaterial(UMaterialInstanceDynamic*)", theMID); }
	FName GetUnderwearOverrideTag() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalItem.GetUnderwearOverrideTag()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool GetAppliedCustomCosmeticData(__int64& CustomCosmeticSkinID, int& CustomCosmeticSkinVariantID, FCustomCosmeticAdditionalSettings& CosmeticExtraSettings) { return NativeCall<bool, __int64&, int&, FCustomCosmeticAdditionalSettings&>(this, "UPrimalItem.GetAppliedCustomCosmeticData(__int64&,int&,FCustomCosmeticAdditionalSettings&)", CustomCosmeticSkinID, CustomCosmeticSkinVariantID, CosmeticExtraSettings); }
	void BPOverrideInheritedStatWeight(APrimalDinoCharacter* ForDino, int& StatType, float& Weight) { NativeCall<void, APrimalDinoCharacter*, int&, float&>(this, "UPrimalItem.BPOverrideInheritedStatWeight(APrimalDinoCharacter*,int&,float&)", ForDino, StatType, Weight); }
	void BPOnVersionChange(UWorld* World, AShooterGameMode* gameMode, bool bIsOfficial, bool& doDestroy) { NativeCall<void, UWorld*, AShooterGameMode*, bool, bool&>(this, "UPrimalItem.BPOnVersionChange(UWorld*,AShooterGameMode*,bool,bool&)", World, gameMode, bIsOfficial, doDestroy); }
	bool GetRequiresTidesOfFortuneToCraft_Implementation() { return NativeCall<bool>(this, "UPrimalItem.GetRequiresTidesOfFortuneToCraft_Implementation()"); }
	void BPCrafted() { NativeCall<void>(this, "UPrimalItem.BPCrafted()"); }
	void ResolveAccessoryOverrideSlot(UPrimalInventoryComponent* ForInventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "UPrimalItem.ResolveAccessoryOverrideSlot(UPrimalInventoryComponent*)", ForInventory); }
	FString* GetItemShortName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetItemShortName()", result); }
	bool IsValidItemForCosmeticAuthSettings(bool bCheckEquip) { return NativeCall<bool, bool>(this, "UPrimalItem.IsValidItemForCosmeticAuthSettings(bool)", bCheckEquip); }
	void OnModDownloadComplete(bool bSuccess, const FInstalledMod& InstalledMod) { NativeCall<void, bool, const FInstalledMod&>(this, "UPrimalItem.OnModDownloadComplete(bool,FInstalledMod&)", bSuccess, InstalledMod); }
	UPrimalInventoryComponent* GetInitializeItemOwnerInventory() { return NativeCall<UPrimalInventoryComponent*>(this, "UPrimalItem.GetInitializeItemOwnerInventory()"); }
	FString* GetInventoryIconDisplayText(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.GetInventoryIconDisplayText()", result); }
	bool PlantedAsCropTryMultiUse_Implementation(APlayerController* ForPC, int UseIndex, AActor* CropPlotReference) { return NativeCall<bool, APlayerController*, int, AActor*>(this, "UPrimalItem.PlantedAsCropTryMultiUse_Implementation(APlayerController*,int,AActor*)", ForPC, UseIndex, CropPlotReference); }
	bool IsFuelItemForOwner() { return NativeCall<bool>(this, "UPrimalItem.IsFuelItemForOwner()"); }
	void BlueprintUnequipped() { NativeCall<void>(this, "UPrimalItem.BlueprintUnequipped()"); }
	void BPAddedToInventory(UPrimalInventoryComponent* theInventory, bool bEquipItem) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.BPAddedToInventory(UPrimalInventoryComponent*,bool)", theInventory, bEquipItem); }
	float GetWeaponTemplateHarvestDamageMultiplier() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateHarvestDamageMultiplier()"); }
	bool CanPickUp() { return NativeCall<bool>(this, "UPrimalItem.CanPickUp()"); }
	void BPInitItemColors(TArray<int, TSizedDefaultAllocator<32> >& ColorIDs) { NativeCall<void, TArray<int, TSizedDefaultAllocator<32> >&>(this, "UPrimalItem.BPInitItemColors(TArray<int,TSizedDefaultAllocator<32>>&)", ColorIDs); }
	bool HasAvailableCustomCosmetics() { return NativeCall<bool>(this, "UPrimalItem.HasAvailableCustomCosmetics()"); }
	void SetItemStatInfo(int idx, const FItemStatInfo& val) { NativeCall<void, int, const FItemStatInfo&>(this, "UPrimalItem.SetItemStatInfo(int,FItemStatInfo&)", idx, val); }
	void BPOnItemAddedToInventory(UPrimalInventoryComponent* InventoryAddedTo, bool EquippedThisItem) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UPrimalItem.BPOnItemAddedToInventory(UPrimalInventoryComponent*,bool)", InventoryAddedTo, EquippedThisItem); }
	int BPGetNumberOfDefaultSaddleStructures_Implementation() { return NativeCall<int>(this, "UPrimalItem.BPGetNumberOfDefaultSaddleStructures_Implementation()"); }
	void BPInitIconMaterial() { NativeCall<void>(this, "UPrimalItem.BPInitIconMaterial()"); }
	void EquippedBlueprintTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedBlueprintTick(float)", DeltaSeconds); }
	bool GetItemCustomColor(int ColorRegion, FLinearColor& outColor) { return NativeCall<bool, int, FLinearColor&>(this, "UPrimalItem.GetItemCustomColor(int,FLinearColor&)", ColorRegion, outColor); }
	float GetWeaponTemplateMeleeDamageAmount() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateMeleeDamageAmount()"); }
	bool GetInstanceOverrideByValue_UseCustomContextMenuOptions() { return NativeCall<bool>(this, "UPrimalItem.GetInstanceOverrideByValue_UseCustomContextMenuOptions()"); }
	void SetCustomColorParams(UMaterialInstanceDynamic* theMIC, const FLinearColor& theColor, int theIndex) { NativeCall<void, UMaterialInstanceDynamic*, const FLinearColor&, int>(this, "UPrimalItem.SetCustomColorParams(UMaterialInstanceDynamic*,FLinearColor&,int)", theMIC, theColor, theIndex); }
	void BPDrawItemIcon(UCanvas* ItemCanvas, const UE::Math::TVector2<double>& ItemCanvasSize, const UE::Math::TVector2<double>& ItemCanvasScale, bool bItemEnabled, const FLinearColor& TheTintColor) { NativeCall<void, UCanvas*, const UE::Math::TVector2<double>&, const UE::Math::TVector2<double>&, bool, const FLinearColor&>(this, "UPrimalItem.BPDrawItemIcon(UCanvas*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,bool,FLinearColor&)", ItemCanvas, ItemCanvasSize, ItemCanvasScale, bItemEnabled, TheTintColor); }
	bool BPShouldForceAllowSaddleBasing_Implementation() { return NativeCall<bool>(this, "UPrimalItem.BPShouldForceAllowSaddleBasing_Implementation()"); }
	bool ShouldAlwaysShowInFolder(int FolderDepth, bool bShowFolders) { return NativeCall<bool, int, bool>(this, "UPrimalItem.ShouldAlwaysShowInFolder(int,bool)", FolderDepth, bShowFolders); }
	bool WantsToUseCustomCosmeticEmote_Implementation(FName EmoteName) { return NativeCall<bool, FName>(this, "UPrimalItem.WantsToUseCustomCosmeticEmote_Implementation(FName)", EmoteName); }
	void BPEquippedItemOnXPEarning(APrimalCharacter* forChar, float howMuchXP, EXPType::Type TheXPType) { NativeCall<void, APrimalCharacter*, float, EXPType::Type>(this, "UPrimalItem.BPEquippedItemOnXPEarning(APrimalCharacter*,float,EXPType::Type)", forChar, howMuchXP, TheXPType); }
	void BPPostConstructAttachment(int AttachmentIndex, UActorComponent* AttachedComponent) { NativeCall<void, int, UActorComponent*>(this, "UPrimalItem.BPPostConstructAttachment(int,UActorComponent*)", AttachmentIndex, AttachedComponent); }
	bool CanRepair_V2(bool bIgnoreInventoryRequirement, bool bIgnoreCraftingRequiresInventoryRequirement, bool bIgnoreBelowMaxDurabilityRequirement, bool ReturnCustomCosmeticModSkinReplacementOriginalClass) { return NativeCall<bool, bool, bool, bool, bool>(this, "UPrimalItem.CanRepair_V2(bool,bool,bool,bool)", bIgnoreInventoryRequirement, bIgnoreCraftingRequiresInventoryRequirement, bIgnoreBelowMaxDurabilityRequirement, ReturnCustomCosmeticModSkinReplacementOriginalClass); }
	bool ShouldCropSpawnedCreatureGetTamingEffectivenessLevels() { return NativeCall<bool>(this, "UPrimalItem.ShouldCropSpawnedCreatureGetTamingEffectivenessLevels()"); }
	FString* GetTendingFailReason(FString* result, APlayerController* ForPC) { return NativeCall<FString*, FString*, APlayerController*>(this, "UPrimalItem.GetTendingFailReason(APlayerController*)", result, ForPC); }
	UPrimalItem* GetWeaponAmmoOverrideItemCDO() { return NativeCall<UPrimalItem*>(this, "UPrimalItem.GetWeaponAmmoOverrideItemCDO()"); }
	void WantsToOverrideGender(bool& bWantsOverride, bool& bNewIsFemale) { NativeCall<void, bool&, bool&>(this, "UPrimalItem.WantsToOverrideGender(bool&,bool&)", bWantsOverride, bNewIsFemale); }
	FString* OverrideCustomCosmeticEmoteDescription_Implementation(FString* result, FName EmoteName) { return NativeCall<FString*, FString*, FName>(this, "UPrimalItem.OverrideCustomCosmeticEmoteDescription_Implementation(FName)", result, EmoteName); }
	float HandleShieldDamageBlocking(AShooterCharacter* ForShooterCharacter, float DamageIn, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser, UE::Math::TVector<double>* HitPoint) { if (!HitPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, AShooterCharacter *, float, const FDamageEvent &, AController *, AActor *, UE :: Math :: TVector < double >>(this, "UPrimalItem.HandleShieldDamageBlocking(AShooterCharacter*,float,FDamageEvent&,AController*,AActor*,UE::Math::TVector<double>)", ForShooterCharacter, DamageIn, DamageEvent, EventInstigator, DamageCauser, *HitPoint); }
	float GetDurabilityPercentage_V2(bool ReturnCustomCosmeticModSkinReplacementOriginalClass) { return NativeCall<float, bool>(this, "UPrimalItem.GetDurabilityPercentage_V2(bool)", ReturnCustomCosmeticModSkinReplacementOriginalClass); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalItem._getUObject()"); }
	UClass* GetCustomCosmeticBuffToGiveOwnerWhenEquipped() { return NativeCall<UClass*>(this, "UPrimalItem.GetCustomCosmeticBuffToGiveOwnerWhenEquipped()"); }
	void LocalUseStartHoldBP(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUseStartHoldBP(AShooterPlayerController*)", ForPC); }
	void BPOnCropPhaseIncrease(int CropPhase, AActor* CropPlotReference) { NativeCall<void, int, AActor*>(this, "UPrimalItem.BPOnCropPhaseIncrease(int,AActor*)", CropPhase, CropPlotReference); }
	void BPOnRepaired(float RepairPercent) { NativeCall<void, float>(this, "UPrimalItem.BPOnRepaired(float)", RepairPercent); }
	void BPUsedOntoItem(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem.BPUsedOntoItem(UPrimalItem*,int)", DestinationItem, AdditionalData); }
	void BPInitFromItemNetInfo() { NativeCall<void>(this, "UPrimalItem.BPInitFromItemNetInfo()"); }
	bool CanBeDyed() { return NativeCall<bool>(this, "UPrimalItem.CanBeDyed()"); }
	float GetItemStatModifierForTemplateItem(EPrimalItemStat::Type statType) { return NativeCall<float, EPrimalItemStat::Type>(this, "UPrimalItem.GetItemStatModifierForTemplateItem(EPrimalItemStat::Type)", statType); }
	float BPGetCropTendingWindowBeforeLosingEffectiveness() { return NativeCall<float>(this, "UPrimalItem.BPGetCropTendingWindowBeforeLosingEffectiveness()"); }
	float BPGetSaddleWeightMultiplier() { return NativeCall<float>(this, "UPrimalItem.BPGetSaddleWeightMultiplier()"); }
	void SetItemStatValues(int idx, int val) { NativeCall<void, int, int>(this, "UPrimalItem.SetItemStatValues(int,int)", idx, val); }
	FColor GetItemTypeColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalItem.GetItemTypeColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void BPPrimalDinoCharacterConsumedItem(APrimalDinoCharacter* DinoCharacter) { NativeCall<void, APrimalDinoCharacter*>(this, "UPrimalItem.BPPrimalDinoCharacterConsumedItem(APrimalDinoCharacter*)", DinoCharacter); }
	void BPAnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotifyState*>(this, "UPrimalItem.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ModifyFolderPath(TArray<FString, TSizedDefaultAllocator<32> >& InFolderPath, bool bShowFolders) { NativeCall<void, TArray<FString, TSizedDefaultAllocator<32> >&, bool>(this, "UPrimalItem.ModifyFolderPath(TArray<FString,TSizedDefaultAllocator<32>>&,bool)", InFolderPath, bShowFolders); }
	void BlueprintPostEquipped(bool bIsFromSaveGame) { NativeCall<void, bool>(this, "UPrimalItem.BlueprintPostEquipped(bool)", bIsFromSaveGame); }
	bool BPIsValidForCrafting() { return NativeCall<bool>(this, "UPrimalItem.BPIsValidForCrafting()"); }
	static bool GetMinimapMarkForItemID(int ItemID1, int ItemID2, FMinimapMark& OutMark) { return NativeCall<bool, int, int, FMinimapMark&>(nullptr, "UPrimalItem.GetMinimapMarkForItemID(int,int,FMinimapMark&)", ItemID1, ItemID2, OutMark); }
	float GetWeaponTemplateDurabilityToConsumePerMeleeHit() { return NativeCall<float>(this, "UPrimalItem.GetWeaponTemplateDurabilityToConsumePerMeleeHit()"); }
	UAnimationAsset* BPOverrideDeathAnim(FName DeathAnimType) { return NativeCall<UAnimationAsset*, FName>(this, "UPrimalItem.BPOverrideDeathAnim(FName)", DeathAnimType); }
	bool CanTendCrop(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalItem.CanTendCrop(APlayerController*)", ForPC); }
	bool CanPlayerCheatSpawn_Implementation(APlayerController* player) { return NativeCall<bool, APlayerController*>(this, "UPrimalItem.CanPlayerCheatSpawn_Implementation(APlayerController*)", player); }
	void BPAnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalItem.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void EquippedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItem.EquippedTick(float)", DeltaSeconds); }
	bool BPPreventEquip(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.BPPreventEquip(UPrimalInventoryComponent*)", toInventory); }
	bool IsAutoUnlocked() { return NativeCall<bool>(this, "UPrimalItem.IsAutoUnlocked()"); }
	bool ShouldUseCustomRepairPercentage() { return NativeCall<bool>(this, "UPrimalItem.ShouldUseCustomRepairPercentage()"); }
	int BPGetMaxAmmo() { return NativeCall<int>(this, "UPrimalItem.BPGetMaxAmmo()"); }
	FString* BPGetItemName(FString* result, const FString& ItemNameIn, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, const FString&, AShooterPlayerController*>(this, "UPrimalItem.BPGetItemName(FString&,AShooterPlayerController*)", result, ItemNameIn, ForPC); }
	void BPRemovedFromInventory(UPrimalInventoryComponent* theInventory) { NativeCall<void, UPrimalInventoryComponent*>(this, "UPrimalItem.BPRemovedFromInventory(UPrimalInventoryComponent*)", theInventory); }
	float GetItemWeightForInventory(bool bJustOneQuantity, bool bForceNotBlueprintWeight, UPrimalInventoryComponent* ForInventory) { return NativeCall<float, bool, bool, UPrimalInventoryComponent*>(this, "UPrimalItem.GetItemWeightForInventory(bool,bool,UPrimalInventoryComponent*)", bJustOneQuantity, bForceNotBlueprintWeight, ForInventory); }
	bool GetRequiresAstraeosORTOFToCraft_Implementation() { return NativeCall<bool>(this, "UPrimalItem.GetRequiresAstraeosORTOFToCraft_Implementation()"); }
	static int GetItemColorIDFromDyeItemIDFromDyeList(int DyeItemListIndex) { return NativeCall<int, int>(nullptr, "UPrimalItem.GetItemColorIDFromDyeItemIDFromDyeList(int)", DyeItemListIndex); }
	bool CanRemoveWeaponAccessory() { return NativeCall<bool>(this, "UPrimalItem.CanRemoveWeaponAccessory()"); }
	bool ShouldDestroyOnVersionChange(AShooterGameMode* gameMode, int versionOverride) { return NativeCall<bool, AShooterGameMode*, int>(this, "UPrimalItem.ShouldDestroyOnVersionChange(AShooterGameMode*,int)", gameMode, versionOverride); }
	bool IsDeprecated(UWorld* World) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsDeprecated(UWorld*)", World); }
	void LocalUseAfterHoldBP(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem.LocalUseAfterHoldBP(AShooterPlayerController*)", ForPC); }
	float GetItemWeight_V2(bool bJustOneQuantity, bool bForceNotBlueprintWeight, bool ReturnCustomCosmeticModSkinReplacementOriginalClass) { return NativeCall<float, bool, bool, bool>(this, "UPrimalItem.GetItemWeight_V2(bool,bool,bool)", bJustOneQuantity, bForceNotBlueprintWeight, ReturnCustomCosmeticModSkinReplacementOriginalClass); }
	int BPGetItemStatRandomValue(float QualityLevel, int idx) { return NativeCall<int, float, int>(this, "UPrimalItem.BPGetItemStatRandomValue(float,int)", QualityLevel, idx); }
	static int StaticGetDinoColorSetIndexForItemColorID(int ID) { return NativeCall<int, int>(nullptr, "UPrimalItem.StaticGetDinoColorSetIndexForItemColorID(int)", ID); }
	int GetItemStatValues(int idx) { return NativeCall<int, int>(this, "UPrimalItem.GetItemStatValues(int)", idx); }
	bool GetRequiresBobsTallTalesORTOFToCraft() { return NativeCall<bool>(this, "UPrimalItem.GetRequiresBobsTallTalesORTOFToCraft()"); }
	unsigned __int64 GetCombinedItemID() { return NativeCall<unsigned __int64>(this, "UPrimalItem.GetCombinedItemID()"); }
	bool BPCanPlayerUseItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalItem.BPCanPlayerUseItem(AShooterPlayerController*)", ForPC); }
	void SkinEquippedBlueprintTick(UPrimalItem* OwnerItem, float DeltaSeconds) { NativeCall<void, UPrimalItem*, float>(this, "UPrimalItem.SkinEquippedBlueprintTick(UPrimalItem*,float)", OwnerItem, DeltaSeconds); }
	bool BPShouldAlwaysShowInFolder(int FolderDepth, bool bShowFolders) { return NativeCall<bool, int, bool>(this, "UPrimalItem.BPShouldAlwaysShowInFolder(int,bool)", FolderDepth, bShowFolders); }
	void PostLoad() { NativeCall<void>(this, "UPrimalItem.PostLoad()"); }
	bool IsSharedBlueprint() { return NativeCall<bool>(this, "UPrimalItem.IsSharedBlueprint()"); }
	bool DoesItemUseMultiSellOrder() { return NativeCall<bool>(this, "UPrimalItem.DoesItemUseMultiSellOrder()"); }
	void BPAddedAttachments() { NativeCall<void>(this, "UPrimalItem.BPAddedAttachments()"); }
	bool CanTendCrop_Implementation(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "UPrimalItem.CanTendCrop_Implementation(APlayerController*)", ForPC); }
	void PostInitProperties() { NativeCall<void>(this, "UPrimalItem.PostInitProperties()"); }
	ENetRole GetRole() { return NativeCall<ENetRole>(this, "UPrimalItem.GetRole()"); }
	void BlueprintOwnerPosssessed(AController* PossessedByController) { NativeCall<void, AController*>(this, "UPrimalItem.BlueprintOwnerPosssessed(AController*)", PossessedByController); }
	void OverrideAnimMontage(UAnimMontage*& AnimMontage, float PlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime, bool bPauseOnFinish, APrimalCharacter* ForChar) { NativeCall<void, UAnimMontage*&, float, FName, bool, bool, float, float, bool, APrimalCharacter*>(this, "UPrimalItem.OverrideAnimMontage(UAnimMontage*&,float,FName,bool,bool,float,float,bool,APrimalCharacter*)", AnimMontage, PlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime, bPauseOnFinish, ForChar); }
	float GetRepairResourceMultiplier(AShooterPlayerController* ForPC) { return NativeCall<float, AShooterPlayerController*>(this, "UPrimalItem.GetRepairResourceMultiplier(AShooterPlayerController*)", ForPC); }
	void OnItemTraitEffectActivated(FName TraitName, float Value, const FBPNetExecParams& AdditionalParams) { NativeCall<void, FName, float, const FBPNetExecParams&>(this, "UPrimalItem.OnItemTraitEffectActivated(FName,float,FBPNetExecParams&)", TraitName, Value, AdditionalParams); }
	void BPItemBelowDurabilityThreshold() { NativeCall<void>(this, "UPrimalItem.BPItemBelowDurabilityThreshold()"); }
	float GetNextRepairSpeedMultiplier() { return NativeCall<float>(this, "UPrimalItem.GetNextRepairSpeedMultiplier()"); }
	bool IsUnlockedCosmetic() { return NativeCall<bool>(this, "UPrimalItem.IsUnlockedCosmetic()"); }
	void TickAutoDecreaseDurability() { NativeCall<void>(this, "UPrimalItem.TickAutoDecreaseDurability()"); }
	void BPServerHandleItemNetExecCommand(AShooterPlayerController* ForPC, FName CommandName, const FBPNetExecParams& ExecParams) { NativeCall<void, AShooterPlayerController*, FName, const FBPNetExecParams&>(this, "UPrimalItem.BPServerHandleItemNetExecCommand(AShooterPlayerController*,FName,FBPNetExecParams&)", ForPC, CommandName, ExecParams); }
	bool ShouldMuteExtraEquipmentSounds() { return NativeCall<bool>(this, "UPrimalItem.ShouldMuteExtraEquipmentSounds()"); }
	void AddItemTraitBuffsToCharacter(APrimalCharacter* ToCharacter) { NativeCall<void, APrimalCharacter*>(this, "UPrimalItem.AddItemTraitBuffsToCharacter(APrimalCharacter*)", ToCharacter); }
	UFXSystemAsset* BPGetShieldHitImpactEffect() { return NativeCall<UFXSystemAsset*>(this, "UPrimalItem.BPGetShieldHitImpactEffect()"); }
	UTexture2D* GetItemTypeIcon() { return NativeCall<UTexture2D*>(this, "UPrimalItem.GetItemTypeIcon()"); }
	void TryApplyCustomCosmetic(const __int64& CustomCosmeticSkinID, const int& CustomCosmeticSkinVariantID, const FCustomCosmeticAdditionalSettings& CosmeticExtraSettings) { NativeCall<void, const __int64&, const int&, const FCustomCosmeticAdditionalSettings&>(this, "UPrimalItem.TryApplyCustomCosmetic(__int64&,int&,FCustomCosmeticAdditionalSettings&)", CustomCosmeticSkinID, CustomCosmeticSkinVariantID, CosmeticExtraSettings); }
	bool BPGetItemStatString(EPrimalItemStat::Type statType, FString& StatString) { return NativeCall<bool, EPrimalItemStat::Type, FString&>(this, "UPrimalItem.BPGetItemStatString(EPrimalItemStat::Type,FString&)", statType, StatString); }
	bool OverrideCustomCosmeticEmoteHideWeapon_Implementation(FName EmoteName) { return NativeCall<bool, FName>(this, "UPrimalItem.OverrideCustomCosmeticEmoteHideWeapon_Implementation(FName)", EmoteName); }
	float BPOverrideMinimalUseInterval() { return NativeCall<float>(this, "UPrimalItem.BPOverrideMinimalUseInterval()"); }
	bool BPMatchesItemID(int ItemID1, int ItemID2) { return NativeCall<bool, int, int>(this, "UPrimalItem.BPMatchesItemID(int,int)", ItemID1, ItemID2); }
	bool BPAllowRemoteAddToInventory(UPrimalInventoryComponent* invComp, AShooterPlayerController* ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, bool>(this, "UPrimalItem.BPAllowRemoteAddToInventory(UPrimalInventoryComponent*,AShooterPlayerController*,bool)", invComp, ByPC, bRequestedByPlayer); }
	void ServerUpdatedWeaponClipAmmo() { NativeCall<void>(this, "UPrimalItem.ServerUpdatedWeaponClipAmmo()"); }
	static FString* MakeStringFromRequirementAndAvailableQuantity(FString* result, const FCraftingResourceRequirement& Requirement, int AvailableItemQuantity) { return NativeCall<FString*, FString*, const FCraftingResourceRequirement&, int>(nullptr, "UPrimalItem.MakeStringFromRequirementAndAvailableQuantity(FCraftingResourceRequirement&,int)", result, Requirement, AvailableItemQuantity); }
	float GetItemStatModifier_V2(EPrimalItemStat::Type statType, bool ReturnCustomCosmeticModSkinReplacementOriginalClass) { return NativeCall<float, EPrimalItemStat::Type, bool>(this, "UPrimalItem.GetItemStatModifier_V2(EPrimalItemStat::Type,bool)", statType, ReturnCustomCosmeticModSkinReplacementOriginalClass); }
	void OverrideItemRating(float rating) { NativeCall<void, float>(this, "UPrimalItem.OverrideItemRating(float)", rating); }
	void BPAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "UPrimalItem.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void BPSetWeaponClipAmmo(int NewClipAmmo) { NativeCall<void, int>(this, "UPrimalItem.BPSetWeaponClipAmmo(int)", NewClipAmmo); }
	UTexture2D* BPGetItemIcon(AShooterPlayerController* ForPC) { return NativeCall<UTexture2D*, AShooterPlayerController*>(this, "UPrimalItem.BPGetItemIcon(AShooterPlayerController*)", ForPC); }
	bool BPForceAllowRemoteAddToInventory(UPrimalInventoryComponent* toInventory) { return NativeCall<bool, UPrimalInventoryComponent*>(this, "UPrimalItem.BPForceAllowRemoteAddToInventory(UPrimalInventoryComponent*)", toInventory); }
	unsigned int GetOwningStructureID() { return NativeCall<unsigned int>(this, "UPrimalItem.GetOwningStructureID()"); }
	bool BPOverrideHoldItemSlotAction() { return NativeCall<bool>(this, "UPrimalItem.BPOverrideHoldItemSlotAction()"); }
	bool BPProcessEditText(AShooterPlayerController* ForPC, const FString& TextToUse) { return NativeCall<bool, AShooterPlayerController*, const FString&>(this, "UPrimalItem.BPProcessEditText(AShooterPlayerController*,FString&)", ForPC, TextToUse); }
	float GetCooldownDuration() { return NativeCall<float>(this, "UPrimalItem.GetCooldownDuration()"); }
	int BPGetNumberOfDefaultSaddleStructures() { return NativeCall<int>(this, "UPrimalItem.BPGetNumberOfDefaultSaddleStructures()"); }
	bool BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent* invComp, AShooterPlayerController* ByPC, bool bRequestedByPlayer) { return NativeCall<bool, UPrimalInventoryComponent*, AShooterPlayerController*, bool>(this, "UPrimalItem.BPAllowRemoteRemoveFromInventory(UPrimalInventoryComponent*,AShooterPlayerController*,bool)", invComp, ByPC, bRequestedByPlayer); }
	bool IsCustomContextMenuItemEnabled_Implementation(const FName& ContextItem) { return NativeCall<bool, const FName&>(this, "UPrimalItem.IsCustomContextMenuItemEnabled_Implementation(FName&)", ContextItem); }
	void BPOverrideAnimMontage(UAnimMontage*& AnimMontage, float& PlayRate, FName& StartSectionName, bool& bForceTickPoseAndServerUpdateMesh, bool& bForceTickPoseOnServer, float& BlendInTime, float& BlendOutTime, bool bPauseOnFinish, APrimalCharacter* ForChar) { NativeCall<void, UAnimMontage*&, float&, FName&, bool&, bool&, float&, float&, bool, APrimalCharacter*>(this, "UPrimalItem.BPOverrideAnimMontage(UAnimMontage*&,float&,FName&,bool&,bool&,float&,float&,bool,APrimalCharacter*)", AnimMontage, PlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime, bPauseOnFinish, ForChar); }
	int GetItemColorID(int theRegion) { return NativeCall<int, int>(this, "UPrimalItem.GetItemColorID(int)", theRegion); }
	float GetNextRepairPercentage() { return NativeCall<float>(this, "UPrimalItem.GetNextRepairPercentage()"); }
	float GetFinalTimeForFullRepair() { return NativeCall<float>(this, "UPrimalItem.GetFinalTimeForFullRepair()"); }
	bool PlantedAsCropTryMultiUse(APlayerController* ForPC, int UseIndex, AActor* CropPlotReference) { return NativeCall<bool, APlayerController*, int, AActor*>(this, "UPrimalItem.PlantedAsCropTryMultiUse(APlayerController*,int,AActor*)", ForPC, UseIndex, CropPlotReference); }
	void BPItemBroken() { NativeCall<void>(this, "UPrimalItem.BPItemBroken()"); }
	bool BPPreventNewColorization() { return NativeCall<bool>(this, "UPrimalItem.BPPreventNewColorization()"); }
	bool BPPreventUseOntoItem(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.BPPreventUseOntoItem(UPrimalItem*)", DestinationItem); }
	void SetAssociatedDinoID(APrimalDinoCharacter* AssociatedDino) { NativeCall<void, APrimalDinoCharacter*>(this, "UPrimalItem.SetAssociatedDinoID(APrimalDinoCharacter*)", AssociatedDino); }
	FName GetKeybindForContextMenuItem(const FName& ContextItem) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FName &>(this, "UPrimalItem.GetKeybindForContextMenuItem(FName&)", AsaReturnPointer, ContextItem); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	float BPOverrideRemainingCooldownTime() { return NativeCall<float>(this, "UPrimalItem.BPOverrideRemainingCooldownTime()"); }
	float GetInventoryIconDisplayTextSize_Implementation() { return NativeCall<float>(this, "UPrimalItem.GetInventoryIconDisplayTextSize_Implementation()"); }
	float BPGetCustomAutoDecreaseDurabilityPerInterval() { return NativeCall<float>(this, "UPrimalItem.BPGetCustomAutoDecreaseDurabilityPerInterval()"); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "UPrimalItem.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void BPPostInitializeItem(UWorld* OptionalInitWorld) { NativeCall<void, UWorld*>(this, "UPrimalItem.BPPostInitializeItem(UWorld*)", OptionalInitWorld); }
	float BPGetSaddleWeightMultiplier_Implementation() { return NativeCall<float>(this, "UPrimalItem.BPGetSaddleWeightMultiplier_Implementation()"); }
	UMaterialInterface* BPGetCustomIconMaterialParent() { return NativeCall<UMaterialInterface*>(this, "UPrimalItem.BPGetCustomIconMaterialParent()"); }
	bool IsInOrOwnedBy(const UObject* SomeOuter) { return NativeCall<bool, const UObject*>(this, "UPrimalItem.IsInOrOwnedBy(UObject*)", SomeOuter); }
	bool BPPreventWeaponEquip() { return NativeCall<bool>(this, "UPrimalItem.BPPreventWeaponEquip()"); }
	FName GetUnderwearOverrideTag_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalItem.GetUnderwearOverrideTag_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	UE::Math::TVector<double>* GetCustomCosmeticDinoRiderOffset(UE::Math::TVector<double>* result, bool bClamp, APrimalDinoCharacter* ClampForDino) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, APrimalDinoCharacter*>(this, "UPrimalItem.GetCustomCosmeticDinoRiderOffset(bool,APrimalDinoCharacter*)", result, bClamp, ClampForDino); }
	bool IsItemTraitEffectPrevented(FName TraitName) { return NativeCall<bool, FName>(this, "UPrimalItem.IsItemTraitEffectPrevented(FName)", TraitName); }
	static void SetCustomColorParams(const UPrimalItem* ThePrimalItem, UMaterialInstanceDynamic* theMIC, const FLinearColor& theColor, int theIndex) { NativeCall<void, const UPrimalItem*, UMaterialInstanceDynamic*, const FLinearColor&, int>(nullptr, "UPrimalItem.SetCustomColorParams(UPrimalItem*,UMaterialInstanceDynamic*,FLinearColor&,int)", ThePrimalItem, theMIC, theColor, theIndex); }
	bool DoesItemUseColorRegion(int RegionIndex) { return NativeCall<bool, int>(this, "UPrimalItem.DoesItemUseColorRegion(int)", RegionIndex); }
	void BPOnItemConsumed(UPrimalInventoryComponent* inventory, int remainingQuantity) { NativeCall<void, UPrimalInventoryComponent*, int>(this, "UPrimalItem.BPOnItemConsumed(UPrimalInventoryComponent*,int)", inventory, remainingQuantity); }
	void SelectedCustomContextMenuItem_Implementation(const FName& ContextItem, AShooterPlayerController* ForPC) { NativeCall<void, const FName&, AShooterPlayerController*>(this, "UPrimalItem.SelectedCustomContextMenuItem_Implementation(FName&,AShooterPlayerController*)", ContextItem, ForPC); }
	bool BPCanUse(bool bIgnoreCooldown) { return NativeCall<bool, bool>(this, "UPrimalItem.BPCanUse(bool)", bIgnoreCooldown); }
	bool BPOverrideSound(USoundBase* InSound, USoundBase*& OutSound) { return NativeCall<bool, USoundBase*, USoundBase*&>(this, "UPrimalItem.BPOverrideSound(USoundBase*,USoundBase*&)", InSound, OutSound); }
	USoundBase* OverrideCrouchingSound_Implementation(USoundBase* InSound, bool bIsProne, int soundState) { return NativeCall<USoundBase*, USoundBase*, bool, int>(this, "UPrimalItem.OverrideCrouchingSound_Implementation(USoundBase*,bool,int)", InSound, bIsProne, soundState); }
	float BPGetExtraSpoilingTimeMultiplier() { return NativeCall<float>(this, "UPrimalItem.BPGetExtraSpoilingTimeMultiplier()"); }
	float BPGetItemStatModifier(int idx, int ItemStatValue) { return NativeCall<float, int, int>(this, "UPrimalItem.BPGetItemStatModifier(int,int)", idx, ItemStatValue); }
	bool CanMuteExtraEquipmentSounds() { return NativeCall<bool>(this, "UPrimalItem.CanMuteExtraEquipmentSounds()"); }
	void PickedUpFromGround(ADroppedItem* groundItem) { NativeCall<void, ADroppedItem*>(this, "UPrimalItem.PickedUpFromGround(ADroppedItem*)", groundItem); }
	AShooterCharacter* GetOwnerPlayer() { return NativeCall<AShooterCharacter*>(this, "UPrimalItem.GetOwnerPlayer()"); }
	bool AllowSubobjectInstancing() { return NativeCall<bool>(this, "UPrimalItem.AllowSubobjectInstancing()"); }
	void BPClientHandleItemNetExecCommand(FName CommandName, const FBPNetExecParams& ExecParams, AShooterPlayerController* ForPC) { NativeCall<void, FName, const FBPNetExecParams&, AShooterPlayerController*>(this, "UPrimalItem.BPClientHandleItemNetExecCommand(FName,FBPNetExecParams&,AShooterPlayerController*)", CommandName, ExecParams, ForPC); }
	bool BPSupportUseOntoItem_Implementation(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem.BPSupportUseOntoItem_Implementation(UPrimalItem*)", DestinationItem); }
	bool IsBlueprintDeprecated(UWorld* World) { return NativeCall<bool, UWorld*>(this, "UPrimalItem.IsBlueprintDeprecated(UWorld*)", World); }
	static int GetItemColorIDFromDyeItemID(int MasterItemListIndex) { return NativeCall<int, int>(nullptr, "UPrimalItem.GetItemColorIDFromDyeItemID(int)", MasterItemListIndex); }
	FString* BPOverrideCustomInventoryWidgetDescriptionText(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem.BPOverrideCustomInventoryWidgetDescriptionText()", result); }
	bool BPShouldForceAllowSaddleBasing() { return NativeCall<bool>(this, "UPrimalItem.BPShouldForceAllowSaddleBasing()"); }
	FColor BPGetCustomInventoryWidgetTextColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalItem.BPGetCustomInventoryWidgetTextColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void OnUsedAsCuddleFood(APrimalDinoCharacter* ForDino, APlayerController* ForPC) { NativeCall<void, APrimalDinoCharacter*, APlayerController*>(this, "UPrimalItem.OnUsedAsCuddleFood(APrimalDinoCharacter*,APlayerController*)", ForDino, ForPC); }
	void GetAssociatedDinoID(int& OutDinoID1, int& OutDinoID2) { NativeCall<void, int&, int&>(this, "UPrimalItem.GetAssociatedDinoID(int&,int&)", OutDinoID1, OutDinoID2); }
};
