#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPathFollowingComponent : public UActorComponent
{
public:
	UPathFollowingComponent() = delete;
	~UPathFollowingComponent() = delete;
	UPathFollowingComponent(const UPathFollowingComponent&) = delete;
	UPathFollowingComponent& operator=(const UPathFollowingComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPathFollowingComponent"); }

	FWeakObjectPtr& CurrentCustomLinkObField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "UPathFollowingComponent.CurrentCustomLinkOb"); }
	FWeakObjectPtr& MoveSegmentCustomLinkObField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "UPathFollowingComponent.MoveSegmentCustomLinkOb"); }
	float& MyDefaultAcceptanceRadiusField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.MyDefaultAcceptanceRadius"); }
	float& AcceptanceRadiusField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.AcceptanceRadius"); }
	float& CurrentAcceptanceRadiusField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.CurrentAcceptanceRadius"); }
	float& MinAgentRadiusPctField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.MinAgentRadiusPct"); }
	float& MinAgentHalfHeightPctField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.MinAgentHalfHeightPct"); }
	float& WaitingTimeoutField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.WaitingTimeout"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& DestinationActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UPathFollowingComponent.DestinationActor"); }
	const INavAgentInterface*& DestinationAgentField() { return *GetNativePointerField<const INavAgentInterface**>(this, "UPathFollowingComponent.DestinationAgent"); }
	FBasedPosition& CurrentDestinationField() { return *GetNativePointerField<FBasedPosition*>(this, "UPathFollowingComponent.CurrentDestination"); }
	UE::Math::TVector<double>& CurrentMoveInputField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPathFollowingComponent.CurrentMoveInput"); }
	UE::Math::TVector<double>& MoveOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPathFollowingComponent.MoveOffset"); }
	UE::Math::TVector<double>& LocationWhenPausedField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPathFollowingComponent.LocationWhenPaused"); }
	UE::Math::TVector<double>& OriginalMoveRequestGoalLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPathFollowingComponent.OriginalMoveRequestGoalLocation"); }
	double& PathTimeWhenPausedField() { return *GetNativePointerField<double*>(this, "UPathFollowingComponent.PathTimeWhenPaused"); }
	int& PreciseAcceptanceRadiusCheckStartNodeIndexField() { return *GetNativePointerField<int*>(this, "UPathFollowingComponent.PreciseAcceptanceRadiusCheckStartNodeIndex"); }
	TEnumAsByte<EPathFollowingStatus::Type>& StatusField() { return *GetNativePointerField<TEnumAsByte<EPathFollowingStatus::Type>*>(this, "UPathFollowingComponent.Status"); }
	float& BlockDetectionDistanceField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.BlockDetectionDistance"); }
	float& BlockDetectionIntervalField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.BlockDetectionInterval"); }
	int& BlockDetectionSampleCountField() { return *GetNativePointerField<int*>(this, "UPathFollowingComponent.BlockDetectionSampleCount"); }
	double& LastSampleTimeField() { return *GetNativePointerField<double*>(this, "UPathFollowingComponent.LastSampleTime"); }
	int& NextSampleIdxField() { return *GetNativePointerField<int*>(this, "UPathFollowingComponent.NextSampleIdx"); }
	int& MoveSegmentStartIndexField() { return *GetNativePointerField<int*>(this, "UPathFollowingComponent.MoveSegmentStartIndex"); }
	int& MoveSegmentEndIndexField() { return *GetNativePointerField<int*>(this, "UPathFollowingComponent.MoveSegmentEndIndex"); }
	unsigned __int64& MoveSegmentStartRefField() { return *GetNativePointerField<unsigned __int64*>(this, "UPathFollowingComponent.MoveSegmentStartRef"); }
	unsigned __int64& MoveSegmentEndRefField() { return *GetNativePointerField<unsigned __int64*>(this, "UPathFollowingComponent.MoveSegmentEndRef"); }
	UE::Math::TVector<double>& MoveSegmentDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPathFollowingComponent.MoveSegmentDirection"); }
	float& CachedBrakingDistanceField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.CachedBrakingDistance"); }
	float& CachedBrakingMaxSpeedField() { return *GetNativePointerField<float*>(this, "UPathFollowingComponent.CachedBrakingMaxSpeed"); }
	int& DecelerationSegmentIndexField() { return *GetNativePointerField<int*>(this, "UPathFollowingComponent.DecelerationSegmentIndex"); }
	FAIResourceLock& ResourceLockField() { return *GetNativePointerField<FAIResourceLock*>(this, "UPathFollowingComponent.ResourceLock"); }
	FTimerHandle& WaitingForPathTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "UPathFollowingComponent.WaitingForPathTimer"); }
	FAIRequestID& CurrentRequestIdField() { return *GetNativePointerField<FAIRequestID*>(this, "UPathFollowingComponent.CurrentRequestId"); }
	FNavLocation& CurrentNavLocationField() { return *GetNativePointerField<FNavLocation*>(this, "UPathFollowingComponent.CurrentNavLocation"); }
	BitFieldValue<bool, unsigned char> bReachTestIncludesAgentRadius() { return { this, "UPathFollowingComponent.bReachTestIncludesAgentRadius"}; }
	BitFieldValue<bool, unsigned char> bReachTestIncludesGoalRadius() { return { this, "UPathFollowingComponent.bReachTestIncludesGoalRadius"}; }
	BitFieldValue<bool, unsigned char> bMoveToGoalOnLastSegment() { return { this, "UPathFollowingComponent.bMoveToGoalOnLastSegment"}; }
	BitFieldValue<bool, unsigned char> bMoveToGoalClampedToNavigation() { return { this, "UPathFollowingComponent.bMoveToGoalClampedToNavigation"}; }
	BitFieldValue<bool, unsigned char> bUseBlockDetection() { return { this, "UPathFollowingComponent.bUseBlockDetection"}; }
	BitFieldValue<bool, unsigned char> bCollidedWithGoal() { return { this, "UPathFollowingComponent.bCollidedWithGoal"}; }
	BitFieldValue<bool, unsigned char> bLastMoveReachedGoal() { return { this, "UPathFollowingComponent.bLastMoveReachedGoal"}; }
	BitFieldValue<bool, unsigned char> bStopMovementOnFinish() { return { this, "UPathFollowingComponent.bStopMovementOnFinish"}; }
	BitFieldValue<bool, unsigned char> bIsUsingMetaPath() { return { this, "UPathFollowingComponent.bIsUsingMetaPath"}; }
	BitFieldValue<bool, unsigned char> bWalkingNavLinkStart() { return { this, "UPathFollowingComponent.bWalkingNavLinkStart"}; }
	BitFieldValue<bool, unsigned char> bIsDecelerating() { return { this, "UPathFollowingComponent.bIsDecelerating"}; }
	BitFieldValue<bool, unsigned char> bMoveSegmentIsUsingCustomLinkReachCondition() { return { this, "UPathFollowingComponent.bMoveSegmentIsUsingCustomLinkReachCondition"}; }
	BitFieldValue<bool, unsigned char> bTickComponentOnlyWhenMoving() { return { this, "UPathFollowingComponent.bTickComponentOnlyWhenMoving"}; }
	BitFieldValue<bool, unsigned char> bHasNotifiedMovementCloseToGoalThisRequestMove() { return { this, "UPathFollowingComponent.bHasNotifiedMovementCloseToGoalThisRequestMove"}; }
	void OnSegmentFinished() { NativeCall<void>(this, "UPathFollowingComponent.OnSegmentFinished()"); }
	bool HasReached(const AActor& TestGoal, EPathFollowingReachMode ReachMode, float InAcceptanceRadius, bool bUseNavAgentGoalLocation) { return NativeCall<bool, const AActor&, EPathFollowingReachMode, float, bool>(this, "UPathFollowingComponent.HasReached(AActor&,EPathFollowingReachMode,float,bool)", TestGoal, ReachMode, InAcceptanceRadius, bUseNavAgentGoalLocation); }
	void UpdateMoveFocus() { NativeCall<void>(this, "UPathFollowingComponent.UpdateMoveFocus()"); }
	UE::Math::TVector<double>* GetPathDestination(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPathFollowingComponent.GetPathDestination()", result); }
	void SetStatus(EPathFollowingStatus::Type InStatus) { NativeCall<void, EPathFollowingStatus::Type>(this, "UPathFollowingComponent.SetStatus(EPathFollowingStatus::Type)", InStatus); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPathFollowingComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void Initialize() { NativeCall<void>(this, "UPathFollowingComponent.Initialize()"); }
	void OnWaitingPathTimeout() { NativeCall<void>(this, "UPathFollowingComponent.OnWaitingPathTimeout()"); }
	bool UpdateMovementComponent(bool bForce) { return NativeCall<bool, bool>(this, "UPathFollowingComponent.UpdateMovementComponent(bool)", bForce); }
	bool HasReachedCurrentTarget(const UE::Math::TVector<double>& CurrentLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UPathFollowingComponent.HasReachedCurrentTarget(UE::Math::TVector<double>&)", CurrentLocation); }
	void ForceUnlockResource() { NativeCall<void>(this, "UPathFollowingComponent.ForceUnlockResource()"); }
	bool HasReachedInternal(const UE::Math::TVector<double>& GoalLocation, float GoalRadius, float GoalHalfHeight, const UE::Math::TVector<double>& AgentLocation, float RadiusThreshold, float AgentRadiusMultiplier, bool bShouldTether) { return NativeCall<bool, const UE::Math::TVector<double>&, float, float, const UE::Math::TVector<double>&, float, float, bool>(this, "UPathFollowingComponent.HasReachedInternal(UE::Math::TVector<double>&,float,float,UE::Math::TVector<double>&,float,float,bool)", GoalLocation, GoalRadius, GoalHalfHeight, AgentLocation, RadiusThreshold, AgentRadiusMultiplier, bShouldTether); }
	void OnLanded() { NativeCall<void>(this, "UPathFollowingComponent.OnLanded()"); }
	FString* GetStatusDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UPathFollowingComponent.GetStatusDesc()", result); }
	bool HasReachedDestination(const UE::Math::TVector<double>& CurrentLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "UPathFollowingComponent.HasReachedDestination(UE::Math::TVector<double>&)", CurrentLocation); }
	int FindPreciseAcceptanceRadiusTestsStartNodeIndex(const FNavigationPath& PathInstance, const UE::Math::TVector<double>& GoalLocation) { return NativeCall<int, const FNavigationPath&, const UE::Math::TVector<double>&>(this, "UPathFollowingComponent.FindPreciseAcceptanceRadiusTestsStartNodeIndex(FNavigationPath&,UE::Math::TVector<double>&)", PathInstance, GoalLocation); }
	int DetermineCurrentTargetPathPoint(int StartIndex) { return NativeCall<int, int>(this, "UPathFollowingComponent.DetermineCurrentTargetPathPoint(int)", StartIndex); }
	void LockResource(EAIRequestPriority::Type LockSource) { NativeCall<void, EAIRequestPriority::Type>(this, "UPathFollowingComponent.LockResource(EAIRequestPriority::Type)", LockSource); }
	int DetermineStartingPathPoint(const FNavigationPath* ConsideredPath) { return NativeCall<int, const FNavigationPath*>(this, "UPathFollowingComponent.DetermineStartingPathPoint(FNavigationPath*)", ConsideredPath); }
	void GetDebugStringTokens(TArray<FString, TSizedDefaultAllocator<32> >& Tokens, TArray<EPathFollowingDebugTokens::Type, TSizedDefaultAllocator<32> >& Flags) { NativeCall<void, TArray<FString, TSizedDefaultAllocator<32> >&, TArray<EPathFollowingDebugTokens::Type, TSizedDefaultAllocator<32> >&>(this, "UPathFollowingComponent.GetDebugStringTokens(TArray<FString,TSizedDefaultAllocator<32>>&,TArray<EPathFollowingDebugTokens::Type,TSizedDefaultAllocator<32>>&)", Tokens, Flags); }
	bool ShouldCheckPathOnResume() { return NativeCall<bool>(this, "UPathFollowingComponent.ShouldCheckPathOnResume()"); }
	void OnStartedFalling() { NativeCall<void>(this, "UPathFollowingComponent.OnStartedFalling()"); }
	void OnPathFinished(const FPathFollowingResult& Result) { NativeCall<void, const FPathFollowingResult&>(this, "UPathFollowingComponent.OnPathFinished(FPathFollowingResult&)", Result); }
	UE::Math::TVector<double>* GetAdditionalGoalOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPathFollowingComponent.GetAdditionalGoalOffset()", result); }
	void OnRegister() { NativeCall<void>(this, "UPathFollowingComponent.OnRegister()"); }
	void UpdateDecelerationData() { NativeCall<void>(this, "UPathFollowingComponent.UpdateDecelerationData()"); }
	UE::Math::TVector<double>* GetMoveFocus(UE::Math::TVector<double>* result, bool bAllowStrafe) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "UPathFollowingComponent.GetMoveFocus(bool)", result, bAllowStrafe); }
	void StartUsingCustomLink(INavLinkCustomInterface* CustomNavLink, const UE::Math::TVector<double>& DestPoint) { NativeCall<void, INavLinkCustomInterface*, const UE::Math::TVector<double>&>(this, "UPathFollowingComponent.StartUsingCustomLink(INavLinkCustomInterface*,UE::Math::TVector<double>&)", CustomNavLink, DestPoint); }
	void Reset() { NativeCall<void>(this, "UPathFollowingComponent.Reset()"); }
	void OnMoveSegmentUpdated() { NativeCall<void>(this, "UPathFollowingComponent.OnMoveSegmentUpdated()"); }
	bool IsBlocked() { return NativeCall<bool>(this, "UPathFollowingComponent.IsBlocked()"); }
	void ClearResourceLock(EAIRequestPriority::Type LockSource) { NativeCall<void, EAIRequestPriority::Type>(this, "UPathFollowingComponent.ClearResourceLock(EAIRequestPriority::Type)", LockSource); }
	void UpdatePathSegment() { NativeCall<void>(this, "UPathFollowingComponent.UpdatePathSegment()"); }
	float GetFinalAcceptanceRadius(const FNavigationPath& PathInstance, UE::Math::TVector<double>* OriginalGoalLocation, const UE::Math::TVector<double>* PathEndOverride) { if (!OriginalGoalLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, const FNavigationPath &, UE :: Math :: TVector < double >, const UE :: Math :: TVector < double > *>(this, "UPathFollowingComponent.GetFinalAcceptanceRadius(FNavigationPath&,UE::Math::TVector<double>,UE::Math::TVector<double>*)", PathInstance, *OriginalGoalLocation, PathEndOverride); }
	void SetNavMovementInterface(INavMovementInterface* NavMoveInterface) { NativeCall<void, INavMovementInterface*>(this, "UPathFollowingComponent.SetNavMovementInterface(INavMovementInterface*)", NavMoveInterface); }
	bool IsPathFollowingAllowed() { return NativeCall<bool>(this, "UPathFollowingComponent.IsPathFollowingAllowed()"); }
	void OnPathEvent(FNavigationPath* InPath, ENavPathEvent::Type Event) { NativeCall<void, FNavigationPath*, ENavPathEvent::Type>(this, "UPathFollowingComponent.OnPathEvent(FNavigationPath*,ENavPathEvent::Type)", InPath, Event); }
	void OnNewPawn(APawn* NewPawn) { NativeCall<void, APawn*>(this, "UPathFollowingComponent.OnNewPawn(APawn*)", NewPawn); }
	void FollowPathSegment(float DeltaTime) { NativeCall<void, float>(this, "UPathFollowingComponent.FollowPathSegment(float)", DeltaTime); }
	bool IsResourceLocked() { return NativeCall<bool>(this, "UPathFollowingComponent.IsResourceLocked()"); }
	void Cleanup() { NativeCall<void>(this, "UPathFollowingComponent.Cleanup()"); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "UPathFollowingComponent.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void DebugReachTest(float& CurrentDot, float& CurrentDistance, float& CurrentHeight, unsigned char& bDotFailed, unsigned char& bDistanceFailed, unsigned char& bHeightFailed) { NativeCall<void, float&, float&, float&, unsigned char&, unsigned char&, unsigned char&>(this, "UPathFollowingComponent.DebugReachTest(float&,float&,float&,unsignedchar&,unsignedchar&,unsignedchar&)", CurrentDot, CurrentDistance, CurrentHeight, bDotFailed, bDistanceFailed, bHeightFailed); }
	void UpdateCachedComponents() { NativeCall<void>(this, "UPathFollowingComponent.UpdateCachedComponents()"); }
	void OnPathfindingQuery(FPathFindingQuery& Query) { NativeCall<void, FPathFindingQuery&>(this, "UPathFollowingComponent.OnPathfindingQuery(FPathFindingQuery&)", Query); }
	bool HasReached(const UE::Math::TVector<double>& TestPoint, EPathFollowingReachMode ReachMode, float InAcceptanceRadius) { return NativeCall<bool, const UE::Math::TVector<double>&, EPathFollowingReachMode, float>(this, "UPathFollowingComponent.HasReached(UE::Math::TVector<double>&,EPathFollowingReachMode,float)", TestPoint, ReachMode, InAcceptanceRadius); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPathFollowingComponent._getUObject()"); }
	bool HasReached(const FAIMoveRequest& MoveRequest) { return NativeCall<bool, const FAIMoveRequest&>(this, "UPathFollowingComponent.HasReached(FAIMoveRequest&)", MoveRequest); }
	void OnNavigationInitDone() { NativeCall<void>(this, "UPathFollowingComponent.OnNavigationInitDone()"); }
	void SetMovementComponent(UNavMovementComponent* MoveComp) { NativeCall<void, UNavMovementComponent*>(this, "UPathFollowingComponent.SetMovementComponent(UNavMovementComponent*)", MoveComp); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPathFollowingComponent"); }
	FString* GetDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "UPathFollowingComponent.GetDebugString()", result); }
	int GetCurrentPathElement() { return NativeCall<int>(this, "UPathFollowingComponent.GetCurrentPathElement()"); }
	void FinishUsingCustomLink(INavLinkCustomInterface* CustomNavLink) { NativeCall<void, INavLinkCustomInterface*>(this, "UPathFollowingComponent.FinishUsingCustomLink(INavLinkCustomInterface*)", CustomNavLink); }
	void SetPreciseReachThreshold(float AgentRadiusMultiplier, float AgentHalfHeightMultiplier) { NativeCall<void, float, float>(this, "UPathFollowingComponent.SetPreciseReachThreshold(float,float)", AgentRadiusMultiplier, AgentHalfHeightMultiplier); }
	void SetBlockDetectionState(bool bEnable) { NativeCall<void, bool>(this, "UPathFollowingComponent.SetBlockDetectionState(bool)", bEnable); }
	bool HandlePathUpdateEvent() { return NativeCall<bool>(this, "UPathFollowingComponent.HandlePathUpdateEvent()"); }
	void OnActorBump(AActor* SelfActor, AActor* OtherActor, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, AActor *, UE :: Math :: TVector < double >, const FHitResult &>(this, "UPathFollowingComponent.OnActorBump(AActor*,AActor*,UE::Math::TVector<double>,FHitResult&)", SelfActor, OtherActor, *NormalImpulse, Hit); }
	void OnPathUpdated() { NativeCall<void>(this, "UPathFollowingComponent.OnPathUpdated()"); }
	void OnUnableToMove(const UObject& Instigator) { NativeCall<void, const UObject&>(this, "UPathFollowingComponent.OnUnableToMove(UObject&)", Instigator); }
	bool IsOnPath() { return NativeCall<bool>(this, "UPathFollowingComponent.IsOnPath()"); }
	bool ShouldStopMovementOnPathFinished() { return NativeCall<bool>(this, "UPathFollowingComponent.ShouldStopMovementOnPathFinished()"); }
	bool UpdateBlockDetection() { return NativeCall<bool>(this, "UPathFollowingComponent.UpdateBlockDetection()"); }
	UE::Math::TVector<double>* GetCurrentDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPathFollowingComponent.GetCurrentDirection()", result); }
	bool IsFollowingNavLink() { return NativeCall<bool>(this, "UPathFollowingComponent.IsFollowingNavLink()"); }
	void SetMoveSegment(int SegmentStartIndex) { NativeCall<void, int>(this, "UPathFollowingComponent.SetMoveSegment(int)", SegmentStartIndex); }
};
