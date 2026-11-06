#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalShipSailComponent : UActorComponent
{
public:
	UPrimalShipSailComponent() = delete;
	~UPrimalShipSailComponent() = delete;
	UPrimalShipSailComponent(const UPrimalShipSailComponent&) = delete;
	UPrimalShipSailComponent& operator=(const UPrimalShipSailComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalShipSailComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalShipSailComponent"); }

	float& Sail_CanvasHealthField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_CanvasHealth"); }
	float& Sail_CanvasMaxHealthField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_CanvasMaxHealth"); }
	float& Sail_CurrentOpenRatioField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_CurrentOpenRatio"); }
	float& Sail_UnMannedThrottleRatioField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_UnMannedThrottleRatio"); }
	float& SailUnitsField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailUnits"); }
	float& Sail_OpenSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_OpenSpeed"); }
	float& Sail_OpenSpeed_MultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_OpenSpeed_Multiplier"); }
	float& Sail_ClientOpenSpeedMultField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ClientOpenSpeedMult"); }
	float& Sail_InterpStopThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_InterpStopThreshold"); }
	float& Sail_MaxVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_MaxVelocity"); }
	float& Sail_AdditionalMaxVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_AdditionalMaxVelocity"); }
	float& Sail_ExtraAdditionalMaxVelocity_MultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ExtraAdditionalMaxVelocity_Multiplier"); }
	float& Sail_SteeringForce_AtVelocityMax_MultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_SteeringForce_AtVelocityMax_Multiplier"); }
	float& Sail_ThrottleForce_MultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForce_Multiplier"); }
	float& Sail_MaxMovementWeight_MultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_MaxMovementWeight_Multiplier"); }
	float& Sail_ThrottleForceField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForce"); }
	float& Sail_ThrottleForceWindMult_MinField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForceWindMult_Min"); }
	float& Sail_ThrottleForceWindMult_MaxField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForceWindMult_Max"); }
	float& Sail_WindMinField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_WindMin"); }
	float& Sail_WindMaxField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_WindMax"); }
	float& Sail_SteeringOpenRatioPowerField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_SteeringOpenRatioPower"); }
	float& Sail_WindThrottleForceScalePowerField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_WindThrottleForceScalePower"); }
	float& WindSpeed_NonOceanVolume_DefaultField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindSpeed_NonOceanVolume_Default"); }
	float& Sail_MaxMovementWeightField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_MaxMovementWeight"); }
	float& Sail_SteeringForce_AtVelocityMaxField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_SteeringForce_AtVelocityMax"); }
	float& Sail_ClosedMinZScaleField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ClosedMinZScale"); }
	unsigned char& Sail_NumOfSailsField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipSailComponent.Sail_NumOfSails"); }
	int& SailCanvasMaterialIndexField() { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.SailCanvasMaterialIndex"); }
	int& FinalPlacementIndexField() { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.FinalPlacementIndex"); }
	float& MinWindEffectivenessSteeringForceMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinWindEffectivenessSteeringForceMultiplier"); }
	float& WindPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindPercentage"); }
	float& EffectiveWindPctField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.EffectiveWindPct"); }
	float& MaxPossibleRotationAngleField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxPossibleRotationAngle"); }
	float& CurrentRotationAngleField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.CurrentRotationAngle"); }
	float& MaxAcceptableAngleDiffToGatherWindField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxAcceptableAngleDiffToGatherWind"); }
	float& StatMult_MaxAcceptableAngleDiffToGatherWindField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_MaxAcceptableAngleDiffToGatherWind"); }
	float& StatMult_MaxMovementWeightField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_MaxMovementWeight"); }
	float& StatMult_AccelerationField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_Acceleration"); }
	float& StatMult_TurningEffectivenessField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_TurningEffectiveness"); }
	float& StatMult_MaxVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_MaxVelocity"); }
	float& PowMultipleForWindFalloffField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.PowMultipleForWindFalloff"); }
	float& PowMultipleForSpeedFalloffFromDamageField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.PowMultipleForSpeedFalloffFromDamage"); }
	float& MinEffectivenessFromWindCapturedField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinEffectivenessFromWindCaptured"); }
	float& WindLevelToBeVisiblyFullField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindLevelToBeVisiblyFull"); }
	float& SailRotationSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailRotationSpeed"); }
	float& Sail_UnMannedGoalAngleField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_UnMannedGoalAngle"); }
	float& SailRepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailRepairPercentPerInterval"); }
	float& AdditionalSailRepairPercentNextIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.AdditionalSailRepairPercentNextInterval"); }
	float& RepairSailAmountRemainingField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RepairSailAmountRemaining"); }
	bool& IsReservedToBeMannedField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.IsReservedToBeManned"); }
	float& MinFireIntensityField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinFireIntensity"); }
	float& MaxFireIntensityField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxFireIntensity"); }
	float& MinFireIntensityEdgeGlowYField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinFireIntensityEdgeGlowY"); }
	float& MaxFireIntensityEdgeGlowYField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxFireIntensityEdgeGlowY"); }
	float& MinFireIntensityEdgeHeatField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinFireIntensityEdgeHeat"); }
	float& MaxFireIntensityEdgeHeatField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxFireIntensityEdgeHeat"); }
	float& FireIntensityField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.FireIntensity"); }
	float& RiderRotateInputField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RiderRotateInput"); }
	float& RiderThrottleInputField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RiderThrottleInput"); }
	float& RaftRiderSailRotationRangeField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RaftRiderSailRotationRange"); }
	float& RaftRiderSailRotationRateField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RaftRiderSailRotationRate"); }
	float& NPCUnboardDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.NPCUnboardDistance"); }
	bool& bHasPlayedTautSoundField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.bHasPlayedTautSound"); }
	float& NPC_UseLocation_OffsetFromMastField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.NPC_UseLocation_OffsetFromMast"); }
	float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RepairCheckInterval"); }
	float& SailAngularDampingField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailAngularDamping"); }
	float& SailLinearDampingField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailLinearDamping"); }
	bool& bFlushSkeletonField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.bFlushSkeleton"); }
	float& AllowedMountDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.AllowedMountDistance"); }
	float& WindPercentToTriggerTautSFXField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindPercentToTriggerTautSFX"); }
	float& SailOpenPercentToTriggerTautSFXField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailOpenPercentToTriggerTautSFX"); }
	float& SailOpenPercentToAllowBillowSFXField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailOpenPercentToAllowBillowSFX"); }
	float& WindPercentToCutOffBillowSFXField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindPercentToCutOffBillowSFX"); }
	float& MinDeadZoneInputField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinDeadZoneInput"); }
	int& NumOfCurrentFiresField() { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.NumOfCurrentFires"); }
	float& CurrentBurnPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.CurrentBurnPercentage"); }
	int& RiggingIndexField() { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.RiggingIndex"); }
	float& Sail_PreviousCanvasHealthField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_PreviousCanvasHealth"); }
	bool& bModifiedSailRiggingForModShipField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.bModifiedSailRiggingForModShip"); }
	float& MaxModShipSailRiggingDistField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxModShipSailRiggingDist"); }
	float& MaxModShipSailPegRiggingDistField() { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxModShipSailPegRiggingDist"); }
	bool& bIsPlacingOnModShipField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.bIsPlacingOnModShip"); }
	bool& bDontRefreshSeatsLocationsField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.bDontRefreshSeatsLocations"); }
	bool& bEcnhorchedField() { return *GetNativePointerField<bool*>(this, "UPrimalShipSailComponent.bEcnhorched"); }

	void Net_SetUnMannedThrottleRatio(float newRatio) { NativeCall<void, float>(this, "UPrimalShipSailComponent.Net_SetUnMannedThrottleRatio(float)", newRatio); }
	void ServerSetSailCanvasHealth_Implementation(float newHealth, bool fromSpawn) { NativeCall<void, float, bool>(this, "UPrimalShipSailComponent.ServerSetSailCanvasHealth_Implementation(float,bool)", newHealth, fromSpawn); }
	bool TickCriticalShipStructure(float DeltaTime) { return NativeCall<bool, float>(this, "UPrimalShipSailComponent.TickCriticalShipStructure(float)", DeltaTime); }
	void LocalRiderSetThrottleInput(float Val) { NativeCall<void, float>(this, "UPrimalShipSailComponent.LocalRiderSetThrottleInput(float)", Val); }
	void ConsumeSailRepairRequirementsPercent(UPrimalInventoryComponent* invComp, float Percent, UPrimalInventoryComponent* additionalInventoryComp) { NativeCall<void, UPrimalInventoryComponent*, float, UPrimalInventoryComponent*>(this, "UPrimalShipSailComponent.ConsumeSailRepairRequirementsPercent(UPrimalInventoryComponent*,float,UPrimalInventoryComponent*)", invComp, Percent, additionalInventoryComp); }
	bool CanUseShipThrottle() { return NativeCall<bool>(this, "UPrimalShipSailComponent.CanUseShipThrottle()"); }
	bool CanSailBeRepaired(AShooterPlayerController* ByPC, bool bCurrentlyRepairing) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "UPrimalShipSailComponent.CanSailBeRepaired(AShooterPlayerController*,bool)", ByPC, bCurrentlyRepairing); }
	void UpdateCanvasCollision() { NativeCall<void>(this, "UPrimalShipSailComponent.UpdateCanvasCollision()"); }
	void LocalRiderSetRotationInput(float Val) { NativeCall<void, float>(this, "UPrimalShipSailComponent.LocalRiderSetRotationInput(float)", Val); }
	void SetMaterialFireIntesity(float EdgeGlowY, float EdgeHeat) { NativeCall<void, float, float>(this, "UPrimalShipSailComponent.SetMaterialFireIntesity(float,float)", EdgeGlowY, EdgeHeat); }
	void StartSailRepair() { NativeCall<void>(this, "UPrimalShipSailComponent.StartSailRepair()"); }
	void RepairSailCheckTimer() { NativeCall<void>(this, "UPrimalShipSailComponent.RepairSailCheckTimer()"); }
	void UpdateCapturedWindPercent() { NativeCall<void>(this, "UPrimalShipSailComponent.UpdateCapturedWindPercent()"); }
	void SetFireIntensity(float InFireIntensity) { NativeCall<void, float>(this, "UPrimalShipSailComponent.SetFireIntensity(float)", InFireIntensity); }
	void Net_SetUnMannedGoalAngle(float newAngle) { NativeCall<void, float>(this, "UPrimalShipSailComponent.Net_SetUnMannedGoalAngle(float)", newAngle); }
	float GetSailThrottleWindMult() { return NativeCall<float>(this, "UPrimalShipSailComponent.GetSailThrottleWindMult()"); }
	bool TestMeetsSailRepairRequirementsPercent(UPrimalInventoryComponent* invComp, float Percent, UPrimalInventoryComponent* additionalInvComp) { return NativeCall<bool, UPrimalInventoryComponent*, float, UPrimalInventoryComponent*>(this, "UPrimalShipSailComponent.TestMeetsSailRepairRequirementsPercent(UPrimalInventoryComponent*,float,UPrimalInventoryComponent*)", invComp, Percent, additionalInvComp); }
	void BPAddedFireBuff() { NativeCall<void>(this, "UPrimalShipSailComponent.BPAddedFireBuff()"); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalShipSailComponent.BeginPlay()"); }
	void SetMaterialBurnPercent(float percent) { NativeCall<void, float>(this, "UPrimalShipSailComponent.SetMaterialBurnPercent(float)", percent); }
	void SetSailOpenRatio(float newRatio) { NativeCall<void, float>(this, "UPrimalShipSailComponent.SetSailOpenRatio(float)", newRatio); }
	void AddFireBuff(int numToAdd) { NativeCall<void, int>(this, "UPrimalShipSailComponent.AddFireBuff(int)", numToAdd); }
	void OnRep_FireIntensity() { NativeCall<void>(this, "UPrimalShipSailComponent.OnRep_FireIntensity()"); }
	bool IsManned() { return NativeCall<bool>(this, "UPrimalShipSailComponent.IsManned()"); }
	void OnRep_SetCanvasHealth() { NativeCall<void>(this, "UPrimalShipSailComponent.OnRep_SetCanvasHealth()"); }
	float GetSailComponentOpenRatio(USceneComponent* SailComponent) { return NativeCall<float, USceneComponent*>(this, "UPrimalShipSailComponent.GetSailComponentOpenRatio(USceneComponent*)", SailComponent); }

	BitFieldValue<bool, unsigned char> bIsSailRepairing() { return { this, "UPrimalShipSailComponent.bIsSailRepairing"}; }
	BitFieldValue<bool, unsigned char> bReallyCanUseShipThrottleUnmanned() { return { this, "UPrimalShipSailComponent.bReallyCanUseShipThrottleUnmanned"}; }
	BitFieldValue<bool, unsigned char> bUpdateSailsVisualsByPercentage() { return { this, "UPrimalShipSailComponent.bUpdateSailsVisualsByPercentage"}; }
	BitFieldValue<bool, unsigned char> bFirstTick() { return { this, "UPrimalShipSailComponent.bFirstTick"}; }
	BitFieldValue<bool, unsigned char> bIgnoreWindEffectiveness() { return { this, "UPrimalShipSailComponent.bIgnoreWindEffectiveness"}; }
	BitFieldValue<bool, unsigned char> bSpawnWithFullHealth() { return { this, "UPrimalShipSailComponent.bSpawnWithFullHealth"}; }
	BitFieldValue<bool, unsigned char> bPutSailControlsInRootMultiUse() { return { this, "UPrimalShipSailComponent.bPutSailControlsInRootMultiUse"}; }
	BitFieldValue<bool, unsigned char> bHideLadderControls() { return { this, "UPrimalShipSailComponent.bHideLadderControls"}; }
	BitFieldValue<bool, unsigned char> bUseConstantSailInterpolation() { return { this, "UPrimalShipSailComponent.bUseConstantSailInterpolation"}; }
	BitFieldValue<bool, unsigned char> bUseSailSounds() { return { this, "UPrimalShipSailComponent.bUseSailSounds"}; }
	BitFieldValue<bool, unsigned char> bUsesBillowMaterialParam() { return { this, "UPrimalShipSailComponent.bUsesBillowMaterialParam"}; }
	BitFieldValue<bool, unsigned char> bIsManned() { return { this, "UPrimalShipSailComponent.bIsManned"}; }
	BitFieldValue<bool, unsigned char> bPreventNPCHandIK() { return { this, "UPrimalShipSailComponent.bPreventNPCHandIK"}; }
	BitFieldValue<bool, unsigned char> bUseSeatNumInHandSocketName() { return { this, "UPrimalShipSailComponent.bUseSeatNumInHandSocketName"}; }
	BitFieldValue<bool, unsigned char> bShooterCharacterRider() { return { this, "UPrimalShipSailComponent.bShooterCharacterRider"}; }
	BitFieldValue<bool, unsigned char> bRiggingPegOnly() { return { this, "UPrimalShipSailComponent.bRiggingPegOnly"}; }

	UAnimSequence*& SeatingAnimLeftField() { return *GetNativePointerField<UAnimSequence**>(this, "UPrimalShipSailComponent.SeatingAnimLeft"); }
	UAnimSequence*& SeatingAnimRightField() { return *GetNativePointerField<UAnimSequence**>(this, "UPrimalShipSailComponent.SeatingAnimRight"); }
	USoundBase*& SailTurnSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalShipSailComponent.SailTurnSound"); }
	USoundCue*& SailFurlSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalShipSailComponent.SailFurlSound"); }
	USoundCue*& SailUnfurlSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalShipSailComponent.SailUnfurlSound"); }
	USoundCue*& SailBillowSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalShipSailComponent.SailBillowSound"); }
	USoundCue*& SailBillowWithWindSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalShipSailComponent.SailBillowWithWindSound"); }
	USoundCue*& SailTautSoundField() { return *GetNativePointerField<USoundCue**>(this, "UPrimalShipSailComponent.SailTautSound"); }
	UAudioComponent*& SailTurnSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "UPrimalShipSailComponent.SailTurnSoundComponent"); }
	UAudioComponent*& SailBillowSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "UPrimalShipSailComponent.SailBillowSoundComponent"); }
	UAudioComponent*& SailFullWindBillowSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "UPrimalShipSailComponent.SailFullWindBillowSoundComponent"); }
	UAudioComponent*& SailFurlUnfurlSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "UPrimalShipSailComponent.SailFurlUnfurlSoundComponent"); }
	UParticleSystem*& TradeWind_FX_LowField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalShipSailComponent.TradeWind_FX_Low"); }
	UParticleSystem*& TradeWind_FX_MidField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalShipSailComponent.TradeWind_FX_Mid"); }
	UParticleSystem*& TradeWind_FX_HighField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalShipSailComponent.TradeWind_FX_High"); }

	TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >& Sail_StartEndPercentOfThrottlePerSailField() { return *GetNativePointerField<TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.Sail_StartEndPercentOfThrottlePerSail"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Sail_CanvasStartScaleField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.Sail_CanvasStartScale"); }
	UE::Math::TRotator<double>& WindDirectionField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalShipSailComponent.WindDirection"); }
	FName& SailCanvasCollisionNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.SailCanvasCollisionName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& UnfurledMaterialParamNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.UnfurledMaterialParamNames"); }
	TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >& UnfurledMaterialParamsOffOnPercentOpenField() { return *GetNativePointerField<TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.UnfurledMaterialParamsOffOnPercentOpen"); }
	TArray<int, TSizedDefaultAllocator<32> >& SailMaterialIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.SailMaterialIndices"); }
	TArray<float, TSizedDefaultAllocator<32> >& UnfurlSoundOpenPercentTriggersField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.UnfurlSoundOpenPercentTriggers"); }
	TArray<bool, TSizedDefaultAllocator<32> >& HasTriggeredUnfurlAtThresholdIndexField() { return *GetNativePointerField<TArray<bool, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.HasTriggeredUnfurlAtThresholdIndex"); }
	UE::Math::TVector<double>& DefaultRiggingPegLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipSailComponent.DefaultRiggingPegLocOffset"); }
	UE::Math::TRotator<double>& DefaultRiggingPegRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalShipSailComponent.DefaultRiggingPegRotOffset"); }
	UE::Math::TVector<double>& ExtraRiggingOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipSailComponent.ExtraRiggingOffset"); }
	UE::Math::TVector<double>& RiggingPegSocketOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipSailComponent.RiggingPegSocketOffset"); }
	FTimerHandle& InitialModSailAttachmentTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalShipSailComponent.InitialModSailAttachmentTimer"); }
	FName& LeftRiggingBoneSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftRiggingBoneSocketName"); }
	FName& RightRiggingBoneSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightRiggingBoneSocketName"); }
	FName& LeftRiggingBoneNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftRiggingBoneName"); }
	FName& RightRiggingBoneNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightRiggingBoneName"); }
	FName& LeftPegRiggingBoneSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftPegRiggingBoneSocketName"); }
	FName& RightPegRiggingBoneSocketNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightPegRiggingBoneSocketName"); }
	FName& LeftPegRiggingBoneNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftPegRiggingBoneName"); }
	FName& RightPegRiggingBoneNameField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightPegRiggingBoneName"); }
	TArray<UParticleSystemComponent*, TSizedDefaultAllocator<32> >& TradeWindSCsField() { return *GetNativePointerField<TArray<UParticleSystemComponent*, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.TradeWindSCs"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TradeWind_FXSocketNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalShipSailComponent.TradeWind_FXSocketNames"); }
	FName& ModifiedSailSeatSocketNameRField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.ModifiedSailSeatSocketNameR"); }
	FName& ModifiedSailSeatSocketNameLField() { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.ModifiedSailSeatSocketNameL"); }
	FTimerHandle& RepairSailCheckTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalShipSailComponent.RepairSailCheckTimerHandle"); }
	UE::Math::TVector<double>* GetCameraModifiedOriginLocationOffset_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalShipSailComponent.GetCameraModifiedOriginLocationOffset_Implementation()", result); }
	void OnStructurePlacedNotify(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bFlipped) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); if (!PlayerViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TRotator < double >, APawn *, FName, bool>(this, "UPrimalShipSailComponent.OnStructurePlacedNotify(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool)", PC, *AtLocation, *AtRotation, *PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	UE::Math::TVector<double>* GetTPVCameraOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalShipSailComponent.GetTPVCameraOffset()", result); }
};
