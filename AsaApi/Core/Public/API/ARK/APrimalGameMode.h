#pragma once
#include "BulkForward.h"


struct APrimalGameMode : AGameMode
{
	// Fields

	TArray<APlayerStart*, TSizedDefaultAllocator<32> >& PlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*, TSizedDefaultAllocator<32> >*>(this, "APrimalGameMode.PlayerStarts"); }
	TArray<APlayerStart*, TSizedDefaultAllocator<32> >& UsedPlayerStartsField() { return *GetNativePointerField<TArray<APlayerStart*, TSizedDefaultAllocator<32> >*>(this, "APrimalGameMode.UsedPlayerStarts"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalGameMode"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalGameMode"); }
	//void ~APrimalGameMode() { NativeCall<void>(this, "APrimalGameMode.~APrimalGameMode()"); }
	void FinishRestartPlayer(AController* NewPlayer, const UE::Math::TRotator<double>* StartRotation) { NativeCall<void, AController*, const UE::Math::TRotator<double>*>(this, "APrimalGameMode.FinishRestartPlayer(AController*,UE::Math::TRotator<double>&)", NewPlayer, StartRotation); }

	TArray<unsigned int, TSizedDefaultAllocator<32> >* GetSeamlessSublevelsUniqueIds(TArray<unsigned int, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<unsigned int, TSizedDefaultAllocator<32> >*, TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "APrimalGameMode.GetSeamlessSublevelsUniqueIds()", result); }
	void DDoSDetected() { NativeCall<void>(this, "APrimalGameMode.DDoSDetected()"); }
	void ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced* aComponent) { NativeCall<void, FAttachedInstanced*>(this, "APrimalGameMode.ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced*)", aComponent); }
	void PlayEnded() { NativeCall<void>(this, "APrimalGameMode.PlayEnded()"); }
	void SerializeForSaveFile(int SaveVersion, FArchive& InArchive, bool bDataStoresAreSerialized) { NativeCall<void, int, FArchive&, bool>(this, "APrimalGameMode.SerializeForSaveFile(int,FArchive&,bool)", SaveVersion, InArchive, bDataStoresAreSerialized); }
	void BeginUnloadingWorld() { NativeCall<void>(this, "APrimalGameMode.BeginUnloadingWorld()"); }
	void SpawnedPawnFor(AController* PC, APawn* SpawnedPawn) { NativeCall<void, AController*, APawn*>(this, "APrimalGameMode.SpawnedPawnFor(AController*,APawn*)", PC, SpawnedPawn); }
	void MoveInChractersOutOfBounds() { NativeCall<void>(this, "APrimalGameMode.MoveInChractersOutOfBounds()"); }
	FString* GetCurrentServerConnectionString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalGameMode.GetCurrentServerConnectionString()", result); }
	bool IsPlayerAllowedToJoinNoCheck(const FUniqueNetId& PlayerId) { return NativeCall<bool, const FUniqueNetId&>(this, "APrimalGameMode.IsPlayerAllowedToJoinNoCheck(FUniqueNetId&)", PlayerId); }
	TArray<FString, TSizedDefaultAllocator<32> >* GetSeamlessSublevelsNames(TArray<FString, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalGameMode.GetSeamlessSublevelsNames()", result); }
	void SlowFrameDetected(float FrameTime, float SlowFrameThresholdSeconds) { NativeCall<void, float, float>(this, "APrimalGameMode.SlowFrameDetected(float,float)", FrameTime, SlowFrameThresholdSeconds); }
	bool IsFirstPlayerSpawn(APlayerController* NewPlayer) { return NativeCall<bool, APlayerController*>(this, "APrimalGameMode.IsFirstPlayerSpawn(APlayerController*)", NewPlayer); }
};