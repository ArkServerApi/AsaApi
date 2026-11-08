#pragma once
#include "BulkForward.h"
#include "UPathFollowingComponent.h"

struct UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	UCrowdFollowingComponent() = delete;
	~UCrowdFollowingComponent() = delete;
	UCrowdFollowingComponent(const UCrowdFollowingComponent&) = delete;
	UCrowdFollowingComponent& operator=(const UCrowdFollowingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCrowdFollowingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCrowdFollowingComponent"); }

	UE::Math::TVector<double>& CrowdAgentMoveDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UCrowdFollowingComponent.CrowdAgentMoveDirection"); }
	TEnumAsByte<ECrowdAvoidanceQuality::Type>& AvoidanceQualityField() { return *GetNativePointerField<TEnumAsByte<ECrowdAvoidanceQuality::Type>*>(this, "UCrowdFollowingComponent.AvoidanceQuality"); }
	ECrowdSimulationState& SimulationStateField() { return *GetNativePointerField<ECrowdSimulationState*>(this, "UCrowdFollowingComponent.SimulationState"); }
	float& SeparationWeightField() { return *GetNativePointerField<float*>(this, "UCrowdFollowingComponent.SeparationWeight"); }
	float& CollisionQueryRangeField() { return *GetNativePointerField<float*>(this, "UCrowdFollowingComponent.CollisionQueryRange"); }
	float& PathOptimizationRangeField() { return *GetNativePointerField<float*>(this, "UCrowdFollowingComponent.PathOptimizationRange"); }
	float& AvoidanceRangeMultiplierField() { return *GetNativePointerField<float*>(this, "UCrowdFollowingComponent.AvoidanceRangeMultiplier"); }
	int& PathStartIndexField() { return *GetNativePointerField<int*>(this, "UCrowdFollowingComponent.PathStartIndex"); }
	int& LastPathPolyIndexField() { return *GetNativePointerField<int*>(this, "UCrowdFollowingComponent.LastPathPolyIndex"); }
	BitFieldValue<bool, unsigned char> bAffectFallingVelocity() { return { this, "UCrowdFollowingComponent.bAffectFallingVelocity"}; }
	BitFieldValue<bool, unsigned char> bRotateToVelocity() { return { this, "UCrowdFollowingComponent.bRotateToVelocity"}; }
	BitFieldValue<bool, unsigned char> bUpdateDirectMoveVelocity() { return { this, "UCrowdFollowingComponent.bUpdateDirectMoveVelocity"}; }
	BitFieldValue<bool, unsigned char> bRegisteredWithCrowdSimulation() { return { this, "UCrowdFollowingComponent.bRegisteredWithCrowdSimulation"}; }
	BitFieldValue<bool, unsigned char> bSuspendCrowdSimulation() { return { this, "UCrowdFollowingComponent.bSuspendCrowdSimulation"}; }
	BitFieldValue<bool, unsigned char> bEnableAnticipateTurns() { return { this, "UCrowdFollowingComponent.bEnableAnticipateTurns"}; }
	BitFieldValue<bool, unsigned char> bEnableObstacleAvoidance() { return { this, "UCrowdFollowingComponent.bEnableObstacleAvoidance"}; }
	BitFieldValue<bool, unsigned char> bEnableSeparation() { return { this, "UCrowdFollowingComponent.bEnableSeparation"}; }
	BitFieldValue<bool, unsigned char> bEnableOptimizeVisibility() { return { this, "UCrowdFollowingComponent.bEnableOptimizeVisibility"}; }
	BitFieldValue<bool, unsigned char> bEnableOptimizeTopology() { return { this, "UCrowdFollowingComponent.bEnableOptimizeTopology"}; }
	BitFieldValue<bool, unsigned char> bEnablePathOffset() { return { this, "UCrowdFollowingComponent.bEnablePathOffset"}; }
	BitFieldValue<bool, unsigned char> bEnableSlowdownAtGoal() { return { this, "UCrowdFollowingComponent.bEnableSlowdownAtGoal"}; }
	BitFieldValue<bool, unsigned char> bFinalPathPart() { return { this, "UCrowdFollowingComponent.bFinalPathPart"}; }
	BitFieldValue<bool, unsigned char> bCanCheckMovingTooFar() { return { this, "UCrowdFollowingComponent.bCanCheckMovingTooFar"}; }
	BitFieldValue<bool, unsigned char> bCanUpdatePathPartInTick() { return { this, "UCrowdFollowingComponent.bCanUpdatePathPartInTick"}; }
	BitFieldValue<bool, unsigned char> bCheckMovementAngle() { return { this, "UCrowdFollowingComponent.bCheckMovementAngle"}; }
	BitFieldValue<bool, unsigned char> bEnableSimulationReplanOnResume() { return { this, "UCrowdFollowingComponent.bEnableSimulationReplanOnResume"}; }
	BitFieldValue<bool, unsigned char> bIsTraversingLink() { return { this, "UCrowdFollowingComponent.bIsTraversingLink"}; }
	void Cleanup() { NativeCall<void>(this, "UCrowdFollowingComponent.Cleanup()"); }
	void FollowPathSegment(float DeltaTime) { NativeCall<void, float>(this, "UCrowdFollowingComponent.FollowPathSegment(float)", DeltaTime); }
	void Initialize() { NativeCall<void>(this, "UCrowdFollowingComponent.Initialize()"); }
	void UpdateCachedDirections(const UE::Math::TVector<double>& NewVelocity, const UE::Math::TVector<double>& NextPathCorner, bool bTraversingLink) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool>(this, "UCrowdFollowingComponent.UpdateCachedDirections(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", NewVelocity, NextPathCorner, bTraversingLink); }
	UE::Math::TVector<double>* GetCrowdAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UCrowdFollowingComponent.GetCrowdAgentLocation()", result); }
	void OnNavNodeChanged(unsigned __int64 NewPolyRef, unsigned __int64 PrevPolyRef, int CorridorSize) { NativeCall<void, unsigned __int64, unsigned __int64, int>(this, "UCrowdFollowingComponent.OnNavNodeChanged(unsigned__int64,unsigned__int64,int)", NewPolyRef, PrevPolyRef, CorridorSize); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UCrowdFollowingComponent._getUObject()"); }
	bool ShouldCheckPathOnResume() { return NativeCall<bool>(this, "UCrowdFollowingComponent.ShouldCheckPathOnResume()"); }
	void GetDebugStringTokens(TArray<FString, TSizedDefaultAllocator<32> >& Tokens, TArray<EPathFollowingDebugTokens::Type, TSizedDefaultAllocator<32> >& Flags) { NativeCall<void, TArray<FString, TSizedDefaultAllocator<32> >&, TArray<EPathFollowingDebugTokens::Type, TSizedDefaultAllocator<32> >&>(this, "UCrowdFollowingComponent.GetDebugStringTokens(TArray<FString,TSizedDefaultAllocator<32>>&,TArray<EPathFollowingDebugTokens::Type,TSizedDefaultAllocator<32>>&)", Tokens, Flags); }
	void OnLanded() { NativeCall<void>(this, "UCrowdFollowingComponent.OnLanded()"); }
	void OnPathfindingQuery(FPathFindingQuery& Query) { NativeCall<void, FPathFindingQuery&>(this, "UCrowdFollowingComponent.OnPathfindingQuery(FPathFindingQuery&)", Query); }
	float GetCrowdAgentMaxSpeed() { return NativeCall<float>(this, "UCrowdFollowingComponent.GetCrowdAgentMaxSpeed()"); }
	void OnNavigationInitDone() { NativeCall<void>(this, "UCrowdFollowingComponent.OnNavigationInitDone()"); }
	void ApplyCrowdAgentVelocity(const UE::Math::TVector<double>& NewVelocity, const UE::Math::TVector<double>& DestPathCorner, bool bTraversingLink, bool bIsNearEndOfPath) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool, bool>(this, "UCrowdFollowingComponent.ApplyCrowdAgentVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool)", NewVelocity, DestPathCorner, bTraversingLink, bIsNearEndOfPath); }
	int GetCurrentPathElement() { return NativeCall<int>(this, "UCrowdFollowingComponent.GetCurrentPathElement()"); }
	int GetCrowdAgentGroupsToAvoid() { return NativeCall<int>(this, "UCrowdFollowingComponent.GetCrowdAgentGroupsToAvoid()"); }
	void ApplyCrowdAgentPosition(const UE::Math::TVector<double>& NewPosition) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UCrowdFollowingComponent.ApplyCrowdAgentPosition(UE::Math::TVector<double>&)", NewPosition); }
	void OnPathUpdated() { NativeCall<void>(this, "UCrowdFollowingComponent.OnPathUpdated()"); }
	void OnPathFinished(const FPathFollowingResult& Result) { NativeCall<void, const FPathFollowingResult&>(this, "UCrowdFollowingComponent.OnPathFinished(FPathFollowingResult&)", Result); }
	bool ShouldTrackMovingGoal(UE::Math::TVector<double>& OutGoalLocation) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "UCrowdFollowingComponent.ShouldTrackMovingGoal(UE::Math::TVector<double>&)", OutGoalLocation); }
	void ApplyCrowdAgentVelocity(const UE::Math::TVector<double>& NewVelocity, const UE::Math::TVector<double>& DestPathCorner, bool bTraversingLink) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool>(this, "UCrowdFollowingComponent.ApplyCrowdAgentVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", NewVelocity, DestPathCorner, bTraversingLink); }
	void UpdatePathSegment() { NativeCall<void>(this, "UCrowdFollowingComponent.UpdatePathSegment()"); }
	void SetMoveSegment(int SegmentStartIndex) { NativeCall<void, int>(this, "UCrowdFollowingComponent.SetMoveSegment(int)", SegmentStartIndex); }
	int DetermineStartingPathPoint(const FNavigationPath* ConsideredPath) { return NativeCall<int, const FNavigationPath*>(this, "UCrowdFollowingComponent.DetermineStartingPathPoint(FNavigationPath*)", ConsideredPath); }
	void BeginDestroy() { NativeCall<void>(this, "UCrowdFollowingComponent.BeginDestroy()"); }
	void Reset() { NativeCall<void>(this, "UCrowdFollowingComponent.Reset()"); }
	int GetCrowdAgentAvoidanceGroup() { return NativeCall<int>(this, "UCrowdFollowingComponent.GetCrowdAgentAvoidanceGroup()"); }
	bool IsFollowingNavLink() { return NativeCall<bool>(this, "UCrowdFollowingComponent.IsFollowingNavLink()"); }
	void SuspendCrowdSteering(bool bSuspend) { NativeCall<void, bool>(this, "UCrowdFollowingComponent.SuspendCrowdSteering(bool)", bSuspend); }
	void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) { NativeCall<void, float&, float&>(this, "UCrowdFollowingComponent.GetCrowdAgentCollisions(float&,float&)", CylinderRadius, CylinderHalfHeight); }
	void SetCrowdSimulationState(ECrowdSimulationState NewState) { NativeCall<void, ECrowdSimulationState>(this, "UCrowdFollowingComponent.SetCrowdSimulationState(ECrowdSimulationState)", NewState); }
	void UpdateDestinationForMovingGoal(const UE::Math::TVector<double>& NewDestination) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UCrowdFollowingComponent.UpdateDestinationForMovingGoal(UE::Math::TVector<double>&)", NewDestination); }
	void RegisterCrowdAgent() { NativeCall<void>(this, "UCrowdFollowingComponent.RegisterCrowdAgent()"); }
	UE::Math::TVector<double>* GetMoveFocus(UE::Math::TVector<double>* result, bool bAllowStrafe) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "UCrowdFollowingComponent.GetMoveFocus(bool)", result, bAllowStrafe); }
	bool IsOnPath() { return NativeCall<bool>(this, "UCrowdFollowingComponent.IsOnPath()"); }
	int GetCrowdAgentGroupsToIgnore() { return NativeCall<int>(this, "UCrowdFollowingComponent.GetCrowdAgentGroupsToIgnore()"); }
	void FinishUsingCustomLink(INavLinkCustomInterface* CustomNavLink) { NativeCall<void, INavLinkCustomInterface*>(this, "UCrowdFollowingComponent.FinishUsingCustomLink(INavLinkCustomInterface*)", CustomNavLink); }
	UE::Math::TVector<double>* GetCrowdAgentVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UCrowdFollowingComponent.GetCrowdAgentVelocity()", result); }
	void SwitchToNextPathPart() { NativeCall<void>(this, "UCrowdFollowingComponent.SwitchToNextPathPart()"); }
	bool UpdateMovementComponent(bool bForce) { return NativeCall<bool, bool>(this, "UCrowdFollowingComponent.UpdateMovementComponent(bool)", bForce); }
};
