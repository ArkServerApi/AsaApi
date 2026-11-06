#pragma once


struct ASupplyCrateSpawningSettings : AActor
{
	// Fields

	TArray<FSupplyCrateSpawnEntry, TSizedDefaultAllocator<32> >& LinkedSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry, TSizedDefaultAllocator<32> >*>(this, "ASupplyCrateSpawningSettings.LinkedSupplyCrateEntries"); }
	int& MaxNumCratesField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningSettings.MaxNumCrates"); }
	float& DelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.DelayBeforeFirstCrate"); }
	float& MaxDelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxDelayBeforeFirstCrate"); }
	int& ZoneVolumeMaxNumberOfNPCBufferField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningSettings.ZoneVolumeMaxNumberOfNPCBuffer"); }
	float& IntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.IntervalBetweenCrateSpawns"); }
	float& MaxIntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxIntervalBetweenCrateSpawns"); }
	float& IntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.IntervalBetweenMaxedCrateSpawns"); }
	float& MaxIntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxIntervalBetweenMaxedCrateSpawns"); }
	float& MinCrateDistanceFromPlayerField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinCrateDistanceFromPlayer"); }
	float& MinCrateDistanceFromStructureField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinCrateDistanceFromStructure"); }
	float& NoValidSpawnReCheckIntervalField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.NoValidSpawnReCheckInterval"); }
	float& MinTimeBetweenCrateSpawnsAtSamePointField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinTimeBetweenCrateSpawnsAtSamePoint"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseSpawnPointWeights() { return { this, "ASupplyCrateSpawningSettings.bUseSpawnPointWeights" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASupplyCrateSpawningSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASupplyCrateSpawningSettings"); }
};