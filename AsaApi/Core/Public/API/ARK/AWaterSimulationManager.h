#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWaterSimulationManager : public AActor
{
public:
	AWaterSimulationManager() = delete;
	~AWaterSimulationManager() = delete;
	AWaterSimulationManager(const AWaterSimulationManager&) = delete;
	AWaterSimulationManager& operator=(const AWaterSimulationManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterSimulationManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterSimulationManager"); }

	FBuoOceanIslandHeightSampler& IslandsSamplerField() { return *GetNativePointerField<FBuoOceanIslandHeightSampler*>(this, "AWaterSimulationManager.IslandsSampler"); }
	float& ReplicatedSimulationTimeField() { return *GetNativePointerField<float*>(this, "AWaterSimulationManager.ReplicatedSimulationTime"); }
	float& TargetSimulationTimeField() { return *GetNativePointerField<float*>(this, "AWaterSimulationManager.TargetSimulationTime"); }
	UE::Math::TVector<double>& MapBoundsMinField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWaterSimulationManager.MapBoundsMin"); }
	UE::Math::TVector<double>& MapBoundsMaxField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWaterSimulationManager.MapBoundsMax"); }
	float& SimulationTimeField() { return *GetNativePointerField<float*>(this, "AWaterSimulationManager.SimulationTime"); }
	int& CascadesCountField() { return *GetNativePointerField<int*>(this, "AWaterSimulationManager.CascadesCount"); }
	FLinearColor& ShoreDampeningMultipliersField() { return *GetNativePointerField<FLinearColor*>(this, "AWaterSimulationManager.ShoreDampeningMultipliers"); }
	int GetCascadeParametersCount() { return NativeCall<int>(this, "AWaterSimulationManager.GetCascadeParametersCount()"); }
	double GetDistanceToShoreNormalized(double InX, double InY) { return NativeCall<double, double, double>(this, "AWaterSimulationManager.GetDistanceToShoreNormalized(double,double)", InX, InY); }
	void OnRep_ReplicatedSimulationTime() { NativeCall<void>(this, "AWaterSimulationManager.OnRep_ReplicatedSimulationTime()"); }
	void BeginDestroy() { NativeCall<void>(this, "AWaterSimulationManager.BeginDestroy()"); }
	void MarkDirty() { NativeCall<void>(this, "AWaterSimulationManager.MarkDirty()"); }
	double GetDistanceToShore(double InX, double InY) { return NativeCall<double, double, double>(this, "AWaterSimulationManager.GetDistanceToShore(double,double)", InX, InY); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "AWaterSimulationManager.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void SetWaterSimulationTime(float InTime) { NativeCall<void, float>(this, "AWaterSimulationManager.SetWaterSimulationTime(float)", InTime); }
	static AWaterSimulationManager* GetWaterSimulationManager() { return NativeCall<AWaterSimulationManager*>(nullptr, "AWaterSimulationManager.GetWaterSimulationManager()"); }
	void BeginPlay() { NativeCall<void>(this, "AWaterSimulationManager.BeginPlay()"); }
	double GetWaterHeightAt(double InX, double InY) { return NativeCall<double, double, double>(this, "AWaterSimulationManager.GetWaterHeightAt(double,double)", InX, InY); }
	float SampleCascade(const UE::Math::TVector<double>& SampleLocation, int Cascade) { return NativeCall<float, const UE::Math::TVector<double>&, int>(this, "AWaterSimulationManager.SampleCascade(UE::Math::TVector<double>&,int)", SampleLocation, Cascade); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AWaterSimulationManager.Tick(float)", DeltaSeconds); }
};
