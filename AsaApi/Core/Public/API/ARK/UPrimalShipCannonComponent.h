#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UStaticMeshComponent.h"

struct UPrimalShipCannonComponent : UStaticMeshComponent
{
public:
	UPrimalShipCannonComponent() = delete;
	~UPrimalShipCannonComponent() = delete;
	UPrimalShipCannonComponent(const UPrimalShipCannonComponent&) = delete;
	UPrimalShipCannonComponent& operator=(const UPrimalShipCannonComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalShipCannonComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalShipCannonComponent"); }

	bool& bUseArmThrowField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bUseArmThrow"); }
	float& ThrowArmPitchDegField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowArmPitchDeg"); }
	float& ThrowKickSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowKickSpeed"); }
	float& ThrowReturnSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowReturnSpeed"); }
	float& ThrowLaunchDurationField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowLaunchDuration"); }
	float& ThrowHoldDurationField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowHoldDuration"); }
	float& ThrowReturnDurationField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowReturnDuration"); }
	float& ThrowLaunchEaseExpField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowLaunchEaseExp"); }
	float& ThrowReturnEaseExpField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowReturnEaseExp"); }
	float& ThrowReleaseAlphaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowReleaseAlpha"); }
	float& ThrowReleaseDelayField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowReleaseDelay"); }
	float& ThrowAlphaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowAlpha"); }
	float& ThrowTargetField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowTarget"); }
	double& LastThrowStartTimeField() { return *GetNativePointerField<double*>(this, "UPrimalShipCannonComponent.LastThrowStartTime"); }
	bool& bAmmoVisualLoadedField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bAmmoVisualLoaded"); }
	float& LoadedAmmoVFXScaleField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXScale"); }
	float& ThrowArmVFXScaleField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowArmVFXScale"); }
	float& ThrowArmVFXStartAlphaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowArmVFXStartAlpha"); }
	bool& bThrowArmVFXPendingField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bThrowArmVFXPending"); }
	float& ThrowPhaseTimeField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowPhaseTime"); }
	float& ThrowLaunchStartAlphaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowLaunchStartAlpha"); }
	float& ThrowReturnStartAlphaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.ThrowReturnStartAlpha"); }
	int& RowField() { return *GetNativePointerField<int*>(this, "UPrimalShipCannonComponent.Row"); }
	double& LastFireTimeField() { return *GetNativePointerField<double*>(this, "UPrimalShipCannonComponent.LastFireTime"); }
	float& MaxYawDeltaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxYawDelta"); }
	float& MaxPitchDeltaUpField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxPitchDeltaUp"); }
	float& MaxPitchDeltaDownField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxPitchDeltaDown"); }
	float& MaxAimYawDeltaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxAimYawDelta"); }
	float& MaxAimPitchDeltaUpField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxAimPitchDeltaUp"); }
	float& MaxAimPitchDeltaDownField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.MaxAimPitchDeltaDown"); }
	float& AimInterpSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.AimInterpSpeed"); }
	float& DeployInterpSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DeployInterpSpeed"); }
	bool& bRequiresGunportField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bRequiresGunport"); }
	float& DeployRatioField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.DeployRatio"); }
	float& RecoilFractionField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilFraction"); }
	float& RecoilKickSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilKickSpeed"); }
	float& RecoilReturnSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilReturnSpeed"); }
	float& RecoilAlphaField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilAlpha"); }
	float& RecoilTargetField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.RecoilTarget"); }
	float& LoadedCharacterAnimPlayRateField() { return *GetNativePointerField<float*>(this, "UPrimalShipCannonComponent.LoadedCharacterAnimPlayRate"); }
	bool& bLoadedCharacterAnimLoopingField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bLoadedCharacterAnimLooping"); }
	bool& bPreLoadDisableLookYawField() { return *GetNativePointerField<bool*>(this, "UPrimalShipCannonComponent.bPreLoadDisableLookYaw"); }

	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "UPrimalShipCannonComponent.DestroyComponent(bool)", bPromoteChildren); }
	bool CanFire(double NowSeconds, float Interval) { return NativeCall<bool, double, float>(this, "UPrimalShipCannonComponent.CanFire(double,float)", NowSeconds, Interval); }
	void SetAmmoVisualLoaded(bool bLoaded) { NativeCall<void, bool>(this, "UPrimalShipCannonComponent.SetAmmoVisualLoaded(bool)", bLoaded); }
	USceneComponent* GetMuzzleComponent() { return NativeCall<USceneComponent*>(this, "UPrimalShipCannonComponent.GetMuzzleComponent()"); }
	void StartRecoil() { NativeCall<void>(this, "UPrimalShipCannonComponent.StartRecoil()"); }
	AShooterCharacter* GetLoadedCharacter() { return NativeCall<AShooterCharacter*>(this, "UPrimalShipCannonComponent.GetLoadedCharacter()"); }
	void UpdateArmThrow(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalShipCannonComponent.UpdateArmThrow(float)", DeltaSeconds); }
	bool ApplyLoadedCharacterPose(AShooterCharacter* Character) { return NativeCall<bool, AShooterCharacter*>(this, "UPrimalShipCannonComponent.ApplyLoadedCharacterPose(AShooterCharacter*)", Character); }
	void ClearLoadedCharacterPose(AShooterCharacter* Character) { NativeCall<void, AShooterCharacter*>(this, "UPrimalShipCannonComponent.ClearLoadedCharacterPose(AShooterCharacter*)", Character); }
	void UpdateVisualOffsets(float DeltaSeconds, bool bShouldBeDeployed) { NativeCall<void, float, bool>(this, "UPrimalShipCannonComponent.UpdateVisualOffsets(float,bool)", DeltaSeconds, bShouldBeDeployed); }
	float ComputeCurrentBarrelRange(float ProjectileSpeed, float Gravity, float PlaneZ) { return NativeCall<float, float, float, float>(this, "UPrimalShipCannonComponent.ComputeCurrentBarrelRange(float,float,float)", ProjectileSpeed, Gravity, PlaneZ); }

	UStaticMeshComponent*& TopMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "UPrimalShipCannonComponent.TopMesh"); }
	UStaticMeshComponent*& BarrelMeshField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "UPrimalShipCannonComponent.BarrelMesh"); }

	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& LoadedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "UPrimalShipCannonComponent.LoadedCharacter"); }
	FName& LoadedAmmoVFXSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXSocket"); }
	FName& LoadedAmmoVFXDefaultSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.LoadedAmmoVFXDefaultSocket"); }
	FName& ReadySoundSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.ReadySoundSocket"); }
	FName& ThrowArmVFXSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.ThrowArmVFXSocket"); }
	UE::Math::TRotator<double>& LocalAimDeltaField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalShipCannonComponent.LocalAimDelta"); }
	FName& MuzzleSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.MuzzleSocketName"); }
	UE::Math::TVector<double>& RestRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipCannonComponent.RestRelativeLocation"); }
	UE::Math::TRotator<double>& RestRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalShipCannonComponent.RestRelativeRotation"); }
	UE::Math::TVector<double>& StowedLocalOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipCannonComponent.StowedLocalOffset"); }
	UE::Math::TVector<double>& CachedLaunchDirWorldField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipCannonComponent.CachedLaunchDirWorld"); }
	FName& LoadedCharacterSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonComponent.LoadedCharacterSocket"); }
	UE::Math::TVector<double>& LoadedCharacterRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipCannonComponent.LoadedCharacterRelativeLocation"); }
	UE::Math::TRotator<double>& LoadedCharacterRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalShipCannonComponent.LoadedCharacterRelativeRotation"); }
	UE::Math::TVector<double>& PreLoadCharacterScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipCannonComponent.PreLoadCharacterScale"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& PosedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "UPrimalShipCannonComponent.PosedCharacter"); }
	UE::Math::TTransform<double>* GetMuzzleTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UPrimalShipCannonComponent.GetMuzzleTransform()", result); }
	void SetLoadedAmmoVFX(UNiagaraSystem* InSystem, FName InSocket) { NativeCall<void, UNiagaraSystem*, FName>(this, "UPrimalShipCannonComponent.SetLoadedAmmoVFX(UNiagaraSystem*,FName)", InSystem, InSocket); }
	UE::Math::TTransform<double>* GetRestPoseWorldTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UPrimalShipCannonComponent.GetRestPoseWorldTransform()", result); }
	static bool SolveBallisticArc(const UE::Math::TVector<double>& Muzzle, const UE::Math::TVector<double>& Target, float ProjectileSpeed, float Gravity, UE::Math::TVector<double>& OutLaunchDir) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, float, UE::Math::TVector<double>&>(nullptr, "UPrimalShipCannonComponent.SolveBallisticArc(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,UE::Math::TVector<double>&)", Muzzle, Target, ProjectileSpeed, Gravity, OutLaunchDir); }
	void ConfigureFromMount(const FShipCannonMount& Mount, const FShipCannonMountSettings& Settings) { NativeCall<void, const FShipCannonMount&, const FShipCannonMountSettings&>(this, "UPrimalShipCannonComponent.ConfigureFromMount(FShipCannonMount&,FShipCannonMountSettings&)", Mount, Settings); }
	void UpdateAimToBandSlot(const UE::Math::TVector<double>& SlotWorldPos, float ProjectileSpeed, float Gravity, float DeltaSeconds) { NativeCall<void, const UE::Math::TVector<double>&, float, float, float>(this, "UPrimalShipCannonComponent.UpdateAimToBandSlot(UE::Math::TVector<double>&,float,float,float)", SlotWorldPos, ProjectileSpeed, Gravity, DeltaSeconds); }
	static void ComputeAimDeviationDegrees(const UE::Math::TVector<double>& BarrelWorld, const UE::Math::TVector<double>& LaunchDirWorld, float& OutYawDeg, float& OutPitchDeg) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float&, float&>(nullptr, "UPrimalShipCannonComponent.ComputeAimDeviationDegrees(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", BarrelWorld, LaunchDirWorld, OutYawDeg, OutPitchDeg); }
	FName GetMuzzleSocket() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalShipCannonComponent.GetMuzzleSocket()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
};
