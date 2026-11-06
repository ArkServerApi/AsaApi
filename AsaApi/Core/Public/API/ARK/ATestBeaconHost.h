#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconHostObject.h"

struct ATestBeaconHost : public AOnlineBeaconHostObject
{
public:
	ATestBeaconHost() = delete;
	~ATestBeaconHost() = delete;
	ATestBeaconHost(const ATestBeaconHost&) = delete;
	ATestBeaconHost& operator=(const ATestBeaconHost&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATestBeaconHost"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATestBeaconHost"); }

	AOnlineBeaconClient* SpawnBeaconActor(UNetConnection* ClientConnection) { return NativeCall<AOnlineBeaconClient*, UNetConnection*>(this, "ATestBeaconHost.SpawnBeaconActor(UNetConnection*)", ClientConnection); }
	bool Init() { return NativeCall<bool>(this, "ATestBeaconHost.Init()"); }
	void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) { NativeCall<void, AOnlineBeaconClient*, UNetConnection*>(this, "ATestBeaconHost.OnClientConnected(AOnlineBeaconClient*,UNetConnection*)", NewClientActor, ClientConnection); }
};
