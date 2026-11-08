#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelScriptActor : public AActor
{
public:
	ALevelScriptActor() = delete;
	~ALevelScriptActor() = delete;
	ALevelScriptActor(const ALevelScriptActor&) = delete;
	ALevelScriptActor& operator=(const ALevelScriptActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelScriptActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelScriptActor"); }

	BitFieldValue<bool, unsigned __int32> bInputEnabled() { return { this, "ALevelScriptActor.bInputEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bForceAbsoluteMaxDistance() { return { this, "ALevelScriptActor.bForceAbsoluteMaxDistance"}; }
	BitFieldValue<bool, unsigned __int32> bEnableScriptReplication() { return { this, "ALevelScriptActor.bEnableScriptReplication"}; }
	void OnGameStateReady(AGameState* GameState) { NativeCall<void, AGameState*>(this, "ALevelScriptActor.OnGameStateReady(AGameState*)", GameState); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "ALevelScriptActor.DisableInput(APlayerController*)", PlayerController); }
	void PreInitializeComponents() { NativeCall<void>(this, "ALevelScriptActor.PreInitializeComponents()"); }
	void BeginPlay() { NativeCall<void>(this, "ALevelScriptActor.BeginPlay()"); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "ALevelScriptActor.EnableInput(APlayerController*)", PlayerController); }
	bool RemoteEvent(FName EventName) { return NativeCall<bool, FName>(this, "ALevelScriptActor.RemoteEvent(FName)", EventName); }
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>(this, "ALevelScriptActor.SetCinematicMode(bool,bool,bool,bool,bool)", bCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void LevelReset() { NativeCall<void>(this, "ALevelScriptActor.LevelReset()"); }
};
