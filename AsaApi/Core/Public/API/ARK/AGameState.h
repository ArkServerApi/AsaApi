#pragma once
#include "BulkForward.h"


struct AGameState : AGameStateBase
{
	// Fields

	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.MatchState"); }
	FName& PreviousMatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.PreviousMatchState"); }
	int& ElapsedTimeField() { return *GetNativePointerField<int*>(this, "AGameState.ElapsedTime"); }
	FTimerHandle& TimerHandle_DefaultTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameState.TimerHandle_DefaultTimer"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameState"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAGameState();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameState.ReceivedGameModeClass()"); }
	void DefaultTimer() { NativeCall<void>(this, "AGameState.DefaultTimer()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameState.PostInitializeComponents()"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart()"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameState.HandleMatchHasStarted()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameState.HasMatchStarted()"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameState.IsMatchInProgress()"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameState.HasMatchEnded()"); }
	void OnRep_MatchState() { NativeCall<void>(this, "AGameState.OnRep_MatchState()"); }
	float GetPlayerStartTime(AController* Controller) { return NativeCall<float, AController*>(this, "AGameState.GetPlayerStartTime(AController*)", Controller); }
	float GetPlayerRespawnDelay(AController* Controller) { return NativeCall<float, AController*>(this, "AGameState.GetPlayerRespawnDelay(AController*)", Controller); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameState"); }

	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameState.HandleMatchHasEnded()"); }
	void OnRep_ElapsedTime() { NativeCall<void>(this, "AGameState.OnRep_ElapsedTime()"); }
	void HandleLeavingMap() { NativeCall<void>(this, "AGameState.HandleLeavingMap()"); }
	void HandleBeginPlay() { NativeCall<void>(this, "AGameState.HandleBeginPlay()"); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameState.SetMatchState(FName)", NewState); }
};