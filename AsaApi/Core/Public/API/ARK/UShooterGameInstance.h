#pragma once
#include "BulkForward.h"
#include "UPrimalGameInstance.h"

struct UShooterGameInstance : public UPrimalGameInstance
{
public:
	UShooterGameInstance() = delete;
	~UShooterGameInstance() = delete;
	UShooterGameInstance(const UShooterGameInstance&) = delete;
	UShooterGameInstance& operator=(const UShooterGameInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGameInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGameInstance"); }

	FName& LastStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.LastState"); }
	FName& CurrentStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.CurrentState"); }
	FString& FirstLoggedInPlayerField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.FirstLoggedInPlayer"); }
	FAsyncAssetLoadedDelegate& OnAsyncAssetLoadedField() { return *GetNativePointerField<FAsyncAssetLoadedDelegate*>(this, "UShooterGameInstance.OnAsyncAssetLoaded"); }
	FNotifyBlockingPlayersOfOnPossessDelegate& OnPossessBlockPlayerNotificationField() { return *GetNativePointerField<FNotifyBlockingPlayersOfOnPossessDelegate*>(this, "UShooterGameInstance.OnPossessBlockPlayerNotification"); }
	UWorldModifiersContainer*& WorldModifiersContainerField() { return *GetNativePointerField<UWorldModifiersContainer**>(this, "UShooterGameInstance.WorldModifiersContainer"); }
	bool& bForceDefaultMainMenuField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bForceDefaultMainMenu"); }
	bool& bForceStateChangeField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bForceStateChange"); }
	UMusicPlayer*& MusicPlayerField() { return *GetNativePointerField<UMusicPlayer**>(this, "UShooterGameInstance.MusicPlayer"); }
	FString& WelcomeScreenMapField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WelcomeScreenMap"); }
	FString& MainMenuMapField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.MainMenuMap"); }
	int& AutoPgoSweepIntervalField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.AutoPgoSweepInterval"); }
	FName& PendingStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.PendingState"); }
	FShooterPendingMessage& PendingMessageField() { return *GetNativePointerField<FShooterPendingMessage*>(this, "UShooterGameInstance.PendingMessage"); }
	FShooterPendingMessage& PendingMessageAfterReachingStateField() { return *GetNativePointerField<FShooterPendingMessage*>(this, "UShooterGameInstance.PendingMessageAfterReachingState"); }
	bool& bShouldShowMessageAfterReachingStateField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bShouldShowMessageAfterReachingState"); }
	FShooterPendingInvite& PendingInviteField() { return *GetNativePointerField<FShooterPendingInvite*>(this, "UShooterGameInstance.PendingInvite"); }
	FDiscordPendingJoin& PendingDiscordJoinField() { return *GetNativePointerField<FDiscordPendingJoin*>(this, "UShooterGameInstance.PendingDiscordJoin"); }
	FString& TravelURLField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.TravelURL"); }
	bool& bIsOnlineField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsOnline"); }
	bool& bPendingEnableSplitscreenField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bPendingEnableSplitscreen"); }
	bool& bIsLicensedField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsLicensed"); }
	bool& bIsTravellingSeamlesslyField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsTravellingSeamlessly"); }
	bool& bIsWaitingOnAppResumeField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsWaitingOnAppResume"); }
	float& TimeSinceInviteRecievedField() { return *GetNativePointerField<float*>(this, "UShooterGameInstance.TimeSinceInviteRecieved"); }
	int& IgnorePairingChangeForControllerIdField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.IgnorePairingChangeForControllerId"); }
	EOnlineServerConnectionStatus::Type& CurrentConnectionStatusField() { return *GetNativePointerField<EOnlineServerConnectionStatus::Type*>(this, "UShooterGameInstance.CurrentConnectionStatus"); }
	FDelegateHandle& LocalPlayerAddedForDiscordJoinBindingHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameInstance.LocalPlayerAddedForDiscordJoinBindingHandle"); }
	FDelegateHandle& LocalPlayerRemovedForDiscordJoinBindingHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameInstance.LocalPlayerRemovedForDiscordJoinBindingHandle"); }
	TWeakObjectPtr<UShooterDiscordUISubsystem, FWeakObjectPtr>& BoundDiscordLocalPlayerSubsystemField() { return *GetNativePointerField<TWeakObjectPtr<UShooterDiscordUISubsystem, FWeakObjectPtr>*>(this, "UShooterGameInstance.BoundDiscordLocalPlayerSubsystem"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ObjectsPendingTimeShiftField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UShooterGameInstance.ObjectsPendingTimeShift"); }
	FDelegateHandle& OnEndSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameInstance.OnEndSessionCompleteDelegateHandle"); }
	FTimerHandle& HandleSignInChangeMessagingHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UShooterGameInstance.HandleSignInChangeMessagingHandle"); }
	TArray<FString, TSizedDefaultAllocator<32> >& LockedLoginAccountIdsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UShooterGameInstance.LockedLoginAccountIds"); }
	FDelegateHandle& LoginDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameInstance.LoginDelegateHandle"); }
	FDelegateHandle& DiscordLoginDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameInstance.DiscordLoginDelegateHandle"); }
	FString& DiscordSecretField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.DiscordSecret"); }
	double& TimeTillNextSTSTokenRequestField() { return *GetNativePointerField<double*>(this, "UShooterGameInstance.TimeTillNextSTSTokenRequest"); }
	int& CurrentSTS_RetryFailureCountField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.CurrentSTS_RetryFailureCount"); }
	TWeakObjectPtr<AStaticMeshActor, FWeakObjectPtr>& RagdollKinematicActorField() { return *GetNativePointerField<TWeakObjectPtr<AStaticMeshActor, FWeakObjectPtr>*>(this, "UShooterGameInstance.RagdollKinematicActor"); }
	TWeakObjectPtr<ADayCycleManager, FWeakObjectPtr>& DayCycleManagerField() { return *GetNativePointerField<TWeakObjectPtr<ADayCycleManager, FWeakObjectPtr>*>(this, "UShooterGameInstance.DayCycleManager"); }
	TWeakObjectPtr<ASOTFNotification, FWeakObjectPtr>& SOTFNotificationManagerField() { return *GetNativePointerField<TWeakObjectPtr<ASOTFNotification, FWeakObjectPtr>*>(this, "UShooterGameInstance.SOTFNotificationManager"); }
	int& bOnReturnToMainMenuNotificationField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.bOnReturnToMainMenuNotification"); }
	FString& OnReturnToMainMenuNotificationMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OnReturnToMainMenuNotificationMessage"); }
	FString& OnReturnToMainMenuNotificationTitleField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OnReturnToMainMenuNotificationTitle"); }
	FString& GlobalMainMenuMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMainMenuMessage"); }
	FString& GlobalMainMenuTitleField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMainMenuTitle"); }
	bool& IsDisplayingGlobalMainMenuMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.IsDisplayingGlobalMainMenuMessage"); }
	bool& bHasReceivedNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasReceivedNewsMessage"); }
	bool& bHasOfficialStatusMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasOfficialStatusMessage"); }
	bool& bHasGlobalMetadataField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasGlobalMetadata"); }
	bool& bHasReceivedSPNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasReceivedSPNewsMessage"); }
	bool& bHasReceivedMPNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasReceivedMPNewsMessage"); }
	FString& NewsMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.NewsMessage"); }
	FString& SPNewsMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.SPNewsMessage"); }
	FString& MPNewsMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.MPNewsMessage"); }
	FString& OfficialStatusMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OfficialStatusMessage"); }
	FString& GlobalMetadataField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMetadata"); }
	FTimerHandle& DelayedLoadHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UShooterGameInstance.DelayedLoadHandle"); }
	FString& TerrainGenerationProgressBarMsgField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.TerrainGenerationProgressBarMsg"); }
	float& SecondsSpentGeneratingTerrainField() { return *GetNativePointerField<float*>(this, "UShooterGameInstance.SecondsSpentGeneratingTerrain"); }
	bool& TerrainIsGeneratingField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.TerrainIsGenerating"); }
	bool& bHasCommunicationPriviligeField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasCommunicationPrivilige"); }
	bool& bCanUseUserGeneratedContentField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bCanUseUserGeneratedContent"); }
	bool& bDidCheckCrossplayPrivilegeField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bDidCheckCrossplayPrivilege"); }
	bool& bCanUseCrossplayField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bCanUseCrossplay"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.ActiveEvent"); }
	FString& WorldModifierConfigOverrideField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WorldModifierConfigOverride"); }
	FOnAutoUpdatingModsComplete& OnAutoUpdatingModsCompleteField() { return *GetNativePointerField<FOnAutoUpdatingModsComplete*>(this, "UShooterGameInstance.OnAutoUpdatingModsComplete"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& CacheOwnedPremiumModsField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterGameInstance.CacheOwnedPremiumMods"); }
	TArray<unsigned __int64, TSizedDefaultAllocator<32> >& PMXMField() { return *GetNativePointerField<TArray<unsigned __int64, TSizedDefaultAllocator<32> >*>(this, "UShooterGameInstance.PMXM"); }
	TWeakObjectPtr<APrimalCinematicActor, FWeakObjectPtr>& PrimalCinematicActorField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCinematicActor, FWeakObjectPtr>*>(this, "UShooterGameInstance.PrimalCinematicActor"); }
	TWeakObjectPtr<ULevelSequenceDirector, FWeakObjectPtr>& PrimalLevelSequenceDirectorHidingUIField() { return *GetNativePointerField<TWeakObjectPtr<ULevelSequenceDirector, FWeakObjectPtr>*>(this, "UShooterGameInstance.PrimalLevelSequenceDirectorHidingUI"); }
	int& NumDinoIKThisFrameField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.NumDinoIKThisFrame"); }
	double& DinoIKCooldownTimerField() { return *GetNativePointerField<double*>(this, "UShooterGameInstance.DinoIKCooldownTimer"); }
	float& DinoIKDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameInstance.DinoIKDistanceMultiplier"); }
	int& NumDinoIKThisFrameTargetField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.NumDinoIKThisFrameTarget"); }
	FString& InvitePasswordField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.InvitePassword"); }
	FDelegateHandle& ActivityRequestedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameInstance.ActivityRequestedHandle"); }
	FString& CurrentActivityField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.CurrentActivity"); }
	FString& PendingActivityChangeField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.PendingActivityChange"); }
	bool& CanBindActivityField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.CanBindActivity"); }
	unsigned int& FailedAttemptsToGetOfficialServerIPsField() { return *GetNativePointerField<unsigned int*>(this, "UShooterGameInstance.FailedAttemptsToGetOfficialServerIPs"); }
	unsigned int& FailedAttemptsToGetBannerServerIPsField() { return *GetNativePointerField<unsigned int*>(this, "UShooterGameInstance.FailedAttemptsToGetBannerServerIPs"); }
	bool& bBusyGettingOfficialServerIPsField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bBusyGettingOfficialServerIPs"); }
	bool& bBusyGettingBannedServerIPsField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bBusyGettingBannedServerIPs"); }
	bool& bTransferringMapsFromBlueprintCallField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bTransferringMapsFromBlueprintCall"); }
	FString& ActiveSettingsCommandArgumentsField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.ActiveSettingsCommandArguments"); }
	__int64& PendingModDeeplinkField() { return *GetNativePointerField<__int64*>(this, "UShooterGameInstance.PendingModDeeplink"); }
	UBackblazeB2CloudStorage*& BackblazeCloudStorageField() { return *GetNativePointerField<UBackblazeB2CloudStorage**>(this, "UShooterGameInstance.BackblazeCloudStorage"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& ModBrowserManagementActorRefField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UShooterGameInstance.ModBrowserManagementActorRef"); }
	bool& bForceCallToBeginMainMenuStateField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bForceCallToBeginMainMenuState"); }
	FTimerHandle& PreviewAudienceHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UShooterGameInstance.PreviewAudienceHandle"); }
	bool& bIsPreviewAuthenticatedField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsPreviewAuthenticated"); }
	double& ClientLastTimeReceivedMarketTradeDataField() { return *GetNativePointerField<double*>(this, "UShooterGameInstance.ClientLastTimeReceivedMarketTradeData"); }
	double& LastTimeRemovedMarketFromDataField() { return *GetNativePointerField<double*>(this, "UShooterGameInstance.LastTimeRemovedMarketFromData"); }
	BitFieldValue<bool, unsigned char> bHasAppliedCDOUpdates() { return { this, "UShooterGameInstance.bHasAppliedCDOUpdates"}; }
	BitFieldValue<bool, unsigned char> bHasPlayedMainMenuIntroOnce() { return { this, "UShooterGameInstance.bHasPlayedMainMenuIntroOnce"}; }
	BitFieldValue<bool, unsigned char> bIsAutoUpdatingMods() { return { this, "UShooterGameInstance.bIsAutoUpdatingMods"}; }
	void EndWelcomeScreenState() { NativeCall<void>(this, "UShooterGameInstance.EndWelcomeScreenState()"); }
	const FMarketSellOrder* GetSellOrder_Client(int MarketID, __int64 OrderKey) { return NativeCall<const FMarketSellOrder*, int, __int64>(this, "UShooterGameInstance.GetSellOrder_Client(int,__int64)", MarketID, OrderKey); }
	void BeginMessageMenuState() { NativeCall<void>(this, "UShooterGameInstance.BeginMessageMenuState()"); }
	void GotoInitialState() { NativeCall<void>(this, "UShooterGameInstance.GotoInitialState()"); }
	void SetupForMapLoad(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UShooterGameInstance.SetupForMapLoad(UWorld*)", InWorld); }
	static void AppendCrashInfoTo(wchar_t* pAppendToDest, int MaxDestLength) { NativeCall<void, wchar_t*, int>(nullptr, "UShooterGameInstance.AppendCrashInfoTo(wchar_t*,int)", pAppendToDest, MaxDestLength); }
	AShooterGameSession* GetGameSession() { return NativeCall<AShooterGameSession*>(this, "UShooterGameInstance.GetGameSession()"); }
	void UnpauseCurrentMusic_Implementation() { NativeCall<void>(this, "UShooterGameInstance.UnpauseCurrentMusic_Implementation()"); }
	bool IsBannedServerIP(const FClasslessInterDomainRoutingIP& CIDRAddr) { return NativeCall<bool, const FClasslessInterDomainRoutingIP&>(this, "UShooterGameInstance.IsBannedServerIP(FClasslessInterDomainRoutingIP&)", CIDRAddr); }
	void CleanupSessionOnReturnToMenu(bool bInTick) { NativeCall<void, bool>(this, "UShooterGameInstance.CleanupSessionOnReturnToMenu(bool)", bInTick); }
	void HandleAppWillDeactivate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppWillDeactivate()"); }
	void SetIsOnline(bool bInIsOnline) { NativeCall<void, bool>(this, "UShooterGameInstance.SetIsOnline(bool)", bInIsOnline); }
	void HandleLoginCompleteForAccountLock(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error) { NativeCall<void, int, bool, const FUniqueNetId&, const FString&>(this, "UShooterGameInstance.HandleLoginCompleteForAccountLock(int,bool,FUniqueNetId&,FString&)", LocalUserNum, bWasSuccessful, UserId, Error); }
	void UpdateOwnedPremiumMods(const TArray<__int64, TSizedDefaultAllocator<32> >& OwnedPremiumMods) { NativeCall<void, const TArray<__int64, TSizedDefaultAllocator<32> >&>(this, "UShooterGameInstance.UpdateOwnedPremiumMods(TArray<__int64,TSizedDefaultAllocator<32>>&)", OwnedPremiumMods); }
	const FMarketInfo* GetMarketInfo(int MarketID) { return NativeCall<const FMarketInfo*, int>(this, "UShooterGameInstance.GetMarketInfo(int)", MarketID); }
	void LoadGameMedia() { NativeCall<void>(this, "UShooterGameInstance.LoadGameMedia()"); }
	void HandleSafeFrameChanged() { NativeCall<void>(this, "UShooterGameInstance.HandleSafeFrameChanged()"); }
	void HandleGameNetControlMessage(UNetConnection* Connection, unsigned char MessageByte, const FString& MessageStr) { NativeCall<void, UNetConnection*, unsigned char, const FString&>(this, "UShooterGameInstance.HandleGameNetControlMessage(UNetConnection*,unsignedchar,FString&)", Connection, MessageByte, MessageStr); }
	void ConditionalGoToMenuAndDisplayFailureNotification(bool bValidateMenuOpen) { NativeCall<void, bool>(this, "UShooterGameInstance.ConditionalGoToMenuAndDisplayFailureNotification(bool)", bValidateMenuOpen); }
	void HandleAppReactivate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppReactivate()"); }
	bool HasCommunicationPrivilige() { return NativeCall<bool>(this, "UShooterGameInstance.HasCommunicationPrivilige()"); }
	void ShowModDeeplinkConfirmation(__int64 ModID, APlayerController* ForPC) { NativeCall<void, __int64, APlayerController*>(this, "UShooterGameInstance.ShowModDeeplinkConfirmation(__int64,APlayerController*)", ModID, ForPC); }
	void Init() { NativeCall<void>(this, "UShooterGameInstance.Init()"); }
	static bool IsModCookedForPreviousEngineVersion(const FInstalledMod& Mod) { return NativeCall<bool, const FInstalledMod&>(nullptr, "UShooterGameInstance.IsModCookedForPreviousEngineVersion(FInstalledMod&)", Mod); }
	void ShowMessageThenGotoState(const FString& Message, const FString& OKButtonString, const FString& CancelButtonString, const FName& NewState, bool OverrideExisting, TWeakObjectPtr<ULocalPlayer, FWeakObjectPtr> PlayerOwner) { NativeCall<void, const FString&, const FString&, const FString&, const FName&, bool, TWeakObjectPtr<ULocalPlayer, FWeakObjectPtr>>(this, "UShooterGameInstance.ShowMessageThenGotoState(FString&,FString&,FString&,FName&,bool,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>)", Message, OKButtonString, CancelButtonString, NewState, OverrideExisting, PlayerOwner); }
	void HandleLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error) { NativeCall<void, int, bool, const FUniqueNetId&, const FString&>(this, "UShooterGameInstance.HandleLoginComplete(int,bool,FUniqueNetId&,FString&)", LocalUserNum, bWasSuccessful, UserId, Error); }
	void GetOfficialServerStatusMessage() { NativeCall<void>(this, "UShooterGameInstance.GetOfficialServerStatusMessage()"); }
	bool HasCrossplayPrivilege() { return NativeCall<bool>(this, "UShooterGameInstance.HasCrossplayPrivilege()"); }
	void OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameInstance.OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type)", Result); }
	bool PermissionToSeeName(unsigned int playerID) { return NativeCall<bool, unsigned int>(this, "UShooterGameInstance.PermissionToSeeName(unsignedint)", playerID); }
	void EnableOpenColorIOObject(bool bEnable) { NativeCall<void, bool>(this, "UShooterGameInstance.EnableOpenColorIOObject(bool)", bEnable); }
	static TArray<__int64, TSizedDefaultAllocator<32> >* GetServerModArray(TArray<__int64, TSizedDefaultAllocator<32> >* result, TArray<__int64, TSizedDefaultAllocator<32> >* OutFileIds) { return NativeCall<TArray<__int64, TSizedDefaultAllocator<32> >*, TArray<__int64, TSizedDefaultAllocator<32> >*, TArray<__int64, TSizedDefaultAllocator<32> >*>(nullptr, "UShooterGameInstance.GetServerModArray(TArray<__int64,TSizedDefaultAllocator<32>>*)", result, OutFileIds); }
	void HandleNetworkConnectionStatusChanged(const FString& ServiceName, EOnlineServerConnectionStatus::Type LastConnectionStatus, EOnlineServerConnectionStatus::Type ConnectionStatus) { NativeCall<void, const FString&, EOnlineServerConnectionStatus::Type, EOnlineServerConnectionStatus::Type>(this, "UShooterGameInstance.HandleNetworkConnectionStatusChanged(FString&,EOnlineServerConnectionStatus::Type,EOnlineServerConnectionStatus::Type)", ServiceName, LastConnectionStatus, ConnectionStatus); }
	void OnRegisterJoiningLocalPlayerComplete(const FUniqueNetId& PlayerId, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, const FUniqueNetId&, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameInstance.OnRegisterJoiningLocalPlayerComplete(FUniqueNetId&,EOnJoinSessionCompleteResult::Type)", PlayerId, Result); }
	bool SmoothSaveGame(ISaveGameSystem* SaveSystem, bool bAttemptToUseUI, const wchar_t* Name, int UserIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& Data) { return NativeCall<bool, ISaveGameSystem*, bool, const wchar_t*, int, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "UShooterGameInstance.SmoothSaveGame(ISaveGameSystem*,bool,wchar_t*,int,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", SaveSystem, bAttemptToUseUI, Name, UserIndex, Data); }
	bool CanAddThisPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameInstance.CanAddThisPlayer(int)", ControllerId); }
	bool IsLocalPlayerOnline(ULocalPlayer* LocalPlayer) { return NativeCall<bool, ULocalPlayer*>(this, "UShooterGameInstance.IsLocalPlayerOnline(ULocalPlayer*)", LocalPlayer); }
	void EndMessageMenuState() { NativeCall<void>(this, "UShooterGameInstance.EndMessageMenuState()"); }
	bool Tick(float DeltaSeconds) { return NativeCall<bool, float>(this, "UShooterGameInstance.Tick(float)", DeltaSeconds); }
	static TArray<__int64, TSizedDefaultAllocator<32> >* GetServerPassiveModArray(TArray<__int64, TSizedDefaultAllocator<32> >* result, TArray<__int64, TSizedDefaultAllocator<32> >* OutFileIds) { return NativeCall<TArray<__int64, TSizedDefaultAllocator<32> >*, TArray<__int64, TSizedDefaultAllocator<32> >*, TArray<__int64, TSizedDefaultAllocator<32> >*>(nullptr, "UShooterGameInstance.GetServerPassiveModArray(TArray<__int64,TSizedDefaultAllocator<32>>*)", result, OutFileIds); }
	const FMarketInfo* GetMarketInfoClient(int MarketID) { return NativeCall<const FMarketInfo*, int>(this, "UShooterGameInstance.GetMarketInfoClient(int)", MarketID); }
	bool QueueDiscordInviteJoin(const FString& JoinSecret) { return NativeCall<bool, const FString&>(this, "UShooterGameInstance.QueueDiscordInviteJoin(FString&)", JoinSecret); }
	bool RejectIfAccountSwitched(int LocalUserNum, const FUniqueNetId& UserId) { return NativeCall<bool, int, const FUniqueNetId&>(this, "UShooterGameInstance.RejectIfAccountSwitched(int,FUniqueNetId&)", LocalUserNum, UserId); }
	void RemoveExistingLocalPlayer(ULocalPlayer* ExistingPlayer) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameInstance.RemoveExistingLocalPlayer(ULocalPlayer*)", ExistingPlayer); }
	void HandleLocalPlayerRemovedForDiscordJoinBinding(ULocalPlayer* __formal) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameInstance.HandleLocalPlayerRemovedForDiscordJoinBinding(ULocalPlayer*)", __formal); }
	void Shutdown() { NativeCall<void>(this, "UShooterGameInstance.Shutdown()"); }
	void BPSetUIHidingSequenceDirector(ULevelSequenceDirector* DirectorObject) { NativeCall<void, ULevelSequenceDirector*>(this, "UShooterGameInstance.BPSetUIHidingSequenceDirector(ULevelSequenceDirector*)", DirectorObject); }
	void FinishAsyncLoading() { NativeCall<void>(this, "UShooterGameInstance.FinishAsyncLoading()"); }
	void DisableDownloadedMod(const FInstalledMod& Mod) { NativeCall<void, const FInstalledMod&>(this, "UShooterGameInstance.DisableDownloadedMod(FInstalledMod&)", Mod); }
	void AddNetworkFailureHandlers() { NativeCall<void>(this, "UShooterGameInstance.AddNetworkFailureHandlers()"); }
	void UnregisterMarketByRef(APrimalStructureMarket* Market) { NativeCall<void, APrimalStructureMarket*>(this, "UShooterGameInstance.UnregisterMarketByRef(APrimalStructureMarket*)", Market); }
	bool GetPendingDiscordInviteJoin(FDiscordPendingJoin& OutPendingJoin) { return NativeCall<bool, FDiscordPendingJoin&>(this, "UShooterGameInstance.GetPendingDiscordInviteJoin(FDiscordPendingJoin&)", OutPendingJoin); }
	TArray<__int64, TSizedDefaultAllocator<32> >* GetActiveMods(TArray<__int64, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<__int64, TSizedDefaultAllocator<32> >*, TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterGameInstance.GetActiveMods()", result); }
	void ReceiveGlobalMarketTradeData(const TArray<unsigned int, TSizedDefaultAllocator<32> >& ActiveMarkets, const TArray<unsigned int, TSizedDefaultAllocator<32> >& MarketsRequiringFullSellOrderUpdate, const TArray<unsigned int, TSizedDefaultAllocator<32> >& MarketsRequiringFullRequestOrderUpdate, const FNetMarketTradeData& UpdatedMarketTradeData, bool bIsFullUpdate, bool bSendingActiveMarkets) { NativeCall<void, const TArray<unsigned int, TSizedDefaultAllocator<32> >&, const TArray<unsigned int, TSizedDefaultAllocator<32> >&, const TArray<unsigned int, TSizedDefaultAllocator<32> >&, const FNetMarketTradeData&, bool, bool>(this, "UShooterGameInstance.ReceiveGlobalMarketTradeData(TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,FNetMarketTradeData&,bool,bool)", ActiveMarkets, MarketsRequiringFullSellOrderUpdate, MarketsRequiringFullRequestOrderUpdate, UpdatedMarketTradeData, bIsFullUpdate, bSendingActiveMarkets); }
	static TArray<__int64, TSizedDefaultAllocator<32> >* GetIntArrayFromCSV(TArray<__int64, TSizedDefaultAllocator<32> >* result, const FString& CSV) { return NativeCall<TArray<__int64, TSizedDefaultAllocator<32> >*, TArray<__int64, TSizedDefaultAllocator<32> >*, const FString&>(nullptr, "UShooterGameInstance.GetIntArrayFromCSV(FString&)", result, CSV); }
	FString* GetOfflineModDataCacheFilePath(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterGameInstance.GetOfflineModDataCacheFilePath()", result); }
	void HandleAppResume() { NativeCall<void>(this, "UShooterGameInstance.HandleAppResume()"); }
	void LoadComplete(float LoadTime, const FString& MapName) { NativeCall<void, float, const FString&>(this, "UShooterGameInstance.LoadComplete(float,FString&)", LoadTime, MapName); }
	void TravelLocalSessionFailure(UWorld* World, ETravelFailure::Type FailureType, const FString& ReasonString) { NativeCall<void, UWorld*, ETravelFailure::Type, const FString&>(this, "UShooterGameInstance.TravelLocalSessionFailure(UWorld*,ETravelFailure::Type,FString&)", World, FailureType, ReasonString); }
	bool JoinSession(ULocalPlayer* LocalPlayer, int SessionIndexInSearchResults) { return NativeCall<bool, ULocalPlayer*, int>(this, "UShooterGameInstance.JoinSession(ULocalPlayer*,int)", LocalPlayer, SessionIndexInSearchResults); }
	void AddToUpdatingModsUI(bool WasSuccess) { NativeCall<void, bool>(this, "UShooterGameInstance.AddToUpdatingModsUI(bool)", WasSuccess); }
	void StopLoadingMusic() { NativeCall<void>(this, "UShooterGameInstance.StopLoadingMusic()"); }
	void PrimalBeginAuthenticateClientFromPlatform(UNetConnection* Connection, const FString& UserId) { NativeCall<void, UNetConnection*, const FString&>(this, "UShooterGameInstance.PrimalBeginAuthenticateClientFromPlatform(UNetConnection*,FString&)", Connection, UserId); }
	void ShowLoadingScreen() { NativeCall<void>(this, "UShooterGameInstance.ShowLoadingScreen()"); }
	bool Server_IsPlayerBlocked(APlayerController* InBlocker, APlayerController* InBlockee) { return NativeCall<bool, APlayerController*, APlayerController*>(this, "UShooterGameInstance.Server_IsPlayerBlocked(APlayerController*,APlayerController*)", InBlocker, InBlockee); }
	void RequestTradeData(AShooterPlayerController* ForPC, APrimalStructure* RequestingMarket, double LastTimeReceivedTradeData) { NativeCall<void, AShooterPlayerController*, APrimalStructure*, double>(this, "UShooterGameInstance.RequestTradeData(AShooterPlayerController*,APrimalStructure*,double)", ForPC, RequestingMarket, LastTimeReceivedTradeData); }
	void MaybeChangeState() { NativeCall<void>(this, "UShooterGameInstance.MaybeChangeState()"); }
	void AsyncLoadAssetFromPath(const FString& AssetPath) { NativeCall<void, const FString&>(this, "UShooterGameInstance.AsyncLoadAssetFromPath(FString&)", AssetPath); }
	bool Client_IsPlayerBlocked(int LinkedId) { return NativeCall<bool, int>(this, "UShooterGameInstance.Client_IsPlayerBlocked(int)", LinkedId); }
	void HandleLocalPlayerAddedForDiscordJoinBinding(ULocalPlayer* __formal) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameInstance.HandleLocalPlayerAddedForDiscordJoinBinding(ULocalPlayer*)", __formal); }
	void SetCounterModsUI(int Num) { NativeCall<void, int>(this, "UShooterGameInstance.SetCounterModsUI(int)", Num); }
	bool HandleOpenCommand(const wchar_t* Cmd, FOutputDevice& Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice&, UWorld*>(this, "UShooterGameInstance.HandleOpenCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool JoinSession(ULocalPlayer* LocalPlayer, const FOnlineSessionSearchResult& SearchResult) { return NativeCall<bool, ULocalPlayer*, const FOnlineSessionSearchResult&>(this, "UShooterGameInstance.JoinSession(ULocalPlayer*,FOnlineSessionSearchResult&)", LocalPlayer, SearchResult); }
	void DisableInstalledMods() { NativeCall<void>(this, "UShooterGameInstance.DisableInstalledMods()"); }
	void SyncDiscordJoinBindingToFirstLocalPlayer() { NativeCall<void>(this, "UShooterGameInstance.SyncDiscordJoinBindingToFirstLocalPlayer()"); }
	void HandleAppLicenseUpdate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppLicenseUpdate()"); }
	bool BPGetMarketInfo(int MarketID, FMarketInfo& OutMarketInfo) { return NativeCall<bool, int, FMarketInfo&>(this, "UShooterGameInstance.BPGetMarketInfo(int,FMarketInfo&)", MarketID, OutMarketInfo); }
	void ApplyIsOnline() { NativeCall<void>(this, "UShooterGameInstance.ApplyIsOnline()"); }
	void LoadTheGameMedia() { NativeCall<void>(this, "UShooterGameInstance.LoadTheGameMedia()"); }
	static FString* GetCSVFromIntArray(FString* result, const TArray<__int64, TSizedDefaultAllocator<32> >& IntArray) { return NativeCall<FString*, FString*, const TArray<__int64, TSizedDefaultAllocator<32> >&>(nullptr, "UShooterGameInstance.GetCSVFromIntArray(TArray<__int64,TSizedDefaultAllocator<32>>&)", result, IntArray); }
	void OnRedirectToURLReceived(const FString& ToURL, const FString& ToAtlasId, const FString& ToServerId) { NativeCall<void, const FString&, const FString&, const FString&>(this, "UShooterGameInstance.OnRedirectToURLReceived(FString&,FString&,FString&)", ToURL, ToAtlasId, ToServerId); }
	void RegisterMarket(APrimalStructureMarket* Market) { NativeCall<void, APrimalStructureMarket*>(this, "UShooterGameInstance.RegisterMarket(APrimalStructureMarket*)", Market); }
	void GotoState(FName NewState) { NativeCall<void, FName>(this, "UShooterGameInstance.GotoState(FName)", NewState); }
	bool IsOfficialServerIP(const FClasslessInterDomainRoutingIP& CIDRAddr) { return NativeCall<bool, const FClasslessInterDomainRoutingIP&>(this, "UShooterGameInstance.IsOfficialServerIP(FClasslessInterDomainRoutingIP&)", CIDRAddr); }
	void OnEndSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "UShooterGameInstance.OnEndSessionComplete(FName,bool)", SessionName, bWasSuccessful); }
	void SentrySettingsDelegate(USentrySettings* Settings) { NativeCall<void, USentrySettings*>(this, "UShooterGameInstance.SentrySettingsDelegate(USentrySettings*)", Settings); }
	void DisplayGlobalMainMenuNotification() { NativeCall<void>(this, "UShooterGameInstance.DisplayGlobalMainMenuNotification()"); }
	void ClearClientTradeData() { NativeCall<void>(this, "UShooterGameInstance.ClearClientTradeData()"); }
	void ClearDiscordJoinBinding() { NativeCall<void>(this, "UShooterGameInstance.ClearDiscordJoinBinding()"); }
	bool CanUseUserGeneratedContent(UUserWidget* OurWidget) { return NativeCall<bool, UUserWidget*>(this, "UShooterGameInstance.CanUseUserGeneratedContent(UUserWidget*)", OurWidget); }
	bool CanUseUserGeneratedContent() { return NativeCall<bool>(this, "UShooterGameInstance.CanUseUserGeneratedContent()"); }
	void HandleAppSuspend() { NativeCall<void>(this, "UShooterGameInstance.HandleAppSuspend()"); }
	void OnLoginCompleteForDiscord(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error) { NativeCall<void, int, bool, const FUniqueNetId&, const FString&>(this, "UShooterGameInstance.OnLoginCompleteForDiscord(int,bool,FUniqueNetId&,FString&)", LocalUserNum, bWasSuccessful, UserId, Error); }
	void FinishJoinSession(EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameInstance.FinishJoinSession(EOnJoinSessionCompleteResult::Type)", Result); }
	void OnDLCChecksComplete() { NativeCall<void>(this, "UShooterGameInstance.OnDLCChecksComplete()"); }
	void WorldLoaded() { NativeCall<void>(this, "UShooterGameInstance.WorldLoaded()"); }
	ULocalPlayer* FindPlatformLocalPlayerFromUniqueNetId(const FUniqueNetId& UniqueNetId) { return NativeCall<ULocalPlayer*, const FUniqueNetId&>(this, "UShooterGameInstance.FindPlatformLocalPlayerFromUniqueNetId(FUniqueNetId&)", UniqueNetId); }
	void SetPresenceForLocalPlayers(const FVariantData& PresenceData) { NativeCall<void, const FVariantData&>(this, "UShooterGameInstance.SetPresenceForLocalPlayers(FVariantData&)", PresenceData); }
	bool CheckOnlineGameValidity(bool bForceFailure) { return NativeCall<bool, bool>(this, "UShooterGameInstance.CheckOnlineGameValidity(bool)", bForceFailure); }
	APrimalStructureMarket* FindRegisteredMarket(int MarketID) { return NativeCall<APrimalStructureMarket*, int>(this, "UShooterGameInstance.FindRegisteredMarket(int)", MarketID); }
	static bool ModHasCategory(const FInstalledMod& Mod, const FString& Category) { return NativeCall<bool, const FInstalledMod&, const FString&>(nullptr, "UShooterGameInstance.ModHasCategory(FInstalledMod&,FString&)", Mod, Category); }
	void HandleUserLoginChanged(int GameUserIndex, ELoginStatus::Type PreviousLoginStatus, ELoginStatus::Type LoginStatus, const FUniqueNetId& UserId) { NativeCall<void, int, ELoginStatus::Type, ELoginStatus::Type, const FUniqueNetId&>(this, "UShooterGameInstance.HandleUserLoginChanged(int,ELoginStatus::Type,ELoginStatus::Type,FUniqueNetId&)", GameUserIndex, PreviousLoginStatus, LoginStatus, UserId); }
	TArray<int, TSizedDefaultAllocator<32> >* GetTribeDataMemberIds(TArray<int, TSizedDefaultAllocator<32> >* result, const FTribeData& Data) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, const FTribeData&>(this, "UShooterGameInstance.GetTribeDataMemberIds(FTribeData&)", result, Data); }
	void RequestNewSTSToken(bool bNotifyPendingGame_InitialMessage) { NativeCall<void, bool>(this, "UShooterGameInstance.RequestNewSTSToken(bool)", bNotifyPendingGame_InitialMessage); }
	void ClearPendingDiscordInviteJoin() { NativeCall<void>(this, "UShooterGameInstance.ClearPendingDiscordInviteJoin()"); }
	void BeginWelcomeScreenState() { NativeCall<void>(this, "UShooterGameInstance.BeginWelcomeScreenState()"); }
	void GetNewsMessage() { NativeCall<void>(this, "UShooterGameInstance.GetNewsMessage()"); }
	void DelayedLoad() { NativeCall<void>(this, "UShooterGameInstance.DelayedLoad()"); }
	void StartGameInstance() { NativeCall<void>(this, "UShooterGameInstance.StartGameInstance()"); }
	void RemoveSplitScreenPlayers() { NativeCall<void>(this, "UShooterGameInstance.RemoveSplitScreenPlayers()"); }
	void InternalTravelToSession(const FName& SessionName) { NativeCall<void, const FName&>(this, "UShooterGameInstance.InternalTravelToSession(FName&)", SessionName); }
	void TrimMemory() { NativeCall<void>(this, "UShooterGameInstance.TrimMemory()"); }
	void UpdateOpenColorIOObject(FOpenColorIODisplayConfiguration& InOpenColorIOConfig) { NativeCall<void, FOpenColorIODisplayConfiguration&>(this, "UShooterGameInstance.UpdateOpenColorIOObject(FOpenColorIODisplayConfiguration&)", InOpenColorIOConfig); }
	void LoadFrontEndMap(const FString& MapName, bool bForceLoad) { NativeCall<void, const FString&, bool>(this, "UShooterGameInstance.LoadFrontEndMap(FString&,bool)", MapName, bForceLoad); }
	void OnPreLoadMap(const FString& Map) { NativeCall<void, const FString&>(this, "UShooterGameInstance.OnPreLoadMap(FString&)", Map); }
	void AsyncUnloadAssetFromObject(UObject* AssetToUnload, bool bForceGarbageCollection) { NativeCall<void, UObject*, bool>(this, "UShooterGameInstance.AsyncUnloadAssetFromObject(UObject*,bool)", AssetToUnload, bForceGarbageCollection); }
	void AsyncUnloadAssetFromPath(const FString& AssetPathToUnload, bool bForceGarbageCollection) { NativeCall<void, const FString&, bool>(this, "UShooterGameInstance.AsyncUnloadAssetFromPath(FString&,bool)", AssetPathToUnload, bForceGarbageCollection); }
	void PauseCurrentMusic_Implementation() { NativeCall<void>(this, "UShooterGameInstance.PauseCurrentMusic_Implementation()"); }
	void BeginMainMenuState() { NativeCall<void>(this, "UShooterGameInstance.BeginMainMenuState()"); }
	bool RemoveLocalPlayer(ULocalPlayer* ExistingPlayer) { return NativeCall<bool, ULocalPlayer*>(this, "UShooterGameInstance.RemoveLocalPlayer(ULocalPlayer*)", ExistingPlayer); }
	void ManualTickWorldTransition(float Delta) { NativeCall<void, float>(this, "UShooterGameInstance.ManualTickWorldTransition(float)", Delta); }
	void SetUIHidingSequenceDirector(ULevelSequenceDirector* DirectorObject) { NativeCall<void, ULevelSequenceDirector*>(this, "UShooterGameInstance.SetUIHidingSequenceDirector(ULevelSequenceDirector*)", DirectorObject); }
	void OnPostLoadMap() { NativeCall<void>(this, "UShooterGameInstance.OnPostLoadMap()"); }
	FName GetOnlinePlatformName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UShooterGameInstance.GetOnlinePlatformName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
};
