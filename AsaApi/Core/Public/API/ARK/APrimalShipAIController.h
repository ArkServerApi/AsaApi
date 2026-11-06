#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalDinoAIController.h"

struct APrimalShipAIController : APrimalDinoAIController
{
public:
	APrimalShipAIController() = delete;
	~APrimalShipAIController() = delete;
	APrimalShipAIController(const APrimalShipAIController&) = delete;
	APrimalShipAIController& operator=(const APrimalShipAIController&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalShipAIController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalShipAIController"); }

	float& WanderRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderRadius"); }
	float& WanderConeHalfAngleField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderConeHalfAngle"); }
	float& SafeDistanceFromShoreField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.SafeDistanceFromShore"); }
	float& ProbeHullLengthsField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ProbeHullLengths"); }
	float& FiringRangeField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FiringRange"); }
	float& FiringCoolDownField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FiringCoolDown"); }
	float& PlayerSearchingRangeField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.PlayerSearchingRange"); }
	float& GiveUpAfterNoDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveUpAfterNoDamageTime"); }
	float& CircleRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CircleRadius"); }
	float& CircleForwardOffsetField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CircleForwardOffset"); }
	float& CircleSideSwapIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CircleSideSwapInterval"); }
	float& ChaseSideSwapIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ChaseSideSwapInterval"); }
	float& AimHullLengthFractionField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimHullLengthFraction"); }
	float& AimHullBeamFractionField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimHullBeamFraction"); }
	float& AimErrorRangeFractionField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimErrorRangeFraction"); }
	float& AimErrorMaxRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimErrorMaxRadius"); }
	float& AimErrorMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimErrorMultiplier"); }
	float& GiveWayDistanceField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveWayDistance"); }
	float& GiveWayConeDegreesField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveWayConeDegrees"); }
	float& GiveWayThrottleField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveWayThrottle"); }
	double& LastAvoidUpdateTimeField() { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastAvoidUpdateTime"); }
	float& HeldAvoidDeviationField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.HeldAvoidDeviation"); }
	float& HeldAvoidThrottleScaleField() { return *GetNativePointerField<float*>(this, "APrimalShipAIController.HeldAvoidThrottleScale"); }
	double& LastSideSwapTimeField() { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastSideSwapTime"); }
	double& LastFiredAtField() { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastFiredAt"); }
	double& LastBroadsideAtTargetTimeField() { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastBroadsideAtTargetTime"); }

	void OnPossess(APawn* InPawn) { NativeCall<void, APawn*>(this, "APrimalShipAIController.OnPossess(APawn*)", InPawn); }
	bool HasFiringLOS(AActor* InTarget) { return NativeCall<bool, AActor*>(this, "APrimalShipAIController.HasFiringLOS(AActor*)", InTarget); }
	AActor* FindTargetShip() { return NativeCall<AActor*>(this, "APrimalShipAIController.FindTargetShip()"); }
	AActor* PickFireTarget() { return NativeCall<AActor*>(this, "APrimalShipAIController.PickFireTarget()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShipAIController.Tick(float)", DeltaSeconds); }
	APrimalPlayerFollowingShip* GetControlledShip() { return NativeCall<APrimalPlayerFollowingShip*>(this, "APrimalShipAIController.GetControlledShip()"); }
	bool TryFireBroadside() { return NativeCall<bool>(this, "APrimalShipAIController.TryFireBroadside()"); }

	BitFieldValue<bool, unsigned char> bLeadMovingTargets() { return { this, "APrimalShipAIController.bLeadMovingTargets"}; }
	BitFieldValue<bool, unsigned char> bCircleOnStarboard() { return { this, "APrimalShipAIController.bCircleOnStarboard"}; }
	BitFieldValue<bool, unsigned char> bAvoidToStarboard() { return { this, "APrimalShipAIController.bAvoidToStarboard"}; }
	BitFieldValue<bool, unsigned char> bHeldAvoidThrottle() { return { this, "APrimalShipAIController.bHeldAvoidThrottle"}; }
	BitFieldValue<bool, unsigned char> bGiveWayArmed() { return { this, "APrimalShipAIController.bGiveWayArmed"}; }
	BitFieldValue<bool, unsigned char> bCrossAstern() { return { this, "APrimalShipAIController.bCrossAstern"}; }
	BitFieldValue<bool, unsigned char> bHeldAvoiding() { return { this, "APrimalShipAIController.bHeldAvoiding"}; }

	UBehaviorTree*& ShipBehaviourTreeField() { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.ShipBehaviourTree"); }

	UE::Math::TVector<double>* ComputePursuitGoalForSide(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& OrbitCenter, bool bStarboard) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, bool>(this, "APrimalShipAIController.ComputePursuitGoalForSide(UE::Math::TVector<double>&,bool)", result, OrbitCenter, bStarboard); }
	UE::Math::TVector<double>* GetWanderDestination(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalShipAIController.GetWanderDestination()", result); }
	bool ChooseHeading(const UE::Math::TVector<double>& GoalDir, UE::Math::TVector<double>& OutHeading, float& OutThrottleScale) { return NativeCall<bool, const UE::Math::TVector<double>&, UE::Math::TVector<double>&, float&>(this, "APrimalShipAIController.ChooseHeading(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&)", GoalDir, OutHeading, OutThrottleScale); }
	void DriveAutopilotTowardGoal(const UE::Math::TVector<double>& Goal, float SlowRadius, float ThrottleTrim, AActor* Leader) { NativeCall<void, const UE::Math::TVector<double>&, float, float, AActor*>(this, "APrimalShipAIController.DriveAutopilotTowardGoal(UE::Math::TVector<double>&,float,float,AActor*)", Goal, SlowRadius, ThrottleTrim, Leader); }
	bool CanReachTarget(AActor* InTarget, UE::Math::TVector<double>* TestPoint) { if (!TestPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, AActor *, UE :: Math :: TVector < double >>(this, "APrimalShipAIController.CanReachTarget(AActor*,UE::Math::TVector<double>)", InTarget, *TestPoint); }
	UE::Math::TVector<double>* GetPursuitGoal(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& TargetLoc) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalShipAIController.GetPursuitGoal(UE::Math::TVector<double>&)", result, TargetLoc); }
	static bool GetHullHalfExtent(const APrimalShip* Ship, UE::Math::TVector<double>& OutHalfExtent) { return NativeCall<bool, const APrimalShip*, UE::Math::TVector<double>&>(nullptr, "APrimalShipAIController.GetHullHalfExtent(APrimalShip*,UE::Math::TVector<double>&)", Ship, OutHalfExtent); }
};
