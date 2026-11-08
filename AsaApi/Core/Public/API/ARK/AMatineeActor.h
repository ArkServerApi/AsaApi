#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMatineeActor : public AActor
{
public:
	AMatineeActor() = delete;
	~AMatineeActor() = delete;
	AMatineeActor(const AMatineeActor&) = delete;
	AMatineeActor& operator=(const AMatineeActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMatineeActor"); }

	FName& MatineeControllerNameField() { return *GetNativePointerField<FName*>(this, "AMatineeActor.MatineeControllerName"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "AMatineeActor.PlayRate"); }
	float& ForceStartPositionField() { return *GetNativePointerField<float*>(this, "AMatineeActor.ForceStartPosition"); }
	int& PreferredSplitScreenNumField() { return *GetNativePointerField<int*>(this, "AMatineeActor.PreferredSplitScreenNum"); }
	float& InterpPositionField() { return *GetNativePointerField<float*>(this, "AMatineeActor.InterpPosition"); }
	float& ClientSidePositionErrorToleranceField() { return *GetNativePointerField<float*>(this, "AMatineeActor.ClientSidePositionErrorTolerance"); }
	unsigned char& ReplicationForceIsPlayingField() { return *GetNativePointerField<unsigned char*>(this, "AMatineeActor.ReplicationForceIsPlaying"); }
	FOnMatineeEvent& OnPlayField() { return *GetNativePointerField<FOnMatineeEvent*>(this, "AMatineeActor.OnPlay"); }
	FOnMatineeEvent& OnStopField() { return *GetNativePointerField<FOnMatineeEvent*>(this, "AMatineeActor.OnStop"); }
	FOnMatineeEvent& OnPauseField() { return *GetNativePointerField<FOnMatineeEvent*>(this, "AMatineeActor.OnPause"); }
	FTimerHandle& TimerHandle_CheckPriorityRefreshField() { return *GetNativePointerField<FTimerHandle*>(this, "AMatineeActor.TimerHandle_CheckPriorityRefresh"); }
	BitFieldValue<bool, unsigned __int32> bPlayOnLevelLoad() { return { this, "AMatineeActor.bPlayOnLevelLoad"}; }
	BitFieldValue<bool, unsigned __int32> bForceStartPos() { return { this, "AMatineeActor.bForceStartPos"}; }
	BitFieldValue<bool, unsigned __int32> bLooping() { return { this, "AMatineeActor.bLooping"}; }
	BitFieldValue<bool, unsigned __int32> bRewindOnPlay() { return { this, "AMatineeActor.bRewindOnPlay"}; }
	BitFieldValue<bool, unsigned __int32> bNoResetOnRewind() { return { this, "AMatineeActor.bNoResetOnRewind"}; }
	BitFieldValue<bool, unsigned __int32> bRewindIfAlreadyPlaying() { return { this, "AMatineeActor.bRewindIfAlreadyPlaying"}; }
	BitFieldValue<bool, unsigned __int32> bDisableRadioFilter() { return { this, "AMatineeActor.bDisableRadioFilter"}; }
	BitFieldValue<bool, unsigned __int32> bClientSideOnly() { return { this, "AMatineeActor.bClientSideOnly"}; }
	BitFieldValue<bool, unsigned __int32> bSkipUpdateIfNotVisible() { return { this, "AMatineeActor.bSkipUpdateIfNotVisible"}; }
	BitFieldValue<bool, unsigned __int32> bIsSkippable() { return { this, "AMatineeActor.bIsSkippable"}; }
	BitFieldValue<bool, unsigned __int32> bDisableMovementInput() { return { this, "AMatineeActor.bDisableMovementInput"}; }
	BitFieldValue<bool, unsigned __int32> bDisableLookAtInput() { return { this, "AMatineeActor.bDisableLookAtInput"}; }
	BitFieldValue<bool, unsigned __int32> bHidePlayer() { return { this, "AMatineeActor.bHidePlayer"}; }
	BitFieldValue<bool, unsigned __int32> bHideHud() { return { this, "AMatineeActor.bHideHud"}; }
	BitFieldValue<bool, unsigned __int32> bShouldShowGore() { return { this, "AMatineeActor.bShouldShowGore"}; }
	BitFieldValue<bool, unsigned __int32> bIsPlaying() { return { this, "AMatineeActor.bIsPlaying"}; }
	BitFieldValue<bool, unsigned __int32> bReversePlayback() { return { this, "AMatineeActor.bReversePlayback"}; }
	BitFieldValue<bool, unsigned __int32> bPaused() { return { this, "AMatineeActor.bPaused"}; }
	BitFieldValue<bool, unsigned __int32> bPendingStop() { return { this, "AMatineeActor.bPendingStop"}; }
	BitFieldValue<bool, unsigned __int32> bIsGameplayRelevant() { return { this, "AMatineeActor.bIsGameplayRelevant"}; }
	BitFieldValue<bool, unsigned __int32> bDedicatedServerUpdateInterpolations() { return { this, "AMatineeActor.bDedicatedServerUpdateInterpolations"}; }
	BitFieldValue<bool, unsigned __int32> bReplicateGroupInfos() { return { this, "AMatineeActor.bReplicateGroupInfos"}; }
	BitFieldValue<bool, unsigned __int32> bUseGameStatePlayRate() { return { this, "AMatineeActor.bUseGameStatePlayRate"}; }
	BitFieldValue<bool, unsigned __int32> bClientDontPlayMatineeIfCompleted() { return { this, "AMatineeActor.bClientDontPlayMatineeIfCompleted"}; }
	BitFieldValue<bool, unsigned __int32> bClientInitializedMatinee() { return { this, "AMatineeActor.bClientInitializedMatinee"}; }
	void UpdateInterpForParentMovementTracks(float Time, UInterpGroupInst* ViewGroupInst) { NativeCall<void, float, UInterpGroupInst*>(this, "AMatineeActor.UpdateInterpForParentMovementTracks(float,UInterpGroupInst*)", Time, ViewGroupInst); }
	void Play(float OverrideSetPosition, bool bOverridePositionJump) { NativeCall<void, float, bool>(this, "AMatineeActor.Play(float,bool)", OverrideSetPosition, bOverridePositionJump); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMatineeActor"); }
	void TermInterp() { NativeCall<void>(this, "AMatineeActor.TermInterp()"); }
	void Pause() { NativeCall<void>(this, "AMatineeActor.Pause()"); }
	void Reverse() { NativeCall<void>(this, "AMatineeActor.Reverse()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AMatineeActor.Tick(float)", DeltaTime); }
	void PostLoad() { NativeCall<void>(this, "AMatineeActor.PostLoad()"); }
	bool IsMatineeCompatibleWithPlayer(APlayerController* InPC) { return NativeCall<bool, APlayerController*>(this, "AMatineeActor.IsMatineeCompatibleWithPlayer(APlayerController*)", InPC); }
	void SetLoopingState(bool bNewLooping) { NativeCall<void, bool>(this, "AMatineeActor.SetLoopingState(bool)", bNewLooping); }
	void StepInterp(float DeltaTime, bool bPreview) { NativeCall<void, float, bool>(this, "AMatineeActor.StepInterp(float,bool)", DeltaTime, bPreview); }
	void UpdateInterp(float NewPosition, bool bPreview, bool bJump, bool bSkipMatineeUpdate) { NativeCall<void, float, bool, bool, bool>(this, "AMatineeActor.UpdateInterp(float,bool,bool,bool)", NewPosition, bPreview, bJump, bSkipMatineeUpdate); }
	void UpdateReplicatedData(bool bIsBeginningPlay) { NativeCall<void, bool>(this, "AMatineeActor.UpdateReplicatedData(bool)", bIsBeginningPlay); }
	void AddActorToGroup(FName GroupName, AActor* TheGroupActor) { NativeCall<void, FName, AActor*>(this, "AMatineeActor.AddActorToGroup(FName,AActor*)", GroupName, TheGroupActor); }
	void InitInterp() { NativeCall<void>(this, "AMatineeActor.InitInterp()"); }
	UInterpGroupInst* FindFirstGroupInstByName(const FString& InGroupName) { return NativeCall<UInterpGroupInst*, const FString&>(this, "AMatineeActor.FindFirstGroupInstByName(FString&)", InGroupName); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "AMatineeActor.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void Stop() { NativeCall<void>(this, "AMatineeActor.Stop()"); }
	void NotifyEventTriggered(FName EventName, float EventTime, bool bUseCustomEventName) { NativeCall<void, FName, float, bool>(this, "AMatineeActor.NotifyEventTriggered(FName,float,bool)", EventName, EventTime, bUseCustomEventName); }
	void ChangePlaybackDirection() { NativeCall<void>(this, "AMatineeActor.ChangePlaybackDirection()"); }
	void BeginPlay() { NativeCall<void>(this, "AMatineeActor.BeginPlay()"); }
	void SetupCameraCuts() { NativeCall<void>(this, "AMatineeActor.SetupCameraCuts()"); }
	void OnRep_IsPlayingMatinee() { NativeCall<void>(this, "AMatineeActor.OnRep_IsPlayingMatinee()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMatineeActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	float GetNetPriority(const UE::Math::TVector<double>& ViewPos, const UE::Math::TVector<double>& ViewDir, AActor* Viewer, AActor* ViewTarget, UActorChannel* InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, AActor*, AActor*, UActorChannel*, float, bool>(this, "AMatineeActor.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*,float,bool)", ViewPos, ViewDir, Viewer, ViewTarget, InChannel, Time, bLowBandwidth); }
	UInterpGroupInst* FindGroupInst(const AActor* Actor) { return NativeCall<UInterpGroupInst*, const AActor*>(this, "AMatineeActor.FindGroupInst(AActor*)", Actor); }
	void EnableCinematicMode(bool bEnable) { NativeCall<void, bool>(this, "AMatineeActor.EnableCinematicMode(bool)", bEnable); }
	void InitClientMatinee() { NativeCall<void>(this, "AMatineeActor.InitClientMatinee()"); }
	void CheckPriorityRefresh() { NativeCall<void>(this, "AMatineeActor.CheckPriorityRefresh()"); }
	void PreNetReceive() { NativeCall<void>(this, "AMatineeActor.PreNetReceive()"); }
	void PostNetReceive() { NativeCall<void>(this, "AMatineeActor.PostNetReceive()"); }
	void SetPosition(float NewPosition, bool bJump, bool bForceJumpFromBeginningForEvents, bool bSkipMatineeUpdate) { NativeCall<void, float, bool, bool, bool>(this, "AMatineeActor.SetPosition(float,bool,bool,bool)", NewPosition, bJump, bForceJumpFromBeginningForEvents, bSkipMatineeUpdate); }
};
