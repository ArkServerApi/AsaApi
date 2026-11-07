#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalDinoCharacter.h"

struct APrimalShip : APrimalDinoCharacter
{
public:
	APrimalShip() = delete;
	~APrimalShip() = delete;
	APrimalShip(const APrimalShip&) = delete;
	APrimalShip& operator=(const APrimalShip&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalShip"); }

	float& UnAnchoredNetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.UnAnchoredNetworkAndStasisRangeMultiplier"); }
	float& AnchoredNetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchoredNetworkAndStasisRangeMultiplier"); }
	float& TimeSinceLastFadeOutField() { return *GetNativePointerField<float*>(this, "APrimalShip.TimeSinceLastFadeOut"); }
	bool& bRopeReachedEndOfTravelField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bRopeReachedEndOfTravel"); }
	bool& bWasAtFullSpeedField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bWasAtFullSpeed"); }
	bool& bIsMetalHullField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bIsMetalHull"); }
	float& WetDockOceanZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalShip.WetDockOceanZOffset"); }
	bool& bMusicFadedInField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bMusicFadedIn"); }
	bool& bMotionWantsMusicOnField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bMotionWantsMusicOn"); }
	bool& bWasInCombatLastTickField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bWasInCombatLastTick"); }
	bool& bMaidenVoyagePlayedField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bMaidenVoyagePlayed"); }
	float& StationaryTurnMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.StationaryTurnMultiplier"); }
	float& SailUnits_MaxField() { return *GetNativePointerField<float*>(this, "APrimalShip.SailUnits_Max"); }
	float& MaxWeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.MaxWeightMultiplier"); }
	int& CollisionImpactWeightClassField() { return *GetNativePointerField<int*>(this, "APrimalShip.CollisionImpactWeightClass"); }
	float& SailingVelocity_MaxAllowedField() { return *GetNativePointerField<float*>(this, "APrimalShip.SailingVelocity_MaxAllowed"); }
	float& SailingVelocity_AbsoluteMaxAllowedField() { return *GetNativePointerField<float*>(this, "APrimalShip.SailingVelocity_AbsoluteMaxAllowed"); }
	float& ShipBowOffsetField() { return *GetNativePointerField<float*>(this, "APrimalShip.ShipBowOffset"); }
	float& ThrottleCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleCheckInterval"); }
	double& LastThrottleCheckStartTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastThrottleCheckStartTime"); }
	float& BaseMovementWeightField() { return *GetNativePointerField<float*>(this, "APrimalShip.BaseMovementWeight"); }
	float& Sails_MaxThrottleForceField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_MaxThrottleForce"); }
	float& Sails_ThrottleForceWindMult_MinField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_ThrottleForceWindMult_Min"); }
	float& Sails_ThrottleForceWindMult_MaxField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_ThrottleForceWindMult_Max"); }
	float& Sails_MaxMovementWeightField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_MaxMovementWeight"); }
	float& Sails_AdditionalMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_AdditionalMaxVelocity"); }
	float& Sails_SteeringForce_AtVelocityMaxField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_SteeringForce_AtVelocityMax"); }
	float& MaxSailRotationField() { return *GetNativePointerField<float*>(this, "APrimalShip.MaxSailRotation"); }
	float& RotateSailsSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.RotateSailsSpeedMultiplier"); }
	float& CurrentSailRotationField() { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentSailRotation"); }
	float& ReplicatedSailRotationField() { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedSailRotation"); }
	float& Sails_AvgSailRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.Sails_AvgSailRotationSpeed"); }
	float& RudderSteeringRateField() { return *GetNativePointerField<float*>(this, "APrimalShip.RudderSteeringRate"); }
	float& RudderAutoBackAngleField() { return *GetNativePointerField<float*>(this, "APrimalShip.RudderAutoBackAngle"); }
	float& RudderSteerForceField() { return *GetNativePointerField<float*>(this, "APrimalShip.RudderSteerForce"); }
	float& FixedThrottleRateField() { return *GetNativePointerField<float*>(this, "APrimalShip.FixedThrottleRate"); }
	float& SteeringForce_MaxAllowedField() { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringForce_MaxAllowed"); }
	float& SteeringForce_MinAllowedField() { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringForce_MinAllowed"); }
	float& RudderAngleThresholdField() { return *GetNativePointerField<float*>(this, "APrimalShip.RudderAngleThreshold"); }
	float& MinMovingSoundSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.MinMovingSoundSpeed"); }
	float& MinMovingMusicSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.MinMovingMusicSpeed"); }
	float& DefaultLinearDampingField() { return *GetNativePointerField<float*>(this, "APrimalShip.DefaultLinearDamping"); }
	float& DefaultAngularDampingField() { return *GetNativePointerField<float*>(this, "APrimalShip.DefaultAngularDamping"); }
	float& RaftCharacterBasingAbsoluteMaxDirZField() { return *GetNativePointerField<float*>(this, "APrimalShip.RaftCharacterBasingAbsoluteMaxDirZ"); }
	float& SingleMastExtensionLengthField() { return *GetNativePointerField<float*>(this, "APrimalShip.SingleMastExtensionLength"); }
	float& MastExtensionZScaleField() { return *GetNativePointerField<float*>(this, "APrimalShip.MastExtensionZScale"); }
	float& CurrentAngularDampingField() { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentAngularDamping"); }
	float& CurrentLinearDampingField() { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentLinearDamping"); }
	int& LootCratesToDropField() { return *GetNativePointerField<int*>(this, "APrimalShip.LootCratesToDrop"); }
	float& LootCrateRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.LootCrateRadius"); }
	float& CargoContainerLifetimeField() { return *GetNativePointerField<float*>(this, "APrimalShip.CargoContainerLifetime"); }
	float& CargoContainerTimerField() { return *GetNativePointerField<float*>(this, "APrimalShip.CargoContainerTimer"); }
	int& RowingSeatCount_MaxField() { return *GetNativePointerField<int*>(this, "APrimalShip.RowingSeatCount_Max"); }
	float& RowingSeatImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.RowingSeatImpulseMultiplier"); }
	float& RowingImpulse_MaxField() { return *GetNativePointerField<float*>(this, "APrimalShip.RowingImpulse_Max"); }
	float& RowingSeats_RowingIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.RowingSeats_RowingInterval"); }
	float& RowingSeats_RowingInputField() { return *GetNativePointerField<float*>(this, "APrimalShip.RowingSeats_RowingInput"); }
	double& LastRowTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastRowTime"); }
	double& NetworkCreationTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.NetworkCreationTime"); }
	bool& CanAnchorField() { return *GetNativePointerField<bool*>(this, "APrimalShip.CanAnchor"); }
	bool& IsAnchoringField() { return *GetNativePointerField<bool*>(this, "APrimalShip.IsAnchoring"); }
	bool& IsAnchoredField() { return *GetNativePointerField<bool*>(this, "APrimalShip.IsAnchored"); }
	bool& bAutoThrottleActiveField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bAutoThrottleActive"); }
	float& AutoAnchorDelaySecField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoAnchorDelaySec"); }
	double& AutoAnchorCountdownStartTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.AutoAnchorCountdownStartTime"); }
	float& CurrentAnchorLengthField() { return *GetNativePointerField<float*>(this, "APrimalShip.CurrentAnchorLength"); }
	float& FinalAnchorLengthField() { return *GetNativePointerField<float*>(this, "APrimalShip.FinalAnchorLength"); }
	float& AnchorLowerSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorLowerSpeed"); }
	float& AnchorRaiseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorRaiseSpeed"); }
	float& MaximumAnchorLengthField() { return *GetNativePointerField<float*>(this, "APrimalShip.MaximumAnchorLength"); }
	float& AnchorMinimumWaveDampingField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorMinimumWaveDamping"); }
	float& AnchorMaximumTraceDepthField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorMaximumTraceDepth"); }
	float& MaximumAnchorHorizonalLengthField() { return *GetNativePointerField<float*>(this, "APrimalShip.MaximumAnchorHorizonalLength"); }
	double& AnchorFullySetTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.AnchorFullySetTime"); }
	float& AnchorSetDelayField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorSetDelay"); }
	float& AnchorRaiseDurationField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorRaiseDuration"); }
	float& SinkDelayTimerField() { return *GetNativePointerField<float*>(this, "APrimalShip.SinkDelayTimer"); }
	double& LastUpdatedPlankDecayTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastUpdatedPlankDecayTime"); }
	float& PlankDecayIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.PlankDecayInterval"); }
	float& PlankDecayPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.PlankDecayPercentPerInterval"); }
	double& LastAnchorLiftedTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastAnchorLiftedTime"); }
	float& UnAnchoredAutoDestroyTimeField() { return *GetNativePointerField<float*>(this, "APrimalShip.UnAnchoredAutoDestroyTime"); }
	float& AnchoredAutoDestroyTimeField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchoredAutoDestroyTime"); }
	double& DiedAtTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.DiedAtTime"); }
	int& LastFrameDisabledForcedVelocityDirectionField() { return *GetNativePointerField<int*>(this, "APrimalShip.LastFrameDisabledForcedVelocityDirection"); }
	double& LastTimePlacedDriverSeatField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimePlacedDriverSeat"); }
	float& ThrottleInputField() { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleInput"); }
	float& ThrottleRatio_TargetField() { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleRatio_Target"); }
	float& ReplicatedThrottleRatio_TargetField() { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedThrottleRatio_Target"); }
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringInput"); }
	float& ReplicatedSteeringInputField() { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedSteeringInput"); }
	float& RudderSteeringAmountField() { return *GetNativePointerField<float*>(this, "APrimalShip.RudderSteeringAmount"); }
	float& ReplicatedRudderSteeringAmountField() { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedRudderSteeringAmount"); }
	float& RudderAngleField() { return *GetNativePointerField<float*>(this, "APrimalShip.RudderAngle"); }
	float& ReplicatedRudderAngleField() { return *GetNativePointerField<float*>(this, "APrimalShip.ReplicatedRudderAngle"); }
	float& SailTurningInputField() { return *GetNativePointerField<float*>(this, "APrimalShip.SailTurningInput"); }
	float& CollisionImpactMinImpulseField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinImpulse"); }
	float& CollisionImpactMaxImpulseField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMaxImpulse"); }
	float& CollisionImpactMinDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinDamageAmount"); }
	float& CollisionImpactMaxDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMaxDamageAmount"); }
	float& CollisionImpactMinDamageRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinDamageRadius"); }
	float& CollisionImpactMaxDamageRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMaxDamageRadius"); }
	float& CollisionImpactMinIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinInterval"); }
	double& LastCollisionImpactTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastCollisionImpactTime"); }
	float& CollisionImpactMinImpulseForDamageField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollisionImpactMinImpulseForDamage"); }
	int& WeldSweepIndexField() { return *GetNativePointerField<int*>(this, "APrimalShip.WeldSweepIndex"); }
	bool& bIsInWetDockField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bIsInWetDock"); }
	int& ReplicatedCurrentWetDockStructureIDField() { return *GetNativePointerField<int*>(this, "APrimalShip.ReplicatedCurrentWetDockStructureID"); }
	bool& bBeganPlayField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bBeganPlay"); }
	bool& bUsingLongRangeStasisField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bUsingLongRangeStasis"); }
	float& LastDistanceToShoreField() { return *GetNativePointerField<float*>(this, "APrimalShip.LastDistanceToShore"); }
	float& PercentOfWeightForMinSinkingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.PercentOfWeightForMinSinkingSpeed"); }
	float& PercentOfWeightForMaxSinkingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.PercentOfWeightForMaxSinkingSpeed"); }
	float& ShipHullSinkMovementForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.ShipHullSinkMovementForceMultiplier"); }
	bool& bWasAnchoredOrDryDockedField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bWasAnchoredOrDryDocked"); }
	float& ThrottleForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleForceMultiplier"); }
	float& MinMaxThrottleRatioToBeachField() { return *GetNativePointerField<float*>(this, "APrimalShip.MinMaxThrottleRatioToBeach"); }
	float& MinAllowedGroundDistField() { return *GetNativePointerField<float*>(this, "APrimalShip.MinAllowedGroundDist"); }
	float& GroundDistToStopShipField() { return *GetNativePointerField<float*>(this, "APrimalShip.GroundDistToStopShip"); }
	float& GlobalSailForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.GlobalSailForceMultiplier"); }
	float& GlobalSteeringForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.GlobalSteeringForceMultiplier"); }
	float& GlobalSteeringStandForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.GlobalSteeringStandForceMultiplier"); }
	float& ShipBeachedStartTimeField() { return *GetNativePointerField<float*>(this, "APrimalShip.ShipBeachedStartTime"); }
	bool& bPreventsDinosWithStructureSupportingSaddlesField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bPreventsDinosWithStructureSupportingSaddles"); }
	float& ExternalForceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.ExternalForceMultiplier"); }
	int& LastMarkedFrameCountField() { return *GetNativePointerField<int*>(this, "APrimalShip.LastMarkedFrameCount"); }
	double& LastFrameMarkedTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastFrameMarkedTime"); }
	double& LastSentSailRotationToServerTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastSentSailRotationToServerTime"); }
	float& LastSentSailRotationToServerValueField() { return *GetNativePointerField<float*>(this, "APrimalShip.LastSentSailRotationToServerValue"); }
	double& LastSentThrottleTargetToServerTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastSentThrottleTargetToServerTime"); }
	float& LastSentThrottleTargetToServerValueField() { return *GetNativePointerField<float*>(this, "APrimalShip.LastSentThrottleTargetToServerValue"); }
	float& LastSentSteeringInputToServerValueField() { return *GetNativePointerField<float*>(this, "APrimalShip.LastSentSteeringInputToServerValue"); }
	float& Teleport_AllowedAboveTopDeckDistField() { return *GetNativePointerField<float*>(this, "APrimalShip.Teleport_AllowedAboveTopDeckDist"); }
	float& Teleport_AllowedBelowTopDeckDistField() { return *GetNativePointerField<float*>(this, "APrimalShip.Teleport_AllowedBelowTopDeckDist"); }
	double& LastWantsForcedMovementTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastWantsForcedMovementTime"); }
	int& ForcedMovementDirectionField() { return *GetNativePointerField<int*>(this, "APrimalShip.ForcedMovementDirection"); }
	float& FrontGroupMinYCoordinateField() { return *GetNativePointerField<float*>(this, "APrimalShip.FrontGroupMinYCoordinate"); }
	float& BackGroupMaxYCoordinateField() { return *GetNativePointerField<float*>(this, "APrimalShip.BackGroupMaxYCoordinate"); }
	float& MaxTimeToShootAtLocationField() { return *GetNativePointerField<float*>(this, "APrimalShip.MaxTimeToShootAtLocation"); }
	float& ShipWeightMovementForcePowerField() { return *GetNativePointerField<float*>(this, "APrimalShip.ShipWeightMovementForcePower"); }
	float& AutoPilot_AllowSnapToHeadingBelowAngularVelocityField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_AllowSnapToHeadingBelowAngularVelocity"); }
	float& AutoPilot_TargetHeadingErrorRange_SlowField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_TargetHeadingErrorRange_Slow"); }
	float& AutoPilot_TargetHeadingErrorRange_StopField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_TargetHeadingErrorRange_Stop"); }
	float& AutoPilot_TargetHeadingErrorRange_ResumeField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_TargetHeadingErrorRange_Resume"); }
	float& AutoPilot_AngularVelocityMaxInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_AngularVelocityMaxInterpSpeed"); }
	float& AutoPilot_ForceMinAngularVelocity_MINField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_ForceMinAngularVelocity_MIN"); }
	float& AutoPilot_ForceMinAngularVelocity_MAXField() { return *GetNativePointerField<float*>(this, "APrimalShip.AutoPilot_ForceMinAngularVelocity_MAX"); }
	double& ClientStartedInterpolationAtTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.ClientStartedInterpolationAtTime"); }
	float& CollideOntoEnemyRaftDamageImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.CollideOntoEnemyRaftDamageImpulseMultiplier"); }
	float& FixedBackwardsThrottleForceField() { return *GetNativePointerField<float*>(this, "APrimalShip.FixedBackwardsThrottleForce"); }
	float& MaxBackwardsVelocityField() { return *GetNativePointerField<float*>(this, "APrimalShip.MaxBackwardsVelocity"); }
	float& ClientUnanchoringAllowSlowInterpolationPeriodField() { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringAllowSlowInterpolationPeriod"); }
	float& ClientUnanchoringLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringLocationInterpSpeed"); }
	float& ClientUnanchoringRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringRotationInterpSpeed"); }
	float& ClientUnanchoringInterpSpeedFastField() { return *GetNativePointerField<float*>(this, "APrimalShip.ClientUnanchoringInterpSpeedFast"); }
	float& ShipStructureHealthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.ShipStructureHealthMultiplier"); }
	float& ForcesToApplyScaleField() { return *GetNativePointerField<float*>(this, "APrimalShip.ForcesToApplyScale"); }
	float& TorquesToApplyScaleField() { return *GetNativePointerField<float*>(this, "APrimalShip.TorquesToApplyScale"); }
	bool& bHackForcesToApplyCheckForInvalidPhysxField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bHackForcesToApplyCheckForInvalidPhysx"); }
	float& DestroyIfNoTargetUnderShoreDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalShip.DestroyIfNoTargetUnderShoreDistanceAmount"); }
	float& DestroyIfNoTargetUnderShoreDistanceTimerField() { return *GetNativePointerField<float*>(this, "APrimalShip.DestroyIfNoTargetUnderShoreDistanceTimer"); }
	float& DestroyIfNoTargetUnderShoreDistanceCounterField() { return *GetNativePointerField<float*>(this, "APrimalShip.DestroyIfNoTargetUnderShoreDistanceCounter"); }
	double& HackCheckingForInvalidPhysXTimeStopField() { return *GetNativePointerField<double*>(this, "APrimalShip.HackCheckingForInvalidPhysXTimeStop"); }
	bool& bHackCheckingForInvalidPhysXField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bHackCheckingForInvalidPhysX"); }
	float& ThrottleInputThresholdField() { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleInputThreshold"); }
	float& YawInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.YawInterpSpeed"); }
	float& ArrivalDistanceField() { return *GetNativePointerField<float*>(this, "APrimalShip.ArrivalDistance"); }
	float& AnchorMaximumDistanceFromShoreField() { return *GetNativePointerField<float*>(this, "APrimalShip.AnchorMaximumDistanceFromShore"); }
	float& SlowServerTickIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.SlowServerTickInterval"); }
	double& LastTimeSlowServerTickedField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastTimeSlowServerTicked"); }
	float& ThrottleRatioInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalShip.ThrottleRatioInterpSpeed"); }
	float& FleetRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.FleetRadius"); }
	float& SpeedMultiplierWhenFacingHeadwindField() { return *GetNativePointerField<float*>(this, "APrimalShip.SpeedMultiplierWhenFacingHeadwind"); }
	int& CameraZoomLevelToIgnoreDeckField() { return *GetNativePointerField<int*>(this, "APrimalShip.CameraZoomLevelToIgnoreDeck"); }
	bool& bKillingThrottleField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bKillingThrottle"); }
	float& LastDockedShipVisibilityCheckTimeField() { return *GetNativePointerField<float*>(this, "APrimalShip.LastDockedShipVisibilityCheckTime"); }
	bool& bShipHiddenForDockField() { return *GetNativePointerField<bool*>(this, "APrimalShip.bShipHiddenForDock"); }
	int& RoundRobinRefreshIndexField() { return *GetNativePointerField<int*>(this, "APrimalShip.RoundRobinRefreshIndex"); }
	float& ScrapeVFXSpawnIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShip.ScrapeVFXSpawnInterval"); }
	float& ScrapeVFXSpawnDurationAfterHitField() { return *GetNativePointerField<float*>(this, "APrimalShip.ScrapeVFXSpawnDurationAfterHit"); }
	float& ScrapeVFXSpawnDistanceField() { return *GetNativePointerField<float*>(this, "APrimalShip.ScrapeVFXSpawnDistance"); }
	double& SpawnScrapeVFXUntilTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.SpawnScrapeVFXUntilTime"); }
	double& LastScrapeVFXSpawnedTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastScrapeVFXSpawnedTime"); }
	unsigned char& LastScrapeVFXUpdatedSideField() { return *GetNativePointerField<unsigned char*>(this, "APrimalShip.LastScrapeVFXUpdatedSide"); }
	double& LastVesselDynamicsHitTimeField() { return *GetNativePointerField<double*>(this, "APrimalShip.LastVesselDynamicsHitTime"); }
	float& StationaryTurnVelocityThresholdField() { return *GetNativePointerField<float*>(this, "APrimalShip.StationaryTurnVelocityThreshold"); }
	float& SteeringForceStandBoostThresholdField() { return *GetNativePointerField<float*>(this, "APrimalShip.SteeringForceStandBoostThreshold"); }
	float& StationaryTurnBackwardsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.StationaryTurnBackwardsMultiplier"); }
	float& RamSocketRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.RamSocketRadius"); }
	float& DamageMultiplierInRamSocketRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.DamageMultiplierInRamSocketRadius"); }
	float& RammingExtraImpulseMultiplierInRamSocketRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.RammingExtraImpulseMultiplierInRamSocketRadius"); }
	float& RammingImpulseMitigationMultiplierInRamSocketRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShip.RammingImpulseMitigationMultiplierInRamSocketRadius"); }
	float& SpeedScalarThresholdForRammingField() { return *GetNativePointerField<float*>(this, "APrimalShip.SpeedScalarThresholdForRamming"); }
	float& MinRammingDirectionDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShip.MinRammingDirectionDamageMultiplier"); }
	float& SpeedToConsiderMaxForRammingField() { return *GetNativePointerField<float*>(this, "APrimalShip.SpeedToConsiderMaxForRamming"); }

	float GetSteeringForceScalar() { return NativeCall<float>(this, "APrimalShip.GetSteeringForceScalar()"); }
	void OnRep_ShouldHaveCargo() { NativeCall<void>(this, "APrimalShip.OnRep_ShouldHaveCargo()"); }
	bool AttemptToReconnectParticularStructureToShipOnClient(AActor* OverlapActor) { return NativeCall<bool, AActor*>(this, "APrimalShip.AttemptToReconnectParticularStructureToShipOnClient(AActor*)", OverlapActor); }
	void Interface_AttemptToReconnectStructuresOnClient_Implementation() { NativeCall<void>(this, "APrimalShip.Interface_AttemptToReconnectStructuresOnClient_Implementation()"); }
	void UnPossessed() { NativeCall<void>(this, "APrimalShip.UnPossessed()"); }
	void ForceUpdateBasedPawnsMovements() { NativeCall<void>(this, "APrimalShip.ForceUpdateBasedPawnsMovements()"); }
	void SimulatePhysics(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.SimulatePhysics(float)", DeltaSeconds); }
	int GetShipSailCount() { return NativeCall<int>(this, "APrimalShip.GetShipSailCount()"); }
	float GetTotalSailUnits() { return NativeCall<float>(this, "APrimalShip.GetTotalSailUnits()"); }
	float GetShipAccelerationMultiplier(bool bAdjustBasedOnCurrentSpeed) { return NativeCall<float, bool>(this, "APrimalShip.GetShipAccelerationMultiplier(bool)", bAdjustBasedOnCurrentSpeed); }
	AShooterCharacter* GetDriver() { return NativeCall<AShooterCharacter*>(this, "APrimalShip.GetDriver()"); }
	bool AreAllMannedSailsOpening() { return NativeCall<bool>(this, "APrimalShip.AreAllMannedSailsOpening()"); }
	void ForceUnanchored() { NativeCall<void>(this, "APrimalShip.ForceUnanchored()"); }
	void MulticastAquiredCargo_Implementation(bool bShowNotification) { NativeCall<void, bool>(this, "APrimalShip.MulticastAquiredCargo_Implementation(bool)", bShowNotification); }
	void UnregisterRoundRobinWeldedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.UnregisterRoundRobinWeldedStructure(APrimalStructure*)", Structure); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyInstance) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalShip.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyInstance); }
	void SetHullMesh(UStaticMeshComponent* MeshComp) { NativeCall<void, UStaticMeshComponent*>(this, "APrimalShip.SetHullMesh(UStaticMeshComponent*)", MeshComp); }
	void AquireLoot(APrimalShipLootCrate* InLoot) { NativeCall<void, APrimalShipLootCrate*>(this, "APrimalShip.AquireLoot(APrimalShipLootCrate*)", InLoot); }
	void RefreshLongRangeStasis() { NativeCall<void>(this, "APrimalShip.RefreshLongRangeStasis()"); }
	void RefreshAllRoundRobinWeldedStructures() { NativeCall<void>(this, "APrimalShip.RefreshAllRoundRobinWeldedStructures()"); }
	bool IsRepairable(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalShip.IsRepairable(AShooterPlayerController*)", ForPC); }
	bool WantsLongRangeStasis() { return NativeCall<bool>(this, "APrimalShip.WantsLongRangeStasis()"); }
	bool DoesShipHaveBasedPawns(bool bRequireActivePawns) { return NativeCall<bool, bool>(this, "APrimalShip.DoesShipHaveBasedPawns(bool)", bRequireActivePawns); }
	void Multi_OnShipRow_Implementation() { NativeCall<void>(this, "APrimalShip.Multi_OnShipRow_Implementation()"); }
	void OnSetWantsForcedMovement() { NativeCall<void>(this, "APrimalShip.OnSetWantsForcedMovement()"); }
	float GetAverageMannedSailOpenRatio() { return NativeCall<float>(this, "APrimalShip.GetAverageMannedSailOpenRatio()"); }
	bool HasOpenUnMannedSails() { return NativeCall<bool>(this, "APrimalShip.HasOpenUnMannedSails()"); }
	bool Interface_AttemptToReconnectParticularStructureToShipOnClient_Implementation(AActor* OverlapActor) { return NativeCall<bool, AActor*>(this, "APrimalShip.Interface_AttemptToReconnectParticularStructureToShipOnClient_Implementation(AActor*)", OverlapActor); }
	float GetSailRotation() { return NativeCall<float>(this, "APrimalShip.GetSailRotation()"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalShip.GetHealthPercentage()"); }
	void BPSimulatePhysics(float DeltaTime) { NativeCall<void, float>(this, "APrimalShip.BPSimulatePhysics(float)", DeltaTime); }
	bool AreAllMannedSailsClosing() { return NativeCall<bool>(this, "APrimalShip.AreAllMannedSailsClosing()"); }
	void TickCriticalShipStructures(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.TickCriticalShipStructures(float)", DeltaSeconds); }
	float GetMaxMovementWeight() { return NativeCall<float>(this, "APrimalShip.GetMaxMovementWeight()"); }
	void HandleStowedAnchor() { NativeCall<void>(this, "APrimalShip.HandleStowedAnchor()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalShip._getUObject()"); }
	void UpdateNetworkAndStasisRangeMultiplier() { NativeCall<void>(this, "APrimalShip.UpdateNetworkAndStasisRangeMultiplier()"); }
	void AttemptToReconnectStructuresOnClient() { NativeCall<void>(this, "APrimalShip.AttemptToReconnectStructuresOnClient()"); }
	bool CanBeCarried(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalShip.CanBeCarried(APrimalCharacter*)", ByCarrier); }
	bool IsPrimalShip() { return NativeCall<bool>(this, "APrimalShip.IsPrimalShip()"); }
	float GetSailUnitsMax() { return NativeCall<float>(this, "APrimalShip.GetSailUnitsMax()"); }
	void ForceMoveShipBackwards(bool bReset) { NativeCall<void, bool>(this, "APrimalShip.ForceMoveShipBackwards(bool)", bReset); }
	bool IsPlayerAtHelm(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalShip.IsPlayerAtHelm(AShooterPlayerController*)", PC); }
	USceneComponent* GetParticleBaseComponent() { return NativeCall<USceneComponent*>(this, "APrimalShip.GetParticleBaseComponent()"); }
	void FirstTicked() { NativeCall<void>(this, "APrimalShip.FirstTicked()"); }
	void OnInventoryItemRemoved(UPrimalInventoryComponent* Inventory, UPrimalItem* Item, int AmountRemoved) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, int>(this, "APrimalShip.OnInventoryItemRemoved(UPrimalInventoryComponent*,UPrimalItem*,int)", Inventory, Item, AmountRemoved); }
	float GetInventoryWeightMultiplierForSaddledContainers() { return NativeCall<float>(this, "APrimalShip.GetInventoryWeightMultiplierForSaddledContainers()"); }
	void Multi_FullyUnanchor_Implementation() { NativeCall<void>(this, "APrimalShip.Multi_FullyUnanchor_Implementation()"); }
	void DelayedFullyAnchor() { NativeCall<void>(this, "APrimalShip.DelayedFullyAnchor()"); }
	float GetMaxThrottleForce() { return NativeCall<float>(this, "APrimalShip.GetMaxThrottleForce()"); }
	bool IsCharacterInCannon() { return NativeCall<bool>(this, "APrimalShip.IsCharacterInCannon()"); }
	void OnShipRowingStop() { NativeCall<void>(this, "APrimalShip.OnShipRowingStop()"); }
	void UpdateRaftRelevant() { NativeCall<void>(this, "APrimalShip.UpdateRaftRelevant()"); }
	void OnShipRowingStart() { NativeCall<void>(this, "APrimalShip.OnShipRowingStart()"); }
	bool TryToggleLadders(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalShip.TryToggleLadders(AShooterPlayerController*)", PC); }
	float OverrideBasedCharacterTargetingDesirability(float InTargetingDesire, APrimalCharacter* BasedCharacter, APrimalCharacter* Attacker) { return NativeCall<float, float, APrimalCharacter*, APrimalCharacter*>(this, "APrimalShip.OverrideBasedCharacterTargetingDesirability(float,APrimalCharacter*,APrimalCharacter*)", InTargetingDesire, BasedCharacter, Attacker); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalShip.ChangeActorTeam(int)", NewTeam); }
	void ApplySteeringForce() { NativeCall<void>(this, "APrimalShip.ApplySteeringForce()"); }
	void RemoveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController* FromPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalShip.RemoveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)", FromPC); }
	bool HasOpenSails() { return NativeCall<bool>(this, "APrimalShip.HasOpenSails()"); }
	void SlowServerTick(float DeltaTime) { NativeCall<void, float>(this, "APrimalShip.SlowServerTick(float)", DeltaTime); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalShip.PostInitializeComponents()"); }
	void ServerRequestUseItemWithActor(APlayerController* ForPC, UObject* anItem, int AdditionalData, bool bReduceDurability) { NativeCall<void, APlayerController*, UObject*, int, bool>(this, "APrimalShip.ServerRequestUseItemWithActor(APlayerController*,UObject*,int,bool)", ForPC, anItem, AdditionalData, bReduceDurability); }
	void HandleAnchorMovement(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.HandleAnchorMovement(float)", DeltaSeconds); }
	float GetSailTurningInterpSpeed() { return NativeCall<float>(this, "APrimalShip.GetSailTurningInterpSpeed()"); }
	float GetCannonFireIntervalMultiplier() { return NativeCall<float>(this, "APrimalShip.GetCannonFireIntervalMultiplier()"); }
	void Multi_FullyChangeStateTo_Implementation(bool WantsToBeAnchoredAndNotDocked, bool WantsToBeUnanchoredAndFloatingAndNotDocked, int ReplicatedDockID) { NativeCall<void, bool, bool, int>(this, "APrimalShip.Multi_FullyChangeStateTo_Implementation(bool,bool,int)", WantsToBeAnchoredAndNotDocked, WantsToBeUnanchoredAndFloatingAndNotDocked, ReplicatedDockID); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APrimalShip.MoveUp(float)", Val); }
	void StartRepairing(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalShip.StartRepairing(AShooterPlayerController*)", ForPC); }
	void TickMusic() { NativeCall<void>(this, "APrimalShip.TickMusic()"); }
	void OnRep_ReplicatedCurrentWetDockStructureID() { NativeCall<void>(this, "APrimalShip.OnRep_ReplicatedCurrentWetDockStructureID()"); }
	bool CanPlayerEditShipSkills(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalShip.CanPlayerEditShipSkills(AShooterPlayerController*)", ForPC); }
	void SetupColorization() { NativeCall<void>(this, "APrimalShip.SetupColorization()"); }
	void OnRemoveCriticalShipStructure(APrimalStructure* OldStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.OnRemoveCriticalShipStructure(APrimalStructure*)", OldStructure); }
	void OnDestroy() { NativeCall<void>(this, "APrimalShip.OnDestroy()"); }
	void StartAnchoring() { NativeCall<void>(this, "APrimalShip.StartAnchoring()"); }
	bool IsFullyDocked() { return NativeCall<bool>(this, "APrimalShip.IsFullyDocked()"); }
	float GetShipHeadwindPenaltyMultiplier() { return NativeCall<float>(this, "APrimalShip.GetShipHeadwindPenaltyMultiplier()"); }
	void UpdateFinalAnchorLengthState() { NativeCall<void>(this, "APrimalShip.UpdateFinalAnchorLengthState()"); }
	float GetShipTargetThrottleRatio() { return NativeCall<float>(this, "APrimalShip.GetShipTargetThrottleRatio()"); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyInstance) { NativeCall<void, APlayerController*, int, int>(this, "APrimalShip.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyInstance); }
	void UpdateRudderAngle(float deltaSeconds) { NativeCall<void, float>(this, "APrimalShip.UpdateRudderAngle(float)", deltaSeconds); }
	void TargetedBy(APrimalDinoCharacter* AttackerDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalShip.TargetedBy(APrimalDinoCharacter*)", AttackerDino); }
	void MulticastAquiredCargo(bool bShowNotification) { NativeCall<void, bool>(this, "APrimalShip.MulticastAquiredCargo(bool)", bShowNotification); }
	void SetThrottleInput(float Val) { NativeCall<void, float>(this, "APrimalShip.SetThrottleInput(float)", Val); }
	void SetDeath(bool bJoinInProgress, bool AllowMovementModeChange) { NativeCall<void, bool, bool>(this, "APrimalShip.SetDeath(bool,bool)", bJoinInProgress, AllowMovementModeChange); }
	void MultiToggleTorches_Implementation(bool bTurnOn) { NativeCall<void, bool>(this, "APrimalShip.MultiToggleTorches_Implementation(bool)", bTurnOn); }
	void ResetSailingInputs() { NativeCall<void>(this, "APrimalShip.ResetSailingInputs()"); }
	void SpawnInitialStructures() { NativeCall<void>(this, "APrimalShip.SpawnInitialStructures()"); }
	void RefreshColorizationHelper(UMeshComponent* TheMesh) { NativeCall<void, UMeshComponent*>(this, "APrimalShip.RefreshColorizationHelper(UMeshComponent*)", TheMesh); }
	void ForceMoveShip() { NativeCall<void>(this, "APrimalShip.ForceMoveShip()"); }
	APhysicsVolume* GetRaftPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "APrimalShip.GetRaftPhysicsVolume()"); }
	void OnRep_IsAnchoring() { NativeCall<void>(this, "APrimalShip.OnRep_IsAnchoring()"); }
	bool CanDoAnchoring_Implementation() { return NativeCall<bool>(this, "APrimalShip.CanDoAnchoring_Implementation()"); }
	void UpdateShouldTickRowing() { NativeCall<void>(this, "APrimalShip.UpdateShouldTickRowing()"); }
	void ClientSetAttachedSeat_Implementation(APrimalStructureSeating_DriverSeat* InAttachedSeat) { NativeCall<void, APrimalStructureSeating_DriverSeat*>(this, "APrimalShip.ClientSetAttachedSeat_Implementation(APrimalStructureSeating_DriverSeat*)", InAttachedSeat); }
	void CalculateSailRotation() { NativeCall<void>(this, "APrimalShip.CalculateSailRotation()"); }
	bool CanFinishAnchorLowering() { return NativeCall<bool>(this, "APrimalShip.CanFinishAnchorLowering()"); }
	float GetItemSpoilTimeMultiplierForSaddledContainers() { return NativeCall<float>(this, "APrimalShip.GetItemSpoilTimeMultiplierForSaddledContainers()"); }
	bool ShouldDisableTPVCameraInterpolationWhileBasedOn() { return NativeCall<bool>(this, "APrimalShip.ShouldDisableTPVCameraInterpolationWhileBasedOn()"); }
	void RemoveStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.RemoveStructure(APrimalStructure*)", Structure); }
	void BPOnUnAnchor() { NativeCall<void>(this, "APrimalShip.BPOnUnAnchor()"); }
	bool IsShipCheckingForRowing() { return NativeCall<bool>(this, "APrimalShip.IsShipCheckingForRowing()"); }
	float GetRowingInterval() { return NativeCall<float>(this, "APrimalShip.GetRowingInterval()"); }
	void Stasis() { NativeCall<void>(this, "APrimalShip.Stasis()"); }
	bool IsLargeRaft() { return NativeCall<bool>(this, "APrimalShip.IsLargeRaft()"); }
	bool BPAllowMovementSound_Implementation() { return NativeCall<bool>(this, "APrimalShip.BPAllowMovementSound_Implementation()"); }
	void ApplySaddledStructureSceneState(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.ApplySaddledStructureSceneState(APrimalStructure*)", Structure); }
	void CalcNextCombatMusic() { NativeCall<void>(this, "APrimalShip.CalcNextCombatMusic()"); }
	void OnStructurePlacedOnShip(APrimalStructure* NewStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.OnStructurePlacedOnShip(APrimalStructure*)", NewStructure); }
	bool CanDoDocking() { return NativeCall<bool>(this, "APrimalShip.CanDoDocking()"); }
	void SetShipDriver(AShooterCharacter* NewDriver) { NativeCall<void, AShooterCharacter*>(this, "APrimalShip.SetShipDriver(AShooterCharacter*)", NewDriver); }
	bool ShouldRouteGiveHarvestingResourcesToCustomFunction() { return NativeCall<bool>(this, "APrimalShip.ShouldRouteGiveHarvestingResourcesToCustomFunction()"); }
	bool CanDoAnchoring() { return NativeCall<bool>(this, "APrimalShip.CanDoAnchoring()"); }
	bool AlwaysAutoPilot() { return NativeCall<bool>(this, "APrimalShip.AlwaysAutoPilot()"); }
	bool CheckJumpOutOfWater() { return NativeCall<bool>(this, "APrimalShip.CheckJumpOutOfWater()"); }
	int GetShipSkillPointsSpent() { return NativeCall<int>(this, "APrimalShip.GetShipSkillPointsSpent()"); }
	float GetRudderSteeringRate() { return NativeCall<float>(this, "APrimalShip.GetRudderSteeringRate()"); }
	void SyncRowingVarsToNPCs() { NativeCall<void>(this, "APrimalShip.SyncRowingVarsToNPCs()"); }
	float GetCurrentMaxRepairHealthPercentage() { return NativeCall<float>(this, "APrimalShip.GetCurrentMaxRepairHealthPercentage()"); }
	double GetLastRowTime() { return NativeCall<double>(this, "APrimalShip.GetLastRowTime()"); }
	bool AllowAutoPilot_Tick() { return NativeCall<bool>(this, "APrimalShip.AllowAutoPilot_Tick()"); }
	void TimerMulticastOnCargoAcquired() { NativeCall<void>(this, "APrimalShip.TimerMulticastOnCargoAcquired()"); }
	void RefreshSaddledStructureSceneState() { NativeCall<void>(this, "APrimalShip.RefreshSaddledStructureSceneState()"); }
	void OnSaddleStructAdded(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.OnSaddleStructAdded(APrimalStructure*)", TheStruct); }
	void OnAddCriticalShipStructure(APrimalStructure* NewStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.OnAddCriticalShipStructure(APrimalStructure*)", NewStructure); }
	void SetSteeringInput(float Val) { NativeCall<void, float>(this, "APrimalShip.SetSteeringInput(float)", Val); }
	void UpdateReplicatedAvailableShipRepairResourceQuantities() { NativeCall<void>(this, "APrimalShip.UpdateReplicatedAvailableShipRepairResourceQuantities()"); }
	void CheckForChangeThrottle() { NativeCall<void>(this, "APrimalShip.CheckForChangeThrottle()"); }
	bool ShouldDisableBasedCharactersCameraInterpolation(APrimalCharacter* ForBasedChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalShip.ShouldDisableBasedCharactersCameraInterpolation(APrimalCharacter*)", ForBasedChar); }
	int GetShipRowingSeatCount() { return NativeCall<int>(this, "APrimalShip.GetShipRowingSeatCount()"); }
	UPrimalShipCannonComponent* GetCannonForCharacter(AShooterCharacter* Character) { return NativeCall<UPrimalShipCannonComponent*, AShooterCharacter*>(this, "APrimalShip.GetCannonForCharacter(AShooterCharacter*)", Character); }
	void RegisterRoundRobinWeldedStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.RegisterRoundRobinWeldedStructure(APrimalStructure*)", Structure); }
	void OnStructureRemovedFromShip(APrimalStructure* OldStructure) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.OnStructureRemovedFromShip(APrimalStructure*)", OldStructure); }
	void UpdateNameplateText() { NativeCall<void>(this, "APrimalShip.UpdateNameplateText()"); }
	bool BPCanAnchor() { return NativeCall<bool>(this, "APrimalShip.BPCanAnchor()"); }
	void UpdateDockedShipVisibility() { NativeCall<void>(this, "APrimalShip.UpdateDockedShipVisibility()"); }
	void SetShipReleasedState(bool bIsReleased, APlayerController* ForPC) { NativeCall<void, bool, APlayerController*>(this, "APrimalShip.SetShipReleasedState(bool,APlayerController*)", bIsReleased, ForPC); }
	float GetTimeToResetRudderAngle(float WithInput) { return NativeCall<float, float>(this, "APrimalShip.GetTimeToResetRudderAngle(float)", WithInput); }
	void OnRep_ReplicatedAnchorState() { NativeCall<void>(this, "APrimalShip.OnRep_ReplicatedAnchorState()"); }
	float GetSailUnitPercentage() { return NativeCall<float>(this, "APrimalShip.GetSailUnitPercentage()"); }
	void UnlockAllShipSkills(AShooterPlayerController* CallingPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalShip.UnlockAllShipSkills(AShooterPlayerController*)", CallingPC); }
	void TickShipScraping() { NativeCall<void>(this, "APrimalShip.TickShipScraping()"); }
	void UpdateLastRenderTime() { NativeCall<void>(this, "APrimalShip.UpdateLastRenderTime()"); }
	float GetManeuverabilityMultiplier() { return NativeCall<float>(this, "APrimalShip.GetManeuverabilityMultiplier()"); }
	static UScriptStruct* StaticGetPrimalShipSparseClassDataScriptStruct() { return NativeCall<UScriptStruct*>(nullptr, "APrimalShip.StaticGetPrimalShipSparseClassDataScriptStruct()"); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APrimalShip.MoveForward(float)", Val); }
	void CalculateSteeringVelocity() { NativeCall<void>(this, "APrimalShip.CalculateSteeringVelocity()"); }
	float GetSteeringForce() { return NativeCall<float>(this, "APrimalShip.GetSteeringForce()"); }
	USoundBase* GetNextCombatMusic_Implementation(APrimalCharacter* forCharacter, bool bIsDaytime) { return NativeCall<USoundBase*, APrimalCharacter*, bool>(this, "APrimalShip.GetNextCombatMusic_Implementation(APrimalCharacter*,bool)", forCharacter, bIsDaytime); }
	void SpawnAnchor() { NativeCall<void>(this, "APrimalShip.SpawnAnchor()"); }
	void UpdateAttachedCriticalStructuresOnClient(APrimalStructure* NewStructureAdded) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.UpdateAttachedCriticalStructuresOnClient(APrimalStructure*)", NewStructureAdded); }
	void BPOnAnchor() { NativeCall<void>(this, "APrimalShip.BPOnAnchor()"); }
	void OnSaddleStructRemoved(APrimalStructure* TheStruct) { NativeCall<void, APrimalStructure*>(this, "APrimalShip.OnSaddleStructRemoved(APrimalStructure*)", TheStruct); }
	bool ShouldEnableIKBasedOn() { return NativeCall<bool>(this, "APrimalShip.ShouldEnableIKBasedOn()"); }
	float GetShipWeightPercentage() { return NativeCall<float>(this, "APrimalShip.GetShipWeightPercentage()"); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "APrimalShip.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
	float GetCannonballSpeedMultiplier() { return NativeCall<float>(this, "APrimalShip.GetCannonballSpeedMultiplier()"); }
	void RemoveHotbarSkills(AShooterPlayerController* FromPlayer) { NativeCall<void, AShooterPlayerController*>(this, "APrimalShip.RemoveHotbarSkills(AShooterPlayerController*)", FromPlayer); }
	float GetShipRowingInput() { return NativeCall<float>(this, "APrimalShip.GetShipRowingInput()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalShip.PreInitializeComponents()"); }
	void TickRowing() { NativeCall<void>(this, "APrimalShip.TickRowing()"); }
	void RecomputeBuiltInLadderExtentsOnLoad() { NativeCall<void>(this, "APrimalShip.RecomputeBuiltInLadderExtentsOnLoad()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalShip"); }
	void UpdateTorches() { NativeCall<void>(this, "APrimalShip.UpdateTorches()"); }
	void ShipRow() { NativeCall<void>(this, "APrimalShip.ShipRow()"); }
	void UpdateSailingVars() { NativeCall<void>(this, "APrimalShip.UpdateSailingVars()"); }
	float GetMaximumAnchorLength() { return NativeCall<float>(this, "APrimalShip.GetMaximumAnchorLength()"); }
	void ForceUnanchored_Implementation() { NativeCall<void>(this, "APrimalShip.ForceUnanchored_Implementation()"); }
	bool IsAirShip() { return NativeCall<bool>(this, "APrimalShip.IsAirShip()"); }
	void RefreshVesselDynamicsState() { NativeCall<void>(this, "APrimalShip.RefreshVesselDynamicsState()"); }
	float GetMaxShipSpeed(bool bIncludeWind, bool bIncludeOpenRatio, bool bIncludeSailHealth, bool bGetAsForce) { return NativeCall<float, bool, bool, bool, bool>(this, "APrimalShip.GetMaxShipSpeed(bool,bool,bool,bool)", bIncludeWind, bIncludeOpenRatio, bIncludeSailHealth, bGetAsForce); }
	float GetShipMovementForceMult() { return NativeCall<float>(this, "APrimalShip.GetShipMovementForceMult()"); }
	void ApplyMaterailDamageEffect(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.ApplyMaterailDamageEffect(float)", DeltaSeconds); }
	bool IsVehicle() { return NativeCall<bool>(this, "APrimalShip.IsVehicle()"); }
	bool CanDoAnchoringInternal() { return NativeCall<bool>(this, "APrimalShip.CanDoAnchoringInternal()"); }
	float GetSteeringForceMultiplier() { return NativeCall<float>(this, "APrimalShip.GetSteeringForceMultiplier()"); }
	void TameDino(AShooterPlayerController* ForPC, bool bIgnoreMaxTameLimit, int OverrideTamingTeamID, bool bPreventNameDialog, bool bSkipAddingTamedLevels, bool bSuppressNotifications, bool bPreventDossierAndMilestones = false) { NativeCall<void, AShooterPlayerController*, bool, int, bool, bool, bool, bool>(this, "APrimalShip.TameDino(AShooterPlayerController*,bool,int,bool,bool,bool,bool)", ForPC, bIgnoreMaxTameLimit, OverrideTamingTeamID, bPreventNameDialog, bSkipAddingTamedLevels, bSuppressNotifications, bPreventDossierAndMilestones); }
	void UpdateSwimmingState() { NativeCall<void>(this, "APrimalShip.UpdateSwimmingState()"); }
	void SetThrottleForceMultiplier(float InValue) { NativeCall<void, float>(this, "APrimalShip.SetThrottleForceMultiplier(float)", InValue); }
	bool HasResourcesForRepair(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalShip.HasResourcesForRepair(AShooterPlayerController*)", ForPC); }
	bool IsCheatWind() { return NativeCall<bool>(this, "APrimalShip.IsCheatWind()"); }
	APrimalStructure* GetMainDriverSeat() { return NativeCall<APrimalStructure*>(this, "APrimalShip.GetMainDriverSeat()"); }
	bool AllowAutoPilot() { return NativeCall<bool>(this, "APrimalShip.AllowAutoPilot()"); }
	void KillThrottleAndInputs() { NativeCall<void>(this, "APrimalShip.KillThrottleAndInputs()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalShip.Unstasis()"); }
	void ForceAnchored_Implementation() { NativeCall<void>(this, "APrimalShip.ForceAnchored_Implementation()"); }
	bool BaseIgnoreWaveLocking(const APrimalCharacter* BasedChar) { return NativeCall<bool, const APrimalCharacter*>(this, "APrimalShip.BaseIgnoreWaveLocking(APrimalCharacter*)", BasedChar); }
	UStaticMeshComponent* GetAnchorAttachMesh() { return NativeCall<UStaticMeshComponent*>(this, "APrimalShip.GetAnchorAttachMesh()"); }
	void GiveHotbarSkills(AShooterPlayerController* ToPlayer) { NativeCall<void, AShooterPlayerController*>(this, "APrimalShip.GiveHotbarSkills(AShooterPlayerController*)", ToPlayer); }
	bool IsRammingVelocitySkillActive() { return NativeCall<bool>(this, "APrimalShip.IsRammingVelocitySkillActive()"); }
	void GiveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController* ToPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalShip.GiveProviderHotbarReplacerBuff_Implementation(AShooterPlayerController*)", ToPC); }
	void InterpThrottleAndInputs(float InterpTarget, float DeltaSeconds) { NativeCall<void, float, float>(this, "APrimalShip.InterpThrottleAndInputs(float,float)", InterpTarget, DeltaSeconds); }
	void CalculateThrottleForce() { NativeCall<void>(this, "APrimalShip.CalculateThrottleForce()"); }
	float GetThrottleForceMultiplier() { return NativeCall<float>(this, "APrimalShip.GetThrottleForceMultiplier()"); }
	bool ShouldOverrideBasedCharacterTargetingDesirability() { return NativeCall<bool>(this, "APrimalShip.ShouldOverrideBasedCharacterTargetingDesirability()"); }
	float GetAcceleratedScalar(bool bInverse) { return NativeCall<float, bool>(this, "APrimalShip.GetAcceleratedScalar(bool)", bInverse); }
	void SetSaddleContainerInventoryViewers(AShooterPlayerController* RiderPC, bool bRegister) { NativeCall<void, AShooterPlayerController*, bool>(this, "APrimalShip.SetSaddleContainerInventoryViewers(AShooterPlayerController*,bool)", RiderPC, bRegister); }
	void BeginPlay() { NativeCall<void>(this, "APrimalShip.BeginPlay()"); }
	bool CanDoPhysicsRotationAccelerationFollowsRotationDirectMove() { return NativeCall<bool>(this, "APrimalShip.CanDoPhysicsRotationAccelerationFollowsRotationDirectMove()"); }
	void OnRep_UnlockedShipSkillNodes() { NativeCall<void>(this, "APrimalShip.OnRep_UnlockedShipSkillNodes()"); }
	void TempDisableForcedVelocityDirection() { NativeCall<void>(this, "APrimalShip.TempDisableForcedVelocityDirection()"); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "APrimalShip.TeleportSucceeded(bool,bool)", bIsATest, bSimpleTeleport); }
	bool ShouldApplyReplicatedVesselState() { return NativeCall<bool>(this, "APrimalShip.ShouldApplyReplicatedVesselState()"); }
	bool AutoRequestSaddleItemContainerInventories() { return NativeCall<bool>(this, "APrimalShip.AutoRequestSaddleItemContainerInventories()"); }
	void BP_OnShipRow() { NativeCall<void>(this, "APrimalShip.BP_OnShipRow()"); }
	bool RaftStructurePreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalShip.RaftStructurePreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
	float GetShipWeightSinkingPercentage() { return NativeCall<float>(this, "APrimalShip.GetShipWeightSinkingPercentage()"); }
	int GetMannedSailsCount() { return NativeCall<int>(this, "APrimalShip.GetMannedSailsCount()"); }
	void Internal_FullyAnchor() { NativeCall<void>(this, "APrimalShip.Internal_FullyAnchor()"); }
	bool IsARaft() { return NativeCall<bool>(this, "APrimalShip.IsARaft()"); }
	float GetShipFlatMovementSpeedBonus(bool bAdjustBasedOnCurrentSpeed) { return NativeCall<float, bool>(this, "APrimalShip.GetShipFlatMovementSpeedBonus(bool)", bAdjustBasedOnCurrentSpeed); }
	bool CanDoDockingInternal() { return NativeCall<bool>(this, "APrimalShip.CanDoDockingInternal()"); }
	void RefreshColorization(bool bForceRefresh) { NativeCall<void, bool>(this, "APrimalShip.RefreshColorization(bool)", bForceRefresh); }
	void MultiToggleTorches(bool bTurnOn) { NativeCall<void, bool>(this, "APrimalShip.MultiToggleTorches(bool)", bTurnOn); }
	void Multi_FullyAnchor() { NativeCall<void>(this, "APrimalShip.Multi_FullyAnchor()"); }
	void BPTick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.BPTick(float)", DeltaSeconds); }
	void BeginDestroy() { NativeCall<void>(this, "APrimalShip.BeginDestroy()"); }
	void Internal_FullyChangeStateTo(bool WantsToBeAnchoredAndNotDocked, bool WantsToBeUnanchoredAndFloatingAndNotDocked, int ReplicatedDockID) { NativeCall<void, bool, bool, int>(this, "APrimalShip.Internal_FullyChangeStateTo(bool,bool,int)", WantsToBeAnchoredAndNotDocked, WantsToBeUnanchoredAndFloatingAndNotDocked, ReplicatedDockID); }
	void SetAutoThrottleActive(bool bActive) { NativeCall<void, bool>(this, "APrimalShip.SetAutoThrottleActive(bool)", bActive); }
	void OnStartSinking() { NativeCall<void>(this, "APrimalShip.OnStartSinking()"); }
	bool AlwaysAllowTargetingByWaterDinos() { return NativeCall<bool>(this, "APrimalShip.AlwaysAllowTargetingByWaterDinos()"); }
	void BPSetShipDriver(AShooterCharacter* NewDriver) { NativeCall<void, AShooterCharacter*>(this, "APrimalShip.BPSetShipDriver(AShooterCharacter*)", NewDriver); }
	float GetShipMovementSpeedMultiplier(bool bAdjustBasedOnCurrentSpeed) { return NativeCall<float, bool>(this, "APrimalShip.GetShipMovementSpeedMultiplier(bool)", bAdjustBasedOnCurrentSpeed); }
	void PostSpawnRefreshColors() { NativeCall<void>(this, "APrimalShip.PostSpawnRefreshColors()"); }
	bool IsShipBuiltInStructure(APrimalStructure* Structure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalShip.IsShipBuiltInStructure(APrimalStructure*)", Structure); }
	bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalShip.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
	float GetThrottleRatioInterpSpeed() { return NativeCall<float>(this, "APrimalShip.GetThrottleRatioInterpSpeed()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.Tick(float)", DeltaSeconds); }
	void MulticastSetShipDriver_Implementation(AShooterCharacter* NewDriver) { NativeCall<void, AShooterCharacter*>(this, "APrimalShip.MulticastSetShipDriver_Implementation(AShooterCharacter*)", NewDriver); }
	void Multi_OnShipRow() { NativeCall<void>(this, "APrimalShip.Multi_OnShipRow()"); }
	void SetTurningSailsInput(float Val) { NativeCall<void, float>(this, "APrimalShip.SetTurningSailsInput(float)", Val); }
	bool HasEnoughResourcesToRepair(AShooterPlayerController* ForPC, bool bUpdateAndReplicateRequirementData, float OverrideRepairPercent) { return NativeCall<bool, AShooterPlayerController*, bool, float>(this, "APrimalShip.HasEnoughResourcesToRepair(AShooterPlayerController*,bool,float)", ForPC, bUpdateAndReplicateRequirementData, OverrideRepairPercent); }
	void UpdateRowingVars() { NativeCall<void>(this, "APrimalShip.UpdateRowingVars()"); }
	void Destroyed() { NativeCall<void>(this, "APrimalShip.Destroyed()"); }
	bool IsFullyAnchored() { return NativeCall<bool>(this, "APrimalShip.IsFullyAnchored()"); }
	void UnweldAllStructuresFromShipHull() { NativeCall<void>(this, "APrimalShip.UnweldAllStructuresFromShipHull()"); }
	void OnRep_IsInWetDock() { NativeCall<void>(this, "APrimalShip.OnRep_IsInWetDock()"); }
	bool WantsVesselPhysics() { return NativeCall<bool>(this, "APrimalShip.WantsVesselPhysics()"); }
	void ForceAnchored() { NativeCall<void>(this, "APrimalShip.ForceAnchored()"); }
	int CanAddCriticalShipStructure(APrimalStructure* NewStructure, APrimalStructure* ReplacingStructure) { return NativeCall<int, APrimalStructure*, APrimalStructure*>(this, "APrimalShip.CanAddCriticalShipStructure(APrimalStructure*,APrimalStructure*)", NewStructure, ReplacingStructure); }
	void SetThrottleRatio(float NewRatio, bool bForceSetNow) { NativeCall<void, float, bool>(this, "APrimalShip.SetThrottleRatio(float,bool)", NewRatio, bForceSetNow); }
	void Multi_FullyUnanchor() { NativeCall<void>(this, "APrimalShip.Multi_FullyUnanchor()"); }
	bool IsDocked() { return NativeCall<bool>(this, "APrimalShip.IsDocked()"); }
	bool CanDoDocking_Implementation() { return NativeCall<bool>(this, "APrimalShip.CanDoDocking_Implementation()"); }
	float GetThrottleForce() { return NativeCall<float>(this, "APrimalShip.GetThrottleForce()"); }
	float GetRotationRateWithAcceleration11(float CurrentRotation, float TargetRotation, float RotationSpeed, float DeltaTime, float CurrentDesiredRotationRate, float DesiredRotationRate) { return NativeCall<float, float, float, float, float, float, float>(this, "APrimalShip.GetRotationRateWithAcceleration11(float,float,float,float,float,float)", CurrentRotation, TargetRotation, RotationSpeed, DeltaTime, CurrentDesiredRotationRate, DesiredRotationRate); }
	float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalShip.GetStructureDemolishTime()"); }
	bool CanFireCannons() { return NativeCall<bool>(this, "APrimalShip.CanFireCannons()"); }
	bool IsAutoPilotActive() { return NativeCall<bool>(this, "APrimalShip.IsAutoPilotActive()"); }
	void TickDeath(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShip.TickDeath(float)", DeltaSeconds); }
	void UnclaimShip() { NativeCall<void>(this, "APrimalShip.UnclaimShip()"); }
	bool BPSetThrottleInput(float Val) { return NativeCall<bool, float>(this, "APrimalShip.BPSetThrottleInput(float)", Val); }
	void Multi_FullyAnchor_Implementation() { NativeCall<void>(this, "APrimalShip.Multi_FullyAnchor_Implementation()"); }
	void UpdateFacingVisibility() { NativeCall<void>(this, "APrimalShip.UpdateFacingVisibility()"); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APrimalShip.MoveRight(float)", Val); }
	APrimalStructure* FindDockedShipyardByID() { return NativeCall<APrimalStructure*>(this, "APrimalShip.FindDockedShipyardByID()"); }
	float GetAnchorSetPercent() { return NativeCall<float>(this, "APrimalShip.GetAnchorSetPercent()"); }
	float GetRudderAngle() { return NativeCall<float>(this, "APrimalShip.GetRudderAngle()"); }
	void Internal_FullyUnanchor() { NativeCall<void>(this, "APrimalShip.Internal_FullyUnanchor()"); }
	void SetCharacterStatusTameable(bool bSetTameable, bool bCreateInventory, bool keepInventoryForWakingTame) { NativeCall<void, bool, bool, bool>(this, "APrimalShip.SetCharacterStatusTameable(bool,bool,bool)", bSetTameable, bCreateInventory, keepInventoryForWakingTame); }
	float GetCorpseLifespan() { return NativeCall<float>(this, "APrimalShip.GetCorpseLifespan()"); }
	bool AllowsShipyardDocking() { return NativeCall<bool>(this, "APrimalShip.AllowsShipyardDocking()"); }

	BitFieldValue<bool, unsigned char> bUseForcestoApply() { return { this, "APrimalShip.bUseForcestoApply"}; }
	BitFieldValue<bool, unsigned char> bBasingRequiresInteriorPosition() { return { this, "APrimalShip.bBasingRequiresInteriorPosition"}; }
	BitFieldValue<bool, unsigned char> bBasedCharactersForceDisableCollisionCheck() { return { this, "APrimalShip.bBasedCharactersForceDisableCollisionCheck"}; }
	BitFieldValue<bool, unsigned char> bCanHideSpanker() { return { this, "APrimalShip.bCanHideSpanker"}; }
	BitFieldValue<bool, unsigned __int32> bIsNPCShip() { return { this, "APrimalShip.bIsNPCShip"}; }
	BitFieldValue<bool, unsigned __int32> bSkipRamDamageWhenNPC() { return { this, "APrimalShip.bSkipRamDamageWhenNPC"}; }
	BitFieldValue<bool, unsigned __int32> bClientIsInterpolatingRaft() { return { this, "APrimalShip.bClientIsInterpolatingRaft"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPSimulatePhysics() { return { this, "APrimalShip.bUseBPSimulatePhysics"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseBPSimulatePhysics() { return { this, "APrimalShip.bOnlyUseBPSimulatePhysics"}; }
	BitFieldValue<bool, unsigned __int32> bIsSmallRaft() { return { this, "APrimalShip.bIsSmallRaft"}; }
	BitFieldValue<bool, unsigned __int32> bDebugStructures() { return { this, "APrimalShip.bDebugStructures"}; }
	BitFieldValue<bool, unsigned __int32> bDebugSteering() { return { this, "APrimalShip.bDebugSteering"}; }
	BitFieldValue<bool, unsigned __int32> bDebugSailing() { return { this, "APrimalShip.bDebugSailing"}; }
	BitFieldValue<bool, unsigned __int32> bDebugRowing() { return { this, "APrimalShip.bDebugRowing"}; }
	BitFieldValue<bool, unsigned __int32> bDebugRowing_ForceAllSeatsRowSync() { return { this, "APrimalShip.bDebugRowing_ForceAllSeatsRowSync"}; }
	BitFieldValue<bool, unsigned __int32> bAllowDriverSeats() { return { this, "APrimalShip.bAllowDriverSeats"}; }
	BitFieldValue<bool, unsigned __int32> bAllowSails() { return { this, "APrimalShip.bAllowSails"}; }
	BitFieldValue<bool, unsigned __int32> bAllowRowingSeats() { return { this, "APrimalShip.bAllowRowingSeats"}; }
	BitFieldValue<bool, unsigned __int32> bCanMoveWithoutRider() { return { this, "APrimalShip.bCanMoveWithoutRider"}; }
	BitFieldValue<bool, unsigned __int32> bSailsAffectThrottleLocation() { return { this, "APrimalShip.bSailsAffectThrottleLocation"}; }
	BitFieldValue<bool, unsigned __int32> bUseBP_AdjustRowingImpulse() { return { this, "APrimalShip.bUseBP_AdjustRowingImpulse"}; }
	BitFieldValue<bool, unsigned __int32> bIsCheckingThrottle() { return { this, "APrimalShip.bIsCheckingThrottle"}; }
	BitFieldValue<bool, unsigned __int32> bTickRowing() { return { this, "APrimalShip.bTickRowing"}; }
	BitFieldValue<bool, unsigned __int32> bAddedToActiveArray() { return { this, "APrimalShip.bAddedToActiveArray"}; }
	BitFieldValue<bool, unsigned __int32> bAllowRaftAttacks() { return { this, "APrimalShip.bAllowRaftAttacks"}; }
	BitFieldValue<bool, unsigned __int32> bAllowBasedCharactersAttacks() { return { this, "APrimalShip.bAllowBasedCharactersAttacks"}; }
	BitFieldValue<bool, unsigned __int32> bForceFirstPerson() { return { this, "APrimalShip.bForceFirstPerson"}; }
	BitFieldValue<bool, unsigned char> bFirstTicked() { return { this, "APrimalShip.bFirstTicked"}; }
	BitFieldValue<bool, unsigned char> bAttemptAnchoringNextFrame() { return { this, "APrimalShip.bAttemptAnchoringNextFrame"}; }
	BitFieldValue<bool, unsigned char> AreTorchesLit() { return { this, "APrimalShip.AreTorchesLit"}; }
	BitFieldValue<bool, unsigned char> bShouldHaveCargo() { return { this, "APrimalShip.bShouldHaveCargo"}; }
	BitFieldValue<bool, unsigned char> bReplicateCurrentSailRotation() { return { this, "APrimalShip.bReplicateCurrentSailRotation"}; }
	BitFieldValue<bool, unsigned char> bAllowShipForcedMovement() { return { this, "APrimalShip.bAllowShipForcedMovement"}; }
	BitFieldValue<bool, unsigned char> bClientSideSailingForces() { return { this, "APrimalShip.bClientSideSailingForces"}; }
	BitFieldValue<bool, unsigned char> bDeadTicked() { return { this, "APrimalShip.bDeadTicked"}; }
	BitFieldValue<bool, unsigned char> bAnchoredSetToOceanHeight() { return { this, "APrimalShip.bAnchoredSetToOceanHeight"}; }
	BitFieldValue<bool, unsigned char> bUseRaftBPTick() { return { this, "APrimalShip.bUseRaftBPTick"}; }
	BitFieldValue<bool, unsigned char> bUseBPSetThrottle() { return { this, "APrimalShip.bUseBPSetThrottle"}; }
	BitFieldValue<bool, unsigned char> bHealthPercentageUseHullHealth() { return { this, "APrimalShip.bHealthPercentageUseHullHealth"}; }
	BitFieldValue<bool, unsigned char> bSmallRaftPushAwayPlayers() { return { this, "APrimalShip.bSmallRaftPushAwayPlayers"}; }
	BitFieldValue<bool, unsigned char> bDisableShipHUD() { return { this, "APrimalShip.bDisableShipHUD"}; }
	BitFieldValue<bool, unsigned char> bForcePvEAllowNonAlignedShipBasing() { return { this, "APrimalShip.bForcePvEAllowNonAlignedShipBasing"}; }
	BitFieldValue<bool, unsigned char> bForceAllowSalvaging() { return { this, "APrimalShip.bForceAllowSalvaging"}; }
	BitFieldValue<bool, unsigned char> bShipHasSpecialAttack() { return { this, "APrimalShip.bShipHasSpecialAttack"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanAnchor() { return { this, "APrimalShip.bUseBPCanAnchor"}; }
	BitFieldValue<bool, unsigned __int32> bAllowAutoPilot() { return { this, "APrimalShip.bAllowAutoPilot"}; }
	BitFieldValue<bool, unsigned char> bIgnoreWindEffectiveness() { return { this, "APrimalShip.bIgnoreWindEffectiveness"}; }
	BitFieldValue<bool, unsigned char> bSpankerVisible() { return { this, "APrimalShip.bSpankerVisible"}; }
	BitFieldValue<bool, unsigned char> bAllowRudderAngleSpeedModification() { return { this, "APrimalShip.bAllowRudderAngleSpeedModification"}; }
	BitFieldValue<bool, unsigned char> bAllowSteeringForceModification() { return { this, "APrimalShip.bAllowSteeringForceModification"}; }
	BitFieldValue<bool, unsigned char> bAllowThrottleRatioInterpSpeedModification() { return { this, "APrimalShip.bAllowThrottleRatioInterpSpeedModification"}; }
	BitFieldValue<bool, unsigned char> bCanBeRepairedInOpenWater() { return { this, "APrimalShip.bCanBeRepairedInOpenWater"}; }
	BitFieldValue<bool, unsigned char> bSpawnScrapeVFX() { return { this, "APrimalShip.bSpawnScrapeVFX"}; }
	BitFieldValue<bool, unsigned char> bIgnoreBasedDinosWhenTeleporting() { return { this, "APrimalShip.bIgnoreBasedDinosWhenTeleporting"}; }

	UVesselDynamicsComponent*& VesselDynamicsComponentField() { return *GetNativePointerField<UVesselDynamicsComponent**>(this, "APrimalShip.VesselDynamicsComponent"); }
	UTexture2D*& IconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalShip.Icon"); }
	UAudioComponent*& MovingSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalShip.MovingSoundComponent"); }
	USoundBase*& MovingSoundCueField() { return *GetNativePointerField<USoundBase**>(this, "APrimalShip.MovingSoundCue"); }
	UAudioComponent*& CreakIdleComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalShip.CreakIdleComponent"); }
	UAudioComponent*& CreakMetalComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalShip.CreakMetalComponent"); }
	APrimalStructureSeating_DriverSeat*& AttachedDriverSeatField() { return *GetNativePointerField<APrimalStructureSeating_DriverSeat**>(this, "APrimalShip.AttachedDriverSeat"); }
	APrimalStructure*& AttachedDeckField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalShip.AttachedDeck"); }
	AActor*& AnchorActorField() { return *GetNativePointerField<AActor**>(this, "APrimalShip.AnchorActor"); }
	UTexture2D*& AnchoredIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalShip.AnchoredIcon"); }
	UTexture2D*& AnchorRaisingIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalShip.AnchorRaisingIcon"); }
	UTexture2D*& AnchorLoweringIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalShip.AnchorLoweringIcon"); }
	USoundCue*& PickedUpCargoSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.PickedUpCargoSound"); }
	USoundCue*& AnchorSound_MovingUpField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.AnchorSound_MovingUp"); }
	USoundCue*& AnchorSound_MovingUp_BreakWaterField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.AnchorSound_MovingUp_BreakWater"); }
	USoundCue*& AnchorSound_MovingUp_FinishField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.AnchorSound_MovingUp_Finish"); }
	USoundCue*& AnchorSound_MovingDownField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.AnchorSound_MovingDown"); }
	USoundCue*& AnchorSound_MovingDown_BreakWaterField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.AnchorSound_MovingDown_BreakWater"); }
	UStaticMeshComponent*& StowedAnchorComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalShip.StowedAnchorComponent"); }
	UAudioComponent*& AnchorSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalShip.AnchorSoundComponent"); }
	UMaterialInterface*& TorchMaterial_UnlitField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalShip.TorchMaterial_Unlit"); }
	UNiagaraSystem*& ShipDyingNiagaraFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalShip.ShipDyingNiagaraFX"); }
	UNiagaraSystem*& ShipSinkingNiagaraFXField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalShip.ShipSinkingNiagaraFX"); }
	UNiagaraComponent*& ActiveShipDyingNiagaraCompField() { return *GetNativePointerField<UNiagaraComponent**>(this, "APrimalShip.ActiveShipDyingNiagaraComp"); }
	UNiagaraComponent*& ActiveShipSinkingNiagaraCompField() { return *GetNativePointerField<UNiagaraComponent**>(this, "APrimalShip.ActiveShipSinkingNiagaraComp"); }
	USceneComponent*& RudderSteeringComponentField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalShip.RudderSteeringComponent"); }
	USphereComponent*& LongRangeStasisComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalShip.LongRangeStasisComponent"); }
	UTextRenderComponent*& NamePlateTextField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APrimalShip.NamePlateText"); }
	UPrimalShipCannonControlComponent*& CannonControlField() { return *GetNativePointerField<UPrimalShipCannonControlComponent**>(this, "APrimalShip.CannonControl"); }
	UNiagaraSystem*& ShipRammingNSField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalShip.ShipRammingNS"); }
	USoundCue*& ShipRammingSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalShip.ShipRammingSound"); }
	UNiagaraSystem*& ShipScrapeNSField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalShip.ShipScrapeNS"); }

	FShipSoundInfo& WheelsTurningSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.WheelsTurningSoundInfo"); }
	FShipSoundInfo& WheelsChangeDirectionSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.WheelsChangeDirectionSoundInfo"); }
	FShipSoundInfo& CreakIdleSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.CreakIdleSoundInfo"); }
	FShipSoundInfo& CreakMetalSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.CreakMetalSoundInfo"); }
	FShipSoundInfo& CreakFullSpeedSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.CreakFullSpeedSoundInfo"); }
	FShipSoundInfo& CreakChangeDirectionSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.CreakChangeDirectionSoundInfo"); }
	FShipSoundInfo& SailsChangingDirectionSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.SailsChangingDirectionSoundInfo"); }
	FShipSoundInfo& SailsRunningAgainstTheWindSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.SailsRunningAgainstTheWindSoundInfo"); }
	FShipSoundInfo& SailsRunningWithTheWindSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.SailsRunningWithTheWindSoundInfo"); }
	FShipSoundInfo& SailsPulledSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.SailsPulledSoundInfo"); }
	FShipSoundInfo& SailsOpenedSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.SailsOpenedSoundInfo"); }
	FShipSoundInfo& SailsPivotingSoundinfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.SailsPivotingSoundinfo"); }
	FShipSoundInfo& RopeReachingEndOfTravelSoundinfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.RopeReachingEndOfTravelSoundinfo"); }
	FShipSoundInfo& RopeBeingPulledSoundInfoField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.RopeBeingPulledSoundInfo"); }
	FShipSoundInfo& WaterSplashAgainstStillBoatField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.WaterSplashAgainstStillBoat"); }
	FShipSoundInfo& WaterSplashAgainstSlowBoatField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.WaterSplashAgainstSlowBoat"); }
	FShipSoundInfo& WaterSplashAgainstMediumSpeedBoatField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.WaterSplashAgainstMediumSpeedBoat"); }
	FShipSoundInfo& WaterSplashAgainstFastBoatField() { return *GetNativePointerField<FShipSoundInfo*>(this, "APrimalShip.WaterSplashAgainstFastBoat"); }
	UE::Math::TVector<double>& ClientRaftInterpLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.ClientRaftInterpLoc"); }
	UE::Math::TRotator<double>& ClientRaftInterpRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalShip.ClientRaftInterpRot"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& DriverField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "APrimalShip.Driver"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& LocalCaptainControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "APrimalShip.LocalCaptainController"); }
	FMusicTrackEntry& MaidenVoyageTrackField() { return *GetNativePointerField<FMusicTrackEntry*>(this, "APrimalShip.MaidenVoyageTrack"); }
	TArray<APrimalStructureSeating_DriverSeat*, TSizedDefaultAllocator<32> >& AttachedCaptiansOrderSeatsField() { return *GetNativePointerField<TArray<APrimalStructureSeating_DriverSeat*, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.AttachedCaptiansOrderSeats"); }
	TArray<UPrimalShipSailComponent*, TSizedDefaultAllocator<32> >& AttachedSailsField() { return *GetNativePointerField<TArray<UPrimalShipSailComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.AttachedSails"); }
	TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& AttachedMiscCriticalStructuresField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.AttachedMiscCriticalStructures"); }
	UE::Math::TVector<double>& Sails_ThrottleForceLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.Sails_ThrottleForceLocation"); }
	UE::Math::TVector<double>& ThrottleForceLocation_OffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.ThrottleForceLocation_Offset"); }
	UE::Math::TVector<double>& RudderCenterField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.RudderCenter"); }
	FOnShipAquiredCargo& OnShipAquiredCargoField() { return *GetNativePointerField<FOnShipAquiredCargo*>(this, "APrimalShip.OnShipAquiredCargo"); }
	FOnShipLostCargo& OnShipLostCargoField() { return *GetNativePointerField<FOnShipLostCargo*>(this, "APrimalShip.OnShipLostCargo"); }
	TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& AttachedRowingSeatsField() { return *GetNativePointerField<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.AttachedRowingSeats"); }
	TWeakObjectPtr<UStaticMeshComponent, FWeakObjectPtr>& HullMeshField() { return *GetNativePointerField<TWeakObjectPtr<UStaticMeshComponent, FWeakObjectPtr>*>(this, "APrimalShip.HullMesh"); }
	TArray<int, TSizedDefaultAllocator<32> >& HullColorSetIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.HullColorSetIndices"); }
	UE::Math::TVector<double>& AnchorReleaseLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.AnchorReleaseLocation"); }
	UE::Math::TVector<double>& StowedAnchorSocketOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.StowedAnchorSocketOffset"); }
	FMusicTrackEntry& CurrentCombatMusicTrackField() { return *GetNativePointerField<FMusicTrackEntry*>(this, "APrimalShip.CurrentCombatMusicTrack"); }
	UE::Math::TVector<double>& LastInWaterVolumeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.LastInWaterVolumeLocation"); }
	UE::Math::TVector<double>& LastInWaterVolumeRecoveryDirField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.LastInWaterVolumeRecoveryDir"); }
	UE::Math::TVector2<double>& MaxNameplateDimensionsField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalShip.MaxNameplateDimensions"); }
	UE::Math::TVector<double>& PreviousLinearVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.PreviousLinearVelocity"); }
	UE::Math::TVector<double>& PreviousAngularVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.PreviousAngularVelocity"); }
	UE::Math::TVector<double>& LastPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.LastPosition"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& CurrentManualFireLocationsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.CurrentManualFireLocations"); }
	FName& VesselDynamicsCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalShip.VesselDynamicsCollisionProfileName"); }
	FName& HullMeshCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalShip.HullMeshCollisionProfileName"); }
	UE::Math::TVector<double>& HackCheckingForInvalidPhysXLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.HackCheckingForInvalidPhysXLocation"); }
	UE::Math::TVector<double>& ShipVelocityLastTickField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.ShipVelocityLastTick"); }
	TArray<FName, TSizedDefaultAllocator<32> >& UnlockedShipSkillNodesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.UnlockedShipSkillNodes"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& UnlockedShipSkillRanksField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.UnlockedShipSkillRanks"); }
	FShipSkillsChangedDelegate& OnShipSkillsChangedField() { return *GetNativePointerField<FShipSkillsChangedDelegate*>(this, "APrimalShip.OnShipSkillsChanged"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ActiveSkillsOnHotbarField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.ActiveSkillsOnHotbar"); }
	TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>& WeakDockedShipyardPtrField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>*>(this, "APrimalShip.WeakDockedShipyardPtr"); }
	TArray<TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& RoundRobinWeldedStructuresField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.RoundRobinWeldedStructures"); }
	TArray<int, TSizedDefaultAllocator<32> >& ReplicatedAvailableShipRepairResourceQuantitiesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.ReplicatedAvailableShipRepairResourceQuantities"); }
	FName& ShipRamSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalShip.ShipRamSocketName"); }
	UE::Math::TVector<double>& LastApproximateNonWavePhysicsVolumeLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalShip.LastApproximateNonWavePhysicsVolumeLoc"); }
	TWeakObjectPtr<APhysicsVolume, FWeakObjectPtr>& LastApproximateNonWaveWaterVolumeField() { return *GetNativePointerField<TWeakObjectPtr<APhysicsVolume, FWeakObjectPtr>*>(this, "APrimalShip.LastApproximateNonWaveWaterVolume"); }
	TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* GetAttachedMeshes(TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*, TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalShip.GetAttachedMeshes()", result); }
	double GetLastProviderSkillUsedTime_Implementation(FName SkillName) { return NativeCall<double, FName>(this, "APrimalShip.GetLastProviderSkillUsedTime_Implementation(FName)", SkillName); }
	float GetProviderSkillCooldownTimeRemaining_Implementation(FName SkillName) { return NativeCall<float, FName>(this, "APrimalShip.GetProviderSkillCooldownTimeRemaining_Implementation(FName)", SkillName); }
	void AddTorqueToBeApplied(UE::Math::TVector<double>* Force, FName ForceName) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName>(this, "APrimalShip.AddTorqueToBeApplied(UE::Math::TVector<double>,FName)", *Force, ForceName); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr> GetRider() { using AsaReturnType = TWeakObjectPtr < AShooterCharacter , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalShip.GetRider()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalShip.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void GetVesselImpactImpulseMultipliers(const UE::Math::TVector<double>& ContactPoint, const UE::Math::TVector<double>& Impulse, float& OutImpulseToApplyMulti, float& OutImpulseToReceiveMulti) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float&, float&>(this, "APrimalShip.GetVesselImpactImpulseMultipliers(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", ContactPoint, Impulse, OutImpulseToApplyMulti, OutImpulseToReceiveMulti); }
	bool TamedProcessOrder(APrimalCharacter* FromCharacter, EDinoTamedOrder::Type OrderType, bool bForce, AActor* enemyTarget) { return NativeCall<bool, APrimalCharacter*, EDinoTamedOrder::Type, bool, AActor*>(this, "APrimalShip.TamedProcessOrder(APrimalCharacter*,EDinoTamedOrder::Type,bool,AActor*)", FromCharacter, OrderType, bForce, enemyTarget); }
	bool GetProviderSkillModifier_Implementation(FName SkillName, FName ModifierName, float& OutModifier) { return NativeCall<bool, FName, FName, float&>(this, "APrimalShip.GetProviderSkillModifier_Implementation(FName,FName,float&)", SkillName, ModifierName, OutModifier); }
	FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalShip.GetEntryString()", result); }
	bool OverrideCannonAmmoConfig(int AmmoIndex, FCannonAmmoConfig& Config) { return NativeCall<bool, int, FCannonAmmoConfig&>(this, "APrimalShip.OverrideCannonAmmoConfig(int,FCannonAmmoConfig&)", AmmoIndex, Config); }
	UE::Math::TVector<double>* GetParticleSystemClampingVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShip.GetParticleSystemClampingVelocity()", result); }
	void AddImpulseToShipAtLocation(UE::Math::TVector<double>* Impulse, UE::Math::TVector<double>* Location) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalShip.AddImpulseToShipAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)", *Impulse, *Location); }
	void RemoveTorqueToBeApplied(FName ForceName) { NativeCall<void, FName>(this, "APrimalShip.RemoveTorqueToBeApplied(FName)", ForceName); }
	int GetProviderFreeSkillPoints_Implementation(AShooterPlayerController* ForPC, FName SkillTreeTag) { return NativeCall<int, AShooterPlayerController*, FName>(this, "APrimalShip.GetProviderFreeSkillPoints_Implementation(AShooterPlayerController*,FName)", ForPC, SkillTreeTag); }
	void Multi_StartSpawningShipScrapeVFX_Implementation(const UE::Math::TVector<double>& RelativeHitLoc) { NativeCall<void, const UE::Math::TVector<double>&>(this, "APrimalShip.Multi_StartSpawningShipScrapeVFX_Implementation(UE::Math::TVector<double>&)", RelativeHitLoc); }
	FName GetShipSkillTreeTag() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalShip.GetShipSkillTreeTag()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void TryUnlockShipSkill(FName NodeID, AShooterPlayerController* CallingPC, bool bForce) { NativeCall<void, FName, AShooterPlayerController*, bool>(this, "APrimalShip.TryUnlockShipSkill(FName,AShooterPlayerController*,bool)", NodeID, CallingPC, bForce); }
	void DoImpactDamageToShipStructures(UE::Math::TVector<double>* AtLocation, float AtRange, float AtDamage, AActor* DamageCauser) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, float, float, AActor *>(this, "APrimalShip.DoImpactDamageToShipStructures(UE::Math::TVector<double>,float,float,AActor*)", *AtLocation, AtRange, AtDamage, DamageCauser); }
	float GetGroundDistanceFromHullBottom(ECollisionChannel TraceChannel, bool& OutMovingAway) { return NativeCall<float, ECollisionChannel, bool&>(this, "APrimalShip.GetGroundDistanceFromHullBottom(ECollisionChannel,bool&)", TraceChannel, OutMovingAway); }
	float GetForwardVelocity(UE::Math::TVector<double>* OverrideVelocity) { if (!OverrideVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector < double >>(this, "APrimalShip.GetForwardVelocity(UE::Math::TVector<double>)", *OverrideVelocity); }
	void Multi_FullyDock_Implementation(UE::Math::TVector<double>* DesiredDockingLocation, UE::Math::TRotator<double>* DesiredDockingRotation, int ReplicatedDockID) { if (!DesiredDockingLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredDockingRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int>(this, "APrimalShip.Multi_FullyDock_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", *DesiredDockingLocation, *DesiredDockingRotation, ReplicatedDockID); }
	void Multi_SpawnShipRammingVFX_Implementation(const FHitResult& HitResult, float AppliedDamage) { NativeCall<void, const FHitResult&, float>(this, "APrimalShip.Multi_SpawnShipRammingVFX_Implementation(FHitResult&,float)", HitResult, AppliedDamage); }
	FString* GetEntryDescription(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalShip.GetEntryDescription()", result); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "APrimalShip.SetCharacterMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
	UNiagaraComponent* SpawnScrapeVFX(UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<UNiagaraComponent *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalShip.SpawnScrapeVFX(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *AtLocation, *AtRotation); }
	void ProviderSkillAddedToSlot_Implementation(FName ForSkill, int SlotIndex, AShooterPlayerController* InstigatingPC) { NativeCall<void, FName, int, AShooterPlayerController*>(this, "APrimalShip.ProviderSkillAddedToSlot_Implementation(FName,int,AShooterPlayerController*)", ForSkill, SlotIndex, InstigatingPC); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalShip.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	APhysicsVolume* GetNonWaveApproximateLocationPhysicsVolume(bool bForceUpdate, const UE::Math::TVector<double>& LocOffset, bool bFavorWaterVolume) { return NativeCall<APhysicsVolume*, bool, const UE::Math::TVector<double>&, bool>(this, "APrimalShip.GetNonWaveApproximateLocationPhysicsVolume(bool,UE::Math::TVector<double>&,bool)", bForceUpdate, LocOffset, bFavorWaterVolume); }
	void ForceDocked_Implementation(UE::Math::TVector<double>* DesiredDockingLocation, UE::Math::TRotator<double>* DesiredDockingRotation, int ReplicatedDockID) { if (!DesiredDockingLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredDockingRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int>(this, "APrimalShip.ForceDocked_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", *DesiredDockingLocation, *DesiredDockingRotation, ReplicatedDockID); }
	FString* GetShipRepairRequirementsString(FString* result, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, AShooterPlayerController*>(this, "APrimalShip.GetShipRepairRequirementsString(AShooterPlayerController*)", result, ForPC); }
	float GetDefaultShipSkillCooldownDuration(FName ForSkill, int Rank) { return NativeCall<float, FName, int>(this, "APrimalShip.GetDefaultShipSkillCooldownDuration(FName,int)", ForSkill, Rank); }
	bool TryActivateShipSkill(FName SkillTag, AShooterPlayerController* InstigatingPC, bool bFromClientRequest) { return NativeCall<bool, FName, AShooterPlayerController*, bool>(this, "APrimalShip.TryActivateShipSkill(FName,AShooterPlayerController*,bool)", SkillTag, InstigatingPC, bFromClientRequest); }
	UDataAsset* GetProviderSkillTreeForSkillData_Implementation(FName SkillName) { return NativeCall<UDataAsset*, FName>(this, "APrimalShip.GetProviderSkillTreeForSkillData_Implementation(FName)", SkillName); }
	void BPVesselDynamicsOnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UPrimitiveComponent *, UE :: Math :: TVector < double >, const FHitResult &>(this, "APrimalShip.BPVesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", OtherActor, OtherComp, *NormalImpulse, Hit); }
	TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* GetAllMeshesWithLadderSockets(TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* result, bool bSideLadders) { return NativeCall<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*, TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "APrimalShip.GetAllMeshesWithLadderSockets(bool)", result, bSideLadders); }
	void AddForceToBeAppliedAtCustomSocket(UE::Math::TVector<double>* Force, FName ForceName, FName SocketName) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, FName>(this, "APrimalShip.AddForceToBeAppliedAtCustomSocket(UE::Math::TVector<double>,FName,FName)", *Force, ForceName, SocketName); }
	UE::Math::TVector<double>* GetShipRightVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShip.GetShipRightVector()", result); }
	double GetLastShipSkillUsedTime(FName SkillName) { return NativeCall<double, FName>(this, "APrimalShip.GetLastShipSkillUsedTime(FName)", SkillName); }
	void BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*, TSizedDefaultAllocator<32> >& outActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalShip.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", outActors); }
	void SpawnScrapeVFXDeferred(UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalShip.SpawnScrapeVFXDeferred(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *AtLocation, *AtRotation); }
	void SetAimLocation(UE::Math::TVector<double>* AimLocation) { if (!AimLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalShip.SetAimLocation(UE::Math::TVector<double>)", *AimLocation); }
	bool IsProviderSkillReadyToUse_Implementation(FName SkillName) { return NativeCall<bool, FName>(this, "APrimalShip.IsProviderSkillReadyToUse_Implementation(FName)", SkillName); }
	float GetRammingDamage(AActor* HitTarget, UPrimitiveComponent* HitComponent, const UE::Math::TVector<double>& Impulse, const FHitResult& HitResult) { return NativeCall<float, AActor*, UPrimitiveComponent*, const UE::Math::TVector<double>&, const FHitResult&>(this, "APrimalShip.GetRammingDamage(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>&,FHitResult&)", HitTarget, HitComponent, Impulse, HitResult); }
	float TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent&, AController*, AActor*>(this, "APrimalShip.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float GetProviderCurrentSkillCooldownDuration_Implementation(FName SkillName) { return NativeCall<float, FName>(this, "APrimalShip.GetProviderCurrentSkillCooldownDuration_Implementation(FName)", SkillName); }
	void RemoveForceToBeApplied(FName ForceName) { NativeCall<void, FName>(this, "APrimalShip.RemoveForceToBeApplied(FName)", ForceName); }
	bool IsPointInsideThisRaft(const UE::Math::TVector<double>& TestPoint) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalShip.IsPointInsideThisRaft(UE::Math::TVector<double>&)", TestPoint); }
	void NetForceSyncTransform_Implementation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation) { if (!NewLocation) throw std::invalid_argument("Null native value parameter"); if (!NewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalShip.NetForceSyncTransform_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *NewLocation, *NewRotation); }
	APrimalBuff_Skill* ApplyShipSkillBuff(FName SkillTag, APrimalCharacter* BuffTarget, AActor* InstigatorActor, bool bOnlyTriggerActivatedIfInitialActivation) { return NativeCall<APrimalBuff_Skill*, FName, APrimalCharacter*, AActor*, bool>(this, "APrimalShip.ApplyShipSkillBuff(FName,APrimalCharacter*,AActor*,bool)", SkillTag, BuffTarget, InstigatorActor, bOnlyTriggerActivatedIfInitialActivation); }
	void AddForceToShipAtLocation(UE::Math::TVector<double>* Force, UE::Math::TVector<double>* Location, bool bIgnoreBeachedThrottleForceMultiplier) { if (!Force) throw std::invalid_argument("Null native value parameter"); if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, bool>(this, "APrimalShip.AddForceToShipAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", *Force, *Location, bIgnoreBeachedThrottleForceMultiplier); }
	bool IsProviderSkillUnlocked_Implementation(FName SkillName) { return NativeCall<bool, FName>(this, "APrimalShip.IsProviderSkillUnlocked_Implementation(FName)", SkillName); }
	void Multi_FullyDock(UE::Math::TVector<double>* DesiredDockingLocation, UE::Math::TRotator<double>* DesiredDockingRotation, int ReplicatedDockID) { if (!DesiredDockingLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredDockingRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int>(this, "APrimalShip.Multi_FullyDock(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", *DesiredDockingLocation, *DesiredDockingRotation, ReplicatedDockID); }
	int GetShipSkillRank(FName NodeID) { return NativeCall<int, FName>(this, "APrimalShip.GetShipSkillRank(FName)", NodeID); }
	bool ServerHandleNetExecCommand(APlayerController* FromPC, FName CommandName, const FBPNetExecParams& ExecParams) { return NativeCall<bool, APlayerController*, FName, const FBPNetExecParams&>(this, "APrimalShip.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", FromPC, CommandName, ExecParams); }
	void SetShipWetDockReleasedState(bool bIsReleased, UE::Math::TVector<double>* DesiredDockingLocation, UE::Math::TRotator<double>* DesiredDockingRotation) { if (!DesiredDockingLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredDockingRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalShip.SetShipWetDockReleasedState(bool,UE::Math::TVector<double>,UE::Math::TRotator<double>)", bIsReleased, *DesiredDockingLocation, *DesiredDockingRotation); }
	UE::Math::TRotator<double>* GetShipRotation(UE::Math::TRotator<double>* result, float YawOffset) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float>(this, "APrimalShip.GetShipRotation(float)", result, YawOffset); }
	void UpdateLoopingSound(FShipSoundInfo& ShipSoundInfo, bool bShouldPlay, UMeshComponent* CustomMesh, FName CustomSocket) { NativeCall<void, FShipSoundInfo&, bool, UMeshComponent*, FName>(this, "APrimalShip.UpdateLoopingSound(FShipSoundInfo&,bool,UMeshComponent*,FName)", ShipSoundInfo, bShouldPlay, CustomMesh, CustomSocket); }
	bool Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent&, AController*, AActor*>(this, "APrimalShip.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	UE::Math::TVector<double>* GetShipVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShip.GetShipVelocity()", result); }
	bool GetProviderSkillCooldown_Implementation(FName SkillName, FSkillCooldown& OutCooldown) { return NativeCall<bool, FName, FSkillCooldown&>(this, "APrimalShip.GetProviderSkillCooldown_Implementation(FName,FSkillCooldown&)", SkillName, OutCooldown); }
	void NetClientInterpolateTo_Implementation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation) { if (!NewLocation) throw std::invalid_argument("Null native value parameter"); if (!NewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalShip.NetClientInterpolateTo_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *NewLocation, *NewRotation); }
	FString* GetRepairString(FString* result, bool bHasSufficientResources, AShooterPlayerController* ForPC) { return NativeCall<FString*, FString*, bool, AShooterPlayerController*>(this, "APrimalShip.GetRepairString(bool,AShooterPlayerController*)", result, bHasSufficientResources, ForPC); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "APrimalShip.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void Multi_SpawnShipRammingVFX(const FHitResult& HitResult, float AppliedDamage) { NativeCall<void, const FHitResult&, float>(this, "APrimalShip.Multi_SpawnShipRammingVFX(FHitResult&,float)", HitResult, AppliedDamage); }
	bool IsShipSkillUnlocked(FName SkillName) { return NativeCall<bool, FName>(this, "APrimalShip.IsShipSkillUnlocked(FName)", SkillName); }
	void MulticastUpdateWheelLocation_Implementation(UE::Math::TVector<double>* NewLoc) { if (!NewLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalShip.MulticastUpdateWheelLocation_Implementation(UE::Math::TVector<double>)", *NewLoc); }
	void Multi_StartSpawningShipScrapeVFX(const UE::Math::TVector<double>& RelativeHitLoc) { NativeCall<void, const UE::Math::TVector<double>&>(this, "APrimalShip.Multi_StartSpawningShipScrapeVFX(UE::Math::TVector<double>&)", RelativeHitLoc); }
	bool IsShipSkillReadyToUse(FName SkillTag) { return NativeCall<bool, FName>(this, "APrimalShip.IsShipSkillReadyToUse(FName)", SkillTag); }
	UE::Math::TVector<double>* GetShipForwardVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShip.GetShipForwardVector()", result); }
	float GetProviderDefaultSkillCooldownDuration_Implementation(FName ForSkill, int Rank) { return NativeCall<float, FName, int>(this, "APrimalShip.GetProviderDefaultSkillCooldownDuration_Implementation(FName,int)", ForSkill, Rank); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APrimalShip.GetVelocity(bool)", result, bIsForRagdoll); }
	float GetShipSkillCooldownTimeRemaining(FName SkillName) { return NativeCall<float, FName>(this, "APrimalShip.GetShipSkillCooldownTimeRemaining(FName)", SkillName); }
	UE::Math::TVector2<double>* GetAutoPilotHeading(UE::Math::TVector2<double>* result) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(this, "APrimalShip.GetAutoPilotHeading()", result); }
	void Internal_FullyDock(UE::Math::TVector<double>* DesiredDockingLocation, UE::Math::TRotator<double>* DesiredDockingRotation, int ReplicatedDockID) { if (!DesiredDockingLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredDockingRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int>(this, "APrimalShip.Internal_FullyDock(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", *DesiredDockingLocation, *DesiredDockingRotation, ReplicatedDockID); }
	float GetTargetingDesirability(const ITargetableInterface* Attacker) { return NativeCall<float, const ITargetableInterface*>(this, "APrimalShip.GetTargetingDesirability(ITargetableInterface*)", Attacker); }
	void TryUnlockProviderSkill_Implementation(FName SkillName, AShooterPlayerController* InstigatingPC) { NativeCall<void, FName, AShooterPlayerController*>(this, "APrimalShip.TryUnlockProviderSkill_Implementation(FName,AShooterPlayerController*)", SkillName, InstigatingPC); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "APrimalShip.Serialize(FArchive&)", Ar); }
	static APrimalShip* GetShipContainingPoint(UWorld* ForWorld, const UE::Math::TVector<double>& TestPoint) { return NativeCall<APrimalShip*, UWorld*, const UE::Math::TVector<double>&>(nullptr, "APrimalShip.GetShipContainingPoint(UWorld*,UE::Math::TVector<double>&)", ForWorld, TestPoint); }
	int GetProviderSkillPointsSpent_Implementation(FName SkillTreeTag) { return NativeCall<int, FName>(this, "APrimalShip.GetProviderSkillPointsSpent_Implementation(FName)", SkillTreeTag); }
	void TryActivateProviderSkill_Implementation(FName SkillName, AShooterPlayerController* InstigatingPC, bool bIsFromClientRequest) { NativeCall<void, FName, AShooterPlayerController*, bool>(this, "APrimalShip.TryActivateProviderSkill_Implementation(FName,AShooterPlayerController*,bool)", SkillName, InstigatingPC, bIsFromClientRequest); }
	void AddShipSkillCooldown(FName SkillTag, float CooldownDuration) { NativeCall<void, FName, float>(this, "APrimalShip.AddShipSkillCooldown(FName,float)", SkillTag, CooldownDuration); }
	void BP_AdjustRowImpulse(int FromRowingSeatIndex, int TotalNumActiveRowers, int CurrentActiveRowerNum, UE::Math::TVector<double>& Location, UE::Math::TVector<double>& Impulse) { NativeCall<void, int, int, int, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "APrimalShip.BP_AdjustRowImpulse(int,int,int,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", FromRowingSeatIndex, TotalNumActiveRowers, CurrentActiveRowerNum, Location, Impulse); }
	bool GetShipSkillModifier(FName SkillTag, FName ModifierName, float& OutValue) { return NativeCall<bool, FName, FName, float&>(this, "APrimalShip.GetShipSkillModifier(FName,FName,float&)", SkillTag, ModifierName, OutValue); }
	void NetUpdateDinoNameStrings_Implementation(const FString& NewTamerString, const FString& NewTamedName) { NativeCall<void, const FString&, const FString&>(this, "APrimalShip.NetUpdateDinoNameStrings_Implementation(FString&,FString&)", NewTamerString, NewTamedName); }
	void TryApplyRammingDamage(AActor* ToTarget, UPrimitiveComponent* ForComponent, const UE::Math::TVector<double>& NormalImpulse, const FHitResult& Hit) { NativeCall<void, AActor*, UPrimitiveComponent*, const UE::Math::TVector<double>&, const FHitResult&>(this, "APrimalShip.TryApplyRammingDamage(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>&,FHitResult&)", ToTarget, ForComponent, NormalImpulse, Hit); }
	void VesselDynamicsOnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, UPrimitiveComponent *, UE :: Math :: TVector < double >, const FHitResult &>(this, "APrimalShip.VesselDynamicsOnHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", OtherActor, OtherComp, *NormalImpulse, Hit); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalShip.GetDescriptiveName()", result); }
	bool IsInCombat(APrimalCharacter*& OutTarget) { return NativeCall<bool, APrimalCharacter*&>(this, "APrimalShip.IsInCombat(APrimalCharacter*&)", OutTarget); }
	float GetTimeSinceLastUsedShipSkill(FName SkillName) { return NativeCall<float, FName>(this, "APrimalShip.GetTimeSinceLastUsedShipSkill(FName)", SkillName); }
	FPrimalSkill* GetShipSkillData(FName NodeID) { return NativeCall<FPrimalSkill*, FName>(this, "APrimalShip.GetShipSkillData(FName)", NodeID); }
	void BPSetAimLocation(UE::Math::TVector<double>* AimLocation) { if (!AimLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalShip.BPSetAimLocation(UE::Math::TVector<double>)", *AimLocation); }
	void CannonDealtDirectDamage(AActor* ToTarget, float DamageDealt, const FHitResult& Hit) { NativeCall<void, AActor*, float, const FHitResult&>(this, "APrimalShip.CannonDealtDirectDamage(AActor*,float,FHitResult&)", ToTarget, DamageDealt, Hit); }
	void GetSailThrottleForce(UPrimalShipSailComponent* ForSail, float& OutThrottleForceMultiplier, float& OutSteeringForceMultiplier) { NativeCall<void, UPrimalShipSailComponent*, float&, float&>(this, "APrimalShip.GetSailThrottleForce(UPrimalShipSailComponent*,float&,float&)", ForSail, OutThrottleForceMultiplier, OutSteeringForceMultiplier); }
	float GetCurrentShipSkillCooldownDuration(FName SkillName) { return NativeCall<float, FName>(this, "APrimalShip.GetCurrentShipSkillCooldownDuration(FName)", SkillName); }
	void AdjustDamage(float& Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float&, const FDamageEvent&, AController*, AActor*>(this, "APrimalShip.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	UE::Math::TVector<double>* GetInterpolatedLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShip.GetInterpolatedLocation()", result); }
	bool GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName, TSizedDefaultAllocator<32> >& Skills, TArray<unsigned char, TSizedDefaultAllocator<32> >& Ranks) { return NativeCall<bool, TArray<FName, TSizedDefaultAllocator<32> >&, TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalShip.GetProviderUnlockedSkillsAndRanks_Implementation(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", Skills, Ranks); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "APrimalShip.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void ApplyCannonballImpactBuffs(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "APrimalShip.ApplyCannonballImpactBuffs(FHitResult&)", HitResult); }
	float GetRammingDamageMultiplier(UE::Math::TVector<double>* ImpactPoint, AActor* ForTarget) { if (!ImpactPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector < double >, AActor *>(this, "APrimalShip.GetRammingDamageMultiplier(UE::Math::TVector<double>,AActor*)", *ImpactPoint, ForTarget); }
	bool IsInOceanVolume(APhysicsVolume** OutVolumePtr) { return NativeCall<bool, APhysicsVolume**>(this, "APrimalShip.IsInOceanVolume(APhysicsVolume**)", OutVolumePtr); }
	UE::Math::TVector<double>* GetInterpolatedVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShip.GetInterpolatedVelocity()", result); }
	FPrimalSkill* GetProviderSkillData(FName SkillName) { return NativeCall<FPrimalSkill*, FName>(this, "APrimalShip.GetProviderSkillData(FName)", SkillName); }
	bool IsPointInRamSocketRadius(const UE::Math::TVector<double>& Location) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalShip.IsPointInRamSocketRadius(UE::Math::TVector<double>&)", Location); }
	void ForceDocked(UE::Math::TVector<double>* DesiredDockingLocation, UE::Math::TRotator<double>* DesiredDockingRotation, int ReplicatedDockID) { if (!DesiredDockingLocation) throw std::invalid_argument("Null native value parameter"); if (!DesiredDockingRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int>(this, "APrimalShip.ForceDocked(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", *DesiredDockingLocation, *DesiredDockingRotation, ReplicatedDockID); }
	void PlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalShip.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	TArray<APawn*, TSizedDefaultAllocator<32> >* GetShipBasedPawns(TArray<APawn*, TSizedDefaultAllocator<32> >* result, USceneComponent* OnComponent, bool bOnlyActivePawns) { return NativeCall<TArray<APawn*, TSizedDefaultAllocator<32> >*, TArray<APawn*, TSizedDefaultAllocator<32> >*, USceneComponent*, bool>(this, "APrimalShip.GetShipBasedPawns(USceneComponent*,bool)", result, OnComponent, bOnlyActivePawns); }
	APrimalBuff_Skill* BPApplyShipSkillBuff(FName SkillTag, APrimalCharacter* BuffTarget, AActor* InstigatorActor) { return NativeCall<APrimalBuff_Skill*, FName, APrimalCharacter*, AActor*>(this, "APrimalShip.BPApplyShipSkillBuff(FName,APrimalCharacter*,AActor*)", SkillTag, BuffTarget, InstigatorActor); }
	int GetProviderSkillRank_Implementation(FName SkillName) { return NativeCall<int, FName>(this, "APrimalShip.GetProviderSkillRank_Implementation(FName)", SkillName); }
	void AddForceToBeApplied(UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Force, FName ForceName) { if (!Location) throw std::invalid_argument("Null native value parameter"); if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FName>(this, "APrimalShip.AddForceToBeApplied(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", *Location, *Force, ForceName); }
	void CustomReceiveHarvestResources(FItemNetInfo& HarvestedItem) { NativeCall<void, FItemNetInfo&>(this, "APrimalShip.CustomReceiveHarvestResources(FItemNetInfo&)", HarvestedItem); }
	void AddForceToBeAppliedAtCenterOfGravity(UE::Math::TVector<double>* Force, FName ForceName) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName>(this, "APrimalShip.AddForceToBeAppliedAtCenterOfGravity(UE::Math::TVector<double>,FName)", *Force, ForceName); }
	void MulticastUpdateWheelLocation(UE::Math::TVector<double>* NewLoc) { if (!NewLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalShip.MulticastUpdateWheelLocation(UE::Math::TVector<double>)", *NewLoc); }
	float GetTimeSinceLastUsedProviderSkill_Implementation(FName SkillName) { return NativeCall<float, FName>(this, "APrimalShip.GetTimeSinceLastUsedProviderSkill_Implementation(FName)", SkillName); }
	void ProcessEditText(AShooterPlayerController* ForPC, const FString& TextToUse, bool checkedBox) { NativeCall<void, AShooterPlayerController*, const FString&, bool>(this, "APrimalShip.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, checkedBox); }
};
