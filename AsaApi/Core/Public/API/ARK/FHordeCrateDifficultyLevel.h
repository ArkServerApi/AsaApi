#pragma once


struct FHordeCrateDifficultyLevel
{
	// Fields

	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FHordeCrateDifficultyLevel.bEnabled"); }
	int& MaxNumOfEventsForDifficultyField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MaxNumOfEventsForDifficulty"); }
	int& DifficultyLevelField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.DifficultyLevel"); }
	int& MinNPCsToStartField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MinNPCsToStart"); }
	int& MaxNPCsToStartField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MaxNPCsToStart"); }
	//FHordeCrateNPCGroup& StartingNPCsField() { return *GetNativePointerField<FHordeCrateNPCGroup*>(this, "FHordeCrateDifficultyLevel.StartingNPCs"); }
	//TArray<FHordeCrateWave, TSizedDefaultAllocator<32> >& NPCWavesToCompleteField() { return *GetNativePointerField<TArray<FHordeCrateWave, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateDifficultyLevel.NPCWavesToComplete"); }
	float& MinTimeBeforeSelfDestructField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MinTimeBeforeSelfDestruct"); }
	float& MaxTimeBeforeSelfDestructField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MaxTimeBeforeSelfDestruct"); }
	TSubclassOf<AActor>& ActorTemplateField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "FHordeCrateDifficultyLevel.ActorTemplate"); }
	float& MinQualityMultiplierField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MinQualityMultiplier"); }
	float& MaxQualityMultiplierField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MaxQualityMultiplier"); }
	int& MinAmtRewardItemsField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MinAmtRewardItems"); }
	int& MaxAmtRewardItemsField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MaxAmtRewardItems"); }
	FLinearColor& DifficultyColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHordeCrateDifficultyLevel.DifficultyColor"); }
	float& MainNodeElementPctField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MainNodeElementPct"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FHordeCrateDifficultyLevel>(); }
};