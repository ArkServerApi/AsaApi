#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AGameMode.h"

struct AShooterGame_Menu : AGameMode
{
public:
	AShooterGame_Menu() = delete;
	~AShooterGame_Menu() = delete;
	AShooterGame_Menu(const AShooterGame_Menu&) = delete;
	AShooterGame_Menu& operator=(const AShooterGame_Menu&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterGame_Menu"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterGame_Menu"); }

	bool& HasStartedMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGame_Menu.HasStartedMusic"); }
	bool& bPreparedMenuBGField() { return *GetNativePointerField<bool*>(this, "AShooterGame_Menu.bPreparedMenuBG"); }

	void BeginPlay() { NativeCall<void>(this, "AShooterGame_Menu.BeginPlay()"); }
	UTexture2D* GetMainMenuBackgroundTexture() { return NativeCall<UTexture2D*>(this, "AShooterGame_Menu.GetMainMenuBackgroundTexture()"); }
	void RestartPlayer(AController* NewPlayer) { NativeCall<void, AController*>(this, "AShooterGame_Menu.RestartPlayer(AController*)", NewPlayer); }
	void PrepareMenuBG() { NativeCall<void>(this, "AShooterGame_Menu.PrepareMenuBG()"); }
	void PlayMusic() { NativeCall<void>(this, "AShooterGame_Menu.PlayMusic()"); }

	UTexture2D*& BackgroundTextureOverrideField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterGame_Menu.BackgroundTextureOverride"); }

	FString& MenuMusicField() { return *GetNativePointerField<FString*>(this, "AShooterGame_Menu.MenuMusic"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGame_Menu.ActiveEvent"); }
	TArray<UTexture2D*, TSizedDefaultAllocator<32> >& BackgroundTextureOverridesField() { return *GetNativePointerField<TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "AShooterGame_Menu.BackgroundTextureOverrides"); }
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) { NativeCall<void, const FString&, const FString&, FString&>(this, "AShooterGame_Menu.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	bool GetMainMenuOverrideData(FActiveEventMainMenuOverride& OverrideData) { return NativeCall<bool, FActiveEventMainMenuOverride&>(this, "AShooterGame_Menu.GetMainMenuOverrideData(FActiveEventMainMenuOverride&)", OverrideData); }
};
