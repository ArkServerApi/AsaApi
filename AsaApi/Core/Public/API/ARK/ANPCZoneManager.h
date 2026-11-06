#pragma once
#include "BulkForward.h"


struct ANPCZoneManager : AInfo
{
	TArray<ANPCZoneVolume*, TSizedDefaultAllocator<32> > LinkedZoneVolumes;
	TArray<FLinkedZoneSpawnVolumeEntry, TSizedDefaultAllocator<32> > LinkedZoneSpawnVolumeEntries;
	TArray<AActor*, TSizedDefaultAllocator<32> > DefaultZoneSpawnVolumeFloors;
	TArray<AActor*, TSizedDefaultAllocator<32> > DefaultZoneSpawnVolumeIgnoreCeilings;
	TArray<FName, TSizedDefaultAllocator<32> > DefaultZoneSpawnVolumeFloorTags;
	TArray<FName, TSizedDefaultAllocator<32> > DefaultZoneSpawnVolumeIgnoreCeilingTags;
	TSoftClassPtr<UNPCSpawnEntriesContainer> NPCSpawnEntriesContainerObject;
	bool bEnabled;
	bool bHasCompletedSetup;
	bool bForceInEditor;
	bool bNeverSpawnInWater;
	bool bOnlySpawnInWater;
	TArray<FName, TSizedDefaultAllocator<32> > OnlyAllowSpawningOnActorTags;
	bool bAllowExtentTest;
	int MinDesiredNumberOfNPC;
	int SP_MinDesiredNumberOfNPC;
	int MaxNumberOfNPC;
	float DesiredNumberOfNPCMultiplier;
	float TheSpawnPointMinimumFloorNormal;
	float TheNewNewEditorNumberOfNPCMultiplier;
	float KillOffOverweightNPCStasisTime;
	float TheMaximumWorldTimeForFullIncrease;
	float TheMaxMsToSpendSpawningInAFrame;
	long double StartedSpawningThisFrame;
	float TheMinimumPlayerDistanceFromSpawnPoint;
	float TheIncreaseNPCInterval;
	float SP_TheIncreaseNPCInterval;
	float TheIncreaseNPCIntervalMax;
	float TheDecreaseNPCInterval;
	float NPCAIRangeMultiplier;
	float NPCAIAggroNotifyNeighborsRangeMultiplier;
	bool bNPCDontWander;
	bool bNPCWildIgnoreWild;
	bool bNPCNoKillXP;
	bool bNPCPreventSaving;
	bool bForceUntameable;
	bool bForcePreventHibernation;
	bool bUsesManualSpawning;
	bool bDedicatedServerForceManualSpawningOnLayerLoadedDinos;
	bool bIgnoreVolumeEcompassingCheck;
	bool bSpawnAllNPCEntries;
	bool bOnlyUseInSingleplayer;
	bool bOnlyUseInDedicatedServer;
	float NPCWanderRadiusMultiplier;
	int MaxNumberSpawnZoneRandomPointChecks;
	int TheNPCFullIncreaseMaximumIterations;
	float TheMinimumTamedDinoDistanceFromSpawnPoint;
	float TheMinimumStructureDistanceFromSpawnPoint;
	float NPCLerpToMaxRandomBaseLevel;
	float ManualSpawningNPCLerpToMaxRandomBaseLevel;
	int MaximumNumberNearbyCoreStructures;
	int AbsoluteMaximumNumberNearbyCoreStructures;
	bool bAutoKillUseGlobalStasisArray;
	bool bUseSpawnBlockingCheck;
	bool bUseSpawnPawnBlockingCheck;
	bool bTraceForSpawnPoints;
	bool bUseSpawnOverlapCheck;
	bool bSpawnRequiresTraceDownThroughCeiling;
	float SpawnPointRequiresTraceUpToCeilingDistance;
	ANPCZoneVolume* HardLimitWildDinosToVolume;
	bool bTraceForSpawnAgainstWater;
	bool bNPCForcePreventExitingWater;
	bool bIsFirstStartup;
	bool bUseSpawnPointOverrideRotation;
	AVolume* NPCLimitTargetsToVolume;
	FName LimitWildDinoToVolumeTag;
	float NPCLevelMultiplier;
	int ForceOverrideNPCBaseLevel;
	float IncreaseNPCIntervalMultiplier;
	bool bDirectlyLinkDinoCount;
	bool bDidZoneSpawnVolumeSetup;
	TArray<FNPCSpawnEntry, TSizedDefaultAllocator<32> > NPCSpawnEntries;
	TArray<FNPCSpawnLimit, TSizedDefaultAllocator<32> > NPCSpawnLimits;
	int UseDesiredNumberOfNPC;
	long double FirstUpdateTime;
	int NumNPCSpawned;
	int NumSpawnFailures;
	long double LastIncreaseNPCTime;
	long double LastDecreaseNPCTime;
	float DirectLinkDinoCount;
	bool bIsCaveManager;
	long double LoadedAtTime;
	bool bForceRespawnDinos;
	bool bTriedFullIncrease;
	bool bSpawnsWaterDinos;
	bool bSpawnsAmphibiousDinos;
	bool bPrintedFailureToSpawnMessage;
	float TheNextIncreaseNPCInterval;
	float CloseStructureDistanceFromSpawnPoint;
	TArray<AActor*, TSizedDefaultAllocator<32> > SpawnPointOverrides;
	TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> > DirectLinkedDinos;
	FName NonDedicatedFreezeWildDinoPhysicsIfLayerUnloaded;
	FName SubLevelWaterCheckUseTagOverride;
	bool bUseHighestPriorityPhysicsWaterVolume;
	bool bForcedInNoDinos;
	bool bIgnoreSingleplayerSpawnRangeCheck;
	float MinimumManualSpawnInterval;
	long double LastManuallySpawnedTime;
	bool bIgnoreNPCRandomClassReplacements;
	bool bAllowSpawnPointOverridesNonDedicatedLevelUnloadedFreezing;
	unsigned __int32 bUseBPPreventCheckIncreaseNPC : 1;
	unsigned __int32 bUseBPNotifyNPCSpawned : 1;
	int TheNPCDynamicIncreaseMaximumIterations;
	TArray<float, TSizedDefaultAllocator<32> > WeightedChancesToSpawnWildChildrenOnCreatureSpawnMultipliers;
	bool bSkipSpawnFrameCheck;
	long double LastFullUpdateTime;
	unsigned __int8 bIsPatrolManager : 1;
	int SaveForceResetPatrolsVersion;
	int LoadForceResetPatrolsVersion;
	unsigned __int8 bForceResetPatrols : 1;
	int SpawningPatrolGroupID;

