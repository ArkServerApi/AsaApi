#pragma once
#include "BulkForward.h"


struct APrimalWeaponBow : AShooterWeapon_Projectile
{
	// Fields

	float& MinimumInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MinimumInitialSpeed"); }
	float& MaximumInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MaximumInitialSpeed"); }
	float& PullingTimeForMaximumSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.PullingTimeForMaximumSpeed"); }
	float& DamageFactorForSlowArrowsField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.DamageFactorForSlowArrows"); }
	float& DamageFactorForFastArrowsField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.DamageFactorForFastArrows"); }
	float& MinimumPullingTimeToFireField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MinimumPullingTimeToFire"); }
	//TSubclassOf<UMatineeCameraShake>& MaxPullCameraShakeField() { return *GetNativePointerField<TSubclassOf<UMatineeCameraShake>*>(this, "APrimalWeaponBow.MaxPullCameraShake"); }
	FName& ArrowBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowBoneName"); }
	//FWeaponAnim& PullStringAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponBow.PullStringAnim"); }
	FName& ArrowOnWeaponAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowOnWeaponAttachPoint3P"); }
	UStaticMeshComponent*& ArrowMesh3PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBow.ArrowMesh3P"); }
	FName& ArrowAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowAttachPoint3P"); }
	UStaticMeshComponent*& ArrowMesh1PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBow.ArrowMesh1P"); }
	FName& ArrowAttachPoint1PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowAttachPoint1P"); }
	float& PullingTimeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.PullingTime"); }
	float& ProjectileSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.ProjectileSpeed"); }
	bool& bHiddenArrowTPVField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponBow.bHiddenArrowTPV"); }
	FTimerHandle& UnhideArrowTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalWeaponBow.UnhideArrowTimerHandle"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDisablePullingOnCrouch() { return { this, "APrimalWeaponBow.bDisablePullingOnCrouch" }; }
	BitFieldValue<bool, unsigned __int32> bDisablePullingOnProne() { return { this, "APrimalWeaponBow.bDisablePullingOnProne" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysPlayTPVPullStringAnim() { return { this, "APrimalWeaponBow.bAlwaysPlayTPVPullStringAnim" }; }
	BitFieldValue<bool, unsigned __int32> bHideWeaponOnLaunch() { return { this, "APrimalWeaponBow.bHideWeaponOnLaunch" }; }
	BitFieldValue<bool, unsigned __int32> bUseArrowMesh1P() { return { this, "APrimalWeaponBow.bUseArrowMesh1P" }; }
	BitFieldValue<bool, unsigned __int32> bHideOriginalArrowBone1P() { return { this, "APrimalWeaponBow.bHideOriginalArrowBone1P" }; }
	BitFieldValue<bool, unsigned __int32> bAttachArrowToWeaponMesh3P() { return { this, "APrimalWeaponBow.bAttachArrowToWeaponMesh3P" }; }
	BitFieldValue<bool, unsigned __int32> bReloadOnEmptyClip() { return { this, "APrimalWeaponBow.bReloadOnEmptyClip" }; }
	BitFieldValue<bool, unsigned __int32> bPendingPullString() { return { this, "APrimalWeaponBow.bPendingPullString" }; }
	BitFieldValue<bool, unsigned __int32> bNewPullStringEvent() { return { this, "APrimalWeaponBow.bNewPullStringEvent" }; }
	BitFieldValue<bool, unsigned __int32> bIsPullingString() { return { this, "APrimalWeaponBow.bIsPullingString" }; }
	BitFieldValue<bool, unsigned __int32> bIsPlayingPullStringAnim() { return { this, "APrimalWeaponBow.bIsPlayingPullStringAnim" }; }
	BitFieldValue<bool, unsigned __int32> bDidFireWeapon() { return { this, "APrimalWeaponBow.bDidFireWeapon" }; }
	BitFieldValue<bool, unsigned __int32> bIsLastArrow() { return { this, "APrimalWeaponBow.bIsLastArrow" }; }
	BitFieldValue<bool, unsigned __int32> bDontRequireIdleForReload() { return { this, "APrimalWeaponBow.bDontRequireIdleForReload" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanStartFire() { return { this, "APrimalWeaponBow.bUseBPCanStartFire" }; }
	BitFieldValue<bool, unsigned __int32> bForceServerCheckPullingTime() { return { this, "APrimalWeaponBow.bForceServerCheckPullingTime" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWeaponBow"); }
	void ServerSetPullString(bool bIsPulling) { NativeCall<void, bool>(this, "APrimalWeaponBow.ServerSetPullString(bool)", bIsPulling); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWeaponBow();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	bool CanReload() { return NativeCall<bool>(this, "APrimalWeaponBow.CanReload()"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponBow.StartFire(bool)", bFromGamepad); }
	void ServerSetPullString_Implementation(bool bIsPulling) { NativeCall<void, bool>(this, "APrimalWeaponBow.ServerSetPullString_Implementation(bool)", bIsPulling); }
	void UpdateTPVBowAnimation() { NativeCall<void>(this, "APrimalWeaponBow.UpdateTPVBowAnimation()"); }
	void PlayFireAnimation() { NativeCall<void>(this, "APrimalWeaponBow.PlayFireAnimation()"); }
	//float PlayReloadAnimation() { return NativeCall<float, __int64, bool>(this, "APrimalWeaponBow.PlayReloadAnimation()"); }
	void PullString() { NativeCall<void>(this, "APrimalWeaponBow.PullString()"); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponBow.StopFire()"); }
	void FireWeapon() { NativeCall<void>(this, "APrimalWeaponBow.FireWeapon()"); }
	void DoFireProjectile(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalWeaponBow.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", Origin, ShootDir); }
	float ServerClampProjectileSpeed(float inSpeed) { return NativeCall<float, float>(this, "APrimalWeaponBow.ServerClampProjectileSpeed(float)", inSpeed); }
	void DoFireProjectileFP() { NativeCall<void>(this, "APrimalWeaponBow.DoFireProjectileFP()"); }
	void ApplyWeaponConfig(FProjectileWeaponData* Data) { NativeCall<void, FProjectileWeaponData*>(this, "APrimalWeaponBow.ApplyWeaponConfig(FProjectileWeaponData&)", Data); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalWeaponBow.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponBow.Tick(float)", DeltaSeconds); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "APrimalWeaponBow.StartUnequip_Implementation()"); }
	void HideArrow() { NativeCall<void>(this, "APrimalWeaponBow.HideArrow()"); }
	void UnHideArrow() { NativeCall<void>(this, "APrimalWeaponBow.UnHideArrow()"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponBow.OnEquip()"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "APrimalWeaponBow.UpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	void AttachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponBow.AttachOtherMeshes()"); }
	bool CanRun() { return NativeCall<bool>(this, "APrimalWeaponBow.CanRun()"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponBow.DetachOtherMeshes()"); }
	void StopOwnerEffects() { NativeCall<void>(this, "APrimalWeaponBow.StopOwnerEffects()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalWeaponBow.Destroyed()"); }
	void DoMeleeAttack() { NativeCall<void>(this, "APrimalWeaponBow.DoMeleeAttack()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalWeaponBow.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool UseAlternateAimOffsetAnim() { return NativeCall<bool>(this, "APrimalWeaponBow.UseAlternateAimOffsetAnim()"); }
	bool ForcesTPVCameraOffset_Implementation() { return NativeCall<bool>(this, "APrimalWeaponBow.ForcesTPVCameraOffset_Implementation()"); }
	void FireProjectileEx(UE::Math::TVector<double>* Origin, FVector_NetQuantizeNormal* ShootDir, float Speed, int RandomSeed, int ProjectileID) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, float, int, int>(this, "APrimalWeaponBow.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", Origin, ShootDir, Speed, RandomSeed, ProjectileID); }

	bool& bHiddenArrowFPVField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponBow.bHiddenArrowFPV"); }
	bool& bStartedCameraShakeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponBow.bStartedCameraShake"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWeaponBow"); }

	FWeaponAnim& PullStringAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponBow.PullStringAnim"); }
	BitFieldValue<bool, unsigned char> bPreventMeleeWhileFiring() { return { this, "APrimalWeaponBow.bPreventMeleeWhileFiring"}; }
	bool BPCanStartFire() { return NativeCall<bool>(this, "APrimalWeaponBow.BPCanStartFire()"); }
	float PlayReloadAnimation() { return NativeCall<float>(this, "APrimalWeaponBow.PlayReloadAnimation()"); }
	bool CanMeleeAttack() { return NativeCall<bool>(this, "APrimalWeaponBow.CanMeleeAttack()"); }
	void CancelPullString() { NativeCall<void>(this, "APrimalWeaponBow.CancelPullString()"); }
	static void SetbIsPullingString_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalWeaponBow.SetbIsPullingString_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbIsPullingString_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalWeaponBow.GetbIsPullingString_WrapperImpl(void*,void*)", Object, OutValue); }
	bool BPIsArrowHidden() { return NativeCall<bool>(this, "APrimalWeaponBow.BPIsArrowHidden()"); }
	void BPSimulatedResetSetPullingTime() { NativeCall<void>(this, "APrimalWeaponBow.BPSimulatedResetSetPullingTime()"); }
};