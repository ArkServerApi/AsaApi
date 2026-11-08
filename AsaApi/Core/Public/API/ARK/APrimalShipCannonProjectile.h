#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AShooterProjectile.h"

struct APrimalShipCannonProjectile : AShooterProjectile
{
public:
	APrimalShipCannonProjectile() = delete;
	~APrimalShipCannonProjectile() = delete;
	APrimalShipCannonProjectile(const APrimalShipCannonProjectile&) = delete;
	APrimalShipCannonProjectile& operator=(const APrimalShipCannonProjectile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalShipCannonProjectile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalShipCannonProjectile"); }

	float& ReplicatedInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShipCannonProjectile.ReplicatedInitialSpeed"); }
	int& FiredFromCannonIndexField() { return *GetNativePointerField<int*>(this, "APrimalShipCannonProjectile.FiredFromCannonIndex"); }

	float GetDamageMultiplierForTarget(AActor* HitActor) { return NativeCall<float, AActor*>(this, "APrimalShipCannonProjectile.GetDamageMultiplierForTarget(AActor*)", HitActor); }
	void OnRep_ReplicatedInitialSpeed() { NativeCall<void>(this, "APrimalShipCannonProjectile.OnRep_ReplicatedInitialSpeed()"); }
	float ApplyRadialDamageToActorMultiplier(AActor* Victim) { return NativeCall<float, AActor*>(this, "APrimalShipCannonProjectile.ApplyRadialDamageToActorMultiplier(AActor*)", Victim); }

	void ProjectileDealtDirectDamage(AActor* HitActor, float DamageDealt, const FHitResult& Hit) { NativeCall<void, AActor*, float, const FHitResult&>(this, "APrimalShipCannonProjectile.ProjectileDealtDirectDamage(AActor*,float,FHitResult&)", HitActor, DamageDealt, Hit); }
	void InitVelocity(UE::Math::TVector<double>& ShootDirection, float CustomInitialSpeed) { NativeCall<void, UE::Math::TVector<double>&, float>(this, "APrimalShipCannonProjectile.InitVelocity(UE::Math::TVector<double>&,float)", ShootDirection, CustomInitialSpeed); }
	void OnImpact_Implementation(const FHitResult& HitResult, bool bFromReplication) { NativeCall<void, const FHitResult&, bool>(this, "APrimalShipCannonProjectile.OnImpact_Implementation(FHitResult&,bool)", HitResult, bFromReplication); }
	void ApplyAmmoOnImpactEffect(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "APrimalShipCannonProjectile.ApplyAmmoOnImpactEffect(FHitResult&)", HitResult); }
};
