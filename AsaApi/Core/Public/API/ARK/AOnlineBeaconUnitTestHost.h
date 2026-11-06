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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOnlineBeaconUnitTestHost"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOnlineBeaconUnitTestHost"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "AOnlineBeaconUnitTestHost.IsEditorOnly()"); }
};
