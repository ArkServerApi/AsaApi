#pragma once
#include "BulkForward.h"
#include "APhysicsVolume.h"

struct APainCausingVolume : public APhysicsVolume
{
public:
	APainCausingVolume() = delete;
	~APainCausingVolume() = delete;
	APainCausingVolume(const APainCausingVolume&) = delete;
	APainCausingVolume& operator=(const APainCausingVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APainCausingVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APainCausingVolume"); }

	float& DamagePerSecField() { return *GetNativePointerField<float*>(this, "APainCausingVolume.DamagePerSec"); }
	float& PainIntervalField() { return *GetNativePointerField<float*>(this, "APainCausingVolume.PainInterval"); }
	FName& IgnoreActorsWithTagField() { return *GetNativePointerField<FName*>(this, "APainCausingVolume.IgnoreActorsWithTag"); }
	FTimerHandle& TimerHandle_PainTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "APainCausingVolume.TimerHandle_PainTimer"); }
	BitFieldValue<bool, unsigned __int32> bPainCausing() { return { this, "APainCausingVolume.bPainCausing"}; }
	BitFieldValue<bool, unsigned __int32> bEntryPain() { return { this, "APainCausingVolume.bEntryPain"}; }
	BitFieldValue<bool, unsigned __int32> bPainWalkingOnly() { return { this, "APainCausingVolume.bPainWalkingOnly"}; }
	BitFieldValue<bool, unsigned __int32> bTriggerUndermeshDetection() { return { this, "APainCausingVolume.bTriggerUndermeshDetection"}; }
	BitFieldValue<bool, unsigned __int32> bContainsMultipleOverlapComponents() { return { this, "APainCausingVolume.bContainsMultipleOverlapComponents"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreWildDinos() { return { this, "APainCausingVolume.bIgnoreWildDinos"}; }
	BitFieldValue<bool, unsigned __int32> BACKUP_bPainCausing() { return { this, "APainCausingVolume.BACKUP_bPainCausing"}; }
	void PainTimer() { NativeCall<void>(this, "APainCausingVolume.PainTimer()"); }
	void PreLoadSaveGame() { NativeCall<void>(this, "APainCausingVolume.PreLoadSaveGame()"); }
	void ActorEnteredVolume(AActor* Other) { NativeCall<void, AActor*>(this, "APainCausingVolume.ActorEnteredVolume(AActor*)", Other); }
	void PostInitializeComponents() { NativeCall<void>(this, "APainCausingVolume.PostInitializeComponents()"); }
	bool CausePainTo(AActor* Other) { return NativeCall<bool, AActor*>(this, "APainCausingVolume.CausePainTo(AActor*)", Other); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APainCausingVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Reset() { NativeCall<void>(this, "APainCausingVolume.Reset()"); }
};
