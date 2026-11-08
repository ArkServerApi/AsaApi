#pragma once
#include "BulkForward.h"


struct AShooterWeapon_FlameThrower : AShooterWeapon
{
	// Fields

	int& InstantDamageAmountField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.InstantDamageAmount"); }
	float& DamageTestSphereRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestSphereRadius"); }
	float& DamageTestBoxExtentSideField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestBoxExtentSide"); }
	float& DamageTestMuzzleOffsetField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestMuzzleOffset"); }
	float& FlameHurtMaxDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.FlameHurtMaxDistance"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& DamageImpactPointsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_FlameThrower.DamageImpactPoints"); }
	UE::Math::TVector<double>& MuzzleDirectionOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_FlameThrower.MuzzleDirectionOffset"); }
	FColor& FlameThrowerFXDefaultColorField() { return *GetNativePointerField<FColor*>(this, "AShooterWeapon_FlameThrower.FlameThrowerFXDefaultColor"); }
	TSubclassOf<UDamageType>& DamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "AShooterWeapon_FlameThrower.DamageType"); }
	UParticleSystem*& FlameThrowerFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.FlameThrowerFX"); }
	UParticleSystem*& FlameThrowerFX_FPVField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.FlameThrowerFX_FPV"); }
	UParticleSystem*& OnFireFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.OnFireFX"); }
	UParticleSystem*& HarvestFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.HarvestFX"); }
	TArray<double, TSizedDefaultAllocator<32> >& CachedShotsField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_FlameThrower.CachedShots"); }
	float& ShotDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.ShotDelay"); }
	float& FXDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.FXDelay"); }
	int& LastFrameServerTickShootFXCounterField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.LastFrameServerTickShootFXCounter"); }
	int& ServerTickShootFXCallsThisFrameField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.ServerTickShootFXCallsThisFrame"); }
	FTimerHandle& EndFXDelayHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon_FlameThrower.EndFXDelayHandle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseMuzzlePSCTickGroupOverride() { return { this, "AShooterWeapon_FlameThrower.bUseMuzzlePSCTickGroupOverride" }; }
	BitFieldValue<bool, unsigned __int32> bMuzzlePSC_IsTPV() { return { this, "AShooterWeapon_FlameThrower.bMuzzlePSC_IsTPV" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_FlameThrower"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_FlameThrower"); }
	void ServerStopShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerStopShootFX_Implementation()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_FlameThrower();
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_FlameThrower.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopFire()"); }
	void ResetFXDelay() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ResetFXDelay()"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_FlameThrower.StartReload(bool)", bFromReplication); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.FireWeapon()"); }
	void StopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopSimulatingWeaponFire()"); }
	//     bool IsPointInCone(UE::Math::TVector<double>* Point, UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* Direction) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_FlameThrower.IsPointInCone(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", Point, Origin, Direction); }
	// FUNCTION MISSING: AShooterWeapon_FlameThrower.IsPointInCone(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)
	void TickShootFX_Implementation(bool a2) { NativeCall<void, bool>(this, "AShooterWeapon_FlameThrower.TickShootFX_Implementation()", a2); }
	void BeginShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.BeginShootFX_Implementation()"); }
	void ServerTickShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerTickShootFX_Implementation()"); }
	void ServerBeginShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerBeginShootFX_Implementation()"); }
	void StopShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopShootFX_Implementation()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_FlameThrower.Tick(float)", DeltaSeconds); }
	void GetFirePosition(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_FlameThrower.GetFirePosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, ShootDir); }
	void EndFXDelay() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.EndFXDelay()"); }
	void SpawnImpactEffects() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.SpawnImpactEffects()"); }
	void ClientSpawnHarvestFX_Implementation(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* Impacts) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_FlameThrower.ClientSpawnHarvestFX_Implementation(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", Impacts); }

	bool& bAllowLocalExecutionField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_FlameThrower.bAllowLocalExecution"); }
	bool& FXDelayCompletedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_FlameThrower.FXDelayCompleted"); }
	double& NextTimeToTickShootProcessField() { return *GetNativePointerField<double*>(this, "AShooterWeapon_FlameThrower.NextTimeToTickShootProcess"); }

	UNiagaraSystem*& Niagara_FlameThrowerFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_FlameThrower.Niagara_FlameThrowerFX"); }
	UNiagaraSystem*& Niagara_FlameThrowerFX_FPVField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_FlameThrower.Niagara_FlameThrowerFX_FPV"); }
	UNiagaraSystem*& Niagara_OnFireFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_FlameThrower.Niagara_OnFireFX"); }
	UNiagaraSystem*& Niagara_HarvestFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_FlameThrower.Niagara_HarvestFX"); }
	BitFieldValue<bool, unsigned __int32> bUseBPSpawnImpactEffects() { return { this, "AShooterWeapon_FlameThrower.bUseBPSpawnImpactEffects"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPBeginStopShootEffects() { return { this, "AShooterWeapon_FlameThrower.bUseBPBeginStopShootEffects"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideImpactEffectSpawnLocation() { return { this, "AShooterWeapon_FlameThrower.bUseBPOverrideImpactEffectSpawnLocation"}; }
	BitFieldValue<bool, unsigned __int32> bSpawnGeneralTargetImpactEffects() { return { this, "AShooterWeapon_FlameThrower.bSpawnGeneralTargetImpactEffects"}; }
	UFXSystemComponent* GetActiveMuzzleParticle() { return NativeCall<UFXSystemComponent*>(this, "AShooterWeapon_FlameThrower.GetActiveMuzzleParticle()"); }
	void BPBeginShootEffects() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.BPBeginShootEffects()"); }
	void StopShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopShootFX()"); }
	void BPStopShootEffects() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.BPStopShootEffects()"); }
	void TickShootFX_Internal() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.TickShootFX_Internal()"); }
	void BPSpawnHarvestEffects(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Impacts) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&>(this, "AShooterWeapon_FlameThrower.BPSpawnHarvestEffects(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", Impacts); }
	void ServerTickShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerTickShootFX()"); }
	void BeginShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.BeginShootFX()"); }
	UFXSystemComponent* GetSecondaryActiveMuzzleParticle() { return NativeCall<UFXSystemComponent*>(this, "AShooterWeapon_FlameThrower.GetSecondaryActiveMuzzleParticle()"); }
	void ClientSpawnHarvestFX(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Impacts) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&>(this, "AShooterWeapon_FlameThrower.ClientSpawnHarvestFX(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", Impacts); }
	void ServerBeginShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerBeginShootFX()"); }
	void TickShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.TickShootFX()"); }
	void MuzzlePSCSpawned() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.MuzzlePSCSpawned()"); }
	void BPSpawnImpactEffects(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Impacts) { NativeCall<void, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&>(this, "AShooterWeapon_FlameThrower.BPSpawnImpactEffects(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", Impacts); }
	void ServerStopShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerStopShootFX()"); }
};