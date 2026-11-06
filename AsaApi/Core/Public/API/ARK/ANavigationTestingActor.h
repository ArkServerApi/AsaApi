#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANavigationTestingActor : public AActor
{
public:
	ANavigationTestingActor() = delete;
	~ANavigationTestingActor() = delete;
	ANavigationTestingActor(const ANavigationTestingActor&) = delete;
	ANavigationTestingActor& operator=(const ANavigationTestingActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavigationTestingActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavigationTestingActor"); }

	FNavAgentProperties& NavAgentPropsField() { return *GetNativePointerField<FNavAgentProperties*>(this, "ANavigationTestingActor.NavAgentProps"); }
	UE::Math::TVector<double>& QueryingExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ANavigationTestingActor.QueryingExtent"); }
	UE::Math::TVector<double>& ProjectedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ANavigationTestingActor.ProjectedLocation"); }
	float& CostLimitFactorField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.CostLimitFactor"); }
	float& MinimumCostLimitField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.MinimumCostLimit"); }
	float& RadiusUsedToValidateNavDataField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.RadiusUsedToValidateNavData"); }
	TEnumAsByte<ENavCostDisplay::Type>& CostDisplayModeField() { return *GetNativePointerField<TEnumAsByte<ENavCostDisplay::Type>*>(this, "ANavigationTestingActor.CostDisplayMode"); }
	UE::Math::TVector2<double>& TextCanvasOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ANavigationTestingActor.TextCanvasOffset"); }
	float& PathfindingTimeField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.PathfindingTime"); }
	double& PathCostField() { return *GetNativePointerField<double*>(this, "ANavigationTestingActor.PathCost"); }
	int& PathfindingStepsField() { return *GetNativePointerField<int*>(this, "ANavigationTestingActor.PathfindingSteps"); }
	int& ShowStepIndexField() { return *GetNativePointerField<int*>(this, "ANavigationTestingActor.ShowStepIndex"); }
	float& OffsetFromCornersDistanceField() { return *GetNativePointerField<float*>(this, "ANavigationTestingActor.OffsetFromCornersDistance"); }
	UE::Math::TVector<double>& ClosestWallLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ANavigationTestingActor.ClosestWallLocation"); }
	UE::Math::TVector<double>& RaycastHitLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ANavigationTestingActor.RaycastHitLocation"); }
	bool& bNavDataIsReadyInRadiusField() { return *GetNativePointerField<bool*>(this, "ANavigationTestingActor.bNavDataIsReadyInRadius"); }
	bool& bNavDataIsReadyToQueryTargetActorField() { return *GetNativePointerField<bool*>(this, "ANavigationTestingActor.bNavDataIsReadyToQueryTargetActor"); }
	bool& bRaycastToQueryTargetActorResultField() { return *GetNativePointerField<bool*>(this, "ANavigationTestingActor.bRaycastToQueryTargetActorResult"); }
	bool& bRaycastToQueryTargetEndsInCorridorField() { return *GetNativePointerField<bool*>(this, "ANavigationTestingActor.bRaycastToQueryTargetEndsInCorridor"); }
	BitFieldValue<bool, unsigned __int32> bActAsNavigationInvoker() { return { this, "ANavigationTestingActor.bActAsNavigationInvoker"}; }
	BitFieldValue<bool, unsigned __int32> bProjectedLocationValid() { return { this, "ANavigationTestingActor.bProjectedLocationValid"}; }
	BitFieldValue<bool, unsigned __int32> bSearchStart() { return { this, "ANavigationTestingActor.bSearchStart"}; }
	BitFieldValue<bool, unsigned __int32> bBacktracking() { return { this, "ANavigationTestingActor.bBacktracking"}; }
	BitFieldValue<bool, unsigned __int32> bUseHierarchicalPathfinding() { return { this, "ANavigationTestingActor.bUseHierarchicalPathfinding"}; }
	BitFieldValue<bool, unsigned __int32> bGatherDetailedInfo() { return { this, "ANavigationTestingActor.bGatherDetailedInfo"}; }
	BitFieldValue<bool, unsigned __int32> bRequireNavigableEndLocation() { return { this, "ANavigationTestingActor.bRequireNavigableEndLocation"}; }
	BitFieldValue<bool, unsigned __int32> bDrawDistanceToWall() { return { this, "ANavigationTestingActor.bDrawDistanceToWall"}; }
	BitFieldValue<bool, unsigned __int32> bDrawIfNavDataIsReadyInRadius() { return { this, "ANavigationTestingActor.bDrawIfNavDataIsReadyInRadius"}; }
	BitFieldValue<bool, unsigned __int32> bDrawIfNavDataIsReadyToQueryTargetActor() { return { this, "ANavigationTestingActor.bDrawIfNavDataIsReadyToQueryTargetActor"}; }
	BitFieldValue<bool, unsigned __int32> bDrawRaycastToQueryTargetActor() { return { this, "ANavigationTestingActor.bDrawRaycastToQueryTargetActor"}; }
	BitFieldValue<bool, unsigned __int32> bShowNodePool() { return { this, "ANavigationTestingActor.bShowNodePool"}; }
	BitFieldValue<bool, unsigned __int32> bShowBestPath() { return { this, "ANavigationTestingActor.bShowBestPath"}; }
	BitFieldValue<bool, unsigned __int32> bShowDiffWithPreviousStep() { return { this, "ANavigationTestingActor.bShowDiffWithPreviousStep"}; }
	BitFieldValue<bool, unsigned __int32> bShouldBeVisibleInGame() { return { this, "ANavigationTestingActor.bShouldBeVisibleInGame"}; }
	BitFieldValue<bool, unsigned __int32> bPathExist() { return { this, "ANavigationTestingActor.bPathExist"}; }
	BitFieldValue<bool, unsigned __int32> bPathIsPartial() { return { this, "ANavigationTestingActor.bPathIsPartial"}; }
	BitFieldValue<bool, unsigned __int32> bPathSearchOutOfNodes() { return { this, "ANavigationTestingActor.bPathSearchOutOfNodes"}; }
	void UpdatePathfinding() { NativeCall<void>(this, "ANavigationTestingActor.UpdatePathfinding()"); }
	void BeginDestroy() { NativeCall<void>(this, "ANavigationTestingActor.BeginDestroy()"); }
	const FNavAgentProperties& GetNavAgentPropertiesRef() { return NativeCall<const FNavAgentProperties&>(this, "ANavigationTestingActor.GetNavAgentPropertiesRef()"); }
	void OnPathFailed(INavigationPathGenerator* PathGenerator) { NativeCall<void, INavigationPathGenerator*>(this, "ANavigationTestingActor.OnPathFailed(INavigationPathGenerator*)", PathGenerator); }
	void SearchPathTo(ANavigationTestingActor* Goal) { NativeCall<void, ANavigationTestingActor*>(this, "ANavigationTestingActor.SearchPathTo(ANavigationTestingActor*)", Goal); }
	void OnPathInvalid(INavigationPathGenerator* PathGenerator) { NativeCall<void, INavigationPathGenerator*>(this, "ANavigationTestingActor.OnPathInvalid(INavigationPathGenerator*)", PathGenerator); }
	void OnPathEvent(FNavigationPath* InvalidatedPath, ENavPathEvent::Type Event) { NativeCall<void, FNavigationPath*, ENavPathEvent::Type>(this, "ANavigationTestingActor.OnPathEvent(FNavigationPath*,ENavPathEvent::Type)", InvalidatedPath, Event); }
	void GetMoveGoalReachTest(const AActor* MovingActor, const UE::Math::TVector<double>& MoveOffset, UE::Math::TVector<double>& GoalOffset, float& GoalRadius, float& GoalHalfHeight) { NativeCall<void, const AActor*, const UE::Math::TVector<double>&, UE::Math::TVector<double>&, float&, float&>(this, "ANavigationTestingActor.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
	void UpdateNavData() { NativeCall<void>(this, "ANavigationTestingActor.UpdateNavData()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANavigationTestingActor._getUObject()"); }
	void OnPathUpdated(INavigationPathGenerator* PathGenerator) { NativeCall<void, INavigationPathGenerator*>(this, "ANavigationTestingActor.OnPathUpdated(INavigationPathGenerator*)", PathGenerator); }
	UE::Math::TVector<double>* GetNavAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ANavigationTestingActor.GetNavAgentLocation()", result); }
};
