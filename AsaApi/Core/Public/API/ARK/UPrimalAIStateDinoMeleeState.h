#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateDinoMeleeState : UPrimalAIState
{
public:
	UPrimalAIStateDinoMeleeState() = delete;
	~UPrimalAIStateDinoMeleeState() = delete;
	UPrimalAIStateDinoMeleeState(const UPrimalAIStateDinoMeleeState&) = delete;
	UPrimalAIStateDinoMeleeState& operator=(const UPrimalAIStateDinoMeleeState&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoMeleeState"); }

	float& SpawnProjectileIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileInterval"); }
	float& SecondarySwingRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingRadius"); }
	short& CachedAttackIndexField() { return *GetNativePointerField<short*>(this, "UPrimalAIStateDinoMeleeState.CachedAttackIndex"); }
	int& NumProjectilesIntervalsPassedField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoMeleeState.NumProjectilesIntervalsPassed"); }

	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.IsInAnimationStateActive()"); }
	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.IsAttacking()"); }
	void BPOnDealtDamage(AActor* DamagedActor) { NativeCall<void, AActor*>(this, "UPrimalAIStateDinoMeleeState.BPOnDealtDamage(AActor*)", DamagedActor); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.CanUseState()"); }
	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.IsChildState()"); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoMeleeState.OnEnd()"); }
	bool CheckSpawnProjectile(bool bOnEnd) { return NativeCall<bool, bool>(this, "UPrimalAIStateDinoMeleeState.CheckSpawnProjectile(bool)", bOnEnd); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoMeleeState.OnTick(float)", DeltaSeconds); }
	void DoMeleeAttackTrace(float DeltaTime, bool bForceMeleeOverlapCheck) { NativeCall<void, float, bool>(this, "UPrimalAIStateDinoMeleeState.DoMeleeAttackTrace(float,bool)", DeltaTime, bForceMeleeOverlapCheck); }
	bool BPPreventStopActiveStateOnTick() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.BPPreventStopActiveStateOnTick()"); }
	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoMeleeState.OnBegin(UPrimalAIState*)", InParentState); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoMeleeState"); }

	BitFieldValue<bool, unsigned char> bAdjustProjectileDamageIfTickMissesIntervals() { return { this, "UPrimalAIStateDinoMeleeState.bAdjustProjectileDamageIfTickMissesIntervals"}; }
	BitFieldValue<bool, unsigned char> bCanAttackWhileFlying() { return { this, "UPrimalAIStateDinoMeleeState.bCanAttackWhileFlying"}; }
	BitFieldValue<bool, unsigned char> bClearAttackStateOnEnd() { return { this, "UPrimalAIStateDinoMeleeState.bClearAttackStateOnEnd"}; }
	BitFieldValue<bool, unsigned char> bDoSecondarySwingTrace() { return { this, "UPrimalAIStateDinoMeleeState.bDoSecondarySwingTrace"}; }
	BitFieldValue<bool, unsigned char> bChildState() { return { this, "UPrimalAIStateDinoMeleeState.bChildState"}; }
	BitFieldValue<bool, unsigned char> bDidAnySweepAttacks() { return { this, "UPrimalAIStateDinoMeleeState.bDidAnySweepAttacks"}; }
	BitFieldValue<bool, unsigned char> bDontActuallyDealDamage() { return { this, "UPrimalAIStateDinoMeleeState.bDontActuallyDealDamage"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnHitActor() { return { this, "UPrimalAIStateDinoMeleeState.bUseBPOnHitActor"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetSocketLocation() { return { this, "UPrimalAIStateDinoMeleeState.bUseBPGetSocketLocation"}; }
	BitFieldValue<bool, unsigned char> bSecondarySwingTraceForCorpsesOnly() { return { this, "UPrimalAIStateDinoMeleeState.bSecondarySwingTraceForCorpsesOnly"}; }
	BitFieldValue<bool, unsigned char> bForceNoCachedTrace() { return { this, "UPrimalAIStateDinoMeleeState.bForceNoCachedTrace"}; }
	BitFieldValue<bool, unsigned char> bUseBPAdjustProjectileSpawnTransform() { return { this, "UPrimalAIStateDinoMeleeState.bUseBPAdjustProjectileSpawnTransform"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnDamageDealt() { return { this, "UPrimalAIStateDinoMeleeState.bUseBPOnDamageDealt"}; }

	FName& SpawnProjectileSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileSocket"); }
	UE::Math::TVector<double>& SecondarySwingLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingLocOffset"); }
	void BPOnHitActor(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "UPrimalAIStateDinoMeleeState.BPOnHitActor(FHitResult&)", HitResult); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole WithRole) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoMeleeState.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, WithRole); }
	void BPGetSocketLocation(const FName& SocketName, UE::Math::TVector<double>& SocketLocation) { NativeCall<void, const FName&, UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoMeleeState.BPGetSocketLocation(FName&,UE::Math::TVector<double>&)", SocketName, SocketLocation); }
	void OnHitActor(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "UPrimalAIStateDinoMeleeState.OnHitActor(FHitResult&)", HitResult); }
	void EndAnimationState(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoMeleeState.EndAnimationState(FName,ENetRole)", CustomEventName, WithRole); }
	void BPAdjustProjectileSpawnTransform(UE::Math::TVector<double>& SpawnLocation, UE::Math::TRotator<double>& SpawnRotation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "UPrimalAIStateDinoMeleeState.BPAdjustProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", SpawnLocation, SpawnRotation); }
	void StartAnimationState(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoMeleeState.StartAnimationState(FName,ENetRole)", CustomEventName, WithRole); }
};
