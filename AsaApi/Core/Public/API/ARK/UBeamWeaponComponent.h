#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UBeamWeaponComponent : public UPrimitiveComponent
{
public:
	UBeamWeaponComponent() = delete;
	~UBeamWeaponComponent() = delete;
	UBeamWeaponComponent(const UBeamWeaponComponent&) = delete;
	UBeamWeaponComponent& operator=(const UBeamWeaponComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBeamWeaponComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBeamWeaponComponent"); }

	UParticleSystem*& ParticleSystemTemplateField() { return *GetNativePointerField<UParticleSystem**>(this, "UBeamWeaponComponent.ParticleSystemTemplate"); }
	UParticleSystem*& ChargeupParticleSystemTemplateField() { return *GetNativePointerField<UParticleSystem**>(this, "UBeamWeaponComponent.ChargeupParticleSystemTemplate"); }
	UParticleSystem*& BurstWhenFiredSystemTemplateField() { return *GetNativePointerField<UParticleSystem**>(this, "UBeamWeaponComponent.BurstWhenFiredSystemTemplate"); }
	UParticleSystem*& ImpactSystemTemplateField() { return *GetNativePointerField<UParticleSystem**>(this, "UBeamWeaponComponent.ImpactSystemTemplate"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.Duration"); }
	float& DamageRadiusField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.DamageRadius"); }
	float& DamageDelayField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.DamageDelay"); }
	float& BaseDamageField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.BaseDamage"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.Length"); }
	bool& IsPenetratingField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.IsPenetrating"); }
	float& TargetTrackingSpeedField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.TargetTrackingSpeed"); }
	bool& UseOwnerForwardField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.UseOwnerForward"); }
	float& OffsetField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.Offset"); }
	float& ChargeupTimeField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.ChargeupTime"); }
	bool& WhenChargingWaitForCallToFireField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.WhenChargingWaitForCallToFire"); }
	bool& DeactivateChargeupOnFiringField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.DeactivateChargeupOnFiring"); }
	FBeamStoppedFiringEvent& BeamStoppedFiringEventField() { return *GetNativePointerField<FBeamStoppedFiringEvent*>(this, "UBeamWeaponComponent.BeamStoppedFiringEvent"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& BeamTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UBeamWeaponComponent.BeamTarget"); }
	UParticleSystemComponent*& ParticleCompField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "UBeamWeaponComponent.ParticleComp"); }
	UParticleSystemComponent*& ChargeUpCompField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "UBeamWeaponComponent.ChargeUpComp"); }
	UParticleSystemComponent*& ImpactCompField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "UBeamWeaponComponent.ImpactComp"); }
	double& ChargeStartTimeField() { return *GetNativePointerField<double*>(this, "UBeamWeaponComponent.ChargeStartTime"); }
	double& StartTimeField() { return *GetNativePointerField<double*>(this, "UBeamWeaponComponent.StartTime"); }
	double& LastStoppedFiringTimeField() { return *GetNativePointerField<double*>(this, "UBeamWeaponComponent.LastStoppedFiringTime"); }
	UE::Math::TVector<double>& BeamEndLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UBeamWeaponComponent.BeamEndLocation"); }
	UE::Math::TVector<double>& BeamStartLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UBeamWeaponComponent.BeamStartLocation"); }
	float& ContinuousTimeHittingTargetField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.ContinuousTimeHittingTarget"); }
	bool& HitTargetLastCheckField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.HitTargetLastCheck"); }
	bool& IsFiringField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.IsFiring"); }
	bool& IsChargingUpField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.IsChargingUp"); }
	void UpdateAim(float DeltaSeconds) { NativeCall<void, float>(this, "UBeamWeaponComponent.UpdateAim(float)", DeltaSeconds); }
	UParticleSystemComponent* GetImpactParticleSystem() { return NativeCall<UParticleSystemComponent*>(this, "UBeamWeaponComponent.GetImpactParticleSystem()"); }
	bool GetIsCharging() { return NativeCall<bool>(this, "UBeamWeaponComponent.GetIsCharging()"); }
	void StartFiring() { NativeCall<void>(this, "UBeamWeaponComponent.StartFiring()"); }
	void FireActualBeam() { NativeCall<void>(this, "UBeamWeaponComponent.FireActualBeam()"); }
	void StartCharging_Implementation() { NativeCall<void>(this, "UBeamWeaponComponent.StartCharging_Implementation()"); }
	void StartFiring_Implementation() { NativeCall<void>(this, "UBeamWeaponComponent.StartFiring_Implementation()"); }
	void UpdateBeamEndAndDoDamage(float DeltaSeconds) { NativeCall<void, float>(this, "UBeamWeaponComponent.UpdateBeamEndAndDoDamage(float)", DeltaSeconds); }
	bool GetIsFiring() { return NativeCall<bool>(this, "UBeamWeaponComponent.GetIsFiring()"); }
	AActor* GetTarget() { return NativeCall<AActor*>(this, "UBeamWeaponComponent.GetTarget()"); }
	double GetLastStoppedFiringTime() { return NativeCall<double>(this, "UBeamWeaponComponent.GetLastStoppedFiringTime()"); }
	void StopFiring() { NativeCall<void>(this, "UBeamWeaponComponent.StopFiring()"); }
	void DoDamageToActor(AActor* Actor, float DeltaSeconds) { NativeCall<void, AActor*, float>(this, "UBeamWeaponComponent.DoDamageToActor(AActor*,float)", Actor, DeltaSeconds); }
	void StopFiring_Implementation() { NativeCall<void>(this, "UBeamWeaponComponent.StopFiring_Implementation()"); }
	UParticleSystemComponent* GetChargeupParticleSystem() { return NativeCall<UParticleSystemComponent*>(this, "UBeamWeaponComponent.GetChargeupParticleSystem()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UBeamWeaponComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UE::Math::TVector<double>* GetBeamEndLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UBeamWeaponComponent.GetBeamEndLocation()", result); }
	void StartCharging() { NativeCall<void>(this, "UBeamWeaponComponent.StartCharging()"); }
	void SetTarget(AActor* Target) { NativeCall<void, AActor*>(this, "UBeamWeaponComponent.SetTarget(AActor*)", Target); }
	UParticleSystemComponent* GetParticleSystem() { return NativeCall<UParticleSystemComponent*>(this, "UBeamWeaponComponent.GetParticleSystem()"); }
};
