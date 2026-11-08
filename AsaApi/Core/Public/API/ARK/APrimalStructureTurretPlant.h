#pragma once
#include "BulkForward.h"


struct APrimalStructureTurretPlant : APrimalStructureTurret
{
    // Fields

    TArray<FName, TSizedDefaultAllocator<32> >& PlantMuzzleSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretPlant.PlantMuzzleSockets"); }
    TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& PlantAttackAnimsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTurretPlant.PlantAttackAnims"); }
    float& PlantHealthRecoverPerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.PlantHealthRecoverPerSec"); }
    float& AmountOfFertilizerToUsePerShotField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.AmountOfFertilizerToUsePerShot"); }
    float& HealthRecoverPerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.HealthRecoverPerSec"); }
    APrimalStructureItemContainer_CropPlot*& OwnerCropPlotField() { return *GetNativePointerField<APrimalStructureItemContainer_CropPlot**>(this, "APrimalStructureTurretPlant.OwnerCropPlot"); }
    FTimerHandle& RecoverHealthTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTurretPlant.RecoverHealthTimerHandle"); }
    FName& AttackOriginSocketField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretPlant.AttackOriginSocket"); }
    UE::Math::TVector<double>& AttackOriginLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureTurretPlant.AttackOriginLocation"); }
    UE::Math::TRotator<double>& AttackOriginRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureTurretPlant.AttackOriginRotation"); }
    int& SelectedAttackOriginField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretPlant.SelectedAttackOrigin"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTurretPlant"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureTurretPlant();
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretPlant.BeginPlay()"); }
    void SetHealthRecoveryTimer() { NativeCall<void>(this, "APrimalStructureTurretPlant.SetHealthRecoveryTimer()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTurretPlant.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTurretPlant.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void RecoverHealthTimer() { NativeCall<void>(this, "APrimalStructureTurretPlant.RecoverHealthTimer()"); }
    bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurretPlant.CanFire()"); }
    void SelectAttackOrigin(const UE::Math::TVector<double>* TargetPosition) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APrimalStructureTurretPlant.SelectAttackOrigin(UE::Math::TVector<double>&)", TargetPosition); }
    void PlayShootAnim() { NativeCall<void>(this, "APrimalStructureTurretPlant.PlayShootAnim()"); }
    FName* GetMuzzleFlashSocketName(FName* result) { return NativeCall<FName*, FName*>(this, "APrimalStructureTurretPlant.GetMuzzleFlashSocketName()", result); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureTurretPlant.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureTurretPlant.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void Stasis() { NativeCall<void>(this, "APrimalStructureTurretPlant.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureTurretPlant.Unstasis()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTurretPlant"); }

	UE::Math::TVector<double>* GetMuzzleLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTurretPlant.GetMuzzleLocation()", result); }
	int IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, FPlacementData& OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double>* PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData, APawn* BuildingCharacterOverride) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); if (!PlayerViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<int, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, FPlacementData &, bool, UE :: Math :: TRotator < double >, bool, bool, APawn *>(this, "APrimalStructureTurretPlant.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", PC, *AtLocation, *AtRotation, OutPlacementData, bDontAdjustForMaxRange, *PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData, BuildingCharacterOverride); }
	UE::Math::TRotator<double>* GetMuzzleRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureTurretPlant.GetMuzzleRotation()", result); }
};