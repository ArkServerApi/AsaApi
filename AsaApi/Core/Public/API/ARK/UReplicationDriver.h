#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalReplicationDriver.h"

struct UReplicationDriver : UPrimalReplicationDriver
{
public:
	UReplicationDriver() = delete;
	~UReplicationDriver() = delete;
	UReplicationDriver(const UReplicationDriver&) = delete;
	UReplicationDriver& operator=(const UReplicationDriver&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReplicationDriver"); }



	void InitForNetDriver(UNetDriver* InNetDriver) { NativeCall<void, UNetDriver*>(this, "UReplicationDriver.InitForNetDriver(UNetDriver*)", InNetDriver); }
	void TearDown() { NativeCall<void>(this, "UReplicationDriver.TearDown()"); }
	void SetRepDriverWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UReplicationDriver.SetRepDriverWorld(UWorld*)", InWorld); }
	void NotifyActorFullyDormantForConnection(AActor* Actor, UNetConnection* Connection) { NativeCall<void, AActor*, UNetConnection*>(this, "UReplicationDriver.NotifyActorFullyDormantForConnection(AActor*,UNetConnection*)", Actor, Connection); }
	void AddClientConnection(UNetConnection* NetConnection) { NativeCall<void, UNetConnection*>(this, "UReplicationDriver.AddClientConnection(UNetConnection*)", NetConnection); }
	int ServerReplicateActors(float DeltaSeconds) { return NativeCall<int, float>(this, "UReplicationDriver.ServerReplicateActors(float)", DeltaSeconds); }
	void FlushNetDormancy(AActor* Actor, bool WasDormInitial) { NativeCall<void, AActor*, bool>(this, "UReplicationDriver.FlushNetDormancy(AActor*,bool)", Actor, WasDormInitial); }
	void SetRoleSwapOnReplicate(AActor* Actor, bool bSwapRoles) { NativeCall<void, AActor*, bool>(this, "UReplicationDriver.SetRoleSwapOnReplicate(AActor*,bool)", Actor, bSwapRoles); }
	void InitializeActorsInWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UReplicationDriver.InitializeActorsInWorld(UWorld*)", InWorld); }
	void PublicEnableNetworkActorPlatformCullDistanceScalar(AActor* ForActor, bool bEnablePlatformCullDistanceScalar) { NativeCall<void, AActor*, bool>(this, "UReplicationDriver.PublicEnableNetworkActorPlatformCullDistanceScalar(AActor*,bool)", ForActor, bEnablePlatformCullDistanceScalar); }
	void PublicReconcileDormantActorsForConnection(UNetConnection* ForConnection) { NativeCall<void, UNetConnection*>(this, "UReplicationDriver.PublicReconcileDormantActorsForConnection(UNetConnection*)", ForConnection); }
	void PublicUpdateNetworkActorCullDistance(AActor* ForActor) { NativeCall<void, AActor*>(this, "UReplicationDriver.PublicUpdateNetworkActorCullDistance(AActor*)", ForActor); }
	void RemoveClientConnection(UNetConnection* NetConnection) { NativeCall<void, UNetConnection*>(this, "UReplicationDriver.RemoveClientConnection(UNetConnection*)", NetConnection); }
	void PostTickDispatch() { NativeCall<void>(this, "UReplicationDriver.PostTickDispatch()"); }
	void AddNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationDriver.AddNetworkActor(AActor*)", Actor); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReplicationDriver"); }
	void NotifyActorTearOff(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationDriver.NotifyActorTearOff(AActor*)", Actor); }
	void ResetGameWorldState() { NativeCall<void>(this, "UReplicationDriver.ResetGameWorldState()"); }
	void PublicSetForceDormancyInsteadOfClosingDueToRelevancy(AActor* ForActor, bool bValue) { NativeCall<void, AActor*, bool>(this, "UReplicationDriver.PublicSetForceDormancyInsteadOfClosingDueToRelevancy(AActor*,bool)", ForActor, bValue); }
	void ForceNetUpdate(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationDriver.ForceNetUpdate(AActor*)", Actor); }
	void RemoveNetworkActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UReplicationDriver.RemoveNetworkActor(AActor*)", Actor); }

	bool ProcessRemoteFunction(AActor* Actor, UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack, UObject* SubObject) { return NativeCall<bool, AActor*, UFunction*, void*, FOutParmRec*, FFrame*, UObject*>(this, "UReplicationDriver.ProcessRemoteFunction(AActor*,UFunction*,void*,FOutParmRec*,FFrame*,UObject*)", Actor, Function, Parameters, OutParms, Stack, SubObject); }
	void NotifyActorRenamed(AActor* Actor, UObject* PreviousOuter, FName PreviousName) { NativeCall<void, AActor*, UObject*, FName>(this, "UReplicationDriver.NotifyActorRenamed(AActor*,UObject*,FName)", Actor, PreviousOuter, PreviousName); }
	void NotifyDestructionInfoCreated(AActor* Actor, FActorDestructionInfo& DestructionInfo) { NativeCall<void, AActor*, FActorDestructionInfo&>(this, "UReplicationDriver.NotifyDestructionInfoCreated(AActor*,FActorDestructionInfo&)", Actor, DestructionInfo); }
	void NotifyActorDormancyChange(AActor* Actor, ENetDormancy OldDormancyState) { NativeCall<void, AActor*, ENetDormancy>(this, "UReplicationDriver.NotifyActorDormancyChange(AActor*,ENetDormancy)", Actor, OldDormancyState); }
};
