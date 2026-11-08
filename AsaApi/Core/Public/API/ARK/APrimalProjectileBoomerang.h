#pragma once
#include "BulkForward.h"


struct APrimalProjectileBoomerang : APrimalProjectileArrow
{
	// Fields

	USceneComponent*& RotationPointField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalProjectileBoomerang.RotationPoint"); }
	float& MaxDistanceToTravelField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.MaxDistanceToTravel"); }
	float& ReturnTimeToInstigatorField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnTimeToInstigator"); }
	float& ElapsedTimeToInstigatorField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ElapsedTimeToInstigator"); }
	float& SqrDesideredTravelDistanceField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.SqrDesideredTravelDistance"); }
	UE::Math::TVector<double>& P0Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileBoomerang.P0"); }
	UE::Math::TVector<double>& P1Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileBoomerang.P1"); }
	UE::Math::TVector<double>& P2Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileBoomerang.P2"); }
	UE::Math::TVector<double>& P3Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileBoomerang.P3"); }
	UE::Math::TVector<double>& NextPointToReachField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileBoomerang.NextPointToReach"); }
	UE::Math::TVector<double>& StartPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileBoomerang.StartPosition"); }
	bool& bIsFollowingInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileBoomerang.bIsFollowingInstigator"); }
	TWeakObjectPtr<APrimalCharacter>& InstigatorCharacterReferenceField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter>*>(this, "APrimalProjectileBoomerang.InstigatorCharacterReference"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& HitHurtListField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalProjectileBoomerang.HitHurtList"); }
	float& ReturnFirstPointTravelDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnFirstPointTravelDistanceMultiplier"); }
	float& ReturnSecondPointTravelDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnSecondPointTravelDistanceMultiplier"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalProjectileBoomerang"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileBoomerang.BeginPlay()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileBoomerang.Tick(float)", DeltaSeconds); }
	void OnImpact_Implementation(const FHitResult* HitResult, bool bFromReplication) { NativeCall<void, const FHitResult*, bool>(this, "APrimalProjectileBoomerang.OnImpact_Implementation(FHitResult&,bool)", HitResult, bFromReplication); }
	void Explode_Implementation(const FHitResult* Impact) { NativeCall<void, const FHitResult*>(this, "APrimalProjectileBoomerang.Explode_Implementation(FHitResult&)", Impact); }
	void ReturnToOwner(bool bFollowInstigator) { NativeCall<void, bool>(this, "APrimalProjectileBoomerang.ReturnToOwner(bool)", bFollowInstigator); }
	void PickUpCheck_Implementation() { NativeCall<void>(this, "APrimalProjectileBoomerang.PickUpCheck_Implementation()"); }
	void PickedUp_Implementation(AShooterCharacter* ByCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalProjectileBoomerang.PickedUp_Implementation(AShooterCharacter*)", ByCharacter); }

	bool& bIsReturningToInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileBoomerang.bIsReturningToInstigator"); }

	FTimerHandle& BoomerangPickupTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalProjectileBoomerang.BoomerangPickupTimerHandle"); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "APrimalProjectileBoomerang.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalProjectileBoomerang"); }
};