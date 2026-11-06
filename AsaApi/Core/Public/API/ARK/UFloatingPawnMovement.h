#pragma once
#include "BulkForward.h"
#include "UPawnMovementComponent.h"

struct UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	UFloatingPawnMovement() = delete;
	~UFloatingPawnMovement() = delete;
	UFloatingPawnMovement(const UFloatingPawnMovement&) = delete;
	UFloatingPawnMovement& operator=(const UFloatingPawnMovement&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFloatingPawnMovement"); }

	float& MaxSpeedField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.MaxSpeed"); }
	float& AccelerationField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.Acceleration"); }
	float& DecelerationField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.Deceleration"); }
	float& TurningBoostField() { return *GetNativePointerField<float*>(this, "UFloatingPawnMovement.TurningBoost"); }
	BitFieldValue<bool, unsigned __int32> bPositionCorrected() { return { this, "UFloatingPawnMovement.bPositionCorrected"}; }
	void ApplyControlInputToVelocity(float DeltaTime) { NativeCall<void, float>(this, "UFloatingPawnMovement.ApplyControlInputToVelocity(float)", DeltaTime); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UFloatingPawnMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFloatingPawnMovement"); }
	bool LimitWorldBounds() { return NativeCall<bool>(this, "UFloatingPawnMovement.LimitWorldBounds()"); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UFloatingPawnMovement.GetMaxSpeed()"); }
};
