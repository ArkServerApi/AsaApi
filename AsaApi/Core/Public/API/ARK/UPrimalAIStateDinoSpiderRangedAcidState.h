#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateDinoSpiderRangedAcidState : UPrimalAIState
{
public:
	UPrimalAIStateDinoSpiderRangedAcidState() = delete;
	~UPrimalAIStateDinoSpiderRangedAcidState() = delete;
	UPrimalAIStateDinoSpiderRangedAcidState(const UPrimalAIStateDinoSpiderRangedAcidState&) = delete;
	UPrimalAIStateDinoSpiderRangedAcidState& operator=(const UPrimalAIStateDinoSpiderRangedAcidState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpiderRangedAcidState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpiderRangedAcidState"); }

	float& TimeBetweenProjectileField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.TimeBetweenProjectile"); }
	bool& bScaleProjDamageByDinoDamageField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bScaleProjDamageByDinoDamage"); }
	bool& bAimAtTargetField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bAimAtTarget"); }
	double& NextSprayTimeField() { return *GetNativePointerField<double*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.NextSprayTime"); }

	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnBegin(UPrimalAIState*)", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnEnd()"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnTick(float)", DeltaSeconds); }
	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderRangedAcidState.IsAttacking()"); }
	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderRangedAcidState.IsInAnimationStateActive()"); }

	FName& SprayStartSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.SprayStartSocket"); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedAcidState.StartAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedAcidState.EndAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedAcidState.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, Role); }
};
