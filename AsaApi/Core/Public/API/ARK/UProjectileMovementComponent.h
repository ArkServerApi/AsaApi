#pragma once
#include "BulkForward.h"
#include "UMovementComponent.h"

struct UProjectileMovementComponent : public UMovementComponent
{
public:
	UProjectileMovementComponent() = delete;
	~UProjectileMovementComponent() = delete;
	UProjectileMovementComponent(const UProjectileMovementComponent&) = delete;
	UProjectileMovementComponent& operator=(const UProjectileMovementComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UProjectileMovementComponent"); }

	float& MinLifespanToUpdateField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.MinLifespanToUpdate"); }
	float& InitialSpeedField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.InitialSpeed"); }
	float& MaxSpeedField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.MaxSpeed"); }
	float& ProjectileUnderwaterExtraGravityScaleField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ProjectileUnderwaterExtraGravityScale"); }
	float& ProjectileUnderwaterExtraSpeedScaleField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ProjectileUnderwaterExtraSpeedScale"); }
	float& ProjectileDampingFactorField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ProjectileDampingFactor"); }
	float& FallingProjectileDampingFactorField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.FallingProjectileDampingFactor"); }
	float& ProjectileGravityScaleField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ProjectileGravityScale"); }
	float& BuoyancyField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.Buoyancy"); }
	UE::Math::TVector<double>& PreviousVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UProjectileMovementComponent.PreviousVelocity"); }
	float& ElapsedLifespanField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ElapsedLifespan"); }
	float& BouncinessField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.Bounciness"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.Friction"); }
	float& BounceVelocityStopSimulatingThresholdField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.BounceVelocityStopSimulatingThreshold"); }
	float& HomingAccelerationMagnitudeField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.HomingAccelerationMagnitude"); }
	TWeakObjectPtr<USceneComponent, FWeakObjectPtr>& HomingTargetComponentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent, FWeakObjectPtr>*>(this, "UProjectileMovementComponent.HomingTargetComponent"); }
	UE::Math::TVector<double>& HomingTargetComponentOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UProjectileMovementComponent.HomingTargetComponentOffset"); }
	float& MaxSimulationTimeStepField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.MaxSimulationTimeStep"); }
	int& MaxSimulationIterationsField() { return *GetNativePointerField<int*>(this, "UProjectileMovementComponent.MaxSimulationIterations"); }
	UE::Math::TVector<double>& BasedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UProjectileMovementComponent.BasedLocation"); }
	UE::Math::TRotator<double>& BasedRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UProjectileMovementComponent.BasedRotation"); }
	UE::Math::TVector<double>& BasedVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UProjectileMovementComponent.BasedVelocity"); }
	BitFieldValue<bool, unsigned __int32> bRotationFollowsVelocity() { return { this, "UProjectileMovementComponent.bRotationFollowsVelocity"}; }
	BitFieldValue<bool, unsigned __int32> bShouldBounce() { return { this, "UProjectileMovementComponent.bShouldBounce"}; }
	BitFieldValue<bool, unsigned __int32> bInitialVelocityInLocalSpace() { return { this, "UProjectileMovementComponent.bInitialVelocityInLocalSpace"}; }
	BitFieldValue<bool, unsigned __int32> bForceSubStepping() { return { this, "UProjectileMovementComponent.bForceSubStepping"}; }
	BitFieldValue<bool, unsigned __int32> bTriggerBounceImpactNotification() { return { this, "UProjectileMovementComponent.bTriggerBounceImpactNotification"}; }
	BitFieldValue<bool, unsigned __int32> bIsHomingProjectile() { return { this, "UProjectileMovementComponent.bIsHomingProjectile"}; }
	BitFieldValue<bool, unsigned __int32> bCheckForProjectileUnderwater() { return { this, "UProjectileMovementComponent.bCheckForProjectileUnderwater"}; }
	BitFieldValue<bool, unsigned __int32> bIsProjectileUnderwater() { return { this, "UProjectileMovementComponent.bIsProjectileUnderwater"}; }
	BitFieldValue<bool, unsigned __int32> bKeepInitialBasedOnComponent() { return { this, "UProjectileMovementComponent.bKeepInitialBasedOnComponent"}; }
	BitFieldValue<bool, unsigned __int32> bAffectedByBasedCompRotation() { return { this, "UProjectileMovementComponent.bAffectedByBasedCompRotation"}; }
	UE::Math::TVector<double>* ComputeAcceleration(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, bool>(this, "UProjectileMovementComponent.ComputeAcceleration(UE::Math::TVector<double>&,float,bool)", result, InVelocity, DeltaTime, bGravityEnabled); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UProjectileMovementComponent.GetMaxSpeed()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UProjectileMovementComponent"); }
	void CheckIfUnderwater() { NativeCall<void>(this, "UProjectileMovementComponent.CheckIfUnderwater()"); }
	UE::Math::TVector<double>* ComputeMoveDelta(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, bool>(this, "UProjectileMovementComponent.ComputeMoveDelta(UE::Math::TVector<double>&,float,bool)", result, InVelocity, DeltaTime, bGravityEnabled); }
	UE::Math::TVector<double>* ComputeBounceResult(UE::Math::TVector<double>* result, const FHitResult& Hit, float TimeSlice, const UE::Math::TVector<double>& MoveDelta) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FHitResult&, float, const UE::Math::TVector<double>&>(this, "UProjectileMovementComponent.ComputeBounceResult(FHitResult&,float,UE::Math::TVector<double>&)", result, Hit, TimeSlice, MoveDelta); }
	bool ShouldUseSubStepping() { return NativeCall<bool>(this, "UProjectileMovementComponent.ShouldUseSubStepping()"); }
	float GetEffectiveGravityZ() { return NativeCall<float>(this, "UProjectileMovementComponent.GetEffectiveGravityZ()"); }
	void StopSimulating(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "UProjectileMovementComponent.StopSimulating(FHitResult&)", HitResult); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UProjectileMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateBasedProjectileTransform() { NativeCall<void>(this, "UProjectileMovementComponent.UpdateBasedProjectileTransform()"); }
	UE::Math::TVector<double>* ComputeHomingAcceleration(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, bool>(this, "UProjectileMovementComponent.ComputeHomingAcceleration(UE::Math::TVector<double>&,float,bool)", result, InVelocity, DeltaTime, bGravityEnabled); }
	UE::Math::TVector<double>* GetHomingTargetPosition(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UProjectileMovementComponent.GetHomingTargetPosition()", result); }
	void SetVelocityInLocalSpace(UE::Math::TVector<double>* NewVelocity) { if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "UProjectileMovementComponent.SetVelocityInLocalSpace(UE::Math::TVector<double>)", *NewVelocity); }
	UE::Math::TTransform<double>* GetBasedComponentTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UProjectileMovementComponent.GetBasedComponentTransform()", result); }
	void InitializeComponent() { NativeCall<void>(this, "UProjectileMovementComponent.InitializeComponent()"); }
	bool CheckStillInWorld() { return NativeCall<bool>(this, "UProjectileMovementComponent.CheckStillInWorld()"); }
	void SetAffectedByBasedRotation(const bool& NewAffected) { NativeCall<void, const bool&>(this, "UProjectileMovementComponent.SetAffectedByBasedRotation(bool&)", NewAffected); }
	void HandleImpact(const FHitResult& Hit, float TimeSlice, const UE::Math::TVector<double>& MoveDelta) { NativeCall<void, const FHitResult&, float, const UE::Math::TVector<double>&>(this, "UProjectileMovementComponent.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", Hit, TimeSlice, MoveDelta); }
	void RecalculateBasedTransform() { NativeCall<void>(this, "UProjectileMovementComponent.RecalculateBasedTransform()"); }
};
