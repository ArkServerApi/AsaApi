#pragma once
#include "BulkForward.h"
#include "UBrainComponent.h"

struct UStateTreeComponent : public UBrainComponent
{
public:
	UStateTreeComponent() = delete;
	~UStateTreeComponent() = delete;
	UStateTreeComponent(const UStateTreeComponent&) = delete;
	UStateTreeComponent& operator=(const UStateTreeComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStateTreeComponent"); }

	FStateTreeRunStatusChanged& OnStateTreeRunStatusChangedField() { return *GetNativePointerField<FStateTreeRunStatusChanged*>(this, "UStateTreeComponent.OnStateTreeRunStatusChanged"); }
	FStateTreeReference& StateTreeRefField() { return *GetNativePointerField<FStateTreeReference*>(this, "UStateTreeComponent.StateTreeRef"); }
	FStateTreeReferenceOverrides& LinkedStateTreeOverridesField() { return *GetNativePointerField<FStateTreeReferenceOverrides*>(this, "UStateTreeComponent.LinkedStateTreeOverrides"); }
	FStateTreeInstanceData& InstanceDataField() { return *GetNativePointerField<FStateTreeInstanceData*>(this, "UStateTreeComponent.InstanceData"); }
	bool& bStartLogicAutomaticallyField() { return *GetNativePointerField<bool*>(this, "UStateTreeComponent.bStartLogicAutomatically"); }
	FStateTreeExecutionContext*& CurrentlyRunningExecContextField() { return *GetNativePointerField<FStateTreeExecutionContext**>(this, "UStateTreeComponent.CurrentlyRunningExecContext"); }
	BitFieldValue<bool, unsigned char> bIsRunning() { return { this, "UStateTreeComponent.bIsRunning"}; }
	BitFieldValue<bool, unsigned char> bIsPaused() { return { this, "UStateTreeComponent.bIsPaused"}; }
	void SetStateTree(UStateTree* InStateTree) { NativeCall<void, UStateTree*>(this, "UStateTreeComponent.SetStateTree(UStateTree*)", InStateTree); }
	void RestartLogic() { NativeCall<void>(this, "UStateTreeComponent.RestartLogic()"); }
	void DisableTick() { NativeCall<void>(this, "UStateTreeComponent.DisableTick()"); }
	void OnGameplayTaskInitialized(UGameplayTask& Task) { NativeCall<void, UGameplayTask&>(this, "UStateTreeComponent.OnGameplayTaskInitialized(UGameplayTask&)", Task); }
	UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask& Task) { return NativeCall<UGameplayTasksComponent*, const UGameplayTask&>(this, "UStateTreeComponent.GetGameplayTasksComponent(UGameplayTask&)", Task); }
	bool IsPaused() { return NativeCall<bool>(this, "UStateTreeComponent.IsPaused()"); }
	void Cleanup() { NativeCall<void>(this, "UStateTreeComponent.Cleanup()"); }
	bool IsRunning() { return NativeCall<bool>(this, "UStateTreeComponent.IsRunning()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UStateTreeComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void ValidateStateTreeReference() { NativeCall<void>(this, "UStateTreeComponent.ValidateStateTreeReference()"); }
	void BeginPlay() { NativeCall<void>(this, "UStateTreeComponent.BeginPlay()"); }
	EAILogicResuming::Type ResumeLogic(const FString& Reason) { return NativeCall<EAILogicResuming::Type, const FString&>(this, "UStateTreeComponent.ResumeLogic(FString&)", Reason); }
	bool SetContextRequirements(FStateTreeExecutionContext& Context, bool bLogErrors) { return NativeCall<bool, FStateTreeExecutionContext&, bool>(this, "UStateTreeComponent.SetContextRequirements(FStateTreeExecutionContext&,bool)", Context, bLogErrors); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStateTreeComponent"); }
	void StartLogic() { NativeCall<void>(this, "UStateTreeComponent.StartLogic()"); }
	unsigned char GetGameplayTaskDefaultPriority() { return NativeCall<unsigned char>(this, "UStateTreeComponent.GetGameplayTaskDefaultPriority()"); }
	AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "UStateTreeComponent.GetGameplayTaskAvatar(UGameplayTask*)", Task); }
	void UninitializeComponent() { NativeCall<void>(this, "UStateTreeComponent.UninitializeComponent()"); }
	void PauseLogic(const FString& Reason) { NativeCall<void, const FString&>(this, "UStateTreeComponent.PauseLogic(FString&)", Reason); }
	AActor* GetGameplayTaskOwner(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "UStateTreeComponent.GetGameplayTaskOwner(UGameplayTask*)", Task); }
	void StartTree() { NativeCall<void>(this, "UStateTreeComponent.StartTree()"); }
	void StopLogic(const FString& Reason) { NativeCall<void, const FString&>(this, "UStateTreeComponent.StopLogic(FString&)", Reason); }
	void ScheduleTickFrame(const FStateTreeScheduledTick& NextTick) { NativeCall<void, const FStateTreeScheduledTick&>(this, "UStateTreeComponent.ScheduleTickFrame(FStateTreeScheduledTick&)", NextTick); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UStateTreeComponent._getUObject()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UStateTreeComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void InitializeComponent() { NativeCall<void>(this, "UStateTreeComponent.InitializeComponent()"); }
};
