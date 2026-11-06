#pragma once
#include "BulkForward.h"


struct AShooterWeapon_Instant : AShooterWeapon
{
	// Fields

	FTimerHandle& CheckRefireTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterWeapon_Instant.CheckRefireTimerHandle"); }
	UParticleSystem*& TrailFXField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_Instant.TrailFX"); }
	UParticleSystem*& TrailFX_LocalField() { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_Instant.TrailFX_Local"); }
	FName& TrailTargetParamField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Instant.TrailTargetParam"); }
	float& OriginCheckDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Instant.OriginCheckDistance"); }
	//TArray<FWeaponCachedInstantShot, TSizedDefaultAllocator<32> >& CachedShotsField() { return *GetNativePointerField<TArray<FWeaponCachedInstantShot, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Instant.CachedShots"); }
	int& NumTracesPerShotField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Instant.NumTracesPerShot"); }
	int& NumTracesPerShotTimesField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Instant.NumTracesPerShotTimes"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPlayFireSoundOnInstantHit() { return { this, "AShooterWeapon_Instant.bPlayFireSoundOnInstantHit" }; }
	BitFieldValue<bool, unsigned __int32> bExecSpread() { return { this, "AShooterWeapon_Instant.bExecSpread" }; }
	BitFieldValue<bool, unsigned __int32> bFireFromMuzzle() { return { this, "AShooterWeapon_Instant.bFireFromMuzzle" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSimulatingMultipleShots() { return { this, "AShooterWeapon_Instant.bPreventSimulatingMultipleShots" }; }
	BitFieldValue<bool, unsigned __int32> bPerformObstructionCheck() { return { this, "AShooterWeapon_Instant.bPerformObstructionCheck" }; }
	BitFieldValue<bool, unsigned __int32> bSpawnTrailToHit() { return { this, "AShooterWeapon_Instant.bSpawnTrailToHit" }; }
	BitFieldValue<bool, unsigned __int32> bClampTrailToMaxWeaponRange() { return { this, "AShooterWeapon_Instant.bClampTrailToMaxWeaponRange" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPSpawnImpactEffects() { return { this, "AShooterWeapon_Instant.bUseBPSpawnImpactEffects" }; }
	BitFieldValue<bool, unsigned __int32> bAllowNativeWithSpawnedImpacts() { return { this, "AShooterWeapon_Instant.bAllowNativeWithSpawnedImpacts" }; }
	BitFieldValue<bool, unsigned __int32> bRotateTrailFXByFireDirection() { return { this, "AShooterWeapon_Instant.bRotateTrailFXByFireDirection" }; }
	BitFieldValue<bool, unsigned __int32> bAttachTrailFXToFirstPersonMuzzle() { return { this, "AShooterWeapon_Instant.bAttachTrailFXToFirstPersonMuzzle" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetCurrentSpread() { return { this, "AShooterWeapon_Instant.bUseBPGetCurrentSpread" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPKillImpactEffects() { return { this, "AShooterWeapon_Instant.bUseBPKillImpactEffects" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Instant"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_Instant();
	float WeaponTraceForHits(TArray<FHitResult, TSizedDefaultAllocator<32> >* HitResults, TArray<bool, TSizedDefaultAllocator<32> >* IsEntryHit, const UE::Math::TVector<double>* StartTrace, const UE::Math::TVector<double>* EndTrace, bool FilterVisuals) { return NativeCall<float, TArray<FHitResult, TSizedDefaultAllocator<32> >*, TArray<bool, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, bool>(this, "AShooterWeapon_Instant.WeaponTraceForHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", HitResults, IsEntryHit, StartTrace, EndTrace, FilterVisuals); }
	int ComputeAmountOfHitsToProcess(const TArray<FHitResult, TSizedDefaultAllocator<32> >* UseImpacts, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >* UseShootDirs) { return NativeCall<int, const TArray<FHitResult, TSizedDefaultAllocator<32> >*, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Instant.ComputeAmountOfHitsToProcess(TArray<FHitResult,TSizedDefaultAllocator<32>>*,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>*)", UseImpacts, UseShootDirs); }
	void OnBurstFinished() { NativeCall<void>(this, "AShooterWeapon_Instant.OnBurstFinished()"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Instant.FireWeapon()"); }
	void CheckRefireTimer() { NativeCall<void>(this, "AShooterWeapon_Instant.CheckRefireTimer()"); }
	void NetSimulateForceShot_Implementation(UE::Math::TVector<double>* ShotOrigin, UE::Math::TVector<double>* ShootDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Instant.NetSimulateForceShot_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", ShotOrigin, ShootDir); }
	void ServerNotifyShot_Implementation(const TArray<FHitResult, TSizedDefaultAllocator<32> >* Impacts, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >* ShootDirs) { NativeCall<void, const TArray<FHitResult, TSizedDefaultAllocator<32> >*, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Instant.ServerNotifyShot_Implementation(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", Impacts, ShootDirs); }
	void ServerNotifyShotOrigin_Implementation(UE::Math::TVector<double>* Origin, const TArray<FHitResult, TSizedDefaultAllocator<32> >* Impacts, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >* ShootDirs) { NativeCall<void, UE::Math::TVector<double>*, const TArray<FHitResult, TSizedDefaultAllocator<32> >*, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Instant.ServerNotifyShotOrigin_Implementation(UE::Math::TVector<double>,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", Origin, Impacts, ShootDirs); }
	void ServerProcessShotsInternal(const TArray<FHitResult, TSizedDefaultAllocator<32> >* Impacts, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >* ShootDirs) { NativeCall<void, const TArray<FHitResult, TSizedDefaultAllocator<32> >*, const TArray<FVector_NetQuantizeNormal, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Instant.ServerProcessShotsInternal(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", Impacts, ShootDirs); }
	void ProcessInstantHit_Confirmed(const FHitResult* Impact, const UE::Math::TVector<double>* Origin, const UE::Math::TVector<double>* ShootDir) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "AShooterWeapon_Instant.ProcessInstantHit_Confirmed(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Impact, Origin, ShootDir); }
	float GetCurrentSpread() { return NativeCall<float>(this, "AShooterWeapon_Instant.GetCurrentSpread()"); }
	void SimulateInstantHit_Implementation(UE::Math::TVector<double>* ShotOrigin, FVector_NetQuantizeNormal* ShootDir, bool bForceOnLocal, int ShotIndex) { NativeCall<void, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, bool, int>(this, "AShooterWeapon_Instant.SimulateInstantHit_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool,int)", ShotOrigin, ShootDir, bForceOnLocal, ShotIndex); }
	void SpawnImpactEffects(const FHitResult* Impact, const UE::Math::TVector<double>* ShootDir, bool bIsEntryHit, float WeaponMaxRange) { NativeCall<void, const FHitResult*, const UE::Math::TVector<double>*, bool, float>(this, "AShooterWeapon_Instant.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&,bool,float)", Impact, ShootDir, bIsEntryHit, WeaponMaxRange); }
	void SpawnTrailEffect(const UE::Math::TVector<double>* EndPoint, const UE::Math::TVector<double>* StartPoint) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "AShooterWeapon_Instant.SpawnTrailEffect(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FColor&)", EndPoint, StartPoint); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Instant"); }

	UNiagaraSystem*& TrailFX_NiagaraField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_Instant.TrailFX_Niagara"); }
	UNiagaraSystem*& TrailFX_Local_NiagaraField() { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon_Instant.TrailFX_Local_Niagara"); }
	BitFieldValue<bool, unsigned char> bAlwaysSpawnTrailAtMuzzleLoc() { return { this, "AShooterWeapon_Instant.bAlwaysSpawnTrailAtMuzzleLoc"}; }
	void BPPostSpawnTrailEffect(UParticleSystemComponent* TrailPSC, const UE::Math::TVector<double>& StartPoint, const UE::Math::TVector<double>& EndPoint) { NativeCall<void, UParticleSystemComponent*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterWeapon_Instant.BPPostSpawnTrailEffect(UParticleSystemComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", TrailPSC, StartPoint, EndPoint); }
	void NetSpawnShotEffects_Implementation(UE::Math::TVector<double>* ShotOrigin, const FHitResult& Impact, FColor Color) { if (!ShotOrigin) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, const FHitResult &, FColor>(this, "AShooterWeapon_Instant.NetSpawnShotEffects_Implementation(UE::Math::TVector<double>,FHitResult&,FColor)", *ShotOrigin, Impact, Color); }
	UE::Math::TVector<double>* GetFireLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Instant.GetFireLocation()", result); }
	void ServerForceShot(const FHitResult& Impact, const UE::Math::TVector<double>& StartShotLoc, const UE::Math::TVector<double>& EndShotLoc) { NativeCall<void, const FHitResult&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AShooterWeapon_Instant.ServerForceShot(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Impact, StartShotLoc, EndShotLoc); }
	void BPKillImpactEffects() { NativeCall<void>(this, "AShooterWeapon_Instant.BPKillImpactEffects()"); }
	void GetFireLocationAndDirection(UE::Math::TVector<double>& OutLocation, UE::Math::TVector<double>& OutDirection) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "AShooterWeapon_Instant.GetFireLocationAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OutLocation, OutDirection); }
	void NetSpawnShotEffects(UE::Math::TVector<double>* ShotOrigin, const FHitResult& Impact, FColor Color) { if (!ShotOrigin) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, const FHitResult &, FColor>(this, "AShooterWeapon_Instant.NetSpawnShotEffects(UE::Math::TVector<double>,FHitResult&,FColor)", *ShotOrigin, Impact, Color); }
	void BPSpawnImpactEffects(const FHitResult& Impact, const UE::Math::TVector<double>& ShootDir, bool bIsEntryHit, float WeaponMaxRange) { NativeCall<void, const FHitResult&, const UE::Math::TVector<double>&, bool, float>(this, "AShooterWeapon_Instant.BPSpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&,bool,float)", Impact, ShootDir, bIsEntryHit, WeaponMaxRange); }
	float BPGetCurrentSpread() { return NativeCall<float>(this, "AShooterWeapon_Instant.BPGetCurrentSpread()"); }
	void NetSimulateForceShot(UE::Math::TVector<double>* ShotOrigin, UE::Math::TVector<double>* ShootDir) { if (!ShotOrigin) throw std::invalid_argument("Null native value parameter"); if (!ShootDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AShooterWeapon_Instant.NetSimulateForceShot(UE::Math::TVector<double>,UE::Math::TVector<double>)", *ShotOrigin, *ShootDir); }
	bool IsValidShootDirForImpact(const FHitResult& impact, const FVector_NetQuantizeNormal& shootDir) { return NativeCall<bool, const FHitResult&, const FVector_NetQuantizeNormal&>(this, "AShooterWeapon_Instant.IsValidShootDirForImpact(FHitResult&,FVector_NetQuantizeNormal&)", impact, shootDir); }
};