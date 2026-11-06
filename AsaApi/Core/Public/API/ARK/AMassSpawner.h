#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMassSpawner : public AActor
{
public:
	AMassSpawner() = delete;
	~AMassSpawner() = delete;
	AMassSpawner(const AMassSpawner&) = delete;
	AMassSpawner& operator=(const AMassSpawner&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMassSpawner"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMassSpawner"); }

	FMassSpawnerOnSpawningFinishedEvent& OnSpawningFinishedEventField() { return *GetNativePointerField<FMassSpawnerOnSpawningFinishedEvent*>(this, "AMassSpawner.OnSpawningFinishedEvent"); }
	FMassSpawnerOnDespawningFinishedEvent& OnDespawningFinishedEventField() { return *GetNativePointerField<FMassSpawnerOnDespawningFinishedEvent*>(this, "AMassSpawner.OnDespawningFinishedEvent"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "AMassSpawner.Count"); }
	float& SpawningCountScaleField() { return *GetNativePointerField<float*>(this, "AMassSpawner.SpawningCountScale"); }
	FDelegateHandle& SimulationStartedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AMassSpawner.SimulationStartedHandle"); }
	FDelegateHandle& OnPostWorldInitDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AMassSpawner.OnPostWorldInitDelegateHandle"); }
	BitFieldValue<bool, unsigned __int32> bAutoSpawnOnBeginPlay() { return { this, "AMassSpawner.bAutoSpawnOnBeginPlay"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideSchematics() { return { this, "AMassSpawner.bOverrideSchematics"}; }
	void RegisterEntityTemplates() { NativeCall<void>(this, "AMassSpawner.RegisterEntityTemplates()"); }
	void PostLoad() { NativeCall<void>(this, "AMassSpawner.PostLoad()"); }
	void BeginPlay() { NativeCall<void>(this, "AMassSpawner.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMassSpawner.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void ClearTemplates() { NativeCall<void>(this, "AMassSpawner.ClearTemplates()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AMassSpawner.PostRegisterAllComponents()"); }
	void DoSpawning() { NativeCall<void>(this, "AMassSpawner.DoSpawning()"); }
	void DoDespawning() { NativeCall<void>(this, "AMassSpawner.DoDespawning()"); }
	void BeginDestroy() { NativeCall<void>(this, "AMassSpawner.BeginDestroy()"); }
};
