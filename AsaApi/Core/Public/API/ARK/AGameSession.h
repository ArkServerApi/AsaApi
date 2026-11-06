#pragma once
#include "BulkForward.h"


struct AGameSession : AInfo
{
	// Fields

	int& MaxSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxSpectators"); }
	int& MaxPlayersField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPlayers"); }
	int& MaxPartySizeField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPartySize"); }
	bool& bRequiresPushToTalkField() { return *GetNativePointerField<bool*>(this, "AGameSession.bRequiresPushToTalk"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "AGameSession.SessionName"); }

	// Bitfields


	// Functions

	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AGameSession.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameSession"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameSession"); }
	bool RequiresPushToTalk() { return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk()"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameSession.HandleMatchHasStarted()"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameSession.HandleMatchHasEnded()"); }
	void InitOptions(const FString* Options) { NativeCall<void, const FString*>(this, "AGameSession.InitOptions(FString&)", Options); }
	bool ProcessAutoLogin() { return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin()"); }
	void OnAutoLoginComplete(int LocalUserNum, bool bWasSuccessful, const FString* Error) { NativeCall<void, int, bool, const FString*>(this, "AGameSession.OnAutoLoginComplete(int,bool,FString&)", LocalUserNum, bWasSuccessful, Error); }
	FString* ApproveLogin(FString* result, const FString* Options) { return NativeCall<FString*, FString*, const FString*>(this, "AGameSession.ApproveLogin(FString&)", result, Options); }
	// TODO: Might need manual analysis
	void RegisterPlayer(APlayerController* NewPlayer, const TSharedPtr<FUniqueNetId const>* UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController*, const TSharedPtr<FUniqueNetId const>*, bool>(this, "AGameSession.RegisterPlayer(APlayerController*,FUniqueNetIdRepl&,bool)", NewPlayer, UniqueId, bWasFromInvite); }
	void RegisterPlayer(APlayerController* NewPlayer, const FUniqueNetIdRepl* UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController*, const FUniqueNetIdRepl*, bool>(this, "AGameSession.RegisterPlayer(APlayerController*,FUniqueNetIdRepl&,bool)", NewPlayer, UniqueId, bWasFromInvite); }
	void UnregisterPlayer(FName InSessionName, const FUniqueNetIdRepl* UniqueId) { NativeCall<void, FName, const FUniqueNetIdRepl*>(this, "AGameSession.UnregisterPlayer(FName,FUniqueNetIdRepl&)", InSessionName, UniqueId); }
	void UnregisterPlayers(FName InSessionName, const TArray<TSharedRef<FUniqueNetId const>, TSizedDefaultAllocator<32> >* Players) { NativeCall<void, FName, const TArray<TSharedRef<FUniqueNetId const>, TSizedDefaultAllocator<32> >*>(this, "AGameSession.UnregisterPlayers(FName,TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", InSessionName, Players); }
	void UnregisterPlayers(FName InSessionName, const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >* Players) { NativeCall<void, FName, const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >*>(this, "AGameSession.UnregisterPlayers(FName,TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", InSessionName, Players); }
	void UnregisterPlayer(const APlayerController* ExitingPlayer) { NativeCall<void, const APlayerController*>(this, "AGameSession.UnregisterPlayer(APlayerController*)", ExitingPlayer); }
	bool AtCapacity(bool bSpectator, const FString* AuthToken, bool UseReservedSlots, int* NumFreeSlots) { return NativeCall<bool, bool, const FString*, bool, int*>(this, "AGameSession.AtCapacity(bool,FString&,bool,int*)", bSpectator, AuthToken, UseReservedSlots, NumFreeSlots); }
	void NotifyLogout(FName InSessionName, const FUniqueNetIdRepl* UniqueId) { NativeCall<void, FName, const FUniqueNetIdRepl*>(this, "AGameSession.NotifyLogout(FName,FUniqueNetIdRepl&)", InSessionName, UniqueId); }
	void NotifyLogout(const APlayerController* PC) { NativeCall<void, const APlayerController*>(this, "AGameSession.NotifyLogout(APlayerController*)", PC); }
	bool KickPlayer(APlayerController* KickedPlayer, const FText* KickReason) { return NativeCall<bool, APlayerController*, const FText*>(this, "AGameSession.KickPlayer(APlayerController*,FText&)", KickedPlayer, KickReason); }
	bool BanPlayer(APlayerController* BannedPlayer, const FText* BanReason) { return NativeCall<bool, APlayerController*, const FText*>(this, "AGameSession.BanPlayer(APlayerController*,FText&)", BannedPlayer, BanReason); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost()"); }
	void DumpSessionState() { NativeCall<void>(this, "AGameSession.DumpSessionState()"); }
	bool GetSessionJoinability(FName InSessionName, FJoinabilitySettings* OutSettings) { return NativeCall<bool, FName, FJoinabilitySettings*>(this, "AGameSession.GetSessionJoinability(FName,FJoinabilitySettings&)", InSessionName, OutSettings); }
	void UpdateSessionJoinability(FName InSessionName, bool bPublicSearchable, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability(FName,bool,bool,bool,bool)", InSessionName, bPublicSearchable, bAllowInvites, bJoinViaPresence, bJoinViaPresenceFriendsOnly); }
	int GetConnectedPlayers(const FString* Auth) { return NativeCall<int, const FString*>(this, "AGameSession.GetConnectedPlayers(FString&)", Auth); }

	unsigned char& ReservedPlayerSlotsField() { return *GetNativePointerField<unsigned char*>(this, "AGameSession.ReservedPlayerSlots"); }
	unsigned char& MaxSplitscreensPerConnectionField() { return *GetNativePointerField<unsigned char*>(this, "AGameSession.MaxSplitscreensPerConnection"); }
	bool CanRestartGame() { return NativeCall<bool>(this, "AGameSession.CanRestartGame()"); }
	void RegisterServerFailed() { NativeCall<void>(this, "AGameSession.RegisterServerFailed()"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameSession.HandleMatchIsWaitingToStart()"); }
	void RemoveAdmin(APlayerController* AdminPlayer) { NativeCall<void, APlayerController*>(this, "AGameSession.RemoveAdmin(APlayerController*)", AdminPlayer); }
	void PostReloadConfig(FProperty* PropertyThatWasLoaded) { NativeCall<void, FProperty*>(this, "AGameSession.PostReloadConfig(FProperty*)", PropertyThatWasLoaded); }
	void RegisterServer() { NativeCall<void>(this, "AGameSession.RegisterServer()"); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "AGameSession.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void PostLogin(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "AGameSession.PostLogin(APlayerController*)", NewPlayer); }
	void OnEndSessionComplete(FName InSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AGameSession.OnEndSessionComplete(FName,bool)", InSessionName, bWasSuccessful); }
	void Restart() { NativeCall<void>(this, "AGameSession.Restart()"); }
	void OnStartSessionComplete(FName InSessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AGameSession.OnStartSessionComplete(FName,bool)", InSessionName, bWasSuccessful); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AGameSession.GetVelocity(bool)", result, bIsForRagdoll); }
	bool HandleStartMatchRequest() { return NativeCall<bool>(this, "AGameSession.HandleStartMatchRequest()"); }
	void AddAdmin(APlayerController* AdminPlayer) { NativeCall<void, APlayerController*>(this, "AGameSession.AddAdmin(APlayerController*)", AdminPlayer); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameSession.PostSeamlessTravel()"); }
};