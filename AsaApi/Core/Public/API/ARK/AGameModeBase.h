#pragma once
#include "BulkForward.h"


struct AGameModeBase : AInfo
{
	// Fields

	FString& OptionsStringField() { return *GetNativePointerField<FString*>(this, "AGameModeBase.OptionsString"); }
	TSubclassOf<AGameSession>& GameSessionClassField() { return *GetNativePointerField<TSubclassOf<AGameSession>*>(this, "AGameModeBase.GameSessionClass"); }
	TSubclassOf<AGameStateBase>& GameStateClassField() { return *GetNativePointerField<TSubclassOf<AGameStateBase>*>(this, "AGameModeBase.GameStateClass"); }
	TSubclassOf<APlayerController>& PlayerControllerClassField() { return *GetNativePointerField<TSubclassOf<APlayerController>*>(this, "AGameModeBase.PlayerControllerClass"); }
	TSubclassOf<APlayerState>& PlayerStateClassField() { return *GetNativePointerField<TSubclassOf<APlayerState>*>(this, "AGameModeBase.PlayerStateClass"); }
	TSubclassOf<AHUD>& HUDClassField() { return *GetNativePointerField<TSubclassOf<AHUD>*>(this, "AGameModeBase.HUDClass"); }
	TSubclassOf<APawn>& DefaultPawnClassField() { return *GetNativePointerField<TSubclassOf<APawn>*>(this, "AGameModeBase.DefaultPawnClass"); }
	TSubclassOf<ASpectatorPawn>& SpectatorClassField() { return *GetNativePointerField<TSubclassOf<ASpectatorPawn>*>(this, "AGameModeBase.SpectatorClass"); }
	TSubclassOf<APlayerController>& ReplaySpectatorPlayerControllerClassField() { return *GetNativePointerField<TSubclassOf<APlayerController>*>(this, "AGameModeBase.ReplaySpectatorPlayerControllerClass"); }
	TSubclassOf<AServerStatReplicator>& ServerStatReplicatorClassField() { return *GetNativePointerField<TSubclassOf<AServerStatReplicator>*>(this, "AGameModeBase.ServerStatReplicatorClass"); }
	TObjectPtr<AGameSession>& GameSessionField() { return *GetNativePointerField<TObjectPtr<AGameSession>*>(this, "AGameModeBase.GameSession"); }
	TObjectPtr<AGameStateBase>& GameStateField() { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "AGameModeBase.GameState"); }
	TObjectPtr<AServerStatReplicator>& ServerStatReplicatorField() { return *GetNativePointerField<TObjectPtr<AServerStatReplicator>*>(this, "AGameModeBase.ServerStatReplicator"); }
	FText& DefaultPlayerNameField() { return *GetNativePointerField<FText*>(this, "AGameModeBase.DefaultPlayerName"); }
	TArray<TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>, TSizedDefaultAllocator<32> >& PausersField() { return *GetNativePointerField<TArray<TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>, TSizedDefaultAllocator<32> >*>(this, "AGameModeBase.Pausers"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseSeamlessTravel() { return { this, "AGameModeBase.bUseSeamlessTravel" }; }
	BitFieldValue<bool, unsigned __int32> bStartPlayersAsSpectators() { return { this, "AGameModeBase.bStartPlayersAsSpectators" }; }
	BitFieldValue<bool, unsigned __int32> bPauseable() { return { this, "AGameModeBase.bPauseable" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameModeBase"); }
	APlayerController* ProcessClientTravel(FString* URL, FGuid* NextMapGuid, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController*, FString*, FGuid*, bool, bool>(this, "AGameModeBase.ProcessClientTravel(FString&,bool,bool)", URL, NextMapGuid, bSeamless, bAbsolute); }
	bool TeleportTo(const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool>(this, "AGameModeBase.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	AShooterGameState* GetGameState() { return NativeCall<AShooterGameState*>(this, "AGameModeBase.GetGameState<AShooterGameState>()"); }
	AActor* ChoosePlayerStart(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameModeBase.ChoosePlayerStart(AController*)", Player); }
	AActor* FindPlayerStart(AController* Player, const FString* IncomingName) { return NativeCall<AActor*, AController*, const FString*>(this, "AGameModeBase.FindPlayerStart(AController*,FString&)", Player, IncomingName); }
	UClass* GetDefaultPawnClassForController(AController* InController) { return NativeCall<UClass*, AController*>(this, "AGameModeBase.GetDefaultPawnClassForController(AController*)", InController); }
	bool MustSpectate(APlayerController* NewPlayerController) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.MustSpectate(APlayerController*)", NewPlayerController); }
	bool PlayerCanRestart(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.PlayerCanRestart(APlayerController*)", Player); }
	APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, const UE::Math::TTransform<double>* SpawnTransform) { return NativeCall<APawn*, AController*, const UE::Math::TTransform<double>*>(this, "AGameModeBase.SpawnDefaultPawnAtTransform(AController*,UE::Math::TTransform<double>&)", NewPlayer, SpawnTransform); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAGameModeBase();
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "AGameModeBase.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "AGameModeBase.InitGameState()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AGameModeBase.PreInitializeComponents()"); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result) { return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession>*>(this, "AGameModeBase.GetGameSessionClass()", result); }
	UClass* GetDefaultPawnClassForController_Implementation(AController* InController) { return NativeCall<UClass*, AController*>(this, "AGameModeBase.GetDefaultPawnClassForController_Implementation(AController*)", InController); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameModeBase.GetNumPlayers()"); }
	int GetNumSpectators() { return NativeCall<int>(this, "AGameModeBase.GetNumSpectators()"); }
	void StartPlay() { NativeCall<void>(this, "AGameModeBase.StartPlay()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameModeBase.HasMatchStarted()"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameModeBase.HasMatchEnded()"); }
	bool SetPause(APlayerController* PC, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>* CanUnpauseDelegate) { return NativeCall<bool, APlayerController*, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "AGameModeBase.SetPause(APlayerController*,TDelegate<bool__cdecl(void)>)", PC, CanUnpauseDelegate); }
	bool ClearPause() { return NativeCall<bool>(this, "AGameModeBase.ClearPause()"); }
	void ForceClearUnpauseDelegates(AActor* PauseActor) { NativeCall<void, AActor*>(this, "AGameModeBase.ForceClearUnpauseDelegates(AActor*)", PauseActor); }
	bool AllowPausing(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.AllowPausing(APlayerController*)", PC); }
	bool IsPaused() { return NativeCall<bool>(this, "AGameModeBase.IsPaused()"); }
	void Reset() { NativeCall<void>(this, "AGameModeBase.Reset()"); }
	void ResetLevel() { NativeCall<void>(this, "AGameModeBase.ResetLevel()"); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameModeBase.ReturnToMainMenuHost()"); }
	APlayerController* ProcessClientTravel(FString* FURL, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController*, FString*, bool, bool>(this, "AGameModeBase.ProcessClientTravel(FString&,bool,bool)", FURL, bSeamless, bAbsolute); }
	bool CanServerTravel(const FString* FURL, bool bAbsolute) { return NativeCall<bool, const FString*, bool>(this, "AGameModeBase.CanServerTravel(FString&,bool)", FURL, bAbsolute); }
	void ProcessServerTravel(const FString* URL, bool bAbsolute) { NativeCall<void, const FString*, bool>(this, "AGameModeBase.ProcessServerTravel(FString&,bool)", URL, bAbsolute); }
	void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*, TSizedDefaultAllocator<32> >* ActorList) { NativeCall<void, bool, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AGameModeBase.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)", bToTransition, ActorList); }
	void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) { NativeCall<void, APlayerController*, APlayerController*>(this, "AGameModeBase.SwapPlayerControllers(APlayerController*,APlayerController*)", OldPC, NewPC); }
	TSubclassOf<APlayerController>* GetPlayerControllerClassToSpawnForSeamlessTravel(TSubclassOf<APlayerController>* result, APlayerController* PreviousPC) { return NativeCall<TSubclassOf<APlayerController> *, TSubclassOf<APlayerController>*, APlayerController*>(this, "AGameModeBase.GetPlayerControllerClassToSpawnForSeamlessTravel(APlayerController*)", result, PreviousPC); }
	void HandleSeamlessTravelPlayer(AController** C) { NativeCall<void, AController**>(this, "AGameModeBase.HandleSeamlessTravelPlayer(AController*&)", C); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameModeBase.PostSeamlessTravel()"); }
	void PreLogin(const FString* Options, const FString* Address, const FUniqueNetIdRepl* UniqueId, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, const FUniqueNetIdRepl*, FString*>(this, "AGameModeBase.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)", Options, Address, UniqueId, ErrorMessage); }
	APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString* Portal, const FString* Options, const FUniqueNetIdRepl* UniqueId, FString* ErrorMessage) { return NativeCall<APlayerController*, UPlayer*, ENetRole, const FString*, const FString*, const FUniqueNetIdRepl*, FString*>(this, "AGameModeBase.Login(UPlayer*,ENetRole,FString&,FString&,FUniqueNetIdRepl&,FString&)", NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage); }
	APlayerController* SpawnPlayerController(ENetRole InRemoteRole, const FString* Options) { return NativeCall<APlayerController*, ENetRole, const FString*>(this, "AGameModeBase.SpawnPlayerController(ENetRole,FString&)", InRemoteRole, Options); }
	APlayerController* SpawnPlayerController(ENetRole InRemoteRole, const FString& Options) { return NativeCall<APlayerController*, ENetRole, const FString&>(this, "AGameModeBase.SpawnPlayerController(ENetRole,FString&)", InRemoteRole, Options); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// APlayerController* SpawnReplayPlayerController(ENetRole InRemoteRole, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation);
	APlayerController* SpawnPlayerControllerCommon(ENetRole InRemoteRole, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation, TSubclassOf<APlayerController> InPlayerControllerClass) { return NativeCall<APlayerController*, ENetRole, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, TSubclassOf<APlayerController>>(this, "AGameModeBase.SpawnPlayerControllerCommon(ENetRole,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,TSubclassOf<APlayerController>)", InRemoteRole, SpawnLocation, SpawnRotation, InPlayerControllerClass); }
	FString* InitNewPlayer(FString* result, APlayerController* NewPlayerController, const FUniqueNetIdRepl* UniqueId, const FString* Options, const FString* Portal) { return NativeCall<FString*, FString*, APlayerController*, const FUniqueNetIdRepl*, const FString*, const FString*>(this, "AGameModeBase.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)", result, NewPlayerController, UniqueId, Options, Portal); }
	void InitSeamlessTravelPlayer(AController* NewController) { NativeCall<void, AController*>(this, "AGameModeBase.InitSeamlessTravelPlayer(AController*)", NewController); }
	bool UpdatePlayerStartSpot(AController* Player, const FString* Portal, FString* OutErrorMessage) { return NativeCall<bool, AController*, const FString*, FString*>(this, "AGameModeBase.UpdatePlayerStartSpot(AController*,FString&,FString&)", Player, Portal, OutErrorMessage); }
	bool ShouldStartInCinematicMode(APlayerController* Player, bool* OutHidePlayer, bool* OutHideHUD, bool* OutDisableMovement, bool* OutDisableTurning) { return NativeCall<bool, APlayerController*, bool*, bool*, bool*, bool*>(this, "AGameModeBase.ShouldStartInCinematicMode(APlayerController*,bool&,bool&,bool&,bool&)", Player, OutHidePlayer, OutHideHUD, OutDisableMovement, OutDisableTurning); }
	void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.InitializeHUDForPlayer_Implementation(APlayerController*)", NewPlayer); }
	void UpdateGameplayMuteList(APlayerController* aPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.UpdateGameplayMuteList(APlayerController*)", aPlayer); }
	void ReplicateStreamingStatus(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameModeBase.ReplicateStreamingStatus(APlayerController*)", PC); }
	void GenericPlayerInitialization(AController* C) { NativeCall<void, AController*>(this, "AGameModeBase.GenericPlayerInitialization(AController*)", C); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.PostLogin(APlayerController*)", NewPlayer); }
	void Logout(AController* Exiting) { NativeCall<void, AController*>(this, "AGameModeBase.Logout(AController*)", Exiting); }
	void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.HandleStartingNewPlayer_Implementation(APlayerController*)", NewPlayer); }
	bool MustSpectate_Implementation(APlayerController* NewPlayerController) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.MustSpectate_Implementation(APlayerController*)", NewPlayerController); }
	AActor* ChoosePlayerStart_Implementation(AController* Player) { return NativeCall<AActor*, AController*>(this, "AGameModeBase.ChoosePlayerStart_Implementation(AController*)", Player); }
	bool ShouldSpawnAtStartSpot(AController* Player) { return NativeCall<bool, AController*>(this, "AGameModeBase.ShouldSpawnAtStartSpot(AController*)", Player); }
	AActor* FindPlayerStart_Implementation(AController* Player, const FString* IncomingName) { return NativeCall<AActor*, AController*, const FString*>(this, "AGameModeBase.FindPlayerStart_Implementation(AController*,FString&)", Player, IncomingName); }
	bool PlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.PlayerCanRestart_Implementation(APlayerController*)", Player); }
	APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) { return NativeCall<APawn*, AController*, AActor*>(this, "AGameModeBase.SpawnDefaultPawnFor_Implementation(AController*,AActor*)", NewPlayer, StartSpot); }
	APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const UE::Math::TTransform<double>* SpawnTransform) { return NativeCall<APawn*, AController*, const UE::Math::TTransform<double>*>(this, "AGameModeBase.SpawnDefaultPawnAtTransform_Implementation(AController*,UE::Math::TTransform<double>&)", NewPlayer, SpawnTransform); }
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameModeBase.RestartPlayer(AController*)", NewPlayer); }
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot) { NativeCall<void, AController*, AActor*>(this, "AGameModeBase.RestartPlayerAtPlayerStart(AController*,AActor*)", NewPlayer, StartSpot); }
	void RestartPlayerAtTransform(AController* NewPlayer, const UE::Math::TTransform<double>* SpawnTransform) { NativeCall<void, AController*, const UE::Math::TTransform<double>*>(this, "AGameModeBase.RestartPlayerAtTransform(AController*,UE::Math::TTransform<double>&)", NewPlayer, SpawnTransform); }
	void FailedToRestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameModeBase.FailedToRestartPlayer(AController*)", NewPlayer); }
	void FinishRestartPlayer(AController* NewPlayer, const UE::Math::TRotator<double>* StartRotation) { NativeCall<void, AController*, const UE::Math::TRotator<double>*>(this, "AGameModeBase.FinishRestartPlayer(AController*,UE::Math::TRotator<double>&)", NewPlayer, StartRotation); }
	void SetPlayerDefaults(APawn* PlayerPawn) { NativeCall<void, APawn*>(this, "AGameModeBase.SetPlayerDefaults(APawn*)", PlayerPawn); }
	void ChangeName(AController* Other, const FString* S, bool bNameChange) { NativeCall<void, AController*, const FString*, bool>(this, "AGameModeBase.ChangeName(AController*,FString&,bool)", Other, S, bNameChange); }
	bool AllowCheats(APlayerController* P) { return NativeCall<bool, APlayerController*>(this, "AGameModeBase.AllowCheats(APlayerController*)", P); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameModeBase"); }

	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "AGameModeBase.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	void HandleStartingNewPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameModeBase.HandleStartingNewPlayer(APlayerController*)", NewPlayer); }
	bool ShouldReset_Implementation(AActor* ActorToReset) { return NativeCall<bool, AActor*>(this, "AGameModeBase.ShouldReset_Implementation(AActor*)", ActorToReset); }
	void OnPostLogin(AController* NewPlayer) { NativeCall<void, AController*>(this, "AGameModeBase.OnPostLogin(AController*)", NewPlayer); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AGameModeBase.GetVelocity(bool)", result, bIsForRagdoll); }
	void UpdateStructureStasisGrid(float DeltaSeconds) { NativeCall<void, float>(this, "AGameModeBase.UpdateStructureStasisGrid(float)", DeltaSeconds); }
	void ActorDestroyed(AActor* theActor) { NativeCall<void, AActor*>(this, "AGameModeBase.ActorDestroyed(AActor*)", theActor); }
	bool ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection* Connection) { return NativeCall<bool, UNetConnection*>(this, "AGameModeBase.ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection*)", Connection); }
	void ActorUnstasised(AActor* theActor) { NativeCall<void, AActor*>(this, "AGameModeBase.ActorUnstasised(AActor*)", theActor); }
	bool SpawnPlayerFromSimulate(const UE::Math::TVector<double>& NewLocation, const UE::Math::TRotator<double>& NewRotation) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "AGameModeBase.SpawnPlayerFromSimulate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer) { NativeCall<void, AActor*, AController*>(this, "AGameModeBase.InitStartSpot_Implementation(AActor*,AController*)", StartSpot, NewPlayer); }
	bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget) { return NativeCall<bool, APlayerController*, APlayerState*>(this, "AGameModeBase.CanSpectate_Implementation(APlayerController*,APlayerState*)", Viewer, ViewTarget); }
	void ActorStasised(AActor* theActor) { NativeCall<void, AActor*>(this, "AGameModeBase.ActorStasised(AActor*)", theActor); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameModeBase.StartToLeaveMap()"); }
	void GameWelcomePlayer(UNetConnection* Connection, FString& RedirectURL) { NativeCall<void, UNetConnection*, FString&>(this, "AGameModeBase.GameWelcomePlayer(UNetConnection*,FString&)", Connection, RedirectURL); }
	bool IsHandlingReplays() { return NativeCall<bool>(this, "AGameModeBase.IsHandlingReplays()"); }
	bool CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget) { return NativeCall<bool, APlayerController*, APlayerState*>(this, "AGameModeBase.CanSpectate(APlayerController*,APlayerState*)", Viewer, ViewTarget); }
	bool IsAllowedToCheat(const FUniqueNetId& UserId) { return NativeCall<bool, const FUniqueNetId&>(this, "AGameModeBase.IsAllowedToCheat(FUniqueNetId&)", UserId); }
};