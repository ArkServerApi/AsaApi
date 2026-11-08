#pragma once
#include "BulkForward.h"


struct AWorldSettings : ABasePrimalWorldSettings
{
	// Fields

	int& VisibilityCellSizeField() { return *GetNativePointerField<int*>(this, "AWorldSettings.VisibilityCellSize"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LevelsToForceInvisibleWhenExcludedField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.LevelsToForceInvisibleWhenExcluded"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LevelsToAbsolutelyNotLoadOnDediServerField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.LevelsToAbsolutelyNotLoadOnDediServer"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AlwaysVisibleLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.AlwaysVisibleLevelNames"); }
	//TSoftClassPtr<UAISystemBase>& AISystemClassField() { return *GetNativePointerField<TSoftClassPtr<UAISystemBase>*>(this, "AWorldSettings.AISystemClass"); }
	UE::Math::TVector<double>& LevelInstancePivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWorldSettings.LevelInstancePivotOffset"); }
	TObjectPtr<UNavigationSystemConfig>& NavigationSystemConfigField() { return *GetNativePointerField<TObjectPtr<UNavigationSystemConfig>*>(this, "AWorldSettings.NavigationSystemConfig"); }
	TObjectPtr<UNavigationSystemConfig>& NavigationSystemConfigOverrideField() { return *GetNativePointerField<TObjectPtr<UNavigationSystemConfig>*>(this, "AWorldSettings.NavigationSystemConfigOverride"); }
	TObjectPtr<UWorldPartition>& WorldPartitionField() { return *GetNativePointerField<TObjectPtr<UWorldPartition>*>(this, "AWorldSettings.WorldPartition"); }
	TArray<TObjectPtr<UDataLayerAsset>, TSizedDefaultAllocator<32> >& BaseNavmeshDataLayersField() { return *GetNativePointerField<TArray<TObjectPtr<UDataLayerAsset>, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.BaseNavmeshDataLayers"); }
	float& WorldToMetersField() { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldToMeters"); }
	float& KillZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.KillZ"); }
	TSubclassOf<UDamageType>& KillZDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "AWorldSettings.KillZDamageType"); }
	float& WorldGravityZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldGravityZ"); }
	float& GlobalGravityZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalGravityZ"); }
	//TSubclassOf<ADefaultPhysicsVolume>& DefaultPhysicsVolumeClassField() { return *GetNativePointerField<TSubclassOf<ADefaultPhysicsVolume>*>(this, "AWorldSettings.DefaultPhysicsVolumeClass"); }
	//TSubclassOf<UPhysicsCollisionHandler>& PhysicsCollisionHandlerClassField() { return *GetNativePointerField<TSubclassOf<UPhysicsCollisionHandler>*>(this, "AWorldSettings.PhysicsCollisionHandlerClass"); }
	TSubclassOf<AGameModeBase>& DefaultGameModeField() { return *GetNativePointerField<TSubclassOf<AGameModeBase>*>(this, "AWorldSettings.DefaultGameMode"); }
	TSubclassOf<AGameNetworkManager>& GameNetworkManagerClassField() { return *GetNativePointerField<TSubclassOf<AGameNetworkManager>*>(this, "AWorldSettings.GameNetworkManagerClass"); }
	int& PackedLightAndShadowMapTextureSizeField() { return *GetNativePointerField<int*>(this, "AWorldSettings.PackedLightAndShadowMapTextureSize"); }
	UE::Math::TVector<double>& DefaultColorScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWorldSettings.DefaultColorScale"); }
	float& DefaultMaxDistanceFieldOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DefaultMaxDistanceFieldOcclusionDistance"); }
	float& GlobalDistanceFieldViewDistanceField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalDistanceFieldViewDistance"); }
	float& DynamicIndirectShadowsSelfShadowingIntensityField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DynamicIndirectShadowsSelfShadowingIntensity"); }
	FReverbSettings& DefaultReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "AWorldSettings.DefaultReverbSettings"); }
	FInteriorSettings& DefaultAmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "AWorldSettings.DefaultAmbientZoneSettings"); }
	TObjectPtr<USoundMix>& DefaultBaseSoundMixField() { return *GetNativePointerField<TObjectPtr<USoundMix>*>(this, "AWorldSettings.DefaultBaseSoundMix"); }
	float& TimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.TimeDilation"); }
	float& MatineeTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MatineeTimeDilation"); }
	float& DemoPlayTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DemoPlayTimeDilation"); }
	float& MinGlobalTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MinGlobalTimeDilation"); }
	float& MaxGlobalTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxGlobalTimeDilation"); }
	float& MinUndilatedFrameTimeField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MinUndilatedFrameTime"); }
	float& MaxUndilatedFrameTimeField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxUndilatedFrameTime"); }
	FBroadphaseSettings& BroadphaseSettingsField() { return *GetNativePointerField<FBroadphaseSettings*>(this, "AWorldSettings.BroadphaseSettings"); }
	TArray<FNetViewer, TSizedDefaultAllocator<32> >& ReplicationViewersField() { return *GetNativePointerField<TArray<FNetViewer, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.ReplicationViewers"); }
	TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >& AssetUserDataField() { return *GetNativePointerField<TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.AssetUserData"); }
	TObjectPtr<APlayerState>& PauserPlayerStateField() { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AWorldSettings.PauserPlayerState"); }
	int& MaxNumberOfBookmarksField() { return *GetNativePointerField<int*>(this, "AWorldSettings.MaxNumberOfBookmarks"); }
	TSubclassOf<UBookmarkBase>& DefaultBookmarkClassField() { return *GetNativePointerField<TSubclassOf<UBookmarkBase>*>(this, "AWorldSettings.DefaultBookmarkClass"); }
	TArray<TObjectPtr<UBookmarkBase>, TSizedDefaultAllocator<32> >& BookmarkArrayField() { return *GetNativePointerField<TArray<TObjectPtr<UBookmarkBase>, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.BookmarkArray"); }
	TSubclassOf<UBookmarkBase>& LastBookmarkClassField() { return *GetNativePointerField<TSubclassOf<UBookmarkBase>*>(this, "AWorldSettings.LastBookmarkClass"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPrecomputeVisibility() { return { this, "AWorldSettings.bPrecomputeVisibility" }; }
	BitFieldValue<bool, unsigned __int32> bPlaceCellsOnlyAlongCameraTracks() { return { this, "AWorldSettings.bPlaceCellsOnlyAlongCameraTracks" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWorldBoundsChecks() { return { this, "AWorldSettings.bEnableWorldBoundsChecks" }; }
	BitFieldValue<bool, unsigned __int32> bUse3DWorldCompStreaming() { return { this, "AWorldSettings.bUse3DWorldCompStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bForceLoadAllLevelsOnDediServer() { return { this, "AWorldSettings.bForceLoadAllLevelsOnDediServer" }; }
	BitFieldValue<bool, unsigned __int32> bEnableNavigationSystem() { return { this, "AWorldSettings.bEnableNavigationSystem" }; }
	BitFieldValue<bool, unsigned __int32> bEnableAISystem() { return { this, "AWorldSettings.bEnableAISystem" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWorldComposition() { return { this, "AWorldSettings.bEnableWorldComposition" }; }
	BitFieldValue<bool, unsigned __int32> bUseClientSideLevelStreamingVolumes() { return { this, "AWorldSettings.bUseClientSideLevelStreamingVolumes" }; }
	BitFieldValue<bool, unsigned __int32> bEnableWorldOriginRebasing() { return { this, "AWorldSettings.bEnableWorldOriginRebasing" }; }
	BitFieldValue<bool, unsigned __int32> bWorldGravitySet() { return { this, "AWorldSettings.bWorldGravitySet" }; }
	BitFieldValue<bool, unsigned __int32> bGlobalGravitySet() { return { this, "AWorldSettings.bGlobalGravitySet" }; }
	BitFieldValue<bool, unsigned __int32> bMinimizeBSPSections() { return { this, "AWorldSettings.bMinimizeBSPSections" }; }
	BitFieldValue<bool, unsigned __int32> bForceNoPrecomputedLighting() { return { this, "AWorldSettings.bForceNoPrecomputedLighting" }; }
	BitFieldValue<bool, unsigned __int32> bHighPriorityLoading() { return { this, "AWorldSettings.bHighPriorityLoading" }; }
	BitFieldValue<bool, unsigned __int32> bHighPriorityLoadingLocal() { return { this, "AWorldSettings.bHighPriorityLoadingLocal" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideDefaultBroadphaseSettings() { return { this, "AWorldSettings.bOverrideDefaultBroadphaseSettings" }; }
	BitFieldValue<bool, unsigned __int32> bGenerateSingleClusterForLevel() { return { this, "AWorldSettings.bGenerateSingleClusterForLevel" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldSettings"); }
	void SetPauserPlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AWorldSettings.SetPauserPlayerState(APlayerState*)", PlayerState); }
	//TSubclassOf<UPhysicsCollisionHandler>* GetPhysicsCollisionHandlerClass(TSubclassOf<UPhysicsCollisionHandler>* result) { return NativeCall<TSubclassOf<UPhysicsCollisionHandler> *, TSubclassOf<UPhysicsCollisionHandler>*>(this, "AWorldSettings.GetPhysicsCollisionHandlerClass()", result); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAWorldSettings();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "AWorldSettings.Serialize(FStructuredArchiveRecord)", Record); }
	void PostInitProperties() { NativeCall<void>(this, "AWorldSettings.PostInitProperties()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AWorldSettings.PreInitializeComponents()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWorldSettings.PostRegisterAllComponents()"); }
	float GetGravityZ() { return NativeCall<float>(this, "AWorldSettings.GetGravityZ()"); }
	float FixupDeltaSeconds(float DeltaSeconds, float RealDeltaSeconds) { return NativeCall<float, float, float>(this, "AWorldSettings.FixupDeltaSeconds(float,float)", DeltaSeconds, RealDeltaSeconds); }
	float SetTimeDilation(float NewTimeDilation) { return NativeCall<float, float>(this, "AWorldSettings.SetTimeDilation(float)", NewTimeDilation); }
	void NotifyBeginPlay() { NativeCall<void>(this, "AWorldSettings.NotifyBeginPlay()"); }
	void NotifyMatchStarted() { NativeCall<void>(this, "AWorldSettings.NotifyMatchStarted()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AWorldSettings.Serialize(FArchive&)", Ar); }
	void AddAssetUserData(UAssetUserData* InUserData) { NativeCall<void, UAssetUserData*>(this, "AWorldSettings.AddAssetUserData(UAssetUserData*)", InUserData); }
	UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "AWorldSettings.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	const TArray<UAssetUserData*, TSizedDefaultAllocator<32> >* GetAssetUserDataArray() { return NativeCall<const TArray<UAssetUserData*, TSizedDefaultAllocator<32> >*>(this, "AWorldSettings.GetAssetUserDataArray()"); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "AWorldSettings.RemoveUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	void PostLoad() { NativeCall<void>(this, "AWorldSettings.PostLoad()"); }
	void AdjustNumberOfBookmarks() { NativeCall<void>(this, "AWorldSettings.AdjustNumberOfBookmarks()"); }
	void SanitizeBookmarkClasses() { NativeCall<void>(this, "AWorldSettings.SanitizeBookmarkClasses()"); }
	FSoftClassPath* GetAISystemClassName(FSoftClassPath* result) { return NativeCall<FSoftClassPath*, FSoftClassPath*>(this, "AWorldSettings.GetAISystemClassName()", result); }
	char CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(UE::Math::TVector<double>* ViewLocation, UE::Math::TVector<double>* NewDestructableActorLocation) { return NativeCall<char, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AWorldSettings.CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(UE::Math::TVector<double>,UE::Math::TVector<double>)", ViewLocation, NewDestructableActorLocation); }
	void RewindForReplay() { NativeCall<void>(this, "AWorldSettings.RewindForReplay()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldSettings"); }

	float& VolumetricLightmapLoadingRangeField() { return *GetNativePointerField<float*>(this, "AWorldSettings.VolumetricLightmapLoadingRange"); }
	FNaniteSettings& NaniteSettingsField() { return *GetNativePointerField<FNaniteSettings*>(this, "AWorldSettings.NaniteSettings"); }
	float& MinCinematicTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MinCinematicTimeDilation"); }
	float& MaxCinematicTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxCinematicTimeDilation"); }
	BitFieldValue<bool, unsigned char> bUseAutomaticUGCNavigation() { return { this, "AWorldSettings.bUseAutomaticUGCNavigation"}; }
	BitFieldValue<bool, unsigned char> bForceVolumetricLightmapsOnly() { return { this, "AWorldSettings.bForceVolumetricLightmapsOnly"}; }
	BitFieldValue<bool, unsigned char> bAllowTimeDilation() { return { this, "AWorldSettings.bAllowTimeDilation"}; }
	BitFieldValue<bool, unsigned char> bReuseAddressAndPort() { return { this, "AWorldSettings.bReuseAddressAndPort"}; }
	BitFieldValue<bool, unsigned char> bEnableCapsuleIndirectShadows() { return { this, "AWorldSettings.bEnableCapsuleIndirectShadows"}; }
	void SetAllowMaskedMaterials(bool bState) { NativeCall<void, bool>(this, "AWorldSettings.SetAllowMaskedMaterials(bool)", bState); }
	UWorldPartition* GetWorldPartition() { return NativeCall<UWorldPartition*>(this, "AWorldSettings.GetWorldPartition()"); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "AWorldSettings.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	float GetEffectiveTimeDilation() { return NativeCall<float>(this, "AWorldSettings.GetEffectiveTimeDilation()"); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AWorldSettings.GetVelocity(bool)", result, bIsForRagdoll); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWorldSettings._getUObject()"); }
	void OnRep_NaniteSettings() { NativeCall<void>(this, "AWorldSettings.OnRep_NaniteSettings()"); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "AWorldSettings.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void SetNavigationSystemConfigOverride(UNavigationSystemConfig* NewConfig) { NativeCall<void, UNavigationSystemConfig*>(this, "AWorldSettings.SetNavigationSystemConfigOverride(UNavigationSystemConfig*)", NewConfig); }
	void InitializePrimalGameDataForWorld() { NativeCall<void>(this, "AWorldSettings.InitializePrimalGameDataForWorld()"); }
	bool AreWorldBoundsChecksEnabled() { return NativeCall<bool>(this, "AWorldSettings.AreWorldBoundsChecksEnabled()"); }
	void OnRep_WorldGravityZ() { NativeCall<void>(this, "AWorldSettings.OnRep_WorldGravityZ()"); }
	float SetCinematicTimeDilation(float NewCinematicTimeDilation) { return NativeCall<float, float>(this, "AWorldSettings.SetCinematicTimeDilation(float)", NewCinematicTimeDilation); }
	bool SupportsWorldPartitionStreaming() { return NativeCall<bool>(this, "AWorldSettings.SupportsWorldPartitionStreaming()"); }
	void SetAllowTimeDilation(bool NewAllowTimeDilation) { NativeCall<void, bool>(this, "AWorldSettings.SetAllowTimeDilation(bool)", NewAllowTimeDilation); }
	bool IsNavigationSystemEnabled() { return NativeCall<bool>(this, "AWorldSettings.IsNavigationSystemEnabled()"); }
};