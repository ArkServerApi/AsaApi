#pragma once
#include "BulkForward.h"


struct AShooterWeapon_Activated : AShooterWeapon_FlameThrower
{
	// Fields

	int& nLastActivationAnimField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Activated.nLastActivationAnim"); }
	//TArray<FWeaponAnim, TSizedDefaultAllocator<32> >& ActivateAnimField() { return *GetNativePointerField<TArray<FWeaponAnim, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Activated.ActivateAnim"); }
	//TArray<FWeaponAnim, TSizedDefaultAllocator<32> >& DeactivateAnimField() { return *GetNativePointerField<TArray<FWeaponAnim, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Activated.DeactivateAnim"); }
	//FWeaponAnim& StopFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Activated.StopFireAnim"); }
	//FWeaponAnim& MovementFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Activated.MovementFireAnim"); }
	FTimerHandle& EndActivationAnimHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon_Activated.EndActivationAnimHandle"); }
	//TSubclassOf<UMatineeCameraShake>& ActivateCameraShakeField() { return *GetNativePointerField<TSubclassOf<UMatineeCameraShake>*>(this, "AShooterWeapon_Activated.ActivateCameraShake"); }
	float& ActivateCameraShakeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Activated.ActivateCameraShakeSpeedScale"); }
	UE::Math::TVector<double>& FireOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.FireOrigin"); }
	UE::Math::TVector<double>& FireDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.FireDirection"); }
	UE::Math::TVector<double>& TargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.TargetLocation"); }
	FName& BeamTargetParameterNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Activated.BeamTargetParameterName"); }
	USoundCue*& FireLoopSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Activated.FireLoopSound"); }
	UAudioComponent*& FireLoopACField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_Activated.FireLoopAC"); }
	USoundCue*& IdleSoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Activated.IdleSound"); }
	UAudioComponent*& IdleACField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_Activated.IdleAC"); }
	USoundCue*& EmptySoundField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Activated.EmptySound"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsActivated() { return { this, "AShooterWeapon_Activated.bIsActivated" }; }
	BitFieldValue<bool, unsigned __int32> bActivationHeld() { return { this, "AShooterWeapon_Activated.bActivationHeld" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Activated"); }
	bool CanPlayFireEffects() { return NativeCall<bool>(this, "AShooterWeapon_Activated.CanPlayFireEffects()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_Activated();
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.StartFire(bool)", bFromGamepad); }
	bool IsActivationAnimPlaying() { return NativeCall<bool>(this, "AShooterWeapon_Activated.IsActivationAnimPlaying()"); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_Activated.StopFire()"); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Activated.StartSecondaryAction()"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.StartReload(bool)", bFromReplication); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Activated.FireWeapon()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Activated.Tick(float)", DeltaSeconds); }
	void PlayFireAnimation() { NativeCall<void>(this, "AShooterWeapon_Activated.PlayFireAnimation()"); }
	void EndActivationAnim() { NativeCall<void>(this, "AShooterWeapon_Activated.EndActivationAnim()"); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "AShooterWeapon_Activated.ShouldDealDamage(AActor*)", TestActor); }
	void ActivateWeapon(bool bActivate, int nAnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ActivateWeapon(bool,int)", bActivate, nAnimIndex); }
	void ActivateWeapon_Internal(bool bActivate, int* nAnimIndex) { NativeCall<void, bool, int*>(this, "AShooterWeapon_Activated.ActivateWeapon_Internal(bool,int&)", bActivate, nAnimIndex); }
	void ClientActivateWeapon_Implementation(bool bActivate) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientActivateWeapon_Implementation(bool)", bActivate); }
	void ServerActivateWeapon_Implementation(bool bActivate, int nAnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ServerActivateWeapon_Implementation(bool,int)", bActivate, nAnimIndex); }
	void ClientHandleActivation_Implementation(bool bActivate) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientHandleActivation_Implementation(bool)", bActivate); }
	void CancelActivation_Internal() { NativeCall<void>(this, "AShooterWeapon_Activated.CancelActivation_Internal()"); }
	void TickShootFX_Internal() { NativeCall<void>(this, "AShooterWeapon_Activated.TickShootFX_Internal()"); }
	void GetFirePosition(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.GetFirePosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, ShootDir); }
	bool BeamTrace(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir, UE::Math::TVector<double>* OutImpact) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.BeamTrace(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", Origin, ShootDir, OutImpact); }
	void MuzzlePSCSpawned() { NativeCall<void>(this, "AShooterWeapon_Activated.MuzzlePSCSpawned()"); }
	void ServerCancelActivation_Implementation() { NativeCall<void>(this, "AShooterWeapon_Activated.ServerCancelActivation_Implementation()"); }
	void ServerPreFire_Implementation(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.ServerPreFire_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }

	bool& bDamagePawnsField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Activated.bDamagePawns"); }

	FWeaponAnim& StopFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Activated.StopFireAnim"); }
	FWeaponAnim& MovementFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Activated.MovementFireAnim"); }
	void HandleActivation(bool bActive) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.HandleActivation(bool)", bActive); }
	void MultiPlayActivationAnim_Implementation(bool bActivate, int AnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.MultiPlayActivationAnim_Implementation(bool,int)", bActivate, AnimIndex); }
	void StopSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Activated.StopSecondaryAction()"); }
	UE::Math::TVector<double>* GetBeamTarget(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Activated.GetBeamTarget()", result); }
	void OnRep_IsActivated() { NativeCall<void>(this, "AShooterWeapon_Activated.OnRep_IsActivated()"); }
	static void SetbIsActivated_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_Activated.SetbIsActivated_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbIsActivated_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_Activated.GetbIsActivated_WrapperImpl(void*,void*)", Object, OutValue); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon_Activated.Destroyed()"); }
	void BPPreFireEvent(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { if (!Origin) throw std::invalid_argument("Null native value parameter"); if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterWeapon_Activated.BPPreFireEvent(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Origin, *ShootDir); }
	void MultiPlayActivationAnim(bool bActivate, int AnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.MultiPlayActivationAnim(bool,int)", bActivate, AnimIndex); }
	bool GetAimOffsets(float DeltaTime, UE::Math::TRotator<double>& RootRotOffset, float& RootYawSpeed, float MaxYawAimClamp, UE::Math::TVector<double>& RootLocOffset, UE::Math::TRotator<double>& CurrentAimRot, UE::Math::TVector<double>& CurrentRootLoc, UE::Math::TVector<double>& TargetRootLoc, UE::Math::TRotator<double>& TargetAimRot) { return NativeCall<bool, float, UE::Math::TRotator<double>&, float&, float, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, UE::Math::TVector<double>&, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AShooterWeapon_Activated.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, CurrentAimRot, CurrentRootLoc, TargetRootLoc, TargetAimRot); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Activated"); }
};