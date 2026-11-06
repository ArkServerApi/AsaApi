#pragma once
#include "BulkForward.h"



struct APrimalBuff_Companion : APrimalBuff
{
    // Fields

    USceneComponent*& CompanionRootField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalBuff_Companion.CompanionRoot"); }
    //USkeletalMeshComponentWithSoftRef*& CompanionMeshCompField() { return *GetNativePointerField<USkeletalMeshComponentWithSoftRef**>(this, "APrimalBuff_Companion.CompanionMeshComp"); }
    USphereComponent*& CompanionUseSphereCompField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalBuff_Companion.CompanionUseSphereComp"); }
    TWeakObjectPtr<AShooterCharacter>& MyPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalBuff_Companion.MyPlayer"); }
    TWeakObjectPtr<AShooterPlayerController>& MyPCField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalBuff_Companion.MyPC"); }
    float& ReachPointOrbitWithinDistField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReachPointOrbitWithinDist"); }
    float& ReactionDialogVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReactionDialogVolumeMultiplier"); }
    float& CompanionViewDotField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionViewDot"); }
    USoundAttenuation*& CompanionSoundAttenuationField() { return *GetNativePointerField<USoundAttenuation**>(this, "APrimalBuff_Companion.CompanionSoundAttenuation"); }
    //TSubclassOf<UPrimalStaticData_MissionCompanionReactionData>& DefaultMissionCompanionReactionDataField() { return *GetNativePointerField<TSubclassOf<UPrimalStaticData_MissionCompanionReactionData>*>(this, "APrimalBuff_Companion.DefaultMissionCompanionReactionData"); }
    UParticleSystemComponent*& CurrentCompanionReactionVFXField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalBuff_Companion.CurrentCompanionReactionVFX"); }
    UAudioComponent*& CurrentCompanionReactionSFXField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_Companion.CurrentCompanionReactionSFX"); }
    TArray<FPointOfInterestData_ForCompanion, TSizedDefaultAllocator<32> >& CurrentPointsOfInterestField() { return *GetNativePointerField<TArray<FPointOfInterestData_ForCompanion, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.CurrentPointsOfInterest"); }
    //TEnumAsByte<enum ECompanionState::Type>& CompanionState_PreviousField() { return *GetNativePointerField<TEnumAsByte<enum ECompanionState::Type>*>(this, "APrimalBuff_Companion.CompanionState_Previous"); }
    TArray<FCompanionReactionData, TSizedDefaultAllocator<32> >& ReactionStackField() { return *GetNativePointerField<TArray<FCompanionReactionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.ReactionStack"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& DialogueIconOverrideStackField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.DialogueIconOverrideStack"); }
    TArray<int, TSizedDefaultAllocator<32> >& CurrentIDStackField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.CurrentIDStack"); }
    UE::Math::TVector<double>& CurrentFocusedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.CurrentFocusedLocation"); }
    FPointOfInterestData_ForCompanion& CurrentFocusedPointDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.CurrentFocusedPointData"); }
    //FCompanionEventData& CurrentEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "APrimalBuff_Companion.CurrentEventData"); }
    AActor*& CurrentEventActorField() { return *GetNativePointerField<AActor**>(this, "APrimalBuff_Companion.CurrentEventActor"); }
    FName& LastPointTag_StartOrbitField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_StartOrbit"); }
    FName& LastPointTag_ReachedOrbitField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_ReachedOrbit"); }
    long double& LastPlayedReactionNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Companion.LastPlayedReactionNetworkTime"); }
    FCompanionReactionData& PreviouslyPlayedReactionField() { return *GetNativePointerField<FCompanionReactionData*>(this, "APrimalBuff_Companion.PreviouslyPlayedReaction"); }
    TArray<FString, TSizedDefaultAllocator<32> >& FullyTranslatedLanguagesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.FullyTranslatedLanguages"); }
    //TSubclassOf<UPrimalDinoToolTipWidget>& HUDOverlayToolTipWidgetExtendedField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoToolTipWidget>*>(this, "APrimalBuff_Companion.HUDOverlayToolTipWidgetExtended"); }
    TArray<int, TSizedDefaultAllocator<32> >& ReactionExplorerNotesToUnlockField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.ReactionExplorerNotesToUnlock"); }
    FTimerHandle& LoadAudioTimeoutHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_Companion.LoadAudioTimeoutHandle"); }
    FTimerHandle& MaxReactionLimitTimeoutHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_Companion.MaxReactionLimitTimeoutHandle"); }
    FTimerHandle& AnimateOutHLNASubtitleIconHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_Companion.AnimateOutHLNASubtitleIconHandle"); }
    UTexture2D*& AsyncLoadedDialogueAnimTextureField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_Companion.AsyncLoadedDialogueAnimTexture"); }
    USoundCue*& AsyncLoadedSoundCueField() { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Companion.AsyncLoadedSoundCue"); }
    USoundWave*& AsyncLoadedSoundWaveField() { return *GetNativePointerField<USoundWave**>(this, "APrimalBuff_Companion.AsyncLoadedSoundWave"); }
    FName& AnimTextureParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureParamName"); }
    FName& AnimTextureStartTimeParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureStartTimeParamName"); }
    FName& AnimTextureDurationParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureDurationParamName"); }
    float& AnimTextureDurationOffsetField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AnimTextureDurationOffset"); }
    int& CurrentReactionSFXIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.CurrentReactionSFXIndex"); }
    int& PreviousReactionSFXIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.PreviousReactionSFXIndex"); }
    FSoftObjectPath& CurrentSoundWaveStringAssetReferenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.CurrentSoundWaveStringAssetReference"); }
    FSoftObjectPath& CurrentSoundCueStringAssetReferenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.CurrentSoundCueStringAssetReference"); }
    FSoftObjectPath& CurrentAnimTextureStringAssetReferenceField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.CurrentAnimTextureStringAssetReference"); }
    FSoftObjectPath& FallbackSubtitleAudioStringField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.FallbackSubtitleAudioString"); }
    TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >& MeshDynamicMaterialsField() { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.MeshDynamicMaterials"); }
    UMaterialInterface*& CompanionReactionSubtitleIconField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalBuff_Companion.CompanionReactionSubtitleIcon"); }
    FSoftObjectPath& DefaultReactionAnimtextureField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APrimalBuff_Companion.DefaultReactionAnimtexture"); }
    FLocalizedSoundWaveAnimTexturePairArrays& LocalizedAudioTracksField() { return *GetNativePointerField<FLocalizedSoundWaveAnimTexturePairArrays*>(this, "APrimalBuff_Companion.LocalizedAudioTracks"); }
    bool& DebugBypassVRTeleportRestrictionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.DebugBypassVRTeleportRestrictions"); }
    TSoftClassPtr<AMissionType>& FinalBossFightEasyField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightEasy"); }
    TSoftClassPtr<AMissionType>& FinalBossFightMedField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightMed"); }
    TSoftClassPtr<AMissionType>& FinalBossFightHardField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightHard"); }
    TSoftClassPtr<AMissionType>& FinalBossFightFlowTestField() { return *GetNativePointerField<TSoftClassPtr<AMissionType>*>(this, "APrimalBuff_Companion.FinalBossFightFlowTest"); }
    float& AllowedHLNAFocusedSelectedRemoteTargetDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AllowedHLNAFocusedSelectedRemoteTargetDistance"); }
    TArray<FSoftObjectPath, TSizedDefaultAllocator<32> >& StreamedAssetsField() { return *GetNativePointerField<TArray<FSoftObjectPath, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.StreamedAssets"); }
    float& CompanionAmbientSoundReductionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionAmbientSoundReductionMultiplier"); }
    float& CompanionVoiceVolumeMultiplierVRBiomeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionVoiceVolumeMultiplierVRBiome"); }
    //FDelegate_OnCompanionReactionPlayed& OnReactionPlayed_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionPlayed*>(this, "APrimalBuff_Companion.OnReactionPlayed_Delegate"); }
    //FDelegate_OnCompanionReactionStopped& OnReactionStopped_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionStopped*>(this, "APrimalBuff_Companion.OnReactionStopped_Delegate"); }
    //FDelegate_OnCompanionReactionAnimPlayed& OnReactionAnimPlayed_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionAnimPlayed*>(this, "APrimalBuff_Companion.OnReactionAnimPlayed_Delegate"); }
    //FDelegate_OnCompanionReactionVfxSpawned& OnReactionComponentSpawned_VFX_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionVfxSpawned*>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_VFX_Delegate"); }
    //FDelegate_OnCompanionReactionSfxSpawned& OnReactionComponentSpawned_SFX_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionSfxSpawned*>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_SFX_Delegate"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDebugCompanion() { return { this, "APrimalBuff_Companion.bDebugCompanion" }; }
    BitFieldValue<bool, unsigned __int32> bIsOrbitingPointOfInterest() { return { this, "APrimalBuff_Companion.bIsOrbitingPointOfInterest" }; }
    BitFieldValue<bool, unsigned __int32> bHasReachedPointOrbit() { return { this, "APrimalBuff_Companion.bHasReachedPointOrbit" }; }
    BitFieldValue<bool, unsigned __int32> bShowsHexagonsInInventory() { return { this, "APrimalBuff_Companion.bShowsHexagonsInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebugReactions() { return { this, "APrimalBuff_Companion.bEnableDebugReactions" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayEnglishLinesAsLocalizationFallback() { return { this, "APrimalBuff_Companion.bDontPlayEnglishLinesAsLocalizationFallback" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedTexture() { return { this, "APrimalBuff_Companion.bIsAwaitingLoadedTexture" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingTexture() { return { this, "APrimalBuff_Companion.bHasFinishedLoadingTexture" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedSoundCue() { return { this, "APrimalBuff_Companion.bIsAwaitingLoadedSoundCue" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingSoundWave() { return { this, "APrimalBuff_Companion.bHasFinishedLoadingSoundWave" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedSoundWave() { return { this, "APrimalBuff_Companion.bIsAwaitingLoadedSoundWave" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingFallbackSubtitleAudio() { return { this, "APrimalBuff_Companion.bIsAwaitingFallbackSubtitleAudio" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingSoundCue() { return { this, "APrimalBuff_Companion.bHasFinishedLoadingSoundCue" }; }
    BitFieldValue<bool, unsigned __int32> bProbablyPlayingReaction() { return { this, "APrimalBuff_Companion.bProbablyPlayingReaction" }; }
    BitFieldValue<bool, unsigned __int32> bHasSomePaddingBeforePlayingReaction() { return { this, "APrimalBuff_Companion.bHasSomePaddingBeforePlayingReaction" }; }
    BitFieldValue<bool, unsigned __int32> bGoingToTryToSplitSoundCueForLocalization() { return { this, "APrimalBuff_Companion.bGoingToTryToSplitSoundCueForLocalization" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayedDefaultReactionAnimTexture() { return { this, "APrimalBuff_Companion.bHasPlayedDefaultReactionAnimTexture" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingFallbackReactionAnimTexture() { return { this, "APrimalBuff_Companion.bIsPlayingFallbackReactionAnimTexture" }; }
    BitFieldValue<bool, unsigned __int32> bForceCompanionHidden() { return { this, "APrimalBuff_Companion.bForceCompanionHidden" }; }

    // Functions

    bool CanPlayCompanionReaction(const FCompanionReactionData* CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData*>(this, "APrimalBuff_Companion.CanPlayCompanionReaction(FCompanionReactionData&)", CanPlayReactionData); }
    bool CanStartCompanionEvent(const AActor* EventActor, FCompanionEventData* WithEventData) { return NativeCall<bool, const AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.CanStartCompanionEvent(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void Client_AddCompanionReaction(FCompanionReactionData* WithReactionData, const bool bForcePlayNow, UMaterialInterface* DialogueIconOverride, const int UniqueID) { NativeCall<void, FCompanionReactionData*, const bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction(FCompanionReactionData,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIconOverride, UniqueID); }
    void FocusOnRemoteTarget() { NativeCall<void>(this, "APrimalBuff_Companion.FocusOnRemoteTarget()"); }
    bool IsCompanionAbleToMonologue() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionAbleToMonologue()"); }
    void NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "APrimalBuff_Companion.NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter>)", DinoClass); }
    void RefreshCompanionColorization() { NativeCall<void>(this, "APrimalBuff_Companion.RefreshCompanionColorization()"); }
    void Server_SetCompanionState(const ECompanionState::Type NewState) { NativeCall<void, const ECompanionState::Type>(this, "APrimalBuff_Companion.Server_SetCompanionState(ECompanionState::Type)", NewState); }
    void StartCompanionEvent(AActor* EventActor, FCompanionEventData* WithEventData) { NativeCall<void, AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.StartCompanionEvent(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void StopCompanionEvent() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent()"); }
    void Tick_CompanionReactions(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions(float)", DeltaTime); }
    void Tick_CompanionSearchForPOIs(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs(float)", DeltaTime); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalBuff_Companion();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_Companion"); }
    void ClientAllowVRTeleport_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.ClientAllowVRTeleport_Implementation()"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBuff_Companion.BeginPlay()"); }
    void Timer_CheckForValidInstigator() { NativeCall<void>(this, "APrimalBuff_Companion.Timer_CheckForValidInstigator()"); }
    void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_Companion.SetupForInstigator()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick(float)", DeltaSeconds); }
    void Deactivate() { NativeCall<void>(this, "APrimalBuff_Companion.Deactivate()"); }
    void OnSpawnedForPlayer_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalBuff_Companion.OnSpawnedForPlayer_Implementation()", a2); }
    void OnPlayerDeath_Implementation(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_Companion.OnPlayerDeath_Implementation(APrimalCharacter*)", DiedCharacter); }
    void Tick_CompanionSearchForPOIs_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs_Implementation(float)", DeltaTime); }
    void Tick_UpdateCompanionState_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState_Implementation(float)", DeltaTime); }
    void Tick_CompanionEvents_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents_Implementation(float)", DeltaTime); }
    void Tick_CompanionReactions_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions_Implementation(float)", DeltaTime); }
    void AnimateOutHLNASubtitleIcon() { NativeCall<void>(this, "APrimalBuff_Companion.AnimateOutHLNASubtitleIcon()"); }
    void AnimateInHLNASubtitleIcon() { NativeCall<void>(this, "APrimalBuff_Companion.AnimateInHLNASubtitleIcon()"); }
    void SetUpAnimTexture() { NativeCall<void>(this, "APrimalBuff_Companion.SetUpAnimTexture()"); }
    void LoadAudioTimeout() { NativeCall<void>(this, "APrimalBuff_Companion.LoadAudioTimeout()"); }
    void MaxReactionLimitTimeout() { NativeCall<void>(this, "APrimalBuff_Companion.MaxReactionLimitTimeout()"); }
    void FinishAsyncLoading() { NativeCall<void>(this, "APrimalBuff_Companion.FinishAsyncLoading()"); }
    void UnloadAsyncLoadedAudioAndTexture(int a2) { NativeCall<void, int>(this, "APrimalBuff_Companion.UnloadAsyncLoadedAudioAndTexture()", a2); }
    void OutputAsyncLoadedFiles() { NativeCall<void>(this, "APrimalBuff_Companion.OutputAsyncLoadedFiles()"); }
    void ClientOutputAsyncLoadedFiles_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.ClientOutputAsyncLoadedFiles_Implementation()"); }
    bool IsPlayerLookingAtCompanion_Implementation(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalBuff_Companion.IsPlayerLookingAtCompanion_Implementation()", a2); }
    bool GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion* ClosestPointData, UE::Math::TVector<double>* ClosestPointLoc) { return NativeCall<bool, FPointOfInterestData_ForCompanion*, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion&,UE::Math::TVector<double>&)", ClosestPointData, ClosestPointLoc); }
    bool ShouldOrbitPointOfInterest(const FPointOfInterestData_ForCompanion* WithPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.ShouldOrbitPointOfInterest(FPointOfInterestData_ForCompanion&)", WithPointData); }
    bool HasCompanionReachedPointOrbit_Implementation(const FPointOfInterestData_ForCompanion* OfPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit_Implementation(FPointOfInterestData_ForCompanion&)", OfPointData); }
    void Net_SetCompanionState(const TEnumAsByte<ECompanionState::Type> NewState) { NativeCall<void, const TEnumAsByte<ECompanionState::Type>>(this, "APrimalBuff_Companion.Net_SetCompanionState(TEnumAsByte<ECompanionState::Type>)", NewState); }
    void Server_SetCompanionState_Implementation(const ECompanionState::Type NewState) { NativeCall<void, const ECompanionState::Type>(this, "APrimalBuff_Companion.Server_SetCompanionState_Implementation(ECompanionState::Type)", NewState); }
    void OnRep_CompanionState() { NativeCall<void>(this, "APrimalBuff_Companion.OnRep_CompanionState()"); }
    bool CanStartCompanionEvent_Implementation(const AActor* EventActor, FCompanionEventData* WithEventData) { return NativeCall<bool, const AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.CanStartCompanionEvent_Implementation(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void StartCompanionEvent_Implementation(AActor* EventActor, FCompanionEventData* WithEventData) { NativeCall<void, AActor*, FCompanionEventData*>(this, "APrimalBuff_Companion.StartCompanionEvent_Implementation(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
    void StopCompanionEvent_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent_Implementation()"); }
    bool CanPlayCompanionReaction_Implementation(const FCompanionReactionData* CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData*>(this, "APrimalBuff_Companion.CanPlayCompanionReaction_Implementation(FCompanionReactionData&)", CanPlayReactionData); }
    void AddCompanionReaction(FCompanionReactionData* WithReactionData, const bool bForcePlayNow, UMaterialInterface* DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData*, const bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.AddCompanionReaction(FCompanionReactionData&,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
    void AddCompanionReaction_Internal(FCompanionReactionData* WithReactionData, const bool bForcePlayNow, UMaterialInterface* DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData*, const bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.AddCompanionReaction_Internal(FCompanionReactionData&,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
    void Client_AddCompanionReaction_Implementation(FCompanionReactionData* WithReactionData, bool bForcePlayNow, UMaterialInterface* DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData*, bool, UMaterialInterface*, const int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction_Implementation(FCompanionReactionData,bool,UMaterialInterface*,int)", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
    void PlayCompanionReaction(FCompanionReactionData* WithReactionData) { NativeCall<void, FCompanionReactionData*>(this, "APrimalBuff_Companion.PlayCompanionReaction(FCompanionReactionData&)", WithReactionData); }
    void StopCompanionReaction() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionReaction()"); }
    void OnCompanionReactionPlayed_Implementation(const FCompanionReactionData* PlayedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData*, const int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed_Implementation(FCompanionReactionData&,int)", PlayedReactionData, UniqueID); }
    void OnCompanionReactionStopped_Implementation(const FCompanionReactionData* StoppedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData*, const int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped_Implementation(FCompanionReactionData&,int)", StoppedReactionData, UniqueID); }
    bool IsPlayingCompanionReaction() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayingCompanionReaction()"); }
    void OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData* MissionDataBuff, AMissionType* Mission) { NativeCall<void, APrimalBuff_MissionData*, AMissionType*>(this, "APrimalBuff_Companion.OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData*,AMissionType*)", MissionDataBuff, Mission); }
    void OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData* MissionDataBuff, AMissionType* Mission, bool bSuccess) { NativeCall<void, APrimalBuff_MissionData*, AMissionType*, bool>(this, "APrimalBuff_Companion.OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData*,AMissionType*,bool)", MissionDataBuff, Mission, bSuccess); }
    AShooterHUD* GetMyPlayerHUD(__int16 a2) { return NativeCall<AShooterHUD*, __int16>(this, "APrimalBuff_Companion.GetMyPlayerHUD()", a2); }
    FCompanionReactionData* GetCurrentCompanionReactionData(FCompanionReactionData* result) { return NativeCall<FCompanionReactionData*, FCompanionReactionData*>(this, "APrimalBuff_Companion.GetCurrentCompanionReactionData()", result); }
    void OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion* FoundPointData, const AActor* FoundPointActor) { NativeCall<void, FPointOfInterestData_ForCompanion*, const AActor*>(this, "APrimalBuff_Companion.OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion&,AActor*)", FoundPointData, FoundPointActor); }
    void OnBeginOverlapCompanionEventTrigger_Implementation(AActor* ForTrigger) { NativeCall<void, AActor*>(this, "APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger_Implementation(AActor*)", ForTrigger); }
    void OnEndOverlapCompanionEventTrigger_Implementation(const AActor* ForTrigger) { NativeCall<void, const AActor*>(this, "APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger_Implementation(AActor*)", ForTrigger); }
    bool IsPlayerADS_Implementation(__int16 a2) { return NativeCall<bool, __int16>(this, "APrimalBuff_Companion.IsPlayerADS_Implementation()", a2); }
    bool TraceForCompanionBlockersFromPlayer_Implementation(UE::Math::TVector<double>* AdjustedLocation, const UE::Math::TVector<double>* TraceStart, const UE::Math::TVector<double>* TraceEnd, bool bDebug, float TraceRadius) { return NativeCall<bool, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, bool, float>(this, "APrimalBuff_Companion.TraceForCompanionBlockersFromPlayer_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,float)", AdjustedLocation, TraceStart, TraceEnd, bDebug, TraceRadius); }
    float PlayCompanionMontage(UAnimMontage* MontageToPlay, const float BlendInTime, const float BlendOutTime, const float PlayRate) { return NativeCall<float, UAnimMontage*, const float, const float, const float>(this, "APrimalBuff_Companion.PlayCompanionMontage(UAnimMontage*,float,float,float)", MontageToPlay, BlendInTime, BlendOutTime, PlayRate); }
    void StopCompanionMontage(UAnimMontage* AnimToStop, const float BlendOutTime) { NativeCall<void, UAnimMontage*, const float>(this, "APrimalBuff_Companion.StopCompanionMontage(UAnimMontage*,float)", AnimToStop, BlendOutTime); }
    void SetCompaionHiddenSetting_Implementation(bool IsHidden) { NativeCall<void, bool>(this, "APrimalBuff_Companion.SetCompaionHiddenSetting_Implementation(bool)", IsHidden); }
    void AllowVRTeleport() { NativeCall<void>(this, "APrimalBuff_Companion.AllowVRTeleport()"); }
    float GetUsablePriority_Implementation() { return NativeCall<float>(this, "APrimalBuff_Companion.GetUsablePriority_Implementation()"); }
    void RefreshCompanionColorization_Implementation(__int16 a2) { NativeCall<void, __int16>(this, "APrimalBuff_Companion.RefreshCompanionColorization_Implementation()", a2); }
    __int64 ForceUnhibernateAtLocation(UE::Math::TVector<double>* AtLocation) { return NativeCall<__int64, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.ForceUnhibernateAtLocation(UE::Math::TVector<double>)", AtLocation); }
    void ToggleForceMonologue() { NativeCall<void>(this, "APrimalBuff_Companion.ToggleForceMonologue()"); }
    void ClientToggleForceMonologue_Implementation(bool Newval) { NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue_Implementation(bool)", Newval); }
    void RequestLoadFallbackSubtitlesAudio(int a2) { NativeCall<void, int>(this, "APrimalBuff_Companion.RequestLoadFallbackSubtitlesAudio()", a2); }
    void BPServerside_IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex, bool* CouldDetermine, bool* HasPlayerUnlockedNote) { NativeCall<void, int, bool*, bool*>(this, "APrimalBuff_Companion.BPServerside_IsPerMapExplorerNoteUnlocked(int,bool&,bool&)", ExplorerNoteIndex, CouldDetermine, HasPlayerUnlockedNote); }

	bool& IsUsingLocalizedAudioTrackField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.IsUsingLocalizedAudioTrack"); }
	bool& ForcedMonologueCheatField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.ForcedMonologueCheat"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_Companion"); }

	USkeletalMeshComponentWithSoftRef*& CompanionMeshCompField() { return *GetNativePointerField<USkeletalMeshComponentWithSoftRef**>(this, "APrimalBuff_Companion.CompanionMeshComp"); }
	TEnumAsByte<ECompanionState::Type>& CompanionState_CurrentField() { return *GetNativePointerField<TEnumAsByte<ECompanionState::Type>*>(this, "APrimalBuff_Companion.CompanionState_Current"); }
	TEnumAsByte<ECompanionState::Type>& CompanionState_PreviousField() { return *GetNativePointerField<TEnumAsByte<ECompanionState::Type>*>(this, "APrimalBuff_Companion.CompanionState_Previous"); }
	FCompanionEventData& CurrentEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "APrimalBuff_Companion.CurrentEventData"); }
	FDelegate_OnCompanionReactionPlayed& OnReactionPlayed_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionPlayed*>(this, "APrimalBuff_Companion.OnReactionPlayed_Delegate"); }
	FDelegate_OnCompanionReactionStopped& OnReactionStopped_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionStopped*>(this, "APrimalBuff_Companion.OnReactionStopped_Delegate"); }
	FDelegate_OnCompanionReactionAnimPlayed& OnReactionAnimPlayed_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionAnimPlayed*>(this, "APrimalBuff_Companion.OnReactionAnimPlayed_Delegate"); }
	FDelegate_OnCompanionReactionVfxSpawned& OnReactionComponentSpawned_VFX_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionVfxSpawned*>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_VFX_Delegate"); }
	FDelegate_OnCompanionReactionSfxSpawned& OnReactionComponentSpawned_SFX_DelegateField() { return *GetNativePointerField<FDelegate_OnCompanionReactionSfxSpawned*>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_SFX_Delegate"); }
	void OnCompanionReactionStopped(const FCompanionReactionData& StoppedReactionData, int UniqueID) { NativeCall<void, const FCompanionReactionData&, int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped(FCompanionReactionData&,int)", StoppedReactionData, UniqueID); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetTradeOptionsAvailable(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetTradeOptionsAvailable()", result); }
	void OnBeginOverlapCompanionEventTrigger(AActor* ForTrigger) { NativeCall<void, AActor*>(this, "APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger(AActor*)", ForTrigger); }
	void NotifyItemAddedToCropPlot_Implementation(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalBuff_Companion.NotifyItemAddedToCropPlot_Implementation(UPrimalItem*)", anItem); }
	static void GetCompanionState_Previous_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_Companion.GetCompanionState_Previous_WrapperImpl(void*,void*)", Object, OutValue); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetOwnerTradeItems(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetOwnerTradeItems()", result); }
	bool ShouldFilterReceiverTradeItem_Implementation(UPrimalItem* ItemRef) { return NativeCall<bool, UPrimalItem*>(this, "APrimalBuff_Companion.ShouldFilterReceiverTradeItem_Implementation(UPrimalItem*)", ItemRef); }
	bool IsCompanionAbleToMonologue_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionAbleToMonologue_Implementation()"); }
	UE::Math::TVector<double>* GetCompanionWorldLocation_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.GetCompanionWorldLocation_Implementation()", result); }
	bool CanRemotelyFocusOnRemoteActorForTooltip(AActor* targetedActor) { return NativeCall<bool, AActor*>(this, "APrimalBuff_Companion.CanRemotelyFocusOnRemoteActorForTooltip(AActor*)", targetedActor); }
	bool HasCompanionReachedPointOrbit(const FPointOfInterestData_ForCompanion& OfPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion&>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit(FPointOfInterestData_ForCompanion&)", OfPointData); }
	void OnMadeHexagonPurchase_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.OnMadeHexagonPurchase_Implementation()"); }
	bool IsCompanionReadyToMonologue_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionReadyToMonologue_Implementation()"); }
	void OnCompanionStateChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.OnCompanionStateChanged_Implementation()"); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetReceiverTradeItems_Implementation(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetReceiverTradeItems_Implementation()", result); }
	void OnSpawnedForPlayer() { NativeCall<void>(this, "APrimalBuff_Companion.OnSpawnedForPlayer()"); }
	static UE::Math::TVector<double>* GetPointCompanionWorldOrbitOrigin(UE::Math::TVector<double>* result, const FPointOfInterestData_ForCompanion& ForPointData) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FPointOfInterestData_ForCompanion&>(nullptr, "APrimalBuff_Companion.GetPointCompanionWorldOrbitOrigin(FPointOfInterestData_ForCompanion&)", result, ForPointData); }
	bool IsCompanionReadyToMonologue() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionReadyToMonologue()"); }
	void OnCompanionStateChanged() { NativeCall<void>(this, "APrimalBuff_Companion.OnCompanionStateChanged()"); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetReceiverTradeItems(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetReceiverTradeItems()", result); }
	static void SetCompanionState_Previous_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_Companion.SetCompanionState_Previous_WrapperImpl(void*,void*)", Object, InValue); }
	void DrawFocusedActorToolTip(AActor* targetedActor) { NativeCall<void, AActor*>(this, "APrimalBuff_Companion.DrawFocusedActorToolTip(AActor*)", targetedActor); }
	void ClientAllowVRTeleport() { NativeCall<void>(this, "APrimalBuff_Companion.ClientAllowVRTeleport()"); }
	void OnCompanionEventEnded_Implementation(const FCompanionEventData& StoppingEventData) { NativeCall<void, const FCompanionEventData&>(this, "APrimalBuff_Companion.OnCompanionEventEnded_Implementation(FCompanionEventData&)", StoppingEventData); }
	bool CanPlayEnvironmentalCompanionReaction_Implementation(const FCompanionReactionData& CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData&>(this, "APrimalBuff_Companion.CanPlayEnvironmentalCompanionReaction_Implementation(FCompanionReactionData&)", CanPlayReactionData); }
	void StopCompanionEventExternal() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEventExternal()"); }
	void Tick_UpdateCompanionTransform(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionTransform(float)", DeltaTime); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllExplorerNotesInWorld(TArray<AActor*, TSizedDefaultAllocator<32> >* result, UWorld* World) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, UWorld*>(nullptr, "APrimalBuff_Companion.GetAllExplorerNotesInWorld(UWorld*)", result, World); }
	void NotifyItemCrafted_Implementation(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalBuff_Companion.NotifyItemCrafted_Implementation(UPrimalItem*)", anItem); }
	void OnPlayerPlayAnimation(UAnimMontage* PlayedAnim, float AnimDuration, FName StartSectionName) { NativeCall<void, UAnimMontage*, float, FName>(this, "APrimalBuff_Companion.OnPlayerPlayAnimation(UAnimMontage*,float,FName)", PlayedAnim, AnimDuration, StartSectionName); }
	bool ShouldFilterOwnerTradeItem_Implementation(UPrimalItem* ItemRef) { return NativeCall<bool, UPrimalItem*>(this, "APrimalBuff_Companion.ShouldFilterOwnerTradeItem_Implementation(UPrimalItem*)", ItemRef); }
	static void SetCompanionState_Current_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_Companion.SetCompanionState_Current_WrapperImpl(void*,void*)", Object, InValue); }
	void Tick_UpdateCompanionTransform_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionTransform_Implementation(float)", DeltaTime); }
	void NotifyItemCrafted(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalBuff_Companion.NotifyItemCrafted(UPrimalItem*)", anItem); }
	void OnPlayerPlayAnimation_Implementation(UAnimMontage* PlayedAnim, float AnimDuration, FName StartSectionName) { NativeCall<void, UAnimMontage*, float, FName>(this, "APrimalBuff_Companion.OnPlayerPlayAnimation_Implementation(UAnimMontage*,float,FName)", PlayedAnim, AnimDuration, StartSectionName); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetOwnerTradeItems_Implementation(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetOwnerTradeItems_Implementation()", result); }
	void OnCompanionEventStarted_Implementation(const FCompanionEventData& StartingEventData) { NativeCall<void, const FCompanionEventData&>(this, "APrimalBuff_Companion.OnCompanionEventStarted_Implementation(FCompanionEventData&)", StartingEventData); }
	void StartCompanionEventExternal(AActor* EventActor, FCompanionEventData& WithEventData) { NativeCall<void, AActor*, FCompanionEventData&>(this, "APrimalBuff_Companion.StartCompanionEventExternal(AActor*,FCompanionEventData&)", EventActor, WithEventData); }
	void OnEndOverlapCompanionEventTrigger(const AActor* ForTrigger) { NativeCall<void, const AActor*>(this, "APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger(AActor*)", ForTrigger); }
	void FocusOnRemoteTarget_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.FocusOnRemoteTarget_Implementation()"); }
	void Tick_CompanionEvents(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents(float)", DeltaTime); }
	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GetTradeOptionsAvailable_Implementation(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_Companion.GetTradeOptionsAvailable_Implementation()", result); }
	void OnCompanionEventEnded(const FCompanionEventData& StoppingEventData) { NativeCall<void, const FCompanionEventData&>(this, "APrimalBuff_Companion.OnCompanionEventEnded(FCompanionEventData&)", StoppingEventData); }
	void ClientToggleForceMonologue(bool Newval) { NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue(bool)", Newval); }
	bool CanPlayEnvironmentalCompanionReaction(const FCompanionReactionData& CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData&>(this, "APrimalBuff_Companion.CanPlayEnvironmentalCompanionReaction(FCompanionReactionData&)", CanPlayReactionData); }
	bool ShouldFilterReceiverTradeItem(UPrimalItem* ItemRef) { return NativeCall<bool, UPrimalItem*>(this, "APrimalBuff_Companion.ShouldFilterReceiverTradeItem(UPrimalItem*)", ItemRef); }
	void PlayLinkedCompanionReactionsByExplorerNoteIndex_Implementation(int index) { NativeCall<void, int>(this, "APrimalBuff_Companion.PlayLinkedCompanionReactionsByExplorerNoteIndex_Implementation(int)", index); }
	static void GetCompanionState_Current_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_Companion.GetCompanionState_Current_WrapperImpl(void*,void*)", Object, OutValue); }
	void Tick_UpdateCompanionState(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState(float)", DeltaTime); }
	bool ShouldFilterOwnerTradeItem(UPrimalItem* ItemRef) { return NativeCall<bool, UPrimalItem*>(this, "APrimalBuff_Companion.ShouldFilterOwnerTradeItem(UPrimalItem*)", ItemRef); }
	void NotifyItemAddedToCropPlot(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalBuff_Companion.NotifyItemAddedToCropPlot(UPrimalItem*)", anItem); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.GetInterpolatedLocation()", result); }
	void OnCompanionEventStarted(const FCompanionEventData& StartingEventData) { NativeCall<void, const FCompanionEventData&>(this, "APrimalBuff_Companion.OnCompanionEventStarted(FCompanionEventData&)", StartingEventData); }
	void OnCompanionReactionPlayed(const FCompanionReactionData& PlayedReactionData, int UniqueID) { NativeCall<void, const FCompanionReactionData&, int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed(FCompanionReactionData&,int)", PlayedReactionData, UniqueID); }
	UE::Math::TVector<double>* GetCompanionWorldLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBuff_Companion.GetCompanionWorldLocation()", result); }
	void PostLoad() { NativeCall<void>(this, "APrimalBuff_Companion.PostLoad()"); }
	void OnFoundPoI(FPointOfInterestData_ForCompanion& FoundPointData, const AActor* FoundPointActor) { NativeCall<void, FPointOfInterestData_ForCompanion&, const AActor*>(this, "APrimalBuff_Companion.OnFoundPoI(FPointOfInterestData_ForCompanion&,AActor*)", FoundPointData, FoundPointActor); }
	void OnSpawnHexagons_Implementation(float OverrideCollectSFXVolume, bool VFXImmediatelyAttracts, int HexagonQuantity) { NativeCall<void, float, bool, int>(this, "APrimalBuff_Companion.OnSpawnHexagons_Implementation(float,bool,int)", OverrideCollectSFXVolume, VFXImmediatelyAttracts, HexagonQuantity); }
	void OnMadeHexagonPurchase() { NativeCall<void>(this, "APrimalBuff_Companion.OnMadeHexagonPurchase()"); }
};