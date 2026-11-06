#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UVOIPTalker : public UActorComponent
{
public:
	UVOIPTalker() = delete;
	~UVOIPTalker() = delete;
	UVOIPTalker(const UVOIPTalker&) = delete;
	UVOIPTalker& operator=(const UVOIPTalker&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVOIPTalker"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVOIPTalker"); }

	FVoiceSettings& SettingsField() { return *GetNativePointerField<FVoiceSettings*>(this, "UVOIPTalker.Settings"); }
	FUniqueNetIdWrapper& PlayerIdField() { return *GetNativePointerField<FUniqueNetIdWrapper*>(this, "UVOIPTalker.PlayerId"); }
	float& CachedVolumeLevelField() { return *GetNativePointerField<float*>(this, "UVOIPTalker.CachedVolumeLevel"); }
	BitFieldValue<bool, unsigned char> bIsRegistered() { return { this, "UVOIPTalker.bIsRegistered"}; }
	void BPOnTalkingEnd_Implementation() { NativeCall<void>(this, "UVOIPTalker.BPOnTalkingEnd_Implementation()"); }
	void OnAudioComponentEnvelopeValue(const UAudioComponent* InAudioComponent, float EnvelopeValue) { NativeCall<void, const UAudioComponent*, float>(this, "UVOIPTalker.OnAudioComponentEnvelopeValue(UAudioComponent*,float)", InAudioComponent, EnvelopeValue); }
	void RegisterWithPlayerState(APlayerState* OwningState) { NativeCall<void, APlayerState*>(this, "UVOIPTalker.RegisterWithPlayerState(APlayerState*)", OwningState); }
	void BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent) { NativeCall<void, UAudioComponent*>(this, "UVOIPTalker.BPOnTalkingBegin_Implementation(UAudioComponent*)", AudioComponent); }
	void OnTalkingEnd() { NativeCall<void>(this, "UVOIPTalker.OnTalkingEnd()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UVOIPTalker.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void OnTalkingBegin(UAudioComponent* AudioComponent) { NativeCall<void, UAudioComponent*>(this, "UVOIPTalker.OnTalkingBegin(UAudioComponent*)", AudioComponent); }
};
