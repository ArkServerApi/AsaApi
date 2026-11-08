#pragma once


struct FNPCSpawnEntry
{
	FString AnEntryName;
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> > NPCsToSpawn;
	TArray<FString, TSizedDefaultAllocator<32> > NPCsToSpawnStrings;
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> > NPCRandomSpawnClassWeights;
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> > NPCsSpawnOffsets;
	TArray<float, TSizedDefaultAllocator<32> > NPCsToSpawnPercentageChance;
	TArray<float, TSizedDefaultAllocator<32> > NPCMinLevelOffset;
	TArray<float, TSizedDefaultAllocator<32> > NPCMaxLevelOffset;
	TArray<float, TSizedDefaultAllocator<32> > NPCMinLevelMultiplier;
	TArray<float, TSizedDefaultAllocator<32> > NPCMaxLevelMultiplier;
	unsigned __int32 bAddLevelOffsetBeforeMultiplier : 1;
	TArray<unsigned char, TSizedDefaultAllocator<32> > NPCOverrideLevel;
	UE::Math::TVector<double> ExtentCheck;
	UE::Math::TVector<double> GroupSpawnOffset;
	float EntryWeight;
	float ManualSpawnPointSpreadRadius;
	float WaterOnlySpawnMinimumWaterHeight;
	float MaximumWaterHeight;
	TSubclassOf<UPrimalColorSet> ColorSets;
	TArray<FNPCDifficultyLevelRange, TSizedDefaultAllocator<32> > NPCDifficultyLevelRanges;
	float LevelDifficultyTestOverride;
	float SpawnMinDistanceFromStructuresMultiplier;
	float SpawnMinDistanceFromPlayersMultiplier;
	float SpawnMinDistanceFromTamedDinosMultiplier;
	float RandGroupSpawnOffsetZMin;
	float RandGroupSpawnOffsetZMax;
};