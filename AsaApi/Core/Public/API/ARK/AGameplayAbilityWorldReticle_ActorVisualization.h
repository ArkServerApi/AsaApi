#pragma once
#include "BulkForward.h"
#include "AGameplayAbilityWorldReticle.h"

struct AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	AGameplayAbilityWorldReticle_ActorVisualization() = delete;
	~AGameplayAbilityWorldReticle_ActorVisualization() = delete;
	AGameplayAbilityWorldReticle_ActorVisualization(const AGameplayAbilityWorldReticle_ActorVisualization&) = delete;
	AGameplayAbilityWorldReticle_ActorVisualization& operator=(const AGameplayAbilityWorldReticle_ActorVisualization&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityWorldReticle_ActorVisualization"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityWorldReticle_ActorVisualization"); }

	void InitializeReticleVisualizationInformation(AGameplayAbilityTargetActor* InTargetingActor, AActor* VisualizationActor, UMaterialInterface* VisualizationMaterial) { NativeCall<void, AGameplayAbilityTargetActor*, AActor*, UMaterialInterface*>(this, "AGameplayAbilityWorldReticle_ActorVisualization.InitializeReticleVisualizationInformation(AGameplayAbilityTargetActor*,AActor*,UMaterialInterface*)", InTargetingActor, VisualizationActor, VisualizationMaterial); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayAbilityWorldReticle_ActorVisualization.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
