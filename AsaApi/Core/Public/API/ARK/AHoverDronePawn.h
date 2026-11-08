#pragma once
#include "BulkForward.h"


struct AHoverDronePawn : AHoverDronePawnBase
{
	// Fields

	bool& bAllowSpeedChangeField() { return *GetNativePointerField<bool*>(this, "AHoverDronePawn.bAllowSpeedChange"); }
	//FIIRInterpolatorRotator& DroneTiltInterpolatorField() { return *GetNativePointerField<FIIRInterpolatorRotator*>(this, "AHoverDronePawn.DroneTiltInterpolator"); }
	UE::Math::TVector<double>& TiltUpVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AHoverDronePawn.TiltUpVector"); }
	UE::Math::TRotator<double>& TiltLimitsField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AHoverDronePawn.TiltLimits"); }
	UE::Math::TRotator<double>& LastTiltedDroneRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AHoverDronePawn.LastTiltedDroneRot"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHoverDronePawn"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAHoverDronePawn();
	void SetupPlayerInputComponent(UInputComponent* InInputComponent) { NativeCall<void, UInputComponent*>(this, "AHoverDronePawn.SetupPlayerInputComponent(UInputComponent*)", InInputComponent); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "AHoverDronePawn.MoveForward(float)", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "AHoverDronePawn.MoveRight(float)", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "AHoverDronePawn.MoveUp(float)", Val); }
	void TurnAccel(float Val) { NativeCall<void, float>(this, "AHoverDronePawn.TurnAccel(float)", Val); }
	void LookUpAccel(float Val) { NativeCall<void, float>(this, "AHoverDronePawn.LookUpAccel(float)", Val); }
	void BeginLookat() { NativeCall<void>(this, "AHoverDronePawn.BeginLookat()"); }
	//     int GetDroneSpeedIndex() { return NativeCall<int>(this, "AHoverDronePawn.GetDroneSpeedIndex()"); }
	// FUNCTION MISSING: AHoverDronePawn.GetDroneSpeedIndex()

	static UClass* StaticClass() { return AsaApi::ResolveClass("AHoverDronePawn"); }

	bool& bIsTiltingEnabledField() { return *GetNativePointerField<bool*>(this, "AHoverDronePawn.bIsTiltingEnabled"); }
	bool& bConstrainMovementToXYPlaneField() { return *GetNativePointerField<bool*>(this, "AHoverDronePawn.bConstrainMovementToXYPlane"); }
	FIIRInterpolatorRotator& DroneTiltInterpolatorField() { return *GetNativePointerField<FIIRInterpolatorRotator*>(this, "AHoverDronePawn.DroneTiltInterpolator"); }
	bool& bEnableTiltLimitsField() { return *GetNativePointerField<bool*>(this, "AHoverDronePawn.bEnableTiltLimits"); }
	UE::Math::TRotator<double>* GetTiltedDroneRotation(UE::Math::TRotator<double>* result, float DeltaTime) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float>(this, "AHoverDronePawn.GetTiltedDroneRotation(float)", result, DeltaTime); }
	void MoveUp_World(float Val) { NativeCall<void, float>(this, "AHoverDronePawn.MoveUp_World(float)", Val); }
	UE::Math::TRotator<double>* GetViewRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AHoverDronePawn.GetViewRotation()", result); }
};