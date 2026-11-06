#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMusicPlayerComponent : public UActorComponent
{
public:
	UMusicPlayerComponent() = delete;
	~UMusicPlayerComponent() = delete;
	UMusicPlayerComponent(const UMusicPlayerComponent&) = delete;
	UMusicPlayerComponent& operator=(const UMusicPlayerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMusicPlayerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMusicPlayerComponent"); }

	bool& bAutoPlayOnInitField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bAutoPlayOnInit"); }
	FString& OptionsGroupLabelField() { return *GetNativePointerField<FString*>(this, "UMusicPlayerComponent.OptionsGroupLabel"); }
	float& AttenuationDistanceField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.AttenuationDistance"); }
	int& CurrentEntryIndexField() { return *GetNativePointerField<int*>(this, "UMusicPlayerComponent.CurrentEntryIndex"); }
	bool& bStoppedField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bStopped"); }
	float& PlaybackPercentField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.PlaybackPercent"); }
	double& VolumePercentField() { return *GetNativePointerField<double*>(this, "UMusicPlayerComponent.VolumePercent"); }
	double& AttenuationPercentField() { return *GetNativePointerField<double*>(this, "UMusicPlayerComponent.AttenuationPercent"); }
	bool& bNoAttenuationField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bNoAttenuation"); }
	bool& bLocallyMutedField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bLocallyMuted"); }
	float& ShuffleDelayMinField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.ShuffleDelayMin"); }
	float& ShuffleDelayMaxField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.ShuffleDelayMax"); }
	float& MinDelayBetweenTracksField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.MinDelayBetweenTracks"); }
	float& MaxDelayBetweenTracksField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.MaxDelayBetweenTracks"); }
	FOnMusicTrackChanged& OnTrackChangedField() { return *GetNativePointerField<FOnMusicTrackChanged*>(this, "UMusicPlayerComponent.OnTrackChanged"); }
	FOnMusicPlaybackStoppedChanged& OnPlaybackStoppedChangedField() { return *GetNativePointerField<FOnMusicPlaybackStoppedChanged*>(this, "UMusicPlayerComponent.OnPlaybackStoppedChanged"); }
	FOnMusicVolumeChanged& OnVolumeChangedField() { return *GetNativePointerField<FOnMusicVolumeChanged*>(this, "UMusicPlayerComponent.OnVolumeChanged"); }
	FOnMusicAttenuationChanged& OnAttenuationChangedField() { return *GetNativePointerField<FOnMusicAttenuationChanged*>(this, "UMusicPlayerComponent.OnAttenuationChanged"); }
	FOnOneOffTrackFinished& OnOneOffTrackFinishedField() { return *GetNativePointerField<FOnOneOffTrackFinished*>(this, "UMusicPlayerComponent.OnOneOffTrackFinished"); }
	FTimerHandle& MusicEndTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UMusicPlayerComponent.MusicEndTimerHandle"); }
	bool& bSuppressNextAudioFinishedAdvanceField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bSuppressNextAudioFinishedAdvance"); }
	double& LastFadeInTimeSecondsField() { return *GetNativePointerField<double*>(this, "UMusicPlayerComponent.LastFadeInTimeSeconds"); }
	int& ApplyCurrentTrackCallCountField() { return *GetNativePointerField<int*>(this, "UMusicPlayerComponent.ApplyCurrentTrackCallCount"); }
	double& LastApplyCurrentTrackTimeSecondsField() { return *GetNativePointerField<double*>(this, "UMusicPlayerComponent.LastApplyCurrentTrackTimeSeconds"); }
	float& LastFadeMusicTargetField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.LastFadeMusicTarget"); }
	FMusicTrackEntry& PendingOneOffTrackField() { return *GetNativePointerField<FMusicTrackEntry*>(this, "UMusicPlayerComponent.PendingOneOffTrack"); }
	bool& bHasPendingOneOffField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bHasPendingOneOff"); }
	bool& bLoopOneOffField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bLoopOneOff"); }
	int& EntryIndexBeforeOneOffField() { return *GetNativePointerField<int*>(this, "UMusicPlayerComponent.EntryIndexBeforeOneOff"); }
	bool& bWasStoppedBeforeOneOffField() { return *GetNativePointerField<bool*>(this, "UMusicPlayerComponent.bWasStoppedBeforeOneOff"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MultiUseSelectTrackNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UMusicPlayerComponent.MultiUseSelectTrackNames"); }
	float& ShuffleDelayOverrideMinField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.ShuffleDelayOverrideMin"); }
	float& ShuffleDelayOverrideMaxField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.ShuffleDelayOverrideMax"); }
	int& LastShuffleTrackIndexField() { return *GetNativePointerField<int*>(this, "UMusicPlayerComponent.LastShuffleTrackIndex"); }
	FTimerHandle& ShuffleDelayTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UMusicPlayerComponent.ShuffleDelayTimerHandle"); }
	FTimerHandle& TrackDelayTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UMusicPlayerComponent.TrackDelayTimerHandle"); }
	float& LocalMuteVolumeScalarField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.LocalMuteVolumeScalar"); }
	float& LocalMuteFadeRatePerSecondField() { return *GetNativePointerField<float*>(this, "UMusicPlayerComponent.LocalMuteFadeRatePerSecond"); }
	FTimerHandle& LocalMuteFadeTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UMusicPlayerComponent.LocalMuteFadeTimerHandle"); }
	void MulticastSetVolume_Implementation(double NewVolumePercent) { NativeCall<void, double>(this, "UMusicPlayerComponent.MulticastSetVolume_Implementation(double)", NewVolumePercent); }
	void MulticastSuspendMusic() { NativeCall<void>(this, "UMusicPlayerComponent.MulticastSuspendMusic()"); }
	void ResumeShuffleAfterDelay() { NativeCall<void>(this, "UMusicPlayerComponent.ResumeShuffleAfterDelay()"); }
	void ServerSetAttenuation(double NewAttenuationPercent) { NativeCall<void, double>(this, "UMusicPlayerComponent.ServerSetAttenuation(double)", NewAttenuationPercent); }
	bool IsPlaying() { return NativeCall<bool>(this, "UMusicPlayerComponent.IsPlaying()"); }
	void MulticastFadeMusic(bool bFadeIn, float Duration) { NativeCall<void, bool, float>(this, "UMusicPlayerComponent.MulticastFadeMusic(bool,float)", bFadeIn, Duration); }
	void OnRep_AttenuationPercent() { NativeCall<void>(this, "UMusicPlayerComponent.OnRep_AttenuationPercent()"); }
	void ServerMusicEnd(bool bIsForSwitchButton, bool bNext) { NativeCall<void, bool, bool>(this, "UMusicPlayerComponent.ServerMusicEnd(bool,bool)", bIsForSwitchButton, bNext); }
	void TickLocalMuteFade() { NativeCall<void>(this, "UMusicPlayerComponent.TickLocalMuteFade()"); }
	void MulticastFadeMusic_Implementation(bool bFadeIn, float Duration) { NativeCall<void, bool, float>(this, "UMusicPlayerComponent.MulticastFadeMusic_Implementation(bool,float)", bFadeIn, Duration); }
	void StopOneOffTrack(float FadeSeconds) { NativeCall<void, float>(this, "UMusicPlayerComponent.StopOneOffTrack(float)", FadeSeconds); }
	void ServerSetVolume(double NewVolumePercent) { NativeCall<void, double>(this, "UMusicPlayerComponent.ServerSetVolume(double)", NewVolumePercent); }
	void ResumeAfterTrackDelay() { NativeCall<void>(this, "UMusicPlayerComponent.ResumeAfterTrackDelay()"); }
	int ResolveNextEntryIndex(bool bForceNext) { return NativeCall<int, bool>(this, "UMusicPlayerComponent.ResolveNextEntryIndex(bool)", bForceNext); }
	void SetLocallyMuted(bool bMuted, float FadeSeconds) { NativeCall<void, bool, float>(this, "UMusicPlayerComponent.SetLocallyMuted(bool,float)", bMuted, FadeSeconds); }
	void ApplyCurrentTrack(bool bRestartFromStart, float FadeInSeconds) { NativeCall<void, bool, float>(this, "UMusicPlayerComponent.ApplyCurrentTrack(bool,float)", bRestartFromStart, FadeInSeconds); }
	void SetupStopped() { NativeCall<void>(this, "UMusicPlayerComponent.SetupStopped()"); }
	void MulticastSetVolume(double NewVolumePercent) { NativeCall<void, double>(this, "UMusicPlayerComponent.MulticastSetVolume(double)", NewVolumePercent); }
	void FadeOutAndSuspend(float FadeSeconds) { NativeCall<void, float>(this, "UMusicPlayerComponent.FadeOutAndSuspend(float)", FadeSeconds); }
	void OnRep_VolumePercent() { NativeCall<void>(this, "UMusicPlayerComponent.OnRep_VolumePercent()"); }
	void InitializeComponent() { NativeCall<void>(this, "UMusicPlayerComponent.InitializeComponent()"); }
	void HandleAudioPlayStateChanged(EAudioComponentPlayState NewState) { NativeCall<void, EAudioComponentPlayState>(this, "UMusicPlayerComponent.HandleAudioPlayStateChanged(EAudioComponentPlayState)", NewState); }
	void HandleAudioFinished() { NativeCall<void>(this, "UMusicPlayerComponent.HandleAudioFinished()"); }
	void MulticastStopMusic(bool bSetStopped) { NativeCall<void, bool>(this, "UMusicPlayerComponent.MulticastStopMusic(bool)", bSetStopped); }
	float GetEffectiveVolumeMultiplier() { return NativeCall<float>(this, "UMusicPlayerComponent.GetEffectiveVolumeMultiplier()"); }
	void OnRep_bStopped() { NativeCall<void>(this, "UMusicPlayerComponent.OnRep_bStopped()"); }
	void MulticastSuspendMusic_Implementation() { NativeCall<void>(this, "UMusicPlayerComponent.MulticastSuspendMusic_Implementation()"); }
	void ClientMultiUseWithName(APlayerController* ForPC, FName UseName, int hitBodyInstance, int UseIndex) { NativeCall<void, APlayerController*, FName, int, int>(this, "UMusicPlayerComponent.ClientMultiUseWithName(APlayerController*,FName,int,int)", ForPC, UseName, hitBodyInstance, UseIndex); }
	void MulticastStopMusic_Implementation(bool bSetStopped) { NativeCall<void, bool>(this, "UMusicPlayerComponent.MulticastStopMusic_Implementation(bool)", bSetStopped); }
	void MulticastSetAttenuation_Implementation(double NewAttenuationPercent) { NativeCall<void, double>(this, "UMusicPlayerComponent.MulticastSetAttenuation_Implementation(double)", NewAttenuationPercent); }
	void PlayOneOffTrack(const FMusicTrackEntry& Track, bool bLoop, float CrossfadeSeconds) { NativeCall<void, const FMusicTrackEntry&, bool, float>(this, "UMusicPlayerComponent.PlayOneOffTrack(FMusicTrackEntry&,bool,float)", Track, bLoop, CrossfadeSeconds); }
	void EnsureOwnedSubobjects() { NativeCall<void>(this, "UMusicPlayerComponent.EnsureOwnedSubobjects()"); }
	void UpdateAttenuation() { NativeCall<void>(this, "UMusicPlayerComponent.UpdateAttenuation()"); }
	float GetCurrentTrackTimeRemaining() { return NativeCall<float>(this, "UMusicPlayerComponent.GetCurrentTrackTimeRemaining()"); }
	void SetupMusic(int NewEntryIndex, float FadeInSeconds) { NativeCall<void, int, float>(this, "UMusicPlayerComponent.SetupMusic(int,float)", NewEntryIndex, FadeInSeconds); }
	bool TryMultiUseWithName(APlayerController* ForPC, FName UseName, int hitBodyInstance, int UseIndex) { return NativeCall<bool, APlayerController*, FName, int, int>(this, "UMusicPlayerComponent.TryMultiUseWithName(APlayerController*,FName,int,int)", ForPC, UseName, hitBodyInstance, UseIndex); }
	void TimerMusicEnd() { NativeCall<void>(this, "UMusicPlayerComponent.TimerMusicEnd()"); }
	void MulticastSetAttenuation(double NewAttenuationPercent) { NativeCall<void, double>(this, "UMusicPlayerComponent.MulticastSetAttenuation(double)", NewAttenuationPercent); }
	bool GetMultiUseCenterTextWithName(APlayerController* ForPC, FName UseName, FString& OutCenterText, FLinearColor& OutCenterTextColor) { return NativeCall<bool, APlayerController*, FName, FString&, FLinearColor&>(this, "UMusicPlayerComponent.GetMultiUseCenterTextWithName(APlayerController*,FName,FString&,FLinearColor&)", ForPC, UseName, OutCenterText, OutCenterTextColor); }
	void OnRep_CurrentEntryIndex() { NativeCall<void>(this, "UMusicPlayerComponent.OnRep_CurrentEntryIndex()"); }
	void BeginPlay() { NativeCall<void>(this, "UMusicPlayerComponent.BeginPlay()"); }
	void ServerStopMusic(bool bSetStopped) { NativeCall<void, bool>(this, "UMusicPlayerComponent.ServerStopMusic(bool)", bSetStopped); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UMusicPlayerComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void FadeMusic(bool bFadeIn, float Duration) { NativeCall<void, bool, float>(this, "UMusicPlayerComponent.FadeMusic(bool,float)", bFadeIn, Duration); }
};
