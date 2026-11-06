#pragma once
#include "BulkForward.h"


struct ABasePlayerController : APrimalPlayerController
{
	// Fields

	//TSharedPtr<FOnlineAchievementsWrite, 1>& WriteObjectField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsWrite, 1>*>(this, "ABasePlayerController.WriteObject"); }
	FName& ServerSayStringField() { return *GetNativePointerField<FName*>(this, "ABasePlayerController.ServerSayString"); }
	//UUI_CustomOverlay*& customCursorField() { return *GetNativePointerField<UUI_CustomOverlay**>(this, "ABasePlayerController.customCursor"); }
	TWeakObjectPtr<UUI_CustomOverlay>& consoleMouseCursorField() { return *GetNativePointerField<TWeakObjectPtr<UUI_CustomOverlay>*>(this, "ABasePlayerController.consoleMouseCursor"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bCheatEnabled() { return { this, "ABasePlayerController.bCheatEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bGameEndedFrame() { return { this, "ABasePlayerController.bGameEndedFrame" }; }
	BitFieldValue<bool, unsigned __int32> bAllowGameActions() { return { this, "ABasePlayerController.bAllowGameActions" }; }

	// Functions

	void ServerCheat(const FString* Msg) { NativeCall<void, const FString*>(this, "ABasePlayerController.ServerCheat(FString&)", Msg); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesABasePlayerController();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABasePlayerController"); }
	void ManageVirtualCursor() { NativeCall<void>(this, "ABasePlayerController.ManageVirtualCursor()"); }
	void SetVirtualCursorPosition(UE::Math::TVector2<double>* NewCursorPos) { NativeCall<void, UE::Math::TVector2<double>*>(this, "ABasePlayerController.SetVirtualCursorPosition(UE::Math::TVector2<double>)", NewCursorPos); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction*>(this, "ABasePlayerController.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	void QueryAchievements() { NativeCall<void>(this, "ABasePlayerController.QueryAchievements()"); }
	void ClientGameStarted_Implementation() { NativeCall<void>(this, "ABasePlayerController.ClientGameStarted_Implementation()"); }
	void ClientStartOnlineGame_Implementation() { NativeCall<void>(this, "ABasePlayerController.ClientStartOnlineGame_Implementation()"); }
	void ClientEndOnlineGame_Implementation() { NativeCall<void>(this, "ABasePlayerController.ClientEndOnlineGame_Implementation()"); }
	void HandleReturnToMainMenu() { NativeCall<void>(this, "ABasePlayerController.HandleReturnToMainMenu()"); }
	//     void ClientReturnToMainMenu_Implementation(const FString* ReturnReason) { NativeCall<void, const FString*>(this, "ABasePlayerController.ClientReturnToMainMenu_Implementation(FString&)", ReturnReason); }
	// FUNCTION MISSING: ABasePlayerController.ClientReturnToMainMenu_Implementation(FString&)
	void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor*, bool>(this, "ABasePlayerController.ClientGameEnded_Implementation(AActor*,bool)", EndGameFocus, bIsWinner); }
	void ResetIntroCinematicsAndItems() { NativeCall<void>(this, "ABasePlayerController.ResetIntroCinematicsAndItems()"); }
	void ClientSendRoundEndEvent_Implementation(bool bIsWinner, int ExpendedTimeInSeconds) { NativeCall<void, bool, int>(this, "ABasePlayerController.ClientSendRoundEndEvent_Implementation(bool,int)", bIsWinner, ExpendedTimeInSeconds); }
	//void PreClientTravel(const FString* PendingURL, ETravelType TravelType, bool bIsSeamlessTravel) { NativeCall<void, const FString*, ETravelType, bool>(this, "ABasePlayerController.PreClientTravel(FString&,ETravelType,bool)", PendingURL, TravelType, bIsSeamlessTravel); }
	void ClientSetSpectatorCamera_Implementation(UE::Math::TVector<double>* CameraLocation, UE::Math::TRotator<double>* CameraRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "ABasePlayerController.ClientSetSpectatorCamera_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", CameraLocation, CameraRotation); }
	bool SetPause(bool bPause, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>* CanUnpauseDelegate) { return NativeCall<bool, bool, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "ABasePlayerController.SetPause(bool,TDelegate<bool__cdecl(void)>)", bPause, CanUnpauseDelegate); }
	bool HasValidAdminIP() { return NativeCall<bool>(this, "ABasePlayerController.HasValidAdminIP()"); }
	void ServerCheat_Implementation(const FString* Msg) { NativeCall<void, const FString*>(this, "ABasePlayerController.ServerCheat_Implementation(FString&)", Msg); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "ABasePlayerController.IsMoveInputIgnored()"); }
	bool IsLookInputIgnored() { return NativeCall<bool>(this, "ABasePlayerController.IsLookInputIgnored()"); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "ABasePlayerController.IsGameInputAllowed()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ABasePlayerController"); }

	bool& bHasSentStartEventsField() { return *GetNativePointerField<bool*>(this, "ABasePlayerController.bHasSentStartEvents"); }
	TWeakObjectPtr<UUI_DiscordNotifications, FWeakObjectPtr>& OpenDiscordNotificationSceneField() { return *GetNativePointerField<TWeakObjectPtr<UUI_DiscordNotifications, FWeakObjectPtr>*>(this, "ABasePlayerController.OpenDiscordNotificationScene"); }
	TWeakObjectPtr<UUI_DiscordUnifiedFriendsList, FWeakObjectPtr>& OpenDiscordFriendsSceneField() { return *GetNativePointerField<TWeakObjectPtr<UUI_DiscordUnifiedFriendsList, FWeakObjectPtr>*>(this, "ABasePlayerController.OpenDiscordFriendsScene"); }
	TWeakObjectPtr<UPrimalUI, FWeakObjectPtr>& DiscordFriendsLauncherUIField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalUI, FWeakObjectPtr>*>(this, "ABasePlayerController.DiscordFriendsLauncherUI"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& DiscordFriendsLauncherButtonField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "ABasePlayerController.DiscordFriendsLauncherButton"); }
	bool& bRestoreDiscordFriendsLauncherHighlightOnCloseField() { return *GetNativePointerField<bool*>(this, "ABasePlayerController.bRestoreDiscordFriendsLauncherHighlightOnClose"); }
	bool& bRequestDiscordFriendsGarbageCollectOnCloseField() { return *GetNativePointerField<bool*>(this, "ABasePlayerController.bRequestDiscordFriendsGarbageCollectOnClose"); }
	UUI_CustomOverlay*& customCursorField() { return *GetNativePointerField<UUI_CustomOverlay**>(this, "ABasePlayerController.customCursor"); }
	bool& bIsGamepadActiveField() { return *GetNativePointerField<bool*>(this, "ABasePlayerController.bIsGamepadActive"); }
	void ClientSetSpectatorCamera(UE::Math::TVector<double>* CameraLocation, UE::Math::TRotator<double>* CameraRotation) { if (!CameraLocation) throw std::invalid_argument("Null native value parameter"); if (!CameraRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "ABasePlayerController.ClientSetSpectatorCamera(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *CameraLocation, *CameraRotation); }
	void ClientGameStarted() { NativeCall<void>(this, "ABasePlayerController.ClientGameStarted()"); }
	bool ServerCheat_Validate(const FString& Msg) { return NativeCall<bool, const FString&>(this, "ABasePlayerController.ServerCheat_Validate(FString&)", Msg); }
	void ClearDiscordFriendsLauncherState() { NativeCall<void>(this, "ABasePlayerController.ClearDiscordFriendsLauncherState()"); }
	UUI_DiscordNotifications* GetDiscordNotificationUI() { return NativeCall<UUI_DiscordNotifications*>(this, "ABasePlayerController.GetDiscordNotificationUI()"); }
	void ForceDiscordFriendsGarbageCollect() { NativeCall<void>(this, "ABasePlayerController.ForceDiscordFriendsGarbageCollect()"); }
	void OnQueryAchievementsComplete(const FUniqueNetId& PlayerId, bool bWasSuccessful) { NativeCall<void, const FUniqueNetId&, bool>(this, "ABasePlayerController.OnQueryAchievementsComplete(FUniqueNetId&,bool)", PlayerId, bWasSuccessful); }
	bool IsDiscordFriendsUIOpen() { return NativeCall<bool>(this, "ABasePlayerController.IsDiscordFriendsUIOpen()"); }
	void ClientEndOnlineGame() { NativeCall<void>(this, "ABasePlayerController.ClientEndOnlineGame()"); }
	void EnsureDiscordNotificationUI() { NativeCall<void>(this, "ABasePlayerController.EnsureDiscordNotificationUI()"); }
	void CloseDiscordFriendsUI(bool bRequestGarbageCollect, bool bRestoreLauncherHighlight) { NativeCall<void, bool, bool>(this, "ABasePlayerController.CloseDiscordFriendsUI(bool,bool)", bRequestGarbageCollect, bRestoreLauncherHighlight); }
	void OpenDiscordFriendsUI(UPrimalUI* LauncherUI, UWidget* LauncherButton, int SceneStackPriority) { NativeCall<void, UPrimalUI*, UWidget*, int>(this, "ABasePlayerController.OpenDiscordFriendsUI(UPrimalUI*,UWidget*,int)", LauncherUI, LauncherButton, SceneStackPriority); }
	void HandleDiscordFriendsUIClosed() { NativeCall<void>(this, "ABasePlayerController.HandleDiscordFriendsUIClosed()"); }
	void ClientStartOnlineGame() { NativeCall<void>(this, "ABasePlayerController.ClientStartOnlineGame()"); }
	void Say(const FString& Msg) { NativeCall<void, const FString&>(this, "ABasePlayerController.Say(FString&)", Msg); }
	void CleanupDiscordFriendsSceneState(bool bRequestGarbageCollect) { NativeCall<void, bool>(this, "ABasePlayerController.CleanupDiscordFriendsSceneState(bool)", bRequestGarbageCollect); }
	void RestoreDiscordFriendsLauncherHighlight() { NativeCall<void>(this, "ABasePlayerController.RestoreDiscordFriendsLauncherHighlight()"); }
	void AcceptDiscordInvite(const FString& InviteSecret) { NativeCall<void, const FString&>(this, "ABasePlayerController.AcceptDiscordInvite(FString&)", InviteSecret); }
	void ClientReturnToMainMenuWithTextReason_Implementation(const FText& ReturnReason) { NativeCall<void, const FText&>(this, "ABasePlayerController.ClientReturnToMainMenuWithTextReason_Implementation(FText&)", ReturnReason); }
	void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor*, bool>(this, "ABasePlayerController.GameHasEnded(AActor*,bool)", EndGameFocus, bIsWinner); }
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds) { NativeCall<void, bool, int>(this, "ABasePlayerController.ClientSendRoundEndEvent(bool,int)", bIsWinner, ExpendedTimeInSeconds); }
};