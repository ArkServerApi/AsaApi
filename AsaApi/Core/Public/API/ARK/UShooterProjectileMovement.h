#pragma once
#include "BulkForward.h"
#include "UProjectileMovementComponent.h"

struct UShooterProjectileMovement : public UProjectileMovementComponent
{
public:
	UShooterProjectileMovement() = delete;
	~UShooterProjectileMovement() = delete;
	UShooterProjectileMovement(const UShooterProjectileMovement&) = delete;
	UShooterProjectileMovement& operator=(const UShooterProjectileMovement&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterProjectileMovement"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterProjectileMovement"); }

	float& TamedEnemyHomingAccelerationMagnitudeField() { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.TamedEnemyHomingAccelerationMagnitude"); }
	float& ClosestHomingTargetDistanceSqField() { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ClosestHomingTargetDistanceSq"); }
	TWeakObjectPtr<USceneComponent, FWeakObjectPtr>& HomingMissTrackingTargetField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent, FWeakObjectPtr>*>(this, "UShooterProjectileMovement.HomingMissTrackingTarget"); }
	UE::Math::TVector<double>& HomingMissTrackingTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UShooterProjectileMovement.HomingMissTrackingTargetOffset"); }
	UE::Math::TVector<double>& LastHomingToTargetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UShooterProjectileMovement.LastHomingToTarget"); }
	BitFieldValue<bool, unsigned char> bDisableHomingAfterMiss() { return { this, "UShooterProjectileMovement.bDisableHomingAfterMiss"}; }
	BitFieldValue<bool, unsigned char> bUseTamedEnemyHomingAccelerationMagnitude() { return { this, "UShooterProjectileMovement.bUseTamedEnemyHomingAccelerationMagnitude"}; }
	BitFieldValue<bool, unsigned char> bHasHomingMissTrackingDistance() { return { this, "UShooterProjectileMovement.bHasHomingMissTrackingDistance"}; }
	BitFieldValue<bool, unsigned char> bHomingTargetWasApproached() { return { this, "UShooterProjectileMovement.bHomingTargetWasApproached"}; }
	void UpdateHomingMissTracking(const UE::Math::TVector<double>& CheckVelocity) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UShooterProjectileMovement.UpdateHomingMissTracking(UE::Math::TVector<double>&)", CheckVelocity); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UShooterProjectileMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UE::Math::TVector<double>* ComputeHomingAcceleration(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, bool>(this, "UShooterProjectileMovement.ComputeHomingAcceleration(UE::Math::TVector<double>&,float,bool)", result, InVelocity, DeltaTime, bGravityEnabled); }
};
