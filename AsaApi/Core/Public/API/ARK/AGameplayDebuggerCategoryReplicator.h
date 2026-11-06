#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayDebuggerCategoryReplicator : public AActor
{
public:
	AGameplayDebuggerCategoryReplicator() = delete;
	~AGameplayDebuggerCategoryReplicator() = delete;
	AGameplayDebuggerCategoryReplicator(const AGameplayDebuggerCategoryReplicator&) = delete;
	AGameplayDebuggerCategoryReplicator& operator=(const AGameplayDebuggerCategoryReplicator&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayDebuggerCategoryReplicator"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayDebuggerCategoryReplicator"); }

	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "AGameplayDebuggerCategoryReplicator.bIsEnabled"); }
	FGameplayDebuggerNetPack& ReplicatedDataField() { return *GetNativePointerField<FGameplayDebuggerNetPack*>(this, "AGameplayDebuggerCategoryReplicator.ReplicatedData"); }
	FGameplayDebuggerDebugActor& DebugActorField() { return *GetNativePointerField<FGameplayDebuggerDebugActor*>(this, "AGameplayDebuggerCategoryReplicator.DebugActor"); }
	FGameplayDebuggerVisLogSync& VisLogSyncField() { return *GetNativePointerField<FGameplayDebuggerVisLogSync*>(this, "AGameplayDebuggerCategoryReplicator.VisLogSync"); }
	BitFieldValue<bool, unsigned __int32> bIsEnabledLocal() { return { this, "AGameplayDebuggerCategoryReplicator.bIsEnabledLocal"}; }
	BitFieldValue<bool, unsigned __int32> bHasAuthority() { return { this, "AGameplayDebuggerCategoryReplicator.bHasAuthority"}; }
	BitFieldValue<bool, unsigned __int32> bIsLocal() { return { this, "AGameplayDebuggerCategoryReplicator.bIsLocal"}; }
	BitFieldValue<bool, unsigned __int32> bIsEditorWorldReplicator() { return { this, "AGameplayDebuggerCategoryReplicator.bIsEditorWorldReplicator"}; }
	BitFieldValue<bool, unsigned __int32> bSendDataPacksUsingRPC() { return { this, "AGameplayDebuggerCategoryReplicator.bSendDataPacksUsingRPC"}; }
	void BeginPlay() { NativeCall<void>(this, "AGameplayDebuggerCategoryReplicator.BeginPlay()"); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "AGameplayDebuggerCategoryReplicator.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void SetCategoryEnabled(int CategoryId, bool bEnable) { NativeCall<void, int, bool>(this, "AGameplayDebuggerCategoryReplicator.SetCategoryEnabled(int,bool)", CategoryId, bEnable); }
	bool ServerSendExtensionInputEvent_Validate(int ExtensionId, int HandlerId) { return NativeCall<bool, int, int>(this, "AGameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent_Validate(int,int)", ExtensionId, HandlerId); }
	void ServerSetEnabled_Implementation(bool bEnable) { NativeCall<void, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetEnabled_Implementation(bool)", bEnable); }
	void ServerResetViewPoint_Implementation() { NativeCall<void>(this, "AGameplayDebuggerCategoryReplicator.ServerResetViewPoint_Implementation()"); }
	UPlayer* GetNetOwningPlayerAnyRole() { return NativeCall<UPlayer*>(this, "AGameplayDebuggerCategoryReplicator.GetNetOwningPlayerAnyRole()"); }
	void ServerSendCategoryInputEvent_Implementation(int CategoryId, int HandlerId) { NativeCall<void, int, int>(this, "AGameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent_Implementation(int,int)", CategoryId, HandlerId); }
	void SetEnabled(bool bEnable) { NativeCall<void, bool>(this, "AGameplayDebuggerCategoryReplicator.SetEnabled(bool)", bEnable); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayDebuggerCategoryReplicator.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer*>(this, "AGameplayDebuggerCategoryReplicator.GetNetOwningPlayer()"); }
	const AActor* GetNetOwner() { return NativeCall<const AActor*>(this, "AGameplayDebuggerCategoryReplicator.GetNetOwner()"); }
	void ClientDataPackPacket_Implementation(const FGameplayDebuggerDataPackRPCParams& Params) { NativeCall<void, const FGameplayDebuggerDataPackRPCParams&>(this, "AGameplayDebuggerCategoryReplicator.ClientDataPackPacket_Implementation(FGameplayDebuggerDataPackRPCParams&)", Params); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "AGameplayDebuggerCategoryReplicator.GetNetConnection()"); }
	bool ServerSetViewPoint_Validate(const UE::Math::TVector<double>& InViewLocation, const UE::Math::TVector<double>& InViewDirection) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AGameplayDebuggerCategoryReplicator.ServerSetViewPoint_Validate(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", InViewLocation, InViewDirection); }
	void ServerSetCategoryNameEnabled_Implementation(FName CategoryName, bool bEnable) { NativeCall<void, FName, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetCategoryNameEnabled_Implementation(FName,bool)", CategoryName, bEnable); }
	bool ServerSendCategoryNameInputEvent_Validate(FName CategoryName, int HandlerId) { return NativeCall<bool, FName, int>(this, "AGameplayDebuggerCategoryReplicator.ServerSendCategoryNameInputEvent_Validate(FName,int)", CategoryName, HandlerId); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&>(this, "AGameplayDebuggerCategoryReplicator.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	void OnExtensionsChanged() { NativeCall<void>(this, "AGameplayDebuggerCategoryReplicator.OnExtensionsChanged()"); }
	bool ServerSetEnabled_Validate(bool bEnable) { return NativeCall<bool, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetEnabled_Validate(bool)", bEnable); }
	bool ServerSetCategoryEnabled_Validate(int CategoryId, bool bEnable) { return NativeCall<bool, int, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled_Validate(int,bool)", CategoryId, bEnable); }
	void Init() { NativeCall<void>(this, "AGameplayDebuggerCategoryReplicator.Init()"); }
	bool ServerSendCategoryInputEvent_Validate(int CategoryId, int HandlerId) { return NativeCall<bool, int, int>(this, "AGameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent_Validate(int,int)", CategoryId, HandlerId); }
	bool ServerResetViewPoint_Validate() { return NativeCall<bool>(this, "AGameplayDebuggerCategoryReplicator.ServerResetViewPoint_Validate()"); }
	bool ServerSetCategoryNameEnabled_Validate(FName CategoryName, bool bEnable) { return NativeCall<bool, FName, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetCategoryNameEnabled_Validate(FName,bool)", CategoryName, bEnable); }
	bool ServerSetDebugActor_Validate(AActor* Actor, bool bSelectInEditor) { return NativeCall<bool, AActor*, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetDebugActor_Validate(AActor*,bool)", Actor, bSelectInEditor); }
	bool IsCategoryEnabled(int CategoryId) { return NativeCall<bool, int>(this, "AGameplayDebuggerCategoryReplicator.IsCategoryEnabled(int)", CategoryId); }
	void OnReceivedDataPackPacket(int CategoryId, int DataPackId, const FGameplayDebuggerDataPack& DataPacket) { NativeCall<void, int, int, const FGameplayDebuggerDataPack&>(this, "AGameplayDebuggerCategoryReplicator.OnReceivedDataPackPacket(int,int,FGameplayDebuggerDataPack&)", CategoryId, DataPackId, DataPacket); }
	void PostNetReceive() { NativeCall<void>(this, "AGameplayDebuggerCategoryReplicator.PostNetReceive()"); }
	void CollectCategoryData(bool bForce) { NativeCall<void, bool>(this, "AGameplayDebuggerCategoryReplicator.CollectCategoryData(bool)", bForce); }
	void ServerSetViewPoint_Implementation(const UE::Math::TVector<double>& InViewLocation, const UE::Math::TVector<double>& InViewDirection) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "AGameplayDebuggerCategoryReplicator.ServerSetViewPoint_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", InViewLocation, InViewDirection); }
	void ServerSendCategoryNameInputEvent_Implementation(FName CategoryName, int HandlerId) { NativeCall<void, FName, int>(this, "AGameplayDebuggerCategoryReplicator.ServerSendCategoryNameInputEvent_Implementation(FName,int)", CategoryName, HandlerId); }
	void OnCategoriesChanged() { NativeCall<void>(this, "AGameplayDebuggerCategoryReplicator.OnCategoriesChanged()"); }
	void ServerSetDebugActor_Implementation(AActor* Actor, bool bSelectInEditor) { NativeCall<void, AActor*, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetDebugActor_Implementation(AActor*,bool)", Actor, bSelectInEditor); }
	void ServerSendExtensionInputEvent_Implementation(int ExtensionId, int HandlerId) { NativeCall<void, int, int>(this, "AGameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent_Implementation(int,int)", ExtensionId, HandlerId); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction&>(this, "AGameplayDebuggerCategoryReplicator.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	void ServerSetCategoryEnabled_Implementation(int CategoryId, bool bEnable) { NativeCall<void, int, bool>(this, "AGameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled_Implementation(int,bool)", CategoryId, bEnable); }
	void SendCategoryInputEvent(int CategoryId, int HandlerId) { NativeCall<void, int, int>(this, "AGameplayDebuggerCategoryReplicator.SendCategoryInputEvent(int,int)", CategoryId, HandlerId); }
};
