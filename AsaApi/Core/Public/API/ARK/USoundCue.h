#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "USoundBase.h"

struct USoundCue : public USoundBase
{
public:
	USoundCue() = delete;
	~USoundCue() = delete;
	USoundCue(const USoundCue&) = delete;
	USoundCue& operator=(const USoundCue&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundCue"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundCue"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "USoundCue.VolumeMultiplier"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "USoundCue.PitchMultiplier"); }
	FSoundAttenuationSettings& AttenuationOverridesField() { return *GetNativePointerField<FSoundAttenuationSettings*>(this, "USoundCue.AttenuationOverrides"); }
	unsigned char& SubtitleColorIndexField() { return *GetNativePointerField<unsigned char*>(this, "USoundCue.SubtitleColorIndex"); }
	FSoftObjectPath& AnimTextureField() { return *GetNativePointerField<FSoftObjectPath*>(this, "USoundCue.AnimTexture"); }
	float& SubtitlePriorityField() { return *GetNativePointerField<float*>(this, "USoundCue.SubtitlePriority"); }
	float& MaxAudibleDistanceField() { return *GetNativePointerField<float*>(this, "USoundCue.MaxAudibleDistance"); }
	int& CookedQualityIndexField() { return *GetNativePointerField<int*>(this, "USoundCue.CookedQualityIndex"); }
	FDelegateHandle& OnPostEngineInitHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "USoundCue.OnPostEngineInitHandle"); }
	BitFieldValue<bool, unsigned char> bPrimeOnLoad() { return { this, "USoundCue.bPrimeOnLoad"}; }
	BitFieldValue<bool, unsigned char> bOverrideAttenuation() { return { this, "USoundCue.bOverrideAttenuation"}; }
	BitFieldValue<bool, unsigned char> bExcludeFromRandomNodeBranchCulling() { return { this, "USoundCue.bExcludeFromRandomNodeBranchCulling"}; }
	BitFieldValue<bool, unsigned char> bHasPlayWhenSilent() { return { this, "USoundCue.bHasPlayWhenSilent"}; }
	BitFieldValue<bool, unsigned char> bHasAttenuationNode() { return { this, "USoundCue.bHasAttenuationNode"}; }
	BitFieldValue<bool, unsigned char> bHasAttenuationNodeInitialized() { return { this, "USoundCue.bHasAttenuationNodeInitialized"}; }
	BitFieldValue<bool, unsigned char> bShouldApplyInteriorVolumes() { return { this, "USoundCue.bShouldApplyInteriorVolumes"}; }
	BitFieldValue<bool, unsigned char> bShouldApplyInteriorVolumesCached() { return { this, "USoundCue.bShouldApplyInteriorVolumesCached"}; }
	BitFieldValue<bool, unsigned char> bIsRetainingAudio() { return { this, "USoundCue.bIsRetainingAudio"}; }
	float GetVolumeMultiplier() { return NativeCall<float>(this, "USoundCue.GetVolumeMultiplier()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundCue.Serialize(FArchive&)", Ar); }
	void PrimeSoundCue() { NativeCall<void>(this, "USoundCue.PrimeSoundCue()"); }
	static void StaticAudioQualityChanged(int NewQualityLevel) { NativeCall<void, int>(nullptr, "USoundCue.StaticAudioQualityChanged(int)", NewQualityLevel); }
	void OnPostEngineInit() { NativeCall<void>(this, "USoundCue.OnPostEngineInit()"); }
	bool IsAttenuationSettingsEditable() { return NativeCall<bool>(this, "USoundCue.IsAttenuationSettingsEditable()"); }
	float ComputeMaxDistance() { return NativeCall<float>(this, "USoundCue.ComputeMaxDistance()"); }
	float GetMaxDistance() { return NativeCall<float>(this, "USoundCue.GetMaxDistance()"); }
	float GetPitchMultiplier() { return NativeCall<float>(this, "USoundCue.GetPitchMultiplier()"); }
	bool IsPlayWhenSilent() { return NativeCall<bool>(this, "USoundCue.IsPlayWhenSilent()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "USoundCue.GetDesc()", result); }
	void CacheAggregateValues() { NativeCall<void>(this, "USoundCue.CacheAggregateValues()"); }
	bool HasCookedAmplitudeEnvelopeData() { return NativeCall<bool>(this, "USoundCue.HasCookedAmplitudeEnvelopeData()"); }
	float GetSubtitlePriority() { return NativeCall<float>(this, "USoundCue.GetSubtitlePriority()"); }
	int GetResourceSizeForFormat(FName Format) { return NativeCall<int, FName>(this, "USoundCue.GetResourceSizeForFormat(FName)", Format); }
	float GetDuration() { return NativeCall<float>(this, "USoundCue.GetDuration()"); }
	const FSoundAttenuationSettings* GetAttenuationSettingsToApply() { return NativeCall<const FSoundAttenuationSettings*>(this, "USoundCue.GetAttenuationSettingsToApply()"); }
	bool CanBeClusterRoot() { return NativeCall<bool>(this, "USoundCue.CanBeClusterRoot()"); }
	bool ShouldApplyInteriorVolumes() { return NativeCall<bool>(this, "USoundCue.ShouldApplyInteriorVolumes()"); }
	bool HasCookedFFTData() { return NativeCall<bool>(this, "USoundCue.HasCookedFFTData()"); }
	bool IsPlayable() { return NativeCall<bool>(this, "USoundCue.IsPlayable()"); }
	bool CanBeInCluster() { return NativeCall<bool>(this, "USoundCue.CanBeInCluster()"); }
	void BeginDestroy() { NativeCall<void>(this, "USoundCue.BeginDestroy()"); }
	void EvaluateNodes(bool bAddToRoot) { NativeCall<void, bool>(this, "USoundCue.EvaluateNodes(bool)", bAddToRoot); }
	void PostLoad() { NativeCall<void>(this, "USoundCue.PostLoad()"); }
};
