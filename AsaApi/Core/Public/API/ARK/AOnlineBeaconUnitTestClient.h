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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsEditorOnly() { return NativeCall<bool>(this, "AOnlineBeaconUnitTestClient.IsEditorOnly()"); }
};
