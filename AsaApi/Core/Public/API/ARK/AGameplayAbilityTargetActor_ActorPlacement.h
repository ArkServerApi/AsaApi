#pragma once
#include "BulkForward.h"
#include "AGameplayAbilityTargetActor_GroundTrace.h"

struct AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	AGameplayAbilityTargetActor_ActorPlacement() = delete;
	~AGameplayAbilityTargetActor_ActorPlacement() = delete;
	AGameplayAbilityTargetActor_ActorPlacement(const AGameplayAbilityTargetActor_ActorPlacement&) = delete;
	AGameplayAbilityTargetActor_ActorPlacement& operator=(const AGameplayAbilityTargetActor_ActorPlacement&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_ActorPlacement"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_ActorPlacement"); }

	TWeakObjectPtr<AGameplayAbilityWorldReticle_ActorVisualization, FWeakObjectPtr>& ActorVisualizationReticleField() { return *GetNativePointerField<TWeakObjectPtr<AGameplayAbilityWorldReticle_ActorVisualization, FWeakObjectPtr>*>(this, "AGameplayAbilityTargetActor_ActorPlacement.ActorVisualizationReticle"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayAbilityTargetActor_ActorPlacement.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void StartTargeting(UGameplayAbility* InAbility) { NativeCall<void, UGameplayAbility*>(this, "AGameplayAbilityTargetActor_ActorPlacement.StartTargeting(UGameplayAbility*)", InAbility); }
};
