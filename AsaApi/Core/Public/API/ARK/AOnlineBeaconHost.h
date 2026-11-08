#pragma once
#include "BulkForward.h"
#include "AOnlineBeacon.h"

struct AOnlineBeaconHost : public AOnlineBeacon
{
public:
	AOnlineBeaconHost() = delete;
	~AOnlineBeaconHost() = delete;
	AOnlineBeaconHost(const AOnlineBeaconHost&) = delete;
	AOnlineBeaconHost& operator=(const AOnlineBeaconHost&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOnlineBeaconHost"); }

	int& ListenPortField() { return *GetNativePointerField<int*>(this, "AOnlineBeaconHost.ListenPort"); }
	bool& bReuseAddressAndPortField() { return *GetNativePointerField<bool*>(this, "AOnlineBeaconHost.bReuseAddressAndPort"); }
	bool& bAuthRequiredField() { return *GetNativePointerField<bool*>(this, "AOnlineBeaconHost.bAuthRequired"); }
	unsigned int& MaxAuthTokenSizeField() { return *GetNativePointerField<unsigned int*>(this, "AOnlineBeaconHost.MaxAuthTokenSize"); }
	void OnConnectionClosed(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "AOnlineBeaconHost.OnConnectionClosed(UNetConnection*)", Connection); }
	void UnregisterHost(const FString& BeaconType) { NativeCall<void, const FString&>(this, "AOnlineBeaconHost.UnregisterHost(FString&)", BeaconType); }
	void OnEncryptionResponse(const FEncryptionKeyResponse& Response, TWeakObjectPtr<UNetConnection, FWeakObjectPtr> WeakConnection) { NativeCall<void, const FEncryptionKeyResponse&, TWeakObjectPtr<UNetConnection, FWeakObjectPtr>>(this, "AOnlineBeaconHost.OnEncryptionResponse(FEncryptionKeyResponse&,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>)", Response, WeakConnection); }
	AOnlineBeaconHostObject* GetHost(const FString& BeaconType) { return NativeCall<AOnlineBeaconHostObject*, const FString&>(this, "AOnlineBeaconHost.GetHost(FString&)", BeaconType); }
	bool InitHost() { return NativeCall<bool>(this, "AOnlineBeaconHost.InitHost()"); }
	int GetListenPort() { return NativeCall<int>(this, "AOnlineBeaconHost.GetListenPort()"); }
	void NotifyControlMessage(UNetConnection* Connection, unsigned char MessageType, FInBunch& Bunch) { NativeCall<void, UNetConnection*, unsigned char, FInBunch&>(this, "AOnlineBeaconHost.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", Connection, MessageType, Bunch); }
	void OnNetCleanup(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "AOnlineBeaconHost.OnNetCleanup(UNetConnection*)", Connection); }
	void OnHelloSequenceComplete(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "AOnlineBeaconHost.OnHelloSequenceComplete(UNetConnection*)", Connection); }
	void RegisterHost(AOnlineBeaconHostObject* NewHostObject) { NativeCall<void, AOnlineBeaconHostObject*>(this, "AOnlineBeaconHost.RegisterHost(AOnlineBeaconHostObject*)", NewHostObject); }
	bool HandleControlMessage(UNetConnection* Connection, unsigned char MessageType, FInBunch& Bunch) { return NativeCall<bool, UNetConnection*, unsigned char, FInBunch&>(this, "AOnlineBeaconHost.HandleControlMessage(UNetConnection*,unsignedchar,FInBunch&)", Connection, MessageType, Bunch); }
	bool VerifyJoinForBeaconType(const FUniqueNetId& PlayerId, const FString& BeaconType) { return NativeCall<bool, const FUniqueNetId&, const FString&>(this, "AOnlineBeaconHost.VerifyJoinForBeaconType(FUniqueNetId&,FString&)", PlayerId, BeaconType); }
	AOnlineBeaconClient* GetClientActor(UNetConnection* Connection) { return NativeCall<AOnlineBeaconClient*, UNetConnection*>(this, "AOnlineBeaconHost.GetClientActor(UNetConnection*)", Connection); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOnlineBeaconHost"); }
	void RemoveClientActor(AOnlineBeaconClient* ClientActor) { NativeCall<void, AOnlineBeaconClient*>(this, "AOnlineBeaconHost.RemoveClientActor(AOnlineBeaconClient*)", ClientActor); }
	void HandleNetworkFailure(UWorld* World, UNetDriver* InNetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString&>(this, "AOnlineBeaconHost.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, InNetDriver, FailureType, ErrorString); }
};
