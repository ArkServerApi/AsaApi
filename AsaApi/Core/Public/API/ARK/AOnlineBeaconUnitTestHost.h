#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconHost.h"

struct AOnlineBeaconUnitTestHost : public AOnlineBeaconHost
{
public:
	AOnlineBeaconUnitTestHost() = delete;
	~AOnlineBeaconUnitTestHost() = delete;
	AOnlineBeaconUnitTestHost(const AOnlineBeaconUnitTestHost&) = delete;
	AOnlineBeaconUnitTestHost& operator=(const AOnlineBeaconUnitTestHost&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsEditorOnly() { return NativeCall<bool>(this, "AOnlineBeaconUnitTestHost.IsEditorOnly()"); }
};
