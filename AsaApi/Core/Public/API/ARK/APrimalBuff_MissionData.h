#pragma once
#include "BulkForward.h"


struct APrimalBuff_MissionData : APrimalBuff
{
    // Fields

    AMissionType*& ActiveMissionField() { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_MissionData.ActiveMission"); }
    int& ActiveMissionIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_MissionData.ActiveMissionIndex"); }
    //TArray<FClientMissionData, TSizedDefaultAllocator<32> >& CurrentMissionsField() { return *GetNativePointerField<TArray<FClientMissionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.CurrentMissions"); }
    UParticleSystem*& MissionIndicatorParticlesField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalBuff_MissionData.MissionIndicatorParticles"); }
    FString& NonHostPrepAreaNotificationField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_MissionData.NonHostPrepAreaNotification"); }
    TSubclassOf<AMissionType>& PendingMissionField() { return *GetNativePointerField<TSubclassOf<AMissionType>*>(this, "APrimalBuff_MissionData.PendingMission"); }
    //FOnMissionClientEvent& OnPlayerAddedToMissionField() { return *GetNativePointerField<FOnMissionClientEvent*>(this, "APrimalBuff_MissionData.OnPlayerAddedToMission"); }
    //FOnMissionClientBoolEvent& OnPlayerRemovedFromMissionField() { return *GetNativePointerField<FOnMissionClientBoolEvent*>(this, "APrimalBuff_MissionData.OnPlayerRemovedFromMission"); }
    //FOnMissionClientDataUpdated& MissionClientDataUpdatedField() { return *GetNativePointerField<FOnMissionClientDataUpdated*>(this, "APrimalBuff_MissionData.MissionClientDataUpdated"); }
    TMap<FName, TSharedPtr<FJsonObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSharedPtr<FJsonObject>, 0> >& MissionDataMapField() { return *GetNativePointerField<TMap<FName, TSharedPtr<FJsonObject>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TSharedPtr<FJsonObject>, 0> >*>(this, "APrimalBuff_MissionData.MissionDataMap"); }
    //TArray<FClientMissionSubscriptionData, TSizedDefaultAllocator<32> >& ReplicatedMissionDataSubscriptionsField() { return *GetNativePointerField<TArray<FClientMissionSubscriptionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ReplicatedMissionDataSubscriptions"); }
    long double& ServerLastEligibilityCheckNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_MissionData.ServerLastEligibilityCheckNetworkTime"); }
    long double& ClientLastEligibilityCheckNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_MissionData.ClientLastEligibilityCheckNetworkTime"); }
    //TMap<FName, FClientMissionEligibility, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FClientMissionEligibility, 0> >& ClientMissionEligibilityMapField() { return *GetNativePointerField<TMap<FName, FClientMissionEligibility, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FClientMissionEligibility, 0> >*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityMap"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_MissionData"); }
    void ClientLoadMissionLevels(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels(FName)", MissionTag); }
    //void ClientMissionEligibilityResponse(const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >* EligibilityData) { NativeCall<void, const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse(TArray<FMissionEligibilityData,TSizedDefaultAllocator<32>>&)", EligibilityData); }
    void ClientSendMissionAlert(EMissionAlertType::Type AlertType, const FString* AlertTitle, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >* AlertEntries, float DisplayTime, USoundBase* Sound, bool FlyoutFromTop) { NativeCall<void, EMissionAlertType::Type, const FString*, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >*, float, USoundBase*, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert(EMissionAlertType::Type,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", AlertType, AlertTitle, AlertEntries, DisplayTime, Sound, FlyoutFromTop); }
    void ServerRequestMissionEligibilityCheck(const AMissionDispatcher* dispatcherFilter) { NativeCall<void, const AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck(AMissionDispatcher*)", dispatcherFilter); }
    void ServerRequestStartMission(TSubclassOf<AMissionType> MissionType, AMissionDispatcher* FromDispatcher) { NativeCall<void, TSubclassOf<AMissionType>, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMission(TSubclassOf<AMissionType>,AMissionDispatcher*)", MissionType, FromDispatcher); }
    void ServerRequestStartMissionWithMissionTag(FName MissionTag, AMissionDispatcher* FromDispatcher) { NativeCall<void, FName, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag(FName,AMissionDispatcher*)", MissionTag, FromDispatcher); }
    void ServerRequestToggleWeapon(AMissionType* Mission) { NativeCall<void, AMissionType*>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon(AMissionType*)", Mission); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalBuff_MissionData();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool TemplateAllowActorSpawn(UWorld* World, const UE::Math::TVector<double>* AtLocation, const UE::Math::TRotator<double>* AtRotation, const FActorSpawnParameters* SpawnParameters) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FActorSpawnParameters*>(this, "APrimalBuff_MissionData.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", World, AtLocation, AtRotation, SpawnParameters); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBuff_MissionData.BeginPlay()"); }
    void PostBeginPlay(__int64 a2) { NativeCall<void, __int64>(this, "APrimalBuff_MissionData.PostBeginPlay()", a2); }
    void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_MissionData.Tick(float)", DeltaTime); }
    void UpdateBuffPersistentData_Implementation(bool bFromInstigatorDeath, bool bInstigatorDisconnected) { NativeCall<void, bool, bool>(this, "APrimalBuff_MissionData.UpdateBuffPersistentData_Implementation(bool,bool)", bFromInstigatorDeath, bInstigatorDisconnected); }
    int FindCurrentMissionIdx(AMissionType* mission, bool bCreateIfMissing) { return NativeCall<int, AMissionType*, bool>(this, "APrimalBuff_MissionData.FindCurrentMissionIdx(AMissionType*,bool)", mission, bCreateIfMissing); }
    //void UpdateMissionRequirements(AMissionType* ForMission, const TArray<FMissionPhaseRequirement, TSizedDefaultAllocator<32> >* UpdatedRequirements, bool bPerPlayerIndicators) { NativeCall<void, AMissionType*, const TArray<FMissionPhaseRequirement, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalBuff_MissionData.UpdateMissionRequirements(AMissionType*,TArray<FMissionPhaseRequirement,TSizedDefaultAllocator<32>>&,bool)", ForMission, UpdatedRequirements, bPerPlayerIndicators); }
    //void UpdateMissionWorldIndicators(AMissionType* ForMission, const TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >* UpdatedWorldIndicators, bool bPerPlayerIndicators) { NativeCall<void, AMissionType*, const TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalBuff_MissionData.UpdateMissionWorldIndicators(AMissionType*,TArray<FMissionWorldIndicator,TSizedDefaultAllocator<32>>&,bool)", ForMission, UpdatedWorldIndicators, bPerPlayerIndicators); }
    void AddPlayerToMission(AMissionType* Mission, bool bSetAsActiveMission) { NativeCall<void, AMissionType*, bool>(this, "APrimalBuff_MissionData.AddPlayerToMission(AMissionType*,bool)", Mission, bSetAsActiveMission); }
    bool RemovePlayerFromMission(AMissionType* Mission, bool bMissionCompletedSuccessfully) { return NativeCall<bool, AMissionType*, bool>(this, "APrimalBuff_MissionData.RemovePlayerFromMission(AMissionType*,bool)", Mission, bMissionCompletedSuccessfully); }
    void ServerMulticastRequiredProps_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps_Implementation()"); }
    void ServerRequestStartMissionWithMissionTag_Implementation(FName MissionTag, AMissionDispatcher* FromDispatcher) { NativeCall<void, FName, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag_Implementation(FName,AMissionDispatcher*)", MissionTag, FromDispatcher); }
    void ClientLoadMissionLevels_Implementation(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels_Implementation(FName)", MissionTag); }
    void LoadLevelsForMissionTag(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.LoadLevelsForMissionTag(FName)", MissionTag); }
    void ClientUnloadMissionLevels_Implementation(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientUnloadMissionLevels_Implementation(FName)", MissionTag); }
    void UnloadLevelsForMissionTag(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.UnloadLevelsForMissionTag(FName)", MissionTag); }
    void ServerRequestStartMission_Implementation(TSubclassOf<AMissionType> MissionType, AMissionDispatcher* FromDispatcher) { NativeCall<void, TSubclassOf<AMissionType>, AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestStartMission_Implementation(TSubclassOf<AMissionType>,AMissionDispatcher*)", MissionType, FromDispatcher); }
    void ServerRequestCancelMission_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission_Implementation()"); }
    void ClientSendMissionNotification_Implementation(AMissionType* FromMission, FName NotificationTag, FLinearColor* MessageColor, UTexture2D* MessageIcon, float DisplayTime, float DisplayScale, bool bIsSingleton, USoundBase* MessageSound) { NativeCall<void, AMissionType*, FName, FLinearColor*, UTexture2D*, float, float, bool, USoundBase*>(this, "APrimalBuff_MissionData.ClientSendMissionNotification_Implementation(AMissionType*,FName,FLinearColor,UTexture2D*,float,float,bool,USoundBase*)", FromMission, NotificationTag, MessageColor, MessageIcon, DisplayTime, DisplayScale, bIsSingleton, MessageSound); }
    void ClientSendMissionAlert_Implementation(EMissionAlertType::Type AlertType, const FString* AlertTitle, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >* AlertEntries, float DisplayTime, USoundBase* Sound, bool FlyoutFromTop) { NativeCall<void, EMissionAlertType::Type, const FString*, const TArray<FMissionAlertEntry, TSizedDefaultAllocator<32> >*, float, USoundBase*, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert_Implementation(EMissionAlertType::Type,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", AlertType, AlertTitle, AlertEntries, DisplayTime, Sound, FlyoutFromTop); }
    void ServerRequestEquipMissionItem_Implementation(AMissionType* Mission, FItemNetID ItemID) { NativeCall<void, AMissionType*, FItemNetID>(this, "APrimalBuff_MissionData.ServerRequestEquipMissionItem_Implementation(AMissionType*,FItemNetID)", Mission, ItemID); }
    void ServerRequestToggleWeapon_Implementation(AMissionType* Mission) { NativeCall<void, AMissionType*>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon_Implementation(AMissionType*)", Mission); }
    void ServerRequestMissionEligibilityCheck_Implementation(const AMissionDispatcher* dispatcherFilter) { NativeCall<void, const AMissionDispatcher*>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck_Implementation(AMissionDispatcher*)", dispatcherFilter); }
    //void ClientMissionEligibilityResponse_Implementation(const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >* EligibilityData) { NativeCall<void, const TArray<FMissionEligibilityData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse_Implementation(TArray<FMissionEligibilityData,TSizedDefaultAllocator<32>>&)", EligibilityData); }
    void MultiClearParticleIndicator_Implementation(float RemoveAfterDuration) { NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator_Implementation(float)", RemoveAfterDuration); }
    void ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable> EmitterType, UE::Math::TTransform<double>* EmitterTransform, float EmitterLifespan) { NativeCall<void, TSubclassOf<APrimalEmitterSpawnable>, UE::Math::TTransform<double>*, float>(this, "APrimalBuff_MissionData.ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable>,UE::Math::TTransform<double>,float)", EmitterType, EmitterTransform, EmitterLifespan); }
    void AutoHideIndicatorParticles() { NativeCall<void>(this, "APrimalBuff_MissionData.AutoHideIndicatorParticles()"); }
    //bool IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType> MissionType, bool* bOutIsRecentData, FClientMissionEligibility* OutEligibilityData, float MaxTimeConsideredRecent, const AMissionDispatcher* dispatcherFilter) { return NativeCall<bool, TSubclassOf<AMissionType>, bool*, FClientMissionEligibility*, float, const AMissionDispatcher*>(this, "APrimalBuff_MissionData.IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType>,bool&,FClientMissionEligibility&,float,AMissionDispatcher*)", MissionType, bOutIsRecentData, OutEligibilityData, MaxTimeConsideredRecent, dispatcherFilter); }
    void ClientMissionEvent_Implementation(AMissionType* Mission, bool bMissionStarted, bool bMissionCompletedSuccessfully) { NativeCall<void, AMissionType*, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent_Implementation(AMissionType*,bool,bool)", Mission, bMissionStarted, bMissionCompletedSuccessfully); }
    bool IsMissionTypeActive(TSubclassOf<AMissionType> MissionType, bool bExactClassMatch) { return NativeCall<bool, TSubclassOf<AMissionType>, bool>(this, "APrimalBuff_MissionData.IsMissionTypeActive(TSubclassOf<AMissionType>,bool)", MissionType, bExactClassMatch); }
    bool IsMissionTypeActiveWithMissionTag(FName MissionTag) { return NativeCall<bool, FName>(this, "APrimalBuff_MissionData.IsMissionTypeActiveWithMissionTag(FName)", MissionTag); }
    //void GetWorldIndicatorsForMission(AMissionType* Mission, TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >* OutWorldIndicators, bool bCompanionOnly, bool bSortByPriority) { NativeCall<void, AMissionType*, TArray<FMissionWorldIndicator, TSizedDefaultAllocator<32> >*, bool, bool>(this, "APrimalBuff_MissionData.GetWorldIndicatorsForMission(AMissionType*,TArray<FMissionWorldIndicator,TSizedDefaultAllocator<32>>&,bool,bool)", Mission, OutWorldIndicators, bCompanionOnly, bSortByPriority); }
    void ReplicatedMissionDataUpdated(__int64 a2) { NativeCall<void, __int64>(this, "APrimalBuff_MissionData.ReplicatedMissionDataUpdated()", a2); }
    void MultiUpdateMissionData_Bool_Implementation(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Bool_Implementation(FName,FName,bool)", MissionTag, Key, Value); }
    void MultiUpdateMissionData_Int_Implementation(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Int_Implementation(FName,FName,int)", MissionTag, Key, Value); }
    bool GetMissionData_Bool(FName MissionTag, FName Key, bool* OutValue) { return NativeCall<bool, FName, FName, bool*>(this, "APrimalBuff_MissionData.GetMissionData_Bool(FName,FName,bool&)", MissionTag, Key, OutValue); }
    void SetMissionData_Bool(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.SetMissionData_Bool(FName,FName,bool)", MissionTag, Key, Value); }
    bool GetMissionData_String(FName MissionTag, FName Key, FString* OutValue) { return NativeCall<bool, FName, FName, FString*>(this, "APrimalBuff_MissionData.GetMissionData_String(FName,FName,FString&)", MissionTag, Key, OutValue); }
    void SetMissionData_String(FName MissionTag, FName Key, const FString* Value) { NativeCall<void, FName, FName, const FString*>(this, "APrimalBuff_MissionData.SetMissionData_String(FName,FName,FString&)", MissionTag, Key, Value); }
    bool GetMissionData_Int(FName MissionTag, FName Key, int* OutValue) { return NativeCall<bool, FName, FName, int*>(this, "APrimalBuff_MissionData.GetMissionData_Int(FName,FName,int&)", MissionTag, Key, OutValue); }
    void SetMissionData_Int(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.SetMissionData_Int(FName,FName,int)", MissionTag, Key, Value); }
    bool GetMissionData_Float(FName MissionTag, FName Key, float* OutValue) { return NativeCall<bool, FName, FName, float*>(this, "APrimalBuff_MissionData.GetMissionData_Float(FName,FName,float&)", MissionTag, Key, OutValue); }
    void SetMissionData_Float(FName MissionTag, FName Key, float Value) { NativeCall<void, FName, FName, float>(this, "APrimalBuff_MissionData.SetMissionData_Float(FName,FName,float)", MissionTag, Key, Value); }
    bool GetMissionData_Double(FName MissionTag, FName Key, long double* OutValue) { return NativeCall<bool, FName, FName, long double*>(this, "APrimalBuff_MissionData.GetMissionData_Double(FName,FName,double&)", MissionTag, Key, OutValue); }
    void SetMissionData_Double(FName MissionTag, FName Key, long double Value) { NativeCall<void, FName, FName, long double>(this, "APrimalBuff_MissionData.SetMissionData_Double(FName,FName,double)", MissionTag, Key, Value); }
    bool GetMissionData_Vector(FName MissionTag, FName Key, UE::Math::TVector<double>* OutValue) { return NativeCall<bool, FName, FName, UE::Math::TVector<double>*>(this, "APrimalBuff_MissionData.GetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)", MissionTag, Key, OutValue); }
    void SetMissionData_Vector(FName MissionTag, FName Key, const UE::Math::TVector<double>* Value) { NativeCall<void, FName, FName, const UE::Math::TVector<double>*>(this, "APrimalBuff_MissionData.SetMissionData_Vector(FName,FName,UE::Math::TVector<double>&)", MissionTag, Key, Value); }
    bool GetMissionData_Rotator(FName MissionTag, FName Key, UE::Math::TRotator<double>* OutValue) { return NativeCall<bool, FName, FName, UE::Math::TRotator<double>*>(this, "APrimalBuff_MissionData.GetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)", MissionTag, Key, OutValue); }
    void SetMissionData_Rotator(FName MissionTag, FName Key, const UE::Math::TRotator<double>* Value) { NativeCall<void, FName, FName, const UE::Math::TRotator<double>*>(this, "APrimalBuff_MissionData.SetMissionData_Rotator(FName,FName,UE::Math::TRotator<double>&)", MissionTag, Key, Value); }
    //void GetMissionDebugData(TArray<FSerializedMissionData, TSizedDefaultAllocator<32> >* OutMissionData) { NativeCall<void, TArray<FSerializedMissionData, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_MissionData.GetMissionDebugData(TArray<FSerializedMissionData,TSizedDefaultAllocator<32>>&)", OutMissionData); }
    FName* GetBiomeMissionTag(FName* result, const UE::Math::TVector<double>* Location) { return NativeCall<FName*, FName*, const UE::Math::TVector<double>*>(this, "APrimalBuff_MissionData.GetBiomeMissionTag(UE::Math::TVector<double>&)", result, Location); }
    void OnRep_MissionIndicatorParticles() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_MissionIndicatorParticles()"); }
    void SetupClientMissionCallbacks() { NativeCall<void>(this, "APrimalBuff_MissionData.SetupClientMissionCallbacks()"); }
    void OnActiveMissionPhaseStarted(AMissionType* Mission, FName OldPhase, FName NewPhase) { NativeCall<void, AMissionType*, FName, FName>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseStarted(AMissionType*,FName,FName)", Mission, OldPhase, NewPhase); }
    void OnActiveMissionPhaseEnded(AMissionType* Mission, FName OldPhase, FName NewPhase) { NativeCall<void, AMissionType*, FName, FName>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseEnded(AMissionType*,FName,FName)", Mission, OldPhase, NewPhase); }
    bool IsMissionDataReplicated(FName MissionTag, FName Key) { return NativeCall<bool, FName, FName>(this, "APrimalBuff_MissionData.IsMissionDataReplicated(FName,FName)", MissionTag, Key); }
    void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_MissionData.SetupForInstigator()"); }

	bool& bShouldMulticastCurrentMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_MissionData.bShouldMulticastCurrentMissions"); }
	bool& bIsPlayingMissionMovieField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_MissionData.bIsPlayingMissionMovie"); }
	bool& bHasRequestedMovieSkipField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_MissionData.bHasRequestedMovieSkip"); }
	bool& bSentClientStopMovieField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_MissionData.bSentClientStopMovie"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_MissionData"); }

	FOnMissionClientEvent& OnPlayerAddedToMissionField() { return *GetNativePointerField<FOnMissionClientEvent*>(this, "APrimalBuff_MissionData.OnPlayerAddedToMission"); }
	FOnMissionClientBoolEvent& OnPlayerRemovedFromMissionField() { return *GetNativePointerField<FOnMissionClientBoolEvent*>(this, "APrimalBuff_MissionData.OnPlayerRemovedFromMission"); }
	FOnMissionClientDataUpdated& MissionClientDataUpdatedField() { return *GetNativePointerField<FOnMissionClientDataUpdated*>(this, "APrimalBuff_MissionData.MissionClientDataUpdated"); }
	UMissionModule_PlayMissionMovie*& MissionMovieModuleCDOField() { return *GetNativePointerField<UMissionModule_PlayMissionMovie**>(this, "APrimalBuff_MissionData.MissionMovieModuleCDO"); }
	FClientMissionData& GetCurrentMissionForWriteAndMarkDirty(int MissionIdx) { return NativeCall<FClientMissionData&, int>(this, "APrimalBuff_MissionData.GetCurrentMissionForWriteAndMarkDirty(int)", MissionIdx); }
	void ServerFinishedMissionMovie_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerFinishedMissionMovie_Implementation()"); }
	void ServerRequestMissionMovieSkip_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestMissionMovieSkip_Implementation()"); }
	void MultiUpdateMissionData_Int(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Int(FName,FName,int)", MissionTag, Key, Value); }
	static void SetMissionIndicatorParticles_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_MissionData.SetMissionIndicatorParticles_WrapperImpl(void*,void*)", Object, InValue); }
	void ClientStartMissionMovie(unsigned char ModuleIndex) { NativeCall<void, unsigned char>(this, "APrimalBuff_MissionData.ClientStartMissionMovie(unsignedchar)", ModuleIndex); }
	void RemoveMissionItem(AMissionType* ForMission, const FItemNetID& ItemID) { NativeCall<void, AMissionType*, const FItemNetID&>(this, "APrimalBuff_MissionData.RemoveMissionItem(AMissionType*,FItemNetID&)", ForMission, ItemID); }
	static void GetActiveMissionIndex_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_MissionData.GetActiveMissionIndex_WrapperImpl(void*,void*)", Object, OutValue); }
	void StartFadeFromBlack() { NativeCall<void>(this, "APrimalBuff_MissionData.StartFadeFromBlack()"); }
	void OnFinishedFadeToBlack() { NativeCall<void>(this, "APrimalBuff_MissionData.OnFinishedFadeToBlack()"); }
	AMissionType* GetActiveMission() { return NativeCall<AMissionType*>(this, "APrimalBuff_MissionData.GetActiveMission()"); }
	static void GetPendingMission_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_MissionData.GetPendingMission_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetCurrentMissions_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_MissionData.SetCurrentMissions_WrapperImpl(void*,void*)", Object, InValue); }
	static FString* KeyToString(FString* result, FName Key) { return NativeCall<FString*, FString*, FName>(nullptr, "APrimalBuff_MissionData.KeyToString(FName)", result, Key); }
	static void SetPendingMission_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_MissionData.SetPendingMission_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetMissionIndicatorParticles_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_MissionData.GetMissionIndicatorParticles_WrapperImpl(void*,void*)", Object, OutValue); }
	void ClientStopMissionMovie() { NativeCall<void>(this, "APrimalBuff_MissionData.ClientStopMissionMovie()"); }
	void MultiUpdateMissionData_Bool(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Bool(FName,FName,bool)", MissionTag, Key, Value); }
	void ServerRequestMissionMovieSkip() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestMissionMovieSkip()"); }
	static void SetActiveMissionIndex_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_MissionData.SetActiveMissionIndex_WrapperImpl(void*,void*)", Object, InValue); }
	void StartMissionMovie() { NativeCall<void>(this, "APrimalBuff_MissionData.StartMissionMovie()"); }
	void ServerRequestCancelMission() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission()"); }
	void ClientStopMissionMovie_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ClientStopMissionMovie_Implementation()"); }
	void OnRep_ActiveMissionIndex() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_ActiveMissionIndex()"); }
	void MultiClearParticleIndicator(float RemoveAfterDuration) { NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator(float)", RemoveAfterDuration); }
	void StartFadeToBlack() { NativeCall<void>(this, "APrimalBuff_MissionData.StartFadeToBlack()"); }
	void GetAllCurrentMissions(TArray<AMissionType*, TSizedDefaultAllocator<32> >& OutMissions) { NativeCall<void, TArray<AMissionType*, TSizedDefaultAllocator<32> >&>(this, "APrimalBuff_MissionData.GetAllCurrentMissions(TArray<AMissionType*,TSizedDefaultAllocator<32>>&)", OutMissions); }
	void OnRep_CurrentMissions() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_CurrentMissions()"); }
	bool HasRequestedMissionMovieSkip() { return NativeCall<bool>(this, "APrimalBuff_MissionData.HasRequestedMissionMovieSkip()"); }
	void OnFinishedFadeFromBlack() { NativeCall<void>(this, "APrimalBuff_MissionData.OnFinishedFadeFromBlack()"); }
	void ClientMissionEvent(AMissionType* Mission, bool bMissionStarted, bool bMissionCompletedSuccessfully) { NativeCall<void, AMissionType*, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent(AMissionType*,bool,bool)", Mission, bMissionStarted, bMissionCompletedSuccessfully); }
	void ClientStartMissionMovie_Implementation(unsigned char ModuleIndex) { NativeCall<void, unsigned char>(this, "APrimalBuff_MissionData.ClientStartMissionMovie_Implementation(unsignedchar)", ModuleIndex); }
	void ServerMulticastRequiredProps() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps()"); }
	void ServerFinishedMissionMovie() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerFinishedMissionMovie()"); }
	bool IsPlayingMissionMovie() { return NativeCall<bool>(this, "APrimalBuff_MissionData.IsPlayingMissionMovie()"); }
	void OnMissionMovieSkipRequested() { NativeCall<void>(this, "APrimalBuff_MissionData.OnMissionMovieSkipRequested()"); }
	void ClientUnloadMissionLevels(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientUnloadMissionLevels(FName)", MissionTag); }
	void AddMissionItem(AMissionType* ForMission, const FItemNetInfo& NewItem) { NativeCall<void, AMissionType*, const FItemNetInfo&>(this, "APrimalBuff_MissionData.AddMissionItem(AMissionType*,FItemNetInfo&)", ForMission, NewItem); }
};