#pragma once
#include "BulkForward.h"


struct ASupplyCrateSpawningVolume : AVolume
{
	// Fields

	TArray<FSupplyCrateSpawnEntry, TSizedDefaultAllocator<32> >& LinkedSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry, TSizedDefaultAllocator<32> >*>(this, "ASupplyCrateSpawningVolume.LinkedSupplyCrateEntries"); }
	TArray<FSupplyCrateSpawnEntry, TSizedDefaultAllocator<32> >& OriginalSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry, TSizedDefaultAllocator<32> >*>(this, "ASupplyCrateSpawningVolume.OriginalSupplyCrateEntries"); }
	TArray<FSupplyCrateSpawnPointEntry, TSizedDefaultAllocator<32> >& LinkedSpawnPointEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnPointEntry, TSizedDefaultAllocator<32> >*>(this, "ASupplyCrateSpawningVolume.LinkedSpawnPointEntries"); }
	int& MaxNumCratesField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningVolume.MaxNumCrates"); }
	float& DelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.DelayBeforeFirstCrate"); }
	float& MaxDelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxDelayBeforeFirstCrate"); }
	int& ZoneVolumeMaxNumberOfNPCBufferField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningVolume.ZoneVolumeMaxNumberOfNPCBuffer"); }
	float& IntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.IntervalBetweenCrateSpawns"); }
	float& MaxIntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxIntervalBetweenCrateSpawns"); }
	float& IntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.IntervalBetweenMaxedCrateSpawns"); }
	float& MaxIntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxIntervalBetweenMaxedCrateSpawns"); }
	float& SP_IntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_IntervalBetweenCrateSpawns"); }
	float& SP_MaxIntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxIntervalBetweenCrateSpawns"); }
	float& SP_IntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_IntervalBetweenMaxedCrateSpawns"); }
	float& SP_MaxIntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxIntervalBetweenMaxedCrateSpawns"); }
	float& SP_NoValidSpawnRecheckIntervalField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_NoValidSpawnRecheckInterval"); }
	float& SP_DelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_DelayBeforeFirstCrate"); }
	float& SP_MaxDelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxDelayBeforeFirstCrate"); }
	float& MinCrateDistanceFromPlayerField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinCrateDistanceFromPlayer"); }
	float& MinCrateDistanceFromStructureField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinCrateDistanceFromStructure"); }
	float& NoValidSpawnReCheckIntervalField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.NoValidSpawnReCheckInterval"); }
	float& MinTimeBetweenCrateSpawnsAtSamePointField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinTimeBetweenCrateSpawnsAtSamePoint"); }
	float& MinDistanceFromOtherCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinDistanceFromOtherCrate"); }
	FName& CrateSpawningRequiresLoadedDataLayerField() { return *GetNativePointerField<FName*>(this, "ASupplyCrateSpawningVolume.CrateSpawningRequiresLoadedDataLayer"); }
	TArray<APrimalStructureItemContainer_SupplyCrate*, TSizedDefaultAllocator<32> >& MyCratesField() { return *GetNativePointerField<TArray<APrimalStructureItemContainer_SupplyCrate*, TSizedDefaultAllocator<32> >*>(this, "ASupplyCrateSpawningVolume.MyCrates"); }
	FTimerHandle& CheckCrateSpawnHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ASupplyCrateSpawningVolume.CheckCrateSpawnHandle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsEnabled() { return { this, "ASupplyCrateSpawningVolume.bIsEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpawnPointWeights() { return { this, "ASupplyCrateSpawningVolume.bUseSpawnPointWeights" }; }
	BitFieldValue<bool, unsigned __int32> bDoSpawnCrateOnTopOfStructures() { return { this, "ASupplyCrateSpawningVolume.bDoSpawnCrateOnTopOfStructures" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventCrateOnTopOfStructures() { return { this, "ASupplyCrateSpawningVolume.bForcePreventCrateOnTopOfStructures" }; }
	BitFieldValue<bool, unsigned __int32> bReallyUseCrateRequiresLoadedLevel() { return { this, "ASupplyCrateSpawningVolume.bReallyUseCrateRequiresLoadedLevel" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASupplyCrateSpawningVolume"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesASupplyCrateSpawningVolume();
	void SetSpawnEnabled(bool bEnable) { NativeCall<void, bool>(this, "ASupplyCrateSpawningVolume.SetSpawnEnabled(bool)", bEnable); }
	void Destroyed() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.Destroyed()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ASupplyCrateSpawningVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.BeginPlay()"); }
	void CheckForSupplyCrateStart() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.CheckForSupplyCrateStart()"); }
	void RemoveCrate(APrimalStructureItemContainer_SupplyCrate* aCrate) { NativeCall<void, APrimalStructureItemContainer_SupplyCrate*>(this, "ASupplyCrateSpawningVolume.RemoveCrate(APrimalStructureItemContainer_SupplyCrate*)", aCrate); }
	void CheckCrateSpawn() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.CheckCrateSpawn()"); }
	FSupplyCrateSpawnPointEntry* GetValidSpawnPointEntry(UE::Math::TVector<double>* OutSpawnPoint, long double** WasSpawned) { return NativeCall<FSupplyCrateSpawnPointEntry*, UE::Math::TVector<double>*, long double**>(this, "ASupplyCrateSpawningVolume.GetValidSpawnPointEntry(UE::Math::TVector<double>&,double*&)", OutSpawnPoint, WasSpawned); }
	void SpawnCratesFromAllPoints() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.SpawnCratesFromAllPoints()"); }

	bool& bForceRandomSupplyCratePointsField() { return *GetNativePointerField<bool*>(this, "ASupplyCrateSpawningVolume.bForceRandomSupplyCratePoints"); }
	static void SpawnCratesFromAllVolumes(UWorld* theWorld) { NativeCall<void, UWorld*>(nullptr, "ASupplyCrateSpawningVolume.SpawnCratesFromAllVolumes(UWorld*)", theWorld); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASupplyCrateSpawningVolume"); }
};