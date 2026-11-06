#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UNetDriver.h"

class UDemoNetDriver : public UNetDriver
{
public:
	UDemoNetDriver() = delete;
	~UDemoNetDriver() = delete;
	UDemoNetDriver(const UDemoNetDriver&) = delete;
	UDemoNetDriver& operator=(const UDemoNetDriver&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDemoNetDriver"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDemoNetDriver"); }
	APlayerController*& SpectatorControllerField() { return *GetNativePointerField<APlayerController**>(this, "UDemoNetDriver.SpectatorController"); }
	double& AccumulatedRecordTimeField() { return *GetNativePointerField<double*>(this, "UDemoNetDriver.AccumulatedRecordTime"); }
	double& LastRecordAvgFlushField() { return *GetNativePointerField<double*>(this, "UDemoNetDriver.LastRecordAvgFlush"); }
	double& MaxRecordTimeField() { return *GetNativePointerField<double*>(this, "UDemoNetDriver.MaxRecordTime"); }
	int& RecordCountSinceFlushField() { return *GetNativePointerField<int*>(this, "UDemoNetDriver.RecordCountSinceFlush"); }
	bool& bIsFastForwardingField() { return *GetNativePointerField<bool*>(this, "UDemoNetDriver.bIsFastForwarding"); }
	bool& bIsFinalizingFastForwardField() { return *GetNativePointerField<bool*>(this, "UDemoNetDriver.bIsFinalizingFastForward"); }
	bool& bIsRestoringStartupActorsField() { return *GetNativePointerField<bool*>(this, "UDemoNetDriver.bIsRestoringStartupActors"); }
	double& SavedReplicatedWorldTimeSecondsField() { return *GetNativePointerField<double*>(this, "UDemoNetDriver.SavedReplicatedWorldTimeSeconds"); }
	float& SavedSecondsToSkipField() { return *GetNativePointerField<float*>(this, "UDemoNetDriver.SavedSecondsToSkip"); }
	FString& DemoSessionIDField() { return *GetNativePointerField<FString*>(this, "UDemoNetDriver.DemoSessionID"); }
	float& MaxDesiredRecordTimeMSField() { return *GetNativePointerField<float*>(this, "UDemoNetDriver.MaxDesiredRecordTimeMS"); }
	float& CheckpointSaveMaxMSPerFrameField() { return *GetNativePointerField<float*>(this, "UDemoNetDriver.CheckpointSaveMaxMSPerFrame"); }
	TWeakObjectPtr<APlayerController, FWeakObjectPtr>& ViewerOverrideField() { return *GetNativePointerField<TWeakObjectPtr<APlayerController, FWeakObjectPtr>*>(this, "UDemoNetDriver.ViewerOverride"); }
	float& LastProcessedPacketTimeField() { return *GetNativePointerField<float*>(this, "UDemoNetDriver.LastProcessedPacketTime"); }
	int& PlaybackPacketIndexField() { return *GetNativePointerField<int*>(this, "UDemoNetDriver.PlaybackPacketIndex"); }
	FDelegateHandle& DelegateHandleActorPreDestroyField() { return *GetNativePointerField<FDelegateHandle*>(this, "UDemoNetDriver.DelegateHandleActorPreDestroy"); }
	__int64& MaxArchiveReadPosField() { return *GetNativePointerField<__int64*>(this, "UDemoNetDriver.MaxArchiveReadPos"); }
	float& RecordBuildConsiderAndPrioritizeTimeSliceField() { return *GetNativePointerField<float*>(this, "UDemoNetDriver.RecordBuildConsiderAndPrioritizeTimeSlice"); }
	float& RecordDestructionInfoReplicationTimeSliceField() { return *GetNativePointerField<float*>(this, "UDemoNetDriver.RecordDestructionInfoReplicationTimeSlice"); }
	FReplayHelper& ReplayHelperField() { return *GetNativePointerField<FReplayHelper*>(this, "UDemoNetDriver.ReplayHelper"); }
	bool& bSkipStartupActorRollbackField() { return *GetNativePointerField<bool*>(this, "UDemoNetDriver.bSkipStartupActorRollback"); }
	BitFieldValue<bool, unsigned char> bChannelsArePaused() { return { this, "UDemoNetDriver.bChannelsArePaused"}; }
	BitFieldValue<bool, unsigned char> bIsFastForwardingForCheckpoint() { return { this, "UDemoNetDriver.bIsFastForwardingForCheckpoint"}; }
	BitFieldValue<bool, unsigned char> bWasStartStreamingSuccessful() { return { this, "UDemoNetDriver.bWasStartStreamingSuccessful"}; }
	BitFieldValue<bool, unsigned char> bPrioritizeActors() { return { this, "UDemoNetDriver.bPrioritizeActors"}; }
	BitFieldValue<bool, unsigned char> bIsWaitingForHeaderDownload() { return { this, "UDemoNetDriver.bIsWaitingForHeaderDownload"}; }
	BitFieldValue<bool, unsigned char> bIsWaitingForStream() { return { this, "UDemoNetDriver.bIsWaitingForStream"}; }
	void NotifyActorClientDormancyChanged(AActor* Actor, ENetDormancy OldDormancyState) { NativeCall<void, AActor*, ENetDormancy>(this, "UDemoNetDriver.NotifyActorClientDormancyChanged(AActor*,ENetDormancy)", Actor, OldDormancyState); }
	void RequestCheckpoint() { NativeCall<void>(this, "UDemoNetDriver.RequestCheckpoint()"); }
	void AdjustConsiderTime(float ReplicatedPercent) { NativeCall<void, float>(this, "UDemoNetDriver.AdjustConsiderTime(float)", ReplicatedPercent); }
	void TickFlushInternal(float DeltaSeconds) { NativeCall<void, float>(this, "UDemoNetDriver.TickFlushInternal(float)", DeltaSeconds); }
	bool ShouldClientDestroyTearOffActors() { return NativeCall<bool>(this, "UDemoNetDriver.ShouldClientDestroyTearOffActors()"); }
	void RestoreComponentState(UActorComponent* ActorComp, FRollbackNetStartupActorInfo& RollbackActor) { NativeCall<void, UActorComponent*, FRollbackNetStartupActorInfo&>(this, "UDemoNetDriver.RestoreComponentState(UActorComponent*,FRollbackNetStartupActorInfo&)", ActorComp, RollbackActor); }
	bool SetExternalDataForObject(UObject* OwningObject, const unsigned char* Src, int NumBits) { return NativeCall<bool, UObject*, const unsigned char*, int>(this, "UDemoNetDriver.SetExternalDataForObject(UObject*,unsignedchar*,int)", OwningObject, Src, NumBits); }
	bool ReplicatePrioritizedActor(const FActorPriority& ActorPriority, FRepActorsParams& Params) { return NativeCall<bool, const FActorPriority&, FRepActorsParams&>(this, "UDemoNetDriver.ReplicatePrioritizedActor(FActorPriority&,FRepActorsParams&)", ActorPriority, Params); }
	bool ContinueListen(FURL& ListenURL) { return NativeCall<bool, FURL&>(this, "UDemoNetDriver.ContinueListen(FURL&)", ListenURL); }
	bool IsRecordingPaused() { return NativeCall<bool>(this, "UDemoNetDriver.IsRecordingPaused()"); }
	void ReplayStreamingReady(const FStartStreamingResult& Result) { NativeCall<void, const FStartStreamingResult&>(this, "UDemoNetDriver.ReplayStreamingReady(FStartStreamingResult&)", Result); }
	void AddUserToReplay(const FString& UserString) { NativeCall<void, const FString&>(this, "UDemoNetDriver.AddUserToReplay(FString&)", UserString); }
	void SetSpectatorController(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "UDemoNetDriver.SetSpectatorController(APlayerController*)", PC); }
	void ResetDemoState() { NativeCall<void>(this, "UDemoNetDriver.ResetDemoState()"); }
	bool IsAvailable() { return NativeCall<bool>(this, "UDemoNetDriver.IsAvailable()"); }
	bool InitConnect(FNetworkNotify* InNotify, const FURL& ConnectURL, FString& Error) { return NativeCall<bool, FNetworkNotify*, const FURL&, FString&>(this, "UDemoNetDriver.InitConnect(FNetworkNotify*,FURL&,FString&)", InNotify, ConnectURL, Error); }
	void OnSeamlessTravelStartDuringRecording(const FString& LevelName) { NativeCall<void, const FString&>(this, "UDemoNetDriver.OnSeamlessTravelStartDuringRecording(FString&)", LevelName); }
	bool IsServer() { return NativeCall<bool>(this, "UDemoNetDriver.IsServer()"); }
	void AddReplayTask(FQueuedReplayTask* NewTask) { NativeCall<void, FQueuedReplayTask*>(this, "UDemoNetDriver.AddReplayTask(FQueuedReplayTask*)", NewTask); }
	bool ShouldIgnoreRPCs() { return NativeCall<bool>(this, "UDemoNetDriver.ShouldIgnoreRPCs()"); }
	void CleanupOutstandingRewindActors() { NativeCall<void>(this, "UDemoNetDriver.CleanupOutstandingRewindActors()"); }
	bool IsRecording() { return NativeCall<bool>(this, "UDemoNetDriver.IsRecording()"); }
	void OnActorPreDestroy(AActor* DestroyedActor) { NativeCall<void, AActor*>(this, "UDemoNetDriver.OnActorPreDestroy(AActor*)", DestroyedActor); }
	bool IsLevelInitializedForActor(const AActor* InActor, const UNetConnection* InConnection) { return NativeCall<bool, const AActor*, const UNetConnection*>(this, "UDemoNetDriver.IsLevelInitializedForActor(AActor*,UNetConnection*)", InActor, InConnection); }
	int CleanUpSplitscreenConnections(bool bDeleteOwner) { return NativeCall<int, bool>(this, "UDemoNetDriver.CleanUpSplitscreenConnections(bool)", bDeleteOwner); }
	void ProcessLocalServerPackets() { NativeCall<void>(this, "UDemoNetDriver.ProcessLocalServerPackets()"); }
	void ProcessRemoteFunction(AActor* Actor, UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack, UObject* SubObject) { NativeCall<void, AActor*, UFunction*, void*, FOutParmRec*, FFrame*, UObject*>(this, "UDemoNetDriver.ProcessRemoteFunction(AActor*,UFunction*,void*,FOutParmRec*,FFrame*,UObject*)", Actor, Function, Parameters, OutParms, Stack, SubObject); }
	void PrepFastForwardLevels() { NativeCall<void>(this, "UDemoNetDriver.PrepFastForwardLevels()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDemoNetDriver.Serialize(FArchive&)", Ar); }
	void RestoreConnectionPostScrub(APlayerController* PC, UNetConnection* NetConnection) { NativeCall<void, APlayerController*, UNetConnection*>(this, "UDemoNetDriver.RestoreConnectionPostScrub(APlayerController*,UNetConnection*)", PC, NetConnection); }
	void ProcessLocalClientPackets() { NativeCall<void>(this, "UDemoNetDriver.ProcessLocalClientPackets()"); }
	void InitDefaults() { NativeCall<void>(this, "UDemoNetDriver.InitDefaults()"); }
	ISocketSubsystem* GetSocketSubsystem() { return NativeCall<ISocketSubsystem*>(this, "UDemoNetDriver.GetSocketSubsystem()"); }
	bool ShouldSkipRepNotifies() { return NativeCall<bool>(this, "UDemoNetDriver.ShouldSkipRepNotifies()"); }
	void OnRefreshHeaderCompletePrivate(const FDownloadHeaderResult& Result, int LevelIndex) { NativeCall<void, const FDownloadHeaderResult&, int>(this, "UDemoNetDriver.OnRefreshHeaderCompletePrivate(FDownloadHeaderResult&,int)", Result, LevelIndex); }
	void NotifyActorLevelUnloaded(AActor* Actor) { NativeCall<void, AActor*>(this, "UDemoNetDriver.NotifyActorLevelUnloaded(AActor*)", Actor); }
	bool ProcessReplayTasks() { return NativeCall<bool>(this, "UDemoNetDriver.ProcessReplayTasks()"); }
	void NotifyActorChannelOpen(UActorChannel* Channel, AActor* Actor) { NativeCall<void, UActorChannel*, AActor*>(this, "UDemoNetDriver.NotifyActorChannelOpen(UActorChannel*,AActor*)", Channel, Actor); }
	void TickDemoRecordFrame(float DeltaSeconds) { NativeCall<void, float>(this, "UDemoNetDriver.TickDemoRecordFrame(float)", DeltaSeconds); }
	bool ShouldTickFlushAsyncEndOfFrame() { return NativeCall<bool>(this, "UDemoNetDriver.ShouldTickFlushAsyncEndOfFrame()"); }
	void ProcessSeamlessTravel(int LevelIndex) { NativeCall<void, int>(this, "UDemoNetDriver.ProcessSeamlessTravel(int)", LevelIndex); }
	bool DoesSupportEncryption() { return NativeCall<bool>(this, "UDemoNetDriver.DoesSupportEncryption()"); }
	bool LoadCheckpoint(const FGotoResult& GotoResult) { return NativeCall<bool, const FGotoResult&>(this, "UDemoNetDriver.LoadCheckpoint(FGotoResult&)", GotoResult); }
	bool FastForwardLevels(const FGotoResult& GotoResult) { return NativeCall<bool, const FGotoResult&>(this, "UDemoNetDriver.FastForwardLevels(FGotoResult&)", GotoResult); }
	void TickFlushAsyncEndOfFrame(float DeltaSeconds) { NativeCall<void, float>(this, "UDemoNetDriver.TickFlushAsyncEndOfFrame(float)", DeltaSeconds); }
	FString* LowLevelGetNetworkNumber(FString* result) { return NativeCall<FString*, FString*>(this, "UDemoNetDriver.LowLevelGetNetworkNumber()", result); }
	bool InitConnectInternal(FString& Error) { return NativeCall<bool, FString&>(this, "UDemoNetDriver.InitConnectInternal(FString&)", Error); }
	void SetWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UDemoNetDriver.SetWorld(UWorld*)", InWorld); }
	void OnPostLoadMapWithWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UDemoNetDriver.OnPostLoadMapWithWorld(UWorld*)", InWorld); }
	void TickDemoPlayback(float DeltaSeconds) { NativeCall<void, float>(this, "UDemoNetDriver.TickDemoPlayback(float)", DeltaSeconds); }
	void PauseChannels(bool bPause) { NativeCall<void, bool>(this, "UDemoNetDriver.PauseChannels(bool)", bPause); }
	void FinalizeFastForward(double StartTime) { NativeCall<void, double>(this, "UDemoNetDriver.FinalizeFastForward(double)", StartTime); }
	void ForceNetUpdate(AActor* Actor) { NativeCall<void, AActor*>(this, "UDemoNetDriver.ForceNetUpdate(AActor*)", Actor); }
	void ClearReplayTasks() { NativeCall<void>(this, "UDemoNetDriver.ClearReplayTasks()"); }
	void SpawnDemoRecSpectator(UNetConnection* Connection, const FURL& ListenURL) { NativeCall<void, UNetConnection*, const FURL&>(this, "UDemoNetDriver.SpawnDemoRecSpectator(UNetConnection*,FURL&)", Connection, ListenURL); }
	void AddNonQueuedActorForScrubbing(const AActor* Actor) { NativeCall<void, const AActor*>(this, "UDemoNetDriver.AddNonQueuedActorForScrubbing(AActor*)", Actor); }
	bool IsPlaying() { return NativeCall<bool>(this, "UDemoNetDriver.IsPlaying()"); }
	void RespawnNecessaryNetStartupActors(TArray<AActor*, TSizedDefaultAllocator<32> >& SpawnedActors, ULevel* Level) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&, ULevel*>(this, "UDemoNetDriver.RespawnNecessaryNetStartupActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,ULevel*)", SpawnedActors, Level); }
	bool InitListen(FNetworkNotify* InNotify, FURL& ListenURL, bool bReuseAddressAndPort, FString& Error) { return NativeCall<bool, FNetworkNotify*, FURL&, bool, FString&>(this, "UDemoNetDriver.InitListen(FNetworkNotify*,FURL&,bool,FString&)", InNotify, ListenURL, bReuseAddressAndPort, Error); }
	bool ShouldReplicateActor(AActor* Actor) { return NativeCall<bool, AActor*>(this, "UDemoNetDriver.ShouldReplicateActor(AActor*)", Actor); }
	void DiffActorProperties(UActorChannel* ActorChannel) { NativeCall<void, UActorChannel*>(this, "UDemoNetDriver.DiffActorProperties(UActorChannel*const)", ActorChannel); }
	void JumpToEndOfLiveReplay() { NativeCall<void>(this, "UDemoNetDriver.JumpToEndOfLiveReplay()"); }
	bool IsNamedTaskInQueue(const FName& Name) { return NativeCall<bool, const FName&>(this, "UDemoNetDriver.IsNamedTaskInQueue(FName&)", Name); }
	bool ShouldReceiveRepNotifiesForObject(UObject* Object) { return NativeCall<bool, UObject*>(this, "UDemoNetDriver.ShouldReceiveRepNotifiesForObject(UObject*)", Object); }
	bool ShouldReplicateFunction(AActor* Actor, UFunction* Function) { return NativeCall<bool, AActor*, UFunction*>(this, "UDemoNetDriver.ShouldReplicateFunction(AActor*,UFunction*)", Actor, Function); }
	void InitDestroyedStartupActors() { NativeCall<void>(this, "UDemoNetDriver.InitDestroyedStartupActors()"); }
	bool ShouldForwardFunction(AActor* Actor, UFunction* Function, void* Parms) { return NativeCall<bool, AActor*, UFunction*, void*>(this, "UDemoNetDriver.ShouldForwardFunction(AActor*,UFunction*,void*)", Actor, Function, Parms); }
	void QueueNetStartupActorForRollbackViaDeletion(AActor* Actor) { NativeCall<void, AActor*>(this, "UDemoNetDriver.QueueNetStartupActorForRollbackViaDeletion(AActor*)", Actor); }
	void TickDispatch(float DeltaSeconds) { NativeCall<void, float>(this, "UDemoNetDriver.TickDispatch(float)", DeltaSeconds); }
	void NotifyActorTornOff(AActor* Actor) { NativeCall<void, AActor*>(this, "UDemoNetDriver.NotifyActorTornOff(AActor*)", Actor); }
	void FinishDestroy() { NativeCall<void>(this, "UDemoNetDriver.FinishDestroy()"); }
	bool InitBase(bool bInitAsClient, FNetworkNotify* InNotify, const FURL& URL, bool bReuseAddressAndPort, FString& Error) { return NativeCall<bool, bool, FNetworkNotify*, const FURL&, bool, FString&>(this, "UDemoNetDriver.InitBase(bool,FNetworkNotify*,FURL&,bool,FString&)", bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error); }
	UChannel* InternalCreateChannelByName(const FName& ChName) { return NativeCall<UChannel*, const FName&>(this, "UDemoNetDriver.InternalCreateChannelByName(FName&)", ChName); }
	bool IsNetResourceValid() { return NativeCall<bool>(this, "UDemoNetDriver.IsNetResourceValid()"); }
	bool RemoveSplitscreenViewer(APlayerController* RemovePlayer, bool bMarkOwnerForDeletion) { return NativeCall<bool, APlayerController*, bool>(this, "UDemoNetDriver.RemoveSplitscreenViewer(APlayerController*,bool)", RemovePlayer, bMarkOwnerForDeletion); }
	void NotifyStreamingLevelUnload(ULevel* InLevel) { NativeCall<void, ULevel*>(this, "UDemoNetDriver.NotifyStreamingLevelUnload(ULevel*)", InLevel); }
	void TickFlush(float DeltaSeconds) { NativeCall<void, float>(this, "UDemoNetDriver.TickFlush(float)", DeltaSeconds); }
	void StopDemo() { NativeCall<void>(this, "UDemoNetDriver.StopDemo()"); }
	bool ProcessPacket(const FPlaybackPacket& PlaybackPacket) { return NativeCall<bool, const FPlaybackPacket&>(this, "UDemoNetDriver.ProcessPacket(FPlaybackPacket&)", PlaybackPacket); }
	bool ProcessPacket(const unsigned char* Data, int Count) { return NativeCall<bool, const unsigned char*, int>(this, "UDemoNetDriver.ProcessPacket(unsignedchar*,int)", Data, Count); }
	void PostTickFlush() { NativeCall<void>(this, "UDemoNetDriver.PostTickFlush()"); }
};
