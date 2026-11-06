#pragma once
#include "BulkForward.h"



struct AShooterGameSession : AGameSession
{
	// Fields

	FWindowsCriticalSection& SearchResultsCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "AShooterGameSession.SearchResultsCS"); }
	TArray<FInstalledItemInfo, TSizedDefaultAllocator<32> >& CachedModsField() { return *GetNativePointerField<TArray<FInstalledItemInfo, TSizedDefaultAllocator<32> >*>(this, "AShooterGameSession.CachedMods"); }
	TArray<FShooterSessionData, TSizedDefaultAllocator<32> >& ThreadSafeSearchResultsField() { return *GetNativePointerField<TArray<FShooterSessionData, TSizedDefaultAllocator<32> >*>(this, "AShooterGameSession.ThreadSafeSearchResults"); }
	FTimerHandle& DelayedRegisterSessionHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterGameSession.DelayedRegisterSessionHandle"); }
	TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>& OnCreateSessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnCreateSessionCompleteDelegate"); }
	TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>& OnStartSessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnStartSessionCompleteDelegate"); }
	TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>& OnDestroySessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnDestroySessionCompleteDelegate"); }
	TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>& OnFindSessionsCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(bool), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnFindSessionsCompleteDelegate"); }
	TDelegate<void __cdecl(FName, enum EOnJoinSessionCompleteResult::Type), FDefaultDelegateUserPolicy>& OnJoinSessionCompleteDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(FName, enum EOnJoinSessionCompleteResult::Type), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnJoinSessionCompleteDelegate"); }
	TDelegate<void __cdecl(int), FDefaultDelegateUserPolicy>& OnNumConnectedPlayersChangedDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(int), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnNumConnectedPlayersChangedDelegate"); }
	FDelegateHandle& OnCreateSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnCreateSessionCompleteDelegateHandle"); }
	FDelegateHandle& OnStartSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnStartSessionCompleteDelegateHandle"); }
	FDelegateHandle& OnDestroySessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnDestroySessionCompleteDelegateHandle"); }
	FDelegateHandle& OnFindSessionsCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnFindSessionsCompleteDelegateHandle"); }
	FDelegateHandle& OnJoinSessionCompleteDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnJoinSessionCompleteDelegateHandle"); }
	FDelegateHandle& OnFoundSessionDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnFoundSessionDelegateHandle"); }
	TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& OnFoundSessionDelegateField() { return *GetNativePointerField<TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "AShooterGameSession.OnFoundSessionDelegate"); }
	FShooterGameSessionParams& CurrentSessionParamsField() { return *GetNativePointerField<FShooterGameSessionParams*>(this, "AShooterGameSession.CurrentSessionParams"); }
	TSharedPtr<FShooterOnlineSessionSettings>& HostSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSessionSettings>*>(this, "AShooterGameSession.HostSettings"); }
	TSharedPtr<FShooterOnlineSearchSettings>& SearchSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSearchSettings>*>(this, "AShooterGameSession.SearchSettings"); }
	//AShooterGameSession::FOnCreatePresenceSessionComplete& CreatePresenceSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnCreatePresenceSessionComplete*>(this, "AShooterGameSession.CreatePresenceSessionCompleteEvent"); }
	//AShooterGameSession::FOnJoinSessionComplete& JoinSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnJoinSessionComplete*>(this, "AShooterGameSession.JoinSessionCompleteEvent"); }
	//AShooterGameSession::FOnFindSessionsComplete& FindSessionsCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnFindSessionsComplete*>(this, "AShooterGameSession.FindSessionsCompleteEvent"); }
	//AShooterGameSession::FOnFoundSession& FoundSessionEventField() { return *GetNativePointerField<AShooterGameSession::FOnFoundSession*>(this, "AShooterGameSession.FoundSessionEvent"); }
	FDelegateHandle& OnInitializedSteelShieldHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AShooterGameSession.OnInitializedSteelShieldHandle"); }
	TSharedPtr<FUniqueNetId const>& SteelShieldUserIdField() { return *GetNativePointerField<TSharedPtr<FUniqueNetId const>*>(this, "AShooterGameSession.SteelShieldUserId"); }
	FName& SteelShieldWithSessionNameField() { return *GetNativePointerField<FName*>(this, "AShooterGameSession.SteelShieldWithSessionName"); }
	FOnlineSessionSearchResult& SteelShieldSearchResultField() { return *GetNativePointerField<FOnlineSessionSearchResult*>(this, "AShooterGameSession.SteelShieldSearchResult"); }
	//AShooterGameSession::TrackedAdvertisingData& LastAdvertisedField() { return *GetNativePointerField<AShooterGameSession::TrackedAdvertisingData*>(this, "AShooterGameSession.LastAdvertised"); }
	FString& HostedServerPlatformField() { return *GetNativePointerField<FString*>(this, "AShooterGameSession.HostedServerPlatform"); }

	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterGameSession"); }
	static UGameServerQuerySubsystem* GetNitradoSubsystem() { return NativeCall<UGameServerQuerySubsystem*>(nullptr, "AShooterGameSession.GetNitradoSubsystem()"); }
	void OnStartOnlineGameComplete(FName WithSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnStartOnlineGameComplete(FName,bool)", WithSessionName, bWasSuccessful); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted()"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded()"); }
	void OnCreateSessionComplete(FName WithSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnCreateSessionComplete(FName,bool)", WithSessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName WithSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnDestroySessionComplete(FName,bool)", WithSessionName, bWasSuccessful); }
	void DelayedSessionDelete() { NativeCall<void>(this, "AShooterGameSession.DelayedSessionDelete()"); }
	void InitOptions(const FString* Options) { NativeCall<void, const FString*>(this, "AShooterGameSession.InitOptions(FString&)", Options); }
	//void InitHostSettings(FOnlineSessionSettings* InHostSettings) { NativeCall<void, FOnlineSessionSettings*>(this, "AShooterGameSession.InitHostSettings(FOnlineSessionSettings*)", InHostSettings); }
	void RegisterServer() { NativeCall<void>(this, "AShooterGameSession.RegisterServer()"); }
	int GetAveragePing() { return NativeCall<int>(this, "AShooterGameSession.GetAveragePing()"); }
	void UpdatePublishedSession() { NativeCall<void>(this, "AShooterGameSession.UpdatePublishedSession()"); }
	FString* ApproveLogin(FString* result, const FString* Options) { return NativeCall<FString*, FString*, const FString*>(this, "AShooterGameSession.ApproveLogin(FString&)", result, Options); }
	void OnNumConnectedPlayersChanged(int NewPlayersCount) { NativeCall<void, int>(this, "AShooterGameSession.OnNumConnectedPlayersChanged(int)", NewPlayersCount); }
	void Tick(float __formal) { NativeCall<void, float>(this, "AShooterGameSession.Tick(float)", __formal); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "AShooterGameSession.OnFindSessionsComplete(bool)", bWasSuccessful); }
	void OnFoundSession() { NativeCall<void>(this, "AShooterGameSession.OnFoundSession()"); }
	void UpdateSearchResults() { NativeCall<void>(this, "AShooterGameSession.UpdateSearchResults()"); }
	void FindSessions(TSharedPtr<FUniqueNetId const>* UserId, FString* WithSessionFilter, bool bIsLAN, bool bIsPresence, bool bRecreateSearchSettings, unsigned int FindType, bool bQueryNotFullSessions, bool bPasswordServers, bool bPlatformSpecificServers, FString* ClusterId) { NativeCall<void, TSharedPtr<FUniqueNetId const>*, FString*, bool, bool, bool, unsigned int, bool, bool, bool, FString*>(this, "AShooterGameSession.FindSessions(TSharedPtr<FUniqueNetId,1>,FString,bool,bool,bool,EListSessionStatus::Type,bool,bool,bool,bool,FString)", UserId, WithSessionFilter, bIsLAN, bIsPresence, bRecreateSearchSettings, FindType, bQueryNotFullSessions, bPasswordServers, bPlatformSpecificServers, ClusterId); }
	__int64 JoinSession(TSharedPtr<FUniqueNetId const>* UserId, FName WithSessionName, const FOnlineSessionSearchResult* SearchResult) { return NativeCall<__int64, TSharedPtr<FUniqueNetId const>*, FName, const FOnlineSessionSearchResult*>(this, "AShooterGameSession.JoinSession(TSharedPtr<FUniqueNetId,1>,FName,FOnlineSessionSearchResult&)", UserId, WithSessionName, SearchResult); }
	void OnSteelshieldInitialized(bool bSuccess) { NativeCall<void, bool>(this, "AShooterGameSession.OnSteelshieldInitialized(bool)", bSuccess); }
	void OnJoinSessionComplete(FName WithSessionName, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, FName, EOnJoinSessionCompleteResult::Type>(this, "AShooterGameSession.OnJoinSessionComplete(FName,EOnJoinSessionCompleteResult::Type)", WithSessionName, Result); }
	bool TravelToSession(int ControllerId, FName WithSessionName) { return NativeCall<bool, int, FName>(this, "AShooterGameSession.TravelToSession(int,FName)", ControllerId, WithSessionName); }
	bool KickPlayer(APlayerController* KickedPlayer, const FText* KickReason) { return NativeCall<bool, APlayerController*, const FText*>(this, "AShooterGameSession.KickPlayer(APlayerController*,FText&)", KickedPlayer, KickReason); }
	void Restart() { NativeCall<void>(this, "AShooterGameSession.Restart()"); }
	int GetConnectedPlayers(const FString* Auth) { return NativeCall<int, const FString*>(this, "AShooterGameSession.GetConnectedPlayers(FString&)", Auth); }

	bool& bHasDiscordResolvedSearchResultField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.bHasDiscordResolvedSearchResult"); }
	bool& IsProcessingAWSSessionField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.IsProcessingAWSSession"); }
	bool& bFoundSessionField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.bFoundSession"); }
	int& ConnectedPlayersField() { return *GetNativePointerField<int*>(this, "AShooterGameSession.ConnectedPlayers"); }
	int& DayNumberField() { return *GetNativePointerField<int*>(this, "AShooterGameSession.DayNumber"); }
	bool& SessionPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.SessionPVE"); }
	int& avgPingField() { return *GetNativePointerField<int*>(this, "AShooterGameSession.avgPing"); }

	FOnlineSessionSearchResult& DiscordResolvedSearchResultField() { return *GetNativePointerField<FOnlineSessionSearchResult*>(this, "AShooterGameSession.DiscordResolvedSearchResult"); }
	void InitHostSettings(FOnlineSessionSettings* InHostSettings) { NativeCall<void, FOnlineSessionSettings*>(this, "AShooterGameSession.InitHostSettings(FOnlineSessionSettings*)", InHostSettings); }
	void SetDiscordResolvedSearchResult(const FOnlineSessionSearchResult& SearchResult) { NativeCall<void, const FOnlineSessionSearchResult&>(this, "AShooterGameSession.SetDiscordResolvedSearchResult(FOnlineSessionSearchResult&)", SearchResult); }
	static FString* GetSessionIdFromSearchResult(FString* result, const FOnlineSessionSearchResult& SearchResult) { return NativeCall<FString*, FString*, const FOnlineSessionSearchResult&>(nullptr, "AShooterGameSession.GetSessionIdFromSearchResult(FOnlineSessionSearchResult&)", result, SearchResult); }
	void OnRecreateSessionListenServerDestroy(FName InSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnRecreateSessionListenServerDestroy(FName,bool)", InSessionName, bWasSuccessful); }
	EOnlineAsyncTaskState::Type GetSearchResultStatus(int& SearchResultIdx, int& NumSearchResults) { return NativeCall<EOnlineAsyncTaskState::Type, int&, int&>(this, "AShooterGameSession.GetSearchResultStatus(int&,int&)", SearchResultIdx, NumSearchResults); }
	void ResolveSessionByIdComplete(int LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult& Result) { NativeCall<void, int, bool, const FOnlineSessionSearchResult&>(this, "AShooterGameSession.ResolveSessionByIdComplete(int,bool,FOnlineSessionSearchResult&)", LocalUserNum, bWasSuccessful, Result); }
	void JoinSeesionBySessionIdComplete(int LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult& Result) { NativeCall<void, int, bool, const FOnlineSessionSearchResult&>(this, "AShooterGameSession.JoinSeesionBySessionIdComplete(int,bool,FOnlineSessionSearchResult&)", LocalUserNum, bWasSuccessful, Result); }
	void CancelFindSessions() { NativeCall<void>(this, "AShooterGameSession.CancelFindSessions()"); }
	void ClearDiscordResolvedSearchResult() { NativeCall<void>(this, "AShooterGameSession.ClearDiscordResolvedSearchResult()"); }
	void RecreateSessionListenServer() { NativeCall<void>(this, "AShooterGameSession.RecreateSessionListenServer()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterGameSession"); }
};