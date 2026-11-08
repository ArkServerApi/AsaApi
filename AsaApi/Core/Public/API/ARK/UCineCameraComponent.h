#pragma once
#include "BulkForward.h"
#include "UCameraComponent.h"

struct UCineCameraComponent : public UCameraComponent
{
public:
	UCineCameraComponent() = delete;
	~UCineCameraComponent() = delete;
	UCineCameraComponent(const UCineCameraComponent&) = delete;
	UCineCameraComponent& operator=(const UCineCameraComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCineCameraComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCineCameraComponent"); }

	FCameraFilmbackSettings& FilmbackSettings_DEPRECATEDField() { return *GetNativePointerField<FCameraFilmbackSettings*>(this, "UCineCameraComponent.FilmbackSettings_DEPRECATED"); }
	FCameraFilmbackSettings& FilmbackField() { return *GetNativePointerField<FCameraFilmbackSettings*>(this, "UCineCameraComponent.Filmback"); }
	FCameraLensSettings& LensSettingsField() { return *GetNativePointerField<FCameraLensSettings*>(this, "UCineCameraComponent.LensSettings"); }
	FCameraFocusSettings& FocusSettingsField() { return *GetNativePointerField<FCameraFocusSettings*>(this, "UCineCameraComponent.FocusSettings"); }
	FPlateCropSettings& CropSettingsField() { return *GetNativePointerField<FPlateCropSettings*>(this, "UCineCameraComponent.CropSettings"); }
	float& CurrentFocalLengthField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.CurrentFocalLength"); }
	float& CurrentApertureField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.CurrentAperture"); }
	float& CurrentFocusDistanceField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.CurrentFocusDistance"); }
	float& CustomNearClippingPlaneField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.CustomNearClippingPlane"); }
	float& LastFocusDistanceField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.LastFocusDistance"); }
	FString& DefaultFilmbackPresetName_DEPRECATEDField() { return *GetNativePointerField<FString*>(this, "UCineCameraComponent.DefaultFilmbackPresetName_DEPRECATED"); }
	FString& DefaultFilmbackPresetField() { return *GetNativePointerField<FString*>(this, "UCineCameraComponent.DefaultFilmbackPreset"); }
	FString& DefaultLensPresetNameField() { return *GetNativePointerField<FString*>(this, "UCineCameraComponent.DefaultLensPresetName"); }
	float& DefaultLensFocalLengthField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.DefaultLensFocalLength"); }
	float& DefaultLensFStopField() { return *GetNativePointerField<float*>(this, "UCineCameraComponent.DefaultLensFStop"); }
	BitFieldValue<bool, unsigned __int32> bOverride_CustomNearClippingPlane() { return { this, "UCineCameraComponent.bOverride_CustomNearClippingPlane"}; }
	BitFieldValue<bool, unsigned char> bResetInterpolation() { return { this, "UCineCameraComponent.bResetInterpolation"}; }
	void SetFilmbackPresetByNameInternal(const FString& InPresetName, FCameraFilmbackSettings& InOutFilmbackSettings) { NativeCall<void, const FString&, FCameraFilmbackSettings&>(this, "UCineCameraComponent.SetFilmbackPresetByNameInternal(FString&,FCameraFilmbackSettings&)", InPresetName, InOutFilmbackSettings); }
	void UpdateCameraLens(float DeltaTime, FMinimalViewInfo& DesiredView) { NativeCall<void, float, FMinimalViewInfo&>(this, "UCineCameraComponent.UpdateCameraLens(float,FMinimalViewInfo&)", DeltaTime, DesiredView); }
	void SetCurrentFocalLength(float InFocalLength) { NativeCall<void, float>(this, "UCineCameraComponent.SetCurrentFocalLength(float)", InFocalLength); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UCineCameraComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	float GetVerticalProjectionOffset() { return NativeCall<float>(this, "UCineCameraComponent.GetVerticalProjectionOffset()"); }
	void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) { NativeCall<void, float, FMinimalViewInfo&>(this, "UCineCameraComponent.GetCameraView(float,FMinimalViewInfo&)", DeltaTime, DesiredView); }
	void PostLoad() { NativeCall<void>(this, "UCineCameraComponent.PostLoad()"); }
	void PostInitProperties() { NativeCall<void>(this, "UCineCameraComponent.PostInitProperties()"); }
	void SetLensPresetByNameInternal(const FString& InPresetName) { NativeCall<void, const FString&>(this, "UCineCameraComponent.SetLensPresetByNameInternal(FString&)", InPresetName); }
	void OnRegister() { NativeCall<void>(this, "UCineCameraComponent.OnRegister()"); }
	void SetCurrentAperture(float NewCurrentAperture) { NativeCall<void, float>(this, "UCineCameraComponent.SetCurrentAperture(float)", NewCurrentAperture); }
	float GetHorizontalFieldOfViewInternal(bool bIncludeOverscan) { return NativeCall<float, bool>(this, "UCineCameraComponent.GetHorizontalFieldOfViewInternal(bool)", bIncludeOverscan); }
	void NotifyCameraCut() { NativeCall<void>(this, "UCineCameraComponent.NotifyCameraCut()"); }
	void RecalcDerivedData() { NativeCall<void>(this, "UCineCameraComponent.RecalcDerivedData()"); }
	void SetCropPresetByNameInternal(const FString& InPresetName) { NativeCall<void, const FString&>(this, "UCineCameraComponent.SetCropPresetByNameInternal(FString&)", InPresetName); }
	float GetHorizontalProjectionOffset() { return NativeCall<float>(this, "UCineCameraComponent.GetHorizontalProjectionOffset()"); }
	void SetFieldOfView(float InFieldOfView) { NativeCall<void, float>(this, "UCineCameraComponent.SetFieldOfView(float)", InFieldOfView); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UCineCameraComponent.Serialize(FArchive&)", Ar); }
	float GetDesiredFocusDistance(const UE::Math::TVector<double>& InLocation) { return NativeCall<float, const UE::Math::TVector<double>&>(this, "UCineCameraComponent.GetDesiredFocusDistance(UE::Math::TVector<double>&)", InLocation); }
};
