#pragma once
#include "BulkForward.h"


struct AAIController : APrimalController
{
	// Fields

	//FGameplayResourceSet& ScriptClaimedResourcesField() { return *GetNativePointerField<FGameplayResourceSet*>(this, "AAIController.ScriptClaimedResources"); }
	//FFocusKnowledge& FocusInformationField() { return *GetNativePointerField<FFocusKnowledge*>(this, "AAIController.FocusInformation"); }
	//TObjectPtr<UPathFollowingComponent>& PathFollowingComponentField() { return *GetNativePointerField<TObjectPtr<UPathFollowingComponent>*>(this, "AAIController.PathFollowingComponent"); }
	TObjectPtr<UBrainComponent>& BrainComponentField() { return *GetNativePointerField<TObjectPtr<UBrainComponent>*>(this, "AAIController.BrainComponent"); }
	//TObjectPtr<UAIPerceptionComponent>& PerceptionComponentField() { return *GetNativePointerField<TObjectPtr<UAIPerceptionComponent>*>(this, "AAIController.PerceptionComponent"); }
	//TObjectPtr<UDEPRECATED_PawnActionsComponent>& ActionsComp_DEPRECATEDField() { return *GetNativePointerField<TObjectPtr<UDEPRECATED_PawnActionsComponent>*>(this, "AAIController.ActionsComp_DEPRECATED"); }
	//TObjectPtr<UBlackboardComponent>& BlackboardField() { return *GetNativePointerField<TObjectPtr<UBlackboardComponent>*>(this, "AAIController.Blackboard"); }
	//TObjectPtr<UGameplayTasksComponent>& CachedGameplayTasksComponentField() { return *GetNativePointerField<TObjectPtr<UGameplayTasksComponent>*>(this, "AAIController.CachedGameplayTasksComponent"); }
	//TSubclassOf<UNavigationQueryFilter>& DefaultNavigationFilterClassField() { return *GetNativePointerField<TSubclassOf<UNavigationQueryFilter>*>(this, "AAIController.DefaultNavigationFilterClass"); }
	//FAIMoveCompletedSignature& ReceiveMoveCompletedField() { return *GetNativePointerField<FAIMoveCompletedSignature*>(this, "AAIController.ReceiveMoveCompleted"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bStartAILogicOnPossess() { return { this, "AAIController.bStartAILogicOnPossess" }; }
	BitFieldValue<bool, unsigned __int32> bStopAILogicOnUnposses() { return { this, "AAIController.bStopAILogicOnUnposses" }; }
	BitFieldValue<bool, unsigned __int32> bLOSflag() { return { this, "AAIController.bLOSflag" }; }
	BitFieldValue<bool, unsigned __int32> bSkipExtraLOSChecks() { return { this, "AAIController.bSkipExtraLOSChecks" }; }
	BitFieldValue<bool, unsigned __int32> bAllowStrafe() { return { this, "AAIController.bAllowStrafe" }; }
	BitFieldValue<bool, unsigned __int32> bWantsPlayerState() { return { this, "AAIController.bWantsPlayerState" }; }
	BitFieldValue<bool, unsigned __int32> bLastRequestedMoveToLocationWasPlayerCommand() { return { this, "AAIController.bLastRequestedMoveToLocationWasPlayerCommand" }; }
	BitFieldValue<bool, unsigned __int32> bSetControlRotationFromPawnOrientation() { return { this, "AAIController.bSetControlRotationFromPawnOrientation" }; }
	BitFieldValue<bool, unsigned __int32> bExecutingRotateToFace() { return { this, "AAIController.bExecutingRotateToFace" }; }

	// Functions

