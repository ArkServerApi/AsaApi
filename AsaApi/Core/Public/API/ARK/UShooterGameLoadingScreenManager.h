#pragma once
#include "BulkForward.h"
#include "UEngineSubsystem.h"

struct UShooterGameLoadingScreenManager : public UEngineSubsystem
{
public:
	UShooterGameLoadingScreenManager() = delete;
	~UShooterGameLoadingScreenManager() = delete;
	UShooterGameLoadingScreenManager(const UShooterGameLoadingScreenManager&) = delete;
	UShooterGameLoadingScreenManager& operator=(const UShooterGameLoadingScreenManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGameLoadingScreenManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGameLoadingScreenManager"); }

	bool& bMovieWasPlayingField() { return *GetNativePointerField<bool*>(this, "UShooterGameLoadingScreenManager.bMovieWasPlaying"); }
	void EndStreamingPause() { NativeCall<void>(this, "UShooterGameLoadingScreenManager.EndStreamingPause()"); }
	void SetupLoadingScreen() { NativeCall<void>(this, "UShooterGameLoadingScreenManager.SetupLoadingScreen()"); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "UShooterGameLoadingScreenManager.Initialize(FSubsystemCollectionBase&)", Collection); }
	void BeginStreamingPause(FViewport* Viewport) { NativeCall<void, FViewport*>(this, "UShooterGameLoadingScreenManager.BeginStreamingPause(FViewport*)", Viewport); }
};
