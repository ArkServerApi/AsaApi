#pragma once


struct FPrimalPersistentCharacterStatsStruct
{
	// Fields

	unsigned __int16& CharacterStatusComponent_ExtraCharacterLevelField() { return *GetNativePointerField<unsigned __int16*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExtraCharacterLevel"); }
	float& CharacterStatusComponent_ExperiencePointsField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExperiencePoints"); }
	int& PlayerState_TotalEngramPointsField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_TotalEngramPoints"); }
	int& PlayerState_PurchasedEngramPointsField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_PurchasedEngramPoints"); }
	int& CharacterStatusComponent_HighestExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_HighestExtraCharacterLevel"); }
	int& CharacterStatusComponent_LastRespecAtExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecAtExtraCharacterLevel"); }
	long double& CharacterStatusComponent_LastRespecUtcTimeSecondsField() { return *GetNativePointerField<long double*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecUtcTimeSeconds"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& PerMapExplorerNoteUnlocksField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.PerMapExplorerNoteUnlocks"); }
	TArray<FName, TSizedDefaultAllocator<32> >& EmoteUnlocksField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.EmoteUnlocks"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& PlayerState_EngramBlueprintsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_EngramBlueprints"); }
	FieldArray<unsigned __int8, 12> CharacterStatusComponent_NumberOfLevelUpPointsAppliedField() { return { this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_NumberOfLevelUpPointsApplied" }; }
	FieldArray<TSubclassOf<UPrimalItem>, 10> PlayerState_DefaultItemSlotClassesField() { return { this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotClasses" }; }
	FieldArray<unsigned __int8, 10> PlayerState_DefaultItemSlotEngramsField() { return { this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotEngrams" }; }
	FieldArray<FDinoOrderGroup, 10> DinoOrderGroupsField() { return { this, "FPrimalPersistentCharacterStatsStruct.DinoOrderGroups" }; }
	int& CurrentlySelectedDinoOrderGroupField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CurrentlySelectedDinoOrderGroup"); }
	float& PercentageOfHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfHeadHairGrowth"); }
	float& PercentageOfFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfFacialHairGrowth"); }
	unsigned __int8& HeadHairIndexField() { return *GetNativePointerField<unsigned __int8*>(this, "FPrimalPersistentCharacterStatsStruct.HeadHairIndex"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ForcedUnlockDefaultCosmeticsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.ForcedUnlockDefaultCosmetics"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalPersistentCharacterStatsStruct>(); }
	FPrimalPersistentCharacterStatsStruct* operator=(const FPrimalPersistentCharacterStatsStruct* __that) { return NativeCall<FPrimalPersistentCharacterStatsStruct*, const FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPersistentCharacterStatsStruct.operator=(FPrimalPersistentCharacterStatsStruct&)", __that); }
	//void FPrimalPersistentCharacterStatsStruct() { NativeCall<void>(this, "FPrimalPersistentCharacterStatsStruct.FPrimalPersistentCharacterStatsStruct()"); }
	//void ~FPrimalPersistentCharacterStatsStruct() { NativeCall<void>(this, "FPrimalPersistentCharacterStatsStruct.~FPrimalPersistentCharacterStatsStruct()"); }
	//void FPrimalPersistentCharacterStatsStruct(const FPrimalPersistentCharacterStatsStruct * __that) { NativeCall<void, const FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPersistentCharacterStatsStruct.FPrimalPersistentCharacterStatsStruct(FPrimalPersistentCharacterStatsStruct&)", __that); }
	bool IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(this, "FPrimalPersistentCharacterStatsStruct.IsPerMapExplorerNoteUnlocked(int)", ExplorerNoteIndex); }
	bool IsEmoteUnlocked(FName EmoteName) { return NativeCall<bool, FName>(this, "FPrimalPersistentCharacterStatsStruct.IsEmoteUnlocked(FName)", EmoteName); }
	// 	void UnlockEmote(FName EmoteName) { NativeCall<void, FName>(this, "FPrimalPersistentCharacterStatsStruct.UnlockEmote(FName)", EmoteName); }
	// FUNCTION MISSING: FPrimalPersistentCharacterStatsStruct.UnlockEmote(FName)
	void ApplyToPrimalCharacter(APrimalCharacter* aChar, AShooterPlayerController* forPC, bool bIgnoreStats) { NativeCall<void, APrimalCharacter*, AShooterPlayerController*, bool>(this, "FPrimalPersistentCharacterStatsStruct.ApplyToPrimalCharacter(APrimalCharacter*,AShooterPlayerController*,bool)", aChar, forPC, bIgnoreStats); }
	void GiveEngramsToPlayerState(APrimalCharacter* aChar, AShooterPlayerController* forPC) { NativeCall<void, APrimalCharacter*, AShooterPlayerController*>(this, "FPrimalPersistentCharacterStatsStruct.GiveEngramsToPlayerState(APrimalCharacter*,AShooterPlayerController*)", aChar, forPC); }
};