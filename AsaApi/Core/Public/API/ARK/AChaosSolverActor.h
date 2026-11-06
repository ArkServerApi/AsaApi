#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AChaosSolverActor : public AActor
{
public:
	AChaosSolverActor() = delete;
	~AChaosSolverActor() = delete;
	AChaosSolverActor(const AChaosSolverActor&) = delete;
	AChaosSolverActor& operator=(const AChaosSolverActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AChaosSolverActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AChaosSolverActor"); }

	FChaosSolverConfiguration& PropertiesField() { return *GetNativePointerField<FChaosSolverConfiguration*>(this, "AChaosSolverActor.Properties"); }
	float& TimeStepMultiplier_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "AChaosSolverActor.TimeStepMultiplier_DEPRECATED"); }
	int& CollisionIterations_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "AChaosSolverActor.CollisionIterations_DEPRECATED"); }
	int& PushOutIterations_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "AChaosSolverActor.PushOutIterations_DEPRECATED"); }
	int& PushOutPairIterations_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "AChaosSolverActor.PushOutPairIterations_DEPRECATED"); }
	float& ClusterConnectionFactor_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "AChaosSolverActor.ClusterConnectionFactor_DEPRECATED"); }
	EClusterConnectionTypeEnum& ClusterUnionConnectionType_DEPRECATEDField() { return *GetNativePointerField<EClusterConnectionTypeEnum*>(this, "AChaosSolverActor.ClusterUnionConnectionType_DEPRECATED"); }
	bool& DoGenerateCollisionData_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "AChaosSolverActor.DoGenerateCollisionData_DEPRECATED"); }
	FSolverCollisionFilterSettings& CollisionFilterSettings_DEPRECATEDField() { return *GetNativePointerField<FSolverCollisionFilterSettings*>(this, "AChaosSolverActor.CollisionFilterSettings_DEPRECATED"); }
	bool& DoGenerateBreakingData_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "AChaosSolverActor.DoGenerateBreakingData_DEPRECATED"); }
	FSolverBreakingFilterSettings& BreakingFilterSettings_DEPRECATEDField() { return *GetNativePointerField<FSolverBreakingFilterSettings*>(this, "AChaosSolverActor.BreakingFilterSettings_DEPRECATED"); }
	bool& DoGenerateTrailingData_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "AChaosSolverActor.DoGenerateTrailingData_DEPRECATED"); }
	FSolverTrailingFilterSettings& TrailingFilterSettings_DEPRECATEDField() { return *GetNativePointerField<FSolverTrailingFilterSettings*>(this, "AChaosSolverActor.TrailingFilterSettings_DEPRECATED"); }
	float& MassScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "AChaosSolverActor.MassScale_DEPRECATED"); }
	bool& bHasFloorField() { return *GetNativePointerField<bool*>(this, "AChaosSolverActor.bHasFloor"); }
	float& FloorHeightField() { return *GetNativePointerField<float*>(this, "AChaosSolverActor.FloorHeight"); }
	FChaosDebugSubstepControl& ChaosDebugSubstepControlField() { return *GetNativePointerField<FChaosDebugSubstepControl*>(this, "AChaosSolverActor.ChaosDebugSubstepControl"); }
	FDataflowSimulationAsset& SimulationAssetField() { return *GetNativePointerField<FDataflowSimulationAsset*>(this, "AChaosSolverActor.SimulationAsset"); }
	FDataflowRigidSolverProxy& RigidSolverProxyField() { return *GetNativePointerField<FDataflowRigidSolverProxy*>(this, "AChaosSolverActor.RigidSolverProxy"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AChaosSolverActor.PreRegisterAllComponents()"); }
	void SetSolverActive(bool bActive) { NativeCall<void, bool>(this, "AChaosSolverActor.SetSolverActive(bool)", bActive); }
	void ConditionalCreateSolver() { NativeCall<void>(this, "AChaosSolverActor.ConditionalCreateSolver()"); }
	void EndPlay(EEndPlayReason::Type ReasonEnd) { NativeCall<void, EEndPlayReason::Type>(this, "AChaosSolverActor.EndPlay(EEndPlayReason::Type)", ReasonEnd); }
	FString* GetSimulationName(FString* result) { return NativeCall<FString*, FString*>(this, "AChaosSolverActor.GetSimulationName()", result); }
	void WriteToSimulation(float DeltaTime, bool bAsyncTask) { NativeCall<void, float, bool>(this, "AChaosSolverActor.WriteToSimulation(float,bool)", DeltaTime, bAsyncTask); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AChaosSolverActor._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AChaosSolverActor.Serialize(FArchive&)", Ar); }
	void BeginPlay() { NativeCall<void>(this, "AChaosSolverActor.BeginPlay()"); }
	void BuildSimulationProxy() { NativeCall<void>(this, "AChaosSolverActor.BuildSimulationProxy()"); }
	void SetAsCurrentWorldSolver() { NativeCall<void>(this, "AChaosSolverActor.SetAsCurrentWorldSolver()"); }
	void MakeFloor() { NativeCall<void>(this, "AChaosSolverActor.MakeFloor()"); }
	void ResetSimulationProxy() { NativeCall<void>(this, "AChaosSolverActor.ResetSimulationProxy()"); }
	void MigrateSolver() { NativeCall<void>(this, "AChaosSolverActor.MigrateSolver()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AChaosSolverActor.PostRegisterAllComponents()"); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "AChaosSolverActor.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
	void ReadFromSimulation(float DeltaTime, bool bAsyncTask) { NativeCall<void, float, bool>(this, "AChaosSolverActor.ReadFromSimulation(float,bool)", DeltaTime, bAsyncTask); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AChaosSolverActor.PostUnregisterAllComponents()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AChaosSolverActor.PreInitializeComponents()"); }
	void PostLoad() { NativeCall<void>(this, "AChaosSolverActor.PostLoad()"); }
};
