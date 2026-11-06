#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconHostObject.h"

struct AOnlineBeaconUnitTestHostObject : public AOnlineBeaconHostObject
{
public:
	AOnlineBeaconUnitTestHostObject() = delete;
	~AOnlineBeaconUnitTestHostObject() = delete;
	AOnlineBeaconUnitTestHostObject(const AOnlineBeaconUnitTestHostObject&) = delete;
	AOnlineBeaconUnitTestHostObject& operator=(const AOnlineBeaconUnitTestHostObject&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOnlineBeaconUnitTestHostObject"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOnlineBeaconUnitTestHostObject"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "AOnlineBeaconUnitTestHostObject.IsEditorOnly()"); }
};
