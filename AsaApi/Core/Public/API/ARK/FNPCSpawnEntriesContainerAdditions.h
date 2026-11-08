#pragma once


struct FNPCSpawnEntriesContainerAdditions
{
	TSubclassOf<UNPCSpawnEntriesContainer> SpawnEntriesContainerClass;
	FString SpawnEntriesContainerClassString;
	bool bSpawnEntriesContainerClassStringUseExactString;
	TArray<FNPCSpawnEntry, TSizedDefaultAllocator<32> > AdditionalNPCSpawnEntries;
	TArray<FNPCSpawnLimit, TSizedDefaultAllocator<32> > AdditionalNPCSpawnLimits;
};