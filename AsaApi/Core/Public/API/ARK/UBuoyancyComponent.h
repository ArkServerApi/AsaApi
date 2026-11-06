#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UBuoyancyComponent : public UActorComponent
{
public:
	UBuoyancyComponent() = delete;
	~UBuoyancyComponent() = delete;
	UBuoyancyComponent(const UBuoyancyComponent&) = delete;
	UBuoyancyComponent& operator=(const UBuoyancyComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBuoyancyComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBuoyancyComponent"); }

	FOnPontoonEnteredWater& OnEnteredWaterDelegateField() { return *GetNativePointerField<FOnPontoonEnteredWater*>(this, "UBuoyancyComponent.OnEnteredWaterDelegate"); }
	FOnPontoonExitedWater& OnExitedWaterDelegateField() { return *GetNativePointerField<FOnPontoonExitedWater*>(this, "UBuoyancyComponent.OnExitedWaterDelegate"); }
	FBuoyancyData& BuoyancyDataField() { return *GetNativePointerField<FBuoyancyData*>(this, "UBuoyancyComponent.BuoyancyData"); }
	FBuoyancyComponentAsyncInput*& CurAsyncInputField() { return *GetNativePointerField<FBuoyancyComponentAsyncInput**>(this, "UBuoyancyComponent.CurAsyncInput"); }
	FBuoyancyComponentAsyncOutput*& CurAsyncOutputField() { return *GetNativePointerField<FBuoyancyComponentAsyncOutput**>(this, "UBuoyancyComponent.CurAsyncOutput"); }
	FBuoyancyComponentAsyncOutput*& NextAsyncOutputField() { return *GetNativePointerField<FBuoyancyComponentAsyncOutput**>(this, "UBuoyancyComponent.NextAsyncOutput"); }
	float& OutputInterpAlphaField() { return *GetNativePointerField<float*>(this, "UBuoyancyComponent.OutputInterpAlpha"); }
	unsigned int& PontoonConfigurationField() { return *GetNativePointerField<unsigned int*>(this, "UBuoyancyComponent.PontoonConfiguration"); }
	int& VelocityPontoonIndexField() { return *GetNativePointerField<int*>(this, "UBuoyancyComponent.VelocityPontoonIndex"); }
	BitFieldValue<bool, unsigned char> bIsOverlappingWaterBody() { return { this, "UBuoyancyComponent.bIsOverlappingWaterBody"}; }
	BitFieldValue<bool, unsigned char> bCanBeActive() { return { this, "UBuoyancyComponent.bCanBeActive"}; }
	BitFieldValue<bool, unsigned char> bIsInWaterBody() { return { this, "UBuoyancyComponent.bIsInWaterBody"}; }
	BitFieldValue<bool, unsigned char> bUseAsyncPath() { return { this, "UBuoyancyComponent.bUseAsyncPath"}; }
	void UpdatePontoonCoefficients() { NativeCall<void>(this, "UBuoyancyComponent.UpdatePontoonCoefficients()"); }
	void ApplyForces(float DeltaTime, UE::Math::TVector<double>* LinearVelocity, float ForwardSpeed, float ForwardSpeedKmh, UPrimitiveComponent* PrimitiveComponent) { if (!LinearVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, float, UE :: Math :: TVector < double >, float, float, UPrimitiveComponent *>(this, "UBuoyancyComponent.ApplyForces(float,UE::Math::TVector<double>,float,float,UPrimitiveComponent*)", DeltaTime, *LinearVelocity, ForwardSpeed, ForwardSpeedKmh, PrimitiveComponent); }
	void GameThread_ProcessIntermediateAsyncOutput(const FBuoyancyComponentAsyncOutput& Output) { NativeCall<void, const FBuoyancyComponentAsyncOutput&>(this, "UBuoyancyComponent.GameThread_ProcessIntermediateAsyncOutput(FBuoyancyComponentAsyncOutput&)", Output); }
	void EnteredWaterBody(UWaterBodyComponent* WaterBodyComponent) { NativeCall<void, UWaterBodyComponent*>(this, "UBuoyancyComponent.EnteredWaterBody(UWaterBodyComponent*)", WaterBodyComponent); }
	int UpdatePontoons(float DeltaTime, float ForwardSpeed, float ForwardSpeedKmh, UPrimitiveComponent* PrimitiveComponent) { return NativeCall<int, float, float, float, UPrimitiveComponent*>(this, "UBuoyancyComponent.UpdatePontoons(float,float,float,UPrimitiveComponent*)", DeltaTime, ForwardSpeed, ForwardSpeedKmh, PrimitiveComponent); }
	void ExitedWaterBody(UWaterBodyComponent* WaterBodyComponent) { NativeCall<void, UWaterBodyComponent*>(this, "UBuoyancyComponent.ExitedWaterBody(UWaterBodyComponent*)", WaterBodyComponent); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UBuoyancyComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool IsActive() { return NativeCall<bool>(this, "UBuoyancyComponent.IsActive()"); }
	void PostLoad() { NativeCall<void>(this, "UBuoyancyComponent.PostLoad()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UBuoyancyComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UE::Math::TVector<double>* ComputeLinearDragForce(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& PhyiscsVelocity) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UBuoyancyComponent.ComputeLinearDragForce(UE::Math::TVector<double>&)", result, PhyiscsVelocity); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UBuoyancyComponent.Serialize(FArchive&)", Ar); }
	void FinalizeAuxData() { NativeCall<void>(this, "UBuoyancyComponent.FinalizeAuxData()"); }
	void SetupWaterBodyOverlaps() { NativeCall<void>(this, "UBuoyancyComponent.SetupWaterBodyOverlaps()"); }
	void ApplyBuoyancy(UPrimitiveComponent* PrimitiveComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UBuoyancyComponent.ApplyBuoyancy(UPrimitiveComponent*)", PrimitiveComponent); }
	bool IsUsingAsyncPath() { return NativeCall<bool>(this, "UBuoyancyComponent.IsUsingAsyncPath()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UBuoyancyComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void BeginPlay() { NativeCall<void>(this, "UBuoyancyComponent.BeginPlay()"); }
	void Update(float DeltaTime) { NativeCall<void, float>(this, "UBuoyancyComponent.Update(float)", DeltaTime); }
	void SetCurrentAsyncInputOutputInternal(FBuoyancyComponentAsyncInput* CurInput, int InputIdx, FBuoyancyManagerAsyncOutput* CurOutput, FBuoyancyManagerAsyncOutput* NextOutput, float Alpha, int BuoyancyManagerTimestamp) { NativeCall<void, FBuoyancyComponentAsyncInput*, int, FBuoyancyManagerAsyncOutput*, FBuoyancyManagerAsyncOutput*, float, int>(this, "UBuoyancyComponent.SetCurrentAsyncInputOutputInternal(FBuoyancyComponentAsyncInput*,int,FBuoyancyManagerAsyncOutput*,FBuoyancyManagerAsyncOutput*,float,int)", CurInput, InputIdx, CurOutput, NextOutput, Alpha, BuoyancyManagerTimestamp); }
};
