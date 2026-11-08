#pragma once
#include "BulkForward.h"
#include "AGameplayAbilityTargetActor_Trace.h"

struct AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	AGameplayAbilityTargetActor_GroundTrace() = delete;
	~AGameplayAbilityTargetActor_GroundTrace() = delete;
	AGameplayAbilityTargetActor_GroundTrace(const AGameplayAbilityTargetActor_GroundTrace&) = delete;
	AGameplayAbilityTargetActor_GroundTrace& operator=(const AGameplayAbilityTargetActor_GroundTrace&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_GroundTrace"); }

	float& CollisionRadiusField() { return *GetNativePointerField<float*>(this, "AGameplayAbilityTargetActor_GroundTrace.CollisionRadius"); }
	float& CollisionHeightField() { return *GetNativePointerField<float*>(this, "AGameplayAbilityTargetActor_GroundTrace.CollisionHeight"); }
	FCollisionShape& CollisionShapeField() { return *GetNativePointerField<FCollisionShape*>(this, "AGameplayAbilityTargetActor_GroundTrace.CollisionShape"); }
	float& CollisionHeightOffsetField() { return *GetNativePointerField<float*>(this, "AGameplayAbilityTargetActor_GroundTrace.CollisionHeightOffset"); }
	bool& bLastTraceWasGoodField() { return *GetNativePointerField<bool*>(this, "AGameplayAbilityTargetActor_GroundTrace.bLastTraceWasGood"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_GroundTrace"); }
	bool IsConfirmTargetingAllowed() { return NativeCall<bool>(this, "AGameplayAbilityTargetActor_GroundTrace.IsConfirmTargetingAllowed()"); }
	void StartTargeting(UGameplayAbility* InAbility) { NativeCall<void, UGameplayAbility*>(this, "AGameplayAbilityTargetActor_GroundTrace.StartTargeting(UGameplayAbility*)", InAbility); }
};
