#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPawnSensingComponent : public UActorComponent
{
public:
	UPawnSensingComponent() = delete;
	~UPawnSensingComponent() = delete;
	UPawnSensingComponent(const UPawnSensingComponent&) = delete;
	UPawnSensingComponent& operator=(const UPawnSensingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPawnSensingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPawnSensingComponent"); }

	float& HearingThresholdField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.HearingThreshold"); }
	float& LOSHearingThresholdField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.LOSHearingThreshold"); }
	float& SightRadiusField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.SightRadius"); }
	float& SensingIntervalField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.SensingInterval"); }
	float& HearingMaxSoundAgeField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.HearingMaxSoundAge"); }
	FTimerHandle& TimerHandle_OnTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "UPawnSensingComponent.TimerHandle_OnTimer"); }
	float& PeripheralVisionAngleField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.PeripheralVisionAngle"); }
	float& PeripheralVisionCosineField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.PeripheralVisionCosine"); }
	BitFieldValue<bool, unsigned __int32> bEnableSensingUpdates() { return { this, "UPawnSensingComponent.bEnableSensingUpdates"}; }
	BitFieldValue<bool, unsigned __int32> bOnlySensePlayers() { return { this, "UPawnSensingComponent.bOnlySensePlayers"}; }
	BitFieldValue<bool, unsigned __int32> bSeePawns() { return { this, "UPawnSensingComponent.bSeePawns"}; }
	BitFieldValue<bool, unsigned __int32> bHearNoises() { return { this, "UPawnSensingComponent.bHearNoises"}; }
	void InitializeComponent() { NativeCall<void>(this, "UPawnSensingComponent.InitializeComponent()"); }
	UE::Math::TRotator<double>* GetSensorRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "UPawnSensingComponent.GetSensorRotation()", result); }
	UE::Math::TVector<double>* GetSensorLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPawnSensingComponent.GetSensorLocation()", result); }
	AController* GetSensorController() { return NativeCall<AController*>(this, "UPawnSensingComponent.GetSensorController()"); }
	bool CanSenseAnything() { return NativeCall<bool>(this, "UPawnSensingComponent.CanSenseAnything()"); }
	void UpdateAISensing() { NativeCall<void>(this, "UPawnSensingComponent.UpdateAISensing()"); }
	bool HasLineOfSightTo(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "UPawnSensingComponent.HasLineOfSightTo(AActor*)", Other); }
	void OnTimer() { NativeCall<void>(this, "UPawnSensingComponent.OnTimer()"); }
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle) { NativeCall<void, float>(this, "UPawnSensingComponent.SetPeripheralVisionAngle(float)", NewPeripheralVisionAngle); }
	void BroadcastOnHearLocalNoise(APawn& Instigator, const UE::Math::TVector<double>& Location, float Volume) { NativeCall<void, APawn&, const UE::Math::TVector<double>&, float>(this, "UPawnSensingComponent.BroadcastOnHearLocalNoise(APawn&,UE::Math::TVector<double>&,float)", Instigator, Location, Volume); }
	void SetSensingUpdatesEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UPawnSensingComponent.SetSensingUpdatesEnabled(bool)", bEnabled); }
	bool ShouldCheckVisibilityOf(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "UPawnSensingComponent.ShouldCheckVisibilityOf(APawn*)", Pawn); }
	void SetTimer(float TimeInterval) { NativeCall<void, float>(this, "UPawnSensingComponent.SetTimer(float)", TimeInterval); }
	bool ShouldCheckAudibilityOf(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "UPawnSensingComponent.ShouldCheckAudibilityOf(APawn*)", Pawn); }
	bool IsSensorActor(const AActor* Actor) { return NativeCall<bool, const AActor*>(this, "UPawnSensingComponent.IsSensorActor(AActor*)", Actor); }
	bool IsNoiseRelevant(const APawn& Pawn, const UPawnNoiseEmitterComponent& NoiseEmitterComponent, bool bSourceWithinNoiseEmitter) { return NativeCall<bool, const APawn&, const UPawnNoiseEmitterComponent&, bool>(this, "UPawnSensingComponent.IsNoiseRelevant(APawn&,UPawnNoiseEmitterComponent&,bool)", Pawn, NoiseEmitterComponent, bSourceWithinNoiseEmitter); }
	void SensePawn(APawn& Pawn) { NativeCall<void, APawn&>(this, "UPawnSensingComponent.SensePawn(APawn&)", Pawn); }
	void BroadcastOnHearRemoteNoise(APawn& Instigator, const UE::Math::TVector<double>& Location, float Volume) { NativeCall<void, APawn&, const UE::Math::TVector<double>&, float>(this, "UPawnSensingComponent.BroadcastOnHearRemoteNoise(APawn&,UE::Math::TVector<double>&,float)", Instigator, Location, Volume); }
	AActor* GetSensorActor() { return NativeCall<AActor*>(this, "UPawnSensingComponent.GetSensorActor()"); }
	bool CanHear(const UE::Math::TVector<double>& NoiseLoc, float Loudness, bool bFailedLOS) { return NativeCall<bool, const UE::Math::TVector<double>&, float, bool>(this, "UPawnSensingComponent.CanHear(UE::Math::TVector<double>&,float,bool)", NoiseLoc, Loudness, bFailedLOS); }
	void BroadcastOnSeePawn(APawn& Pawn) { NativeCall<void, APawn&>(this, "UPawnSensingComponent.BroadcastOnSeePawn(APawn&)", Pawn); }
	void SetSensingInterval(float NewSensingInterval) { NativeCall<void, float>(this, "UPawnSensingComponent.SetSensingInterval(float)", NewSensingInterval); }
	bool CouldSeePawn(const APawn* Other, bool bMaySkipChecks) { return NativeCall<bool, const APawn*, bool>(this, "UPawnSensingComponent.CouldSeePawn(APawn*,bool)", Other, bMaySkipChecks); }
};
