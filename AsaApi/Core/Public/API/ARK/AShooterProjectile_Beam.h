#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AShooterProjectile.h"

struct AShooterProjectile_Beam : AShooterProjectile
{
public:
	AShooterProjectile_Beam() = delete;
	~AShooterProjectile_Beam() = delete;
	AShooterProjectile_Beam(const AShooterProjectile_Beam&) = delete;
	AShooterProjectile_Beam& operator=(const AShooterProjectile_Beam&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterProjectile_Beam"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterProjectile_Beam"); }

	float& MinBeamLengthField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MinBeamLength"); }
	float& MaxBeamLengthField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MaxBeamLength"); }
	float& TraceRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.TraceRadius"); }
	int& MaxHitsPerTickField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Beam.MaxHitsPerTick"); }
	float& ForceUpdateAimedRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ForceUpdateAimedRadius"); }
	float& DamageTickIntervalField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.DamageTickInterval"); }
	float& BaseDamagePerTickField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.BaseDamagePerTick"); }
	float& ChargeAmountField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.ChargeAmount"); }
	float& MinLifeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MinLifeSeconds"); }
	float& MaxLifeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MaxLifeSeconds"); }
	float& VisualInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.VisualInterpSpeed"); }
	float& MaxDeviationDegreesField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.MaxDeviationDegrees"); }
	float& DebugDrawDurationField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.DebugDrawDuration"); }
	float& TimeSinceLastTraceField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.TimeSinceLastTrace"); }
	float& CachedMaxDeviationCosField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.CachedMaxDeviationCos"); }
	float& CachedMaxDeviationSinField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Beam.CachedMaxDeviationSin"); }

	void OnBeamLifeTimerExpired() { NativeCall<void>(this, "AShooterProjectile_Beam.OnBeamLifeTimerExpired()"); }
	void BPOnBeamEnd(bool bInstigatorLost) { NativeCall<void, bool>(this, "AShooterProjectile_Beam.BPOnBeamEnd(bool)", bInstigatorLost); }
	float GetEffectiveLifeSeconds() { return NativeCall<float>(this, "AShooterProjectile_Beam.GetEffectiveLifeSeconds()"); }
	void BPOnBeamSpawned() { NativeCall<void>(this, "AShooterProjectile_Beam.BPOnBeamSpawned()"); }
	void RequestStop() { NativeCall<void>(this, "AShooterProjectile_Beam.RequestStop()"); }
	void Destroyed() { NativeCall<void>(this, "AShooterProjectile_Beam.Destroyed()"); }
	void LifeSpanExpired() { NativeCall<void>(this, "AShooterProjectile_Beam.LifeSpanExpired()"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterProjectile_Beam.BeginPlay()"); }
	bool ServerDoBeamTickTrace(float DeltaSeconds) { return NativeCall<bool, float>(this, "AShooterProjectile_Beam.ServerDoBeamTickTrace(float)", DeltaSeconds); }
	void RunLocalVisualTrace(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterProjectile_Beam.RunLocalVisualTrace(float)", DeltaSeconds); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterProjectile_Beam.Tick(float)", DeltaSeconds); }
	float BPScaleDamageByCharge(float InChargeAmount, float InBaseDamagePerTick) { return NativeCall<float, float, float>(this, "AShooterProjectile_Beam.BPScaleDamageByCharge(float,float)", InChargeAmount, InBaseDamagePerTick); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AShooterProjectile_Beam.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	float GetEffectiveBeamLength() { return NativeCall<float>(this, "AShooterProjectile_Beam.GetEffectiveBeamLength()"); }

	BitFieldValue<bool, unsigned char> bAttachToInstigator() { return { this, "AShooterProjectile_Beam.bAttachToInstigator"}; }
	BitFieldValue<bool, unsigned char> bMultiHit() { return { this, "AShooterProjectile_Beam.bMultiHit"}; }
	BitFieldValue<bool, unsigned char> bForceUpdateAimedCharacters() { return { this, "AShooterProjectile_Beam.bForceUpdateAimedCharacters"}; }
	BitFieldValue<bool, unsigned char> bForceUpdateInstigatorMesh() { return { this, "AShooterProjectile_Beam.bForceUpdateInstigatorMesh"}; }
	BitFieldValue<bool, unsigned char> bDebugDraw() { return { this, "AShooterProjectile_Beam.bDebugDraw"}; }
	BitFieldValue<bool, unsigned char> bEndedDueToInstigatorLoss() { return { this, "AShooterProjectile_Beam.bEndedDueToInstigatorLoss"}; }
	BitFieldValue<bool, unsigned char> bVisualEndInitialized() { return { this, "AShooterProjectile_Beam.bVisualEndInitialized"}; }

	FName& AttachSocketNameField() { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Beam.AttachSocketName"); }
	UE::Math::TVector<double>& CurrentVisualEndField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterProjectile_Beam.CurrentVisualEnd"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& LastLocalHitActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "AShooterProjectile_Beam.LastLocalHitActor"); }
	TWeakObjectPtr<UDracoTargetComponent, FWeakObjectPtr>& CachedTargetComponentField() { return *GetNativePointerField<TWeakObjectPtr<UDracoTargetComponent, FWeakObjectPtr>*>(this, "AShooterProjectile_Beam.CachedTargetComponent"); }
	TWeakObjectPtr<USkeletalMeshComponent, FWeakObjectPtr>& CachedInstigatorMeshField() { return *GetNativePointerField<TWeakObjectPtr<USkeletalMeshComponent, FWeakObjectPtr>*>(this, "AShooterProjectile_Beam.CachedInstigatorMesh"); }
	FTimerHandle& BeamLifeTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterProjectile_Beam.BeamLifeTimer"); }
	UE::Math::TVector<double>* ClampDirectionToCone(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Dir, const UE::Math::TVector<double>& Reference) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterProjectile_Beam.ClampDirectionToCone(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", result, Dir, Reference); }
	void FinalizeVisual(float DeltaSeconds, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& RawEnd, AActor* HitActor, const UE::Math::TVector<double>& HitPoint, const UE::Math::TVector<double>& HitNormal) { NativeCall<void, float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, AActor*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterProjectile_Beam.FinalizeVisual(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", DeltaSeconds, Start, RawEnd, HitActor, HitPoint, HitNormal); }
	UE::Math::TVector<double>* GetMuzzleLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterProjectile_Beam.GetMuzzleLocation()", result); }
	void BPOnBeamHitFX(AActor* HitActor, UE::Math::TVector<double>* ImpactPoint, UE::Math::TVector<double>* ImpactNormal) { if (!ImpactPoint) throw std::invalid_argument("Null native value parameter"); if (!ImpactNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterProjectile_Beam.BPOnBeamHitFX(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>)", HitActor, *ImpactPoint, *ImpactNormal); }
	void BPOnBeamTick(float DeltaSeconds, UE::Math::TVector<double>* BeamStart, UE::Math::TVector<double>* BeamEnd) { if (!BeamStart) throw std::invalid_argument("Null native value parameter"); if (!BeamEnd) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterProjectile_Beam.BPOnBeamTick(float,UE::Math::TVector<double>,UE::Math::TVector<double>)", DeltaSeconds, *BeamStart, *BeamEnd); }
	void ApplyDefaultBeamDamage(const FHitResult& Hit, float DamageOverride) { NativeCall<void, const FHitResult&, float>(this, "AShooterProjectile_Beam.ApplyDefaultBeamDamage(FHitResult&,float)", Hit, DamageOverride); }
	void InitVelocity(UE::Math::TVector<double>& __formal) { NativeCall<void, UE::Math::TVector<double>&>(this, "AShooterProjectile_Beam.InitVelocity(UE::Math::TVector<double>&)", __formal); }
	UE::Math::TVector<double>* ResolveAimDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterProjectile_Beam.ResolveAimDirection()", result); }
	void BPOnBeamHit(const FHitResult& Hit, bool& bOutHandled) { NativeCall<void, const FHitResult&, bool&>(this, "AShooterProjectile_Beam.BPOnBeamHit(FHitResult&,bool&)", Hit, bOutHandled); }
};
