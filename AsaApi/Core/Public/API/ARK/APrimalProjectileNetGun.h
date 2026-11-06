#pragma once
#include "BulkForward.h"


struct APrimalProjectileNetGun : APrimalProjectileArrow
{
	// Fields

	USkeletalMeshComponent*& SkeletalMeshCompField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalProjectileNetGun.SkeletalMeshComp"); }
	TSubclassOf<APrimalBuff>& BuffToApplyToLightCharactersField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalProjectileNetGun.BuffToApplyToLightCharacters"); }
	TSubclassOf<APrimalBuff>& BuffToApplyToHeavyCharactersField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalProjectileNetGun.BuffToApplyToHeavyCharacters"); }
	float& MaxDinoMassToInmovilizeField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.MaxDinoMassToInmovilize"); }
	//TArray<FManagedBoneSetup, TSizedDefaultAllocator<32> >& ManagedBonesField() { return *GetNativePointerField<TArray<FManagedBoneSetup, TSizedDefaultAllocator<32> >*>(this, "APrimalProjectileNetGun.ManagedBones"); }
	float& OnInpactMaxTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.OnInpactMaxTraceDistance"); }
	float& DissolveTimeField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.DissolveTime"); }
	TMap<FName, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TVector<double>, 0> >& ManagedBoneLocationsField() { return *GetNativePointerField<TMap<FName, UE::Math::TVector<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TVector<double>, 0> >*>(this, "APrimalProjectileNetGun.ManagedBoneLocations"); }
	TMap<FName, UE::Math::TRotator<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TRotator<double>, 0> >& ManagedBoneRotationsField() { return *GetNativePointerField<TMap<FName, UE::Math::TRotator<double>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UE::Math::TRotator<double>, 0> >*>(this, "APrimalProjectileNetGun.ManagedBoneRotations"); }
	UMaterialInstanceDynamic*& DynamicMaterialField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalProjectileNetGun.DynamicMaterial"); }
	float& DissolveTimeFXField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.DissolveTimeFX"); }

	// Bitfields

	// Functions

	void StartDissolveFX() { NativeCall<void>(this, "APrimalProjectileNetGun.StartDissolveFX()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalProjectileNetGun"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalProjectileNetGun();
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileNetGun.BeginPlay()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileNetGun.Tick(float)", DeltaSeconds); }
	void OnImpact_Implementation(const FHitResult* HitResult, bool bFromReplication) { NativeCall<void, const FHitResult*, bool>(this, "APrimalProjectileNetGun.OnImpact_Implementation(FHitResult&,bool)", HitResult, bFromReplication); }
	void CalculateBonePositions() { NativeCall<void>(this, "APrimalProjectileNetGun.CalculateBonePositions()"); }

	bool& bStartDissolveFXField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileNetGun.bStartDissolveFX"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalProjectileNetGun"); }

	void GetManagedBoneLocationsAndRotations(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Locations, TArray<UE::Math::TRotator<double>, TSizedDefaultAllocator<32> >& Rotations) { NativeCall<void, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, TArray<UE::Math::TRotator<double>, TSizedDefaultAllocator<32> >&>(this, "APrimalProjectileNetGun.GetManagedBoneLocationsAndRotations(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>>&)", Locations, Rotations); }
	UE::Math::TRotator<double>* GetManagedBoneRotation(UE::Math::TRotator<double>* result, FName InBoneName) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, FName>(this, "APrimalProjectileNetGun.GetManagedBoneRotation(FName)", result, InBoneName); }
	UE::Math::TVector<double>* GetManagedBoneLocation(UE::Math::TVector<double>* result, FName InBoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "APrimalProjectileNetGun.GetManagedBoneLocation(FName)", result, InBoneName); }
};