#pragma once
#include "BulkForward.h"
#include "AOnlineBeacon.h"

struct AOnlineBeaconClient : public AOnlineBeacon
{
public:
	AOnlineBeaconClient() = delete;
	~AOnlineBeaconClient() = delete;
	AOnlineBeaconClient(const AOnlineBeaconClient&) = delete;
	AOnlineBeaconClient& operator=(const AOnlineBeaconClient&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOnlineBeaconClient"); }

	EBeaconConnectionState& ConnectionStateField() { return *GetNativePointerField<EBeaconConnectionState*>(this, "AOnlineBeaconClient.ConnectionState"); }
	FTimerHandle& TimerHandle_OnFailureField() { return *GetNativePointerField<FTimerHandle*>(this, "AOnlineBeaconClient.TimerHandle_OnFailure"); }
	FEncryptionData& EncryptionDataField() { return *GetNativePointerField<FEncryptionData*>(this, "AOnlineBeaconClient.EncryptionData"); }
	bool InitClient(const FOnlineBeaconClientInitParams& Params) { return NativeCall<bool, const FOnlineBeaconClientInitParams&>(this, "AOnlineBeaconClient.InitClient(FOnlineBeaconClientInitParams&)", Params); }
	FString* GetLoginOptions(FString* result, const FUniqueNetIdRepl& PlayerId) { return NativeCall<FString*, FString*, const FUniqueNetIdRepl&>(this, "AOnlineBeaconClient.GetLoginOptions(FUniqueNetIdRepl&)", result, PlayerId); }
	AOnlineBeaconHostObject* GetBeaconOwner() { return NativeCall<AOnlineBeaconHostObject*>(this, "AOnlineBeaconClient.GetBeaconOwner()"); }
	void OnFailure() { NativeCall<void>(this, "AOnlineBeaconClient.OnFailure()"); }
	void SetNetConnection(UNetConnection* NetConnection) { NativeCall<void, UNetConnection*>(this, "AOnlineBeaconClient.SetNetConnection(UNetConnection*)", NetConnection); }
	void OnNetCleanup(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "AOnlineBeaconClient.OnNetCleanup(UNetConnection*)", Connection); }
	void ClientOnConnected_Implementation() { NativeCall<void>(this, "AOnlineBeaconClient.ClientOnConnected_Implementation()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOnlineBeaconClient"); }
	void DestroyBeacon() { NativeCall<void>(this, "AOnlineBeaconClient.DestroyBeacon()"); }
	const FUniqueNetIdRepl& GetUniqueId() { return NativeCall<const FUniqueNetIdRepl&>(this, "AOnlineBeaconClient.GetUniqueId()"); }
	bool InitClient(FURL& URL) { return NativeCall<bool, FURL&>(this, "AOnlineBeaconClient.InitClient(FURL&)", URL); }
	bool UseShortConnectTimeout() { return NativeCall<bool>(this, "AOnlineBeaconClient.UseShortConnectTimeout()"); }
	EBeaconConnectionState GetConnectionState() { return NativeCall<EBeaconConnectionState>(this, "AOnlineBeaconClient.GetConnectionState()"); }
	void NotifyControlMessage(UNetConnection* Connection, unsigned char MessageType, FInBunch& Bunch) { NativeCall<void, UNetConnection*, unsigned char, FInBunch&>(this, "AOnlineBeaconClient.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", Connection, MessageType, Bunch); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "AOnlineBeaconClient.GetNetConnection()"); }
	void SendInitialJoin() { NativeCall<void>(this, "AOnlineBeaconClient.SendInitialJoin()"); }
	bool DestroyNetworkActorHandled() { return NativeCall<bool>(this, "AOnlineBeaconClient.DestroyNetworkActorHandled()"); }
	const AActor* GetNetOwner() { return NativeCall<const AActor*>(this, "AOnlineBeaconClient.GetNetOwner()"); }
	void OnConnected() { NativeCall<void>(this, "AOnlineBeaconClient.OnConnected()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AOnlineBeaconClient.Tick(float)", DeltaTime); }
	void FinalizeEncryptedConnection(const FEncryptionKeyResponse& Response, TWeakObjectPtr<UNetConnection, FWeakObjectPtr> WeakConnection) { NativeCall<void, const FEncryptionKeyResponse&, TWeakObjectPtr<UNetConnection, FWeakObjectPtr>>(this, "AOnlineBeaconClient.FinalizeEncryptedConnection(FEncryptionKeyResponse&,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>)", Response, WeakConnection); }
};
