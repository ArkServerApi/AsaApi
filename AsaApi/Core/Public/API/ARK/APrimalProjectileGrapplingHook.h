#pragma once
#include "BulkForward.h"


struct APrimalProjectileGrapplingHook : AShooterProjectile
{
	// Fields

	UE::Math::TVector<double>& GrapHookEndPointOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileGrapplingHook.GrapHookEndPointOffset"); }
	float& MaximumRopeDistanceField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.MaximumRopeDistance"); }
	float& PullingStrengthField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.PullingStrength"); }
	float& ReleaseRopeSpeedField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.ReleaseRopeSpeed"); }
	float& MaxPullMassOverrideField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.MaxPullMassOverride"); }
	float& DetachGrapHookLifespanField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.DetachGrapHookLifespan"); }
	UE::Math::TVector<double>& GrapHookDefaultOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalProjectileGrapplingHook.GrapHookDefaultOffset"); }
	UMaterialInterface*& GrapHookMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalProjectileGrapplingHook.GrapHookMaterial"); }
	float& GrapHookCableWidthOverrideField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.GrapHookCableWidthOverride"); }
	bool& bAllowPullFleeingField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileGrapplingHook.bAllowPullFleeing"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalProjectileGrapplingHook"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileGrapplingHook.BeginPlay()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileGrapplingHook.Tick(float)", DeltaSeconds); }

	bool& bAllowPullSleepingField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileGrapplingHook.bAllowPullSleeping"); }

	UE::Math::TVector<double>* GetGrapHookEndPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalProjectileGrapplingHook.GetGrapHookEndPoint()", result); }
	void BPHandleCharacterTriesToCutGrapplingCable(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "APrimalProjectileGrapplingHook.BPHandleCharacterTriesToCutGrapplingCable(APrimalCharacter*)", Character); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalProjectileGrapplingHook"); }
};