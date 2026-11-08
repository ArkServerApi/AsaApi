#pragma once
#include "BulkForward.h"


struct AHordeCrateManager : AActor
{
	// Fields

	bool& bUseBPForceStartHordeField() { return *GetNativePointerField<bool*>(this, "AHordeCrateManager.bUseBPForceStartHorde"); }
	float& MinDelayBeforeInitialEventField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinDelayBeforeInitialEvent"); }
	float& MaxDelayBeforeInitialEventField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MaxDelayBeforeInitialEvent"); }
	float& MinEventCheckIntervalField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinEventCheckInterval"); }
	float& MaxEventCheckIntervalField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MaxEventCheckInterval"); }
	float& MinDistanceFromOtherEventField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinDistanceFromOtherEvent"); }
	TArray<FHordeCrateDifficultyLevel, TSizedDefaultAllocator<32> >& CrateDifficultyLevelsField() { return *GetNativePointerField<TArray<FHordeCrateDifficultyLevel, TSizedDefaultAllocator<32> >*>(this, "AHordeCrateManager.CrateDifficultyLevels"); }
	TArray<FHordeCrateDifficultyLevel, TSizedDefaultAllocator<32> >& ElementNodeDifficultyLevelsField() { return *GetNativePointerField<TArray<FHordeCrateDifficultyLevel, TSizedDefaultAllocator<32> >*>(this, "AHordeCrateManager.ElementNodeDifficultyLevels"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& ActiveSpawnZonesField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AHordeCrateManager.ActiveSpawnZones"); }
	TArray<FHordeCrateEvent, TSizedDefaultAllocator<32> >& ActiveEventsField() { return *GetNativePointerField<TArray<FHordeCrateEvent, TSizedDefaultAllocator<32> >*>(this, "AHordeCrateManager.ActiveEvents"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHordeCrateManager"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAHordeCrateManager();
	void BeginPlay() { NativeCall<void>(this, "AHordeCrateManager.BeginPlay()"); }
	void ForceStartHorde(AActor* SpawnNetwork, AShooterPlayerController* PC, TSubclassOf<AActor> ActorClass, int DifficultyIndex) { NativeCall<void, AActor*, AShooterPlayerController*, TSubclassOf<AActor>, int>(this, "AHordeCrateManager.ForceStartHorde(AActor*,AShooterPlayerController*,TSubclassOf<AActor>,int)", SpawnNetwork, PC, ActorClass, DifficultyIndex); }

	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "AHordeCrateManager.bIsEnabled"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHordeCrateManager"); }
};