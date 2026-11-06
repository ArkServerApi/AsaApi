#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalAIState : UObject
{
public:
	UPrimalAIState() = delete;
	~UPrimalAIState() = delete;
	UPrimalAIState(const UPrimalAIState&) = delete;
	UPrimalAIState& operator=(const UPrimalAIState&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIState"); }

	bool& bUseBPCanAttackField() { return *GetNativePointerField<bool*>(this, "UPrimalAIState.bUseBPCanAttack"); }
	bool& bUseBPOverrideAttackWeightField() { return *GetNativePointerField<bool*>(this, "UPrimalAIState.bUseBPOverrideAttackWeight"); }
	float& LastAnimationCustomNameStateDurationField() { return *GetNativePointerField<float*>(this, "UPrimalAIState.LastAnimationCustomNameStateDuration"); }

	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIState.OnBegin(UPrimalAIState*)", InParentState); }
	bool ShouldSkipRangeCheck() { return NativeCall<bool>(this, "UPrimalAIState.ShouldSkipRangeCheck()"); }
	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIState.IsChildState()"); }
	bool BPIsChildState() { return NativeCall<bool>(this, "UPrimalAIState.BPIsChildState()"); }
	float BPOverrideAttackWeight(float inputWeight, float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<float, float, float, float, AActor*>(this, "UPrimalAIState.BPOverrideAttackWeight(float,float,float,AActor*)", inputWeight, distance, attackRangeOffset, OtherTarget); }
	void OnBeginEvent(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIState.OnBeginEvent(UPrimalAIState*)", InParentState); }
	bool OnCanUseStateEvent() { return NativeCall<bool>(this, "UPrimalAIState.OnCanUseStateEvent()"); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIState.OnEnd()"); }
	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIState.IsAttacking()"); }
	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIState.IsInAnimationStateActive()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIState"); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIState.CanUseState()"); }
	void SetLastAttackTime() { NativeCall<void>(this, "UPrimalAIState.SetLastAttackTime()"); }
	void SetInAnimationStateActive(bool Value) { NativeCall<void, bool>(this, "UPrimalAIState.SetInAnimationStateActive(bool)", Value); }
	bool ShouldSkipIntervalCheck() { return NativeCall<bool>(this, "UPrimalAIState.ShouldSkipIntervalCheck()"); }
	void OnChildStateEnded(UPrimalAIState* PrimalAIState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIState.OnChildStateEnded(UPrimalAIState*)", PrimalAIState); }
	void OnEndEvent() { NativeCall<void>(this, "UPrimalAIState.OnEndEvent()"); }
	void OnTickEvent(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIState.OnTickEvent(float)", DeltaSeconds); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIState.OnTick(float)", DeltaSeconds); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UPrimalAIState.GetWorld()"); }
	bool CanInterrupt(int AttackIndex) { return NativeCall<bool, int>(this, "UPrimalAIState.CanInterrupt(int)", AttackIndex); }
	bool BPCanAttack(float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<bool, float, float, AActor*>(this, "UPrimalAIState.BPCanAttack(float,float,AActor*)", distance, attackRangeOffset, OtherTarget); }

	BitFieldValue<bool, unsigned char> IsInAnimationState() { return { this, "UPrimalAIState.IsInAnimationState"}; }
	BitFieldValue<bool, unsigned char> IsInAttackState() { return { this, "UPrimalAIState.IsInAttackState"}; }
	BitFieldValue<bool, unsigned char> bShouldResetInLosingTarget() { return { this, "UPrimalAIState.bShouldResetInLosingTarget"}; }
	BitFieldValue<bool, unsigned char> bBPCanUseState() { return { this, "UPrimalAIState.bBPCanUseState"}; }
	BitFieldValue<bool, unsigned char> bUseBPSkipIntervalCheck() { return { this, "UPrimalAIState.bUseBPSkipIntervalCheck"}; }
	BitFieldValue<bool, unsigned char> bUseBPSkipRangeCheck() { return { this, "UPrimalAIState.bUseBPSkipRangeCheck"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanInterrupt() { return { this, "UPrimalAIState.bUseBPCanInterrupt"}; }

	APrimalDinoCharacter*& PawnField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "UPrimalAIState.Pawn"); }
	UPrimalAIState*& ParentStateField() { return *GetNativePointerField<UPrimalAIState**>(this, "UPrimalAIState.ParentState"); }

	FName& AnimationCustomNameField() { return *GetNativePointerField<FName*>(this, "UPrimalAIState.AnimationCustomName"); }
	TArray<UPrimalAIState*, TSizedDefaultAllocator<32> >& ChildStatesField() { return *GetNativePointerField<TArray<UPrimalAIState*, TSizedDefaultAllocator<32> >*>(this, "UPrimalAIState.ChildStates"); }
	void OnAnimNotifyCustomEvent(FName CustomEventName, UAnimSequenceBase* Animation, ENetRole Role) { NativeCall<void, FName, UAnimSequenceBase*, ENetRole>(this, "UPrimalAIState.OnAnimNotifyCustomEvent(FName,UAnimSequenceBase*,ENetRole)", CustomEventName, Animation, Role); }
	void StartAnimationState(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.StartAnimationState(FName,ENetRole)", CustomEventName, WithRole); }
	void EndAnimationStateEvent(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.EndAnimationStateEvent(FName,ENetRole)", CustomEventName, WithRole); }
	void TickAnimationStateEvent(float DeltaTime, FName CustomEventName, ENetRole WithRole) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIState.TickAnimationStateEvent(float,FName,ENetRole)", DeltaTime, CustomEventName, WithRole); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole WithRole) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIState.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, WithRole); }
	void StartAnimationStateEvent(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.StartAnimationStateEvent(FName,ENetRole)", CustomEventName, WithRole); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalAIState.GetDebugInfoString()", result); }
	void EndAnimationState(FName CustomEventName, ENetRole WithRole) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.EndAnimationState(FName,ENetRole)", CustomEventName, WithRole); }
	FString* BPGetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalAIState.BPGetDebugInfoString()", result); }
};
