#pragma once


struct FItemNetInfo
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemArchetypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemArchetype"); }
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemNetInfo.ItemID"); }
	unsigned int& ItemQuantityField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ItemQuantity"); }
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.CustomItemID"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.SlotIndex"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.CreationTime"); }
	FString& CustomItemNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemName"); }
	FString& CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemDescription"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.UploadEarliestValidTime"); }
	TArray<unsigned __int64, TSizedDefaultAllocator<32> >& SteamUserItemIDField() { return *GetNativePointerField<TArray<unsigned __int64, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.SteamUserItemID"); }
	unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "FItemNetInfo.CraftQueue"); }
	long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextCraftCompletionTime"); }
	float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftingSkill"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftedSkillBonus"); }
	FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterCharacterName"); }
	FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterTribeName"); }
	unsigned int& WeaponClipAmmoField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.WeaponClipAmmo"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemDurability"); }
	float& ItemRatingField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemRating"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ExpirationTimeUTC"); }
	TSubclassOf<UPrimalItem>& ItemCustomClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemCustomClass"); }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "FItemNetInfo.ItemStatValues" }; }
	FieldArray<__int16, 6> ItemColorIDField() { return { this, "FItemNetInfo.ItemColorID" }; }
	TSubclassOf<UPrimalItem>& ItemSkinTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemSkinTemplate"); }
	TArray<FCustomItemData, TSizedDefaultAllocator<32> >& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.CustomItemDatas"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& CustomItemColorsField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.CustomItemColors"); }
	TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.CustomResourceRequirements"); }
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastSpoilingTime"); }
	unsigned __int64& OwnerPlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FItemNetInfo.OwnerPlayerDataId"); }
	TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "FItemNetInfo.LastOwnerPlayer"); }
	long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastAutoDurabilityDecreaseTime"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemStatClampsMultiplier"); }
	UE::Math::TVector<double>& OriginalItemDropLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FItemNetInfo.OriginalItemDropLocation"); }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return { this, "FItemNetInfo.PreSkinItemColorID" }; }
	FieldArray<unsigned __int8, 12> EggNumberOfLevelUpPointsAppliedField() { return { this, "FItemNetInfo.EggNumberOfLevelUpPointsApplied" }; }
	FieldArray<unsigned __int8, 12> EggNumberMutationsAppliedField() { return { this, "FItemNetInfo.EggNumberMutationsApplied" }; }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.EggTamedIneffectivenessModifier"); }
	FieldArray<unsigned __int8, 6> EggColorSetIndicesField() { return { this, "FItemNetInfo.EggColorSetIndices" }; }
	int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggGenderOverride"); }
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsMale"); }
	BitFieldValue<bool, unsigned __int32> bNetInfoFromClient() { return { this, "FItemNetInfo.bNetInfoFromClient"}; }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsBlueprint() { return { this, "FItemNetInfo.bIsBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bIsEngram() { return { this, "FItemNetInfo.bIsEngram" }; }
	BitFieldValue<bool, unsigned __int32> bIsCustomRecipe() { return { this, "FItemNetInfo.bIsCustomRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsFoodRecipe() { return { this, "FItemNetInfo.bIsFoodRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "FItemNetInfo.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "FItemNetInfo.bAllowRemovalFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay() { return { this, "FItemNetInfo.bHideFromInventoryDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromSteamInventory() { return { this, "FItemNetInfo.bAllowRemovalFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "FItemNetInfo.bFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "FItemNetInfo.bIsFromAllClustersInventory" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventGrinding() { return { this, "FItemNetInfo.bForcePreventGrinding" }; }
	BitFieldValue<bool, unsigned __int32> bIsEquipped() { return { this, "FItemNetInfo.bIsEquipped" }; }
	BitFieldValue<bool, unsigned __int32> bIsSlot() { return { this, "FItemNetInfo.bIsSlot" }; }
	BitFieldValue<bool, unsigned __int32> bIsInitialItem() { return { this, "FItemNetInfo.bIsInitialItem" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemNetInfo>(); }
	FItemNetInfo* operator=(FItemNetInfo* __that) { return NativeCall<FItemNetInfo*, FItemNetInfo*>(this, "FItemNetInfo.operator=(FItemNetInfo&)", __that); }
	FItemNetInfo* operator=(const FItemNetInfo* __that) { return NativeCall<FItemNetInfo*, const FItemNetInfo*>(this, "FItemNetInfo.operator=(FItemNetInfo&)", __that); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool* bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool*>(this, "FItemNetInfo.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};