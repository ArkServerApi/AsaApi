#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "ABasePlayerController.h"

struct AShooterPlayerController_Menu : ABasePlayerController
{
public:
	AShooterPlayerController_Menu() = delete;
	~AShooterPlayerController_Menu() = delete;
	AShooterPlayerController_Menu(const AShooterPlayerController_Menu&) = delete;
	AShooterPlayerController_Menu& operator=(const AShooterPlayerController_Menu&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterPlayerController_Menu"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterPlayerController_Menu"); }



	void DiscordConnect() { NativeCall<void>(this, "AShooterPlayerController_Menu.DiscordConnect()"); }
	void OnDiscordTokenUpdated(UDiscordClientResult* Result) { NativeCall<void, UDiscordClientResult*>(this, "AShooterPlayerController_Menu.OnDiscordTokenUpdated(UDiscordClientResult*)", Result); }
	void OnDiscordNameUpdated(UDiscordClientResult* Result) { NativeCall<void, UDiscordClientResult*>(this, "AShooterPlayerController_Menu.OnDiscordNameUpdated(UDiscordClientResult*)", Result); }
	void DoApplyOptions() { NativeCall<void>(this, "AShooterPlayerController_Menu.DoApplyOptions()"); }
	void SaveProfile() { NativeCall<void>(this, "AShooterPlayerController_Menu.SaveProfile()"); }
	bool IsDiscordAuthorizedNonProvisional() { return NativeCall<bool>(this, "AShooterPlayerController_Menu.IsDiscordAuthorizedNonProvisional()"); }
	void DiscordButtonPushed() { NativeCall<void>(this, "AShooterPlayerController_Menu.DiscordButtonPushed()"); }
	void OnRichPresenceUpdated(UDiscordClientResult* Result) { NativeCall<void, UDiscordClientResult*>(this, "AShooterPlayerController_Menu.OnRichPresenceUpdated(UDiscordClientResult*)", Result); }
	void UpdateRichPresence() { NativeCall<void>(this, "AShooterPlayerController_Menu.UpdateRichPresence()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterPlayerController_Menu.PostInitializeComponents()"); }
	void Destroyed() { NativeCall<void>(this, "AShooterPlayerController_Menu.Destroyed()"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterPlayerController_Menu.BeginPlay()"); }
	void DiscordUnlink() { NativeCall<void>(this, "AShooterPlayerController_Menu.DiscordUnlink()"); }
	void LoadProfile() { NativeCall<void>(this, "AShooterPlayerController_Menu.LoadProfile()"); }
	void OnDiscordButtonTimerReached() { NativeCall<void>(this, "AShooterPlayerController_Menu.OnDiscordButtonTimerReached()"); }
	void ChangeControllerLightColor() { NativeCall<void>(this, "AShooterPlayerController_Menu.ChangeControllerLightColor()"); }
	void OnUnMergeCompleted(UDiscordClientResult* Result) { NativeCall<void, UDiscordClientResult*>(this, "AShooterPlayerController_Menu.OnUnMergeCompleted(UDiscordClientResult*)", Result); }

	UPrimalLocalProfile*& PrimalLocalProfileField() { return *GetNativePointerField<UPrimalLocalProfile**>(this, "AShooterPlayerController_Menu.PrimalLocalProfile"); }
	UDiscordAuthorizationCodeVerifier*& CodeVerifierField() { return *GetNativePointerField<UDiscordAuthorizationCodeVerifier**>(this, "AShooterPlayerController_Menu.CodeVerifier"); }
	UDiscordLocalPlayerSubsystem*& DiscordField() { return *GetNativePointerField<UDiscordLocalPlayerSubsystem**>(this, "AShooterPlayerController_Menu.Discord"); }

	FString& DiscordAccessTokenField() { return *GetNativePointerField<FString*>(this, "AShooterPlayerController_Menu.DiscordAccessToken"); }
	FString& DiscordRefreshTokenField() { return *GetNativePointerField<FString*>(this, "AShooterPlayerController_Menu.DiscordRefreshToken"); }
	FTimerHandle& DiscordButtonLimiterField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterPlayerController_Menu.DiscordButtonLimiter"); }
	void DiscordConnectProvisional(const FUniqueNetId& UserId) { NativeCall<void, const FUniqueNetId&>(this, "AShooterPlayerController_Menu.DiscordConnectProvisional(FUniqueNetId&)", UserId); }
	void OnOutputDevicesEnumerated(const TArray<UDiscordAudioDevice*, TSizedDefaultAllocator<32> >& OutputDevices) { NativeCall<void, const TArray<UDiscordAudioDevice*, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerController_Menu.OnOutputDevicesEnumerated(TArray<UDiscordAudioDevice*,TSizedDefaultAllocator<32>>&)", OutputDevices); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error) { NativeCall<void, int, bool, const FUniqueNetId&, const FString&>(this, "AShooterPlayerController_Menu.OnLoginComplete(int,bool,FUniqueNetId&,FString&)", LocalUserNum, bWasSuccessful, UserId, Error); }
};