	//UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask* Task) { return NativeCall<UGameplayTasksComponent*, const UGameplayTask*>(this, "AAIController.GetGameplayTasksComponent(UGameplayTask&)", Task); }
	//FGenericTeamId* GetGenericTeamId(FGenericTeamId* result) { return NativeCall<FGenericTeamId*, FGenericTeamId*>(this, "AAIController.GetGenericTeamId()", result); }
	//AActor* GetGameplayTaskOwner(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "AAIController.GetGameplayTaskOwner(UGameplayTask*)", Task); }
	//AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "AAIController.GetGameplayTaskAvatar(UGameplayTask*)", Task); }
	unsigned __int8 GetGameplayTaskDefaultPriority() { return NativeCall<unsigned __int8>(this, "AAIController.GetGameplayTaskDefaultPriority()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAIController"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAAIController();
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AAIController.Tick(float)", DeltaTime); }
	void PostInitializeComponents() { NativeCall<void>(this, "AAIController.PostInitializeComponents()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AAIController.PostRegisterAllComponents()"); }
	void Reset() { NativeCall<void>(this, "AAIController.Reset()"); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "AAIController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void SetFocalPoint(UE::Math::TVector<double>* NewFocus, unsigned __int8 InPriority) { NativeCall<void, UE::Math::TVector<double>*, unsigned __int8>(this, "AAIController.SetFocalPoint(UE::Math::TVector<double>,unsignedchar)", NewFocus, InPriority); }
	AActor* GetFocusActor() { return NativeCall<AActor*>(this, "AAIController.GetFocusActor()"); }
	void SetFocus(AActor* NewFocus, unsigned __int8 InPriority) { NativeCall<void, AActor*, unsigned __int8>(this, "AAIController.SetFocus(AActor*,unsignedchar)", NewFocus, InPriority); }
	void ClearFocus(unsigned __int8 InPriority) { NativeCall<void, unsigned __int8>(this, "AAIController.ClearFocus(unsignedchar)", InPriority); }
	bool LineOfSightTo(const AActor* Other, UE::Math::TVector<double>* ViewPoint, bool bAlternateChecks) { return NativeCall<bool, const AActor*, UE::Math::TVector<double>*, bool>(this, "AAIController.LineOfSightTo(AActor*,UE::Math::TVector<double>,bool)", Other, ViewPoint, bAlternateChecks); }
	void UpdateControlRotation(float DeltaTime, bool bUpdatePawn) { NativeCall<void, float, bool>(this, "AAIController.UpdateControlRotation(float,bool)", DeltaTime, bUpdatePawn); }
	void OnPossess(APawn* InPawn) { NativeCall<void, APawn*>(this, "AAIController.OnPossess(APawn*)", InPawn); }
	void OnUnPossess() { NativeCall<void>(this, "AAIController.OnUnPossess()"); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn*>(this, "AAIController.SetPawn(APawn*)", InPawn); }
	//FPathFollowingRequestResult* MoveTo(FPathFollowingRequestResult* result, const FAIMoveRequest* MoveRequest, TSharedPtr<FNavigationPath, 1>* OutPath) { return NativeCall<FPathFollowingRequestResult*, FPathFollowingRequestResult*, const FAIMoveRequest*, TSharedPtr<FNavigationPath, 1>*>(this, "AAIController.MoveTo(FAIMoveRequest&,TSharedPtr<FNavigationPath,1>*)", result, MoveRequest, OutPath); }
	//FAIRequestID* RequestMove(FAIRequestID* result, const FAIMoveRequest* MoveRequest, TSharedPtr<FNavigationPath, 1>* Path) { return NativeCall<FAIRequestID*, FAIRequestID*, const FAIMoveRequest*, TSharedPtr<FNavigationPath, 1>*>(this, "AAIController.RequestMove(FAIMoveRequest&,TSharedPtr<FNavigationPath,1>)", result, MoveRequest, Path); }
	//void StopMovement() { NativeCall<void>(this, "AAIController.StopMovement()"); }
	//bool ShouldPostponePathUpdates() { return NativeCall<bool>(this, "AAIController.ShouldPostponePathUpdates()"); }
	//bool BuildPathfindingQuery(const FAIMoveRequest* MoveRequest, FPathFindingQuery* Query) { return NativeCall<bool, const FAIMoveRequest*, FPathFindingQuery*>(this, "AAIController.BuildPathfindingQuery(FAIMoveRequest&,FPathFindingQuery&)", MoveRequest, Query); }
	//void FindPathForMoveRequest(const FAIMoveRequest* MoveRequest, FPathFindingQuery* Query, TSharedPtr<FNavigationPath, 1>* OutPath) { NativeCall<void, const FAIMoveRequest*, FPathFindingQuery*, TSharedPtr<FNavigationPath, 1>*>(this, "AAIController.FindPathForMoveRequest(FAIMoveRequest&,FPathFindingQuery&,TSharedPtr<FNavigationPath,1>&)", MoveRequest, Query, OutPath); }
	//bool PreparePathfinding(const FAIMoveRequest* MoveRequest, FPathFindingQuery* Query) { return NativeCall<bool, const FAIMoveRequest*, FPathFindingQuery*>(this, "AAIController.PreparePathfinding(FAIMoveRequest&,FPathFindingQuery&)", MoveRequest, Query); }
	//FAIRequestID* RequestPathAndMove(FAIRequestID* result, const FAIMoveRequest* MoveRequest, FPathFindingQuery* Query) { return NativeCall<FAIRequestID*, FAIRequestID*, const FAIMoveRequest*, FPathFindingQuery*>(this, "AAIController.RequestPathAndMove(FAIMoveRequest&,FPathFindingQuery&)", result, MoveRequest, Query); }
	bool IsFollowingAPath() { return NativeCall<bool>(this, "AAIController.IsFollowingAPath()"); }
	IPathFollowingAgentInterface* GetPathFollowingAgent() { return NativeCall<IPathFollowingAgentInterface*>(this, "AAIController.GetPathFollowingAgent()"); }
	//void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult* Result) { NativeCall<void, FAIRequestID, const FPathFollowingResult*>(this, "AAIController.OnMoveCompleted(FAIRequestID,FPathFollowingResult&)", RequestID, Result); }
	bool RunBehaviorTree(UBehaviorTree* BTAsset) { return NativeCall<bool, UBehaviorTree*>(this, "AAIController.RunBehaviorTree(UBehaviorTree*)", BTAsset); }
	void CleanupBrainComponent() { NativeCall<void>(this, "AAIController.CleanupBrainComponent()"); }
	//bool InitializeBlackboard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset) { return NativeCall<bool, UBlackboardComponent*, UBlackboardData*>(this, "AAIController.InitializeBlackboard(UBlackboardComponent&,UBlackboardData&)", BlackboardComp, BlackboardAsset); }
	//bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent** BlackboardComponent) { return NativeCall<bool, UBlackboardData*, UBlackboardComponent**>(this, "AAIController.UseBlackboard(UBlackboardData*,UBlackboardComponent*&)", BlackboardAsset, BlackboardComponent); }
	//bool ShouldSyncBlackboardWith(const UBlackboardComponent* OtherBlackboardComponent) { return NativeCall<bool, const UBlackboardComponent*>(this, "AAIController.ShouldSyncBlackboardWith(UBlackboardComponent&)", OtherBlackboardComponent); }
	FString* GetDebugIcon(FString* result) { return NativeCall<FString*, FString*>(this, "AAIController.GetDebugIcon()", result); }
	//void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased) { NativeCall<void, FGameplayResourceSet, FGameplayResourceSet>(this, "AAIController.OnGameplayTaskResourcesClaimed(FGameplayResourceSet,FGameplayResourceSet)", NewlyClaimed, FreshlyReleased); }
	//void SetGenericTeamId(const FGenericTeamId* NewTeamID) { NativeCall<void, const FGenericTeamId*>(this, "AAIController.SetGenericTeamId(FGenericTeamId&)", NewTeamID); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AAIController"); }

	FGameplayResourceSet& ScriptClaimedResourcesField() { return *GetNativePointerField<FGameplayResourceSet*>(this, "AAIController.ScriptClaimedResources"); }
	FFocusKnowledge& FocusInformationField() { return *GetNativePointerField<FFocusKnowledge*>(this, "AAIController.FocusInformation"); }
	FAIMoveCompletedSignature& ReceiveMoveCompletedField() { return *GetNativePointerField<FAIMoveCompletedSignature*>(this, "AAIController.ReceiveMoveCompleted"); }
	FGenericTeamId& TeamIDField() { return *GetNativePointerField<FGenericTeamId*>(this, "AAIController.TeamID"); }
	BitFieldValue<bool, unsigned __int32> bSkipRootComponentUpdate() { return { this, "AAIController.bSkipRootComponentUpdate"}; }
	AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "AAIController.GetGameplayTaskAvatar(UGameplayTask*)", Task); }
	bool BuildPathfindingQuery(const FAIMoveRequest& MoveRequest, FPathFindingQuery& OutQuery) { return NativeCall<bool, const FAIMoveRequest&, FPathFindingQuery&>(this, "AAIController.BuildPathfindingQuery(FAIMoveRequest&,FPathFindingQuery&)", MoveRequest, OutQuery); }
	UE::Math::TVector<double>* GetFocalPointForPriority(UE::Math::TVector<double>* result, unsigned char InPriority) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, unsigned char>(this, "AAIController.GetFocalPointForPriority(unsignedchar)", result, InPriority); }
	void ActorsPerceptionUpdated(const TArray<AActor*, TSizedDefaultAllocator<32> >& UpdatedActors) { NativeCall<void, const TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "AAIController.ActorsPerceptionUpdated(TArray<AActor*,TSizedDefaultAllocator<32>>&)", UpdatedActors); }
	bool BuildPathfindingQuery(const FAIMoveRequest& MoveRequest, const UE::Math::TVector<double>& StartLocation, FPathFindingQuery& OutQuery) { return NativeCall<bool, const FAIMoveRequest&, const UE::Math::TVector<double>&, FPathFindingQuery&>(this, "AAIController.BuildPathfindingQuery(FAIMoveRequest&,UE::Math::TVector<double>&,FPathFindingQuery&)", MoveRequest, StartLocation, OutQuery); }
	UE::Math::TVector<double>* GetFocalPointOnActor(UE::Math::TVector<double>* result, const AActor* Actor) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*>(this, "AAIController.GetFocalPointOnActor(AActor*)", result, Actor); }
	void OnGameplayTaskActivated(UGameplayTask& Task) { NativeCall<void, UGameplayTask&>(this, "AAIController.OnGameplayTaskActivated(UGameplayTask&)", Task); }
	void SetPerceptionComponent(UAIPerceptionComponent& InPerceptionComponent) { NativeCall<void, UAIPerceptionComponent&>(this, "AAIController.SetPerceptionComponent(UAIPerceptionComponent&)", InPerceptionComponent); }
	bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent) { return NativeCall<bool, UBlackboardData*, UBlackboardComponent*&>(this, "AAIController.UseBlackboard(UBlackboardData*,UBlackboardComponent*&)", BlackboardAsset, BlackboardComponent); }
	AActor* GetGameplayTaskOwner(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "AAIController.GetGameplayTaskOwner(UGameplayTask*)", Task); }
	bool ShouldSyncBlackboardWith(const UBlackboardComponent& OtherBlackboardComponent) { return NativeCall<bool, const UBlackboardComponent&>(this, "AAIController.ShouldSyncBlackboardWith(UBlackboardComponent&)", OtherBlackboardComponent); }
	void OnGameplayTaskDeactivated(UGameplayTask& Task) { NativeCall<void, UGameplayTask&>(this, "AAIController.OnGameplayTaskDeactivated(UGameplayTask&)", Task); }
	UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask& Task) { return NativeCall<UGameplayTasksComponent*, const UGameplayTask&>(this, "AAIController.GetGameplayTasksComponent(UGameplayTask&)", Task); }
	void StopMovement() { NativeCall<void>(this, "AAIController.StopMovement()"); }
	bool PreparePathfinding(const FAIMoveRequest& MoveRequest, FPathFindingQuery& Query) { return NativeCall<bool, const FAIMoveRequest&, FPathFindingQuery&>(this, "AAIController.PreparePathfinding(FAIMoveRequest&,FPathFindingQuery&)", MoveRequest, Query); }
	UAIPerceptionComponent* GetPerceptionComponent() { return NativeCall<UAIPerceptionComponent*>(this, "AAIController.GetPerceptionComponent()"); }
	void SetGenericTeamId(const FGenericTeamId& NewTeamID) { NativeCall<void, const FGenericTeamId&>(this, "AAIController.SetGenericTeamId(FGenericTeamId&)", NewTeamID); }
	bool InitializeBlackboard(UBlackboardComponent& BlackboardComp, UBlackboardData& BlackboardAsset) { return NativeCall<bool, UBlackboardComponent&, UBlackboardData&>(this, "AAIController.InitializeBlackboard(UBlackboardComponent&,UBlackboardData&)", BlackboardComp, BlackboardAsset); }
	UE::Math::TVector<double>* GetFocalPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AAIController.GetFocalPoint()", result); }
	void OnGameplayTaskInitialized(UGameplayTask& Task) { NativeCall<void, UGameplayTask&>(this, "AAIController.OnGameplayTaskInitialized(UGameplayTask&)", Task); }
	void SetControlRotation(const UE::Math::TRotator<double>& NewRotation) { NativeCall<void, const UE::Math::TRotator<double>&>(this, "AAIController.SetControlRotation(UE::Math::TRotator<double>&)", NewRotation); }
	bool ShouldPostponePathUpdates() { return NativeCall<bool>(this, "AAIController.ShouldPostponePathUpdates()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AAIController._getUObject()"); }
};