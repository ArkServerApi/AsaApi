#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateDinoRangedState : UPrimalAIState
{
public:
	UPrimalAIStateDinoRangedState() = delete;
	~UPrimalAIStateDinoRangedState() = delete;
	UPrimalAIStateDinoRangedState(const UPrimalAIStateDinoRangedState&) = delete;
	UPrimalAIStateDinoRangedState& operator=(const UPrimalAIStateDinoRangedState&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoRangedState"); }

	float& AccuracyWeightField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.AccuracyWeight"); }
	float& ClampAngleField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.ClampAngle"); }
	float& SpreadOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.SpreadOffset"); }

	void PreventAttackForTime(float time) { NativeCall<void, float>(this, "UPrimalAIStateDinoRangedState.PreventAttackForTime(float)", time); }
	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoRangedState.OnBegin(UPrimalAIState*)", InParentState); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoRangedState"); }
	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIStateDinoRangedState.IsChildState()"); }
	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIStateDinoRangedState.IsAttacking()"); }
	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateDinoRangedState.IsInAnimationStateActive()"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoRangedState.OnTick(float)", DeltaSeconds); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoRangedState.OnEnd()"); }

	BitFieldValue<bool, unsigned char> bScaleProjDamageByDinoDamage() { return { this, "UPrimalAIStateDinoRangedState.bScaleProjDamageByDinoDamage"}; }
	BitFieldValue<bool, unsigned char> bGetTargetDirection() { return { this, "UPrimalAIStateDinoRangedState.bGetTargetDirection"}; }
	BitFieldValue<bool, unsigned char> bUseAimSocket() { return { this, "UPrimalAIStateDinoRangedState.bUseAimSocket"}; }
	BitFieldValue<bool, unsigned char> bChildState() { return { this, "UPrimalAIStateDinoRangedState.bChildState"}; }
	BitFieldValue<bool, unsigned char> bUseRangedSockets() { return { this, "UPrimalAIStateDinoRangedState.bUseRangedSockets"}; }
	BitFieldValue<bool, unsigned char> bUseBPRangedAttack() { return { this, "UPrimalAIStateDinoRangedState.bUseBPRangedAttack"}; }
	BitFieldValue<bool, unsigned char> bUseBPRangedAttackOnBegin() { return { this, "UPrimalAIStateDinoRangedState.bUseBPRangedAttackOnBegin"}; }
	BitFieldValue<bool, unsigned char> bLeadTarget() { return { this, "UPrimalAIStateDinoRangedState.bLeadTarget"}; }

	UE::Math::TVector<double>& WorldGeometryTargetLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAIStateDinoRangedState.WorldGeometryTargetLocOffset"); }
	UE::Math::TVector<double>& CharacterTargetLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAIStateDinoRangedState.CharacterTargetLocOffset"); }
	FName& AimSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoRangedState.AimSocket"); }
	TArray<FName, TSizedDefaultAllocator<32> >& RangedSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalAIStateDinoRangedState.RangedSockets"); }
	void EndAnimationState(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoRangedState.EndAnimationState(FName,ENetRole)", CustomEventName, WithRole); }
	void AimedShoot(const UE::Math::TVector<double>& TargetLoc, const FName& RangedSocket, const UE::Math::TVector<double>& OriginOverride) { NativeCall<void, const UE::Math::TVector<double>&, const FName&, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoRangedState.AimedShoot(UE::Math::TVector<double>&,FName&,UE::Math::TVector<double>&)", TargetLoc, RangedSocket, OriginOverride); }
	void SimpleShoot(const FName& RangedSocket, const UE::Math::TVector<double>& OriginOverride) { NativeCall<void, const FName&, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoRangedState.SimpleShoot(FName&,UE::Math::TVector<double>&)", RangedSocket, OriginOverride); }
	UE::Math::TVector<double>* OffsetVectorRandomlyReturnsAltered(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& InVector, float minPercent, float maxPercent) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, float>(this, "UPrimalAIStateDinoRangedState.OffsetVectorRandomlyReturnsAltered(UE::Math::TVector<double>&,float,float)", result, InVector, minPercent, maxPercent); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole WithRole) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoRangedState.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, WithRole); }
	void StartAnimationState(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoRangedState.StartAnimationState(FName,ENetRole)", CustomEventName, WithRole); }
	UE::Math::TVector<double>* ClampProjectileVectorInForwardDirection(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& OriginalShootingDirection, const FName& RangedSocket) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const FName&>(this, "UPrimalAIStateDinoRangedState.ClampProjectileVectorInForwardDirection(UE::Math::TVector<double>&,FName&)", result, OriginalShootingDirection, RangedSocket); }
	UE::Math::TVector<double>* FindDirectionToLeadTarget(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& VectorToHitTargetStandingStill, float extraTimeAllowed, const UE::Math::TVector<double>& currentVelocityOfTarget) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoRangedState.FindDirectionToLeadTarget(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&)", result, VectorToHitTargetStandingStill, extraTimeAllowed, currentVelocityOfTarget); }
	float GetZGravityOffset(const UE::Math::TVector<double>& ProjectileVelocity, const UE::Math::TVector<double>& TargetLocation, const UE::Math::TVector<double>& ProjectileFinalLocation) { return NativeCall<float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoRangedState.GetZGravityOffset(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", ProjectileVelocity, TargetLocation, ProjectileFinalLocation); }
	void BPRangedAttack(const UE::Math::TVector<double>& TargetLocation, const UE::Math::TVector<double>& TargetVelocity) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoRangedState.BPRangedAttack(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", TargetLocation, TargetVelocity); }
	static UE::Math::TVector<double>* ClampEndLocationByAngle(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& StartLocation, const UE::Math::TVector<double>& EndLocation, float MaxAngleDeg, const UE::Math::TVector<double>& BasisForward) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&>(nullptr, "UPrimalAIStateDinoRangedState.ClampEndLocationByAngle(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&)", result, StartLocation, EndLocation, MaxAngleDeg, BasisForward); }
	void BPRangedAttackOnBegin(const UE::Math::TVector<double>& TargetLocation, const UE::Math::TVector<double>& TargetVelocity) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UPrimalAIStateDinoRangedState.BPRangedAttackOnBegin(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", TargetLocation, TargetVelocity); }
};
