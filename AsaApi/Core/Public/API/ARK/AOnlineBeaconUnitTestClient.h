#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconClient.h"

struct AOnlineBeaconUnitTestClient : public AOnlineBeaconClient
{
public:
	AOnlineBeaconUnitTestClient() = delete;
	~AOnlineBeaconUnitTestClient() = delete;
	AOnlineBeaconUnitTestClient(const AOnlineBeaconUnitTestClient&) = delete;
	AOnlineBeaconUnitTestClient& operator=(const AOnlineBeaconUnitTestClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOnlineBeaconUnitTestClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOnlineBeaconUnitTestClient"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "AOnlineBeaconUnitTestClient.IsEditorOnly()"); }
};
