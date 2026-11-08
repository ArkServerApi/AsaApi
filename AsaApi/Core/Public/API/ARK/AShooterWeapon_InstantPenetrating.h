#pragma once
#include "BulkForward.h"


struct AShooterWeapon_InstantPenetrating : AShooterWeapon_Instant
{
	// Fields

	float& MaxPenetrationTraceDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.MaxPenetrationTraceDistance"); }
	float& PenaltyPerPenetrationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.PenaltyPerPenetration"); }
	float& PenaltyPerUnrealUnitField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.PenaltyPerUnrealUnit"); }
	TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>& HurtListField() { return *GetNativePointerField<TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*>(this, "AShooterWeapon_InstantPenetrating.HurtList"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDebugPenetration() { return { this, "AShooterWeapon_InstantPenetrating.bDebugPenetration" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_InstantPenetrating"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_InstantPenetrating();
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "AShooterWeapon_InstantPenetrating.Serialize(FStructuredArchiveRecord)", Record); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AShooterWeapon_InstantPenetrating.Serialize(FArchive&)", Ar); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor*>(this, "AShooterWeapon_InstantPenetrating.ShouldDealDamage(AActor*)", TestActor); }
	bool IsValidShootDirForImpact(const FHitResult* impact, const FVector_NetQuantizeNormal* shootDir) { return NativeCall<bool, const FHitResult*, const FVector_NetQuantizeNormal*>(this, "AShooterWeapon_InstantPenetrating.IsValidShootDirForImpact(FHitResult&,FVector_NetQuantizeNormal&)", impact, shootDir); }
	void WeaponPenetrationTrace(const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace, bool FilterVisuals, bool bDebugDraw, float DebugDrawDuration, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHitResults, TArray<bool, TSizedDefaultAllocator<32> >* OutIsEntryHit, float* OutMaxDistance) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, bool, bool, float, TArray<FHitResult, TSizedDefaultAllocator<32> >*, TArray<bool, TSizedDefaultAllocator<32> >*, float*>(this, "AShooterWeapon_InstantPenetrating.WeaponPenetrationTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool,float,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,float&)", StartTrace, EndTrace, FilterVisuals, bDebugDraw, DebugDrawDuration, OutHitResults, OutIsEntryHit, OutMaxDistance); }
	float WeaponTraceForHits(TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHitResults, TArray<bool, TSizedDefaultAllocator<32> >* OutIsEntryHit, const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace, bool FilterVisuals) { return NativeCall<float, TArray<FHitResult, TSizedDefaultAllocator<32> >*, TArray<bool, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, bool>(this, "AShooterWeapon_InstantPenetrating.WeaponTraceForHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", OutHitResults, OutIsEntryHit, StartTrace, EndTrace, FilterVisuals); }
	int ComputeAmountOfHitsToProcess(const TArray<FHitResult, TSizedDefaultAllocator<32> >* UseImpacts, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >* UseShootDirs) { return NativeCall<int, const TArray<FHitResult, TSizedDefaultAllocator<32> >*, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_InstantPenetrating.ComputeAmountOfHitsToProcess(TArray<FHitResult,TSizedDefaultAllocator<32>>*,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>*)", UseImpacts, UseShootDirs); }

	bool& bUseBPStopPenetratingAtHitField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_InstantPenetrating.bUseBPStopPenetratingAtHit"); }

	UE::Math::TVector<double>* FindExitHit(UE::Math::TVector<double>* result, FHitResult& OutHit, const FHitResult& Hit, const FCollisionQueryParams& TraceParams) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FHitResult&, const FHitResult&, const FCollisionQueryParams&>(this, "AShooterWeapon_InstantPenetrating.FindExitHit(FHitResult&,FHitResult&,FCollisionQueryParams&)", result, OutHit, Hit, TraceParams); }
	bool BPStopPenetratingAtHit(const FHitResult& CurrentHit, bool bIsEntryHit, float CurrentDistance, float CurrentMaxDistance) { return NativeCall<bool, const FHitResult&, bool, float, float>(this, "AShooterWeapon_InstantPenetrating.BPStopPenetratingAtHit(FHitResult&,bool,float,float)", CurrentHit, bIsEntryHit, CurrentDistance, CurrentMaxDistance); }
	int PassiveUseAmmo(int Amount) { return NativeCall<int, int>(this, "AShooterWeapon_InstantPenetrating.PassiveUseAmmo(int)", Amount); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_InstantPenetrating"); }
};