#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_WindTunnel : APrimalBuff
{
public:
	APrimalBuff_WindTunnel() = delete;
	~APrimalBuff_WindTunnel() = delete;
	APrimalBuff_WindTunnel(const APrimalBuff_WindTunnel&) = delete;
	APrimalBuff_WindTunnel& operator=(const APrimalBuff_WindTunnel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_WindTunnel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_WindTunnel"); }

	float& CaptureDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_WindTunnel.CaptureDistance"); }
	float& DriftPhaseField() { return *GetNativePointerField<float*>(this, "APrimalBuff_WindTunnel.DriftPhase"); }
	float& DiveTopSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_WindTunnel.DiveTopSpeed"); }
	float& NotCarriedSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_WindTunnel.NotCarriedSeconds"); }
	float& CameraAssistPauseSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_WindTunnel.CameraAssistPauseSeconds"); }
	bool& bHasLastAssistRotationField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_WindTunnel.bHasLastAssistRotation"); }
	bool& bRailCameraStartedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_WindTunnel.bRailCameraStarted"); }
	float& RailCameraDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_WindTunnel.RailCameraDistance"); }

	bool IsValidAndActive() { return NativeCall<bool>(this, "APrimalBuff_WindTunnel.IsValidAndActive()"); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_WindTunnel.SetupForInstigator()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff_WindTunnel.Tick(float)", DeltaSeconds); }
	void Deactivate() { NativeCall<void>(this, "APrimalBuff_WindTunnel.Deactivate()"); }
	void SetTunnelData(AWindBoosterTunnel* InTunnel) { NativeCall<void, AWindBoosterTunnel*>(this, "APrimalBuff_WindTunnel.SetTunnelData(AWindBoosterTunnel*)", InTunnel); }

	TWeakObjectPtr<AWindBoosterTunnel, FWeakObjectPtr>& SourceTunnelField() { return *GetNativePointerField<TWeakObjectPtr<AWindBoosterTunnel, FWeakObjectPtr>*>(this, "APrimalBuff_WindTunnel.SourceTunnel"); }
	UE::Math::TRotator<double>& LastAssistRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalBuff_WindTunnel.LastAssistRotation"); }
	UE::Math::TVector<double>& LastReferenceDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_WindTunnel.LastReferenceDirection"); }
	UE::Math::TVector<double>& RailCameraAcrossField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_WindTunnel.RailCameraAcross"); }
	static void SetCaptureDistance_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_WindTunnel.SetCaptureDistance_WrapperImpl(void*,void*)", Object, InValue); }
	void UpdateCameraAssist(APrimalDinoCharacter& Dragon, const UDracoFlightMovementComponent& FlightComp, const FWindTunnelRideSample& Ride, float DeltaSeconds) { NativeCall<void, APrimalDinoCharacter&, const UDracoFlightMovementComponent&, const FWindTunnelRideSample&, float>(this, "APrimalBuff_WindTunnel.UpdateCameraAssist(APrimalDinoCharacter&,UDracoFlightMovementComponent&,FWindTunnelRideSample&,float)", Dragon, FlightComp, Ride, DeltaSeconds); }
	float GetCarryHold(UE::Math::TVector<double>* OutTunnelDirection) { return NativeCall<float, UE::Math::TVector<double>*>(this, "APrimalBuff_WindTunnel.GetCarryHold(UE::Math::TVector<double>*)", OutTunnelDirection); }
	static void SetSourceTunnel_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_WindTunnel.SetSourceTunnel_WrapperImpl(void*,void*)", Object, InValue); }
	void GetRideCenterline(float RideDistance, UE::Math::TVector<double>& OutLocation, UE::Math::TVector<double>& OutDirection) { NativeCall<void, float, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "APrimalBuff_WindTunnel.GetRideCenterline(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", RideDistance, OutLocation, OutDirection); }
	bool IsBeforeCarryEnd(const FWindTunnelRideSample& Ride) { return NativeCall<bool, const FWindTunnelRideSample&>(this, "APrimalBuff_WindTunnel.IsBeforeCarryEnd(FWindTunnelRideSample&)", Ride); }
	AWindBoosterTunnel* GetActiveNextTunnel(const AWindBoosterTunnel& Tunnel) { return NativeCall<AWindBoosterTunnel*, const AWindBoosterTunnel&>(this, "APrimalBuff_WindTunnel.GetActiveNextTunnel(AWindBoosterTunnel&)", Tunnel); }
	UE::Math::TVector<double>* GetCameraReferenceDirection(UE::Math::TVector<double>* result, const AWindBoosterTunnel& Tunnel, float DragonRideDistance) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AWindBoosterTunnel&, float>(this, "APrimalBuff_WindTunnel.GetCameraReferenceDirection(AWindBoosterTunnel&,float)", result, Tunnel, DragonRideDistance); }
	void UpdateServerState(APrimalDinoCharacter& Dragon, UDracoFlightMovementComponent& FlightComp, const FWindTunnelRideSample& Ride, float DeltaSeconds) { NativeCall<void, APrimalDinoCharacter&, UDracoFlightMovementComponent&, const FWindTunnelRideSample&, float>(this, "APrimalBuff_WindTunnel.UpdateServerState(APrimalDinoCharacter&,UDracoFlightMovementComponent&,FWindTunnelRideSample&,float)", Dragon, FlightComp, Ride, DeltaSeconds); }
	static void GetCaptureDistance_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_WindTunnel.GetCaptureDistance_WrapperImpl(void*,void*)", Object, OutValue); }
	bool UpdateRailCamera(const UE::Math::TVector<double>& CameraFraming, const UE::Math::TRotator<double>& ViewRotation, float DeltaTime, UE::Math::TVector<double>& OutLocation) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, float, UE::Math::TVector<double>&>(this, "APrimalBuff_WindTunnel.UpdateRailCamera(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,UE::Math::TVector<double>&)", CameraFraming, ViewRotation, DeltaTime, OutLocation); }
	float ComputeRideMagnet(const FWindTunnelRideSample& Ride, const UDracoFlightMovementComponent& FlightComp, const UE::Math::TRotator<double>& ControlRotation, float LookFromRideDistance) { return NativeCall<float, const FWindTunnelRideSample&, const UDracoFlightMovementComponent&, const UE::Math::TRotator<double>&, float>(this, "APrimalBuff_WindTunnel.ComputeRideMagnet(FWindTunnelRideSample&,UDracoFlightMovementComponent&,UE::Math::TRotator<double>&,float)", Ride, FlightComp, ControlRotation, LookFromRideDistance); }
	static void SetDriftPhase_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_WindTunnel.SetDriftPhase_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetDriftPhase_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_WindTunnel.GetDriftPhase_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetDiveTopSpeed_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_WindTunnel.GetDiveTopSpeed_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetDiveTopSpeed_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_WindTunnel.SetDiveTopSpeed_WrapperImpl(void*,void*)", Object, InValue); }
	void OverrideCharacterFlyingVelocity(UE::Math::TVector<double>& InitialVelocity, const UE::Math::TVector<double>& Gravity, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "APrimalBuff_WindTunnel.OverrideCharacterFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", InitialVelocity, Gravity, DeltaTime); }
	float ComputeRideHold(const FWindTunnelRideSample& Ride, const UDracoFlightMovementComponent& FlightComp, const UE::Math::TRotator<double>& ControlRotation) { return NativeCall<float, const FWindTunnelRideSample&, const UDracoFlightMovementComponent&, const UE::Math::TRotator<double>&>(this, "APrimalBuff_WindTunnel.ComputeRideHold(FWindTunnelRideSample&,UDracoFlightMovementComponent&,UE::Math::TRotator<double>&)", Ride, FlightComp, ControlRotation); }
};
