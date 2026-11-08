#pragma once
#include "BulkForward.h"
#include "UChaosVehicleMovementComponent.h"

struct UChaosWheeledVehicleMovementComponent : public UChaosVehicleMovementComponent
{
public:
	UChaosWheeledVehicleMovementComponent() = delete;
	~UChaosWheeledVehicleMovementComponent() = delete;
	UChaosWheeledVehicleMovementComponent(const UChaosWheeledVehicleMovementComponent&) = delete;
	UChaosWheeledVehicleMovementComponent& operator=(const UChaosWheeledVehicleMovementComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosWheeledVehicleMovementComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosWheeledVehicleMovementComponent"); }

	bool& bSuspensionEnabledField() { return *GetNativePointerField<bool*>(this, "UChaosWheeledVehicleMovementComponent.bSuspensionEnabled"); }
	bool& bWheelFrictionEnabledField() { return *GetNativePointerField<bool*>(this, "UChaosWheeledVehicleMovementComponent.bWheelFrictionEnabled"); }
	bool& bLegacyWheelFrictionPositionField() { return *GetNativePointerField<bool*>(this, "UChaosWheeledVehicleMovementComponent.bLegacyWheelFrictionPosition"); }
	FCollisionResponseContainer& WheelTraceCollisionResponsesField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "UChaosWheeledVehicleMovementComponent.WheelTraceCollisionResponses"); }
	bool& bMechanicalSimEnabledField() { return *GetNativePointerField<bool*>(this, "UChaosWheeledVehicleMovementComponent.bMechanicalSimEnabled"); }
	bool& bUsingMechanicalSimField() { return *GetNativePointerField<bool*>(this, "UChaosWheeledVehicleMovementComponent.bUsingMechanicalSim"); }
	FVehicleEngineConfig& EngineSetupField() { return *GetNativePointerField<FVehicleEngineConfig*>(this, "UChaosWheeledVehicleMovementComponent.EngineSetup"); }
	FVehicleDifferentialConfig& DifferentialSetupField() { return *GetNativePointerField<FVehicleDifferentialConfig*>(this, "UChaosWheeledVehicleMovementComponent.DifferentialSetup"); }
	FVehicleTransmissionConfig& TransmissionSetupField() { return *GetNativePointerField<FVehicleTransmissionConfig*>(this, "UChaosWheeledVehicleMovementComponent.TransmissionSetup"); }
	FVehicleSteeringConfig& SteeringSetupField() { return *GetNativePointerField<FVehicleSteeringConfig*>(this, "UChaosWheeledVehicleMovementComponent.SteeringSetup"); }
	unsigned int& NumDrivenWheelsField() { return *GetNativePointerField<unsigned int*>(this, "UChaosWheeledVehicleMovementComponent.NumDrivenWheels"); }
	UE::Math::TVector2<double>& WheelTrackDimensionsField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UChaosWheeledVehicleMovementComponent.WheelTrackDimensions"); }
	void SetSnapshot(const FWheeledSnaphotData& SnapshotIn) { NativeCall<void, const FWheeledSnaphotData&>(this, "UChaosWheeledVehicleMovementComponent.SetSnapshot(FWheeledSnaphotData&)", SnapshotIn); }
	void SetupVehicleShapes() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.SetupVehicleShapes()"); }
	void ResetVehicleState() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.ResetVehicleState()"); }
	bool CanCreateVehicle() { return NativeCall<bool>(this, "UChaosWheeledVehicleMovementComponent.CanCreateVehicle()"); }
	void CreateVehicle() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.CreateVehicle()"); }
	void DrawDebug(UCanvas* Canvas, float& YL, float& YPos) { NativeCall<void, UCanvas*, float&, float&>(this, "UChaosWheeledVehicleMovementComponent.DrawDebug(UCanvas*,float&,float&)", Canvas, YL, YPos); }
	void PostLoad() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.PostLoad()"); }
	void ParallelUpdate(float DeltaSeconds) { NativeCall<void, float>(this, "UChaosWheeledVehicleMovementComponent.ParallelUpdate(float)", DeltaSeconds); }
	float GetEngineRotationSpeed() { return NativeCall<float>(this, "UChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed()"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.OnDestroyPhysicsState()"); }
	UE::Math::TVector<double>* GetWheelRestingPosition(UE::Math::TVector<double>* result, const FChaosWheelSetup& WheelSetup) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FChaosWheelSetup&>(this, "UChaosWheeledVehicleMovementComponent.GetWheelRestingPosition(FChaosWheelSetup&)", result, WheelSetup); }
	static void PrevDebugPage() { NativeCall<void>(nullptr, "UChaosWheeledVehicleMovementComponent.PrevDebugPage()"); }
	void RecalculateAxles() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.RecalculateAxles()"); }
	static void NextDebugPage() { NativeCall<void>(nullptr, "UChaosWheeledVehicleMovementComponent.NextDebugPage()"); }
	void DestroyWheels() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.DestroyWheels()"); }
	void Update(float DeltaTime) { NativeCall<void, float>(this, "UChaosWheeledVehicleMovementComponent.Update(float)", DeltaTime); }
	void CreateWheels() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.CreateWheels()"); }
	float GetSuspensionOffset(int WheelIndex) { return NativeCall<float, int>(this, "UChaosWheeledVehicleMovementComponent.GetSuspensionOffset(int)", WheelIndex); }
	void FixupSkeletalMesh() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.FixupSkeletalMesh()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.OnCreatePhysicsState()"); }
	void ReSetupVehicle() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.ReSetupVehicle()"); }
	void ComputeConstants() { NativeCall<void>(this, "UChaosWheeledVehicleMovementComponent.ComputeConstants()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UChaosWheeledVehicleMovementComponent.Serialize(FArchive&)", Ar); }
};
