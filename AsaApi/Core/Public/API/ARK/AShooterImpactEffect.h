#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AActor.h"

struct AShooterImpactEffect : AActor
{
public:
	AShooterImpactEffect() = delete;
	~AShooterImpactEffect() = delete;
	AShooterImpactEffect(const AShooterImpactEffect&) = delete;
	AShooterImpactEffect& operator=(const AShooterImpactEffect&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterImpactEffect"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterImpactEffect"); }

	float& MaxDecalRangeField() { return *GetNativePointerField<float*>(this, "AShooterImpactEffect.MaxDecalRange"); }

	void PostInitializeComponents() { NativeCall<void>(this, "AShooterImpactEffect.PostInitializeComponents()"); }

	BitFieldValue<bool, unsigned __int32> bOverridePawnHitDecal() { return { this, "AShooterImpactEffect.bOverridePawnHitDecal"}; }
	BitFieldValue<bool, unsigned __int32> bOverridePawnHitFX() { return { this, "AShooterImpactEffect.bOverridePawnHitFX"}; }
	BitFieldValue<bool, unsigned __int32> bNoHitEffectOnPawns() { return { this, "AShooterImpactEffect.bNoHitEffectOnPawns"}; }
	BitFieldValue<bool, unsigned __int32> bNoSoundEffectOnPawns() { return { this, "AShooterImpactEffect.bNoSoundEffectOnPawns"}; }
	BitFieldValue<bool, unsigned __int32> bNoSpawnActorOnPawns() { return { this, "AShooterImpactEffect.bNoSpawnActorOnPawns"}; }
	BitFieldValue<bool, unsigned __int32> bNoDecalOnPawns() { return { this, "AShooterImpactEffect.bNoDecalOnPawns"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetImpactEffectColor() { return { this, "AShooterImpactEffect.bUseBPGetImpactEffectColor"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnEmitterSpawned() { return { this, "AShooterImpactEffect.bUseBPOnEmitterSpawned"}; }

	USoundBase*& WaeponImpactSoundField() { return *GetNativePointerField<USoundBase**>(this, "AShooterImpactEffect.WaeponImpactSound"); }

	UParticleSystemComponent* SpawnImpactEffects(UWorld* World, const FHitResult& SurfaceHit, const UE::Math::TVector<double>& ShotDirection, bool useShotDirectionForImpactEffectActorClassRotation, bool attachImpactEffectActorToImpactedActor, bool bSuppressImpactSound) { return NativeCall<UParticleSystemComponent*, UWorld*, const FHitResult&, const UE::Math::TVector<double>&, bool, bool, bool>(this, "AShooterImpactEffect.SpawnImpactEffects(UWorld*,FHitResult&,UE::Math::TVector<double>&,bool,bool,bool)", World, SurfaceHit, ShotDirection, useShotDirectionForImpactEffectActorClassRotation, attachImpactEffectActorToImpactedActor, bSuppressImpactSound); }
	UParticleSystemComponent* SpawnImpactEffects_V2(UWorld* World, const FHitResult& SurfaceHit, const UE::Math::TVector<double>& ShotDirection, bool useShotDirectionForImpactEffectActorClassRotation, bool attachImpactEffectActorToImpactedActor, bool bSuppressImpactSound, APrimalCharacter* ImpactInstigator) { return NativeCall<UParticleSystemComponent*, UWorld*, const FHitResult&, const UE::Math::TVector<double>&, bool, bool, bool, APrimalCharacter*>(this, "AShooterImpactEffect.SpawnImpactEffects_V2(UWorld*,FHitResult&,UE::Math::TVector<double>&,bool,bool,bool,APrimalCharacter*)", World, SurfaceHit, ShotDirection, useShotDirectionForImpactEffectActorClassRotation, attachImpactEffectActorToImpactedActor, bSuppressImpactSound, ImpactInstigator); }
	UFXSystemComponent* SpawnImpactEffects_Auto(UWorld* World, const FHitResult& SurfaceHit, const UE::Math::TVector<double>& ShotDirection, bool useShotDirectionForImpactEffectActorClassRotation, bool attachImpactEffectActorToImpactedActor, bool bSuppressImpactSound, APrimalCharacter* ImpactInstigator, UE::Math::TVector<double>* DecalSizeOverride, bool ReturnNiagaraOnly, bool ReturnCascadeOnly) { if (!DecalSizeOverride) throw std::invalid_argument("Null native value parameter"); return NativeCall<UFXSystemComponent *, UWorld *, const FHitResult &, const UE :: Math :: TVector < double > &, bool, bool, bool, APrimalCharacter *, UE :: Math :: TVector < double >, bool, bool>(this, "AShooterImpactEffect.SpawnImpactEffects_Auto(UWorld*,FHitResult&,UE::Math::TVector<double>&,bool,bool,bool,APrimalCharacter*,UE::Math::TVector<double>,bool,bool)", World, SurfaceHit, ShotDirection, useShotDirectionForImpactEffectActorClassRotation, attachImpactEffectActorToImpactedActor, bSuppressImpactSound, ImpactInstigator, *DecalSizeOverride, ReturnNiagaraOnly, ReturnCascadeOnly); }
	UNiagaraComponent* SpawnImpactEffects_Niagara(UWorld* World, const FHitResult& SurfaceHit, const UE::Math::TVector<double>& ShotDirection, bool useShotDirectionForImpactEffectActorClassRotation, bool attachImpactEffectActorToImpactedActor, bool bSuppressImpactSound) { return NativeCall<UNiagaraComponent*, UWorld*, const FHitResult&, const UE::Math::TVector<double>&, bool, bool, bool>(this, "AShooterImpactEffect.SpawnImpactEffects_Niagara(UWorld*,FHitResult&,UE::Math::TVector<double>&,bool,bool,bool)", World, SurfaceHit, ShotDirection, useShotDirectionForImpactEffectActorClassRotation, attachImpactEffectActorToImpactedActor, bSuppressImpactSound); }
	UNiagaraComponent* SpawnImpactEffects_Niagara_V2(UWorld* World, const FHitResult& SurfaceHit, const UE::Math::TVector<double>& ShotDirection, bool useShotDirectionForImpactEffectActorClassRotation, bool attachImpactEffectActorToImpactedActor, bool bSuppressImpactSound, APrimalCharacter* ImpactInstigator) { return NativeCall<UNiagaraComponent*, UWorld*, const FHitResult&, const UE::Math::TVector<double>&, bool, bool, bool, APrimalCharacter*>(this, "AShooterImpactEffect.SpawnImpactEffects_Niagara_V2(UWorld*,FHitResult&,UE::Math::TVector<double>&,bool,bool,bool,APrimalCharacter*)", World, SurfaceHit, ShotDirection, useShotDirectionForImpactEffectActorClassRotation, attachImpactEffectActorToImpactedActor, bSuppressImpactSound, ImpactInstigator); }
};
