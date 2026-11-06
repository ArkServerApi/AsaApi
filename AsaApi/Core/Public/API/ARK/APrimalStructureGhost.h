#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructure.h"

struct APrimalStructureGhost : APrimalStructure
{
public:
	APrimalStructureGhost() = delete;
	~APrimalStructureGhost() = delete;
	APrimalStructureGhost(const APrimalStructureGhost&) = delete;
	APrimalStructureGhost& operator=(const APrimalStructureGhost&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureGhost"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureGhost"); }



	bool IsPrimalStructureTurretBallista() { return NativeCall<bool>(this, "APrimalStructureGhost.IsPrimalStructureTurretBallista()"); }
	void DelayedHideGhost() { NativeCall<void>(this, "APrimalStructureGhost.DelayedHideGhost()"); }
	static void ToggleGhostVisibility(AShooterPlayerController* PC, bool DoHide) { NativeCall<void, AShooterPlayerController*, bool>(nullptr, "APrimalStructureGhost.ToggleGhostVisibility(AShooterPlayerController*,bool)", PC, DoHide); }
	void CreateGhostPreview() { NativeCall<void>(this, "APrimalStructureGhost.CreateGhostPreview()"); }
	bool IsUnderwaterBase_Implementation() { return NativeCall<bool>(this, "APrimalStructureGhost.IsUnderwaterBase_Implementation()"); }
	void DelayedCreatePreview() { NativeCall<void>(this, "APrimalStructureGhost.DelayedCreatePreview()"); }
	void TryCreateGhostPreview() { NativeCall<void>(this, "APrimalStructureGhost.TryCreateGhostPreview()"); }
	void ConvertToTemplate(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureGhost.ConvertToTemplate(AShooterPlayerController*)", ForPC); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureGhost.BeginPlay()"); }
	UClass* GetActualClass() { return NativeCall<UClass*>(this, "APrimalStructureGhost.GetActualClass()"); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureGhost.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void SetStructureCollisionChannels(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "APrimalStructureGhost.SetStructureCollisionChannels(bool)", bUpdateOverlaps); }
	void OnRep_GhostData() { NativeCall<void>(this, "APrimalStructureGhost.OnRep_GhostData()"); }
	bool IsGhostStructure() { return NativeCall<bool>(this, "APrimalStructureGhost.IsGhostStructure()"); }
	bool IsPrimalStructureTurret() { return NativeCall<bool>(this, "APrimalStructureGhost.IsPrimalStructureTurret()"); }

	void AddGhostMeshComp(UStaticMesh* StaticMesh, USkeletalMesh* SkelMesh, UE::Math::TVector<double>* Loc, UE::Math::TRotator<double>* Rot, UE::Math::TVector<double>* Scale, TArray<UMeshComponent*, TSizedDefaultAllocator<32> >& RealMeshes, TArray<UMeshComponent*, TSizedDefaultAllocator<32> >& PreviewMeshes) { if (!Loc) throw std::invalid_argument("Null native value parameter"); if (!Rot) throw std::invalid_argument("Null native value parameter"); if (!Scale) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UStaticMesh *, USkeletalMesh *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TVector < double >, TArray < UMeshComponent * , TSizedDefaultAllocator < 32 > > &, TArray < UMeshComponent * , TSizedDefaultAllocator < 32 > > &>(this, "APrimalStructureGhost.AddGhostMeshComp(UStaticMesh*,USkeletalMesh*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&,TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&)", StaticMesh, SkelMesh, *Loc, *Rot, *Scale, RealMeshes, PreviewMeshes); }
	const FPrimalStructureSparseClassData* GetEffectiveSparseClassData() { return NativeCall<const FPrimalStructureSparseClassData*>(this, "APrimalStructureGhost.GetEffectiveSparseClassData()"); }
	bool CheckAdditionalStructureTag_Implementation(FName TagToCheck) { return NativeCall<bool, FName>(this, "APrimalStructureGhost.CheckAdditionalStructureTag_Implementation(FName)", TagToCheck); }
};
