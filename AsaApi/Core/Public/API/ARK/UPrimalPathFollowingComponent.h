#pragma once
#include "BulkForward.h"
#include "UPathFollowingComponent.h"

struct UPrimalPathFollowingComponent : public UPathFollowingComponent
{
public:
	UPrimalPathFollowingComponent() = delete;
	~UPrimalPathFollowingComponent() = delete;
	UPrimalPathFollowingComponent(const UPrimalPathFollowingComponent&) = delete;
	UPrimalPathFollowingComponent& operator=(const UPrimalPathFollowingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalPathFollowingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalPathFollowingComponent"); }

	UE::Math::TVector<double>& MoveTowardTargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalPathFollowingComponent.MoveTowardTargetOffset"); }
	UE::Math::TVector<double>& TargetFocalPositionOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalPathFollowingComponent.TargetFocalPositionOffset"); }
	float& ReachedDestinationThresholdOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.ReachedDestinationThresholdOffset"); }
	float& MovementGoalHeightField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.MovementGoalHeight"); }
	FOnPathUpdatedSignature& OnPathUpdateField() { return *GetNativePointerField<FOnPathUpdatedSignature*>(this, "UPrimalPathFollowingComponent.OnPathUpdate"); }
	double& LastMoveBlockedTimeField() { return *GetNativePointerField<double*>(this, "UPrimalPathFollowingComponent.LastMoveBlockedTime"); }
	UE::Math::TVector<double>& LastMoveBlockedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalPathFollowingComponent.LastMoveBlockedLocation"); }
	float& DecelerationDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.DecelerationDistance"); }
	float& StartAngleField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.StartAngle"); }
	float& DecelerationRateField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.DecelerationRate"); }
	float& AccelerationRateField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.AccelerationRate"); }
	float& AngleToSpeedConstField() { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.AngleToSpeedConst"); }
	BitFieldValue<bool, unsigned __int32> bUse3DGoalRadius() { return { this, "UPrimalPathFollowingComponent.bUse3DGoalRadius"}; }
	BitFieldValue<bool, unsigned __int32> bReachedCurrentTargetUseFeetLocation() { return { this, "UPrimalPathFollowingComponent.bReachedCurrentTargetUseFeetLocation"}; }
	BitFieldValue<bool, unsigned __int32> bForceInputAcceptanceRadius() { return { this, "UPrimalPathFollowingComponent.bForceInputAcceptanceRadius"}; }
	BitFieldValue<bool, unsigned __int32> bDebugPathFollowing() { return { this, "UPrimalPathFollowingComponent.bDebugPathFollowing"}; }
	BitFieldValue<bool, unsigned __int32> bIsDeceleratingForTurn() { return { this, "UPrimalPathFollowingComponent.bIsDeceleratingForTurn"}; }
	bool HasReachedDestination(const UE::Math::TVector<double>& Goal) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UPrimalPathFollowingComponent.HasReachedDestination(UE::Math::TVector<double>&)", Goal); }
	void SetNavMovementInterface(INavMovementInterface* NavMoveInterface) { NativeCall<void, INavMovementInterface*>(this, "UPrimalPathFollowingComponent.SetNavMovementInterface(INavMovementInterface*)", NavMoveInterface); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPrimalPathFollowingComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UE::Math::TVector<double>* GetAdditionalGoalOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalPathFollowingComponent.GetAdditionalGoalOffset()", result); }
	void OnPathFinished(const FPathFollowingResult& Result) { NativeCall<void, const FPathFollowingResult&>(this, "UPrimalPathFollowingComponent.OnPathFinished(FPathFollowingResult&)", Result); }
	float CalculateAngleChange(const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& PathPoints) { return NativeCall<float, const TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&>(this, "UPrimalPathFollowingComponent.CalculateAngleChange(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", PathPoints); }
	void OnSegmentFinished() { NativeCall<void>(this, "UPrimalPathFollowingComponent.OnSegmentFinished()"); }
	void OnMoveBlockedBy(const FHitResult& BlockingImpact) { NativeCall<void, const FHitResult&>(this, "UPrimalPathFollowingComponent.OnMoveBlockedBy(FHitResult&)", BlockingImpact); }
	void FollowPathSegment(float DeltaTime) { NativeCall<void, float>(this, "UPrimalPathFollowingComponent.FollowPathSegment(float)", DeltaTime); }
	bool HasReachedInternal(const UE::Math::TVector<double>& GoalLocation, float GoalRadius, float GoalHalfHeight, const UE::Math::TVector<double>& AgentLocation, float RadiusThreshold, float AgentRadiusMultiplier, bool bShouldTether) { return NativeCall<bool, const UE::Math::TVector<double>&, float, float, const UE::Math::TVector<double>&, float, float, bool>(this, "UPrimalPathFollowingComponent.HasReachedInternal(UE::Math::TVector<double>&,float,float,UE::Math::TVector<double>&,float,float,bool)", GoalLocation, GoalRadius, GoalHalfHeight, AgentLocation, RadiusThreshold, AgentRadiusMultiplier, bShouldTether); }
	void OnMoveSegmentUpdated() { NativeCall<void>(this, "UPrimalPathFollowingComponent.OnMoveSegmentUpdated()"); }
	void OnPathUpdated() { NativeCall<void>(this, "UPrimalPathFollowingComponent.OnPathUpdated()"); }
	bool HasReachedCurrentTarget(const UE::Math::TVector<double>& CurrentLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UPrimalPathFollowingComponent.HasReachedCurrentTarget(UE::Math::TVector<double>&)", CurrentLocation); }
};
