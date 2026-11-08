#pragma once
#include "BulkForward.h"


struct AShooterWeapon_InstantCharging : AShooterWeapon_Instant
{
	// Fields

	long double& ChargeStartTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_InstantCharging.ChargeStartTime"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDidFireWeapon() { return { this, "AShooterWeapon_InstantCharging.bDidFireWeapon" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_InstantCharging"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_InstantCharging();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_InstantCharging.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_InstantCharging.StartFire(bool)", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_InstantCharging.StopFire()"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_InstantCharging.FireWeapon()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_InstantCharging.Tick(float)", DeltaSeconds); }
	void ServerSetCharging_Implementation(long double StartTime) { NativeCall<void, long double>(this, "AShooterWeapon_InstantCharging.ServerSetCharging_Implementation(double)", StartTime); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_InstantCharging"); }

	void ServerSetCharging(double StartTime) { NativeCall<void, double>(this, "AShooterWeapon_InstantCharging.ServerSetCharging(double)", StartTime); }
	static void SetChargeStartTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_InstantCharging.SetChargeStartTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetChargeStartTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_InstantCharging.GetChargeStartTime_WrapperImpl(void*,void*)", Object, OutValue); }
};