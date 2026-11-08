#pragma once
#include "BulkForward.h"


struct APrimalWeaponElectronicBinoculars : AShooterWeapon_Melee
{
	// Fields

	float& YPosDistanceField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.YPosDistance"); }
	float& XPosDistanceField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.XPosDistance"); }
	float& CompSizeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompSize"); }
	float& DistanceXField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceX"); }
	float& DistanceYField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceY"); }
	float& DistanceSizeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceSize"); }
	TSubclassOf<APrimalBuff>& NightVisionBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalWeaponElectronicBinoculars.NightVisionBuff"); }
	USceneComponent*& AudioListenerField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalWeaponElectronicBinoculars.AudioListener"); }
	UMaterialInterface*& ScopeCompassMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponElectronicBinoculars.ScopeCompassMI"); }
	UMaterialInstanceDynamic*& ScopeCompassMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponElectronicBinoculars.ScopeCompassMID"); }
	UMaterialInterface*& LatitudeMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponElectronicBinoculars.LatitudeMI"); }
	UMaterialInstanceDynamic*& LatitudeMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponElectronicBinoculars.LatitudeMID"); }
	UMaterialInterface*& LongitudeMIField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponElectronicBinoculars.LongitudeMI"); }
	UMaterialInstanceDynamic*& LongitudeMIDField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponElectronicBinoculars.LongitudeMID"); }
	float& LatLongInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatLongInterpSpeed"); }
	float& CurrentLatField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CurrentLat"); }
	float& CurrentLongField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CurrentLong"); }
	UE::Math::TRotator<double>& CurrentCompassAngleField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalWeaponElectronicBinoculars.CurrentCompassAngle"); }
	float& CompassNorthAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompassNorthAngle"); }
	float& CompassInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompassInterpSpeed"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeOrigin"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeOrigin"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeScale"); }
	float& SoundFadeInSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.SoundFadeInSpeed"); }
	float& MinTargetingFOVField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.MinTargetingFOV"); }
	float& MaxTargetingFOVField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.MaxTargetingFOV"); }
	AShooterPlayerController*& PCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "APrimalWeaponElectronicBinoculars.PC"); }
	float& LatitudeNumberField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeNumber"); }
	float& LongitudeNumberField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeNumber"); }
	bool& bFromGamepadLeftField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bFromGamepadLeft"); }
	bool& bZoomOutField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bZoomOut"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWeaponElectronicBinoculars"); }
	void ClientSetActivateNightVision(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ClientSetActivateNightVision(signedchar)", bActive); }
	void ServerSetActivateNightVision(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ServerSetActivateNightVision(signedchar)", bActive); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWeaponElectronicBinoculars();
	AShooterPlayerController* GetPC() { return NativeCall<AShooterPlayerController*>(this, "APrimalWeaponElectronicBinoculars.GetPC()"); }
	void SetOwningPawn(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalWeaponElectronicBinoculars.SetOwningPawn(AShooterCharacter*)", ShooterCharacter); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.BeginPlay()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.PostInitializeComponents()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.Destroyed()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponElectronicBinoculars.Tick(float)", DeltaSeconds); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalWeaponElectronicBinoculars.DrawHUD(AShooterHUD*)", HUD); }
	void StartAltFire() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StartAltFire()"); }
	void ZoomIn() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ZoomIn()"); }
	void ZoomOut() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ZoomOut()"); }
	void OnStartTargeting(bool bInFromGamepadLeft) { NativeCall<void, bool>(this, "APrimalWeaponElectronicBinoculars.OnStartTargeting(bool)", bInFromGamepadLeft); }
	void OnStopTargeting(bool bInFromGamepadLeft) { NativeCall<void, bool>(this, "APrimalWeaponElectronicBinoculars.OnStopTargeting(bool)", bInFromGamepadLeft); }
	void StartSecondaryAction() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StartSecondaryAction()"); }
	void StopSecondaryAction() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StopSecondaryAction()"); }
	void ServerSetActivateNightVision_Implementation(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ServerSetActivateNightVision_Implementation(signedchar)", bActive); }
	void ClientSetActivateNightVision_Implementation(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ClientSetActivateNightVision_Implementation(signedchar)", bActive); }

	bool& bHasApplyedNightVisionBuffField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bHasApplyedNightVisionBuff"); }
	bool& bZoomInField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bZoomIn"); }
	bool& bIsNightVisionOnField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bIsNightVisionOn"); }

	float GetZoomFloat() { return NativeCall<float>(this, "APrimalWeaponElectronicBinoculars.GetZoomFloat()"); }
	void SetBinocularsTargeting(bool SetTargeting) { NativeCall<void, bool>(this, "APrimalWeaponElectronicBinoculars.SetBinocularsTargeting(bool)", SetTargeting); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWeaponElectronicBinoculars"); }
};