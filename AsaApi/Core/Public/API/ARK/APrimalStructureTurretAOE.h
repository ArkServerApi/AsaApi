#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureTurret.h"

struct APrimalStructureTurretAOE : APrimalStructureTurret
{
public:
	APrimalStructureTurretAOE() = delete;
	~APrimalStructureTurretAOE() = delete;
	APrimalStructureTurretAOE(const APrimalStructureTurretAOE&) = delete;
	APrimalStructureTurretAOE& operator=(const APrimalStructureTurretAOE&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTurretAOE"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTurretAOE"); }

	int& CurrAttackTypeIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.CurrAttackTypeIndex"); }
	double& LastBounceTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureTurretAOE.LastBounceTime"); }
	int& CurrBounceIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretAOE.CurrBounceIndex"); }

	void OnRep_CurrAttackTypeIndex() { NativeCall<void>(this, "APrimalStructureTurretAOE.OnRep_CurrAttackTypeIndex()"); }
	void ChangeAttackType(int NewAttackTypeIndex) { NativeCall<void, int>(this, "APrimalStructureTurretAOE.ChangeAttackType(int)", NewAttackTypeIndex); }
	bool ShouldForceTargetRidingDinoNotRider() { return NativeCall<bool>(this, "APrimalStructureTurretAOE.ShouldForceTargetRidingDinoNotRider()"); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurretAOE.DoFire(int)", RandomSeed); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretAOE.BeginPlay()"); }
	void BPNotifyAttackTypeChanged() { NativeCall<void>(this, "APrimalStructureTurretAOE.BPNotifyAttackTypeChanged()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurretAOE.Tick(float)", DeltaSeconds); }
	float GetFireInterval() { return NativeCall<float>(this, "APrimalStructureTurretAOE.GetFireInterval()"); }

	BitFieldValue<bool, unsigned char> bUseBPUpdateTrailEffect() { return { this, "APrimalStructureTurretAOE.bUseBPUpdateTrailEffect"}; }

	UNiagaraComponent*& LastSpawnedTrailEffectField() { return *GetNativePointerField<UNiagaraComponent**>(this, "APrimalStructureTurretAOE.LastSpawnedTrailEffect"); }

	FTurretAOEAttackType& CachedAttackTypeField() { return *GetNativePointerField<FTurretAOEAttackType*>(this, "APrimalStructureTurretAOE.CachedAttackType"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& CurrentBounceTargetsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretAOE.CurrentBounceTargets"); }
	TArray<UNiagaraComponent*, TSizedDefaultAllocator<32> >& SpawnedBounceTrailEffectsField() { return *GetNativePointerField<TArray<UNiagaraComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretAOE.SpawnedBounceTrailEffects"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& BounceTargetsRelativeOffsetField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretAOE.BounceTargetsRelativeOffset"); }
	UE::Math::TVector<double>& LastRelativeImpactPointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurretAOE.LastRelativeImpactPoint"); }
	UNiagaraComponent* SpawnBounceTrailEffect(AActor* AttachActor, const UE::Math::TVector<double>& EndPoint) { return NativeCall<UNiagaraComponent*, AActor*, const UE::Math::TVector<double>&>(this, "APrimalStructureTurretAOE.SpawnBounceTrailEffect(AActor*,UE::Math::TVector<double>&)", AttachActor, EndPoint); }
	void BPUpdateTrailEffect(UNiagaraComponent* TrailEffect, AActor* TargetActor, UE::Math::TVector<double>* RelativeImpactPoint, float DeltaTime) { if (!RelativeImpactPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UNiagaraComponent *, AActor *, UE :: Math :: TVector < double >, float>(this, "APrimalStructureTurretAOE.BPUpdateTrailEffect(UNiagaraComponent*,AActor*,UE::Math::TVector<double>,float)", TrailEffect, TargetActor, *RelativeImpactPoint, DeltaTime); }
	void NetMultiUpdateBounceTargets(const TArray<AActor*, TSizedDefaultAllocator<32> >& NewBounceTargets) { NativeCall<void, const TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureTurretAOE.NetMultiUpdateBounceTargets(TArray<AActor*,TSizedDefaultAllocator<32>>&)", NewBounceTargets); }
	void NetMultiUpdateBounceTargets_Implementation(const TArray<AActor*, TSizedDefaultAllocator<32> >& NewBounceTargets) { NativeCall<void, const TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureTurretAOE.NetMultiUpdateBounceTargets_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", NewBounceTargets); }
	UE::Math::TVector<double>* GetBounceTargetAimAtLocation(UE::Math::TVector<double>* result, AActor* ForTarget, AActor* FromActor, const UE::Math::TVector<double>& FromLoc) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, AActor*, AActor*, const UE::Math::TVector<double>&>(this, "APrimalStructureTurretAOE.GetBounceTargetAimAtLocation(AActor*,AActor*,UE::Math::TVector<double>&)", result, ForTarget, FromActor, FromLoc); }
	UE::Math::TVector<double>* GetBounceTargetFireAtLocation(UE::Math::TVector<double>* result, APrimalCharacter* ForTarget, AActor* FromActor, const UE::Math::TVector<double>& FromLoc) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*, AActor*, const UE::Math::TVector<double>&>(this, "APrimalStructureTurretAOE.GetBounceTargetFireAtLocation(APrimalCharacter*,AActor*,UE::Math::TVector<double>&)", result, ForTarget, FromActor, FromLoc); }
	void SpawnTrailEffect(const UE::Math::TVector<double>& EndPoint) { NativeCall<void, const UE::Math::TVector<double>&>(this, "APrimalStructureTurretAOE.SpawnTrailEffect(UE::Math::TVector<double>&)", EndPoint); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* FindAllPotentialBounceTargets(TArray<AActor*, TSizedDefaultAllocator<32> >* result, AActor* FromActor, float Radius) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, AActor*, float>(this, "APrimalStructureTurretAOE.FindAllPotentialBounceTargets(AActor*,float)", result, FromActor, Radius); }
};
