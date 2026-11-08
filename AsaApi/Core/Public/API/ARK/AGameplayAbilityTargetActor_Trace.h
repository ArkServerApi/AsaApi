#pragma once
#include "BulkForward.h"
#include "AGameplayAbilityTargetActor.h"

struct AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	AGameplayAbilityTargetActor_Trace() = delete;
	~AGameplayAbilityTargetActor_Trace() = delete;
	AGameplayAbilityTargetActor_Trace(const AGameplayAbilityTargetActor_Trace&) = delete;
	AGameplayAbilityTargetActor_Trace& operator=(const AGameplayAbilityTargetActor_Trace&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_Trace"); }

	float& MaxRangeField() { return *GetNativePointerField<float*>(this, "AGameplayAbilityTargetActor_Trace.MaxRange"); }
	FCollisionProfileName& TraceProfileField() { return *GetNativePointerField<FCollisionProfileName*>(this, "AGameplayAbilityTargetActor_Trace.TraceProfile"); }
	bool& bTraceAffectsAimPitchField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityTargetActor_Trace.bTraceAffectsAimPitch"); }
	TWeakObjectPtr<AGameplayAbilityWorldReticle, FWeakObjectPtr>& ReticleActorField() { return *GetNativePointerField<TWeakObjectPtr<AGameplayAbilityWorldReticle, FWeakObjectPtr>*>(this, "AGameplayAbilityTargetActor_Trace.ReticleActor"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameplayAbilityTargetActor_Trace.Tick(float)", DeltaSeconds); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayAbilityTargetActor_Trace.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_Trace"); }
	void StartTargeting(UGameplayAbility* InAbility) { NativeCall<void, UGameplayAbility*>(this, "AGameplayAbilityTargetActor_Trace.StartTargeting(UGameplayAbility*)", InAbility); }
	void ConfirmTargetingAndContinue() { NativeCall<void>(this, "AGameplayAbilityTargetActor_Trace.ConfirmTargetingAndContinue()"); }
};
