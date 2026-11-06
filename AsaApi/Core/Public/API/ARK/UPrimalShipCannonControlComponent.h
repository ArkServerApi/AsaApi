#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalShipCannonControlComponent : UActorComponent
{
public:
	UPrimalShipCannonControlComponent() = delete;
	~UPrimalShipCannonControlComponent() = delete;
	UPrimalShipCannonControlComponent(const UPrimalShipCannonControlComponent&) = delete;
	UPrimalShipCannonControlComponent& operator=(const UPrimalShipCannonControlComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalShipCannonControlComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalShipCannonControlComponent"); }

	float& MaxFireDelayField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.MaxFireDelay"); }
	int& CaptainAmmoIndexField() { return *GetNativePointerField<int*>(this, "UPrimalShipCannonControlComponent.CaptainAmmoIndex"); }
	float& MinBandRangeField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.MinBandRange"); }
	float& MaxBandRangeField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.MaxBandRange"); }
	float& BandHalfDepthField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.BandHalfDepth"); }
	float& AimIndicatorMaxSimTimeField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.AimIndicatorMaxSimTime"); }
	float& AimIndicatorSimFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.AimIndicatorSimFrequency"); }
	bool& bGunportsOpenField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonControlComponent.bGunportsOpen"); }
	float& GunportInterpSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GunportInterpSpeed"); }
	float& GunportOpenRatioField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GunportOpenRatio"); }
	float& CannonRangeSensitivityField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.CannonRangeSensitivity"); }
	float& CannonYawSensitivityField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.CannonYawSensitivity"); }
	float& GamepadCannonPitchRateField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GamepadCannonPitchRate"); }
	float& GamepadCannonYawRateField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GamepadCannonYawRate"); }
	float& AimYawHalfWedgeField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.AimYawHalfWedge"); }
	float& LocalGamepadPitchAccumField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.LocalGamepadPitchAccum"); }
	float& LocalGamepadYawAccumField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.LocalGamepadYawAccum"); }
	float& SavedViewPitchMinField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.SavedViewPitchMin"); }
	float& SavedViewPitchMaxField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.SavedViewPitchMax"); }
	bool& bAimPitchLockActiveField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonControlComponent.bAimPitchLockActive"); }
	bool& bAimActiveLocalField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonControlComponent.bAimActiveLocal"); }
	float& PendingYawDeltaForRPCField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.PendingYawDeltaForRPC"); }
	float& PendingRangeDeltaForRPCField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.PendingRangeDeltaForRPC"); }
	float& LocalAimYawOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.LocalAimYawOffset"); }
	bool& bCannonClaimLockedField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonControlComponent.bCannonClaimLocked"); }
	bool& bCannonFiringHeldField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonControlComponent.bCannonFiringHeld"); }
	double& CannonCyclePressTimeField() { return *GetNativePointerField<double*>(this, "UPrimalShipCannonControlComponent.CannonCyclePressTime"); }
	double& CannonCycleTapTimeThresholdField() { return *GetNativePointerField<double*>(this, "UPrimalShipCannonControlComponent.CannonCycleTapTimeThreshold"); }
	float& CurrentZoomField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.CurrentZoom"); }

	void Cannon_FirePressed() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_FirePressed()"); }
	void FireCannonDeferred(int CannonIndex, int AmmoIdx) { NativeCall<void, int, int>(this, "UPrimalShipCannonControlComponent.FireCannonDeferred(int,int)", CannonIndex, AmmoIdx); }
	float GetActiveAimYaw() { return NativeCall<float>(this, "UPrimalShipCannonControlComponent.GetActiveAimYaw()"); }
	void ReleaseAllSidesForCharacter(APrimalCharacter* Char) { NativeCall<void, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.ReleaseAllSidesForCharacter(APrimalCharacter*)", Char); }
	bool IsGunportMoving() { return NativeCall<bool>(this, "UPrimalShipCannonControlComponent.IsGunportMoving()"); }
	static UPrimalShipCannonControlComponent* ResolveFor(AShooterPlayerController* PC) { return NativeCall<UPrimalShipCannonControlComponent*, AShooterPlayerController*>(nullptr, "UPrimalShipCannonControlComponent.ResolveFor(AShooterPlayerController*)", PC); }
	void OnRep_SideAmmoIndex() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.OnRep_SideAmmoIndex()"); }
	void OnRep_CaptainAmmoIndex() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.OnRep_CaptainAmmoIndex()"); }
	void EnableCannonInputForPC(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalShipCannonControlComponent.EnableCannonInputForPC(AShooterPlayerController*)", PC); }
	bool TryReleaseCannonSide(APrimalCharacter* Char) { return NativeCall<bool, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.TryReleaseCannonSide(APrimalCharacter*)", Char); }
	void Cannon_AimPressed() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_AimPressed()"); }
	bool TryUnloadCharacterFromCannon(APrimalCharacter* Char) { return NativeCall<bool, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.TryUnloadCharacterFromCannon(APrimalCharacter*)", Char); }
	void MulticastPlayGunportSound_Implementation(bool bOpen) { NativeCall<void, bool>(this, "UPrimalShipCannonControlComponent.MulticastPlayGunportSound_Implementation(bool)", bOpen); }
	void OnPlayerPawnBecomesInValid(APawn* OldPawn, APawn* NewPawn) { NativeCall<void, APawn*, APawn*>(this, "UPrimalShipCannonControlComponent.OnPlayerPawnBecomesInValid(APawn*,APawn*)", OldPawn, NewPawn); }
	void Cannon_OnGamepadPitchInput(float Val) { NativeCall<void, float>(this, "UPrimalShipCannonControlComponent.Cannon_OnGamepadPitchInput(float)", Val); }
	void DebugDrawBandAim() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.DebugDrawBandAim()"); }
	void Cannon_CycleReleased() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_CycleReleased()"); }
	bool TryEndCannonAim(APrimalCharacter* Char) { return NativeCall<bool, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.TryEndCannonAim(APrimalCharacter*)", Char); }
	void Cannon_PumpAimDeltas() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_PumpAimDeltas()"); }
	void MulticastLoadCharacterIntoCannon_Implementation(int CannonIndex, AShooterCharacter* Character) { NativeCall<void, int, AShooterCharacter*>(this, "UPrimalShipCannonControlComponent.MulticastLoadCharacterIntoCannon_Implementation(int,AShooterCharacter*)", CannonIndex, Character); }
	bool TryToggleGunports(APrimalCharacter* Char) { return NativeCall<bool, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.TryToggleGunports(APrimalCharacter*)", Char); }
	void ResolveCannonAmmoBox() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.ResolveCannonAmmoBox()"); }
	float GetProjectileSpeedForAmmo(int AmmoIndex) { return NativeCall<float, int>(this, "UPrimalShipCannonControlComponent.GetProjectileSpeedForAmmo(int)", AmmoIndex); }
	void Cannon_FireReleased() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_FireReleased()"); }
	void MulticastUnloadCharacterFromCannon_Implementation(int CannonIndex, AShooterCharacter* Character) { NativeCall<void, int, AShooterCharacter*>(this, "UPrimalShipCannonControlComponent.MulticastUnloadCharacterFromCannon_Implementation(int,AShooterCharacter*)", CannonIndex, Character); }
	bool TryApplyCannonAimDeltas(APrimalCharacter* Char, float YawDeltaDeg, float RangeDelta) { return NativeCall<bool, APrimalCharacter*, float, float>(this, "UPrimalShipCannonControlComponent.TryApplyCannonAimDeltas(APrimalCharacter*,float,float)", Char, YawDeltaDeg, RangeDelta); }
	void Cannon_CyclePressed() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_CyclePressed()"); }
	void BPOnCannonFired(int CannonIndex) { NativeCall<void, int>(this, "UPrimalShipCannonControlComponent.BPOnCannonFired(int)", CannonIndex); }
	void RemoveAmmoBox(APrimalStructureItemContainer* Container) { NativeCall<void, APrimalStructureItemContainer*>(this, "UPrimalShipCannonControlComponent.RemoveAmmoBox(APrimalStructureItemContainer*)", Container); }
	void Cannon_PumpFire() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_PumpFire()"); }
	bool TryCycleCannonAmmo(APrimalCharacter* Char) { return NativeCall<bool, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.TryCycleCannonAmmo(APrimalCharacter*)", Char); }
	void OnRep_GunportsOpen() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.OnRep_GunportsOpen()"); }
	void DisableCannonInputForPC(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalShipCannonControlComponent.DisableCannonInputForPC(AShooterPlayerController*)", PC); }
	void AddAmmoBox(APrimalStructureItemContainer* Container) { NativeCall<void, APrimalStructureItemContainer*>(this, "UPrimalShipCannonControlComponent.AddAmmoBox(APrimalStructureItemContainer*)", Container); }
	void Cannon_UseReleaseClaim() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_UseReleaseClaim()"); }
	bool TryFireCannons(APrimalCharacter* Char) { return NativeCall<bool, APrimalCharacter*>(this, "UPrimalShipCannonControlComponent.TryFireCannons(APrimalCharacter*)", Char); }
	void TryUnloadAllLoadedCharactersFromCannons() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.TryUnloadAllLoadedCharactersFromCannons()"); }
	void EndAimLocal(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalShipCannonControlComponent.EndAimLocal(AShooterPlayerController*)", PC); }
	void Cannon_AimReleased() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_AimReleased()"); }
	void Cannon_OnGamepadYawInput(float Val) { NativeCall<void, float>(this, "UPrimalShipCannonControlComponent.Cannon_OnGamepadYawInput(float)", Val); }
	void SetCannonClaimLock(AShooterPlayerController* PC, bool bLocked) { NativeCall<void, AShooterPlayerController*, bool>(this, "UPrimalShipCannonControlComponent.SetCannonClaimLock(AShooterPlayerController*,bool)", PC, bLocked); }
	void SetInputEnabledForPC(AShooterPlayerController* PC, bool bEnabled) { NativeCall<void, AShooterPlayerController*, bool>(this, "UPrimalShipCannonControlComponent.SetInputEnabledForPC(AShooterPlayerController*,bool)", PC, bEnabled); }
	void MulticastUnloadCharacterFromCannon(int CannonIndex, AShooterCharacter* Character) { NativeCall<void, int, AShooterCharacter*>(this, "UPrimalShipCannonControlComponent.MulticastUnloadCharacterFromCannon(int,AShooterCharacter*)", CannonIndex, Character); }
	bool CanEnterCannons() { return NativeCall<bool>(this, "UPrimalShipCannonControlComponent.CanEnterCannons()"); }
	void SetCannonLoadedCharacter(int CannonIndex, AShooterCharacter* Character) { NativeCall<void, int, AShooterCharacter*>(this, "UPrimalShipCannonControlComponent.SetCannonLoadedCharacter(int,AShooterCharacter*)", CannonIndex, Character); }
	void RebindCannonInputComponent(UInputComponent* IC, AShooterPlayerController* PC, bool bIncludeAllowlist) { NativeCall<void, UInputComponent*, AShooterPlayerController*, bool>(this, "UPrimalShipCannonControlComponent.RebindCannonInputComponent(UInputComponent*,AShooterPlayerController*,bool)", IC, PC, bIncludeAllowlist); }
	void Cannon_ToggleGunports() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.Cannon_ToggleGunports()"); }
	float GetActiveBandRange() { return NativeCall<float>(this, "UPrimalShipCannonControlComponent.GetActiveBandRange()"); }
	void BPOnGunportsChanged(bool bOpen) { NativeCall<void, bool>(this, "UPrimalShipCannonControlComponent.BPOnGunportsChanged(bool)", bOpen); }
	void MulticastLoadCharacterIntoCannon(int CannonIndex, AShooterCharacter* Character) { NativeCall<void, int, AShooterCharacter*>(this, "UPrimalShipCannonControlComponent.MulticastLoadCharacterIntoCannon(int,AShooterCharacter*)", CannonIndex, Character); }
	void SpawnShipCannons() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.SpawnShipCannons()"); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.BeginPlay()"); }
	void MulticastPlayGunportSound(bool bOpen) { NativeCall<void, bool>(this, "UPrimalShipCannonControlComponent.MulticastPlayGunportSound(bool)", bOpen); }
	void UnloadAllCharactersFromCannons() { NativeCall<void>(this, "UPrimalShipCannonControlComponent.UnloadAllCharactersFromCannons()"); }

	BitFieldValue<bool, unsigned char> bProjectilesInheritShipVelocity() { return { this, "UPrimalShipCannonControlComponent.bProjectilesInheritShipVelocity"}; }

	USoundBase*& GunportOpenSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalShipCannonControlComponent.GunportOpenSound"); }
	USoundBase*& GunportCloseSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalShipCannonControlComponent.GunportCloseSound"); }
	UInputComponent*& CannonInputComponentField() { return *GetNativePointerField<UInputComponent**>(this, "UPrimalShipCannonControlComponent.CannonInputComponent"); }

	FShipCannonMountSettings& DefaultMountSettingsField() { return *GetNativePointerField<FShipCannonMountSettings*>(this, "UPrimalShipCannonControlComponent.DefaultMountSettings"); }
	TArray<UPrimalShipCannonComponent*, TSizedDefaultAllocator<32> >& CannonsField() { return *GetNativePointerField<TArray<UPrimalShipCannonComponent*, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.Cannons"); }
	TArray<int, TSizedDefaultAllocator<32> >& SideAmmoIndexField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.SideAmmoIndex"); }
	TArray<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& SideClaimantsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.SideClaimants"); }
	TArray<bool, TSizedDefaultAllocator<32> >& bAimActivePerSideField() { return *GetNativePointerField<TArray<bool, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.bAimActivePerSide"); }
	FLinearColor& AimBandColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalShipCannonControlComponent.AimBandColor"); }
	FLinearColor& AimBandColorCooldownField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalShipCannonControlComponent.AimBandColorCooldown"); }
	FLinearColor& HitIndicatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalShipCannonControlComponent.HitIndicatorColor"); }
	FLinearColor& HitIndicatorColorCooldownField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalShipCannonControlComponent.HitIndicatorColorCooldown"); }
	TArray<float, TSizedDefaultAllocator<32> >& SavedAimYawAccumPerSideField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.SavedAimYawAccumPerSide"); }
	TArray<float, TSizedDefaultAllocator<32> >& SavedBandRangePerSideField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.SavedBandRangePerSide"); }
	TArray<TWeakObjectPtr<APrimalStructureItemContainer, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& CachedAmmoBoxesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalStructureItemContainer, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipCannonControlComponent.CachedAmmoBoxes"); }
	FShipCannonFiredSignature& OnCannonFiredField() { return *GetNativePointerField<FShipCannonFiredSignature*>(this, "UPrimalShipCannonControlComponent.OnCannonFired"); }
	FShipCannonGunportsChangedSignature& OnGunportsChangedField() { return *GetNativePointerField<FShipCannonGunportsChangedSignature*>(this, "UPrimalShipCannonControlComponent.OnGunportsChanged"); }
	FShipCannonAimChangedSignature& OnCannonAimChangedField() { return *GetNativePointerField<FShipCannonAimChangedSignature*>(this, "UPrimalShipCannonControlComponent.OnCannonAimChanged"); }
	UE::Math::TRotator<double>& GunportOpenRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalShipCannonControlComponent.GunportOpenRotationOffset"); }
	FName& LoadedCharacterAttachSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonControlComponent.LoadedCharacterAttachSocket"); }
	FShipCannonAimCameraSettings& DefaultAimCameraField() { return *GetNativePointerField<FShipCannonAimCameraSettings*>(this, "UPrimalShipCannonControlComponent.DefaultAimCamera"); }
	FName& SavedCameraStyleField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonControlComponent.SavedCameraStyle"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& PilotPCField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "UPrimalShipCannonControlComponent.PilotPC"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& CannonInputPushedForField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "UPrimalShipCannonControlComponent.CannonInputPushedFor"); }
	FTimerHandle& CannonAimPumpTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalShipCannonControlComponent.CannonAimPumpTimerHandle"); }
	FTimerHandle& CannonFireTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalShipCannonControlComponent.CannonFireTimerHandle"); }
	UE::Math::TVector<double>* ComputeInterceptPoint(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& ShooterPos, const UE::Math::TVector<double>& TargetPos, const UE::Math::TVector<double>& TargetVel, int AmmoIdx) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, int>(this, "UPrimalShipCannonControlComponent.ComputeInterceptPoint(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,int)", result, ShooterPos, TargetPos, TargetVel, AmmoIdx); }
	int GetAmmoCount(int AmmoIndex, bool bSumOfAllBoxes, APrimalStructureItemContainer*& FirstFoundAmmoBox) { return NativeCall<int, int, bool, APrimalStructureItemContainer*&>(this, "UPrimalShipCannonControlComponent.GetAmmoCount(int,bool,APrimalStructureItemContainer*&)", AmmoIndex, bSumOfAllBoxes, FirstFoundAmmoBox); }
	void MulticastFireCharacterFromCannon(AShooterCharacter* Character, UE::Math::TVector<double>* SpawnLocation, UE::Math::TRotator<double>* SpawnRotation, UE::Math::TVector<double>* LaunchVelocity, AActor* IgnoreActor) { if (!SpawnLocation) throw std::invalid_argument("Null native value parameter"); if (!SpawnRotation) throw std::invalid_argument("Null native value parameter"); if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AShooterCharacter *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double >, AActor *>(this, "UPrimalShipCannonControlComponent.MulticastFireCharacterFromCannon(AShooterCharacter*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,AActor*)", Character, *SpawnLocation, *SpawnRotation, *LaunchVelocity, IgnoreActor); }
	void MulticastPlayCannonFireFX_Implementation(const TArray<int, TSizedDefaultAllocator<32> >& Indexes, int FiredAmmoIndex) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&, int>(this, "UPrimalShipCannonControlComponent.MulticastPlayCannonFireFX_Implementation(TArray<int,TSizedDefaultAllocator<32>>&,int)", Indexes, FiredAmmoIndex); }
	void TickComponent(float DeltaSeconds, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPrimalShipCannonControlComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaSeconds, TickType, ThisTickFunction); }
	bool GetCameraPivotOverride(UE::Math::TVector<double>& OutPivot, float& OutArmLength) { return NativeCall<bool, UE::Math::TVector<double>&, float&>(this, "UPrimalShipCannonControlComponent.GetCameraPivotOverride(UE::Math::TVector<double>&,float&)", OutPivot, OutArmLength); }
	void GetSideSpeedAndGravity(int SideIdx, float& OutSpeed, float& OutGravity) { NativeCall<void, int, float&, float&>(this, "UPrimalShipCannonControlComponent.GetSideSpeedAndGravity(int,float&,float&)", SideIdx, OutSpeed, OutGravity); }
	bool GetAmmoConfig(int Index, FCannonAmmoConfig& OutConfig) { return NativeCall<bool, int, FCannonAmmoConfig&>(this, "UPrimalShipCannonControlComponent.GetAmmoConfig(int,FCannonAmmoConfig&)", Index, OutConfig); }
	void MulticastFireCharacterFromCannon_Implementation(AShooterCharacter* Character, UE::Math::TVector<double>* SpawnLocation, UE::Math::TRotator<double>* SpawnRotation, UE::Math::TVector<double>* LaunchVelocity, AActor* IgnoreActor) { if (!SpawnLocation) throw std::invalid_argument("Null native value parameter"); if (!SpawnRotation) throw std::invalid_argument("Null native value parameter"); if (!LaunchVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AShooterCharacter *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double >, AActor *>(this, "UPrimalShipCannonControlComponent.MulticastFireCharacterFromCannon_Implementation(AShooterCharacter*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,AActor*)", Character, *SpawnLocation, *SpawnRotation, *LaunchVelocity, IgnoreActor); }
	void RegisterGunportMeshes(const TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >& InMeshes) { NativeCall<void, const TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >&>(this, "UPrimalShipCannonControlComponent.RegisterGunportMeshes(TArray<UStaticMeshComponent*,TSizedDefaultAllocator<32>>&)", InMeshes); }
	void MulticastPlayCannonFireFX(const TArray<int, TSizedDefaultAllocator<32> >& Indexes, int FiredAmmoIndex) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&, int>(this, "UPrimalShipCannonControlComponent.MulticastPlayCannonFireFX(TArray<int,TSizedDefaultAllocator<32>>&,int)", Indexes, FiredAmmoIndex); }
	bool FireBroadsideAtTarget(UE::Math::TVector<double>* TargetWorld) { if (!TargetWorld) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >>(this, "UPrimalShipCannonControlComponent.FireBroadsideAtTarget(UE::Math::TVector<double>)", *TargetWorld); }
	bool ComputeActiveSideCannonCentroid(UE::Math::TVector<double>& OutCentroid) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "UPrimalShipCannonControlComponent.ComputeActiveSideCannonCentroid(UE::Math::TVector<double>&)", OutCentroid); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPrimalShipCannonControlComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
