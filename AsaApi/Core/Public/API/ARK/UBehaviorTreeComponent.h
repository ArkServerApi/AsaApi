#pragma once
#include "BulkForward.h"
#include "UBrainComponent.h"

struct UBehaviorTreeComponent : public UBrainComponent
{
public:
	UBehaviorTreeComponent() = delete;
	~UBehaviorTreeComponent() = delete;
	UBehaviorTreeComponent(const UBehaviorTreeComponent&) = delete;
	UBehaviorTreeComponent& operator=(const UBehaviorTreeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBehaviorTreeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBehaviorTreeComponent"); }

	FBehaviorTreeSearchData& SearchDataField() { return *GetNativePointerField<FBehaviorTreeSearchData*>(this, "UBehaviorTreeComponent.SearchData"); }
	FBTNodeExecutionInfo& ExecutionRequestField() { return *GetNativePointerField<FBTNodeExecutionInfo*>(this, "UBehaviorTreeComponent.ExecutionRequest"); }
	FBTPendingExecutionInfo& PendingExecutionField() { return *GetNativePointerField<FBTPendingExecutionInfo*>(this, "UBehaviorTreeComponent.PendingExecution"); }
	EBTBranchAction& SuspendedBranchActionsField() { return *GetNativePointerField<EBTBranchAction*>(this, "UBehaviorTreeComponent.SuspendedBranchActions"); }
	FBTTreeStartInfo& TreeStartInfoField() { return *GetNativePointerField<FBTTreeStartInfo*>(this, "UBehaviorTreeComponent.TreeStartInfo"); }
	unsigned short& ActiveInstanceIdxField() { return *GetNativePointerField<unsigned short*>(this, "UBehaviorTreeComponent.ActiveInstanceIdx"); }
	bool& bTickedOnceField() { return *GetNativePointerField<bool*>(this, "UBehaviorTreeComponent.bTickedOnce"); }
	float& NextTickDeltaTimeField() { return *GetNativePointerField<float*>(this, "UBehaviorTreeComponent.NextTickDeltaTime"); }
	float& AccumulatedTickDeltaTimeField() { return *GetNativePointerField<float*>(this, "UBehaviorTreeComponent.AccumulatedTickDeltaTime"); }
	float& CurrentFrameDeltaTimeField() { return *GetNativePointerField<float*>(this, "UBehaviorTreeComponent.CurrentFrameDeltaTime"); }
	double& LastRequestedDeltaTimeGameTimeField() { return *GetNativePointerField<double*>(this, "UBehaviorTreeComponent.LastRequestedDeltaTimeGameTime"); }
	int& TickingModulusField() { return *GetNativePointerField<int*>(this, "UBehaviorTreeComponent.TickingModulus"); }
	int& LowQualityTickingModulusField() { return *GetNativePointerField<int*>(this, "UBehaviorTreeComponent.LowQualityTickingModulus"); }
	bool& bIsTickingField() { return *GetNativePointerField<bool*>(this, "UBehaviorTreeComponent.bIsTicking"); }
	BitFieldValue<bool, unsigned char> bLoopExecution() { return { this, "UBehaviorTreeComponent.bLoopExecution"}; }
	BitFieldValue<bool, unsigned char> bWaitingForLatentAborts() { return { this, "UBehaviorTreeComponent.bWaitingForLatentAborts"}; }
	BitFieldValue<bool, unsigned char> bRequestedFlowUpdate() { return { this, "UBehaviorTreeComponent.bRequestedFlowUpdate"}; }
	BitFieldValue<bool, unsigned char> bRequestedStop() { return { this, "UBehaviorTreeComponent.bRequestedStop"}; }
	BitFieldValue<bool, unsigned char> bIsRunning() { return { this, "UBehaviorTreeComponent.bIsRunning"}; }
	BitFieldValue<bool, unsigned char> bIsPaused() { return { this, "UBehaviorTreeComponent.bIsPaused"}; }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UBehaviorTreeComponent.RegisterComponentTickFunctions(bool,bool)", bRegister, bSaveAndRestoreComponentTickState); }
	bool DeactivateUpTo(const UBTCompositeNode* Node, unsigned short NodeInstanceIdx, EBTNodeResult::Type& NodeResult, int& OutLastDeactivatedChildIndex) { return NativeCall<bool, const UBTCompositeNode*, unsigned short, EBTNodeResult::Type&, int&>(this, "UBehaviorTreeComponent.DeactivateUpTo(UBTCompositeNode*,unsignedshort,EBTNodeResult::Type&,int&)", Node, NodeInstanceIdx, NodeResult, OutLastDeactivatedChildIndex); }
	bool PushInstance(UBehaviorTree& TreeAsset) { return NativeCall<bool, UBehaviorTree&>(this, "UBehaviorTreeComponent.PushInstance(UBehaviorTree&)", TreeAsset); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UBehaviorTreeComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RequestBranchEvaluation(EBTNodeResult::Type ContinueWithResult) { NativeCall<void, EBTNodeResult::Type>(this, "UBehaviorTreeComponent.RequestBranchEvaluation(EBTNodeResult::Type)", ContinueWithResult); }
	void ApplySearchData(UBTNode* NewActiveNode) { NativeCall<void, UBTNode*>(this, "UBehaviorTreeComponent.ApplySearchData(UBTNode*)", NewActiveNode); }
	UBTNode* FindTemplateNode(const UBTNode* Node) { return NativeCall<UBTNode*, const UBTNode*>(this, "UBehaviorTreeComponent.FindTemplateNode(UBTNode*)", Node); }
	void ResumeBranchActions() { NativeCall<void>(this, "UBehaviorTreeComponent.ResumeBranchActions()"); }
	void OnRegister() { NativeCall<void>(this, "UBehaviorTreeComponent.OnRegister()"); }
	bool HasActiveLatentAborts() { return NativeCall<bool>(this, "UBehaviorTreeComponent.HasActiveLatentAborts()"); }
	void ProcessPendingInitialize() { NativeCall<void>(this, "UBehaviorTreeComponent.ProcessPendingInitialize()"); }
	unsigned char* GetNodeMemoryAux(const UBTNode* Node, int InstanceIdx) { return NativeCall<unsigned char*, const UBTNode*, int>(this, "UBehaviorTreeComponent.GetNodeMemoryAux(UBTNode*,int)", Node, InstanceIdx); }
	void StartTree(UBehaviorTree& Asset, EBTExecutionMode::Type ExecuteMode) { NativeCall<void, UBehaviorTree&, EBTExecutionMode::Type>(this, "UBehaviorTreeComponent.StartTree(UBehaviorTree&,EBTExecutionMode::Type)", Asset, ExecuteMode); }
	EAILogicResuming::Type ResumeLogic(const FString& Reason) { return NativeCall<EAILogicResuming::Type, const FString&>(this, "UBehaviorTreeComponent.ResumeLogic(FString&)", Reason); }
	bool IsRunning() { return NativeCall<bool>(this, "UBehaviorTreeComponent.IsRunning()"); }
	void ScheduleNextTick(float NextNeededDeltaTime) { NativeCall<void, float>(this, "UBehaviorTreeComponent.ScheduleNextTick(float)", NextNeededDeltaTime); }
	void StartLogic() { NativeCall<void>(this, "UBehaviorTreeComponent.StartLogic()"); }
	bool IsAuxNodeActive(const UBTAuxiliaryNode* AuxNode) { return NativeCall<bool, const UBTAuxiliaryNode*>(this, "UBehaviorTreeComponent.IsAuxNodeActive(UBTAuxiliaryNode*)", AuxNode); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UBehaviorTreeComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	unsigned char* GetNodeMemory(const UBTNode* Node, int InstanceIdx) { return NativeCall<unsigned char*, const UBTNode*, int>(this, "UBehaviorTreeComponent.GetNodeMemory(UBTNode*,int)", Node, InstanceIdx); }
	const UBTNode* GetActiveNode() { return NativeCall<const UBTNode*>(this, "UBehaviorTreeComponent.GetActiveNode()"); }
	bool IsComponentTickEnabled() { return NativeCall<bool>(this, "UBehaviorTreeComponent.IsComponentTickEnabled()"); }
	bool IsPaused() { return NativeCall<bool>(this, "UBehaviorTreeComponent.IsPaused()"); }
	void UnregisterParallelTask(const UBTTaskNode* TaskNode, unsigned short InstanceIdx) { NativeCall<void, const UBTTaskNode*, unsigned short>(this, "UBehaviorTreeComponent.UnregisterParallelTask(UBTTaskNode*,unsignedshort)", TaskNode, InstanceIdx); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UBehaviorTreeComponent.SetComponentTickEnabled(bool)", bEnabled); }
	FString* DescribeActiveTasks(FString* result) { return NativeCall<FString*, FString*>(this, "UBehaviorTreeComponent.DescribeActiveTasks()", result); }
	void EvaluateBranch(const UBTDecorator& RequestedBy) { NativeCall<void, const UBTDecorator&>(this, "UBehaviorTreeComponent.EvaluateBranch(UBTDecorator&)", RequestedBy); }
	void RequestBranchActivation(const UBTDecorator& RequestedBy, bool bRequestEvenIfExecuting) { NativeCall<void, const UBTDecorator&, bool>(this, "UBehaviorTreeComponent.RequestBranchActivation(UBTDecorator&,bool)", RequestedBy, bRequestEvenIfExecuting); }
	void RegisterParallelTask(const UBTTaskNode* TaskNode) { NativeCall<void, const UBTTaskNode*>(this, "UBehaviorTreeComponent.RegisterParallelTask(UBTTaskNode*)", TaskNode); }
	void RestartLogic() { NativeCall<void>(this, "UBehaviorTreeComponent.RestartLogic()"); }
	void EvaluateBranch(EBTNodeResult::Type ContinueWithResult) { NativeCall<void, EBTNodeResult::Type>(this, "UBehaviorTreeComponent.EvaluateBranch(EBTNodeResult::Type)", ContinueWithResult); }
	void StoreDebuggerSearchStep(const UBTNode* Node, unsigned short InstanceIdx, EBTNodeResult::Type NodeResult) { NativeCall<void, const UBTNode*, unsigned short, EBTNodeResult::Type>(this, "UBehaviorTreeComponent.StoreDebuggerSearchStep(UBTNode*,unsignedshort,EBTNodeResult::Type)", Node, InstanceIdx, NodeResult); }
	void Cleanup() { NativeCall<void>(this, "UBehaviorTreeComponent.Cleanup()"); }
	void OnTaskFinished(const UBTTaskNode* TaskNode, EBTNodeResult::Type TaskResult) { NativeCall<void, const UBTTaskNode*, EBTNodeResult::Type>(this, "UBehaviorTreeComponent.OnTaskFinished(UBTTaskNode*,EBTNodeResult::Type)", TaskNode, TaskResult); }
	void UnregisterAuxNodesInRange(const FBTNodeIndex& FromIndex, const FBTNodeIndex& ToIndex) { NativeCall<void, const FBTNodeIndex&, const FBTNodeIndex&>(this, "UBehaviorTreeComponent.UnregisterAuxNodesInRange(FBTNodeIndex&,FBTNodeIndex&)", FromIndex, ToIndex); }
	void RequestExecution(const UBTCompositeNode* RequestedOn, int InstanceIdx, const UBTNode* RequestedBy, int RequestedByChildIndex, EBTNodeResult::Type ContinueWithResult, bool bStoreForDebugger) { NativeCall<void, const UBTCompositeNode*, int, const UBTNode*, int, EBTNodeResult::Type, bool>(this, "UBehaviorTreeComponent.RequestExecution(UBTCompositeNode*,int,UBTNode*,int,EBTNodeResult::Type,bool)", RequestedOn, InstanceIdx, RequestedBy, RequestedByChildIndex, ContinueWithResult, bStoreForDebugger); }
	FString* DescribeActiveTrees(FString* result) { return NativeCall<FString*, FString*>(this, "UBehaviorTreeComponent.DescribeActiveTrees()", result); }
	unsigned char UpdateInstanceId(UBehaviorTree* TreeAsset, const UBTNode* OriginNode, int OriginInstanceIdx) { return NativeCall<unsigned char, UBehaviorTree*, const UBTNode*, int>(this, "UBehaviorTreeComponent.UpdateInstanceId(UBehaviorTree*,UBTNode*,int)", TreeAsset, OriginNode, OriginInstanceIdx); }
	void RollbackSearchChanges() { NativeCall<void>(this, "UBehaviorTreeComponent.RollbackSearchChanges()"); }
	void OnTreeFinished() { NativeCall<void>(this, "UBehaviorTreeComponent.OnTreeFinished()"); }
	bool IsExecutingBranch(const UBTNode* Node, int ChildIndex) { return NativeCall<bool, const UBTNode*, int>(this, "UBehaviorTreeComponent.IsExecutingBranch(UBTNode*,int)", Node, ChildIndex); }
	void TickNewlyAddedAuxNodesHelper() { NativeCall<void>(this, "UBehaviorTreeComponent.TickNewlyAddedAuxNodesHelper()"); }
	void UnregisterAuxNodesInBranch(const UBTCompositeNode* Node, bool bApplyImmediately) { NativeCall<void, const UBTCompositeNode*, bool>(this, "UBehaviorTreeComponent.UnregisterAuxNodesInBranch(UBTCompositeNode*,bool)", Node, bApplyImmediately); }
	void RequestBranchEvaluation(const UBTDecorator& RequestedBy) { NativeCall<void, const UBTDecorator&>(this, "UBehaviorTreeComponent.RequestBranchEvaluation(UBTDecorator&)", RequestedBy); }
	void ActivateBranch(const UBTDecorator& RequestedBy, bool bForceResquestEvenIfExecuting) { NativeCall<void, const UBTDecorator&, bool>(this, "UBehaviorTreeComponent.ActivateBranch(UBTDecorator&,bool)", RequestedBy, bForceResquestEvenIfExecuting); }
	void StopTree(EBTStopMode::Type StopMode) { NativeCall<void, EBTStopMode::Type>(this, "UBehaviorTreeComponent.StopTree(EBTStopMode::Type)", StopMode); }
	void StopLogic(const FString& Reason) { NativeCall<void, const FString&>(this, "UBehaviorTreeComponent.StopLogic(FString&)", Reason); }
	EBTTaskStatus::Type GetTaskStatus(const UBTTaskNode* TaskNode) { return NativeCall<EBTTaskStatus::Type, const UBTTaskNode*>(this, "UBehaviorTreeComponent.GetTaskStatus(UBTTaskNode*)", TaskNode); }
	int FindInstanceContainingNode(const UBTNode* Node) { return NativeCall<int, const UBTNode*>(this, "UBehaviorTreeComponent.FindInstanceContainingNode(UBTNode*)", Node); }
	void UninitializeComponent() { NativeCall<void>(this, "UBehaviorTreeComponent.UninitializeComponent()"); }
	void UnregisterAuxNodesUpTo(const FBTNodeIndex& Index) { NativeCall<void, const FBTNodeIndex&>(this, "UBehaviorTreeComponent.UnregisterAuxNodesUpTo(FBTNodeIndex&)", Index); }
	void DeactivateBranch(const UBTDecorator& RequestedBy) { NativeCall<void, const UBTDecorator&>(this, "UBehaviorTreeComponent.DeactivateBranch(UBTDecorator&)", RequestedBy); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UBehaviorTreeComponent.GetDebugInfoString()", result); }
	void StoreDebuggerSearchStep(const UBTNode* Node, unsigned short InstanceIdx, bool bPassed) { NativeCall<void, const UBTNode*, unsigned short, bool>(this, "UBehaviorTreeComponent.StoreDebuggerSearchStep(UBTNode*,unsignedshort,bool)", Node, InstanceIdx, bPassed); }
	void RequestBranchDeactivation(const UBTDecorator& RequestedBy) { NativeCall<void, const UBTDecorator&>(this, "UBehaviorTreeComponent.RequestBranchDeactivation(UBTDecorator&)", RequestedBy); }
	void ExecuteTask(UBTTaskNode* TaskNode) { NativeCall<void, UBTTaskNode*>(this, "UBehaviorTreeComponent.ExecuteTask(UBTTaskNode*)", TaskNode); }
	void RemoveAllInstances() { NativeCall<void>(this, "UBehaviorTreeComponent.RemoveAllInstances()"); }
	void UnregisterMessageObserversFrom(const UBTTaskNode* TaskNode) { NativeCall<void, const UBTTaskNode*>(this, "UBehaviorTreeComponent.UnregisterMessageObserversFrom(UBTTaskNode*)", TaskNode); }
	void HandleMessage(const FAIMessage& Message) { NativeCall<void, const FAIMessage&>(this, "UBehaviorTreeComponent.HandleMessage(FAIMessage&)", Message); }
	UBehaviorTree* GetRootTree() { return NativeCall<UBehaviorTree*>(this, "UBehaviorTreeComponent.GetRootTree()"); }
	void PauseLogic(const FString& Reason) { NativeCall<void, const FString&>(this, "UBehaviorTreeComponent.PauseLogic(FString&)", Reason); }
	void RegisterMessageObserver(const UBTTaskNode* TaskNode, FName MessageType) { NativeCall<void, const UBTTaskNode*, FName>(this, "UBehaviorTreeComponent.RegisterMessageObserver(UBTTaskNode*,FName)", TaskNode, MessageType); }
	void ProcessExecutionRequest() { NativeCall<void>(this, "UBehaviorTreeComponent.ProcessExecutionRequest()"); }
	void ProcessPendingExecution() { NativeCall<void>(this, "UBehaviorTreeComponent.ProcessPendingExecution()"); }
};
