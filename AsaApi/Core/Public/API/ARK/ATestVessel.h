#pragma once
#include "BulkForward.h"
#include "AStaticMeshActor.h"

struct ATestVessel : public AStaticMeshActor
{
public:
	ATestVessel() = delete;
	~ATestVessel() = delete;
	ATestVessel(const ATestVessel&) = delete;
	ATestVessel& operator=(const ATestVessel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATestVessel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATestVessel"); }

	UVesselDynamicsComponent*& VesselDynamicsComponentField() { return *GetNativePointerField<UVesselDynamicsComponent**>(this, "ATestVessel.VesselDynamicsComponent"); }
	double& LastShipActionField() { return *GetNativePointerField<double*>(this, "ATestVessel.LastShipAction"); }
	bool& bIsControllingShipField() { return *GetNativePointerField<bool*>(this, "ATestVessel.bIsControllingShip"); }
	float& ThrottleField() { return *GetNativePointerField<float*>(this, "ATestVessel.Throttle"); }
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "ATestVessel.SteeringInput"); }
	float& RudderSteeringAmountField() { return *GetNativePointerField<float*>(this, "ATestVessel.RudderSteeringAmount"); }
	float& RudderAngleField() { return *GetNativePointerField<float*>(this, "ATestVessel.RudderAngle"); }
	float& FixedThrottleForceField() { return *GetNativePointerField<float*>(this, "ATestVessel.FixedThrottleForce"); }
	float& LinearDampingField() { return *GetNativePointerField<float*>(this, "ATestVessel.LinearDamping"); }
	float& AngularDampingField() { return *GetNativePointerField<float*>(this, "ATestVessel.AngularDamping"); }
	float& SteeringForceField() { return *GetNativePointerField<float*>(this, "ATestVessel.SteeringForce"); }
	float& ShipBowOffsetField() { return *GetNativePointerField<float*>(this, "ATestVessel.ShipBowOffset"); }
	float& RudderAngleThresholdField() { return *GetNativePointerField<float*>(this, "ATestVessel.RudderAngleThreshold"); }
	float& GlobalSteeringForceMultiplierField() { return *GetNativePointerField<float*>(this, "ATestVessel.GlobalSteeringForceMultiplier"); }
	float& RudderSteeringRateField() { return *GetNativePointerField<float*>(this, "ATestVessel.RudderSteeringRate"); }
	float& RudderAutoBackAngleField() { return *GetNativePointerField<float*>(this, "ATestVessel.RudderAutoBackAngle"); }
	float& GlobalSteeringStandForceMultiplierField() { return *GetNativePointerField<float*>(this, "ATestVessel.GlobalSteeringStandForceMultiplier"); }
	float& DesiredCameraArmLengthField() { return *GetNativePointerField<float*>(this, "ATestVessel.DesiredCameraArmLength"); }
	float& CurrentRotationAngleField() { return *GetNativePointerField<float*>(this, "ATestVessel.CurrentRotationAngle"); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >& SailMeshesField() { return *GetNativePointerField<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*>(this, "ATestVessel.SailMeshes"); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >& SeatMeshesField() { return *GetNativePointerField<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*>(this, "ATestVessel.SeatMeshes"); }
	bool& bFirstTickField() { return *GetNativePointerField<bool*>(this, "ATestVessel.bFirstTick"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ATestVessel.Tick(float)", DeltaSeconds); }
	void SimulatePhysics(float DeltaSeconds) { NativeCall<void, float>(this, "ATestVessel.SimulatePhysics(float)", DeltaSeconds); }
	void ActivateShipControl() { NativeCall<void>(this, "ATestVessel.ActivateShipControl()"); }
	void CalculateSteeringVelocity(float DeltaSeconds) { NativeCall<void, float>(this, "ATestVessel.CalculateSteeringVelocity(float)", DeltaSeconds); }
	void BeginPlay() { NativeCall<void>(this, "ATestVessel.BeginPlay()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ATestVessel.PostInitializeComponents()"); }
};
