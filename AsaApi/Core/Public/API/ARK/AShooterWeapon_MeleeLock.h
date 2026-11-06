#pragma once
#include "BulkForward.h"


struct AShooterWeapon_MeleeLock : AShooterWeapon_Melee
{
	// Fields

	FTimerHandle& EndMeleeAttackHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon_MeleeLock.EndMeleeAttackHandle"); }
	float& LockValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockValue"); }
	float& LockVFXValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockVFXValue"); }
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_MeleeLock.LastAttackTime"); }
	long double& LastHitTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_MeleeLock.LastHitTime"); }
	float& LockDecayValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockDecayValue"); }
	float& LockHitIncrementField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockHitIncrement"); }
	float& LockMissDecrementField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockMissDecrement"); }
	float& MinAnimationRateField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinAnimationRate"); }
	float& MaxAnimationRateField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxAnimationRate"); }
	float& MinDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinDamageMultiplier"); }
	float& MaxDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxDamageMultiplier"); }
	TSoftClassPtr<APrimalBuff>& TargetBuff_MaxDamageField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "AShooterWeapon_MeleeLock.TargetBuff_MaxDamage"); }
	TSoftClassPtr<APrimalBuff>& OwnerBuff_MaxDamageField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "AShooterWeapon_MeleeLock.OwnerBuff_MaxDamage"); }
	float& LockTurnRateField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockTurnRate"); }
	float& MinPullDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinPullDistance"); }
	float& MaxPullDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxPullDistance"); }
	float& MaxTargetDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxTargetDistance"); }
	float& TargetAngleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.TargetAngle"); }
	float& MaxLockTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxLockTime"); }
	float& AttackMoveSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackMoveSpeed"); }
	float& AttackAirImpulseField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackAirImpulse"); }
	float& AttackMoveDurationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackMoveDuration"); }
	float& MaxPowerThresholdField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxPowerThreshold"); }
	TWeakObjectPtr<APrimalCharacter>& LastHitActorField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "AShooterWeapon_MeleeLock.LastHitActor"); }
	float& MaxLockAngleCosField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxLockAngleCos"); }
	float& GetPullRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.GetPullRange"); }
	float& LastSentLockValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LastSentLockValue"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_MeleeLock"); }
	void SetMeleeHitActor(APrimalCharacter* HitActor) { NativeCall<void, APrimalCharacter*>(this, "AShooterWeapon_MeleeLock.SetMeleeHitActor(APrimalCharacter*)", HitActor); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_MeleeLock();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void BeginPlay() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.BeginPlay()"); }
	void DoMeleeAttack() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.DoMeleeAttack()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_MeleeLock.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void PreMeleeAttackCheck() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.PreMeleeAttackCheck()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_MeleeLock.Tick(float)", DeltaSeconds); }
	void EndMeleeAttack() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.EndMeleeAttack()"); }
	void OnRep_LockValue() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.OnRep_LockValue()"); }
	float GetWeaponAttackPlayRate() { return NativeCall<float>(this, "AShooterWeapon_MeleeLock.GetWeaponAttackPlayRate()"); }
	void DealDamage(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, int, TSubclassOf<UDamageType>, float>(this, "AShooterWeapon_MeleeLock.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.Destroyed()"); }

	bool& HitThisAttackField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_MeleeLock.HitThisAttack"); }
	bool& bSteppingEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_MeleeLock.bSteppingEnabled"); }

	TEnumAsByte<ESimpleCurve::Type>& AnimationRateCurveField() { return *GetNativePointerField<TEnumAsByte<ESimpleCurve::Type>*>(this, "AShooterWeapon_MeleeLock.AnimationRateCurve"); }
	TEnumAsByte<ESimpleCurve::Type>& DamageCurveField() { return *GetNativePointerField<TEnumAsByte<ESimpleCurve::Type>*>(this, "AShooterWeapon_MeleeLock.DamageCurve"); }
	static void SetbSteppingEnabled_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_MeleeLock.SetbSteppingEnabled_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetbSteppingEnabled_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_MeleeLock.GetbSteppingEnabled_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetLockValue_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_MeleeLock.GetLockValue_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetLockValue_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_MeleeLock.SetLockValue_WrapperImpl(void*,void*)", Object, InValue); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_MeleeLock"); }
};