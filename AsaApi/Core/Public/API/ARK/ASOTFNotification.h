#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASOTFNotification : public AActor
{
public:
	ASOTFNotification() = delete;
	~ASOTFNotification() = delete;
	ASOTFNotification(const ASOTFNotification&) = delete;
	ASOTFNotification& operator=(const ASOTFNotification&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASOTFNotification"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASOTFNotification"); }

	float& NightBloomMultiplierField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.NightBloomMultiplier"); }
	float& EffectScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.EffectScale"); }
	UE::Math::TVector<double>& BackgroundOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ASOTFNotification.BackgroundOffset"); }
	UStaticMesh*& BackgroundMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "ASOTFNotification.BackgroundMesh"); }
	UE::Math::TRotator<double>& BackgroundRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ASOTFNotification.BackgroundRotation"); }
	float& BackgroundMeshScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BackgroundMeshScale"); }
	float& BackgroundMeshDoubleScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BackgroundMeshDoubleScale"); }
	float& PreviewImageBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PreviewImageBloom"); }
	float& FadeOutIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.FadeOutInterval"); }
	float& FadeInIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.FadeInInterval"); }
	float& LightBrightnessField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.LightBrightness"); }
	UE::Math::TRotator<double>& LightRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ASOTFNotification.LightRotation"); }
	float& GapBetweenPlayerImagesField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.GapBetweenPlayerImages"); }
	FColor& BannerEliminationTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.BannerEliminationTextColor"); }
	FColor& BannerVictoryTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.BannerVictoryTextColor"); }
	float& BannerTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BannerTextBloom"); }
	float& BannerTextFontScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BannerTextFontScale"); }
	float& MinSizePerPlayerField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.MinSizePerPlayer"); }
	UE::Math::TVector<double>& BannerTextOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ASOTFNotification.BannerTextOffset"); }
	FString& EliminationTextField() { return *GetNativePointerField<FString*>(this, "ASOTFNotification.EliminationText"); }
	FString& VictoryTextField() { return *GetNativePointerField<FString*>(this, "ASOTFNotification.VictoryText"); }
	float& ScrollingTextFadePowerField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextFadePower"); }
	float& ScrollingTextSpeedField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextSpeed"); }
	float& ScrollingTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextBloom"); }
	float& ScrollingTextIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextInterval"); }
	UE::Math::TVector<double>& ScrollingTextOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ASOTFNotification.ScrollingTextOffset"); }
	float& ScrollingTextLifeTimeField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextLifeTime"); }
	float& ScrollingTextDoubleMultiplierField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextDoubleMultiplier"); }
	float& ScrollingTextScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextScale"); }
	int& ScrollingTextCountField() { return *GetNativePointerField<int*>(this, "ASOTFNotification.ScrollingTextCount"); }
	FColor& ScrollingTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.ScrollingTextColor"); }
	UE::Math::TVector<double>& PreviewCameraLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ASOTFNotification.PreviewCameraLocation"); }
	UE::Math::TRotator<double>& PreviewCameraRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ASOTFNotification.PreviewCameraRotation"); }
	float& PreviewCameraFOVField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PreviewCameraFOV"); }
	UE::Math::TRotator<double>& PreviewMeshRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ASOTFNotification.PreviewMeshRotation"); }
	UTextureCube*& AmbientCubemapField() { return *GetNativePointerField<UTextureCube**>(this, "ASOTFNotification.AmbientCubemap"); }
	FColor& AmbientLightColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.AmbientLightColor"); }
	float& AmbientBrightnessField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.AmbientBrightness"); }
	UFont*& TextFontField() { return *GetNativePointerField<UFont**>(this, "ASOTFNotification.TextFont"); }
	UMaterial*& TextMaterialField() { return *GetNativePointerField<UMaterial**>(this, "ASOTFNotification.TextMaterial"); }
	UE::Math::TRotator<double>& TextRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ASOTFNotification.TextRotation"); }
	float& PlayerNameFontSizeField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PlayerNameFontSize"); }
	UE::Math::TVector<double>& PlayerNameOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ASOTFNotification.PlayerNameOffset"); }
	float& PlayerNameTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PlayerNameTextBloom"); }
	UE::Math::TVector<double>& DeathReasonOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ASOTFNotification.DeathReasonOffset"); }
	float& DeathReasonFontSizeField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.DeathReasonFontSize"); }
	FColor& DeathReasonTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.DeathReasonTextColor"); }
	float& DeathReasonTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.DeathReasonTextBloom"); }
	FColor& PlayerNameTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.PlayerNameTextColor"); }
	UStaticMesh*& PlayerImageMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "ASOTFNotification.PlayerImageMesh"); }
	USoundCue*& DeathSoundField() { return *GetNativePointerField<USoundCue**>(this, "ASOTFNotification.DeathSound"); }
	USoundCue*& TribeEliminatedSoundField() { return *GetNativePointerField<USoundCue**>(this, "ASOTFNotification.TribeEliminatedSound"); }
	USoundBase*& PlayerDeathMusic1Field() { return *GetNativePointerField<USoundBase**>(this, "ASOTFNotification.PlayerDeathMusic1"); }
	USoundBase*& PlayerDeathMusic2Field() { return *GetNativePointerField<USoundBase**>(this, "ASOTFNotification.PlayerDeathMusic2"); }
	USoundBase*& TribeEliminationMusicField() { return *GetNativePointerField<USoundBase**>(this, "ASOTFNotification.TribeEliminationMusic"); }
	USoundBase*& VictoryMusicField() { return *GetNativePointerField<USoundBase**>(this, "ASOTFNotification.VictoryMusic"); }
	float& DefaultNotificationIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.DefaultNotificationInterval"); }
	FSOTFNotificationInfo& CurrentNotificationField() { return *GetNativePointerField<FSOTFNotificationInfo*>(this, "ASOTFNotification.CurrentNotification"); }
	TArray<AShooterCharacter*, TSizedDefaultAllocator<32> >& PreviewCharacterField() { return *GetNativePointerField<TArray<AShooterCharacter*, TSizedDefaultAllocator<32> >*>(this, "ASOTFNotification.PreviewCharacter"); }
	TArray<UPreviewImage*, TSizedDefaultAllocator<32> >& PreviewImagesField() { return *GetNativePointerField<TArray<UPreviewImage*, TSizedDefaultAllocator<32> >*>(this, "ASOTFNotification.PreviewImages"); }
	BitFieldValue<bool, unsigned __int32> bAnimateScaling() { return { this, "ASOTFNotification.bAnimateScaling"}; }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ASOTFNotification.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void StopCurrentNotification() { NativeCall<void>(this, "ASOTFNotification.StopCurrentNotification()"); }
	void UpdateImages() { NativeCall<void>(this, "ASOTFNotification.UpdateImages()"); }
	float ComputeFacialHairMorphTargetValue(bool bFemale, unsigned char HairIndex, float PercentOfGrowth) { return NativeCall<float, bool, unsigned char, float>(this, "ASOTFNotification.ComputeFacialHairMorphTargetValue(bool,unsignedchar,float)", bFemale, HairIndex, PercentOfGrowth); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ASOTFNotification.Tick(float)", DeltaSeconds); }
	void StartNextNotification() { NativeCall<void>(this, "ASOTFNotification.StartNextNotification()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ASOTFNotification.PostInitializeComponents()"); }
	float ComputeHeadHairMorphTargetValue(bool bFemale, unsigned char HairIndex, float PercentOfGrowth) { return NativeCall<float, bool, unsigned char, float>(this, "ASOTFNotification.ComputeHeadHairMorphTargetValue(bool,unsignedchar,float)", bFemale, HairIndex, PercentOfGrowth); }
	void PlayCurrentNotification() { NativeCall<void>(this, "ASOTFNotification.PlayCurrentNotification()"); }
	void CleanUp() { NativeCall<void>(this, "ASOTFNotification.CleanUp()"); }
};
