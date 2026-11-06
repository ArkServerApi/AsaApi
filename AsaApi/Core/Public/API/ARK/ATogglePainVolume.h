#pragma once
#include "BulkForward.h"


struct ATogglePainVolume : AVolume
{
	// Fields

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>& OverlappedActorsField();
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& ActorClassesToExcludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.ActorClassesToExclude"); }
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& ActorClassesToIncludeField() { return *GetNativePointerField<TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.ActorClassesToInclude"); }
	//TArray<AEmitter*, TSizedDefaultAllocator<32> >& ToggleEmittersField() { return *GetNativePointerField<TArray<AEmitter*, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.ToggleEmitters"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& StructureDamageOverlapPointsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.StructureDamageOverlapPoints"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& SavedStructureDamageOverlapPointsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.SavedStructureDamageOverlapPoints"); }
	float& StructureDamageOverlapRadiusField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.StructureDamageOverlapRadius"); }
	FTimerHandle& PainTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ATogglePainVolume.PainTimerHandle"); }
	float& DamagePerSecField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.DamagePerSec"); }
	float& StructureDamagePerSecField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.StructureDamagePerSec"); }
	TSubclassOf<UDamageType>& DamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "ATogglePainVolume.DamageType"); }
	TSubclassOf<UDamageType>& StructureDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "ATogglePainVolume.StructureDamageType"); }
	float& PainIntervalField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.PainInterval"); }
	AController*& DamageInstigatorField() { return *GetNativePointerField<AController**>(this, "ATogglePainVolume.DamageInstigator"); }
	//FTogglePainVolumeEvent& BeginOverlapEventField() { return *GetNativePointerField<FTogglePainVolumeEvent*>(this, "ATogglePainVolume.BeginOverlapEvent"); }
	//FTogglePainVolumeEvent& EndOverlapEventField() { return *GetNativePointerField<FTogglePainVolumeEvent*>(this, "ATogglePainVolume.EndOverlapEvent"); }
	//FTogglePainVolumeEvent& CausedPainEventField() { return *GetNativePointerField<FTogglePainVolumeEvent*>(this, "ATogglePainVolume.CausedPainEvent"); }
	float& DelayTogglePainActiveField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.DelayTogglePainActive"); }
	FTimerHandle& DelayedActiveHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ATogglePainVolume.DelayedActiveHandle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPainCausing() { return { this, "ATogglePainVolume.bPainCausing" }; }
	BitFieldValue<bool, unsigned __int32> bEntryPain() { return { this, "ATogglePainVolume.bEntryPain" }; }
	BitFieldValue<bool, unsigned __int32> bPainWalkingOnly() { return { this, "ATogglePainVolume.bPainWalkingOnly" }; }
	BitFieldValue<bool, unsigned __int32> bUseBeginOverlapEvent() { return { this, "ATogglePainVolume.bUseBeginOverlapEvent" }; }
	BitFieldValue<bool, unsigned __int32> bUseEndOverlapEvent() { return { this, "ATogglePainVolume.bUseEndOverlapEvent" }; }
	BitFieldValue<bool, unsigned __int32> bUseCausedPainEvent() { return { this, "ATogglePainVolume.bUseCausedPainEvent" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreWildDinos() { return { this, "ATogglePainVolume.bIgnoreWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bTriggerUndermeshDetection() { return { this, "ATogglePainVolume.bTriggerUndermeshDetection" }; }
	BitFieldValue<bool, unsigned __int32> bIsTimerActive() { return { this, "ATogglePainVolume.bIsTimerActive" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATogglePainVolume"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesATogglePainVolume();
	void OnBeginOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ATogglePainVolume.OnBeginOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void SetPainVolumeEnabled(bool bEnable) { NativeCall<void, bool>(this, "ATogglePainVolume.SetPainVolumeEnabled(bool)", bEnable); }
	void DelayedActive() { NativeCall<void>(this, "ATogglePainVolume.DelayedActive()"); }
	void BeginPlay() { NativeCall<void>(this, "ATogglePainVolume.BeginPlay()"); }
	void PreLoadSaveGame() { NativeCall<void>(this, "ATogglePainVolume.PreLoadSaveGame()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ATogglePainVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void GetOverlappedActors(TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.GetOverlappedActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", OutActors); }
	void PainTimer() { NativeCall<void>(this, "ATogglePainVolume.PainTimer()"); }
	void CausePainTo(AActor* Other) { NativeCall<void, AActor*>(this, "ATogglePainVolume.CausePainTo(AActor*)", Other); }
	void PreSave(FObjectPreSaveContext* ObjectSaveContext) { NativeCall<void, FObjectPreSaveContext*>(this, "ATogglePainVolume.PreSave(FObjectPreSaveContext)", ObjectSaveContext); }
	bool CheckForStructures(bool bStartPainTimer, TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>* OutStructures) { return NativeCall<bool, bool, TSet<APrimalStructure*, DefaultKeyFuncs<APrimalStructure*, 0>, FDefaultSetAllocator>*>(this, "ATogglePainVolume.CheckForStructures(bool,TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>*)", bStartPainTimer, OutStructures); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ATogglePainVolume"); }

	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "ATogglePainVolume.bEnabled"); }
	TArray<AEmitter*, TSizedDefaultAllocator<32> >& ToggleEmittersField() { return *GetNativePointerField<TArray<AEmitter*, TSizedDefaultAllocator<32> >*>(this, "ATogglePainVolume.ToggleEmitters"); }
	FName& IgnoreActorsWithTagField() { return *GetNativePointerField<FName*>(this, "ATogglePainVolume.IgnoreActorsWithTag"); }
	FTogglePainVolumeEvent& BeginOverlapEventField() { return *GetNativePointerField<FTogglePainVolumeEvent*>(this, "ATogglePainVolume.BeginOverlapEvent"); }
	FTogglePainVolumeEvent& EndOverlapEventField() { return *GetNativePointerField<FTogglePainVolumeEvent*>(this, "ATogglePainVolume.EndOverlapEvent"); }
	FTogglePainVolumeEvent& CausedPainEventField() { return *GetNativePointerField<FTogglePainVolumeEvent*>(this, "ATogglePainVolume.CausedPainEvent"); }
	void OnEndOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ATogglePainVolume.OnEndOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	int GetOverlappedActorNum() { return NativeCall<int>(this, "ATogglePainVolume.GetOverlappedActorNum()"); }
	bool ShouldSendEndOverlapNotifiesAlways() { return NativeCall<bool>(this, "ATogglePainVolume.ShouldSendEndOverlapNotifiesAlways()"); }
	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ATogglePainVolume.OnInterpToggle(bool)", bEnable); }
};