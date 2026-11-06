#pragma once
#include "BulkForward.h"
#include "AGameplayCueNotify_Actor.h"

struct AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{
public:
	AGameplayCueNotify_BurstLatent() = delete;
	~AGameplayCueNotify_BurstLatent() = delete;
	AGameplayCueNotify_BurstLatent(const AGameplayCueNotify_BurstLatent&) = delete;
	AGameplayCueNotify_BurstLatent& operator=(const AGameplayCueNotify_BurstLatent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayCueNotify_BurstLatent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayCueNotify_BurstLatent"); }

	FGameplayCueNotify_SpawnCondition& DefaultSpawnConditionField() { return *GetNativePointerField<FGameplayCueNotify_SpawnCondition*>(this, "AGameplayCueNotify_BurstLatent.DefaultSpawnCondition"); }
	FGameplayCueNotify_PlacementInfo& DefaultPlacementInfoField() { return *GetNativePointerField<FGameplayCueNotify_PlacementInfo*>(this, "AGameplayCueNotify_BurstLatent.DefaultPlacementInfo"); }
	FGameplayCueNotify_BurstEffects& BurstEffectsField() { return *GetNativePointerField<FGameplayCueNotify_BurstEffects*>(this, "AGameplayCueNotify_BurstLatent.BurstEffects"); }
	FGameplayCueNotify_SpawnResult& BurstSpawnResultsField() { return *GetNativePointerField<FGameplayCueNotify_SpawnResult*>(this, "AGameplayCueNotify_BurstLatent.BurstSpawnResults"); }
	bool Recycle() { return NativeCall<bool>(this, "AGameplayCueNotify_BurstLatent.Recycle()"); }
	bool OnExecute_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_BurstLatent.OnExecute_Implementation(AActor*,FGameplayCueParameters&)", Target, Parameters); }
};
