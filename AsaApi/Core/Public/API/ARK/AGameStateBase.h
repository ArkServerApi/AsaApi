#pragma once
#include "BulkForward.h"


struct AGameStateBase : AInfo
{
	// Fields

	TSubclassOf<AGameModeBase>& GameModeClassField() { return *GetNativePointerField<TSubclassOf<AGameModeBase>*>(this, "AGameStateBase.GameModeClass"); }
	TObjectPtr<AGameModeBase>& AuthorityGameModeField() { return *GetNativePointerField<TObjectPtr<AGameModeBase>*>(this, "AGameStateBase.AuthorityGameMode"); }
	TSubclassOf<ASpectatorPawn>& SpectatorClassField() { return *GetNativePointerField<TSubclassOf<ASpectatorPawn>*>(this, "AGameStateBase.SpectatorClass"); }
	TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >& PlayerArrayField() { return *GetNativePointerField<TArray<TObjectPtr<APlayerState>, TSizedDefaultAllocator<32> >*>(this, "AGameStateBase.PlayerArray"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& ReplicatedWorldTimeSecondsField();
	long double& ReplicatedWorldTimeSecondsDoubleField() { return *GetNativePointerField<long double*>(this, "AGameStateBase.ReplicatedWorldTimeSecondsDouble"); }
	float& ServerWorldTimeSecondsDeltaField() { return *GetNativePointerField<float*>(this, "AGameStateBase.ServerWorldTimeSecondsDelta"); }
	float& ServerWorldTimeSecondsUpdateFrequencyField() { return *GetNativePointerField<float*>(this, "AGameStateBase.ServerWorldTimeSecondsUpdateFrequency"); }
	FTimerHandle& TimerHandle_UpdateServerTimeSecondsField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameStateBase.TimerHandle_UpdateServerTimeSeconds"); }
	long double& SumServerWorldTimeSecondsDeltaField() { return *GetNativePointerField<long double*>(this, "AGameStateBase.SumServerWorldTimeSecondsDelta"); }
	unsigned int& NumServerWorldTimeSecondsDeltasField() { return *GetNativePointerField<unsigned int*>(this, "AGameStateBase.NumServerWorldTimeSecondsDeltas"); }
	TMap<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, 0> >& SemaphoreStorageField() { return *GetNativePointerField<TMap<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FSemaphoreEntry, TSizedDefaultAllocator<32> >, 0> >*>(this, "AGameStateBase.SemaphoreStorage"); }
	FPostProcessOverlapEvent& OnAnyPostProcessVolumeEnteredField() { return *GetNativePointerField<FPostProcessOverlapEvent*>(this, "AGameStateBase.OnAnyPostProcessVolumeEntered"); }
	FPostProcessOverlapEvent& OnAnyPostProcessVolumeLeftField() { return *GetNativePointerField<FPostProcessOverlapEvent*>(this, "AGameStateBase.OnAnyPostProcessVolumeLeft"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameStateBase"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAGameStateBase();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	const AGameModeBase* GetDefaultGameMode() { return NativeCall<const AGameModeBase*>(this, "AGameStateBase.GetDefaultGameMode()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameStateBase.PostInitializeComponents()"); }
	void OnRep_GameModeClass() { NativeCall<void>(this, "AGameStateBase.OnRep_GameModeClass()"); }
	void OnRep_SpectatorClass(FName NewState) { NativeCall<void, FName>(this, "AGameStateBase.OnRep_SpectatorClass()", NewState); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameStateBase.ReceivedGameModeClass()"); }
	void ReceivedSpectatorClass() { NativeCall<void>(this, "AGameStateBase.ReceivedSpectatorClass()"); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>(this, "AGameStateBase.SeamlessTravelTransitionCheckpoint(bool)", bToTransitionMap); }
	void AddPlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AGameStateBase.AddPlayerState(APlayerState*)", PlayerState); }
	void RemovePlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AGameStateBase.RemovePlayerState(APlayerState*)", PlayerState); }
	long double GetServerWorldTimeSeconds() { return NativeCall<long double>(this, "AGameStateBase.GetServerWorldTimeSeconds()"); }
	void UpdateServerTimeSeconds() { NativeCall<void>(this, "AGameStateBase.UpdateServerTimeSeconds()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_ReplicatedWorldTimeSecondsDouble() { NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedWorldTimeSecondsDouble()"); }
	void OnRep_ReplicatedHasBegunPlay() { NativeCall<void>(this, "AGameStateBase.OnRep_ReplicatedHasBegunPlay()"); }
	void HandleBeginPlay() { NativeCall<void>(this, "AGameStateBase.HandleBeginPlay()"); }
	bool HasBegunPlay() { return NativeCall<bool>(this, "AGameStateBase.HasBegunPlay()"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameStateBase.HasMatchStarted()"); }
	float GetPlayerStartTime(AController* Controller) { return NativeCall<float, AController*>(this, "AGameStateBase.GetPlayerStartTime(AController*)", Controller); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AGameStateBase.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	APlayerState* GetPlayerStateFromUniqueNetId(const FUniqueNetIdWrapper* InPlayerId) { return NativeCall<APlayerState*, const FUniqueNetIdWrapper*>(this, "AGameStateBase.GetPlayerStateFromUniqueNetId(FUniqueNetIdWrapper&)", InPlayerId); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameStateBase"); }

	bool& bReplicatedHasBegunPlayField() { return *GetNativePointerField<bool*>(this, "AGameStateBase.bReplicatedHasBegunPlay"); }
	void LevelAddedToWorld(ULevel* addedLevel) { NativeCall<void, ULevel*>(this, "AGameStateBase.LevelAddedToWorld(ULevel*)", addedLevel); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AGameStateBase.GetVelocity(bool)", result, bIsForRagdoll); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameStateBase.HasMatchEnded()"); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "AGameStateBase.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	float GetClientReplicationRateFor(UNetConnection* InConnection, AActor* InActor) { return NativeCall<float, UNetConnection*, AActor*>(this, "AGameStateBase.GetClientReplicationRateFor(UNetConnection*,AActor*)", InConnection, InActor); }
	void AsyncPackageLoaded(UObject* Package) { NativeCall<void, UObject*>(this, "AGameStateBase.AsyncPackageLoaded(UObject*)", Package); }
	float GetPlayerRespawnDelay(AController* Controller) { return NativeCall<float, AController*>(this, "AGameStateBase.GetPlayerRespawnDelay(AController*)", Controller); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "AGameStateBase.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	float GetMatineePlayRate(AActor* forMatineeActor) { return NativeCall<float, AActor*>(this, "AGameStateBase.GetMatineePlayRate(AActor*)", forMatineeActor); }
};