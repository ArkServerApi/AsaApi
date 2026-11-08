#pragma once
#include "BulkForward.h"



struct AGameMode : AGameModeBase
{
	// Fields

	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameMode.MatchState"); }
	int& NumSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumSpectators"); }
	int& NumPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumPlayers"); }
	int& NumBotsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumBots"); }
	float& MinRespawnDelayField() { return *GetNativePointerField<float*>(this, "AGameMode.MinRespawnDelay"); }
	int& NumTravellingPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumTravellingPlayers"); }
	TSubclassOf<ULocalMessage>& EngineMessageClassField() { return *GetNativePointerField<TSubclassOf<ULocalMessage>*>(this, "AGameMode.EngineMessageClass"); }
	TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >& InactivePlayerArrayField() { return *GetNativePointerField<TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >*>(this, "AGameMode.InactivePlayerArray"); }
	float& InactivePlayerStateLifeSpanField() { return *GetNativePointerField<float*>(this, "AGameMode.InactivePlayerStateLifeSpan"); }
	int& MaxInactivePlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.MaxInactivePlayers"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDelayedStart() { return { this, "AGameMode.bDelayedStart" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameMode"); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAGameMode();
	FString* GetNetworkNumber(FString* result) { return NativeCall<FString*, FString*>(this, "AGameMode.GetNetworkNumber()", result); }
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "AGameMode.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	void RestartGame() { NativeCall<void>(this, "AGameMode.RestartGame()"); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.PostLogin(APlayerController*)", NewPlayer); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AGameMode.Logout(AController*)", Exiting); }
	void StartPlay() { NativeCall<void>(this, "AGameMode.StartPlay()"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart()"); }
	bool ReadyToStartMatch_Implementation() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch_Implementation()"); }
	void StartMatch() { NativeCall<void>(this, "AGameMode.StartMatch()"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameMode.HandleMatchHasStarted()"); }
	void EndMatch() { NativeCall<void>(this, "AGameMode.EndMatch()"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameMode.HandleMatchHasEnded()"); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameMode.StartToLeaveMap()"); }
	void AbortMatch() { NativeCall<void>(this, "AGameMode.AbortMatch()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameMode.HasMatchStarted()"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameMode.IsMatchInProgress()"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameMode.HasMatchEnded()"); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameMode.SetMatchState(FName)", NewState); }
	void OnMatchStateSet() { NativeCall<void>(this, "AGameMode.OnMatchStateSet()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameMode.Tick(float)", DeltaSeconds); }
	void HandleSeamlessTravelPlayer(AController** C) { NativeCall<void, AController**>(this, "AGameMode.HandleSeamlessTravelPlayer(AController*&)", C); }
	void InitSeamlessTravelPlayer(AController* NewController) { NativeCall<void, AController*>(this, "AGameMode.InitSeamlessTravelPlayer(AController*)", NewController); }
	void SetSeamlessTravelViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.SetSeamlessTravelViewTarget(APlayerController*)", PC); }
	// 	void RemovePlayerControllerFromPlayerCount(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameMode.RemovePlayerControllerFromPlayerCount(APlayerController*)", PC); }
	// FUNCTION MISSING: AGameMode.RemovePlayerControllerFromPlayerCount(APlayerController*)
	int GetNumPlayers() { return NativeCall<int>(this, "AGameMode.GetNumPlayers()"); }
	int GetNumSpectators() { return NativeCall<int>(this, "AGameMode.GetNumSpectators()"); }
	void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameMode.HandleStartingNewPlayer_Implementation(APlayerController*)", NewPlayer); }
	bool PlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameMode.PlayerCanRestart_Implementation(APlayerController*)", Player); }
	void Say(const FString* Msg) { NativeCall<void, const FString*>(this, "AGameMode.Say(FString&)", Msg); }
	void Broadcast(AActor* Sender, const FString* Msg, FName Type) { NativeCall<void, AActor*, const FString*, FName>(this, "AGameMode.Broadcast(AActor*,FString&,FName)", Sender, Msg, Type); }
	void BroadcastLocalized(AActor* Sender, TSubclassOf<ULocalMessage> Message, int Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject) { NativeCall<void, AActor*, TSubclassOf<ULocalMessage>, int, APlayerState*, APlayerState*, UObject*>(this, "AGameMode.BroadcastLocalized(AActor*,TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,UObject*)", Sender, Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject); }
	void AddInactivePlayer(APlayerState* PlayerState, APlayerController* PC) { NativeCall<void, APlayerState*, APlayerController*>(this, "AGameMode.AddInactivePlayer(APlayerState*,APlayerController*)", PlayerState, PC); }
	bool FindInactivePlayer(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameMode.FindInactivePlayer(APlayerController*)", PC); }
	void OverridePlayerState(APlayerController* PC, APlayerState* OldPlayerState) { NativeCall<void, APlayerController*, APlayerState*>(this, "AGameMode.OverridePlayerState(APlayerController*,APlayerState*)", PC, OldPlayerState); }
	bool CanServerTravel(const FString* URL, bool bAbsolute) { return NativeCall<bool, const FString*, bool>(this, "AGameMode.CanServerTravel(FString&,bool)", URL, bAbsolute); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameMode.PostSeamlessTravel()"); }
	bool IsHandlingReplays() { return NativeCall<bool>(this, "AGameMode.IsHandlingReplays()"); }
	void HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver) { NativeCall<void, UWorld*, UNetDriver*>(this, "AGameMode.HandleDisconnect(UWorld*,UNetDriver*)", InWorld, NetDriver); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameMode"); }

	bool& bHandleDedicatedServerReplaysField() { return *GetNativePointerField<bool*>(this, "AGameMode.bHandleDedicatedServerReplays"); }
	bool GetTravelType() { return NativeCall<bool>(this, "AGameMode.GetTravelType()"); }
	void PostCommitMapChange() { NativeCall<void>(this, "AGameMode.PostCommitMapChange()"); }
	void HandleMatchAborted() { NativeCall<void>(this, "AGameMode.HandleMatchAborted()"); }
	bool ReadyToEndMatch_Implementation() { return NativeCall<bool>(this, "AGameMode.ReadyToEndMatch_Implementation()"); }
	void PreCommitMapChange(const FString& PreviousMapName, const FString& NextMapName) { NativeCall<void, const FString&, const FString&>(this, "AGameMode.PreCommitMapChange(FString&,FString&)", PreviousMapName, NextMapName); }
	bool SpawnPlayerFromSimulate(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "AGameMode.SpawnPlayerFromSimulate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	void HandleLeavingMap() { NativeCall<void>(this, "AGameMode.HandleLeavingMap()"); }
	void NotifyPendingConnectionLost(const FUniqueNetIdRepl& ConnectionUniqueId) { NativeCall<void, const FUniqueNetIdRepl&>(this, "AGameMode.NotifyPendingConnectionLost(FUniqueNetIdRepl&)", ConnectionUniqueId); }
};