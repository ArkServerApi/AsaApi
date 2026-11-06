#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateBPBase : UPrimalAIState
{
public:
	UPrimalAIStateBPBase() = delete;
	~UPrimalAIStateBPBase() = delete;
	UPrimalAIStateBPBase(const UPrimalAIStateBPBase&) = delete;
	UPrimalAIStateBPBase& operator=(const UPrimalAIStateBPBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateBPBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateBPBase"); }

	float& MinTickEventTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MinTickEventTime"); }
	float& MaxTickEventTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MaxTickEventTime"); }
	float& MinAttackTickTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MinAttackTickTime"); }
	float& MaxAttackTickTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MaxAttackTickTime"); }
	bool& bUpdatedLastAttackTimeField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBPBase.bUpdatedLastAttackTime"); }
	double& StateStartTimeField() { return *GetNativePointerField<double*>(this, "UPrimalAIStateBPBase.StateStartTime"); }
	double& LastManagedTickEventTimeField() { return *GetNativePointerField<double*>(this, "UPrimalAIStateBPBase.LastManagedTickEventTime"); }
	float& CurrentManagedTickEventIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.CurrentManagedTickEventInterval"); }
	double& LastManagedAttackTickTimeField() { return *GetNativePointerField<double*>(this, "UPrimalAIStateBPBase.LastManagedAttackTickTime"); }
	float& CurrentManagedAttackTickIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.CurrentManagedAttackTickInterval"); }

	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.IsAttacking()"); }
	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.IsInAnimationStateActive()"); }
	void BPOnAttackTick(float DeltaTime) { NativeCall<void, float>(this, "UPrimalAIStateBPBase.BPOnAttackTick(float)", DeltaTime); }
	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.IsChildState()"); }
	void SetLastAttackTimeToNow(float Offset) { NativeCall<void, float>(this, "UPrimalAIStateBPBase.SetLastAttackTimeToNow(float)", Offset); }
	float GetTimeSinceStateBegin() { return NativeCall<float>(this, "UPrimalAIStateBPBase.GetTimeSinceStateBegin()"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateBPBase.OnTick(float)", DeltaSeconds); }
	bool BPShouldEndAttack() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.BPShouldEndAttack()"); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.CanUseState()"); }
	void BPOnClearAttackState() { NativeCall<void>(this, "UPrimalAIStateBPBase.BPOnClearAttackState()"); }
	void BPOnAttackStart(int AttackIndex) { NativeCall<void, int>(this, "UPrimalAIStateBPBase.BPOnAttackStart(int)", AttackIndex); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateBPBase.OnEnd()"); }
	void BPOnAttackEnd(int AttackIndex) { NativeCall<void, int>(this, "UPrimalAIStateBPBase.BPOnAttackEnd(int)", AttackIndex); }
	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateBPBase.OnBegin(UPrimalAIState*)", InParentState); }
	bool IsTimeSinceStateBegin(float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, float, bool>(this, "UPrimalAIStateBPBase.IsTimeSinceStateBegin(float,bool)", CheckTimeSince, bForceTrueAtZeroTime); }
	void SetLastAttackTime() { NativeCall<void>(this, "UPrimalAIStateBPBase.SetLastAttackTime()"); }
	double GetStateBeginTime() { return NativeCall<double>(this, "UPrimalAIStateBPBase.GetStateBeginTime()"); }
	void FinishState() { NativeCall<void>(this, "UPrimalAIStateBPBase.FinishState()"); }

	BitFieldValue<bool, unsigned __int32> bCanAttackWhileFlying() { return { this, "UPrimalAIStateBPBase.bCanAttackWhileFlying"}; }
	BitFieldValue<bool, unsigned __int32> bClearAttackStateOnEnd() { return { this, "UPrimalAIStateBPBase.bClearAttackStateOnEnd"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnClearAttackState() { return { this, "UPrimalAIStateBPBase.bUseBPOnClearAttackState"}; }
	BitFieldValue<bool, unsigned __int32> bChildState() { return { this, "UPrimalAIStateBPBase.bChildState"}; }
	BitFieldValue<bool, unsigned __int32> bIsMeleeAttack() { return { this, "UPrimalAIStateBPBase.bIsMeleeAttack"}; }
	BitFieldValue<bool, unsigned __int32> bUseTickEvent() { return { this, "UPrimalAIStateBPBase.bUseTickEvent"}; }
	BitFieldValue<bool, unsigned __int32> bUseTickAnimationStateEvent() { return { this, "UPrimalAIStateBPBase.bUseTickAnimationStateEvent"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPShouldEndAttack() { return { this, "UPrimalAIStateBPBase.bUseBPShouldEndAttack"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnAnimNotifyCustomEvent() { return { this, "UPrimalAIStateBPBase.bUseBPOnAnimNotifyCustomEvent"}; }
	BitFieldValue<bool, unsigned __int32> bEndStateWhenAttackAnimCompletes() { return { this, "UPrimalAIStateBPBase.bEndStateWhenAttackAnimCompletes"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnAttackStart() { return { this, "UPrimalAIStateBPBase.bUseBPOnAttackStart"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnAttackEnd() { return { this, "UPrimalAIStateBPBase.bUseBPOnAttackEnd"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnAttackTick() { return { this, "UPrimalAIStateBPBase.bUseBPOnAttackTick"}; }

	void GetLastAttackTimeAndInterval(double& OutLastAttackTime, float& OutAttackInterval) { NativeCall<void, double&, float&>(this, "UPrimalAIStateBPBase.GetLastAttackTimeAndInterval(double&,float&)", OutLastAttackTime, OutAttackInterval); }
	void DealMeleeDamage(AActor* HitActor, const FHitResult& FromHitResult) { NativeCall<void, AActor*, const FHitResult&>(this, "UPrimalAIStateBPBase.DealMeleeDamage(AActor*,FHitResult&)", HitActor, FromHitResult); }
	void OnAnimNotifyCustomEvent(FName CustomEventName, UAnimSequenceBase* Animation, ENetRole Role) { NativeCall<void, FName, UAnimSequenceBase*, ENetRole>(this, "UPrimalAIStateBPBase.OnAnimNotifyCustomEvent(FName,UAnimSequenceBase*,ENetRole)", CustomEventName, Animation, Role); }
	void BPOnAnimNotifyCustomEvent(FName CustomEventName, UAnimSequenceBase* Animation, ENetRole Role) { NativeCall<void, FName, UAnimSequenceBase*, ENetRole>(this, "UPrimalAIStateBPBase.BPOnAnimNotifyCustomEvent(FName,UAnimSequenceBase*,ENetRole)", CustomEventName, Animation, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateBPBase.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, Role); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateBPBase.EndAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateBPBase.StartAnimationState(FName,ENetRole)", CustomEventName, Role); }
};
