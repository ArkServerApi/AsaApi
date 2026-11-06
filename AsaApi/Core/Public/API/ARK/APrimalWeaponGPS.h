#pragma once
#include "BulkForward.h"


struct APrimalWeaponGPS : AShooterWeapon_Melee
{
	// Fields

	USkeletalMeshComponent*& CompassMesh1PField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponGPS.CompassMesh1P"); }
	USkeletalMeshComponent*& CompassMesh3PField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponGPS.CompassMesh3P"); }
	USkeletalMeshComponent*& MapMesh3PField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponGPS.MapMesh3P"); }
	UStaticMesh*& AssetSM_MarkerMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalWeaponGPS.AssetSM_MarkerMesh"); }
	UStaticMesh*& AssetSM_PlayerMarkerMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalWeaponGPS.AssetSM_PlayerMarkerMesh"); }
	UStaticMesh*& AssetSM_BalloonMarkerMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "APrimalWeaponGPS.AssetSM_BalloonMarkerMesh"); }
	float& MarkerMapScaleXField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerMapScaleX"); }
	float& MarkerMapScaleYField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerMapScaleY"); }
	float& MarkerOffsetZField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerOffsetZ"); }
	UE::Math::TRotator<double>& MarkerRotationMinField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalWeaponGPS.MarkerRotationMin"); }
	UE::Math::TRotator<double>& MarkerRotationMaxField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalWeaponGPS.MarkerRotationMax"); }
	int& MaxMapMarkersField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.MaxMapMarkers"); }
	FColor& MarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "APrimalWeaponGPS.MarkerTextColor"); }
	FColor& PlayerMarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "APrimalWeaponGPS.PlayerMarkerTextColor"); }
	TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >& MarkerComponentsField() { return *GetNativePointerField<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalWeaponGPS.MarkerComponents"); }
	TArray<FPrimalMapMarkerEntryData, TSizedDefaultAllocator<32> >& MapMarkersField() { return *GetNativePointerField<TArray<FPrimalMapMarkerEntryData, TSizedDefaultAllocator<32> >*>(this, "APrimalWeaponGPS.MapMarkers"); }
	UStaticMeshComponent*& PlayerLocationMArkerComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponGPS.PlayerLocationMArkerComponent"); }
	UE::Math::TVector2<double>& LastPlayerMarkerLocationField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalWeaponGPS.LastPlayerMarkerLocation"); }
	UStaticMeshComponent*& ItemBalloonMarkerComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponGPS.ItemBalloonMarkerComponent"); }
	FName& MapAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.MapAttachPoint3P"); }
	FName& CompassAttachPoint1PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.CompassAttachPoint1P"); }
	FName& GPSBoneName1PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.GPSBoneName1P"); }
	//FWeaponAnim& ZoomInMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInMapAnim"); }
	//FWeaponAnim& ZoomInGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInGPSAnim"); }
	//FWeaponAnim& ZoomInCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInCompassAnim"); }
	//FWeaponAnim& ZoomOutMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutMapAnim"); }
	//FWeaponAnim& ZoomOutGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutGPSAnim"); }
	//FWeaponAnim& ZoomOutCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutCompassAnim"); }
	//FWeaponAnim& DisplayMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayMapAnim"); }
	//FWeaponAnim& DisplayGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayGPSAnim"); }
	//FWeaponAnim& DisplayCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayCompassAnim"); }
	//FWeaponAnim& UnequipMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipMapAnim"); }
	//FWeaponAnim& UnequipGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipGPSAnim"); }
	//FWeaponAnim& UnequipCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipCompassAnim"); }
	//FWeaponAnim& UnequipCompassAndMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipCompassAndMapAnim"); }
	//FWeaponAnim& MeleeMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeMapAnim"); }
	//FWeaponAnim& MeleeGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeGPSAnim"); }
	//FWeaponAnim& MeleeCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeCompassAnim"); }
	//FWeaponAnim& MeleeCompassMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeCompassMapAnim"); }
	UAnimMontage*& TPV_MapOnlyIdleField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWeaponGPS.TPV_MapOnlyIdle"); }
	UAnimMontage*& TPV_GPSOnlyIdleField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWeaponGPS.TPV_GPSOnlyIdle"); }
	UAnimMontage*& TPV_MapAndGPSIdleField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWeaponGPS.TPV_MapAndGPSIdle"); }
	FName& DigitParameterNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.DigitParameterName"); }
	int& LatitudeMaterialIndex1Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex1"); }
	int& LatitudeMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex2"); }
	int& LatitudeMaterialIndex3Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex3"); }
	int& LongitudeMaterialIndex1Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex1"); }
	int& LongitudeMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex2"); }
	int& LongitudeMaterialIndex3Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex3"); }
	int& MapMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.MapMaterialIndex"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LatitudeOrigin"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LongitudeOrigin"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LongitudeScale"); }
	int& GPSCompassMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.GPSCompassMaterialIndex"); }
	FName& CompassCenterParameterNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.CompassCenterParameterName"); }
	FName& FogOfWarTextureParameterNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.FogOfWarTextureParameterName"); }
	float& CompassNorthAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CompassNorthAngle"); }
	float& CompassInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CompassInterpSpeed"); }
	float& SwingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.SwingSpeed"); }
	float& MaxSwingAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MaxSwingAngle"); }
	UE::Math::TVector<double>& ItemBalloonLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalWeaponGPS.ItemBalloonLocation"); }
	UE::Math::TRotator<double>& CurrentCompassAngleField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalWeaponGPS.CurrentCompassAngle"); }
	float& CurrentSwingAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingAngle"); }
	float& CurrentSwingFactorField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingFactor"); }
	float& CurrentSwingTimeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingTime"); }
	float& PreviousPawnYawField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.PreviousPawnYaw"); }
	UMaterialInstanceDynamic*& GPSCompassMaterialInstanceField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.GPSCompassMaterialInstance"); }
	int& PreviousLatitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousLatitudeNumber"); }
	int& PreviousLongitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousLongitudeNumber"); }
	int& PreviousBalloonLatitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousBalloonLatitudeNumber"); }
	int& PreviousBalloonLongitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousBalloonLongitudeNumber"); }
	UMaterialInstanceDynamic*& LatitudeDigit1_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LatitudeDigit1_MI"); }
	UMaterialInstanceDynamic*& LatitudeDigit2_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LatitudeDigit2_MI"); }
	UMaterialInstanceDynamic*& LatitudeDigit3_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LatitudeDigit3_MI"); }
	UMaterialInstanceDynamic*& LongitudeDigit1_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LongitudeDigit1_MI"); }
	UMaterialInstanceDynamic*& LongitudeDigit2_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LongitudeDigit2_MI"); }
	UMaterialInstanceDynamic*& LongitudeDigit3_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LongitudeDigit3_MI"); }
	UMaterialInstanceDynamic*& Map_MIField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.Map_MI"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bShowMap() { return { this, "APrimalWeaponGPS.bShowMap" }; }
	BitFieldValue<bool, unsigned __int32> bShowGPS() { return { this, "APrimalWeaponGPS.bShowGPS" }; }
	BitFieldValue<bool, unsigned __int32> bUseCompassInsteadOfGPS() { return { this, "APrimalWeaponGPS.bUseCompassInsteadOfGPS" }; }
	BitFieldValue<bool, unsigned __int32> bZoomInMap() { return { this, "APrimalWeaponGPS.bZoomInMap" }; }
	BitFieldValue<bool, unsigned __int32> bZoomInGPS() { return { this, "APrimalWeaponGPS.bZoomInGPS" }; }
	BitFieldValue<bool, unsigned __int32> bWasFirstPerson() { return { this, "APrimalWeaponGPS.bWasFirstPerson" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWeaponGPS"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWeaponGPS();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponGPS.BeginPlay()"); }
	void UpdateCurrentMarker() { NativeCall<void>(this, "APrimalWeaponGPS.UpdateCurrentMarker()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalWeaponGPS.DrawHUD(AShooterHUD*)", HUD); }
	void UpdateMapTextureParameters() { NativeCall<void>(this, "APrimalWeaponGPS.UpdateMapTextureParameters()"); }
	void UpdateDinoMapMarkers() { NativeCall<void>(this, "APrimalWeaponGPS.UpdateDinoMapMarkers()"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponGPS.OnEquip()"); }
	void RefreshMapMarkers() { NativeCall<void>(this, "APrimalWeaponGPS.RefreshMapMarkers()"); }
	void RemoveMarkersFromView() { NativeCall<void>(this, "APrimalWeaponGPS.RemoveMarkersFromView()"); }
	void OnEquipFinished() { NativeCall<void>(this, "APrimalWeaponGPS.OnEquipFinished()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponGPS.Tick(float)", DeltaSeconds); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponGPS.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponGPS.StopFire()"); }
	void StartSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGPS.StartSecondaryAction()"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "APrimalWeaponGPS.StartReload(bool)", bFromReplication); }
	void StopSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGPS.StopSecondaryAction()"); }
	void PlayUnequipAnimation() { NativeCall<void>(this, "APrimalWeaponGPS.PlayUnequipAnimation()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalWeaponGPS.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void ServerSetUseCompassInsteadOfGPS_Implementation(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS_Implementation(bool)", bUseCompass); }
	void SetUseCompass(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.SetUseCompass(bool)", bUseCompass); }
	void SetAndShowCompass() { NativeCall<void>(this, "APrimalWeaponGPS.SetAndShowCompass()"); }
	void SetAndShowGPS() { NativeCall<void>(this, "APrimalWeaponGPS.SetAndShowGPS()"); }
	void SwitchBetweenCompassAndGPS(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.SwitchBetweenCompassAndGPS(bool)", bUseCompass); }
	void ShowMapOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ShowMapOnly()"); }
	void ShowGPSOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ShowGPSOnly()"); }
	void ShowBoth() { NativeCall<void>(this, "APrimalWeaponGPS.ShowBoth()"); }
	void ShowNone() { NativeCall<void>(this, "APrimalWeaponGPS.ShowNone()"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "APrimalWeaponGPS.UpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	void HideGPS1P() { NativeCall<void>(this, "APrimalWeaponGPS.HideGPS1P()"); }
	void AttachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponGPS.AttachOtherMeshes()"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponGPS.DetachOtherMeshes()"); }
	void SetGPSMeshHidden() { NativeCall<void>(this, "APrimalWeaponGPS.SetGPSMeshHidden()"); }
	void SetMapMeshHidden() { NativeCall<void>(this, "APrimalWeaponGPS.SetMapMeshHidden()"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalWeaponGPS.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	//FWeaponAnim* SelectMeleeAttackAnim(FWeaponAnim* result, int ForceSelectedAnim) { return NativeCall<FWeaponAnim*, FWeaponAnim*, int>(this, "APrimalWeaponGPS.SelectMeleeAttackAnim(int)", result, ForceSelectedAnim); }
	void ServerShowMapOnly_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowMapOnly_Implementation()"); }
	void ServerShowGPSOnly_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowGPSOnly_Implementation()"); }
	void ServerShowBoth_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowBoth_Implementation()"); }
	void ServerShowNone_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowNone_Implementation()"); }

	FWeaponAnim& ZoomInMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInMapAnim"); }
	FWeaponAnim& ZoomInGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInGPSAnim"); }
	FWeaponAnim& ZoomInCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInCompassAnim"); }
	FWeaponAnim& ZoomOutMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutMapAnim"); }
	FWeaponAnim& ZoomOutGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutGPSAnim"); }
	FWeaponAnim& ZoomOutCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutCompassAnim"); }
	FWeaponAnim& DisplayMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayMapAnim"); }
	FWeaponAnim& DisplayGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayGPSAnim"); }
	FWeaponAnim& DisplayCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayCompassAnim"); }
	FWeaponAnim& UnequipMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipMapAnim"); }
	FWeaponAnim& UnequipGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipGPSAnim"); }
	FWeaponAnim& UnequipCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipCompassAnim"); }
	FWeaponAnim& UnequipCompassAndMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipCompassAndMapAnim"); }
	FWeaponAnim& MeleeMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeMapAnim"); }
	FWeaponAnim& MeleeGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeGPSAnim"); }
	FWeaponAnim& MeleeCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeCompassAnim"); }
	FWeaponAnim& MeleeCompassMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeCompassMapAnim"); }
	void ServerShowBoth() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowBoth()"); }
	static void GetItemBalloonLocation_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalWeaponGPS.GetItemBalloonLocation_WrapperImpl(void*,void*)", Object, OutValue); }
	void RefreshUseCompass() { NativeCall<void>(this, "APrimalWeaponGPS.RefreshUseCompass()"); }
	void ServerShowNone() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowNone()"); }
	static void GetbUseCompassInsteadOfGPS_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalWeaponGPS.GetbUseCompassInsteadOfGPS_WrapperImpl(void*,void*)", Object, OutValue); }
	void ServerShowGPSOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowGPSOnly()"); }
	bool IsShowingGPS() { return NativeCall<bool>(this, "APrimalWeaponGPS.IsShowingGPS()"); }
	static void SetbUseCompassInsteadOfGPS_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalWeaponGPS.SetbUseCompassInsteadOfGPS_WrapperImpl(void*,void*)", Object, InValue); }
	void ServerShowMapOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowMapOnly()"); }
	bool ForceFirstPerson() { return NativeCall<bool>(this, "APrimalWeaponGPS.ForceFirstPerson()"); }
	static void SetItemBalloonLocation_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalWeaponGPS.SetItemBalloonLocation_WrapperImpl(void*,void*)", Object, InValue); }
	void ServerSetUseCompassInsteadOfGPS(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS(bool)", bUseCompass); }
	bool IsShowingMap() { return NativeCall<bool>(this, "APrimalWeaponGPS.IsShowingMap()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWeaponGPS"); }
};