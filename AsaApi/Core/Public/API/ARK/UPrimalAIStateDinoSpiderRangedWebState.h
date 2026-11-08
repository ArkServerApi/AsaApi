#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIStateDinoRangedState.h"

struct UPrimalAIStateDinoSpiderRangedWebState : UPrimalAIStateDinoRangedState
{
public:
	UPrimalAIStateDinoSpiderRangedWebState() = delete;
	~UPrimalAIStateDinoSpiderRangedWebState() = delete;
	UPrimalAIStateDinoSpiderRangedWebState(const UPrimalAIStateDinoSpiderRangedWebState&) = delete;
	UPrimalAIStateDinoSpiderRangedWebState& operator=(const UPrimalAIStateDinoSpiderRangedWebState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpiderRangedWebState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpiderRangedWebState"); }

	float& TimeBetweenProjectileField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.TimeBetweenProjectile"); }
	float& LeadTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.LeadTime"); }
	double& NextSprayTimeField() { return *GetNativePointerField<double*>(this, "UPrimalAIStateDinoSpiderRangedWebState.NextSprayTime"); }
	float& SpreadOffsetPitchField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SpreadOffsetPitch"); }
	int& NumberOfProjectilesMultiplierField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderRangedWebState.NumberOfProjectilesMultiplier"); }

	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoSpiderRangedWebState.OnEnd()"); }
	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoSpiderRangedWebState.OnBegin(UPrimalAIState*)", InParentState); }
	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderRangedWebState.IsAttacking()"); }
	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderRangedWebState.IsInAnimationStateActive()"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoSpiderRangedWebState.OnTick(float)", DeltaSeconds); }

	BitFieldValue<bool, unsigned char> bClampDirection() { return { this, "UPrimalAIStateDinoSpiderRangedWebState.bClampDirection"}; }

	FName& SprayStartSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SprayStartSocket"); }
	FName& SprayEndSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SprayEndSocket"); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedWebState.StartAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedWebState.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, Role); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedWebState.EndAnimationState(FName,ENetRole)", CustomEventName, Role); }
};
