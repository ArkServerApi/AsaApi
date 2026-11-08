#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "AShooterWeapon_Projectile.h"

struct AShooterWeapon_ChargeStack : AShooterWeapon_Projectile
{
public:
	AShooterWeapon_ChargeStack() = delete;
	~AShooterWeapon_ChargeStack() = delete;
	AShooterWeapon_ChargeStack(const AShooterWeapon_ChargeStack&) = delete;
	AShooterWeapon_ChargeStack& operator=(const AShooterWeapon_ChargeStack&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_ChargeStack"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_ChargeStack"); }

	int& ChargeStacksMaxField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.ChargeStacksMax"); }
	float& ChargeStackRechargeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_ChargeStack.ChargeStackRechargeSeconds"); }
	int& FireCostItemQuantityField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_ChargeStack.FireCostItemQuantity"); }

	int BPGetChargeStacksMax() { return NativeCall<int>(this, "AShooterWeapon_ChargeStack.BPGetChargeStacksMax()"); }
	void WriteChargeStackState(int InCurrentStacks, double InFullRechargeTime) { NativeCall<void, int, double>(this, "AShooterWeapon_ChargeStack.WriteChargeStackState(int,double)", InCurrentStacks, InFullRechargeTime); }
	void BPOnMissingFireCostItem() { NativeCall<void>(this, "AShooterWeapon_ChargeStack.BPOnMissingFireCostItem()"); }
	float BPGetChargeStackRechargeSeconds_Implementation() { return NativeCall<float>(this, "AShooterWeapon_ChargeStack.BPGetChargeStackRechargeSeconds_Implementation()"); }
	void BPOnChargeStacksCharged(int PreviousStacks, int NewStacks) { NativeCall<void, int, int>(this, "AShooterWeapon_ChargeStack.BPOnChargeStacksCharged(int,int)", PreviousStacks, NewStacks); }
	double GetChargeStackNow() { return NativeCall<double>(this, "AShooterWeapon_ChargeStack.GetChargeStackNow()"); }
	float BPGetChargeStackRechargeSeconds() { return NativeCall<float>(this, "AShooterWeapon_ChargeStack.BPGetChargeStackRechargeSeconds()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_ChargeStack.Tick(float)", DeltaSeconds); }
	int BPGetChargeStacksMax_Implementation() { return NativeCall<int>(this, "AShooterWeapon_ChargeStack.BPGetChargeStacksMax_Implementation()"); }
	void UpdateChargeStackProjectileState(int PreviousAmmoInClip) { NativeCall<void, int>(this, "AShooterWeapon_ChargeStack.UpdateChargeStackProjectileState(int)", PreviousAmmoInClip); }
	void ClientSyncChargeStackState(int NewCurrentStacks, double NewFullRechargeTime) { NativeCall<void, int, double>(this, "AShooterWeapon_ChargeStack.ClientSyncChargeStackState(int,double)", NewCurrentStacks, NewFullRechargeTime); }
	void OnEquip() { NativeCall<void>(this, "AShooterWeapon_ChargeStack.OnEquip()"); }
	bool BPTryFireWeapon_Implementation() { return NativeCall<bool>(this, "AShooterWeapon_ChargeStack.BPTryFireWeapon_Implementation()"); }
	void HandleFiring(bool bSentFromClient) { NativeCall<void, bool>(this, "AShooterWeapon_ChargeStack.HandleFiring(bool)", bSentFromClient); }
	void ClientSyncChargeStackState_Implementation(int NewCurrentStacks, double NewFullRechargeTime) { NativeCall<void, int, double>(this, "AShooterWeapon_ChargeStack.ClientSyncChargeStackState_Implementation(int,double)", NewCurrentStacks, NewFullRechargeTime); }

	FName& StoredCooldownPerClassNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_ChargeStack.StoredCooldownPerClassName"); }
	void SyncCurrentChargeStacks(double Now, int* OutCurrentStacks, double* OutFullRechargeTime) { NativeCall<void, double, int*, double*>(this, "AShooterWeapon_ChargeStack.SyncCurrentChargeStacks(double,int*,double*)", Now, OutCurrentStacks, OutFullRechargeTime); }
	void ResolveChargeStackState(double Now, double FullRechargeTime, int& OutCurrentStacks, float& OutCurrentProgress) { NativeCall<void, double, double, int&, float&>(this, "AShooterWeapon_ChargeStack.ResolveChargeStackState(double,double,int&,float&)", Now, FullRechargeTime, OutCurrentStacks, OutCurrentProgress); }
	void GetChargeStacksHUDData(int& OutCurrentStacks, float& OutCurrentProgress, TArray<float, TSizedDefaultAllocator<32> >& OutProgressArray) { NativeCall<void, int&, float&, TArray<float, TSizedDefaultAllocator<32> >&>(this, "AShooterWeapon_ChargeStack.GetChargeStacksHUDData(int&,float&,TArray<float,TSizedDefaultAllocator<32>>&)", OutCurrentStacks, OutCurrentProgress, OutProgressArray); }
};
