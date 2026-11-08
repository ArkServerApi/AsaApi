#pragma once
#include "BulkForward.h"


struct AShooterProjectile_Swarm : AShooterProjectile
{
	// Fields

	USceneComponent*& SwarmRootField() { return *GetNativePointerField<USceneComponent**>(this, "AShooterProjectile_Swarm.SwarmRoot"); }
	int& SwarmSizeField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.SwarmSize"); }
	int& SwarmLeaderCountField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.SwarmLeaderCount"); }
	float& BoidCollisionRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidCollisionRadius"); }
	//FBoidBehavior& SwarmBehaviorField() { return *GetNativePointerField<FBoidBehavior*>(this, "AShooterProjectile_Swarm.SwarmBehavior"); }
	float& DynamicAvoidanceDurationField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.DynamicAvoidanceDuration"); }
	//FFlockPersistentData& SwarmPersistentDataField() { return *GetNativePointerField<FFlockPersistentData*>(this, "AShooterProjectile_Swarm.SwarmPersistentData"); }
	UParticleSystem*& SwarmParticleSystemField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterProjectile_Swarm.SwarmParticleSystem"); }
	FName& SwarmOpacityParticleParamNameField() { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Swarm.SwarmOpacityParticleParamName"); }
	float& SwarmOpacityFadeTimeOnBoidImpactField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmOpacityFadeTimeOnBoidImpact"); }
	float& LifespanAfterImpactField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.LifespanAfterImpact"); }
	float& SwarmDelayedStartTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmDelayedStartTime"); }
	float& BoidSpawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidSpawnInterval"); }
	float& BoidInitialFollowProjectileTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidInitialFollowProjectileTime"); }
	float& BoidInitialDisableCollisionTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidInitialDisableCollisionTime"); }
	float& SwarmLifetimeAfterPrimaryProjectileDestructionField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmLifetimeAfterPrimaryProjectileDestruction"); }
	float& SwarmSpawnRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmSpawnRadius"); }
	UE::Math::TVector2<double>& SwarmInitialSpeedRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterProjectile_Swarm.SwarmInitialSpeedRange"); }
	UE::Math::TVector2<double>& SwarmMaxSpeedRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterProjectile_Swarm.SwarmMaxSpeedRange"); }
	UE::Math::TVector2<double>& SwarmMaxForceRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterProjectile_Swarm.SwarmMaxForceRange"); }
	UE::Math::TVector2<double>& SwarmTurnRateRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterProjectile_Swarm.SwarmTurnRateRange"); }
	float& SwarmTargetRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmTargetRadius"); }
	float& SwarmTargetHelixSpeedField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmTargetHelixSpeed"); }
	//TArray<FBoid, TSizedDefaultAllocator<32> >& SwarmDataField() { return *GetNativePointerField<TArray<FBoid, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile_Swarm.SwarmData"); }
	TArray<UParticleSystemComponent*, TSizedDefaultAllocator<32> >& SwarmCompsField() { return *GetNativePointerField<TArray<UParticleSystemComponent*, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile_Swarm.SwarmComps"); }
	TArray<double, TSizedDefaultAllocator<32> >& BoidSpawnTimesField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile_Swarm.BoidSpawnTimes"); }
	TArray<double, TSizedDefaultAllocator<32> >& BoidExplodeTimesField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile_Swarm.BoidExplodeTimes"); }
	TArray<int, TSizedDefaultAllocator<32> >& FlockingWhitelistField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile_Swarm.FlockingWhitelist"); }
	float& CrazinessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.CrazinessMultiplier"); }
	FProjectileArc& LaunchArcField() { return *GetNativePointerField<FProjectileArc*>(this, "AShooterProjectile_Swarm.LaunchArc"); }
	long double& ProjectileSpawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile_Swarm.ProjectileSpawnTime"); }
	float& ProjectilePeakTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.ProjectilePeakTime"); }
	float& ProjectileImpactTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.ProjectileImpactTime"); }
	long double& PrimaryProjectileDestroyTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile_Swarm.PrimaryProjectileDestroyTime"); }
	UE::Math::TVector<double>& PrimaryProjectileImpactLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterProjectile_Swarm.PrimaryProjectileImpactLocation"); }
	int& NextBoidToSpawnField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.NextBoidToSpawn"); }
	long double& LastBoidSpawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile_Swarm.LastBoidSpawnTime"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterProjectile_Swarm"); }
	void BPGetBoidSpawnLocationAndVelocity(int BoidIndex, const FBoid* BoidData, UE::Math::TVector<double>* SpawnLocation, UE::Math::TVector<double>* SpawnVelocity) { NativeCall<void, int, const FBoid*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterProjectile_Swarm.BPGetBoidSpawnLocationAndVelocity(int,FBoid&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", BoidIndex, BoidData, SpawnLocation, SpawnVelocity); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterProjectile_Swarm();
	void BeginPlay() { NativeCall<void>(this, "AShooterProjectile_Swarm.BeginPlay()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterProjectile_Swarm.Tick(float)", DeltaSeconds); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AShooterProjectile_Swarm.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	void MultiPrimaryProjectileDestroyed_Implementation(UE::Math::TVector<double>* ImpactLocation, long double DestroyNetworkTime) { NativeCall<void, UE::Math::TVector<double>*, long double>(this, "AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed_Implementation(UE::Math::TVector<double>,double)", ImpactLocation, DestroyNetworkTime); }
	void DoSwarmSync() { NativeCall<void>(this, "AShooterProjectile_Swarm.DoSwarmSync()"); }
	void MultiSyncSwarm_Implementation(const TArray<FBoid, TSizedDefaultAllocator<32> >* ServerSwarmData) { NativeCall<void, const TArray<FBoid, TSizedDefaultAllocator<32> >*>(this, "AShooterProjectile_Swarm.MultiSyncSwarm_Implementation(TArray<FBoid,TSizedDefaultAllocator<32>>&)", ServerSwarmData); }
	void SpawnSwarm() { NativeCall<void>(this, "AShooterProjectile_Swarm.SpawnSwarm()"); }
	void DelayedSpawnBoids() { NativeCall<void>(this, "AShooterProjectile_Swarm.DelayedSpawnBoids()"); }

	bool& bFadeOutSwarmOverProjectileLifeField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bFadeOutSwarmOverProjectileLife"); }
	bool& bUseCrazinessMultiplierField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bUseCrazinessMultiplier"); }
	bool& bUseBPGetBoidSpawnLocationAndVelocityField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bUseBPGetBoidSpawnLocationAndVelocity"); }
	bool& bPrimaryProjectileDestroyedField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bPrimaryProjectileDestroyed"); }

	FBoidBehavior& SwarmBehaviorField() { return *GetNativePointerField<FBoidBehavior*>(this, "AShooterProjectile_Swarm.SwarmBehavior"); }
	FFlockPersistentData& SwarmPersistentDataField() { return *GetNativePointerField<FFlockPersistentData*>(this, "AShooterProjectile_Swarm.SwarmPersistentData"); }
	void MultiPrimaryProjectileDestroyed(UE::Math::TVector<double>* ImpactLocation, double DestroyNetworkTime) { if (!ImpactLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, double>(this, "AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed(UE::Math::TVector<double>,double)", *ImpactLocation, DestroyNetworkTime); }
	float TimeSinceProjectileSpawn() { return NativeCall<float>(this, "AShooterProjectile_Swarm.TimeSinceProjectileSpawn()"); }
	void LifeSpanExpired() { NativeCall<void>(this, "AShooterProjectile_Swarm.LifeSpanExpired()"); }
	void BPOnBoidExplode(int BoidIndex, UFXSystemComponent* BoidParticles, const FHitResult& Hit) { NativeCall<void, int, UFXSystemComponent*, const FHitResult&>(this, "AShooterProjectile_Swarm.BPOnBoidExplode(int,UFXSystemComponent*,FHitResult&)", BoidIndex, BoidParticles, Hit); }
	int GetNumberOfBoidsInFlight() { return NativeCall<int>(this, "AShooterProjectile_Swarm.GetNumberOfBoidsInFlight()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterProjectile_Swarm"); }
};