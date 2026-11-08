#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AActor.h"

struct APrimalFoliageSolver : AActor
{
public:
	APrimalFoliageSolver() = delete;
	~APrimalFoliageSolver() = delete;
	APrimalFoliageSolver(const APrimalFoliageSolver&) = delete;
	APrimalFoliageSolver& operator=(const APrimalFoliageSolver&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalFoliageSolver"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalFoliageSolver"); }

	float& FluidRadiusScaleField() { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.FluidRadiusScale"); }
	float& FluidRadiusBiasField() { return *GetNativePointerField<float*>(this, "APrimalFoliageSolver.FluidRadiusBias"); }
	bool& bUseVolumetricDispatcherField() { return *GetNativePointerField<bool*>(this, "APrimalFoliageSolver.bUseVolumetricDispatcher"); }
	int& MinEvaluationsForOneTimeFoliageInteractionField() { return *GetNativePointerField<int*>(this, "APrimalFoliageSolver.MinEvaluationsForOneTimeFoliageInteraction"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "APrimalFoliageSolver.bEnabled"); }
	unsigned int& LastValidSourceCountField() { return *GetNativePointerField<unsigned int*>(this, "APrimalFoliageSolver.LastValidSourceCount"); }

	void UnRegisterWindSource(UPrimalWindSourceComponent* WindSource) { NativeCall<void, UPrimalWindSourceComponent*>(this, "APrimalFoliageSolver.UnRegisterWindSource(UPrimalWindSourceComponent*)", WindSource); }
	void SetEnabled(bool bEnable) { NativeCall<void, bool>(this, "APrimalFoliageSolver.SetEnabled(bool)", bEnable); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalFoliageSolver.Tick(float)", DeltaTime); }
	void BeginPlay() { NativeCall<void>(this, "APrimalFoliageSolver.BeginPlay()"); }
	void RegisterWindSource(UPrimalWindSourceComponent* WindSource) { NativeCall<void, UPrimalWindSourceComponent*>(this, "APrimalFoliageSolver.RegisterWindSource(UPrimalWindSourceComponent*)", WindSource); }
	void ApplyParameters(float DeltaTime) { NativeCall<void, float>(this, "APrimalFoliageSolver.ApplyParameters(float)", DeltaTime); }

	TArray<UPrimalWindSourceComponent*, TSizedDefaultAllocator<32> >& WindSourceComponentsField() { return *GetNativePointerField<TArray<UPrimalWindSourceComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalFoliageSolver.WindSourceComponents"); }
	FName& ComputeSplatDataSourceIdField() { return *GetNativePointerField<FName*>(this, "APrimalFoliageSolver.ComputeSplatDataSourceId"); }
};
