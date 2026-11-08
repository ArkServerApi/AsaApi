#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureItemContainer.h"

struct AMissionDispatcher : APrimalStructureItemContainer
{
public:
	AMissionDispatcher() = delete;
	~AMissionDispatcher() = delete;
	AMissionDispatcher(const AMissionDispatcher&) = delete;
	AMissionDispatcher& operator=(const AMissionDispatcher&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMissionDispatcher"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMissionDispatcher"); }

	int& AutoStartMissionTypesIndexField() { return *GetNativePointerField<int*>(this, "AMissionDispatcher.AutoStartMissionTypesIndex"); }
	float& MaxDistanceAllowToStartMissionField() { return *GetNativePointerField<float*>(this, "AMissionDispatcher.MaxDistanceAllowToStartMission"); }

	void PostInitializeComponents() { NativeCall<void>(this, "AMissionDispatcher.PostInitializeComponents()"); }
	void MultiActivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.MultiActivateMissionActors()"); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "AMissionDispatcher.GetObject()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AMissionDispatcher.Tick(float)", DeltaSeconds); }
	void MultiDeactivateMissionActors_Implementation() { NativeCall<void>(this, "AMissionDispatcher.MultiDeactivateMissionActors_Implementation()"); }
	void MultiSetParticleSystemActive(bool bIsActive) { NativeCall<void, bool>(this, "AMissionDispatcher.MultiSetParticleSystemActive(bool)", bIsActive); }
	void BPOnRunningMissionDeactivated(AMissionType* Mission) { NativeCall<void, AMissionType*>(this, "AMissionDispatcher.BPOnRunningMissionDeactivated(AMissionType*)", Mission); }
	void ActivateMissionActors(bool bIsActive) { NativeCall<void, bool>(this, "AMissionDispatcher.ActivateMissionActors(bool)", bIsActive); }
	void GenerateFallbackSeeds() { NativeCall<void>(this, "AMissionDispatcher.GenerateFallbackSeeds()"); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "AMissionDispatcher.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void MultiSetParticleSystemActive_Implementation(bool bIsActive) { NativeCall<void, bool>(this, "AMissionDispatcher.MultiSetParticleSystemActive_Implementation(bool)", bIsActive); }
	void Destroyed() { NativeCall<void>(this, "AMissionDispatcher.Destroyed()"); }
	void BPActivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.BPActivateMissionActors()"); }
	void MultiActivateMissionActors_Implementation() { NativeCall<void>(this, "AMissionDispatcher.MultiActivateMissionActors_Implementation()"); }
	void BPOnMissionStarted(AMissionType* NewMission, AShooterCharacter* StartingCharacter) { NativeCall<void, AMissionType*, AShooterCharacter*>(this, "AMissionDispatcher.BPOnMissionStarted(AMissionType*,AShooterCharacter*)", NewMission, StartingCharacter); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "AMissionDispatcher.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void OnRunningMissionDeactivated(AMissionType* Mission) { NativeCall<void, AMissionType*>(this, "AMissionDispatcher.OnRunningMissionDeactivated(AMissionType*)", Mission); }
	void BPDeactivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.BPDeactivateMissionActors()"); }
	void MultiDeactivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.MultiDeactivateMissionActors()"); }
	void BeginPlay() { NativeCall<void>(this, "AMissionDispatcher.BeginPlay()"); }

	BitFieldValue<bool, unsigned __int32> bAllowConcurrentMissions() { return { this, "AMissionDispatcher.bAllowConcurrentMissions"}; }
	BitFieldValue<bool, unsigned __int32> bAllowJoinMissionInProgress() { return { this, "AMissionDispatcher.bAllowJoinMissionInProgress"}; }
	BitFieldValue<bool, unsigned __int32> bForceStartMission() { return { this, "AMissionDispatcher.bForceStartMission"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanSpawnMission() { return { this, "AMissionDispatcher.bUseBPCanSpawnMission"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetMissionStartLocation() { return { this, "AMissionDispatcher.bUseBPGetMissionStartLocation"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnMissionStarted() { return { this, "AMissionDispatcher.bUseBPOnMissionStarted"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPActivateMissionActors() { return { this, "AMissionDispatcher.bUseBPActivateMissionActors"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPDeactivateMissionActors() { return { this, "AMissionDispatcher.bUseBPDeactivateMissionActors"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnRunningMissionDeactivated() { return { this, "AMissionDispatcher.bUseBPOnRunningMissionDeactivated"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideMultiUseMissionList() { return { this, "AMissionDispatcher.bUseBPOverrideMultiUseMissionList"}; }
	BitFieldValue<bool, unsigned __int32> bParticleSystemActiveOnlyWhenMissionNotRunning() { return { this, "AMissionDispatcher.bParticleSystemActiveOnlyWhenMissionNotRunning"}; }
	BitFieldValue<bool, unsigned __int32> bUseMissionMetaTags() { return { this, "AMissionDispatcher.bUseMissionMetaTags"}; }

	UStaticMeshComponent*& StaticMeshComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AMissionDispatcher.StaticMeshComponent"); }
	UParticleSystemComponent*& ParticleSystemComponentField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "AMissionDispatcher.ParticleSystemComponent"); }
	UPrimalInventoryComponent*& TheInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "AMissionDispatcher.TheInventoryComponent"); }
	AMissionType*& RunningMissionField() { return *GetNativePointerField<AMissionType**>(this, "AMissionDispatcher.RunningMission"); }
	AMissionType*& MultiUseSelectedMissionCDOField() { return *GetNativePointerField<AMissionType**>(this, "AMissionDispatcher.MultiUseSelectedMissionCDO"); }

	TArray<AActor*, TSizedDefaultAllocator<32> >& MissionActorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AMissionDispatcher.MissionActors"); }
	TEnumAsByte<EMissionDispatcherTriggerMode::Type>& MissionDispatcherTriggerModeField() { return *GetNativePointerField<TEnumAsByte<EMissionDispatcherTriggerMode::Type>*>(this, "AMissionDispatcher.MissionDispatcherTriggerMode"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AdditionalMissionTriggerKeysField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AMissionDispatcher.AdditionalMissionTriggerKeys"); }
	void DrawMultiUseTooltip(AShooterHUD* HUD, const FMultiUseEntry& selectedMultiUseEntry) { NativeCall<void, AShooterHUD*, const FMultiUseEntry&>(this, "AMissionDispatcher.DrawMultiUseTooltip(AShooterHUD*,FMultiUseEntry&)", HUD, selectedMultiUseEntry); }
	bool GetMultiUseCenterText(APlayerController* ForPC, int UseIndex, FString& OutCenterText, FLinearColor& OutCenterTextColor) { return NativeCall<bool, APlayerController*, int, FString&, FLinearColor&>(this, "AMissionDispatcher.GetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)", ForPC, UseIndex, OutCenterText, OutCenterTextColor); }
	FString* GetMissionDurationString(FString* result) { return NativeCall<FString*, FString*>(this, "AMissionDispatcher.GetMissionDurationString()", result); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMissionDispatcher.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AMissionDispatcher.Serialize(FArchive&)", Ar); }
};
