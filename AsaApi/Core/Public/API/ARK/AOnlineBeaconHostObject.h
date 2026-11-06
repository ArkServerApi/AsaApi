#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AOnlineBeaconHostObject : public AActor
{
public:
	AOnlineBeaconHostObject() = delete;
	~AOnlineBeaconHostObject() = delete;
	AOnlineBeaconHostObject(const AOnlineBeaconHostObject&) = delete;
	AOnlineBeaconHostObject& operator=(const AOnlineBeaconHostObject&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	FString& BeaconTypeNameField() { return *GetNativePointerField<FString*>(this, "AOnlineBeaconHostObject.BeaconTypeName"); }
	EBeaconState::Type GetBeaconState() { return NativeCall<EBeaconState::Type>(this, "AOnlineBeaconHostObject.GetBeaconState()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AOnlineBeaconHostObject.StaticClass()"); }
	void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) { NativeCall<void, AOnlineBeaconClient*, UNetConnection*>(this, "AOnlineBeaconHostObject.OnClientConnected(AOnlineBeaconClient*,UNetConnection*)", NewClientActor, ClientConnection); }
	void DisconnectClient(AOnlineBeaconClient* ClientActor) { NativeCall<void, AOnlineBeaconClient*>(this, "AOnlineBeaconHostObject.DisconnectClient(AOnlineBeaconClient*)", ClientActor); }
	void Unregister() { NativeCall<void>(this, "AOnlineBeaconHostObject.Unregister()"); }
	void NotifyClientDisconnected(AOnlineBeaconClient* LeavingClientActor) { NativeCall<void, AOnlineBeaconClient*>(this, "AOnlineBeaconHostObject.NotifyClientDisconnected(AOnlineBeaconClient*)", LeavingClientActor); }
	AOnlineBeaconClient* SpawnBeaconActor(UNetConnection* ClientConnection) { return NativeCall<AOnlineBeaconClient*, UNetConnection*>(this, "AOnlineBeaconHostObject.SpawnBeaconActor(UNetConnection*)", ClientConnection); }
};