	TSoftClassPtr<UNPCSpawnEntriesContainer>& NPCSpawnEntriesContainerObjectField() { return *GetNativePointerField<TSoftClassPtr<UNPCSpawnEntriesContainer>*>(this, "ANPCZoneManager.NPCSpawnEntriesContainerObject"); }
	TArray<FNPCSpawnEntry, TSizedDefaultAllocator<32> >& NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FNPCSpawnEntry, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.NPCSpawnEntries"); }
	TArray<FNPCSpawnLimit, TSizedDefaultAllocator<32> >& NPCSpawnLimitsField() { return *GetNativePointerField<TArray<FNPCSpawnLimit, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.NPCSpawnLimits"); }

	TSet<TSoftClassPtr<APrimalDinoCharacter>, DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>, 0>, FDefaultSetAllocator>* GetSpawnableNPCClasses(TSet<TSoftClassPtr<APrimalDinoCharacter>, DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>, 0>, FDefaultSetAllocator>* result) { return NativeCall<TSet<TSoftClassPtr<APrimalDinoCharacter>, DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>, 0>, FDefaultSetAllocator>*, TSet<TSoftClassPtr<APrimalDinoCharacter>, DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>, 0>, FDefaultSetAllocator>*>(this, "ANPCZoneManager.GetSpawnableNPCClasses()", result); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ANPCZoneManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANPCZoneManager"); }

	TArray<ANPCZoneVolume*, TSizedDefaultAllocator<32> >& LinkedZoneVolumesField() { return *GetNativePointerField<TArray<ANPCZoneVolume*, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.LinkedZoneVolumes"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& DefaultZoneSpawnVolumeFloorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.DefaultZoneSpawnVolumeFloors"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& DefaultZoneSpawnVolumeIgnoreCeilingsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.DefaultZoneSpawnVolumeIgnoreCeilings"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DefaultZoneSpawnVolumeFloorTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.DefaultZoneSpawnVolumeFloorTags"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DefaultZoneSpawnVolumeIgnoreCeilingTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.DefaultZoneSpawnVolumeIgnoreCeilingTags"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bEnabled"); }
	bool& bHasCompletedSetupField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bHasCompletedSetup"); }
	bool& bForceInEditorField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForceInEditor"); }
	bool& bNeverSpawnInWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNeverSpawnInWater"); }
	bool& bOnlySpawnInWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlySpawnInWater"); }
	TArray<FName, TSizedDefaultAllocator<32> >& OnlyAllowSpawningOnActorTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.OnlyAllowSpawningOnActorTags"); }
	bool& bAllowExtentTestField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bAllowExtentTest"); }
	int& MinDesiredNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MinDesiredNumberOfNPC"); }
	int& SP_MinDesiredNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.SP_MinDesiredNumberOfNPC"); }
	int& MaxNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MaxNumberOfNPC"); }
	float& DesiredNumberOfNPCMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.DesiredNumberOfNPCMultiplier"); }
	float& TheSpawnPointMinimumFloorNormalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheSpawnPointMinimumFloorNormal"); }
	float& TheNewNewEditorNumberOfNPCMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheNewNewEditorNumberOfNPCMultiplier"); }
	float& KillOffOverweightNPCStasisTimeField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.KillOffOverweightNPCStasisTime"); }
	float& TheMaximumWorldTimeForFullIncreaseField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMaximumWorldTimeForFullIncrease"); }
	double& StartedSpawningThisFrameField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.StartedSpawningThisFrame"); }
	float& TheMinimumPlayerDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMinimumPlayerDistanceFromSpawnPoint"); }
	float& TheIncreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheIncreaseNPCInterval"); }
	float& SP_TheIncreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.SP_TheIncreaseNPCInterval"); }
	float& TheIncreaseNPCIntervalMaxField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheIncreaseNPCIntervalMax"); }
	float& TheDecreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheDecreaseNPCInterval"); }
	float& NPCAIRangeMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCAIRangeMultiplier"); }
	float& NPCAIAggroNotifyNeighborsRangeMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCAIAggroNotifyNeighborsRangeMultiplier"); }
	bool& bNPCDontWanderField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCDontWander"); }
	bool& bNPCWildIgnoreWildField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCWildIgnoreWild"); }
	bool& bNPCNoKillXPField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCNoKillXP"); }
	bool& bNPCPreventSavingField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCPreventSaving"); }
	bool& bForceUntameableField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForceUntameable"); }
	bool& bForcePreventHibernationField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForcePreventHibernation"); }
	bool& bUsesManualSpawningField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUsesManualSpawning"); }
	bool& bDedicatedServerForceManualSpawningOnLayerLoadedDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bDedicatedServerForceManualSpawningOnLayerLoadedDinos"); }
	bool& bIgnoreVolumeEcompassingCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIgnoreVolumeEcompassingCheck"); }
	bool& bSpawnAllNPCEntriesField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnAllNPCEntries"); }
	bool& bOnlyUseInSingleplayerField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlyUseInSingleplayer"); }
	bool& bOnlyUseInDedicatedServerField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlyUseInDedicatedServer"); }
	float& NPCWanderRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCWanderRadiusMultiplier"); }
	int& MaxNumberSpawnZoneRandomPointChecksField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MaxNumberSpawnZoneRandomPointChecks"); }
	int& TheNPCFullIncreaseMaximumIterationsField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.TheNPCFullIncreaseMaximumIterations"); }
	float& TheMinimumTamedDinoDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMinimumTamedDinoDistanceFromSpawnPoint"); }
	float& TheMinimumStructureDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMinimumStructureDistanceFromSpawnPoint"); }
	float& NPCLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCLerpToMaxRandomBaseLevel"); }
	float& ManualSpawningNPCLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.ManualSpawningNPCLerpToMaxRandomBaseLevel"); }
	int& MaximumNumberNearbyCoreStructuresField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MaximumNumberNearbyCoreStructures"); }
	int& AbsoluteMaximumNumberNearbyCoreStructuresField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.AbsoluteMaximumNumberNearbyCoreStructures"); }
	bool& bAutoKillUseGlobalStasisArrayField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bAutoKillUseGlobalStasisArray"); }
	bool& bUseSpawnBlockingCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUseSpawnBlockingCheck"); }
	bool& bUseSpawnPawnBlockingCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUseSpawnPawnBlockingCheck"); }
	bool& bTraceForSpawnPointsField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bTraceForSpawnPoints"); }
	bool& bUseSpawnOverlapCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUseSpawnOverlapCheck"); }
	bool& bSpawnRequiresTraceDownThroughCeilingField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnRequiresTraceDownThroughCeiling"); }
	float& SpawnPointRequiresTraceUpToCeilingDistanceField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.SpawnPointRequiresTraceUpToCeilingDistance"); }
	ANPCZoneVolume*& HardLimitWildDinosToVolumeField() { return *GetNativePointerField<ANPCZoneVolume**>(this, "ANPCZoneManager.HardLimitWildDinosToVolume"); }
	bool& bTraceForSpawnAgainstWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bTraceForSpawnAgainstWater"); }
	bool& bNPCForcePreventExitingWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCForcePreventExitingWater"); }
	bool& bIsFirstStartupField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIsFirstStartup"); }
	bool& bUseSpawnPointOverrideRotationField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUseSpawnPointOverrideRotation"); }
	AVolume*& NPCLimitTargetsToVolumeField() { return *GetNativePointerField<AVolume**>(this, "ANPCZoneManager.NPCLimitTargetsToVolume"); }
	FName& LimitWildDinoToVolumeTagField() { return *GetNativePointerField<FName*>(this, "ANPCZoneManager.LimitWildDinoToVolumeTag"); }
	float& NPCLevelMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCLevelMultiplier"); }
	int& ForceOverrideNPCBaseLevelField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.ForceOverrideNPCBaseLevel"); }
	float& IncreaseNPCIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.IncreaseNPCIntervalMultiplier"); }
	bool& bDirectlyLinkDinoCountField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bDirectlyLinkDinoCount"); }
	bool& bDidZoneSpawnVolumeSetupField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bDidZoneSpawnVolumeSetup"); }
	int& UseDesiredNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.UseDesiredNumberOfNPC"); }
	double& FirstUpdateTimeField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.FirstUpdateTime"); }
	int& NumNPCSpawnedField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.NumNPCSpawned"); }
	int& NumSpawnFailuresField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.NumSpawnFailures"); }
	double& LastIncreaseNPCTimeField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.LastIncreaseNPCTime"); }
	double& LastDecreaseNPCTimeField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.LastDecreaseNPCTime"); }
	float& DirectLinkDinoCountField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.DirectLinkDinoCount"); }
	bool& bIsCaveManagerField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIsCaveManager"); }
	double& LoadedAtTimeField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.LoadedAtTime"); }
	bool& bForceRespawnDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForceRespawnDinos"); }
	bool& bTriedFullIncreaseField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bTriedFullIncrease"); }
	bool& bSpawnsWaterDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnsWaterDinos"); }
	bool& bSpawnsAmphibiousDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnsAmphibiousDinos"); }
	bool& bPrintedFailureToSpawnMessageField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bPrintedFailureToSpawnMessage"); }
	float& TheNextIncreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheNextIncreaseNPCInterval"); }
	float& CloseStructureDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.CloseStructureDistanceFromSpawnPoint"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& SpawnPointOverridesField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.SpawnPointOverrides"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& DirectLinkedDinosField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.DirectLinkedDinos"); }
	FName& NonDedicatedFreezeWildDinoPhysicsIfLayerUnloadedField() { return *GetNativePointerField<FName*>(this, "ANPCZoneManager.NonDedicatedFreezeWildDinoPhysicsIfLayerUnloaded"); }
	FName& SubLevelWaterCheckUseTagOverrideField() { return *GetNativePointerField<FName*>(this, "ANPCZoneManager.SubLevelWaterCheckUseTagOverride"); }
	bool& bUseHighestPriorityPhysicsWaterVolumeField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUseHighestPriorityPhysicsWaterVolume"); }
	bool& bForcedInNoDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForcedInNoDinos"); }
	bool& bIgnoreSingleplayerSpawnRangeCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIgnoreSingleplayerSpawnRangeCheck"); }
	float& MinimumManualSpawnIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.MinimumManualSpawnInterval"); }
	double& LastManuallySpawnedTimeField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.LastManuallySpawnedTime"); }
	bool& bIgnoreNPCRandomClassReplacementsField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIgnoreNPCRandomClassReplacements"); }
	bool& bAllowSpawnPointOverridesNonDedicatedLevelUnloadedFreezingField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bAllowSpawnPointOverridesNonDedicatedLevelUnloadedFreezing"); }
	int& TheNPCDynamicIncreaseMaximumIterationsField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.TheNPCDynamicIncreaseMaximumIterations"); }
	TArray<float, TSizedDefaultAllocator<32> >& WeightedChancesToSpawnWildChildrenOnCreatureSpawnMultipliersField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "ANPCZoneManager.WeightedChancesToSpawnWildChildrenOnCreatureSpawnMultipliers"); }
	bool& bSkipSpawnFrameCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSkipSpawnFrameCheck"); }
	double& LastFullUpdateTimeField() { return *GetNativePointerField<double*>(this, "ANPCZoneManager.LastFullUpdateTime"); }
	int& SaveForceResetPatrolsVersionField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.SaveForceResetPatrolsVersion"); }
	int& LoadForceResetPatrolsVersionField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.LoadForceResetPatrolsVersion"); }
	int& SpawningPatrolGroupIDField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.SpawningPatrolGroupID"); }
	void LinkedNPCHibernated_Implementation(APrimalDinoCharacter* DinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.LinkedNPCHibernated_Implementation(APrimalDinoCharacter*)", DinoChar); }
	void HandleLatentPatrolSpawnCount_Implementation(int PatrolGroupID, bool bGoingIntoHibernation) { NativeCall<void, int, bool>(this, "ANPCZoneManager.HandleLatentPatrolSpawnCount_Implementation(int,bool)", PatrolGroupID, bGoingIntoHibernation); }
	bool SpawnNPCs() { return NativeCall<bool>(this, "ANPCZoneManager.SpawnNPCs()"); }
	bool ShouldUpdate() { return NativeCall<bool>(this, "ANPCZoneManager.ShouldUpdate()"); }
	void LinkedNPCAwakened(APrimalDinoCharacter* DinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.LinkedNPCAwakened(APrimalDinoCharacter*)", DinoChar); }
	void BeginPlay() { NativeCall<void>(this, "ANPCZoneManager.BeginPlay()"); }
	bool UpdateZone() { return NativeCall<bool>(this, "ANPCZoneManager.UpdateZone()"); }
	void BPNotifyNPCSpawned(APrimalDinoCharacter* SpawnedDino) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.BPNotifyNPCSpawned(APrimalDinoCharacter*)", SpawnedDino); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ANPCZoneManager.Serialize(FArchive&)", Ar); }
	bool IsValidNPCEntry(const FNPCSpawnEntry& NPCEntry) { return NativeCall<bool, const FNPCSpawnEntry&>(this, "ANPCZoneManager.IsValidNPCEntry(FNPCSpawnEntry&)", NPCEntry); }
	void CheckIncreaseNPC(bool bForceDirectlyLinkDinos) { NativeCall<void, bool>(this, "ANPCZoneManager.CheckIncreaseNPC(bool)", bForceDirectlyLinkDinos); }
	void CheckDecreaseNPC() { NativeCall<void>(this, "ANPCZoneManager.CheckDecreaseNPC()"); }
	void LinkedNPCAwakened_Implementation(APrimalDinoCharacter* DinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.LinkedNPCAwakened_Implementation(APrimalDinoCharacter*)", DinoChar); }
	bool MinimumTamedDinoDistanceCheck(UE::Math::TVector<double>* FromLoc, float MinDistanceMultiplier) { if (!FromLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float>(this, "ANPCZoneManager.MinimumTamedDinoDistanceCheck(UE::Math::TVector<double>,float)", *FromLoc, MinDistanceMultiplier); }
	void PatrolMemberDestroyed(APrimalDinoCharacter* PatrolMember) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.PatrolMemberDestroyed(APrimalDinoCharacter*)", PatrolMember); }
	void HandleLatentPatrolSpawnCount(int PatrolGroupID, bool bGoingIntoHibernation) { NativeCall<void, int, bool>(this, "ANPCZoneManager.HandleLatentPatrolSpawnCount(int,bool)", PatrolGroupID, bGoingIntoHibernation); }
	void DeferZoneSpawnVolumeSetup() { NativeCall<void>(this, "ANPCZoneManager.DeferZoneSpawnVolumeSetup()"); }
	bool IsAtMaxNPC(int BufferAmount) { return NativeCall<bool, int>(this, "ANPCZoneManager.IsAtMaxNPC(int)", BufferAmount); }
	bool BPPreventCheckIncreaseNPC() { return NativeCall<bool>(this, "ANPCZoneManager.BPPreventCheckIncreaseNPC()"); }
	void LinkedNPCHibernated(APrimalDinoCharacter* DinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.LinkedNPCHibernated(APrimalDinoCharacter*)", DinoChar); }
	bool InitializePatrolGroupMember_Implementation(APrimalDinoCharacter* DinoChar) { return NativeCall<bool, APrimalDinoCharacter*>(this, "ANPCZoneManager.InitializePatrolGroupMember_Implementation(APrimalDinoCharacter*)", DinoChar); }
	bool MinimumStructureDistanceCheck(UE::Math::TVector<double>* FromLoc, float MinDistanceMultiplier) { if (!FromLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float>(this, "ANPCZoneManager.MinimumStructureDistanceCheck(UE::Math::TVector<double>,float)", *FromLoc, MinDistanceMultiplier); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ANPCZoneManager.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	int GetNumberOfNPCTouching() { return NativeCall<int>(this, "ANPCZoneManager.GetNumberOfNPCTouching()"); }
	bool GetValidSpawnPoint(int volumeEntryIndex, UE::Math::TVector<double>* extentCheck, UE::Math::TVector<double>& ValidSpawnPoint, const UE::Math::TVector<double>& OverrideStartPoint, float OverrideStartPointExpansionRadius, float WaterOnlySpawnMinimumWaterHeight, float MaximumWaterHeight, float SpawnMinDistanceFromStructuresMultiplier, float SpawnMinDistanceFromPlayersMultiplier, float SpawnMinDistanceFromTamedDinosMultiplier, float* OverrideYawOut) { if (!extentCheck) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, int, UE :: Math :: TVector < double >, UE :: Math :: TVector < double > &, const UE :: Math :: TVector < double > &, float, float, float, float, float, float, float *>(this, "ANPCZoneManager.GetValidSpawnPoint(int,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,float,float,float,float,float*)", volumeEntryIndex, *extentCheck, ValidSpawnPoint, OverrideStartPoint, OverrideStartPointExpansionRadius, WaterOnlySpawnMinimumWaterHeight, MaximumWaterHeight, SpawnMinDistanceFromStructuresMultiplier, SpawnMinDistanceFromPlayersMultiplier, SpawnMinDistanceFromTamedDinosMultiplier, OverrideYawOut); }
	void Destroyed() { NativeCall<void>(this, "ANPCZoneManager.Destroyed()"); }
	void PatrolMemberDestroyed_Implementation(APrimalDinoCharacter* PatrolMember) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.PatrolMemberDestroyed_Implementation(APrimalDinoCharacter*)", PatrolMember); }
	void HandleResetPatrols() { NativeCall<void>(this, "ANPCZoneManager.HandleResetPatrols()"); }
	bool MinimumPlayerDistanceCheck(UE::Math::TVector<double>* FromLoc, float MinDistanceMultiplier) { if (!FromLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float>(this, "ANPCZoneManager.MinimumPlayerDistanceCheck(UE::Math::TVector<double>,float)", *FromLoc, MinDistanceMultiplier); }
	void DecrementDirectLinkCount(APrimalDinoCharacter* ForDino) { NativeCall<void, APrimalDinoCharacter*>(this, "ANPCZoneManager.DecrementDirectLinkCount(APrimalDinoCharacter*)", ForDino); }
	bool ShouldUpdateLinkedZoneVolume(int VolumeIndex, int OverrideDesiredNumberOfNPC, int& OutDesiredNumberToSpawn) { return NativeCall<bool, int, int, int&>(this, "ANPCZoneManager.ShouldUpdateLinkedZoneVolume(int,int,int&)", VolumeIndex, OverrideDesiredNumberOfNPC, OutDesiredNumberToSpawn); }
	void TimerCheckIncreaseNPC() { NativeCall<void>(this, "ANPCZoneManager.TimerCheckIncreaseNPC()"); }
	void DeferCheckIncreaseNPC() { NativeCall<void>(this, "ANPCZoneManager.DeferCheckIncreaseNPC()"); }
	void HandleResetPatrols_Implementation() { NativeCall<void>(this, "ANPCZoneManager.HandleResetPatrols_Implementation()"); }
	void DestroyAllLinkedDinos() { NativeCall<void>(this, "ANPCZoneManager.DestroyAllLinkedDinos()"); }
	bool InitializePatrolGroupMember(APrimalDinoCharacter* DinoChar) { return NativeCall<bool, APrimalDinoCharacter*>(this, "ANPCZoneManager.InitializePatrolGroupMember(APrimalDinoCharacter*)", DinoChar); }
};