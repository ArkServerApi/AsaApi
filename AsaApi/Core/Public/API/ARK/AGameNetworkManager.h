#pragma once
#include "BulkForward.h"


struct AGameNetworkManager : AInfo
{
	// Fields

	float& BadPacketLossThresholdField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.BadPacketLossThreshold"); }
	float& SeverePacketLossThresholdField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.SeverePacketLossThreshold"); }
	int& BadPingThresholdField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.BadPingThreshold"); }
	int& SeverePingThresholdField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.SeverePingThreshold"); }
	int& AdjustedNetSpeedField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.AdjustedNetSpeed"); }
	long double& LastNetSpeedUpdateTimeField() { return *GetNativePointerField<long double*>(this, "AGameNetworkManager.LastNetSpeedUpdateTime"); }
	int& TotalNetBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.TotalNetBandwidth"); }
	int& MinDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MinDynamicBandwidth"); }
	int& MaxDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MaxDynamicBandwidth"); }
	float& StandbyRxCheatTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyRxCheatTime"); }
	float& StandbyTxCheatTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyTxCheatTime"); }
	float& PercentMissingForRxStandbyField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForRxStandby"); }
	float& PercentMissingForTxStandbyField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForTxStandby"); }
	float& PercentForBadPingField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentForBadPing"); }
	float& JoinInProgressStandbyWaitTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.JoinInProgressStandbyWaitTime"); }
	float& MoveRepSizeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MoveRepSize"); }
	float& MAXPOSITIONERRORSQUAREDField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXPOSITIONERRORSQUARED"); }
	float& MAXNEARZEROVELOCITYSQUAREDField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXNEARZEROVELOCITYSQUARED"); }
	float& CLIENTADJUSTUPDATECOSTField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.CLIENTADJUSTUPDATECOST"); }
	float& MAXCLIENTUPDATEINTERVALField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXCLIENTUPDATEINTERVAL"); }
	float& MaxClientForcedUpdateDurationField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxClientForcedUpdateDuration"); }
	float& ServerForcedUpdateHitchThresholdField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ServerForcedUpdateHitchThreshold"); }
	float& ServerForcedUpdateHitchCooldownField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ServerForcedUpdateHitchCooldown"); }
	float& MaxMoveDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxMoveDeltaTime"); }
	float& MaxClientSmoothingDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MaxClientSmoothingDeltaTime"); }
	float& ClientNetSendMoveDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTime"); }
	float& ClientNetSendMoveDeltaTimeThrottledField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTimeThrottled"); }
	float& ClientNetSendMoveDeltaTimeStationaryField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetSendMoveDeltaTimeStationary"); }
	int& ClientNetSendMoveThrottleAtNetSpeedField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.ClientNetSendMoveThrottleAtNetSpeed"); }
	int& ClientNetSendMoveThrottleOverPlayerCountField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.ClientNetSendMoveThrottleOverPlayerCount"); }
	float& ClientErrorUpdateRateLimitField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientErrorUpdateRateLimit"); }
	float& ClientNetCamUpdateDeltaTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetCamUpdateDeltaTime"); }
	float& ClientNetCamUpdatePositionLimitField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.ClientNetCamUpdatePositionLimit"); }
	bool& bMovementTimeDiscrepancyDetectionField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bMovementTimeDiscrepancyDetection"); }
	float& MovementTimeDiscrepancyMaxTimeMarginField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyMaxTimeMargin"); }
	float& MovementTimeDiscrepancyMinTimeMarginField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyMinTimeMargin"); }
	float& MovementTimeDiscrepancyResolutionRateField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyResolutionRate"); }
	float& MovementTimeDiscrepancyDriftAllowanceField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MovementTimeDiscrepancyDriftAllowance"); }
	bool& bUseDistanceBasedRelevancyField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bUseDistanceBasedRelevancy"); }
	FTimerHandle& TimerHandle_UpdateNetSpeedsTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameNetworkManager.TimerHandle_UpdateNetSpeedsTimer"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsStandbyCheckingEnabled() { return { this, "AGameNetworkManager.bIsStandbyCheckingEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bHasStandbyCheatTriggered() { return { this, "AGameNetworkManager.bHasStandbyCheatTriggered" }; }

	// Functions

	// Unavailable in UE 5.8.3: dependent class factory unavailable
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameNetworkManager"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameNetworkManager"); }
	void EnableStandbyCheatDetection(bool bIsEnabled) { NativeCall<void, bool>(this, "AGameNetworkManager.EnableStandbyCheatDetection(bool)", bIsEnabled); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameNetworkManager.PostInitializeComponents()"); }
	void UpdateNetSpeedsTimer() { NativeCall<void>(this, "AGameNetworkManager.UpdateNetSpeedsTimer()"); }
	void UpdateNetSpeeds(bool bIsLanMatch) { NativeCall<void, bool>(this, "AGameNetworkManager.UpdateNetSpeeds(bool)", bIsLanMatch); }
	int CalculatedNetSpeed() { return NativeCall<int>(this, "AGameNetworkManager.CalculatedNetSpeed()"); }
	bool WithinUpdateDelayBounds(APlayerController* PC, long double LastUpdateTime) { return NativeCall<bool, APlayerController*, long double>(this, "AGameNetworkManager.WithinUpdateDelayBounds(APlayerController*,double)", PC, LastUpdateTime); }
	bool ExceedsAllowablePositionError(UE::Math::TVector<double>* LocDiff) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "AGameNetworkManager.ExceedsAllowablePositionError(UE::Math::TVector<double>)", LocDiff); }
	bool NetworkVelocityNearZero(UE::Math::TVector<double>* InVelocity) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "AGameNetworkManager.NetworkVelocityNearZero(UE::Math::TVector<double>)", InVelocity); }

	bool& ClientAuthorativePositionField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.ClientAuthorativePosition"); }
	bool& bMovementTimeDiscrepancyResolutionField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bMovementTimeDiscrepancyResolution"); }
	bool& bMovementTimeDiscrepancyForceCorrectionsDuringResolutionField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bMovementTimeDiscrepancyForceCorrectionsDuringResolution"); }
	bool IsInLowBandwidthMode() { return NativeCall<bool>(this, "AGameNetworkManager.IsInLowBandwidthMode()"); }
	void StandbyCheatDetected(EStandbyType StandbyType) { NativeCall<void, EStandbyType>(this, "AGameNetworkManager.StandbyCheatDetected(EStandbyType)", StandbyType); }
};