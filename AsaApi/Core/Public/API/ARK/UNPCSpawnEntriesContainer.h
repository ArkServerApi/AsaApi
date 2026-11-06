#pragma once


struct UNPCSpawnEntriesContainer : UObject
{
	TArray<FNPCSpawnEntry, TSizedDefaultAllocator<32> >& NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FNPCSpawnEntry, TSizedDefaultAllocator<32> >*>(this, "UNPCSpawnEntriesContainer.NPCSpawnEntries"); }
	TArray<FNPCSpawnLimit, TSizedDefaultAllocator<32> >& NPCSpawnLimitsField() { return *GetNativePointerField<TArray<FNPCSpawnLimit, TSizedDefaultAllocator<32> >*>(this, "UNPCSpawnEntriesContainer.NPCSpawnLimits"); }
	float& MaxDesiredNumEnemiesMultiplierField() { return *GetNativePointerField<float*>(this, "UNPCSpawnEntriesContainer.MaxDesiredNumEnemiesMultiplier"); }

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNPCSpawnEntriesContainer"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UNPCSpawnEntriesContainer"); }
};