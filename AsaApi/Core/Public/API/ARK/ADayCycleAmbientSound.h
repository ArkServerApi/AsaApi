#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADayCycleAmbientSound : public AActor
{
public:
	ADayCycleAmbientSound() = delete;
	~ADayCycleAmbientSound() = delete;
	ADayCycleAmbientSound(const ADayCycleAmbientSound&) = delete;
	ADayCycleAmbientSound& operator=(const ADayCycleAmbientSound&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADayCycleAmbientSound"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADayCycleAmbientSound"); }

	UAudioComponent*& AudioComponentDayField() { return *GetNativePointerField<UAudioComponent**>(this, "ADayCycleAmbientSound.AudioComponentDay"); }
	UAudioComponent*& AudioComponentNightField() { return *GetNativePointerField<UAudioComponent**>(this, "ADayCycleAmbientSound.AudioComponentNight"); }
	float& DayTimeSoundMorningFadeInStartField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundMorningFadeInStart"); }
	float& DayTimeSoundMorningFadeInEndField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundMorningFadeInEnd"); }
	float& DayTimeSoundEveningFadeOutStartField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundEveningFadeOutStart"); }
	float& DayTimeSoundEveningFadeOutEndField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundEveningFadeOutEnd"); }
	float& DayLengthMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayLengthMultiplier"); }
	float& CurrentPostprocessAmbienceLerpField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.CurrentPostprocessAmbienceLerp"); }
	float& CurrentExtraVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.CurrentExtraVolumeMultiplier"); }
	float& AmbientWinnerFadeAlphaField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.AmbientWinnerFadeAlpha"); }
	BitFieldValue<bool, unsigned char> bIsAlwaysAudible() { return { this, "ADayCycleAmbientSound.bIsAlwaysAudible"}; }
	BitFieldValue<bool, unsigned char> bAllowConcurrentWithPostProcessSound() { return { this, "ADayCycleAmbientSound.bAllowConcurrentWithPostProcessSound"}; }
	BitFieldValue<bool, unsigned char> bOnlyAudibleWhenRaining() { return { this, "ADayCycleAmbientSound.bOnlyAudibleWhenRaining"}; }
	BitFieldValue<bool, unsigned char> bBlueprintAudibleWhenRainingEnabled() { return { this, "ADayCycleAmbientSound.bBlueprintAudibleWhenRainingEnabled"}; }
	BitFieldValue<bool, unsigned char> bUpdated() { return { this, "ADayCycleAmbientSound.bUpdated"}; }
	BitFieldValue<bool, unsigned char> bAddedToArray() { return { this, "ADayCycleAmbientSound.bAddedToArray"}; }
	BitFieldValue<bool, unsigned char> bIsCurrentAmbientWinner() { return { this, "ADayCycleAmbientSound.bIsCurrentAmbientWinner"}; }
	void TickAmbientWinnerFade(float DayTime, bool bShouldPlay, float DeltaSeconds, float FadeDuration) { NativeCall<void, float, bool, float, float>(this, "ADayCycleAmbientSound.TickAmbientWinnerFade(float,bool,float,float)", DayTime, bShouldPlay, DeltaSeconds, FadeDuration); }
	void UpdateDayCycleSounds(float DayTime) { NativeCall<void, float>(this, "ADayCycleAmbientSound.UpdateDayCycleSounds(float)", DayTime); }
	void PostLoad() { NativeCall<void>(this, "ADayCycleAmbientSound.PostLoad()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ADayCycleAmbientSound.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "ADayCycleAmbientSound.BeginPlay()"); }
	float GetAmbientSpatialVolume(const UE::Math::TVector<double>& ListenerLoc) { return NativeCall<float, const UE::Math::TVector<double>&>(this, "ADayCycleAmbientSound.GetAmbientSpatialVolume(UE::Math::TVector<double>&)", ListenerLoc); }
	void Destroyed() { NativeCall<void>(this, "ADayCycleAmbientSound.Destroyed()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ADayCycleAmbientSound.IsLevelBoundsRelevant()"); }
};
