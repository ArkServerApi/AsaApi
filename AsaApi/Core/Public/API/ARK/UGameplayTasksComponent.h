#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UGameplayTasksComponent : public UActorComponent
{
public:
	UGameplayTasksComponent() = delete;
	~UGameplayTasksComponent() = delete;
	UGameplayTasksComponent(const UGameplayTasksComponent&) = delete;
	UGameplayTasksComponent& operator=(const UGameplayTasksComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayTasksComponent"); }

	int& EventLockCounterField() { return *GetNativePointerField<int*>(this, "UGameplayTasksComponent.EventLockCounter"); }
	unsigned char& TopActivePriorityField() { return *GetNativePointerField<unsigned char*>(this, "UGameplayTasksComponent.TopActivePriority"); }
	FGameplayResourceSet& CurrentlyClaimedResourcesField() { return *GetNativePointerField<FGameplayResourceSet*>(this, "UGameplayTasksComponent.CurrentlyClaimedResources"); }
	FOnClaimedResourcesChangeSignature& OnClaimedResourcesChangeField() { return *GetNativePointerField<FOnClaimedResourcesChangeSignature*>(this, "UGameplayTasksComponent.OnClaimedResourcesChange"); }
	BitFieldValue<bool, unsigned char> bInEventProcessingInProgress() { return { this, "UGameplayTasksComponent.bInEventProcessingInProgress"}; }
	UGameplayTask* FindResourceConsumingTaskByName(FName TaskInstanceName) { return NativeCall<UGameplayTask*, FName>(this, "UGameplayTasksComponent.FindResourceConsumingTaskByName(FName)", TaskInstanceName); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGameplayTasksComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask& Task) { return NativeCall<UGameplayTasksComponent*, const UGameplayTask&>(this, "UGameplayTasksComponent.GetGameplayTasksComponent(UGameplayTask&)", Task); }
	void OnRep_SimulatedTasks() { NativeCall<void>(this, "UGameplayTasksComponent.OnRep_SimulatedTasks()"); }
	void AddTaskToPriorityQueue(UGameplayTask& NewTask) { NativeCall<void, UGameplayTask&>(this, "UGameplayTasksComponent.AddTaskToPriorityQueue(UGameplayTask&)", NewTask); }
	void ProcessTaskEvents() { NativeCall<void>(this, "UGameplayTasksComponent.ProcessTaskEvents()"); }
	void AddTaskReadyForActivation(UGameplayTask& NewTask) { NativeCall<void, UGameplayTask&>(this, "UGameplayTasksComponent.AddTaskReadyForActivation(UGameplayTask&)", NewTask); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGameplayTasksComponent._getUObject()"); }
	bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) { return NativeCall<bool, UActorChannel*, FOutBunch*, FReplicationFlags*>(this, "UGameplayTasksComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", Channel, Bunch, RepFlags); }
	void OnGameplayTaskDeactivated(UGameplayTask& Task) { NativeCall<void, UGameplayTask&>(this, "UGameplayTasksComponent.OnGameplayTaskDeactivated(UGameplayTask&)", Task); }
	AActor* GetGameplayTaskOwner(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "UGameplayTasksComponent.GetGameplayTaskOwner(UGameplayTask*)", Task); }
	void EndAllResourceConsumingTasksOwnedBy(const IGameplayTaskOwnerInterface& TaskOwner) { NativeCall<void, const IGameplayTaskOwnerInterface&>(this, "UGameplayTasksComponent.EndAllResourceConsumingTasksOwnedBy(IGameplayTaskOwnerInterface&)", TaskOwner); }
	void OnGameplayTaskActivated(UGameplayTask& Task) { NativeCall<void, UGameplayTask&>(this, "UGameplayTasksComponent.OnGameplayTaskActivated(UGameplayTask&)", Task); }
	void ReadyForReplication() { NativeCall<void>(this, "UGameplayTasksComponent.ReadyForReplication()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayTasksComponent"); }
	void UpdateTaskActivations() { NativeCall<void>(this, "UGameplayTasksComponent.UpdateTaskActivations()"); }
	bool GetShouldTick() { return NativeCall<bool>(this, "UGameplayTasksComponent.GetShouldTick()"); }
	void UpdateShouldTick() { NativeCall<void>(this, "UGameplayTasksComponent.UpdateShouldTick()"); }
	AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "UGameplayTasksComponent.GetGameplayTaskAvatar(UGameplayTask*)", Task); }
};
