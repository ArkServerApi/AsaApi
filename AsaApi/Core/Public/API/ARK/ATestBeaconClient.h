#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconClient.h"

struct ATestBeaconClient : public AOnlineBeaconClient
{
public:
	ATestBeaconClient() = delete;
	~ATestBeaconClient() = delete;
	ATestBeaconClient(const ATestBeaconClient&) = delete;
	ATestBeaconClient& operator=(const ATestBeaconClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATestBeaconClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATestBeaconClient"); }

	void OnFailure() { NativeCall<void>(this, "ATestBeaconClient.OnFailure()"); }
	void ClientPing_Implementation() { NativeCall<void>(this, "ATestBeaconClient.ClientPing_Implementation()"); }
	void ServerPong_Implementation() { NativeCall<void>(this, "ATestBeaconClient.ServerPong_Implementation()"); }
	void ClientPing() { NativeCall<void>(this, "ATestBeaconClient.ClientPing()"); }
	void ServerPong() { NativeCall<void>(this, "ATestBeaconClient.ServerPong()"); }
	bool ServerPong_Validate() { return NativeCall<bool>(this, "ATestBeaconClient.ServerPong_Validate()"); }
};
