#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UGroomSolverComponent : public UMeshComponent
{
public:
	UGroomSolverComponent() = delete;
	~UGroomSolverComponent() = delete;
	UGroomSolverComponent(const UGroomSolverComponent&) = delete;
	UGroomSolverComponent& operator=(const UGroomSolverComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGroomSolverComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGroomSolverComponent"); }

	FGroomSolverSettings& SolverSettingsField() { return *GetNativePointerField<FGroomSolverSettings*>(this, "UGroomSolverComponent.SolverSettings"); }
	FDataflowSimulationAsset& SimulationAssetField() { return *GetNativePointerField<FDataflowSimulationAsset*>(this, "UGroomSolverComponent.SimulationAsset"); }
	FDataflowGroomSolverProxy& GroomSolverProxyField() { return *GetNativePointerField<FDataflowGroomSolverProxy*>(this, "UGroomSolverComponent.GroomSolverProxy"); }
	void ResetSimulationProxy() { NativeCall<void>(this, "UGroomSolverComponent.ResetSimulationProxy()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UGroomSolverComponent.DestroyRenderState_Concurrent()"); }
	void WriteToSimulation(float DeltaTime, bool bAsyncTask) { NativeCall<void, float, bool>(this, "UGroomSolverComponent.WriteToSimulation(float,bool)", DeltaTime, bAsyncTask); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGroomSolverComponent._getUObject()"); }
	void ReadFromSimulation(float DeltaTime, bool bAsyncTask) { NativeCall<void, float, bool>(this, "UGroomSolverComponent.ReadFromSimulation(float,bool)", DeltaTime, bAsyncTask); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGroomSolverComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void BuildSimulationProxy() { NativeCall<void>(this, "UGroomSolverComponent.BuildSimulationProxy()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UGroomSolverComponent.SendRenderDynamicData_Concurrent()"); }
	FString* GetSimulationName(FString* result) { return NativeCall<FString*, FString*>(this, "UGroomSolverComponent.GetSimulationName()", result); }
	void OnRegister() { NativeCall<void>(this, "UGroomSolverComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UGroomSolverComponent.OnUnregister()"); }
	void ResetGroomComponents() { NativeCall<void>(this, "UGroomSolverComponent.ResetGroomComponents()"); }
	void SelectDynamicCurves() { NativeCall<void>(this, "UGroomSolverComponent.SelectDynamicCurves()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UGroomSolverComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
};
