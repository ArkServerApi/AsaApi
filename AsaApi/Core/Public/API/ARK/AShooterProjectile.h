#pragma once
#include "BulkForward.h"


struct AShooterProjectile : AActor
{
	// Fields

	//UShooterProjectileMovement*& MovementCompField() { return *GetNativePointerField<UShooterProjectileMovement**>(this, "AShooterProjectile.MovementComp"); }
	float& FragmentOriginOffsetField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.FragmentOriginOffset"); }
	float& FragmentConeHalfAngleField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.FragmentConeHalfAngle"); }
	int& NumberOfFragmentProjectilesField() { return *GetNativePointerField<int*>(this, "AShooterProjectile.NumberOfFragmentProjectiles"); }
	TSubclassOf<AShooterProjectile>& FragmentProjectileTemplateField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "AShooterProjectile.FragmentProjectileTemplate"); }
	USphereComponent*& CollisionCompField() { return *GetNativePointerField<USphereComponent**>(this, "AShooterProjectile.CollisionComp"); }
	UParticleSystemComponent*& ParticleCompField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterProjectile.ParticleComp"); }
	UStaticMeshComponent*& StaticMeshCompField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterProjectile.StaticMeshComp"); }
	TSubclassOf<AActor>& ExplosionEmitterField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "AShooterProjectile.ExplosionEmitter"); }
	TSubclassOf<APrimalEmitterSpawnable>& ImpactEmitterField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "AShooterProjectile.ImpactEmitter"); }
	TWeakObjectPtr<AController>& MyControllerField() { return *GetNativePointerField<TWeakObjectPtr<AController>*>(this, "AShooterProjectile.MyController"); }
	float& ClientSideCollisionRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ClientSideCollisionRadius"); }
	float& TraceForBlockingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.TraceForBlockingRadius"); }
	float& CustomColorDesaturationField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.CustomColorDesaturation"); }
	TArray<TWeakObjectPtr<UPrimitiveComponent>, TSizedDefaultAllocator<32> >& PreviousNonBlockingHitComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPrimitiveComponent>, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile.PreviousNonBlockingHitComponents"); }
	UE::Math::TRotator<double>& RotateMeshFactorField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterProjectile.RotateMeshFactor"); }
	//TSubclassOf<AShooterImpactEffect>& ImpactTemplateField() { return *GetNativePointerField<TSubclassOf<AShooterImpactEffect>*>(this, "AShooterProjectile.ImpactTemplate"); }
	float& TornOffLifeSpanField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.TornOffLifeSpan"); }
	float& PostExplosionKeepAliveLifeSpanField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.PostExplosionKeepAliveLifeSpan"); }
	long double& ExplosionNetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile.ExplosionNetworkTime"); }
	float& NudgedImpactDistanceField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.NudgedImpactDistance"); }
	bool& bForceNetUpdateField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bForceNetUpdate"); }
	float& ForceNetUpdateTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ForceNetUpdateTimeInterval"); }
	TWeakObjectPtr<AShooterWeapon_Projectile>& WeaponField() { return *GetNativePointerField<TWeakObjectPtr<AShooterWeapon_Projectile>*>(this, "AShooterProjectile.Weapon"); }
	float& ParticleColorIntensityField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ParticleColorIntensity"); }
	float& ClientFailsafeLifespanField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ClientFailsafeLifespan"); }
	FProjectileWeaponData& WeaponConfigField() { return *GetNativePointerField<FProjectileWeaponData*>(this, "AShooterProjectile.WeaponConfig"); }
	FLinearColor& CustomColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterProjectile.CustomColor"); }
	TWeakObjectPtr<AActor>& DamageCauserField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "AShooterProjectile.DamageCauser"); }
	FHitResult& ReplicatedHitInfoField() { return *GetNativePointerField<FHitResult*>(this, "AShooterProjectile.ReplicatedHitInfo"); }
	USoundCue*& ProjectileBounceSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterProjectile.ProjectileBounceSound"); }
	bool& ReceivedDestoryFromServerField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.ReceivedDestoryFromServer"); }
	long double& LastProjectileBounceSoundField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile.LastProjectileBounceSound"); }
	UE::Math::TVector<double>& PreviousLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterProjectile.PreviousLocation"); }
	int& RandIntSeedField() { return *GetNativePointerField<int*>(this, "AShooterProjectile.RandIntSeed"); }
	FieldArray<bool, 6> bColorizeRegionsField() { return { this, "AShooterProjectile.bColorizeRegions" }; }
	__int16& CustomColorIDField() { return *GetNativePointerField<__int16*>(this, "AShooterProjectile.CustomColorID"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& ImpactedActorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile.ImpactedActors"); }
	UE::Math::TVector<double>& LastVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterProjectile.LastVelocity"); }
	TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >& IgnoreNonBlockingHitClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile.IgnoreNonBlockingHitClasses"); }
	int& ProjectileIDField() { return *GetNativePointerField<int*>(this, "AShooterProjectile.ProjectileID"); }
	float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.FluidSimSplashStrength"); }
	UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterProjectile.FluidSimSplashTemplateOverride"); }
	UE::Math::TVector<double>& LastFoliageTraceCheckLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterProjectile.LastFoliageTraceCheckLocation"); }
	long double& LastFoliageTraceCheckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile.LastFoliageTraceCheckTime"); }
	float& DistanceCutoffForMidairProjectileFoliageTracingField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.DistanceCutoffForMidairProjectileFoliageTracing"); }
	float& TimeBetweenMidairProjectileFoliageTracesField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.TimeBetweenMidairProjectileFoliageTraces"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bExploded() { return { this, "AShooterProjectile.bExploded" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnExplosionTemplateOnClient() { return { this, "AShooterProjectile.bSpawnExplosionTemplateOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bExplodeOnClient() { return { this, "AShooterProjectile.bExplodeOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bExplodeOnImpact() { return { this, "AShooterProjectile.bExplodeOnImpact" }; }
	BitFieldValue<bool, unsigned __int32> bExplodeOnLifeTimeEnd() { return { this, "AShooterProjectile.bExplodeOnLifeTimeEnd" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnExplode() { return { this, "AShooterProjectile.bDestroyOnExplode" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseTickFunction() { return { this, "AShooterProjectile.bForceUseTickFunction" }; }
	BitFieldValue<bool, unsigned __int32> bForceIgnoreFriendlyFire() { return { this, "AShooterProjectile.bForceIgnoreFriendlyFire" }; }
	BitFieldValue<bool, unsigned __int32> bAttachOnImpact() { return { this, "AShooterProjectile.bAttachOnImpact" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnImpactEffectOnHit() { return { this, "AShooterProjectile.bSpawnImpactEffectOnHit" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateImpact() { return { this, "AShooterProjectile.bReplicateImpact" }; }
	BitFieldValue<bool, unsigned __int32> bImpactSetRotationToNormal() { return { this, "AShooterProjectile.bImpactSetRotationToNormal" }; }
	BitFieldValue<bool, unsigned __int32> bNoImpactEmitterOnCharacterHit() { return { this, "AShooterProjectile.bNoImpactEmitterOnCharacterHit" }; }
	BitFieldValue<bool, unsigned __int32> bRotateMeshWhileMoving() { return { this, "AShooterProjectile.bRotateMeshWhileMoving" }; }
	BitFieldValue<bool, unsigned __int32> bCheckForNonBlockingHitImpactFX() { return { this, "AShooterProjectile.bCheckForNonBlockingHitImpactFX" }; }
	BitFieldValue<bool, unsigned __int32> bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX() { return { this, "AShooterProjectile.bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX" }; }
	BitFieldValue<bool, unsigned __int32> bTickedNonBlockingHitImpactFX() { return { this, "AShooterProjectile.bTickedNonBlockingHitImpactFX" }; }
	BitFieldValue<bool, unsigned __int32> bUseTraceForBlocking() { return { this, "AShooterProjectile.bUseTraceForBlocking" }; }
	BitFieldValue<bool, unsigned __int32> bHadAttachParent() { return { this, "AShooterProjectile.bHadAttachParent" }; }
	BitFieldValue<bool, unsigned __int32> bTraceImpacted() { return { this, "AShooterProjectile.bTraceImpacted" }; }
	BitFieldValue<bool, unsigned __int32> bStopOnExplode() { return { this, "AShooterProjectile.bStopOnExplode" }; }
	BitFieldValue<bool, unsigned __int32> bUseTraceForBlockingStopOnExplode() { return { this, "AShooterProjectile.bUseTraceForBlockingStopOnExplode" }; }
	BitFieldValue<bool, unsigned __int32> bUseMultiTraceForBlocking() { return { this, "AShooterProjectile.bUseMultiTraceForBlocking" }; }
	BitFieldValue<bool, unsigned __int32> bProjectileEffectsDeactivated() { return { this, "AShooterProjectile.bProjectileEffectsDeactivated" }; }
	BitFieldValue<bool, unsigned __int32> bExplodeEffectOnDestroy() { return { this, "AShooterProjectile.bExplodeEffectOnDestroy" }; }
	BitFieldValue<bool, unsigned __int32> bImpactRequiresDinoLineOfSight() { return { this, "AShooterProjectile.bImpactRequiresDinoLineOfSight" }; }
	BitFieldValue<bool, unsigned __int32> bImpactPvEOnlyAlly() { return { this, "AShooterProjectile.bImpactPvEOnlyAlly" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPProjectileBounced() { return { this, "AShooterProjectile.bUseBPProjectileBounced" }; }
	BitFieldValue<bool, unsigned __int32> bAttachOnProjectileBounced() { return { this, "AShooterProjectile.bAttachOnProjectileBounced" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIgnoreProjectileImpact() { return { this, "AShooterProjectile.bUseBPIgnoreProjectileImpact" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoredByTurrets() { return { this, "AShooterProjectile.bIgnoredByTurrets" }; }
	BitFieldValue<bool, unsigned __int32> bResetHasImpactedOnMultiTraceForBlocking() { return { this, "AShooterProjectile.bResetHasImpactedOnMultiTraceForBlocking" }; }
	BitFieldValue<bool, unsigned __int32> bNonBlockingVolumeMustBeWater() { return { this, "AShooterProjectile.bNonBlockingVolumeMustBeWater" }; }
	BitFieldValue<bool, unsigned __int32> bUseWeaponColorization() { return { this, "AShooterProjectile.bUseWeaponColorization" }; }
	BitFieldValue<bool, unsigned __int32> bUseCustomColor() { return { this, "AShooterProjectile.bUseCustomColor" }; }
	BitFieldValue<bool, unsigned __int32> bDoFullRadialDamage() { return { this, "AShooterProjectile.bDoFullRadialDamage" }; }
	BitFieldValue<bool, unsigned __int32> bExplodeOnNonBlockingImpact() { return { this, "AShooterProjectile.bExplodeOnNonBlockingImpact" }; }
	BitFieldValue<bool, unsigned __int32> bRadialDamageIgnoreDamageCauser() { return { this, "AShooterProjectile.bRadialDamageIgnoreDamageCauser" }; }
	BitFieldValue<bool, unsigned __int32> bMultiTraceCollideAgainstPawns() { return { this, "AShooterProjectile.bMultiTraceCollideAgainstPawns" }; }
	BitFieldValue<bool, unsigned __int32> bTraceForBlockingDoImpactBackTrace() { return { this, "AShooterProjectile.bTraceForBlockingDoImpactBackTrace" }; }
	BitFieldValue<bool, unsigned __int32> bExplosionOrientUpwards() { return { this, "AShooterProjectile.bExplosionOrientUpwards" }; }
	BitFieldValue<bool, unsigned __int32> bColorizeStructureOnImpact() { return { this, "AShooterProjectile.bColorizeStructureOnImpact" }; }
	BitFieldValue<bool, unsigned __int32> bClearStructureColorsOnImpact() { return { this, "AShooterProjectile.bClearStructureColorsOnImpact" }; }
	BitFieldValue<bool, unsigned __int32> bNonBlockingImpactNoExplosionEmitter() { return { this, "AShooterProjectile.bNonBlockingImpactNoExplosionEmitter" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnExplodeNonBlockingImpact() { return { this, "AShooterProjectile.bDestroyOnExplodeNonBlockingImpact" }; }
	BitFieldValue<bool, unsigned __int32> bDontFragmentOnDamage() { return { this, "AShooterProjectile.bDontFragmentOnDamage" }; }
	BitFieldValue<bool, unsigned __int32> bPreventReflecting() { return { this, "AShooterProjectile.bPreventReflecting" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIgnoreRadialDamageVictim() { return { this, "AShooterProjectile.bUseBPIgnoreRadialDamageVictim" }; }
	BitFieldValue<bool, unsigned __int32> bDoFinalTraceCheckToDirectDamageVictim() { return { this, "AShooterProjectile.bDoFinalTraceCheckToDirectDamageVictim" }; }
	BitFieldValue<bool, unsigned __int32> bDoFinalTraceCheckFromInstigatorToDirectDamageVictim() { return { this, "AShooterProjectile.bDoFinalTraceCheckFromInstigatorToDirectDamageVictim" }; }
	BitFieldValue<bool, unsigned __int32> bUseProjectileTraceChannel() { return { this, "AShooterProjectile.bUseProjectileTraceChannel" }; }
	BitFieldValue<bool, unsigned __int32> bIsGlowStick() { return { this, "AShooterProjectile.bIsGlowStick" }; }
	BitFieldValue<bool, unsigned __int32> bIsGlowStickSelf() { return { this, "AShooterProjectile.bIsGlowStickSelf" }; }
	BitFieldValue<bool, unsigned __int32> bUseClientHitDetermination() { return { this, "AShooterProjectile.bUseClientHitDetermination" }; }
	BitFieldValue<bool, unsigned __int32> HasPerformedAnEnvirnonmentalImpact() { return { this, "AShooterProjectile.HasPerformedAnEnvirnonmentalImpact" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterProjectile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterProjectile"); }
	bool BPIgnoreRadialDamageVictim(AActor* Victim) { return NativeCall<bool, AActor*>(this, "AShooterProjectile.BPIgnoreRadialDamageVictim(AActor*)", Victim); }
	void ClientNetExplode(FHitResult* HitResult) { NativeCall<void, FHitResult*>(this, "AShooterProjectile.ClientNetExplode(FHitResult)", HitResult); }
	void Explode(const FHitResult* Impact) { NativeCall<void, const FHitResult*>(this, "AShooterProjectile.Explode(FHitResult&)", Impact); }
	void OnImpact(const FHitResult* HitResult, bool bFromReplication) { NativeCall<void, const FHitResult*, bool>(this, "AShooterProjectile.OnImpact(FHitResult&,bool)", HitResult, bFromReplication); }
	bool PreventExplosionEmitter(const FHitResult* Impact) { return NativeCall<bool, const FHitResult*>(this, "AShooterProjectile.PreventExplosionEmitter(FHitResult&)", Impact); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterProjectile();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void BeginPlay() { NativeCall<void>(this, "AShooterProjectile.BeginPlay()"); }
	void InitVelocity(UE::Math::TVector<double>* ShootDirection) { NativeCall<void, UE::Math::TVector<double>*>(this, "AShooterProjectile.InitVelocity(UE::Math::TVector<double>&)", ShootDirection); }
	void InitVelocity(UE::Math::TVector<double>* ShootDirection, float CustomSpeed) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "AShooterProjectile.InitVelocity(UE::Math::TVector<double>&,float)", ShootDirection, CustomSpeed); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterProjectile.Tick(float)", DeltaSeconds); }
	void OnTouch(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "AShooterProjectile.OnTouch(AActor*,AActor*)", OverlappedActor, Actor); }
	void DeleteNearbyGlowSticks() { NativeCall<void>(this, "AShooterProjectile.DeleteNearbyGlowSticks()"); }
	void NetResetTransformAndVelocity_Implementation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation, UE::Math::TVector<double>* NewVelocity, const TArray<AActor*, TSizedDefaultAllocator<32> >* NewMoveIgnoreActors) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TVector<double>*, const TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile.NetResetTransformAndVelocity_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", NewLocation, NewRotation, NewVelocity, NewMoveIgnoreActors); }
	void OnImpact_Implementation(const FHitResult* HitResult, bool bFromReplication) { NativeCall<void, const FHitResult*, bool>(this, "AShooterProjectile.OnImpact_Implementation(FHitResult&,bool)", HitResult, bFromReplication); }
	void ClientNetImpactFX_Implementation(FHitResult* HitResult) { NativeCall<void, FHitResult*>(this, "AShooterProjectile.ClientNetImpactFX_Implementation(FHitResult)", HitResult); }
	void ClientOnImpact_Implementation(UE::Math::TVector<double>* ProjectileLocation, UE::Math::TRotator<double>* ProjectileRotation, FHitResult* HitResult) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, FHitResult*>(this, "AShooterProjectile.ClientOnImpact_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResult)", ProjectileLocation, ProjectileRotation, HitResult); }
	void ClientNetExplode_Implementation(FHitResult* HitResult) { NativeCall<void, FHitResult*>(this, "AShooterProjectile.ClientNetExplode_Implementation(FHitResult)", HitResult); }
	void LifeSpanExpired() { NativeCall<void>(this, "AShooterProjectile.LifeSpanExpired()"); }
	void ClientNetDestroy_Implementation() { NativeCall<void>(this, "AShooterProjectile.ClientNetDestroy_Implementation()"); }
	void DeactivateProjectileEffects() { NativeCall<void>(this, "AShooterProjectile.DeactivateProjectileEffects()"); }
	void ApplyExplosionDamageAndVFX(const FHitResult* Impact, bool bForceSpawnExplosionEmitter) { NativeCall<void, const FHitResult*, bool>(this, "AShooterProjectile.ApplyExplosionDamageAndVFX(FHitResult&,bool)", Impact, bForceSpawnExplosionEmitter); }
	void Explode_Implementation(const FHitResult* Impact) { NativeCall<void, const FHitResult*>(this, "AShooterProjectile.Explode_Implementation(FHitResult&)", Impact); }
	void SpawnImpactEffect(const FHitResult* Impact) { NativeCall<void, const FHitResult*>(this, "AShooterProjectile.SpawnImpactEffect(FHitResult&)", Impact); }
	void StopProjectileMovement() { NativeCall<void>(this, "AShooterProjectile.StopProjectileMovement()"); }
	void RestartProjectileMovement() { NativeCall<void>(this, "AShooterProjectile.RestartProjectileMovement()"); }
	void DisableAndDestroy(bool forceOnClient) { NativeCall<void, bool>(this, "AShooterProjectile.DisableAndDestroy(bool)", forceOnClient); }
	void PostNetReceiveVelocity(const UE::Math::TVector<double>* NewVelocity) { NativeCall<void, const UE::Math::TVector<double>*>(this, "AShooterProjectile.PostNetReceiveVelocity(UE::Math::TVector<double>&)", NewVelocity); }
	void ProjectileBounced(const FHitResult* ImpactResult, const UE::Math::TVector<double>* ImpactVelocity) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*>(this, "AShooterProjectile.ProjectileBounced(FHitResult&,UE::Math::TVector<double>&)", ImpactResult, ImpactVelocity); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AShooterProjectile.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	void Destroyed() { NativeCall<void>(this, "AShooterProjectile.Destroyed()"); }
	void PlayDestructionEffect(bool bOverrideHit, const FHitResult* HitResult) { NativeCall<void, bool, const FHitResult*>(this, "AShooterProjectile.PlayDestructionEffect(bool,FHitResult&)", bOverrideHit, HitResult); }
	float TakeDamage(float DamageAmount, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* WithDamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "AShooterProjectile.TakeDamage(float,FDamageEvent&,AController*,AActor*)", DamageAmount, DamageEvent, EventInstigator, WithDamageCauser); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "AShooterProjectile.OnRep_AttachmentReplication()"); }
	void SpawnProjectile(UE::Math::TVector<double>* SpawnPos, FVector_NetQuantizeNormal* SpawnDir, TArray<AShooterProjectile*, TSizedDefaultAllocator<32> >* FragmentsSpawnedArray) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, TArray<AShooterProjectile*, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile.SpawnProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,TArray<AShooterProjectile*,TSizedDefaultAllocator<32>>&)", SpawnPos, SpawnDir, FragmentsSpawnedArray); }
	void NetUpdateTimer() { NativeCall<void>(this, "AShooterProjectile.NetUpdateTimer()"); }
	void Colorize() { NativeCall<void>(this, "AShooterProjectile.Colorize()"); }
	void UpdateTargetPhysics() { NativeCall<void>(this, "AShooterProjectile.UpdateTargetPhysics()"); }
	void AddMoveIgnoreActor(AActor* ignoreActor) { NativeCall<void, AActor*>(this, "AShooterProjectile.AddMoveIgnoreActor(AActor*)", ignoreActor); }
	bool IgnoreRadialDamageToActor(AActor* Victim) { return NativeCall<bool, AActor*>(this, "AShooterProjectile.IgnoreRadialDamageToActor(AActor*)", Victim); }
	void ApplyDamageScalar(float Scalar) { NativeCall<void, float>(this, "AShooterProjectile.ApplyDamageScalar(float)", Scalar); }
	void ExplodeAtLocation(UE::Math::TVector<double>* AtLocation, UE::Math::TVector<double>* AtNormal) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterProjectile.ExplodeAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)", AtLocation, AtNormal); }
	void Reset() { NativeCall<void>(this, "AShooterProjectile.Reset()"); }
	void NetAttachRootComponentTo_Implementation(USceneComponent* InParent, FName InSocketName, UE::Math::TVector<double>* RelativeLocation, UE::Math::TRotator<double>* RelativeRotation) { NativeCall<void, USceneComponent*, FName, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AShooterProjectile.NetAttachRootComponentTo_Implementation(USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>)", InParent, InSocketName, RelativeLocation, RelativeRotation); }
	bool ShouldNotifyServerOfClientImpact(AActor* ImpactedActor) { return NativeCall<bool, AActor*>(this, "AShooterProjectile.ShouldNotifyServerOfClientImpact(AActor*)", ImpactedActor); }

	bool& bFragmentateField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bFragmentate"); }
	bool& bUseOwnerProjectileLifeField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bUseOwnerProjectileLife"); }
	bool& bIgnoreDirectImpactRadialDamageField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bIgnoreDirectImpactRadialDamage"); }
	bool& bHasImpactedField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bHasImpacted"); }
	bool& bSpawnedExplosionEffectsField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bSpawnedExplosionEffects"); }
	bool& bPostExplosionKeepAliveField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bPostExplosionKeepAlive"); }
	bool& bTornOffField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bTornOff"); }
	bool& bForceIgnoreBlockingHitClassesField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bForceIgnoreBlockingHitClasses"); }
	float& HomingReachedTargetDistanceThresholdField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.HomingReachedTargetDistanceThreshold"); }
	float& UpdateHomingTargetPhysicsIntervalField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.UpdateHomingTargetPhysicsInterval"); }
	unsigned char& WeaponColorizeVFXUseColorRegionField() { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile.WeaponColorizeVFXUseColorRegion"); }
	int& OverrideImpactExplosionVFXColorIDField() { return *GetNativePointerField<int*>(this, "AShooterProjectile.OverrideImpactExplosionVFXColorID"); }
	bool& bInitialTraceBlockedField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bInitialTraceBlocked"); }

	UShooterProjectileMovement*& MovementCompField() { return *GetNativePointerField<UShooterProjectileMovement**>(this, "AShooterProjectile.MovementComp"); }
	UNiagaraComponent*& NiagaraParticleCompField() { return *GetNativePointerField<UNiagaraComponent**>(this, "AShooterProjectile.NiagaraParticleComp"); }
	FName& VFXColorizationParameterNameField() { return *GetNativePointerField<FName*>(this, "AShooterProjectile.VFXColorizationParameterName"); }
	BitFieldValue<bool, unsigned char> bMoveIgnoreOwner() { return { this, "AShooterProjectile.bMoveIgnoreOwner"}; }
	BitFieldValue<bool, unsigned char> bIgnoreDinoPassengers() { return { this, "AShooterProjectile.bIgnoreDinoPassengers"}; }
	BitFieldValue<bool, unsigned char> bDamageOnBeginOverlap() { return { this, "AShooterProjectile.bDamageOnBeginOverlap"}; }
	BitFieldValue<bool, unsigned char> bUseBPRadialDamageMultiplier() { return { this, "AShooterProjectile.bUseBPRadialDamageMultiplier"}; }
	BitFieldValue<bool, unsigned char> bUseBPUpdateExplosionEmitter() { return { this, "AShooterProjectile.bUseBPUpdateExplosionEmitter"}; }
	BitFieldValue<bool, unsigned char> bDontExplodeOnAnyDamage() { return { this, "AShooterProjectile.bDontExplodeOnAnyDamage"}; }
	BitFieldValue<bool, unsigned char> bTriggerDealtDirectDamageEvent() { return { this, "AShooterProjectile.bTriggerDealtDirectDamageEvent"}; }
	BitFieldValue<bool, unsigned char> bWeaponColorizationColorizeVFX() { return { this, "AShooterProjectile.bWeaponColorizationColorizeVFX"}; }
	BitFieldValue<bool, unsigned char> bUseBPHandleHomingReachedTarget() { return { this, "AShooterProjectile.bUseBPHandleHomingReachedTarget"}; }
	BitFieldValue<bool, unsigned char> bStopIfInitialTraceIsBlocked() { return { this, "AShooterProjectile.bStopIfInitialTraceIsBlocked"}; }
	void NetAttachRootComponentTo(USceneComponent* InParent, FName InSocketName, UE::Math::TVector<double>* RelativeLocation, UE::Math::TRotator<double>* RelativeRotation) { if (!RelativeLocation) throw std::invalid_argument("Null native value parameter"); if (!RelativeRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, USceneComponent *, FName, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "AShooterProjectile.NetAttachRootComponentTo(USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>)", InParent, InSocketName, *RelativeLocation, *RelativeRotation); }
	bool BPHandleHomingReachedTarget() { return NativeCall<bool>(this, "AShooterProjectile.BPHandleHomingReachedTarget()"); }
	void BPProjectileBounced(const FHitResult& ImpactResult, const UE::Math::TVector<double>& ImpactVelocity) { NativeCall<void, const FHitResult&, const UE::Math::TVector<double>&>(this, "AShooterProjectile.BPProjectileBounced(FHitResult&,UE::Math::TVector<double>&)", ImpactResult, ImpactVelocity); }
	bool TryEnterPostExplosionKeepAlive() { return NativeCall<bool>(this, "AShooterProjectile.TryEnterPostExplosionKeepAlive()"); }
	void AddInheritedVelocityToHitTarget(UE::Math::TVector<double>* TargetLocation, UE::Math::TVector<double>* InheritedVelocity, float ProjectileSpeedOverride, float MaxClampAngleDegrees, UE::Math::TRotator<double>* AimRotation) { if (!TargetLocation) throw std::invalid_argument("Null native value parameter"); if (!InheritedVelocity) throw std::invalid_argument("Null native value parameter"); if (!AimRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, float, float, UE :: Math :: TRotator < double >>(this, "AShooterProjectile.AddInheritedVelocityToHitTarget(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,UE::Math::TRotator<double>)", *TargetLocation, *InheritedVelocity, ProjectileSpeedOverride, MaxClampAngleDegrees, *AimRotation); }
	APrimalDinoCharacter* GetSourceDino() { return NativeCall<APrimalDinoCharacter*>(this, "AShooterProjectile.GetSourceDino()"); }
	void BPInitializedVelocity(const UE::Math::TVector<double>& InVelocity, float CustomSpeed) { NativeCall<void, const UE::Math::TVector<double>&, float>(this, "AShooterProjectile.BPInitializedVelocity(UE::Math::TVector<double>&,float)", InVelocity, CustomSpeed); }
	void ClearHomingTarget() { NativeCall<void>(this, "AShooterProjectile.ClearHomingTarget()"); }
	void BPDestroyLikeDamage() { NativeCall<void>(this, "AShooterProjectile.BPDestroyLikeDamage()"); }
	void SetHomingTarget(USceneComponent* HomingTargetComponent, UE::Math::TVector<double>* HomingTargetComponentOffset) { if (!HomingTargetComponentOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, USceneComponent *, UE :: Math :: TVector < double >>(this, "AShooterProjectile.SetHomingTarget(USceneComponent*,UE::Math::TVector<double>)", HomingTargetComponent, *HomingTargetComponentOffset); }
	void ProjectileDealtDirectDamage(AActor* HitActor, float DamageDealt, const FHitResult& Hit) { NativeCall<void, AActor*, float, const FHitResult&>(this, "AShooterProjectile.ProjectileDealtDirectDamage(AActor*,float,FHitResult&)", HitActor, DamageDealt, Hit); }
	FName GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterProjectile.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	int GetProjectileID() { return NativeCall<int>(this, "AShooterProjectile.GetProjectileID()"); }
	void BPApplyExplosionDamageAndVFX(const FHitResult& Impact, bool bForceSpawnExplosionEmitter) { NativeCall<void, const FHitResult&, bool>(this, "AShooterProjectile.BPApplyExplosionDamageAndVFX(FHitResult&,bool)", Impact, bForceSpawnExplosionEmitter); }
	void BPSpawnedFragments(const TArray<AShooterProjectile*, TSizedDefaultAllocator<32> >& FragmentArray) { NativeCall<void, const TArray<AShooterProjectile*, TSizedDefaultAllocator<32> >&>(this, "AShooterProjectile.BPSpawnedFragments(TArray<AShooterProjectile*,TSizedDefaultAllocator<32>>&)", FragmentArray); }
	void BPUpdateExplosionEmitter(AActor* SpawnedActor) { NativeCall<void, AActor*>(this, "AShooterProjectile.BPUpdateExplosionEmitter(AActor*)", SpawnedActor); }
	void ClientNetDestroy() { NativeCall<void>(this, "AShooterProjectile.ClientNetDestroy()"); }
	void OnBeginOverlapDamage(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "AShooterProjectile.OnBeginOverlapDamage(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	float ApplyRadialDamageToActorMultiplier(AActor* Victim) { return NativeCall<float, AActor*>(this, "AShooterProjectile.ApplyRadialDamageToActorMultiplier(AActor*)", Victim); }
	void OnProjectileStop(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "AShooterProjectile.OnProjectileStop(FHitResult&)", HitResult); }
	bool IsProjectileInShield(UE::Math::TVector<double>* CheckLocation, float sphereradius, bool bOnlyEnemy) { if (!CheckLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float, bool>(this, "AShooterProjectile.IsProjectileInShield(UE::Math::TVector<double>,float,bool)", *CheckLocation, sphereradius, bOnlyEnemy); }
	void BPInitVelocity(UE::Math::TVector<double>* ShootDirection) { if (!ShootDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "AShooterProjectile.BPInitVelocity(UE::Math::TVector<double>)", *ShootDirection); }
	float BPRadialDamageMultiplier(AActor* Victim) { return NativeCall<float, AActor*>(this, "AShooterProjectile.BPRadialDamageMultiplier(AActor*)", Victim); }
	bool PreventExplosionEmitter_Implementation(const FHitResult& Impact) { return NativeCall<bool, const FHitResult&>(this, "AShooterProjectile.PreventExplosionEmitter_Implementation(FHitResult&)", Impact); }
	void BPDamageScalarApplied(float Scalar) { NativeCall<void, float>(this, "AShooterProjectile.BPDamageScalarApplied(float)", Scalar); }
	void ClearPickupItemClass() { NativeCall<void>(this, "AShooterProjectile.ClearPickupItemClass()"); }
	void OnExplode(const FHitResult& Result) { NativeCall<void, const FHitResult&>(this, "AShooterProjectile.OnExplode(FHitResult&)", Result); }
	void BPProjectileDealtDirectDamage(AActor* DamagedActor, float DamageDealt, const FHitResult& Hit) { NativeCall<void, AActor*, float, const FHitResult&>(this, "AShooterProjectile.BPProjectileDealtDirectDamage(AActor*,float,FHitResult&)", DamagedActor, DamageDealt, Hit); }
	bool IsSourceDinoPassenger(const AActor* OtherActor) { return NativeCall<bool, const AActor*>(this, "AShooterProjectile.IsSourceDinoPassenger(AActor*)", OtherActor); }
};