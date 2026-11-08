#pragma once
#include "BulkForward.h"


struct UPrimalGameData : UObject
{
	// Fields

	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModName"); }
	FString& ModDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModDescription"); }
	//FPrimalCharacterStatusValueDefinition[12] & StatusValueDefinitionsField() { return *GetNativePointerField<FPrimalCharacterStatusValueDefinition[12] *>(this, "UPrimalGameData.StatusValueDefinitions"); }
	//FPrimalCharacterStatusStateDefinition[14] & StatusStateDefinitionsField() { return *GetNativePointerField<FPrimalCharacterStatusStateDefinition[14] *>(this, "UPrimalGameData.StatusStateDefinitions"); }
	//FPrimalItemStatDefinition[8] & ItemStatDefinitionsField() { return *GetNativePointerField<FPrimalItemStatDefinition[8] *>(this, "UPrimalGameData.ItemStatDefinitions"); }
	//FPrimalItemDefinition[9] & ItemTypeDefinitionsField() { return *GetNativePointerField<FPrimalItemDefinition[9] *>(this, "UPrimalGameData.ItemTypeDefinitions"); }
	//FPrimalEquipmentDefinition[12] & EquipmentTypeDefinitionsField() { return *GetNativePointerField<FPrimalEquipmentDefinition[12] *>(this, "UPrimalGameData.EquipmentTypeDefinitions"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& MasterItemListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MasterItemList"); }
	TArray<FPrimalItemQuality, TSizedDefaultAllocator<32> >& ItemQualityDefinitionsField() { return *GetNativePointerField<TArray<FPrimalItemQuality, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ItemQualityDefinitions"); }
	//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& EngramBlueprintClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EngramBlueprintClasses"); }
	//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& AdditionalEngramBlueprintClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalEngramBlueprintClasses"); }
	//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& RemoveEngramBlueprintClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.RemoveEngramBlueprintClasses"); }
	TArray<FStatusValueModifierDescription, TSizedDefaultAllocator<32> >& StatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FStatusValueModifierDescription, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.StatusValueModifierDescriptions"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerSpawnRegions"); }
	USoundBase*& TutorialDisplaySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TutorialDisplaySound"); }
	USoundBase*& Sound_StartItemDragField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartItemDrag"); }
	USoundBase*& Sound_StopItemDragField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StopItemDrag"); }
	UTexture2D*& PreventGrindingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PreventGrindingIcon"); }
	USoundClass*& ExplorerNoteAudioSoundClassField() { return *GetNativePointerField<USoundClass**>(this, "UPrimalGameData.ExplorerNoteAudioSoundClass"); }
	USoundBase*& Sound_CancelPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CancelPlacingStructure"); }
	USoundBase*& Sound_ChooseStructureRotationField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ChooseStructureRotation"); }
	USoundBase*& Sound_FailPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_FailPlacingStructure"); }
	USoundBase*& Sound_ConfirmPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ConfirmPlacingStructure"); }
	USoundBase*& Sound_StartPlacingStructureField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartPlacingStructure"); }
	USoundBase*& Sound_CorpseDecomposeField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CorpseDecompose"); }
	USoundBase*& Sound_ApplyLevelUpField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelUp"); }
	USoundBase*& Sound_ApplyLevelPointField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelPoint"); }
	USoundBase*& Sound_LearnedEngramField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_LearnedEngram"); }
	USoundBase*& Sound_ReconnectToCharacterField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ReconnectToCharacter"); }
	USoundBase*& Sound_DropAllItemsField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropAllItems"); }
	USoundBase*& Sound_TransferAllItemsToRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsToRemote"); }
	USoundBase*& Sound_TransferAllItemsFromRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsFromRemote"); }
	USoundBase*& Sound_TransferItemToRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemToRemote"); }
	USoundBase*& Sound_TransferItemFromRemoteField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemFromRemote"); }
	USoundBase*& Sound_AddItemToSlotField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddItemToSlot"); }
	USoundBase*& Sound_RemoveItemFromSlotField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemFromSlot"); }
	USoundBase*& Sound_ClearCraftQueueField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ClearCraftQueue"); }
	USoundBase*& Sound_AddToCraftQueueField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueue"); }
	USoundBase*& Sound_AddToCraftQueueAltField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueueAlt"); }
	USoundBase*& Sound_SetRadioFrequencyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetRadioFrequency"); }
	USoundBase*& Sound_AddPinToMapField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddPinToMap"); }
	USoundBase*& Sound_RemovePinFromMapField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemovePinFromMap"); }
	USoundBase*& Sound_ApplyDyeField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyDye"); }
	USoundBase*& Sound_ApplyPaintField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyPaint"); }
	USoundBase*& Sound_SetTextGenericField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetTextGeneric"); }
	USoundBase*& Sound_SplitItemStackField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SplitItemStack"); }
	USoundBase*& Sound_MergeItemStackField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_MergeItemStack"); }
	USoundBase*& Sound_InputPinDigitField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_InputPinDigit"); }
	USoundBase*& Sound_PinValidatedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinValidated"); }
	USoundBase*& Sound_PinRejectedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinRejected"); }
	USoundBase*& Sound_TribeWarBeginField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarBegin"); }
	USoundBase*& Sound_TribeWarEndField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarEnd"); }
	USoundBase*& Sound_DropInventoryItemField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropInventoryItem"); }
	USoundBase*& Sound_RefillWaterContainerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RefillWaterContainer"); }
	TArray<FAppIDItem, TSizedDefaultAllocator<32> >& CoreAppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreAppIDItems"); }
	TArray<FAppIDItem, TSizedDefaultAllocator<32> >& AppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AppIDItems"); }
	TArray<UPrimalEngramEntry*, TSizedDefaultAllocator<32> >& EngramBlueprintEntriesField() { return *GetNativePointerField<TArray<UPrimalEngramEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EngramBlueprintEntries"); }
	TArray<UPrimalDinoEntry*, TSizedDefaultAllocator<32> >& DinoEntriesObjectsField() { return *GetNativePointerField<TArray<UPrimalDinoEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoEntriesObjects"); }
	TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >& ExplorerNoteEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteEntriesObjects"); }
	TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >& HeadHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.HeadHairStylesEntriesObjects"); }
	TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >& FacialHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FacialHairStylesEntriesObjects"); }
	// TSubclassOf<UToolTipWidget>& DefaultMultiUseToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultMultiUseToolTipWidget"); }
	// TSubclassOf<UToolTipWidget>& DefaultToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultToolTipWidget"); }
	// TSubclassOf<UToolTipWidget>& DefaultDinoMinimalTooltipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.DefaultDinoMinimalTooltipWidget"); }
	// TSubclassOf<UPrimalItemToolTipWidget>& DefaultItemToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalItemToolTipWidget>*>(this, "UPrimalGameData.DefaultItemToolTipWidget"); }
	// TSubclassOf<UPrimalItem>& StarterNoteItemField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.StarterNoteItem"); }
		//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& PrimaryResourcesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PrimaryResources"); }
	// TSubclassOf<ADroppedItem>& GenericDroppedItemTemplateField() { return *GetNativePointerField<TSubclassOf<ADroppedItem>*>(this, "UPrimalGameData.GenericDroppedItemTemplate"); }
	UMaterialInterface*& PostProcess_KnockoutBlurField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_KnockoutBlur"); }
	UMaterialInterface*& AdditionalDeathPostProcessEffectField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.AdditionalDeathPostProcessEffect"); }
	//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >& BuffPostProcessEffectsField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BuffPostProcessEffects"); }
	//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >& AdditionalBuffPostProcessEffectsField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalBuffPostProcessEffects"); }
	TArray<FRangedValues, TSizedDefaultAllocator<32> >& EngramPointPurchaseRangesField() { return *GetNativePointerField<TArray<FRangedValues, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EngramPointPurchaseRanges"); }
	// TSubclassOf<ADroppedItemLowQuality>& GenericDroppedItemTemplateLowQualityField() { return *GetNativePointerField<TSubclassOf<ADroppedItemLowQuality>*>(this, "UPrimalGameData.GenericDroppedItemTemplateLowQuality"); }
	TArray<FTutorialDefinition, TSizedDefaultAllocator<32> >& TutorialDefinitionsField() { return *GetNativePointerField<TArray<FTutorialDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.TutorialDefinitions"); }
	UTexture2D*& UnknownIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnknownIcon"); }
	UMaterialInterface*& UnknownMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.UnknownMaterial"); }
	UTexture2D*& MasterDyeListLUTField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MasterDyeListLUT"); }
	UTexture2D*& WhiteTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WhiteTexture"); }
	UTexture2D*& BlueprintBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BlueprintBackground"); }
	UTexture2D*& BabyCuddleIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BabyCuddleIcon"); }
	UTexture2D*& ParentDinoIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ParentDinoIcon"); }
	UTexture2D*& ImprintedRiderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ImprintedRiderIcon"); }
	UTexture2D*& WeaponAccessoryActivatedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WeaponAccessoryActivatedIcon"); }
	UTexture2D*& EngramBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EngramBackground"); }
	UTexture2D*& VoiceChatIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatIcon"); }
	UTexture2D*& VoiceChatMutedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatMutedIcon"); }
	UTexture2D*& ItemButtonRecentlySelectedBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemButtonRecentlySelectedBackground"); }
	//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >& DinoEntriesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoEntries"); }
	//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >& AdditionalDinoEntriesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalDinoEntry>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalDinoEntries"); }
	float& GlobalGeneralArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier"); }
	float& GlobalGeneralArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier"); }
	float& EnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyFoundationPreventionRadius"); }
	TArray<FColorDefinition, TSizedDefaultAllocator<32> >& ColorDefinitionsField() { return *GetNativePointerField<TArray<FColorDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ColorDefinitions"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ExtraResourcesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExtraResources"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& BaseExtraResourcesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BaseExtraResources"); }
	//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& BaseExtraResourcesSoftField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BaseExtraResourcesSoft"); }
	//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& BaseExtraResourcesContainersSoftField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BaseExtraResourcesContainersSoft"); }
	USoundBase*& CombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay"); }
	USoundBase*& CombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight"); }
	USoundBase*& CombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay_Heavy"); }
	USoundBase*& CombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight_Heavy"); }
	USoundBase*& LevelUpStingerSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.LevelUpStingerSound"); }
	USoundBase*& TrackMissionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TrackMissionSound"); }
	USoundBase*& UntrackMissionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.UntrackMissionSound"); }
	//FPlayerCharacterGenderDefinition[2] & PlayerCharacterGenderDefinitionsField() { return *GetNativePointerField<FPlayerCharacterGenderDefinition[2] *>(this, "UPrimalGameData.PlayerCharacterGenderDefinitions"); }
// TSubclassOf<AGameMode>& DefaultGameModeField() { return *GetNativePointerField<TSubclassOf<AGameMode>*>(this, "UPrimalGameData.DefaultGameMode"); }
	//FLevelExperienceRamp[4] & LevelExperienceRampsField() { return *GetNativePointerField<FLevelExperienceRamp[4] *>(this, "UPrimalGameData.LevelExperienceRamps"); }
	//FLevelExperienceRamp[4] & SinglePlayerLevelExperienceRampsField() { return *GetNativePointerField<FLevelExperienceRamp[4] *>(this, "UPrimalGameData.SinglePlayerLevelExperienceRamps"); }
	TArray<FNamedTeamDefinition, TSizedDefaultAllocator<32> >& NamedTeamDefinitionsField() { return *GetNativePointerField<TArray<FNamedTeamDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.NamedTeamDefinitions"); }
	TArray<int, TSizedDefaultAllocator<32> >& PlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerLevelEngramPoints"); }
	TArray<int, TSizedDefaultAllocator<32> >& PlayerLevelEngramPointsSPField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerLevelEngramPointsSP"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PreventBuildStructureReasonStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PreventBuildStructureReasonStrings"); }
	TArray<FExplorerNoteAchievement, TSizedDefaultAllocator<32> >& ExplorerNoteAchievementsField() { return *GetNativePointerField<TArray<FExplorerNoteAchievement, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteAchievements"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_NPCField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_NPC"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_SupplyCratesField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_SupplyCrates"); }
	TArray<FActiveEventSupplyCrateWeight, TSizedDefaultAllocator<32> >& Remap_ActiveEventSupplyCratesField() { return *GetNativePointerField<TArray<FActiveEventSupplyCrateWeight, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_ActiveEventSupplyCrates"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_ResourceComponentsField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_ResourceComponents"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_NPCSpawnEntries"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_EngramsField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_Engrams"); }
	TArray<FClassRemapping, TSizedDefaultAllocator<32> >& Remap_ItemsField() { return *GetNativePointerField<TArray<FClassRemapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Remap_Items"); }
	TArray<FClassAddition, TSizedDefaultAllocator<32> >& AdditionalStructureEngramsField() { return *GetNativePointerField<TArray<FClassAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructureEngrams"); }
	TArray<FBuffAddition, TSizedDefaultAllocator<32> >& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalDefaultBuffs"); }
	TArray<FAvailableMission, TSizedDefaultAllocator<32> >& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AvailableMissions"); }
	// TSubclassOf<AActor>& ActorToSpawnUponEnemyCoreStructureDeathField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.ActorToSpawnUponEnemyCoreStructureDeath"); }
		//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& AdditionalStructuresToPlaceField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructuresToPlace"); }
	TArray<FStructureToBuildAddition, TSizedDefaultAllocator<32> >& AdditionalStructuresToBuildField() { return *GetNativePointerField<TArray<FStructureToBuildAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructuresToBuild"); }
	TArray<FStructureVariantAddition, TSizedDefaultAllocator<32> >& AdditionalStructureVariantsField() { return *GetNativePointerField<TArray<FStructureVariantAddition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalStructureVariants"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& MasterDyeListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MasterDyeList"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& MasterColorTableField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MasterColorTable"); }
	float& EnemyCoreStructureDeathActorRadiusBuildCheckField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck"); }
	// TSubclassOf<APrimalStructureItemContainer>& DeathDestructionDepositInventoryClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "UPrimalGameData.DeathDestructionDepositInventoryClass"); }
	UTexture2D*& MateBoostIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MateBoostIcon"); }
	UTexture2D*& EggBoostIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EggBoostIcon"); }
	UTexture2D*& MatingIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MatingIcon"); }
	UTexture2D*& NearFeedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NearFeedIcon"); }
	UTexture2D*& BuffedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BuffedIcon"); }
	UTexture2D*& TethererdIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TethererdIcon"); }
	// TSubclassOf<UUI_XBoxFooter>& FooterTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_XBoxFooter>*>(this, "UPrimalGameData.FooterTemplate"); }
	float& TribeXPSharePercentField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.TribeXPSharePercent"); }
	int& OverrideServerPhysXSubstepsField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.OverrideServerPhysXSubsteps"); }
	float& OverrideServerPhysXSubstepsDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime"); }
	TArray<FPlayerDynamicMaterialFloat, TSizedDefaultAllocator<32> >& DefaultDynamicMaterialByteFloatsField() { return *GetNativePointerField<TArray<FPlayerDynamicMaterialFloat, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultDynamicMaterialByteFloats"); }
	TArray<FPlayerDynamicMaterialVector, TSizedDefaultAllocator<32> >& DefaultDynamicMaterialByteVectorsField() { return *GetNativePointerField<TArray<FPlayerDynamicMaterialVector, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultDynamicMaterialByteVectors"); }
	TArray<FPlayerDynamicMaterialColors, TSizedDefaultAllocator<32> >& DefaultDynamicMaterialByteColorsField() { return *GetNativePointerField<TArray<FPlayerDynamicMaterialColors, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultDynamicMaterialByteColors"); }
	//TMap<FName, TSubclassOf<UPrimalDinoEntry>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSubclassOf<UPrimalDinoEntry>, 0> >& DinoEntryMapField() { return *GetNativePointerField<TMap<FName, TSubclassOf<UPrimalDinoEntry>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSubclassOf<UPrimalDinoEntry>, 0> >*>(this, "UPrimalGameData.DinoEntryMap"); }
	//USoundBase* [3] & Sound_TamedDinosField() { return *GetNativePointerField<USoundBase * [3] *>(this, "UPrimalGameData.Sound_TamedDinos"); }
	USoundBase*& Sound_ItemStartCraftingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartCrafting"); }
	USoundBase*& Sound_ItemFinishCraftingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishCrafting"); }
	USoundBase*& Sound_ItemStartRepairingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartRepairing"); }
	USoundBase*& Sound_ItemFinishRepairingField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishRepairing"); }
	// TSubclassOf<UUI_Notification>& NotifClassField() { return *GetNativePointerField<TSubclassOf<UUI_Notification>*>(this, "UPrimalGameData.NotifClass"); }
	// TSubclassOf<UPrimalStructureToolTipWidget>& StructureDefaultOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureToolTipWidget>*>(this, "UPrimalGameData.StructureDefaultOverlayToolTipWidget"); }
	// TSubclassOf<UPrimalUI>& MeleeHitColorizeStructuresUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "UPrimalGameData.MeleeHitColorizeStructuresUI"); }
	float& MinPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinPaintDurationConsumption"); }
	float& MaxPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxPaintDurationConsumption"); }
	float& MinDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinDinoRadiusForPaintConsumption"); }
	float& MaxDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption"); }
	TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >& DinoBabySetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoBabySetups"); }
	TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >& DinoGestationSetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoGestationSetups"); }
	// TSubclassOf<UPrimalItem>& SoapItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.SoapItemTemplate"); }
	UTexture2D*& NameTagWildcardAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagWildcardAdmin"); }
	UTexture2D*& NameTagServerAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagServerAdmin"); }
	UTexture2D*& NameTagTribeAdminField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagTribeAdmin"); }
	TArray<UTexture2D*, TSizedDefaultAllocator<32> >& BadgeGroupsNameTagField() { return *GetNativePointerField<TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BadgeGroupsNameTag"); }
	UTexture2D*& CrossPlayGenericField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayGeneric"); }
	UTexture2D*& CrossPlaySteamField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlaySteam"); }
	UTexture2D*& CrossPlayPS5Field() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayPS5"); }
	UTexture2D*& CrossPlayXSXField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayXSX"); }
	TArray<FString, TSizedDefaultAllocator<32> >& AchievementIDsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AchievementIDs"); }
	TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>& AchievementIDSetField() { return *GetNativePointerField<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>*>(this, "UPrimalGameData.AchievementIDSet"); }
	TArray<float, TSizedDefaultAllocator<32> >& AdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalEggWeightsToSpawn"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& AdditionalEggItemsToSpawnField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalEggItemsToSpawn"); }
	TArray<float, TSizedDefaultAllocator<32> >& FertilizedAdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& FertilizedAdditionalEggItemsToSpawnField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FertilizedAdditionalEggItemsToSpawn"); }
	FString& ItemAchievementsNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ItemAchievementsName"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemAchievementsListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ItemAchievementsList"); }
	//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& GlobalCuddleFoodListField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GlobalCuddleFoodList"); }
	TArray<FMultiAchievement, TSizedDefaultAllocator<32> >& MultiAchievementsField() { return *GetNativePointerField<TArray<FMultiAchievement, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MultiAchievements"); }
	USoundBase*& DinoIncrementedImprintingSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.DinoIncrementedImprintingSound"); }
	USoundBase*& HitMarkerCharacterSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerCharacterSound"); }
	USoundBase*& HitMarkerStructureSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerStructureSound"); }
	UMaterialParameterCollection*& FOVScaleMaterialParamCollectionField() { return *GetNativePointerField<UMaterialParameterCollection**>(this, "UPrimalGameData.FOVScaleMaterialParamCollection"); }
	TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >& CoreNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreNPCSpawnEntriesContainerAdditions"); }
	TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >& TheNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.TheNPCSpawnEntriesContainerAdditions"); }
	UMaterialInterface*& PostProcess_ColorLUTField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_ColorLUT"); }
	// TSubclassOf<UPrimalStructureSettings>& DefaultStructureSettingsField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "UPrimalGameData.DefaultStructureSettings"); }
	USoundBase*& Sound_DossierUnlockedField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DossierUnlocked"); }
	USoundBase*& Sound_ItemUseOnItemField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemUseOnItem"); }
	USoundBase*& Sound_RemoveItemSkinField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemSkin"); }
	USoundBase*& Sound_RemoveClipAmmoField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveClipAmmo"); }
	TArray<FExplorerNoteEntry, TSizedDefaultAllocator<32> >& ExplorerNoteEntriesField() { return *GetNativePointerField<TArray<FExplorerNoteEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteEntries"); }
	float& ExplorerNoteXPGainField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.ExplorerNoteXPGain"); }
	TArray<int, TSizedDefaultAllocator<32> >& ExplorerNoteIntroIDsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExplorerNoteIntroIDs"); }
	//UTexture2D* [3] & BuffTypeBackgroundsField() { return *GetNativePointerField<UTexture2D * [3] *>(this, "UPrimalGameData.BuffTypeBackgrounds"); }
	//UTexture2D* [3] & BuffTypeForegroundsField() { return *GetNativePointerField<UTexture2D * [3] *>(this, "UPrimalGameData.BuffTypeForegrounds"); }
	//TSoftClassPtr<APrimalBuff>& ExplorerNoteXPBuffField() { return *GetNativePointerField<//TSoftClassPtr<APrimalBuff>*>(this, "UPrimalGameData.ExplorerNoteXPBuff"); }
	//TSoftClassPtr<APrimalBuff>& SpecialExplorerNoteXPBuffField() { return *GetNativePointerField<//TSoftClassPtr<APrimalBuff>*>(this, "UPrimalGameData.SpecialExplorerNoteXPBuff"); }
	UTexture2D*& PerMapExplorerNoteLockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PerMapExplorerNoteLockedIcon"); }
	UTexture2D*& TamedDinoUnlockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoUnlockedIcon"); }
	UTexture2D*& TamedDinoLockedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoLockedIcon"); }
	TArray<FUnlockableEmoteEntry, TSizedDefaultAllocator<32> >& UnlockableEmotesField() { return *GetNativePointerField<TArray<FUnlockableEmoteEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.UnlockableEmotes"); }
	TArray<FEmoteGroup, TSizedDefaultAllocator<32> >& EmoteGroupsField() { return *GetNativePointerField<TArray<FEmoteGroup, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EmoteGroups"); }
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >& GlobalNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GlobalNPCRandomSpawnClassWeights"); }
	UTexture2D*& DinoOrderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoOrderIcon"); }
	UTexture2D*& DinoMinimalIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoMinimalIcon"); }
	UTexture2D*& PlayerMinimalIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PlayerMinimalIcon"); }
	//TSoftClassPtr<APrimalEmitterSpawnable>& DinoOrderEffect_MoveToField() { return *GetNativePointerField<//TSoftClassPtr<APrimalEmitterSpawnable>*>(this, "UPrimalGameData.DinoOrderEffect_MoveTo"); }
	//TSoftClassPtr<APrimalEmitterSpawnable>& DinoOrderEffect_AttackTargetField() { return *GetNativePointerField<//TSoftClassPtr<APrimalEmitterSpawnable>*>(this, "UPrimalGameData.DinoOrderEffect_AttackTarget"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanMaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanMaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanMaleAnimMontagesOverrides"); }
	TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >& AdditionalHumanFemaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimMontagesOverrides"); }
	TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >& AdditionalHumanMaleOverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanMaleOverrideAnimBlueprints"); }
	TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >& AdditionalHumanFemaleOverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHumanFemaleOverrideAnimBlueprints"); }
	//TArray<TSubclassOf<ASaveGameActor>, TSizedDefaultAllocator<32> >& ServerExtraWorldSingletonActorClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<ASaveGameActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ServerExtraWorldSingletonActorClasses"); }
	//TArray<TSubclassOf<UPrimalGameData>, TSizedDefaultAllocator<32> >& ExtraStackedGameDataClassesField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalGameData>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExtraStackedGameDataClasses"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& HeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.HeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& FacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.FacialHairStyleDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& EyebrowsDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.EyebrowsDefinitions"); }
	unsigned int& PlayerMeshMaterialIndexField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalGameData.PlayerMeshMaterialIndex"); }
	FName& EyebrowMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGameData.EyebrowMaskParamName"); }
	FName& HairMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGameData.HairMaskParamName"); }
	FName& FacialHairMaskParamNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGameData.FacialHairMaskParamName"); }
	FHairStyleDefinition& EyelashesDefinitionsField() { return *GetNativePointerField<FHairStyleDefinition*>(this, "UPrimalGameData.EyelashesDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& AdditionalHeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalHeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >& AdditionalFacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalFacialHairStyleDefinitions"); }
	USoundBase*& GenericWaterPostprocessAmbientSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericWaterPostprocessAmbientSound"); }
	// TSubclassOf<UPrimalPlayerData>& OverridePlayerDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalPlayerData>*>(this, "UPrimalGameData.OverridePlayerDataClass"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AllDinosAchievementNameTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AllDinosAchievementNameTags"); }
	USoundBase*& GenericArrowPickedUpSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericArrowPickedUpSound"); }
	UTexture2D*& AimMagnetismIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.AimMagnetismIcon"); }
	UTexture2D*& UnlockIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnlockIcon"); }
	FColor& WheelFolderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelFolderColor"); }
	FColor& WheelBackColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelBackColor"); }
	UParticleSystem*& CorpseLocatorEffectField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalGameData.CorpseLocatorEffect"); }
	UTexture2D*& MaxInventoryIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MaxInventoryIcon"); }
	UTexture2D*& ItemSkinIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemSkinIcon"); }
	//TArray<TEnumAsByte<enum ECollisionChannel>, TSizedDefaultAllocator<32> >& SkeletalPhysCustomBodyAdditionalIgnoresField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionChannel>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores"); }
	USoundBase*& ActionWheelClickSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelClickSound"); }
	USoundBase*& ActionWheelSelectSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelSelectSound"); }
	USoundBase*& ActionWheelProgressSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelProgressSound"); }
	USoundBase*& ActionWheelProgressCompleteSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelProgressCompleteSound"); }
	USoundBase*& Sound_GenericBoardPassengerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericBoardPassenger"); }
	USoundBase*& Sound_GenericUnboardPassengerField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericUnboardPassenger"); }
	USoundBase*& Sound_CraftingTabToggleField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CraftingTabToggle"); }
	UParticleSystem*& LockedToSeatingStructureParticleField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalGameData.LockedToSeatingStructureParticle"); }
	// TSubclassOf<UPrimalItem>& GenericBatteryItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalGameData.GenericBatteryItemClass"); }
	TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, UPrimalEngramEntry*, 0> >& ItemEngramMapField() { return *GetNativePointerField<TMap<UClass*, UPrimalEngramEntry*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UClass*, UPrimalEngramEntry*, 0> >*>(this, "UPrimalGameData.ItemEngramMap"); }
	//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& GenesisSeasonPassItemsField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GenesisSeasonPassItems"); }
// TSubclassOf<AActor>& DefaultStructureDestroyedMeshActorClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.DefaultStructureDestroyedMeshActorClass"); }
	//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& DefaultTradableOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultTradableOptions"); }
	//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& CoreTradableOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreTradableOptions"); }
	//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& AdditionalTradableOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalTradableOptions"); }
	//TArray<//TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& AlwaysAllowBuffClassesField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AlwaysAllowBuffClasses"); }
	TArray<FGrinderItemReplacer, TSizedDefaultAllocator<32> >& GrinderReplacementsField() { return *GetNativePointerField<TArray<FGrinderItemReplacer, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GrinderReplacements"); }
	TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >& InvalidReferenceRedirectsField() { return *GetNativePointerField<TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.InvalidReferenceRedirects"); }
	TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >& AdditionalInvalidReferenceRedirectsField() { return *GetNativePointerField<TArray<FInvalidReferenceRedirector, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalInvalidReferenceRedirects"); }
	// TSubclassOf<UPrimalWorldBuffData>& CoreWorldBuffDefinitionsField() { return *GetNativePointerField<TSubclassOf<UPrimalWorldBuffData>*>(this, "UPrimalGameData.CoreWorldBuffDefinitions"); }
		//TArray<TSubclassOf<UPrimalWorldBuffData>, TSizedDefaultAllocator<32> >& AdditionalWorldBuffDefinitionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UPrimalWorldBuffData>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalWorldBuffDefinitions"); }
	UPrimalWorldBuffData*& WorldBuffDataField() { return *GetNativePointerField<UPrimalWorldBuffData**>(this, "UPrimalGameData.WorldBuffData"); }
	FLinearColor& PointOfInterest_IndicatorColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_Default"); }
	FLinearColor& PointOfInterest_IndicatorColor_ObjectiveCompleteField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_ObjectiveComplete"); }
	FLinearColor& PointOfInterest_ProgressBarColor_TamingAffinityField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_ProgressBarColor_TamingAffinity"); }
	UTexture2D*& PointOfInterest_Icon_TamingInProgressField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_TamingInProgress"); }
	UTexture2D*& PointOfInterest_Icon_TamingCompleteField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_TamingComplete"); }
	UTexture2D*& PointOfInterest_Icon_PlayerField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_Player"); }
	// TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClass_PS5Field() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass_PS5"); }
	// TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClass_XSXField() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass_XSX"); }
	// TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass"); }
	TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >& DefaultMapItemSetsField() { return *GetNativePointerField<TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DefaultMapItemSets"); }
	TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >& AdditionalDefaultMapItemSetsField() { return *GetNativePointerField<TArray<FWorldDefaultItemSet, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalDefaultMapItemSets"); }
	//TSoftClassPtr<AActor>& PhotoModeClassField() { return *GetNativePointerField<//TSoftClassPtr<AActor>*>(this, "UPrimalGameData.PhotoModeClass"); }
	//TSoftClassPtr<AActor>& OverridePhotoModeClassField() { return *GetNativePointerField<//TSoftClassPtr<AActor>*>(this, "UPrimalGameData.OverridePhotoModeClass"); }
	TArray<FExtraEggItem, TSizedDefaultAllocator<32> >& ExtraEggItemsField() { return *GetNativePointerField<TArray<FExtraEggItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ExtraEggItems"); }
	TArray<FExtraEggItem, TSizedDefaultAllocator<32> >& AdditionalExtraEggItemsField() { return *GetNativePointerField<TArray<FExtraEggItem, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AdditionalExtraEggItems"); }
	UStaticMesh*& CopySettingsVisualIndicatorMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalGameData.CopySettingsVisualIndicatorMesh"); }
	UMaterialInterface*& CopySettingsVisualIndicatorMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.CopySettingsVisualIndicatorMaterial"); }
	TArray<FSlateColor, TSizedDefaultAllocator<32> >& SubtitleColorsField() { return *GetNativePointerField<TArray<FSlateColor, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.SubtitleColors"); }
	// TSubclassOf<UToolTipWidget>& HUDOverlayGestationTooltipField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "UPrimalGameData.HUDOverlayGestationTooltip"); }
		//TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& ProfilingDinosField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ProfilingDinos"); }
		//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >& ProfilingStructuresField() { return *GetNativePointerField<//TArray<//TSoftClassPtr<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ProfilingStructures"); }
	UShooterHaptics*& HapticsField() { return *GetNativePointerField<UShooterHaptics**>(this, "UPrimalGameData.Haptics"); }
	TArray<FCryopodPersistantBuffs, TSizedDefaultAllocator<32> >& CryopodPersistantBuffsMapField() { return *GetNativePointerField<TArray<FCryopodPersistantBuffs, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CryopodPersistantBuffsMap"); }
	TArray<FConfigSupplyCrateItemsOverride, TSizedDefaultAllocator<32> >& CoreOverrideSupplyCrateItemsField() { return *GetNativePointerField<TArray<FConfigSupplyCrateItemsOverride, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CoreOverrideSupplyCrateItems"); }
	USoundBase*& PreRespawnUISoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.PreRespawnUISound"); }
	USoundBase*& PostRespawnUISoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.PostRespawnUISound"); }
	TArray<FString, TSizedDefaultAllocator<32> >& MapMovieOrderHelperField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.MapMovieOrderHelper"); }
	TArray<FSubtitleStringMap, TSizedDefaultAllocator<32> >& BookendSubtitlesField() { return *GetNativePointerField<TArray<FSubtitleStringMap, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BookendSubtitles"); }
	//TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >& DLCStructsAndEnumsField() { return *GetNativePointerField<//TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DLCStructsAndEnums"); }
	TArray<FDinoAbilities, TSizedDefaultAllocator<32> >& AbilityDescriptionsField() { return *GetNativePointerField<TArray<FDinoAbilities, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.AbilityDescriptions"); }
	TMap<FName, FDinoAbilities, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FDinoAbilities, 0> >& AbilityDescriptionsMapField() { return *GetNativePointerField<TMap<FName, FDinoAbilities, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FDinoAbilities, 0> >*>(this, "UPrimalGameData.AbilityDescriptionsMap"); }
	//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >& DinoTrackFilterOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.DinoTrackFilterOptions"); }
	//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >& CustomDinoTrackFilterOptionsField() { return *GetNativePointerField<//TArray<TSubclassOf<UDinoTrackFilterOption>, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CustomDinoTrackFilterOptions"); }
	UModDataAsset*& AdditionalModDataAssetField() { return *GetNativePointerField<UModDataAsset**>(this, "UPrimalGameData.AdditionalModDataAsset"); }
	TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >& PlayerConfigVoiceCollectionOptionsField() { return *GetNativePointerField<TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.PlayerConfigVoiceCollectionOptions"); }
	TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >& CustomPlayerConfigVoiceCollectionOptionsField() { return *GetNativePointerField<TArray<FPlayerConfigVoiceCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CustomPlayerConfigVoiceCollectionOptions"); }
	TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >& BodyBonePresetOptionsField() { return *GetNativePointerField<TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.BodyBonePresetOptions"); }
	TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >& CustomBodyBonePresetOptionsField() { return *GetNativePointerField<TArray<FPlayerBoneBodyPreset, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.CustomBodyBonePresetOptions"); }
	UTexture2D*& ExperienceIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ExperienceIcon"); }
	//TSoftClassPtr<UObject>& CDOLiveUpdatesDataClassField() { return *GetNativePointerField<//TSoftClassPtr<UObject>*>(this, "UPrimalGameData.CDOLiveUpdatesDataClass"); }
// TSubclassOf<AActor>& VolumetricDispatcherClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.VolumetricDispatcherClass"); }
// TSubclassOf<AActor>& DefaultDestructionInstanceActorWithGeoCollectionField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.DefaultDestructionInstanceActorWithGeoCollection"); }
	//TSoftClassPtr<UDamageType>& CheatDestroyFoliageDamageTypeField() { return *GetNativePointerField<//TSoftClassPtr<UDamageType>*>(this, "UPrimalGameData.CheatDestroyFoliageDamageType"); }
// TSubclassOf<AActor>& DefaultFieldSystemActorClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UPrimalGameData.DefaultFieldSystemActorClass"); }
// TSubclassOf<UNavAreaBase>& DefaultWaterNavAreaField() { return *GetNativePointerField<TSubclassOf<UNavAreaBase>*>(this, "UPrimalGameData.DefaultWaterNavArea"); }
// TSubclassOf<UNavAreaBase>& DefaultStructureNavAreaField() { return *GetNativePointerField<TSubclassOf<UNavAreaBase>*>(this, "UPrimalGameData.DefaultStructureNavArea"); }
	UDataTable*& ItemSpawnBlacklistDataTableField() { return *GetNativePointerField<UDataTable**>(this, "UPrimalGameData.ItemSpawnBlacklistDataTable"); }
	//TSoftClassPtr<APrimalBuff>& CarriedNotifyBuffField() { return *GetNativePointerField<//TSoftClassPtr<APrimalBuff>*>(this, "UPrimalGameData.CarriedNotifyBuff"); }
	//TSoftObjectPtr<UPrimalWordFilter>& MainNameWordListField() { return *GetNativePointerField<TSoftObjectPtr<UPrimalWordFilter>*>(this, "UPrimalGameData.MainNameWordList"); }
	TSubclassOf<UObject>& GeneTraits_DefinitionsField() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "UPrimalGameData.GeneTraits_Definitions"); }
	TSubclassOf<UObject>& CustomGeneTraits_DefinitionsField() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "UPrimalGameData.CustomGeneTraits_Definitions"); }
	TSoftClassPtr<UDamageType>& CheatDestroyFoliageDamageTypeField() { return *GetNativePointerField<TSoftClassPtr<UDamageType>*>(this, "UPrimalGameData.CheatDestroyFoliageDamageType"); }

	// Bitfields


	// Functions

	USoundBase* GetGenericCombatMusic(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*>(this, "UPrimalGameData.GetGenericCombatMusic(APrimalCharacter*,APrimalCharacter*)", forCharacter, forEnemy); }
	void LoadedWorld(UWorld* TheWorld) { NativeCall<void, UWorld*>(this, "UPrimalGameData.LoadedWorld(UWorld*)", TheWorld); }
	void TickedWorld(UWorld* TheWorld, float DeltaTime) { NativeCall<void, UWorld*, float>(this, "UPrimalGameData.TickedWorld(UWorld*,float)", TheWorld, DeltaTime); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalGameData();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalGameData"); }
	//void ~UPrimalGameData() { NativeCall<void>(this, "UPrimalGameData.~UPrimalGameData()"); }
	//void UPrimalGameData(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UPrimalGameData.UPrimalGameData(FObjectInitializer*)", ObjectInitializer); }
	void SetCoreDefaults() { NativeCall<void>(this, "UPrimalGameData.SetCoreDefaults()"); }
	void Initialize(const TArray<UModDataAsset*, TSizedDefaultAllocator<32> >* AdditionalModDataAssets) { NativeCall<void, const TArray<UModDataAsset*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.Initialize(TArray<UModDataAsset*,TSizedDefaultAllocator<32>>&)", AdditionalModDataAssets); }
	FLinearColor* GetColorForDefinition(FLinearColor* result, int DefinitionIndex) { return NativeCall<FLinearColor*, FLinearColor*, int>(this, "UPrimalGameData.GetColorForDefinition(int)", result, DefinitionIndex); }
	bool CanTeamTarget(int attackerTeam, int victimTeam, int originalVictimTargetingTeam, const AActor* Attacker, const AActor* Victim) { return NativeCall<bool, int, int, int, const AActor*, const AActor*>(this, "UPrimalGameData.CanTeamTarget(int,int,int,AActor*,AActor*,bool)", attackerTeam, victimTeam, originalVictimTargetingTeam, Attacker, Victim); }
	bool CanTeamDamage(int attackerTeam, int victimTeam, const AActor* Attacker) { return NativeCall<bool, int, int, const AActor*>(this, "UPrimalGameData.CanTeamDamage(int,int,AActor*)", attackerTeam, victimTeam, Attacker); }
	int GetNamedTargetingTeamIndex(FName TargetingTeamName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetNamedTargetingTeamIndex(FName)", TargetingTeamName); }
	int GetIndexDynamicMatBytesByName(FName Name) { return NativeCall<int, FName>(this, "UPrimalGameData.GetIndexDynamicMatBytesByName(FName)", Name); }
	void GetDataListEntries(TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >* OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString, TSizedDefaultAllocator<32> >* FoldersFound, UObject* ForObject, const wchar_t* CustomFolderFilter, char SortType, const wchar_t* NameFilter, bool includeSkins, bool onlySkins, bool bIsSkinSelectorMode) { NativeCall<void, TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >*, int, bool, char, TArray<FString, TSizedDefaultAllocator<32> >*, UObject*, const wchar_t*, char, const wchar_t*, bool, bool, bool>(this, "UPrimalGameData.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter, includeSkins, onlySkins, bIsSkinSelectorMode); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface* entryInterface) { return NativeCall<bool, IDataListEntryInterface*>(this, "UPrimalGameData.GetEntryDefaultEnabled(IDataListEntryInterface*)", entryInterface); }
	FString* GetEntryDefaultTextOverride(FString* result, IDataListEntryInterface* entryInterface) { return NativeCall<FString*, FString*, IDataListEntryInterface*>(this, "UPrimalGameData.GetEntryDefaultTextOverride(IDataListEntryInterface*)", result, entryInterface); }
	void GetEntryExtraIcons(IDataListEntryInterface* entryInterface, TArray<UTexture2D*, TSizedDefaultAllocator<32> >* extraIcons) { NativeCall<void, IDataListEntryInterface*, TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetEntryExtraIcons(IDataListEntryInterface*,TArray<UTexture2D*,TSizedDefaultAllocator<32>>&)", entryInterface, extraIcons); }
	void GetEntryCustomColor(IDataListEntryInterface* entryInterface, FLinearColor* CustomColor, FLinearColor* TextColorOverride) { NativeCall<void, IDataListEntryInterface*, FLinearColor*, FLinearColor*>(this, "UPrimalGameData.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor&,FLinearColor*)", entryInterface, CustomColor, TextColorOverride); }
	// TSubclassOf<UPrimalDinoEntry>* GetDinoEntry(TSubclassOf<UPrimalDinoEntry>* result, TSubclassOf<APrimalDinoCharacter> DinoClass) { return NativeCall<TSubclassOf<UPrimalDinoEntry> *, TSubclassOf<UPrimalDinoEntry>*, TSubclassOf<APrimalDinoCharacter>>(this, "UPrimalGameData.GetDinoEntry(TSubclassOf<UPrimalDinoEntry>*,TSubclassOf<APrimalDinoCharacter>)", result, DinoClass); }
		//static TSubclassOf<UPrimalDinoEntry>* GetDinoEntrySoft() { return NativeCall<TSubclassOf<UPrimalDinoEntry> *>(nullptr, "UPrimalGameData.GetDinoEntrySoft()"); }
	// TSubclassOf<UObject>* GetRedirectedClass(TSubclassOf<UObject>* result, const FString* key, UObject* WorldContextObject) { return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject>*, const FString*, UObject*>(this, "UPrimalGameData.GetRedirectedClass(TSubclassOf<UObject>*,FString&,UObject*)", result, key, WorldContextObject); }
	static void ArkChangeUIPlatform() { NativeCall<void>(nullptr, "UPrimalGameData.ArkChangeUIPlatform(FString)"); }
	static UPrimalGlobalUIData* BPGetGlobalUIData(bool* bIsPsOrXbUi) { return NativeCall<UPrimalGlobalUIData*, bool*>(nullptr, "UPrimalGameData.BPGetGlobalUIData(bool&,TSubclassOf<UPrimalGlobalUIData>,TSubclassOf<UPrimalGlobalUIData>,TSubclassOf<UPrimalGlobalUIData>)", bIsPsOrXbUi); }
	USoundBase* GetGenericCombatMusic_Implementation(APrimalCharacter* forCharacter, APrimalCharacter* forEnemy) { return NativeCall<USoundBase*, APrimalCharacter*, APrimalCharacter*>(this, "UPrimalGameData.GetGenericCombatMusic_Implementation(APrimalCharacter*,APrimalCharacter*)", forCharacter, forEnemy); }
	static void AddPartBoneModifiers(USkeletalMeshComponent* ForMesh, const TArray<FBoneModifierRange, TSizedDefaultAllocator<32> >* BoneModifierRanges, float Value, TArray<FBoneModifier, TSizedDefaultAllocator<32> >* BoneModifiers) { NativeCall<void, USkeletalMeshComponent*, const TArray<FBoneModifierRange, TSizedDefaultAllocator<32> >*, float, TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.AddPartBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierRange,TSizedDefaultAllocator<32>>&,float,TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", ForMesh, BoneModifierRanges, Value, BoneModifiers); }
	FLevelExperienceRamp* GetLevelExperienceRamp(ELevelExperienceRampType::Type levelType) { return NativeCall<FLevelExperienceRamp*, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelExperienceRamp(ELevelExperienceRampType::Type)", levelType); }
	TArray<int, TSizedDefaultAllocator<32> >* GetPlayerLevelEngramPoints() { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetPlayerLevelEngramPoints()"); }
	static TSubclassOf<UObject>* GetRemappedClass_HardHard(TSubclassOf<UObject>* result, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>* RemappedClasses, TSubclassOf<UObject> ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetRemappedClass_HardHard(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>)", result, RemappedClasses, ForClass); }
	static TSubclassOf<UObject>* GetRemappedClass_HardSoft(TSubclassOf<UObject>* result, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>* RemappedClasses, const FSoftObjectPath* ForClass) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>*, const FSoftObjectPath*>(nullptr, "UPrimalGameData.GetRemappedClass_HardSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FSoftObjectPath&)", result, RemappedClasses, ForClass); }
	static FSoftObjectPath* GetRemappedClass_SoftSoft(FSoftObjectPath* result, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>* RemappedClasses, const FSoftObjectPath* ForClass) { return NativeCall<FSoftObjectPath*, FSoftObjectPath*, const TArray<FClassRemapping, TSizedDefaultAllocator<32>>*, const FSoftObjectPath*>(nullptr, "UPrimalGameData.GetRemappedClass_SoftSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FSoftObjectPath&)", result, RemappedClasses, ForClass); }
	//static void GetClassAdditions(//TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* TheClassAdditions, const TArray<FClassAddition, TSizedDefaultAllocator<32> >* ClassAdditions, TSubclassOf<UObject> ForClass) { NativeCall<void, //TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*, const TArray<FClassAddition, TSizedDefaultAllocator<32> >*, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetClassAdditions(//TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>*,TArray<FClassAddition,TSizedDefaultAllocator<32>>*,TSubclassOf<UObject>)", TheClassAdditions, ClassAdditions, ForClass); }
	TArray<FString, TSizedDefaultAllocator<32> >* GetPlayerSpawnRegions(UWorld* ForWorld) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, UWorld*>(this, "UPrimalGameData.GetPlayerSpawnRegions(UWorld*)", ForWorld); }
	bool MergeModData(UPrimalGameData* InMergeCanidate) { return NativeCall<bool, UPrimalGameData*>(this, "UPrimalGameData.MergeModData(UPrimalGameData*)", InMergeCanidate); }
	FDinoBabySetup* GetDinoBabySetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoBabySetup(FName)", DinoNameTag); }
	static bool LocalIsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked(int)", ExplorerNoteIndex); }
	void PostLoad() { NativeCall<void>(this, "UPrimalGameData.PostLoad()"); }
	bool GetAllAbilitiesForDino(const FName* DinoTag, TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >* AbilityInfos) { return NativeCall<bool, const FName*, TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetAllAbilitiesForDino(FName&,TArray<FDinoAbilityInfo,TSizedDefaultAllocator<32>>&)", DinoTag, AbilityInfos); }
	static TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >* GetNonBPDinoAncestorsFromBP() { return NativeCall<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.GetNonBPDinoAncestorsFromBP(TArray<FDinoAncestorsEntryBlueprint,TSizedDefaultAllocator<32>>)"); }
	static TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >* GetBPDinoAncestorsFromNonBP() { return NativeCall<TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.GetBPDinoAncestorsFromNonBP(TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>)"); }
	static void AppendBoneModifiers(USkeletalMeshComponent* ForMesh, const TArray<FBoneModifierNamed, TSizedDefaultAllocator<32> >* Modifiers, TArray<FBoneModifier, TSizedDefaultAllocator<32> >* OutBoneModifiers) { NativeCall<void, USkeletalMeshComponent*, const TArray<FBoneModifierNamed, TSizedDefaultAllocator<32> >*, TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.AppendBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>&,TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", ForMesh, Modifiers, OutBoneModifiers); }
	static void AppendGlobalBoneModifiers(USkeletalMeshComponent* ForMesh, bool IsFemale, TArray<FBoneModifier, TSizedDefaultAllocator<32> >* BoneModifiers) { NativeCall<void, USkeletalMeshComponent*, bool, TArray<FBoneModifier, TSizedDefaultAllocator<32> >*>(nullptr, "UPrimalGameData.AppendGlobalBoneModifiers(USkeletalMeshComponent*,bool,TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", ForMesh, IsFemale, BoneModifiers); }
	static char GetIsItemBlacklisted() { return NativeCall<char>(nullptr, "UPrimalGameData.GetIsItemBlacklisted(TSoftClassPtr<UPrimalItem>)"); }
	const UPrimalGlobalUIData* GetUIDataFast() { return &NativeCall<const UPrimalGlobalUIData&>(this, "UPrimalGameData.GetUIDataFast()"); }
	static TSubclassOf<UObject>* GetRedirectedClass(TSubclassOf<UObject>* result, FString* key, UObject* WorldContextObject) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, FString*, UObject*>(nullptr, "UPrimalGameData.GetRedirectedClass(FString&,UObject*)", result, key, WorldContextObject);  }
	bool CallGeneTrait_BPGetCustomBlueprintData_Implementation(FName DataName, FFunctionParams_NoArrays* InData, FFunctionParams_NoArrays* OutData) { return NativeCall<bool, FName, FFunctionParams_NoArrays*, FFunctionParams_NoArrays*>(this, "UPrimalGameData.CallGeneTrait_BPGetCustomBlueprintData_Implementation(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", DataName, InData, OutData); }
	bool CallGeneTrait_BPGetCustomBlueprintData(FName DataName, FFunctionParams_NoArrays* InData, FFunctionParams_NoArrays* OutData) { return NativeCall<bool, FName, FFunctionParams_NoArrays*, FFunctionParams_NoArrays*>(this, "UPrimalGameData.CallGeneTrait_BPGetCustomBlueprintData(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", DataName, InData, OutData); }
	int GetBitmaskForBuffs(TArray<APrimalBuff*, TSizedDefaultAllocator<32> > ActiveBuffs) { return NativeCall<int, TArray<APrimalBuff*, TSizedDefaultAllocator<32> >>(this, "UPrimalGameData.GetBitmaskForBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>)", ActiveBuffs); }

	int& MaxThreatField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.MaxThreat"); }
	bool& bForceEnablePhysicsSimulation_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bForceEnablePhysicsSimulation_DEPRECATED"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bInitialized"); }
	bool& bForceServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bForceServerUseDinoList"); }
	bool& bWantsToRunMissionsField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bWantsToRunMissions"); }
	bool& bUsesCustomPlayerDataField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bUsesCustomPlayerData"); }
	bool& bDoNotConsumeDefaultARKInputsField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bDoNotConsumeDefaultARKInputs"); }
	bool& bPreventPhotoModeField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bPreventPhotoMode"); }
	bool& bAllowAdditionalLocalPlayersWithoutFirstPlayerPawnField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bAllowAdditionalLocalPlayersWithoutFirstPlayerPawn"); }
	int& MaxLocalPlayersField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.MaxLocalPlayers"); }
	bool& bDisableSplitscreenField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bDisableSplitscreen"); }
	float& DistanceRenderFloatingTextEnemyClubARKField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.DistanceRenderFloatingTextEnemyClubARK"); }
	int& RadialSelecterNumDivisionsOverrideField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.RadialSelecterNumDivisionsOverride"); }
	float& OverrideCorpseLifespanFixedField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideCorpseLifespanFixed"); }
	float& DinoCountGameModeMultiplyField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.DinoCountGameModeMultiply"); }
	float& GlobalHarvestHealthMultiplierOverrideField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalHarvestHealthMultiplierOverride"); }
	bool& bHasInitializedCosmeticsField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bHasInitializedCosmetics"); }
	float& DefaultThrallAttackDecisionDurationField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.DefaultThrallAttackDecisionDuration"); }

	UMaterialInterface*& PostProcess_LowHealthField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_LowHealth"); }
	UTexture2D*& AlternateImprintedRiderIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.AlternateImprintedRiderIcon"); }
	UTexture2D*& ItemTraitIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemTraitIcon"); }
	UTexture2D*& PreventLinkingContainerToStorageInterfaceIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PreventLinkingContainerToStorageInterfaceIcon"); }
	UTexture2D*& AllowLinkingContainerToStorageInterfaceIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.AllowLinkingContainerToStorageInterfaceIcon"); }
	FString& MainMenuMapOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.MainMenuMapOverride"); }
	UTexture2D*& SoftTameLimitCryoIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.SoftTameLimitCryoIcon"); }
	UDataTable*& StructureEffectsDataTableField() { return *GetNativePointerField<UDataTable**>(this, "UPrimalGameData.StructureEffectsDataTable"); }
	FSoftObjectPath& SeamlessTransitionMapOverrideField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UPrimalGameData.SeamlessTransitionMapOverride"); }
	UTexture2D*& ModIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ModIcon"); }
	TArray<float, TSizedDefaultAllocator<32> >& RepeatableMilestoneFlatXPTableField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.RepeatableMilestoneFlatXPTable"); }
	TArray<USparseDataOverrideManager*, TSizedDefaultAllocator<32> >& ConstructedSparseDataOverrideManagersField() { return *GetNativePointerField<TArray<USparseDataOverrideManager*, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.ConstructedSparseDataOverrideManagers"); }
	USoundBase*& MilestoneComplete_SoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.MilestoneComplete_Sound"); }
	USoundBase*& ActiveSkillTriggered_SoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActiveSkillTriggered_Sound"); }
	FPlayerPawnDefaultAnimInstances& DefaultPlayerPawnAnimInstancesField() { return *GetNativePointerField<FPlayerPawnDefaultAnimInstances*>(this, "UPrimalGameData.DefaultPlayerPawnAnimInstances"); }
	BitFieldValue<bool, unsigned char> bPreventCharacterCreationSpawnMap() { return { this, "UPrimalGameData.bPreventCharacterCreationSpawnMap"}; }
	BitFieldValue<bool, unsigned char> bPreventCharacterCreationHeightSlider() { return { this, "UPrimalGameData.bPreventCharacterCreationHeightSlider"}; }
	BitFieldValue<bool, unsigned char> bIsSOTFGameMode() { return { this, "UPrimalGameData.bIsSOTFGameMode"}; }
	BitFieldValue<bool, unsigned char> bUseDisablePaintingsUserSetting() { return { this, "UPrimalGameData.bUseDisablePaintingsUserSetting"}; }
	BitFieldValue<bool, unsigned char> bForceInfiniteWeight() { return { this, "UPrimalGameData.bForceInfiniteWeight"}; }
	BitFieldValue<bool, unsigned char> bUseAbilityDescriptions() { return { this, "UPrimalGameData.bUseAbilityDescriptions"}; }
	BitFieldValue<bool, unsigned char> bDinoConsumeRunningStaminaWithPC() { return { this, "UPrimalGameData.bDinoConsumeRunningStaminaWithPC"}; }
	BitFieldValue<bool, unsigned char> bDisableFoodConsumption() { return { this, "UPrimalGameData.bDisableFoodConsumption"}; }
	BitFieldValue<bool, unsigned char> bIgnoreSwimmingStaminaRecoveryRate() { return { this, "UPrimalGameData.bIgnoreSwimmingStaminaRecoveryRate"}; }
	BitFieldValue<bool, unsigned char> bCameraPPAllowNonShooterChar() { return { this, "UPrimalGameData.bCameraPPAllowNonShooterChar"}; }
	BitFieldValue<bool, unsigned char> bDisableHarvesting() { return { this, "UPrimalGameData.bDisableHarvesting"}; }
	BitFieldValue<bool, unsigned char> bAllowRunningWhileCrafting() { return { this, "UPrimalGameData.bAllowRunningWhileCrafting"}; }
	BitFieldValue<bool, unsigned char> bDinoCheckControlledByPlayerBuff() { return { this, "UPrimalGameData.bDinoCheckControlledByPlayerBuff"}; }
	BitFieldValue<bool, unsigned char> bRidingEquipsDefaultWeapon() { return { this, "UPrimalGameData.bRidingEquipsDefaultWeapon"}; }
	BitFieldValue<bool, unsigned char> bDisableFogOfWar() { return { this, "UPrimalGameData.bDisableFogOfWar"}; }
	BitFieldValue<bool, unsigned char> bAllowForceAttackUnconsciousTarget() { return { this, "UPrimalGameData.bAllowForceAttackUnconsciousTarget"}; }
	BitFieldValue<bool, unsigned char> bStopAttackingUnconsciousTarget() { return { this, "UPrimalGameData.bStopAttackingUnconsciousTarget"}; }
	BitFieldValue<bool, unsigned char> bDisableTamedDinoStasis() { return { this, "UPrimalGameData.bDisableTamedDinoStasis"}; }
	BitFieldValue<bool, unsigned char> bOfficialServerAllowDinoPossesion() { return { this, "UPrimalGameData.bOfficialServerAllowDinoPossesion"}; }
	BitFieldValue<bool, unsigned char> bForceStepDamageOnlyFoliage() { return { this, "UPrimalGameData.bForceStepDamageOnlyFoliage"}; }
	BitFieldValue<bool, unsigned char> bDisableWakingTame() { return { this, "UPrimalGameData.bDisableWakingTame"}; }
	BitFieldValue<bool, unsigned char> bDontForceFPVForPCViewTarget() { return { this, "UPrimalGameData.bDontForceFPVForPCViewTarget"}; }
	BitFieldValue<bool, unsigned char> bHideRepairOnDinoToolTip() { return { this, "UPrimalGameData.bHideRepairOnDinoToolTip"}; }
	BitFieldValue<bool, unsigned char> bDisableMUEntriesForSOTF() { return { this, "UPrimalGameData.bDisableMUEntriesForSOTF"}; }
	BitFieldValue<bool, unsigned char> bDisableTribeManager() { return { this, "UPrimalGameData.bDisableTribeManager"}; }
	BitFieldValue<bool, unsigned char> bAllowJumpingWhileCrafting() { return { this, "UPrimalGameData.bAllowJumpingWhileCrafting"}; }
	BitFieldValue<bool, unsigned char> bPreventDinoKillVictimItemCollection() { return { this, "UPrimalGameData.bPreventDinoKillVictimItemCollection"}; }
	BitFieldValue<bool, unsigned char> bUseSOTFInputHandling() { return { this, "UPrimalGameData.bUseSOTFInputHandling"}; }
	BitFieldValue<bool, unsigned char> bUseSOTFHUDHandling() { return { this, "UPrimalGameData.bUseSOTFHUDHandling"}; }
	BitFieldValue<bool, unsigned char> bDisableItemAddedRemovedNotifications() { return { this, "UPrimalGameData.bDisableItemAddedRemovedNotifications"}; }
	BitFieldValue<bool, unsigned char> bEnableCharacterGetCustomTooltip() { return { this, "UPrimalGameData.bEnableCharacterGetCustomTooltip"}; }
	BitFieldValue<bool, unsigned char> bOnlyAllowGlobalChatInLobby() { return { this, "UPrimalGameData.bOnlyAllowGlobalChatInLobby"}; }
	BitFieldValue<bool, unsigned char> bDisableUnderMeshChecks() { return { this, "UPrimalGameData.bDisableUnderMeshChecks"}; }
	BitFieldValue<bool, unsigned char> bSameTeamAlwaysRelevant() { return { this, "UPrimalGameData.bSameTeamAlwaysRelevant"}; }
	BitFieldValue<bool, unsigned char> bUseSOTFFloatingDamage() { return { this, "UPrimalGameData.bUseSOTFFloatingDamage"}; }
	BitFieldValue<bool, unsigned char> bEnableCanMoveThroughActor() { return { this, "UPrimalGameData.bEnableCanMoveThroughActor"}; }
	BitFieldValue<bool, unsigned char> bDisableDefaultWeaponEquipOnEmptySlot() { return { this, "UPrimalGameData.bDisableDefaultWeaponEquipOnEmptySlot"}; }
	BitFieldValue<bool, unsigned char> bDisableWildDinoInventoryDrop() { return { this, "UPrimalGameData.bDisableWildDinoInventoryDrop"}; }
	BitFieldValue<bool, unsigned char> bDisableWildBabySpawns() { return { this, "UPrimalGameData.bDisableWildBabySpawns"}; }
	BitFieldValue<bool, unsigned char> bDisableDeathMarkers() { return { this, "UPrimalGameData.bDisableDeathMarkers"}; }
	static bool LocalIsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsPerMapExplorerNoteUnlocked(int)", ExplorerNoteIndex); }
	static UPrimalGameData* BPGetGameData() { return NativeCall<UPrimalGameData*>(nullptr, "UPrimalGameData.BPGetGameData()"); }
	static bool IsCustomCosmeticEmote(FName EmoteName) { return NativeCall<bool, FName>(nullptr, "UPrimalGameData.IsCustomCosmeticEmote(FName)", EmoteName); }
	bool IsCosmeticSkinWhitelistedBP(__int64 CosmeticModID, bool bIsPossibleDynamicDownloadRequest) { return NativeCall<bool, __int64, bool>(this, "UPrimalGameData.IsCosmeticSkinWhitelistedBP(__int64,bool)", CosmeticModID, bIsPossibleDynamicDownloadRequest); }
	bool HasCosmeticEyebrowDefinition(__int64 ModID, int EyebrowIndex, bool bExcludeDynamic) { return NativeCall<bool, __int64, int, bool>(this, "UPrimalGameData.HasCosmeticEyebrowDefinition(__int64,int,bool)", ModID, EyebrowIndex, bExcludeDynamic); }
	bool ShouldHideSpawnRegionFromSpawnUI(UWorld* ForWorld, unsigned char RegionIndex) { return NativeCall<bool, UWorld*, unsigned char>(this, "UPrimalGameData.ShouldHideSpawnRegionFromSpawnUI(UWorld*,unsignedchar)", ForWorld, RegionIndex); }
	void BPMergeModGameData(UPrimalGameData* AnotherGameData) { NativeCall<void, UPrimalGameData*>(this, "UPrimalGameData.BPMergeModGameData(UPrimalGameData*)", AnotherGameData); }
	bool IsCosmeticSkinWhitelisted(__int64 CosmeticModID, bool bIsPossibleDynamicDownloadRequest) { return NativeCall<bool, __int64, bool>(this, "UPrimalGameData.IsCosmeticSkinWhitelisted(__int64,bool)", CosmeticModID, bIsPossibleDynamicDownloadRequest); }
	TArray<FColor, TSizedDefaultAllocator<32> >* GetGlobalColorTable(TArray<FColor, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FColor, TSizedDefaultAllocator<32> >*, TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "UPrimalGameData.GetGlobalColorTable()", result); }
	int GetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.GetItemQualityIndex(float)", ItemRating); }
	void BPInitializeGameData() { NativeCall<void>(this, "UPrimalGameData.BPInitializeGameData()"); }
	int GetDefinitionIndexForColorName(FName ColorName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetDefinitionIndexForColorName(FName)", ColorName); }
	int GetLevelMax(ELevelExperienceRampType::Type levelType) { return NativeCall<int, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelMax(ELevelExperienceRampType::Type)", levelType); }
	bool BPCanTeamTarget(int attackerTeam, int victimTeam, int originalVictimTargetingTeam, const AActor* Attacker, const AActor* Victim) { return NativeCall<bool, int, int, int, const AActor*, const AActor*>(this, "UPrimalGameData.BPCanTeamTarget(int,int,int,AActor*,AActor*)", attackerTeam, victimTeam, originalVictimTargetingTeam, Attacker, Victim); }
	bool GetAbilityForInputAction(const FName& DinoTag, const FName& InputAction, FDinoAbilityInfo& AbilityInfo) { return NativeCall<bool, const FName&, const FName&, FDinoAbilityInfo&>(this, "UPrimalGameData.GetAbilityForInputAction(FName&,FName&,FDinoAbilityInfo&)", DinoTag, InputAction, AbilityInfo); }
	int GetEngramRequirementLevel(UClass* ItemClass) { return NativeCall<int, UClass*>(this, "UPrimalGameData.GetEngramRequirementLevel(UClass*)", ItemClass); }
	float GetLevelXP(ELevelExperienceRampType::Type levelType, int forLevel) { return NativeCall<float, ELevelExperienceRampType::Type, int>(this, "UPrimalGameData.GetLevelXP(ELevelExperienceRampType::Type,int)", levelType, forLevel); }
	int BPGetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.BPGetItemQualityIndex(float)", ItemRating); }
	bool HasCosmeticFacialHairDefinition(__int64 ModID, int FacialHairIndex, bool bExcludeDynamic) { return NativeCall<bool, __int64, int, bool>(this, "UPrimalGameData.HasCosmeticFacialHairDefinition(__int64,int,bool)", ModID, FacialHairIndex, bExcludeDynamic); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalGameData._getUObject()"); }
	FString* GetExplorerNoteDescription(FString* result, int ExplorerNoteIndex) { return NativeCall<FString*, FString*, int>(this, "UPrimalGameData.GetExplorerNoteDescription(int)", result, ExplorerNoteIndex); }
	void SaveGameData() { NativeCall<void>(this, "UPrimalGameData.SaveGameData()"); }
	void LoadSavedGameData() { NativeCall<void>(this, "UPrimalGameData.LoadSavedGameData()"); }
	int GetNamedExplorerNoteIndex(FName NoteName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetNamedExplorerNoteIndex(FName)", NoteName); }
	bool HasCosmeticHeadHairDefinition(__int64 ModID, int HeadHairIndex, bool bExcludeDynamic) { return NativeCall<bool, __int64, int, bool>(this, "UPrimalGameData.HasCosmeticHeadHairDefinition(__int64,int,bool)", ModID, HeadHairIndex, bExcludeDynamic); }
	bool BPPreventAddingLocalPlayer(UWorld* ForWorld, int NumLocalPlayers, AShooterPlayerController* FirstPC, int ControllerId) { return NativeCall<bool, UWorld*, int, AShooterPlayerController*, int>(this, "UPrimalGameData.BPPreventAddingLocalPlayer(UWorld*,int,AShooterPlayerController*,int)", ForWorld, NumLocalPlayers, FirstPC, ControllerId); }
	UTexture2D* GetEngramEntryMapIcon(IDataListEntryInterface* entryInterface) { return NativeCall<UTexture2D*, IDataListEntryInterface*>(this, "UPrimalGameData.GetEngramEntryMapIcon(IDataListEntryInterface*)", entryInterface); }
	float GetXPMax(ELevelExperienceRampType::Type levelType) { return NativeCall<float, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetXPMax(ELevelExperienceRampType::Type)", levelType); }
	float GetTeamTargetingDesirabilityMultiplier(int attackerTeam, int victimTeam) { return NativeCall<float, int, int>(this, "UPrimalGameData.GetTeamTargetingDesirabilityMultiplier(int,int)", attackerTeam, victimTeam); }
	FDinoBabySetup* GetDinoGestationSetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup*, FName>(this, "UPrimalGameData.GetDinoGestationSetup(FName)", DinoNameTag); }
	bool BPCanTeamDamage(int attackerTeam, int victimTeam, const AActor* Attacker) { return NativeCall<bool, int, int, const AActor*>(this, "UPrimalGameData.BPCanTeamDamage(int,int,AActor*)", attackerTeam, victimTeam, Attacker); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "UPrimalGameData.GetObject()"); }
	FName GetExplorerNoteName(int NoteIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "UPrimalGameData.GetExplorerNoteName(int)", AsaReturnPointer, NoteIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalGameData"); }
};