#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UNetworkPhysicsComponent : public UActorComponent
{
public:
	UNetworkPhysicsComponent() = delete;
	~UNetworkPhysicsComponent() = delete;
	UNetworkPhysicsComponent(const UNetworkPhysicsComponent&) = delete;
	UNetworkPhysicsComponent& operator=(const UNetworkPhysicsComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNetworkPhysicsComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNetworkPhysicsComponent"); }

	FNetworkPhysicsRewindDataDeltaSourceInputProxy& ReplicatedDeltaSourceInputField() { return *GetNativePointerField<FNetworkPhysicsRewindDataDeltaSourceInputProxy*>(this, "UNetworkPhysicsComponent.ReplicatedDeltaSourceInput"); }
	FNetworkPhysicsRewindDataDeltaSourceStateProxy& ReplicatedDeltaSourceStateField() { return *GetNativePointerField<FNetworkPhysicsRewindDataDeltaSourceStateProxy*>(this, "UNetworkPhysicsComponent.ReplicatedDeltaSourceState"); }
	FNetworkPhysicsRewindDataInputProxy& ReplicateClientInputsField() { return *GetNativePointerField<FNetworkPhysicsRewindDataInputProxy*>(this, "UNetworkPhysicsComponent.ReplicateClientInputs"); }
	FNetworkPhysicsRewindDataImportantInputProxy& ReplicatedImportantInputField() { return *GetNativePointerField<FNetworkPhysicsRewindDataImportantInputProxy*>(this, "UNetworkPhysicsComponent.ReplicatedImportantInput"); }
	FNetworkPhysicsRewindDataImportantStateProxy& ReplicatedImportantStateField() { return *GetNativePointerField<FNetworkPhysicsRewindDataImportantStateProxy*>(this, "UNetworkPhysicsComponent.ReplicatedImportantState"); }
	FNetworkPhysicsRewindDataOwnerInputProxy& ReplicatedOwnerInputsField() { return *GetNativePointerField<FNetworkPhysicsRewindDataOwnerInputProxy*>(this, "UNetworkPhysicsComponent.ReplicatedOwnerInputs"); }
	FNetworkPhysicsRewindDataRemoteInputProxy& ReplicatedRemoteInputsField() { return *GetNativePointerField<FNetworkPhysicsRewindDataRemoteInputProxy*>(this, "UNetworkPhysicsComponent.ReplicatedRemoteInputs"); }
	FNetworkPhysicsRewindDataStateProxy& ReplicatedStatesField() { return *GetNativePointerField<FNetworkPhysicsRewindDataStateProxy*>(this, "UNetworkPhysicsComponent.ReplicatedStates"); }
	FNetworkPhysicsDataCollection& ReplicatedInputCollectionField() { return *GetNativePointerField<FNetworkPhysicsDataCollection*>(this, "UNetworkPhysicsComponent.ReplicatedInputCollection"); }
	FNetworkPhysicsDataCollection& ReplicatedRemoteInputCollectionField() { return *GetNativePointerField<FNetworkPhysicsDataCollection*>(this, "UNetworkPhysicsComponent.ReplicatedRemoteInputCollection"); }
	FNetworkPhysicsDataCollection& ReplicatedStateCollectionField() { return *GetNativePointerField<FNetworkPhysicsDataCollection*>(this, "UNetworkPhysicsComponent.ReplicatedStateCollection"); }
	FNetworkPhysicsActionCollection& ReplicatedActionsCollectionField() { return *GetNativePointerField<FNetworkPhysicsActionCollection*>(this, "UNetworkPhysicsComponent.ReplicatedActionsCollection"); }
	INetworkPhysicsInputState_Internal*& ImplementationInterface_InternalField() { return *GetNativePointerField<INetworkPhysicsInputState_Internal**>(this, "UNetworkPhysicsComponent.ImplementationInterface_Internal"); }
	INetworkPhysicsInputState_External*& ImplementationInterface_ExternalField() { return *GetNativePointerField<INetworkPhysicsInputState_External**>(this, "UNetworkPhysicsComponent.ImplementationInterface_External"); }
	INetworkPhysicsActionHandler_Internal*& ActionImplementationInterface_InternalField() { return *GetNativePointerField<INetworkPhysicsActionHandler_Internal**>(this, "UNetworkPhysicsComponent.ActionImplementationInterface_Internal"); }
	bool& bIsUsingLegacyDataField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bIsUsingLegacyData"); }
	bool& bHasRegisteredInputStateField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bHasRegisteredInputState"); }
	bool& bHasPendingActionsToReplicateField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bHasPendingActionsToReplicate"); }
	FAsyncNetworkPhysicsComponent*& NetworkPhysicsComponent_InternalField() { return *GetNativePointerField<FAsyncNetworkPhysicsComponent**>(this, "UNetworkPhysicsComponent.NetworkPhysicsComponent_Internal"); }
	unsigned short& InputsToNetwork_OwnerField() { return *GetNativePointerField<unsigned short*>(this, "UNetworkPhysicsComponent.InputsToNetwork_Owner"); }
	unsigned short& InputsToNetwork_OwnerDefaultField() { return *GetNativePointerField<unsigned short*>(this, "UNetworkPhysicsComponent.InputsToNetwork_OwnerDefault"); }
	unsigned short& InputsToNetwork_SimulatedField() { return *GetNativePointerField<unsigned short*>(this, "UNetworkPhysicsComponent.InputsToNetwork_Simulated"); }
	unsigned short& StatesToNetworkField() { return *GetNativePointerField<unsigned short*>(this, "UNetworkPhysicsComponent.StatesToNetwork"); }
	bool& bNeedsFullAsyncComponentUpdateField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bNeedsFullAsyncComponentUpdate"); }
	int& LatestAcknowledgedDeltaSourceInputIndexField() { return *GetNativePointerField<int*>(this, "UNetworkPhysicsComponent.LatestAcknowledgedDeltaSourceInputIndex"); }
	int& LatestCachedDeltaSourceInputIndexField() { return *GetNativePointerField<int*>(this, "UNetworkPhysicsComponent.LatestCachedDeltaSourceInputIndex"); }
	double& TimeToSyncDeltaSourceInputField() { return *GetNativePointerField<double*>(this, "UNetworkPhysicsComponent.TimeToSyncDeltaSourceInput"); }
	int& LatestAcknowledgedDeltaSourceStateIndexField() { return *GetNativePointerField<int*>(this, "UNetworkPhysicsComponent.LatestAcknowledgedDeltaSourceStateIndex"); }
	int& LatestCachedDeltaSourceStateIndexField() { return *GetNativePointerField<int*>(this, "UNetworkPhysicsComponent.LatestCachedDeltaSourceStateIndex"); }
	double& TimeToSyncDeltaSourceStateField() { return *GetNativePointerField<double*>(this, "UNetworkPhysicsComponent.TimeToSyncDeltaSourceState"); }
	TWeakObjectPtr<UActorComponent, FWeakObjectPtr>& ActorComponentField() { return *GetNativePointerField<TWeakObjectPtr<UActorComponent, FWeakObjectPtr>*>(this, "UNetworkPhysicsComponent.ActorComponent"); }
	bool& bIsRelayingLocalInputsField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bIsRelayingLocalInputs"); }
	bool& bStopRelayingLocalInputsDeferredField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bStopRelayingLocalInputsDeferred"); }
	bool& bCompareStateToTriggerRewindField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bCompareStateToTriggerRewind"); }
	bool& bCompareStateToTriggerRewindIncludeSimProxiesField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bCompareStateToTriggerRewindIncludeSimProxies"); }
	bool& bCompareInputToTriggerRewindField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bCompareInputToTriggerRewind"); }
	bool& bEnableUnreliableFlowField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bEnableUnreliableFlow"); }
	bool& bEnableReliableFlowField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bEnableReliableFlow"); }
	bool& bValidateDataOnGameThreadField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsComponent.bValidateDataOnGameThread"); }
	void InitPhysics() { NativeCall<void>(this, "UNetworkPhysicsComponent.InitPhysics()"); }
	void ServerReceiveDeltaSourceInputFrame_Implementation(unsigned int Index, int Frame) { NativeCall<void, unsigned int, int>(this, "UNetworkPhysicsComponent.ServerReceiveDeltaSourceInputFrame_Implementation(unsignedint,int)", Index, Frame); }
	void InitializePhysicsReplication() { NativeCall<void>(this, "UNetworkPhysicsComponent.InitializePhysicsReplication()"); }
	AController* GetController() { return NativeCall<AController*>(this, "UNetworkPhysicsComponent.GetController()"); }
	void ServerReceiveImportantInputData_Implementation(const FNetworkPhysicsRewindDataImportantInputProxy& ClientInputs) { NativeCall<void, const FNetworkPhysicsRewindDataImportantInputProxy&>(this, "UNetworkPhysicsComponent.ServerReceiveImportantInputData_Implementation(FNetworkPhysicsRewindDataImportantInputProxy&)", ClientInputs); }
	void MulticastReceiveImportantInputData_Implementation(const FNetworkPhysicsRewindDataImportantInputProxy& ServerInputs) { NativeCall<void, const FNetworkPhysicsRewindDataImportantInputProxy&>(this, "UNetworkPhysicsComponent.MulticastReceiveImportantInputData_Implementation(FNetworkPhysicsRewindDataImportantInputProxy&)", ServerInputs); }
	void NetworkMarshaledData() { NativeCall<void>(this, "UNetworkPhysicsComponent.NetworkMarshaledData()"); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "UNetworkPhysicsComponent.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void AddDeltaSourceState() { NativeCall<void>(this, "UNetworkPhysicsComponent.AddDeltaSourceState()"); }
	void BeginPlay() { NativeCall<void>(this, "UNetworkPhysicsComponent.BeginPlay()"); }
	void OnRegister() { NativeCall<void>(this, "UNetworkPhysicsComponent.OnRegister()"); }
	void RemoveDataHistory() { NativeCall<void>(this, "UNetworkPhysicsComponent.RemoveDataHistory()"); }
	void ServerReceiveReliableActionCollection_Implementation(const FNetworkPhysicsActionCollection& ClientActionCollection) { NativeCall<void, const FNetworkPhysicsActionCollection&>(this, "UNetworkPhysicsComponent.ServerReceiveReliableActionCollection_Implementation(FNetworkPhysicsActionCollection&)", ClientActionCollection); }
	APlayerController* GetPlayerController() { return NativeCall<APlayerController*>(this, "UNetworkPhysicsComponent.GetPlayerController()"); }
	void ServerReceiveUnreliableActionCollection_Implementation(const FNetworkPhysicsActionCollection& ClientActionCollection) { NativeCall<void, const FNetworkPhysicsActionCollection&>(this, "UNetworkPhysicsComponent.ServerReceiveUnreliableActionCollection_Implementation(FNetworkPhysicsActionCollection&)", ClientActionCollection); }
	void MulticastReceiveReliableActionCollection_Implementation(const FNetworkPhysicsActionCollection& ServerActionCollection) { NativeCall<void, const FNetworkPhysicsActionCollection&>(this, "UNetworkPhysicsComponent.MulticastReceiveReliableActionCollection_Implementation(FNetworkPhysicsActionCollection&)", ServerActionCollection); }
	void InitializeComponent() { NativeCall<void>(this, "UNetworkPhysicsComponent.InitializeComponent()"); }
	void CreateAsyncDataHistory() { NativeCall<void>(this, "UNetworkPhysicsComponent.CreateAsyncDataHistory()"); }
	void UpdateAsyncComponent(bool bFullUpdate) { NativeCall<void, bool>(this, "UNetworkPhysicsComponent.UpdateAsyncComponent(bool)", bFullUpdate); }
	void ServerReceiveInputCollection_Implementation(const FNetworkPhysicsDataCollection& ClientInputCollection) { NativeCall<void, const FNetworkPhysicsDataCollection&>(this, "UNetworkPhysicsComponent.ServerReceiveInputCollection_Implementation(FNetworkPhysicsDataCollection&)", ClientInputCollection); }
	void ServerReceiveDeltaSourceStateFrame_Implementation(unsigned int Index, int Frame) { NativeCall<void, unsigned int, int>(this, "UNetworkPhysicsComponent.ServerReceiveDeltaSourceStateFrame_Implementation(unsignedint,int)", Index, Frame); }
	void OnUnregister() { NativeCall<void>(this, "UNetworkPhysicsComponent.OnUnregister()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UNetworkPhysicsComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void ServerReceiveInputData_Implementation(const FNetworkPhysicsRewindDataInputProxy& ClientInputs) { NativeCall<void, const FNetworkPhysicsRewindDataInputProxy&>(this, "UNetworkPhysicsComponent.ServerReceiveInputData_Implementation(FNetworkPhysicsRewindDataInputProxy&)", ClientInputs); }
	void MulticastReceiveImportantStateData_Implementation(const FNetworkPhysicsRewindDataImportantStateProxy& ServerStates) { NativeCall<void, const FNetworkPhysicsRewindDataImportantStateProxy&>(this, "UNetworkPhysicsComponent.MulticastReceiveImportantStateData_Implementation(FNetworkPhysicsRewindDataImportantStateProxy&)", ServerStates); }
	void AddDeltaSourceInput() { NativeCall<void>(this, "UNetworkPhysicsComponent.AddDeltaSourceInput()"); }
	void ReceiveActionCollectionData(const FNetworkPhysicsActionCollection& ActionCollection) { NativeCall<void, const FNetworkPhysicsActionCollection&>(this, "UNetworkPhysicsComponent.ReceiveActionCollectionData(FNetworkPhysicsActionCollection&)", ActionCollection); }
};
