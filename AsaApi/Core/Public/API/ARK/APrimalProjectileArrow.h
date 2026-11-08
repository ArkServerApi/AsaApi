#pragma once
#include "BulkForward.h"


struct APrimalProjectileArrow : AShooterProjectile
{
	// Fields

	float& PickUpRadiusField() { return *GetNativePointerField<float*>(this, "APrimalProjectileArrow.PickUpRadius"); }
	TSubclassOf<UPrimalItem>& PickupItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalProjectileArrow.PickupItemClass"); }
	int& PickUpQuantityField() { return *GetNativePointerField<int*>(this, "APrimalProjectileArrow.PickUpQuantity"); }
	float& PercentChanceToBreakOnImpactField() { return *GetNativePointerField<float*>(this, "APrimalProjectileArrow.PercentChanceToBreakOnImpact"); }
	TSubclassOf<UPrimalItem>& PickItemClassApplySkinField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalProjectileArrow.PickItemClassApplySkin"); }
	USoundBase*& ArrowPickedUpSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalProjectileArrow.ArrowPickedUpSound"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalProjectileArrow"); }
	void PickedUp(AShooterCharacter* ByCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalProjectileArrow.PickedUp(AShooterCharacter*)", ByCharacter); }
	void PickUpCheck() { NativeCall<void>(this, "APrimalProjectileArrow.PickUpCheck()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalProjectileArrow();
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileArrow.BeginPlay()"); }
	void OnImpact_Implementation(const FHitResult* HitResult, bool bFromReplication) { NativeCall<void, const FHitResult*, bool>(this, "APrimalProjectileArrow.OnImpact_Implementation(FHitResult&,bool)", HitResult, bFromReplication); }
	void PickUpCheck_Implementation() { NativeCall<void>(this, "APrimalProjectileArrow.PickUpCheck_Implementation()"); }
	void PickedUp_Implementation(AShooterCharacter* ByCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalProjectileArrow.PickedUp_Implementation(AShooterCharacter*)", ByCharacter); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalProjectileArrow"); }

	FTimerHandle& ArrowPickupTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalProjectileArrow.ArrowPickupTimerHandle"); }
	void ClearPickupItemClass() { NativeCall<void>(this, "APrimalProjectileArrow.ClearPickupItemClass()"); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "APrimalProjectileArrow.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
};