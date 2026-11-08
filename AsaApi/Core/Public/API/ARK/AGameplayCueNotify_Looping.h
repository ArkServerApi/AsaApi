#pragma once
#include "BulkForward.h"
#include "AGameplayCueNotify_Actor.h"

struct AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
public:
	AGameplayCueNotify_Looping() = delete;
	~AGameplayCueNotify_Looping() = delete;
	AGameplayCueNotify_Looping(const AGameplayCueNotify_Looping&) = delete;
	AGameplayCueNotify_Looping& operator=(const AGameplayCueNotify_Looping&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayCueNotify_Looping"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayCueNotify_Looping"); }

	FGameplayCueNotify_SpawnCondition& DefaultSpawnConditionField() { return *GetNativePointerField<FGameplayCueNotify_SpawnCondition*>(this, "AGameplayCueNotify_Looping.DefaultSpawnCondition"); }
	FGameplayCueNotify_PlacementInfo& DefaultPlacementInfoField() { return *GetNativePointerField<FGameplayCueNotify_PlacementInfo*>(this, "AGameplayCueNotify_Looping.DefaultPlacementInfo"); }
	FGameplayCueNotify_BurstEffects& ApplicationEffectsField() { return *GetNativePointerField<FGameplayCueNotify_BurstEffects*>(this, "AGameplayCueNotify_Looping.ApplicationEffects"); }
	FGameplayCueNotify_SpawnResult& ApplicationSpawnResultsField() { return *GetNativePointerField<FGameplayCueNotify_SpawnResult*>(this, "AGameplayCueNotify_Looping.ApplicationSpawnResults"); }
	FGameplayCueNotify_LoopingEffects& LoopingEffectsField() { return *GetNativePointerField<FGameplayCueNotify_LoopingEffects*>(this, "AGameplayCueNotify_Looping.LoopingEffects"); }
	FGameplayCueNotify_SpawnResult& LoopingSpawnResultsField() { return *GetNativePointerField<FGameplayCueNotify_SpawnResult*>(this, "AGameplayCueNotify_Looping.LoopingSpawnResults"); }
	FGameplayCueNotify_BurstEffects& RecurringEffectsField() { return *GetNativePointerField<FGameplayCueNotify_BurstEffects*>(this, "AGameplayCueNotify_Looping.RecurringEffects"); }
	FGameplayCueNotify_SpawnResult& RecurringSpawnResultsField() { return *GetNativePointerField<FGameplayCueNotify_SpawnResult*>(this, "AGameplayCueNotify_Looping.RecurringSpawnResults"); }
	FGameplayCueNotify_BurstEffects& RemovalEffectsField() { return *GetNativePointerField<FGameplayCueNotify_BurstEffects*>(this, "AGameplayCueNotify_Looping.RemovalEffects"); }
	FGameplayCueNotify_SpawnResult& RemovalSpawnResultsField() { return *GetNativePointerField<FGameplayCueNotify_SpawnResult*>(this, "AGameplayCueNotify_Looping.RemovalSpawnResults"); }
	bool& bLoopingEffectsRemovedField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Looping.bLoopingEffectsRemoved"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayCueNotify_Looping.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool OnExecute_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Looping.OnExecute_Implementation(AActor*,FGameplayCueParameters&)", Target, Parameters); }
	bool OnActive_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Looping.OnActive_Implementation(AActor*,FGameplayCueParameters&)", Target, Parameters); }
	bool Recycle() { return NativeCall<bool>(this, "AGameplayCueNotify_Looping.Recycle()"); }
	bool WhileActive_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Looping.WhileActive_Implementation(AActor*,FGameplayCueParameters&)", Target, Parameters); }
	bool OnRemove_Implementation(AActor* Target, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Looping.OnRemove_Implementation(AActor*,FGameplayCueParameters&)", Target, Parameters); }
};
