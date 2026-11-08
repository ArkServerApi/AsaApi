#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UAudioComponent : public USceneComponent
{
public:
	UAudioComponent() = delete;
	~UAudioComponent() = delete;
	UAudioComponent(const UAudioComponent&) = delete;
	UAudioComponent& operator=(const UAudioComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAudioComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAudioComponent"); }

	unsigned int& AudioDeviceIDField() { return *GetNativePointerField<unsigned int*>(this, "UAudioComponent.AudioDeviceID"); }
	FName& AudioComponentUserIDField() { return *GetNativePointerField<FName*>(this, "UAudioComponent.AudioComponentUserID"); }
	float& PitchModulationMinField() { return *GetNativePointerField<float*>(this, "UAudioComponent.PitchModulationMin"); }
	float& PitchModulationMaxField() { return *GetNativePointerField<float*>(this, "UAudioComponent.PitchModulationMax"); }
	float& VolumeModulationMinField() { return *GetNativePointerField<float*>(this, "UAudioComponent.VolumeModulationMin"); }
	float& VolumeModulationMaxField() { return *GetNativePointerField<float*>(this, "UAudioComponent.VolumeModulationMax"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "UAudioComponent.VolumeMultiplier"); }
	int& EnvelopeFollowerAttackTimeField() { return *GetNativePointerField<int*>(this, "UAudioComponent.EnvelopeFollowerAttackTime"); }
	int& EnvelopeFollowerReleaseTimeField() { return *GetNativePointerField<int*>(this, "UAudioComponent.EnvelopeFollowerReleaseTime"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "UAudioComponent.Priority"); }
	float& SubtitlePriorityField() { return *GetNativePointerField<float*>(this, "UAudioComponent.SubtitlePriority"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "UAudioComponent.PitchMultiplier"); }
	float& LowPassFilterFrequencyField() { return *GetNativePointerField<float*>(this, "UAudioComponent.LowPassFilterFrequency"); }
	float& HighPassFilterFrequencyField() { return *GetNativePointerField<float*>(this, "UAudioComponent.HighPassFilterFrequency"); }
	int& ActiveCountField() { return *GetNativePointerField<int*>(this, "UAudioComponent.ActiveCount"); }
	FSoundAttenuationSettings& AttenuationOverridesField() { return *GetNativePointerField<FSoundAttenuationSettings*>(this, "UAudioComponent.AttenuationOverrides"); }
	float& OcclusionCheckIntervalField() { return *GetNativePointerField<float*>(this, "UAudioComponent.OcclusionCheckInterval"); }
	float& TimeAudioComponentPlayedField() { return *GetNativePointerField<float*>(this, "UAudioComponent.TimeAudioComponentPlayed"); }
	float& FadeInTimeDurationField() { return *GetNativePointerField<float*>(this, "UAudioComponent.FadeInTimeDuration"); }
	EAttachmentRule& AutoAttachLocationRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UAudioComponent.AutoAttachLocationRule"); }
	EAttachmentRule& AutoAttachRotationRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UAudioComponent.AutoAttachRotationRule"); }
	EAttachmentRule& AutoAttachScaleRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UAudioComponent.AutoAttachScaleRule"); }
	FSoundModulationDefaultRoutingSettings& ModulationRoutingField() { return *GetNativePointerField<FSoundModulationDefaultRoutingSettings*>(this, "UAudioComponent.ModulationRouting"); }
	FOnAudioPlayStateChanged& OnAudioPlayStateChangedField() { return *GetNativePointerField<FOnAudioPlayStateChanged*>(this, "UAudioComponent.OnAudioPlayStateChanged"); }
	FOnAudioVirtualizationChanged& OnAudioVirtualizationChangedField() { return *GetNativePointerField<FOnAudioVirtualizationChanged*>(this, "UAudioComponent.OnAudioVirtualizationChanged"); }
	FOnAudioFinished& OnAudioFinishedField() { return *GetNativePointerField<FOnAudioFinished*>(this, "UAudioComponent.OnAudioFinished"); }
	FOnAudioPlaybackPercent& OnAudioPlaybackPercentField() { return *GetNativePointerField<FOnAudioPlaybackPercent*>(this, "UAudioComponent.OnAudioPlaybackPercent"); }
	FOnAudioSingleEnvelopeValue& OnAudioSingleEnvelopeValueField() { return *GetNativePointerField<FOnAudioSingleEnvelopeValue*>(this, "UAudioComponent.OnAudioSingleEnvelopeValue"); }
	FOnAudioMultiEnvelopeValue& OnAudioMultiEnvelopeValueField() { return *GetNativePointerField<FOnAudioMultiEnvelopeValue*>(this, "UAudioComponent.OnAudioMultiEnvelopeValue"); }
	FOnQueueSubtitles& OnQueueSubtitlesField() { return *GetNativePointerField<FOnQueueSubtitles*>(this, "UAudioComponent.OnQueueSubtitles"); }
	TWeakObjectPtr<USceneComponent, FWeakObjectPtr>& AutoAttachParentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent, FWeakObjectPtr>*>(this, "UAudioComponent.AutoAttachParent"); }
	FName& AutoAttachSocketNameField() { return *GetNativePointerField<FName*>(this, "UAudioComponent.AutoAttachSocketName"); }
	unsigned __int64& AudioComponentIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UAudioComponent.AudioComponentID"); }
	unsigned int& LastSoundPlayOrderField() { return *GetNativePointerField<unsigned int*>(this, "UAudioComponent.LastSoundPlayOrder"); }
	float& RetriggerTimeSinceLastUpdateField() { return *GetNativePointerField<float*>(this, "UAudioComponent.RetriggerTimeSinceLastUpdate"); }
	float& RetriggerUpdateIntervalField() { return *GetNativePointerField<float*>(this, "UAudioComponent.RetriggerUpdateInterval"); }
	UE::Math::TVector<double>& SavedAutoAttachRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UAudioComponent.SavedAutoAttachRelativeLocation"); }
	UE::Math::TRotator<double>& SavedAutoAttachRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UAudioComponent.SavedAutoAttachRelativeRotation"); }
	UE::Math::TVector<double>& SavedAutoAttachRelativeScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UAudioComponent.SavedAutoAttachRelativeScale3D"); }
	bool& bShouldSourceBufferListenerZeroBufferField() { return *GetNativePointerField<bool*>(this, "UAudioComponent.bShouldSourceBufferListenerZeroBuffer"); }
	FRandomStream& RandomStreamField() { return *GetNativePointerField<FRandomStream*>(this, "UAudioComponent.RandomStream"); }
	BitFieldValue<bool, unsigned char> bAutoDestroy() { return { this, "UAudioComponent.bAutoDestroy"}; }
	BitFieldValue<bool, unsigned char> bStopWhenOwnerDestroyed() { return { this, "UAudioComponent.bStopWhenOwnerDestroyed"}; }
	BitFieldValue<bool, unsigned char> bShouldRemainActiveIfDropped() { return { this, "UAudioComponent.bShouldRemainActiveIfDropped"}; }
	BitFieldValue<bool, unsigned char> bAllowSpatialization() { return { this, "UAudioComponent.bAllowSpatialization"}; }
	BitFieldValue<bool, unsigned char> bOverrideAttenuation() { return { this, "UAudioComponent.bOverrideAttenuation"}; }
	BitFieldValue<bool, unsigned char> bOverrideSubtitlePriority() { return { this, "UAudioComponent.bOverrideSubtitlePriority"}; }
	BitFieldValue<bool, unsigned char> bIsUISound() { return { this, "UAudioComponent.bIsUISound"}; }
	BitFieldValue<bool, unsigned char> bEnableLowPassFilter() { return { this, "UAudioComponent.bEnableLowPassFilter"}; }
	BitFieldValue<bool, unsigned char> bEnableHighPassFilter() { return { this, "UAudioComponent.bEnableHighPassFilter"}; }
	BitFieldValue<bool, unsigned char> bOverridePriority() { return { this, "UAudioComponent.bOverridePriority"}; }
	BitFieldValue<bool, unsigned char> bSuppressSubtitles() { return { this, "UAudioComponent.bSuppressSubtitles"}; }
	BitFieldValue<bool, unsigned char> bCanPlayMultipleInstances() { return { this, "UAudioComponent.bCanPlayMultipleInstances"}; }
	BitFieldValue<bool, unsigned char> bDisableParameterUpdatesWhilePlaying() { return { this, "UAudioComponent.bDisableParameterUpdatesWhilePlaying"}; }
	BitFieldValue<bool, unsigned char> bPreviewComponent() { return { this, "UAudioComponent.bPreviewComponent"}; }
	BitFieldValue<bool, unsigned char> bIgnoreForFlushing() { return { this, "UAudioComponent.bIgnoreForFlushing"}; }
	BitFieldValue<bool, unsigned char> bAlwaysPlay() { return { this, "UAudioComponent.bAlwaysPlay"}; }
	BitFieldValue<bool, unsigned char> bIsMusic() { return { this, "UAudioComponent.bIsMusic"}; }
	BitFieldValue<bool, unsigned char> bReverb() { return { this, "UAudioComponent.bReverb"}; }
	BitFieldValue<bool, unsigned char> bCenterChannelOnly() { return { this, "UAudioComponent.bCenterChannelOnly"}; }
	BitFieldValue<bool, unsigned char> bIsPreviewSound() { return { this, "UAudioComponent.bIsPreviewSound"}; }
	BitFieldValue<bool, unsigned char> bIsPaused() { return { this, "UAudioComponent.bIsPaused"}; }
	BitFieldValue<bool, unsigned char> bIsVirtualized() { return { this, "UAudioComponent.bIsVirtualized"}; }
	BitFieldValue<bool, unsigned char> bIsFadingOut() { return { this, "UAudioComponent.bIsFadingOut"}; }
	BitFieldValue<bool, unsigned char> bSuppressSubmix() { return { this, "UAudioComponent.bSuppressSubmix"}; }
	BitFieldValue<bool, unsigned char> bAutoManageAttachment() { return { this, "UAudioComponent.bAutoManageAttachment"}; }
	BitFieldValue<bool, unsigned char> bDidAutoAttach() { return { this, "UAudioComponent.bDidAutoAttach"}; }
	BitFieldValue<bool, unsigned char> bCreatedForALocalController() { return { this, "UAudioComponent.bCreatedForALocalController"}; }
	bool GetCookedEnvelopeData(float& OutEnvelopeData) { return NativeCall<bool, float&>(this, "UAudioComponent.GetCookedEnvelopeData(float&)", OutEnvelopeData); }
	void OnUnregister() { NativeCall<void>(this, "UAudioComponent.OnUnregister()"); }
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency) { NativeCall<void, float>(this, "UAudioComponent.SetLowPassFilterFrequency(float)", InLowPassFilterFrequency); }
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve) { NativeCall<void, float, float, EAudioFaderCurve>(this, "UAudioComponent.FadeOut(float,float,EAudioFaderCurve)", FadeOutDuration, FadeVolumeLevel, FadeCurve); }
	USoundBase* GetSound() { return NativeCall<USoundBase*>(this, "UAudioComponent.GetSound()"); }
	unsigned __int64 GetInstanceOwnerID() { return NativeCall<unsigned __int64>(this, "UAudioComponent.GetInstanceOwnerID()"); }
	void SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel) { NativeCall<void, UAudioBus*, float>(this, "UAudioComponent.SetAudioBusSendPreEffect(UAudioBus*,float)", AudioBus, AudioBusSendLevel); }
	void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel) { NativeCall<void, USoundSubmixBase*, float>(this, "UAudioComponent.SetSubmixSend(USoundSubmixBase*,float)", Submix, SendLevel); }
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled) { NativeCall<void, bool>(this, "UAudioComponent.SetLowPassFilterEnabled(bool)", InLowPassFilterEnabled); }
	void PlayQuantized(const UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle, FQuartzQuantizationBoundary& InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, EAudioFaderCurve InFadeCurve) { NativeCall<void, const UObject*, UQuartzClockHandle*&, FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, float, float, float, EAudioFaderCurve>(this, "UAudioComponent.PlayQuantized(UObject*,UQuartzClockHandle*&,FQuartzQuantizationBoundary&,FOnQuartzCommandEventBP&,float,float,float,EAudioFaderCurve)", WorldContextObject, InClockHandle, InQuantizationBoundary, InDelegate, InStartTime, InFadeInDuration, InFadeVolumeLevel, InFadeCurve); }
	void SetIntParameter(FName InName, int InInt) { NativeCall<void, FName, int>(this, "UAudioComponent.SetIntParameter(FName,int)", InName, InInt); }
	void BroadcastPlayState() { NativeCall<void>(this, "UAudioComponent.BroadcastPlayState()"); }
	void SetVolumeMultiplier(float NewVolumeMultiplier) { NativeCall<void, float>(this, "UAudioComponent.SetVolumeMultiplier(float)", NewVolumeMultiplier); }
	void Play(float StartTime) { NativeCall<void, float>(this, "UAudioComponent.Play(float)", StartTime); }
	float GetAudioTimeSeconds() { return NativeCall<float>(this, "UAudioComponent.GetAudioTimeSeconds()"); }
	void AdjustVolumeInternal(float AdjustVolumeDuration, float AdjustVolumeLevel, bool bInIsFadeOut, EAudioFaderCurve FadeCurve) { NativeCall<void, float, float, bool, EAudioFaderCurve>(this, "UAudioComponent.AdjustVolumeInternal(float,float,bool,EAudioFaderCurve)", AdjustVolumeDuration, AdjustVolumeLevel, bInIsFadeOut, FadeCurve); }
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve) { NativeCall<void, float, float, float, EAudioFaderCurve>(this, "UAudioComponent.FadeIn(float,float,float,EAudioFaderCurve)", FadeInDuration, FadeVolumeLevel, StartTime, FadeCurve); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "UAudioComponent.GetDetailedInfoInternal()", result); }
	EAudioComponentPlayState GetPlayState() { return NativeCall<EAudioComponentPlayState>(this, "UAudioComponent.GetPlayState()"); }
	void CancelAutoAttachment(bool bDetachFromParent, const UWorld* MyWorld) { NativeCall<void, bool, const UWorld*>(this, "UAudioComponent.CancelAutoAttachment(bool,UWorld*)", bDetachFromParent, MyWorld); }
	bool IsReadyForOwnerToAutoDestroy() { return NativeCall<bool>(this, "UAudioComponent.IsReadyForOwnerToAutoDestroy()"); }
	static UAudioComponent* GetAudioComponentFromID(unsigned __int64 AudioComponentID) { return NativeCall<UAudioComponent*, unsigned __int64>(nullptr, "UAudioComponent.GetAudioComponentFromID(unsigned__int64)", AudioComponentID); }
	void SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) { NativeCall<void, USoundSourceBus*, float>(this, "UAudioComponent.SetSourceBusSendPostEffect(USoundSourceBus*,float)", SoundSourceBus, SourceBusSendLevel); }
	void SetPitchMultiplier(float NewPitchMultiplier) { NativeCall<void, float>(this, "UAudioComponent.SetPitchMultiplier(float)", NewPitchMultiplier); }
	void PostLoad() { NativeCall<void>(this, "UAudioComponent.PostLoad()"); }
	void BeginDestroy() { NativeCall<void>(this, "UAudioComponent.BeginDestroy()"); }
	void OnRegister() { NativeCall<void>(this, "UAudioComponent.OnRegister()"); }
	bool IsVirtualized() { return NativeCall<bool>(this, "UAudioComponent.IsVirtualized()"); }
	bool IsPlaying() { return NativeCall<bool>(this, "UAudioComponent.IsPlaying()"); }
	void Stop() { NativeCall<void>(this, "UAudioComponent.Stop()"); }
	void SetIsVirtualized(bool bInIsVirtualized) { NativeCall<void, bool>(this, "UAudioComponent.SetIsVirtualized(bool)", bInIsVirtualized); }
	void SetOutputToBusOnly(bool bInOutputToBusOnly) { NativeCall<void, bool>(this, "UAudioComponent.SetOutputToBusOnly(bool)", bInOutputToBusOnly); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAudioComponent.Serialize(FArchive&)", Ar); }
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve) { NativeCall<void, float, float, EAudioFaderCurve>(this, "UAudioComponent.AdjustVolume(float,float,EAudioFaderCurve)", AdjustVolumeDuration, AdjustVolumeLevel, FadeCurve); }
	void PlaybackCompleted(bool bFailedToStart) { NativeCall<void, bool>(this, "UAudioComponent.PlaybackCompleted(bool)", bFailedToStart); }
	static void PlaybackCompleted(unsigned __int64 AudioComponentID, bool bFailedToStart) { NativeCall<void, unsigned __int64, bool>(nullptr, "UAudioComponent.PlaybackCompleted(unsigned__int64,bool)", AudioComponentID, bFailedToStart); }
	void Deactivate() { NativeCall<void>(this, "UAudioComponent.Deactivate()"); }
	void SetFloatParameter(FName InName, float InFloat) { NativeCall<void, FName, float>(this, "UAudioComponent.SetFloatParameter(FName,float)", InName, InFloat); }
	void ResetParameters() { NativeCall<void>(this, "UAudioComponent.ResetParameters()"); }
	void SetBusSendEffectInternal(USoundSourceBus* InSourceBus, UAudioBus* InAudioBus, float SendLevel, EBusSendType InBusSendType) { NativeCall<void, USoundSourceBus*, UAudioBus*, float, EBusSendType>(this, "UAudioComponent.SetBusSendEffectInternal(USoundSourceBus*,UAudioBus*,float,EBusSendType)", InSourceBus, InAudioBus, SendLevel, InBusSendType); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UAudioComponent.Activate(bool)", bReset); }
	void StopDelayed(float DelayTime) { NativeCall<void, float>(this, "UAudioComponent.StopDelayed(float)", DelayTime); }
	bool GetDisableParameterUpdatesWhilePlaying() { return NativeCall<bool>(this, "UAudioComponent.GetDisableParameterUpdatesWhilePlaying()"); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UAudioComponent.AdditionalStatObject()"); }
	void SetFadeInComplete() { NativeCall<void>(this, "UAudioComponent.SetFadeInComplete()"); }
	void SetPaused(bool bPause) { NativeCall<void, bool>(this, "UAudioComponent.SetPaused(bool)", bPause); }
	const FSoundAttenuationSettings* GetAttenuationSettingsToApply() { return NativeCall<const FSoundAttenuationSettings*>(this, "UAudioComponent.GetAttenuationSettingsToApply()"); }
	FName GetFNameForStatID() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UAudioComponent.GetFNameForStatID()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel) { NativeCall<void, UAudioBus*, float>(this, "UAudioComponent.SetAudioBusSendPostEffect(UAudioBus*,float)", AudioBus, AudioBusSendLevel); }
	FAudioDevice* GetAudioDevice() { return NativeCall<FAudioDevice*>(this, "UAudioComponent.GetAudioDevice()"); }
	void SetSound(USoundBase* NewSound) { NativeCall<void, USoundBase*>(this, "UAudioComponent.SetSound(USoundBase*)", NewSound); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UAudioComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void SetBoolParameter(FName InName, bool InBool) { NativeCall<void, FName, bool>(this, "UAudioComponent.SetBoolParameter(FName,bool)", InName, InBool); }
	void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings) { NativeCall<void, const FSoundAttenuationSettings&>(this, "UAudioComponent.AdjustAttenuation(FSoundAttenuationSettings&)", InAttenuationSettings); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UAudioComponent._getUObject()"); }
	void SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) { NativeCall<void, USoundSourceBus*, float>(this, "UAudioComponent.SetSourceBusSendPreEffect(USoundSourceBus*,float)", SoundSourceBus, SourceBusSendLevel); }
};
