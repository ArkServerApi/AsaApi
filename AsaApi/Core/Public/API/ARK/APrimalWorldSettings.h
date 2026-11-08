#pragma once
#include "BulkForward.h"
#include <API/UE/Math/Sphere.h>


struct APrimalWorldSettings : AARKNXWorldSettings
{
	// Fields

	//TSubclassOf<UShooterReplicationGraph>& GraphClassField() { return *GetNativePointerField<TSubclassOf<UShooterReplicationGraph>*>(this, "APrimalWorldSettings.GraphClass"); }
	bool& bMapSupportsMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bMapSupportsMissions"); }
	AActor*& DefaultCameraPositionActorField() { return *GetNativePointerField<AActor**>(this, "APrimalWorldSettings.DefaultCameraPositionActor"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& DynamicResourceRefsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DynamicResourceRefs"); }
	bool& bEditorDoForceDisableNPCSpawnersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorDoForceDisableNPCSpawners"); }
	bool& bEditorForceSpawnCharacterAsFemaleField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorForceSpawnCharacterAsFemale"); }
	FName& PlacingStructureToggleMeshTagVisibilityField() { return *GetNativePointerField<FName*>(this, "APrimalWorldSettings.PlacingStructureToggleMeshTagVisibility"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool& bForceEnablePhysicsSimulationField();
	bool& bForceSpawnAnimationTestField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceSpawnAnimationTest"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeScale"); }
	float& RegularWildDinoResistanceVersusTamesMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoResistanceVersusTamesMultiplier"); }
	float& RegularWildDinoDamageVersusTamesMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoDamageVersusTamesMultiplier"); }
	float& RegularWildDinoXPMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoXPMultiplier"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeOrigin"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeOrigin"); }
	float& MinKillXField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillX"); }
	float& MaxKillXField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillX"); }
	float& MinKillYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillY"); }
	float& MaxKillYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillY"); }
	float& MaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillZ"); }
	float& MaxUnderWorldTraceRangeZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxUnderWorldTraceRangeZ"); }
	TSubclassOf<UMinimapData>& CurrentMinimapDataField() { return *GetNativePointerField<TSubclassOf<UMinimapData>*>(this, "APrimalWorldSettings.CurrentMinimapData"); }
	UTexture2D*& OverrideWeaponMapTextureEmptyField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideWeaponMapTextureEmpty"); }
	UTexture2D*& OverrideWeaponMapTextureFilledField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideWeaponMapTextureFilled"); }
	UTexture2D*& OverrideUIMapTextureEmptyField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureEmpty"); }
	UTexture2D*& OverrideUIMapTextureFilledField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureFilled"); }
	UTexture2D*& OverrideUIMapTextureSmallField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureSmall"); }
	AActor*& LevelBlueprintContainerActorField() { return *GetNativePointerField<AActor**>(this, "APrimalWorldSettings.LevelBlueprintContainerActor"); }
	TSubclassOf<UPrimalGameData>& PrimalGameDataOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalGameData>*>(this, "APrimalWorldSettings.PrimalGameDataOverride"); }
	FString& ForceLoadMapNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.ForceLoadMapName"); }
	TArray<FString, TSizedDefaultAllocator<32> >& OverridePlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegions"); }
	TArray<int, TSizedDefaultAllocator<32> >& OverridePlayerSpawnRegionDifficultiesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionDifficulties"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& OverridePlayerSpawnRegionsHideInSpawnUIField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionsHideInSpawnUI"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& LevelUseNPCClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.LevelUseNPCClasses"); }
	AMatineeActorManager*& MatineeManagerField() { return *GetNativePointerField<AMatineeActorManager**>(this, "APrimalWorldSettings.MatineeManager"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >& MissionActorListsField();
	FReverbSettings& DefaultWaterReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "APrimalWorldSettings.DefaultWaterReverbSettings"); }
	FInteriorSettings& DefaultWaterAmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "APrimalWorldSettings.DefaultWaterAmbientZoneSettings"); }
	TMap<unsigned __int64, AActor*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, AActor*, 0> >& TamedDinosField() { return *GetNativePointerField<TMap<unsigned __int64, AActor*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned __int64, AActor*, 0> >*>(this, "APrimalWorldSettings.TamedDinos"); }
	TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >& DynamicUndermeshRegionsField() { return *GetNativePointerField<TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DynamicUndermeshRegions"); }
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >& NPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.NPCRandomSpawnClassWeights"); }
	TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >& SinglePlayerNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.SinglePlayerNPCRandomSpawnClassWeights"); }
	UE::Math::TVector2<double>& SpawnLevelBoundsMaxField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalWorldSettings.SpawnLevelBoundsMax"); }
	UE::Math::TVector2<double>& SpawnLevelBoundsMinField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalWorldSettings.SpawnLevelBoundsMin"); }
	float& AutoSpectatorNamesMinZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AutoSpectatorNamesMinZ"); }
	TArray<UClass*, TSizedDefaultAllocator<32> >& CachedPersistentObjectClassesField() { return *GetNativePointerField<TArray<UClass*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.CachedPersistentObjectClasses"); }
	float& DinosLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DinosLerpToMaxRandomBaseLevel"); }
	TArray<int, TSizedDefaultAllocator<32> >& DefaultSpawnPointRandomIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DefaultSpawnPointRandomIndices"); }
	UAnimMontage*& OverrideFirstSpawnAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWorldSettings.OverrideFirstSpawnAnim"); }
	UAnimMontage*& OverrideSpawnAnimField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWorldSettings.OverrideSpawnAnim"); }
	float& TheWorldGammaOffsetField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.TheWorldGammaOffset"); }
	float& GlobalHarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestHealthMultiplier"); }
	float& GlobalHarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestAmountMultiplier"); }
	bool& bFlyersStructurePreventionDismountingUnderTerrainOnlyField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bFlyersStructurePreventionDismountingUnderTerrainOnly"); }
	float& OverrideDifficultyMaxField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.OverrideDifficultyMax"); }
	TArray<FItemMultiplier, TSizedDefaultAllocator<32> >& GlobalSpoilingTimeMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.GlobalSpoilingTimeMultipliers"); }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersPositiveField() { return { this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersPositive" }; }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersNegativeField() { return { this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersNegative" }; }
	int& ValidEngramGroupsBitMaskField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.ValidEngramGroupsBitMask"); }
	TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >& InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.InventoryComponentAppends"); }
	TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >& InventoryComponentAppendsNonDedicatedField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.InventoryComponentAppendsNonDedicated"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayCycleSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayTimeSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NightTimeSpeedScale"); }
	float& NegativeHyperthermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHyperthermalInsulationMultiplier"); }
	float& PositiveHyperthermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHyperthermalInsulationMultiplier"); }
	float& NegativeHypothermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHypothermalInsulationMultiplier"); }
	float& PositiveHypothermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHypothermalInsulationMultiplier"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& GlobalCuddleFoodListField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.GlobalCuddleFoodList"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.HerbivoreNaturalTargetingRangeMultiplier"); }
	USoundBase*& OverrideCombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicDay"); }
	USoundBase*& OverrideCombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicNight"); }
	USoundBase*& OverrideCombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicDay_Heavy"); }
	USoundBase*& OverrideCombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicNight_Heavy"); }
	USoundBase*& SplitscreenUnderwaterSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.SplitscreenUnderwaterSound"); }
	TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleParentsField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParents"); }
	TArray<float, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleParentsValueField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParentsValue"); }
	TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleExactMatchField() { return *GetNativePointerField<TArray<TSoftClassPtr<UPrimalHarvestingComponent>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatch"); }
	TArray<float, TSizedDefaultAllocator<32> >& HarvestComponentHealthScaleExactMatchValueField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatchValue"); }
	USoundBase*& Override_Sound_ReconnectToCharacterField() { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.Override_Sound_ReconnectToCharacter"); }
	int& RequiresIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.RequiresID"); }
	UMaterialInterface*& Override_PostProcess_ColorLUTField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWorldSettings.Override_PostProcess_ColorLUT"); }
	float& DefaultWaterLineStartZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultWaterLineStartZ"); }
	float& DefaultDeepWaterStartZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultDeepWaterStartZ"); }
	float& MaximumPlayerFlyZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaximumPlayerFlyZ"); }
	TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >& ExtraReferencesField() { return *GetNativePointerField<TArray<TSoftObjectPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.ExtraReferences"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& AllowDownloadDinoClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AllowDownloadDinoClasses"); }
	FString& DefaultBiomeNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.DefaultBiomeName"); }
	UDeferredMovementContext*& DeferredMovementField() { return *GetNativePointerField<UDeferredMovementContext**>(this, "APrimalWorldSettings.DeferredMovement"); }
	TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PreventStructureClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.PreventStructureClasses"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxFallSpeedMultiplier"); }
	bool& bForceEnableTurretLimitField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnableTurretLimit"); }
	bool& bUseMissionsMetaDataField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseMissionsMetaData"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.LoadForceRespawnDinosVersion"); }
	float& FirstSpawnNotTargetableForTimeField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.FirstSpawnNotTargetableForTime"); }
	bool& bAllowRidingFliersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAllowRidingFliers"); }
	bool& bDisableFirstPersonRidingField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableFirstPersonRiding"); }
	bool& bScaleDinoFloatingHUDByMeshSizeField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bScaleDinoFloatingHUDByMeshSize"); }
	float& ForceCameraTransitionTimeUponPossessionField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ForceCameraTransitionTimeUponPossession"); }
	float& AdditionalDinoHealthBarOffsetYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AdditionalDinoHealthBarOffsetY"); }
	float& AIOverrideNotifyNeighborsRangeField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AIOverrideNotifyNeighborsRange"); }
	UE::Math::TVector<double>& SpawnAnimationLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWorldSettings.SpawnAnimationLocationOffset"); }
	TSubclassOf<UToolTipWidget>& MissionMultiUseEntryToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "APrimalWorldSettings.MissionMultiUseEntryToolTipWidget"); }
	TSubclassOf<APrimalBuff_MissionData>& MissionDataBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff_MissionData>*>(this, "APrimalWorldSettings.MissionDataBuff"); }
	TSubclassOf<AActor>& ActiveEventSpawnActorField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "APrimalWorldSettings.ActiveEventSpawnActor"); }
	TArray<FAvailableMission, TSizedDefaultAllocator<32> >& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AvailableMissions"); }
	TArray<FMissionMetaData, TSizedDefaultAllocator<32> >& AvailableMissionsMetaDataField() { return *GetNativePointerField<TArray<FMissionMetaData, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AvailableMissionsMetaData"); }
	TArray<FMissionMetaData, TSizedDefaultAllocator<32> >& NonPlayerFacingMissionsMetaDataField() { return *GetNativePointerField<TArray<FMissionMetaData, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.NonPlayerFacingMissionsMetaData"); }
	bool& bSetupMaleAnimOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSetupMaleAnimOverrides"); }
	TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >& HumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >*>(this, "APrimalWorldSettings.HumanFemaleAnimSequenceOverrides"); }
	TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >& HumanFemaleAnimMontageOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >*>(this, "APrimalWorldSettings.HumanFemaleAnimMontageOverrides"); }
	TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >& HumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >*>(this, "APrimalWorldSettings.HumanMaleAnimSequenceOverrides"); }
	TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >& HumanMaleAnimMontageOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimMontage>, TSoftObjectPtr<UAnimMontage>, 0> >*>(this, "APrimalWorldSettings.HumanMaleAnimMontageOverrides"); }
	float& GlobalDinoCountValueField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalDinoCountValue"); }
	TArray<APrimalBuff*, TSizedDefaultAllocator<32> >& DisableFootstepParticlesBuffsField() { return *GetNativePointerField<TArray<APrimalBuff*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DisableFootstepParticlesBuffs"); }
	TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >& ServerForceReplicateObjectClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.ServerForceReplicateObjectClasses"); }
	TSoftClassPtr<UObject>& ActiveEventOverrideObjectBlueprintField() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "APrimalWorldSettings.ActiveEventOverrideObjectBlueprint"); }
	TMap<FName, TSoftClassPtr<UObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSoftClassPtr<UObject>, 0> >& EventNameToActiveEventOverrideObjectField() { return *GetNativePointerField<TMap<FName, TSoftClassPtr<UObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSoftClassPtr<UObject>, 0> >*>(this, "APrimalWorldSettings.EventNameToActiveEventOverrideObject"); }
	TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>& DeferredTickActorsField() { return *GetNativePointerField<TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*>(this, "APrimalWorldSettings.DeferredTickActors"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& UnregisteredDeferredTickActorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.UnregisteredDeferredTickActors"); }
	UPrimalWorldSettingsEventOverrides*& ActiveEventOverridesField() { return *GetNativePointerField<UPrimalWorldSettingsEventOverrides**>(this, "APrimalWorldSettings.ActiveEventOverrides"); }
	//TSubclassOf<UMissionMetaTagInfo>& MetaTagInfoClassField() { return *GetNativePointerField<TSubclassOf<UMissionMetaTagInfo>*>(this, "APrimalWorldSettings.MetaTagInfoClass"); }
	bool& bHideMissionSortByDistanceField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bHideMissionSortByDistance"); }
	float& SM4DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM4DirectionalLightMultiplier"); }
	float& SM4SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM4SKyLightMultiplier"); }
	float& SM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM5DirectionalLightMultiplier"); }
	float& SM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM5SKyLightMultiplier"); }
	float& NoTrueSkySM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NoTrueSkySM5DirectionalLightMultiplier"); }
	float& NoTrueSkySM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NoTrueSkySM5SKyLightMultiplier"); }
	float& ConsoleSM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ConsoleSM5DirectionalLightMultiplier"); }
	float& ConsoleSM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ConsoleSM5SKyLightMultiplier"); }
	float& GlobalIBLCaptureBrightnessField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalIBLCaptureBrightness"); }
	float& GlobalBakeAndStreamIBLMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalBakeAndStreamIBLMultiplier"); }
	UE::Math::TVector<double>& TrueSkyColorMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWorldSettings.TrueSkyColorMultiplier"); }
	float& SkyIBLIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SkyIBLIntensityMultiplier"); }
	float& GroundColorMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GroundColorMultiplier"); }
	float& SkyColorMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SkyColorMultiplier"); }
	UE::Math::TVector<double>& AtmosphericFogMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWorldSettings.AtmosphericFogMultiplier"); }
	float& TrueSkyIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.TrueSkyIntensityMultiplier"); }
	float& GlobalViewDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalViewDistanceMultiplier"); }
	float& GlobalProxyDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalProxyDistanceMultiplier"); }
	FString& IntroMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.IntroMoviePath"); }
	int& IntroExplorerNoteIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.IntroExplorerNoteID"); }
	FString& OutroMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.OutroMoviePath"); }
	int& OutroExplorerNoteIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.OutroExplorerNoteID"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MainMapDataLayersField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.MainMapDataLayers"); }
	int& GloballyLimitedParticleNumField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.GloballyLimitedParticleNum"); }
	TSet<TWeakObjectPtr<UNiagaraComponent>, DefaultKeyFuncs<TWeakObjectPtr<UNiagaraComponent>, 0>, FDefaultSetAllocator>& GloballyLimitedNiagaraComponentsField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UNiagaraComponent>, DefaultKeyFuncs<TWeakObjectPtr<UNiagaraComponent>, 0>, FDefaultSetAllocator>*>(this, "APrimalWorldSettings.GloballyLimitedNiagaraComponents"); }
	TArray<FAdditionalStaticMeshSockets, TSizedDefaultAllocator<32> >& AdditionalFakeStaticMeshSocketsField() { return *GetNativePointerField<TArray<FAdditionalStaticMeshSockets, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.AdditionalFakeStaticMeshSockets"); }
	TSet<TWeakObjectPtr<UFXSystemComponent>, DefaultKeyFuncs<TWeakObjectPtr<UFXSystemComponent>, 0>, FDefaultSetAllocator>& DeferredFXActivationsField() { return *GetNativePointerField<TSet<TWeakObjectPtr<UFXSystemComponent>, DefaultKeyFuncs<TWeakObjectPtr<UFXSystemComponent>, 0>, FDefaultSetAllocator>*>(this, "APrimalWorldSettings.DeferredFXActivations"); }

	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWorldSettings();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWorldSettings"); }
	void DeferFXComponentActivation(UFXSystemComponent* ActorComp) { NativeCall<void, UFXSystemComponent*>(this, "APrimalWorldSettings.DeferFXComponentActivation(UFXSystemComponent*)", ActorComp); }
	bool ForceInactiveMapActorParticles() { return NativeCall<bool>(this, "APrimalWorldSettings.ForceInactiveMapActorParticles()"); }
	bool GetFoliageAndFluidSimEnabled() { return NativeCall<bool>(this, "APrimalWorldSettings.GetFoliageAndFluidSimEnabled()"); }
	float FixupDeltaSeconds(float DeltaSeconds, float RealDeltaSeconds) { return NativeCall<float, float, float>(this, "APrimalWorldSettings.FixupDeltaSeconds(float,float)", DeltaSeconds, RealDeltaSeconds); }
	//bool GetExtraStaticMeshSocketByName(UStaticMesh* ForStaticMesh, const FName* FakeSocketName, FFakeStaticMeshSocketData* OutFakeSocketData) { return NativeCall<bool, UStaticMesh*, const FName*, FFakeStaticMeshSocketData*>(this, "APrimalWorldSettings.GetExtraStaticMeshSocketByName(UStaticMesh*,FName&,FFakeStaticMeshSocketData&)", ForStaticMesh, FakeSocketName, OutFakeSocketData); }
	float SetTimeDilation(float NewTimeDilation) { return NativeCall<float, float>(this, "APrimalWorldSettings.SetTimeDilation(float)", NewTimeDilation); }
	void AddDynamicResourceReference(UObject* DynamicResourceRef) { NativeCall<void, UObject*>(this, "APrimalWorldSettings.AddDynamicResourceReference(UObject*)", DynamicResourceRef); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWorldSettings.BeginPlay()"); }
	bool GetMissionMetaData(FName MissionTag, FMissionMetaData* value) { return NativeCall<bool, FName, FMissionMetaData*>(this, "APrimalWorldSettings.GetMissionMetaData(FName,FMissionMetaData&)", MissionTag, value); }
	void EndPlay(EEndPlayReason::Type EndReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalWorldSettings.EndPlay(EEndPlayReason::Type)", EndReason); }
	void PreGameplaySetup() { NativeCall<void>(this, "APrimalWorldSettings.PreGameplaySetup()"); }
	TSoftClassPtr<APrimalDinoCharacter>* GetNPCRandomSpawnClass(TSoftClassPtr<APrimalDinoCharacter>* result, const TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >* ClassNameReplacements, const TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >* TheNPCRandomSpawnClassWeights, TSoftClassPtr<APrimalDinoCharacter>* forClass, bool bIgnoreNPCRandomClassReplacements) { return NativeCall<TSoftClassPtr<APrimalDinoCharacter> *, TSoftClassPtr<APrimalDinoCharacter>*, const TArray<FClassNameReplacement, TSizedDefaultAllocator<32> >*, const TArray<FClassRemappingWeight, TSizedDefaultAllocator<32> >*, TSoftClassPtr<APrimalDinoCharacter>*, bool>(this, "APrimalWorldSettings.GetNPCRandomSpawnClass(TArray<FClassNameReplacement,TSizedDefaultAllocator<32>>&,TArray<FClassRemappingWeight,TSizedDefaultAllocator<32>>&,TSoftClassPtr<APrimalDinoCharacter>,bool)", result, ClassNameReplacements, TheNPCRandomSpawnClassWeights, forClass, bIgnoreNPCRandomClassReplacements); }
	void PreLoadSaveGame() { NativeCall<void>(this, "APrimalWorldSettings.PreLoadSaveGame()"); }
	float GetEffectiveTimeDilation() { return NativeCall<float>(this, "APrimalWorldSettings.GetEffectiveTimeDilation()"); }
	bool IsAllowedInLevelBounds(const UE::Math::TVector<double>* AtLocat) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "APrimalWorldSettings.IsAllowedInLevelBounds(UE::Math::TVector<double>&)", AtLocat); }
	float GetItemGlobalSpoilingTimeMultiplier(UPrimalItem* anItem) { return NativeCall<float, UPrimalItem*>(this, "APrimalWorldSettings.GetItemGlobalSpoilingTimeMultiplier(UPrimalItem*)", anItem); }
	float GetHarvestComponentHealthScale(UClass* HarvestComponentClass) { return NativeCall<float, UClass*>(this, "APrimalWorldSettings.GetHarvestComponentHealthScale(UClass*)", HarvestComponentClass); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWorldSettings.Tick(float)", DeltaSeconds); }
	void HandleDeferredTickActors(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWorldSettings.HandleDeferredTickActors(float)", DeltaSeconds); }
	// 	bool AllowPhysicsSimulation() { return NativeCall<bool>(this, "APrimalWorldSettings.AllowPhysicsSimulation()"); }
	// FUNCTION MISSING: APrimalWorldSettings.AllowPhysicsSimulation()
	UClass* GetDefaultDestroyedInstanceActor(UMeshComponent* ForMesh) { return NativeCall<UClass*, UMeshComponent*>(this, "APrimalWorldSettings.GetDefaultDestroyedInstanceActor(UMeshComponent*)", ForMesh); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector);

	bool& bDisableReplicationGraphField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableReplicationGraph"); }
	bool& bEditorEnableNPCSpawnersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorEnableNPCSpawners"); }
	bool& bPreventGlobalNonEventSpawnOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bPreventGlobalNonEventSpawnOverrides"); }
	bool& bOverrideCharacterCreationPreviewSceneField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bOverrideCharacterCreationPreviewScene"); }
	bool& bForcePreventPhysicsSimulation_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForcePreventPhysicsSimulation_DEPRECATED"); }
	bool& bForceEnablePhysicsSimulation_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnablePhysicsSimulation_DEPRECATED"); }
	bool& bLandscapeStreamingField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bLandscapeStreaming"); }
	bool& bGenerateTerrainField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bGenerateTerrain"); }
	bool& bSpawnDataChanelVFXField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSpawnDataChanelVFX"); }
	bool& bOverrideLongitudeAndLatitudeField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bOverrideLongitudeAndLatitude"); }
	bool& bOverrideMaxMusicVolumeOnVolumesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bOverrideMaxMusicVolumeOnVolumes"); }
	float& MaxMusicVolumeOnVolumesField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxMusicVolumeOnVolumes"); }
	bool& bAssignedUnderwaterReverbField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAssignedUnderwaterReverb"); }
	bool& bUseSpawnLevelBoundsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseSpawnLevelBounds"); }
	bool& bWaterDinosUseFlightBlockingField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bWaterDinosUseFlightBlocking"); }
	bool& bFlyersStructurePreventionDismountingAnywhereField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bFlyersStructurePreventionDismountingAnywhere"); }
	bool& bIgnoreBiomeWindField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bIgnoreBiomeWind"); }
	bool& bIgnoreWindStructureMinClampField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bIgnoreWindStructureMinClamp"); }
	bool& bDisableStructureObstructedByWorldGeometryCheckField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableStructureObstructedByWorldGeometryCheck"); }
	bool& bUseMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseMissions"); }
	bool& bHideMissionUIField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bHideMissionUI"); }
	bool& bIgnoreInMeshCheckingUnderwaterField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bIgnoreInMeshCheckingUnderwater"); }
	bool& bSP_DeferZoneSpawnVolumeSetup_UntilPlayerSpawnField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSP_DeferZoneSpawnVolumeSetup_UntilPlayerSpawn"); }
	bool& bForceDinoDrawHUDField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceDinoDrawHUD"); }
	bool& bForceDinoHighQualityAttacksField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceDinoHighQualityAttacks"); }
	bool& bSetupFemaleAnimOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSetupFemaleAnimOverrides"); }
	bool& bDidPreGameplaySetupField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDidPreGameplaySetup"); }
	bool& bEnforceSingleBiomeBuffField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEnforceSingleBiomeBuff"); }
	bool& bAllowStartMissionsFromAnywhereField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAllowStartMissionsFromAnywhere"); }
	bool& bPlayPersistentPlayerField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bPlayPersistentPlayer"); }
	bool& bIsBTT2IntroField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bIsBTT2Intro"); }
	bool& bPlayBTTIntroFirstField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bPlayBTTIntroFirst"); }
	int& BobsTallTalesIntroExplorerNoteIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.BobsTallTalesIntroExplorerNoteID"); }
	int& BobsTallTalesOutroExplorerNoteIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.BobsTallTalesOutroExplorerNoteID"); }
	bool& bAllowRagdollsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAllowRagdolls"); }
	bool& bDisableAllASAFluidSimField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableAllASAFluidSim"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWorldSettings"); }

	FString& MapFriendlyNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.MapFriendlyName"); }
	UStaticMeshComponent*& VolumetrioFogCanvasField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWorldSettings.VolumetrioFogCanvas"); }
	UPostProcessComponent*& UnderWaterPostProcessComponentField() { return *GetNativePointerField<UPostProcessComponent**>(this, "APrimalWorldSettings.UnderWaterPostProcessComponent"); }
	TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >& DynamicExclusionRegionsField() { return *GetNativePointerField<TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DynamicExclusionRegions"); }
	TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >& DynamicNoBuildRegionsField() { return *GetNativePointerField<TArray<UE::Math::TSphere<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.DynamicNoBuildRegions"); }
	TArray<FName, TSizedDefaultAllocator<32> >& PlayFirstSpawnIntroVOField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldSettings.PlayFirstSpawnIntroVO"); }
	FString& IntroFemaleMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.IntroFemaleMoviePath"); }
	FString& BobsTallTalesIntroMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.BobsTallTalesIntroMoviePath"); }
	FString& BobsTallTalesOutroMoviePathField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.BobsTallTalesOutroMoviePath"); }
	FWorldSettingsScalabilityOverrides& ScalabilityOverridesField() { return *GetNativePointerField<FWorldSettingsScalabilityOverrides*>(this, "APrimalWorldSettings.ScalabilityOverrides"); }
	FGlobalMaterialParamOverrides& GlobalMaterialParamOverridesField() { return *GetNativePointerField<FGlobalMaterialParamOverrides*>(this, "APrimalWorldSettings.GlobalMaterialParamOverrides"); }
	AOceanVolume*& TheOceanPhysicsVolumeField() { return *GetNativePointerField<AOceanVolume**>(this, "APrimalWorldSettings.TheOceanPhysicsVolume"); }
	void UpdateWorldDistanceGlobals() { NativeCall<void>(this, "APrimalWorldSettings.UpdateWorldDistanceGlobals()"); }
	void RemoveDeferredActivationComponent(UActorComponent* ActorComp) { NativeCall<void, UActorComponent*>(this, "APrimalWorldSettings.RemoveDeferredActivationComponent(UActorComponent*)", ActorComp); }
	bool GetExtraStaticMeshSocketByName(UStaticMesh* ForStaticMesh, const FName& FakeSocketName, FFakeStaticMeshSocketData& OutFakeSocketData) { return NativeCall<bool, UStaticMesh*, const FName&, FFakeStaticMeshSocketData&>(this, "APrimalWorldSettings.GetExtraStaticMeshSocketByName(UStaticMesh*,FName&,FFakeStaticMeshSocketData&)", ForStaticMesh, FakeSocketName, OutFakeSocketData); }
	bool CanSpawnGloballyLimitedParticle(UNiagaraComponent* ForNiagaraComponent) { return NativeCall<bool, UNiagaraComponent*>(this, "APrimalWorldSettings.CanSpawnGloballyLimitedParticle(UNiagaraComponent*)", ForNiagaraComponent); }
	void BeginDestroy() { NativeCall<void>(this, "APrimalWorldSettings.BeginDestroy()"); }
	void SetupWaterline() { NativeCall<void>(this, "APrimalWorldSettings.SetupWaterline()"); }
	void AddMissionTriggerActor(FName Trigger, AActor* pActor) { NativeCall<void, FName, AActor*>(this, "APrimalWorldSettings.AddMissionTriggerActor(FName,AActor*)", Trigger, pActor); }
	bool IsPointReallyUnderwater(const UE::Math::TVector<double>& ThePoint, bool bIgnoreRafts) { return NativeCall<bool, const UE::Math::TVector<double>&, bool>(this, "APrimalWorldSettings.IsPointReallyUnderwater(UE::Math::TVector<double>&,bool)", ThePoint, bIgnoreRafts); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* WeakPointerHotfix_GetActorsWithTag(TArray<AActor*, TSizedDefaultAllocator<32> >* result, FName theTag) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, FName>(this, "APrimalWorldSettings.WeakPointerHotfix_GetActorsWithTag(FName)", result, theTag); }
	void InitializePrimalGameDataForWorld() { NativeCall<void>(this, "APrimalWorldSettings.InitializePrimalGameDataForWorld()"); }
	void RemoveMissionTriggerActor(FName Trigger, AActor* pActor) { NativeCall<void, FName, AActor*>(this, "APrimalWorldSettings.RemoveMissionTriggerActor(FName,AActor*)", Trigger, pActor); }
	APhysicsVolume* GetOceanVolume() { return NativeCall<APhysicsVolume*>(this, "APrimalWorldSettings.GetOceanVolume()"); }
	void OnInitWorld(UWorld* World) { NativeCall<void, UWorld*>(this, "APrimalWorldSettings.OnInitWorld(UWorld*)", World); }
};