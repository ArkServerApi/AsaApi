#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AOnlineBeacon : public AActor
{
public:
	AOnlineBeacon() = delete;
	~AOnlineBeacon() = delete;
	AOnlineBeacon(const AOnlineBeacon&) = delete;
	AOnlineBeacon& operator=(const AOnlineBeacon&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOnlineBeacon"); }

	float& BeaconConnectionInitialTimeoutField() { return *GetNativePointerField<float*>(this, "AOnlineBeacon.BeaconConnectionInitialTimeout"); }
	float& BeaconConnectionTimeoutField() { return *GetNativePointerField<float*>(this, "AOnlineBeacon.BeaconConnectionTimeout"); }
	EBeaconState::Type& BeaconStateField() { return *GetNativePointerField<EBeaconState::Type*>(this, "AOnlineBeacon.BeaconState"); }
	FDelegateHandle& HandleNetworkFailureDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AOnlineBeacon.HandleNetworkFailureDelegateHandle"); }
	FName& NetDriverDefinitionNameField() { return *GetNativePointerField<FName*>(this, "AOnlineBeacon.NetDriverDefinitionName"); }
	void HandleNetworkFailure(UWorld* World, UNetDriver* InNetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString&>(this, "AOnlineBeacon.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, InNetDriver, FailureType, ErrorString); }
	EAcceptConnection::Type NotifyAcceptingConnection() { return NativeCall<EAcceptConnection::Type>(this, "AOnlineBeacon.NotifyAcceptingConnection()"); }
	const AActor* GetNetOwner() { return NativeCall<const AActor*>(this, "AOnlineBeacon.GetNetOwner()"); }
	bool IsRelevancyOwnerFor(const AActor* ReplicatedActor, const AActor* ActorOwner, const AActor* ConnectionActor) { return NativeCall<bool, const AActor*, const AActor*, const AActor*>(this, "AOnlineBeacon.IsRelevancyOwnerFor(AActor*,AActor*,AActor*)", ReplicatedActor, ActorOwner, ConnectionActor); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&>(this, "AOnlineBeacon.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	void NotifyAcceptedConnection(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "AOnlineBeacon.NotifyAcceptedConnection(UNetConnection*)", Connection); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AOnlineBeacon.IsLevelBoundsRelevant()"); }
	void OnFailure() { NativeCall<void>(this, "AOnlineBeacon.OnFailure()"); }
	void OnActorChannelOpen(FInBunch& Bunch, UNetConnection* Connection) { NativeCall<void, FInBunch&, UNetConnection*>(this, "AOnlineBeacon.OnActorChannelOpen(FInBunch&,UNetConnection*)", Bunch, Connection); }
	void NotifyControlMessage(UNetConnection* Connection, unsigned char MessageType, FInBunch& Bunch) { NativeCall<void, UNetConnection*, unsigned char, FInBunch&>(this, "AOnlineBeacon.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", Connection, MessageType, Bunch); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "AOnlineBeacon.GetNetConnection()"); }
	bool HasNetOwner() { return NativeCall<bool>(this, "AOnlineBeacon.HasNetOwner()"); }
	void DestroyBeacon() { NativeCall<void>(this, "AOnlineBeacon.DestroyBeacon()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AOnlineBeacon.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void CleanupNetDriver() { NativeCall<void>(this, "AOnlineBeacon.CleanupNetDriver()"); }
	bool NotifyAcceptingChannel(UChannel* Channel) { return NativeCall<bool, UChannel*>(this, "AOnlineBeacon.NotifyAcceptingChannel(UChannel*)", Channel); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOnlineBeacon"); }
	bool InitBase() { return NativeCall<bool>(this, "AOnlineBeacon.InitBase()"); }
};
