#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UReplicationConnectionDriver : public UObject
{
public:
	UReplicationConnectionDriver() = delete;
	~UReplicationConnectionDriver() = delete;
	UReplicationConnectionDriver(const UReplicationConnectionDriver&) = delete;
	UReplicationConnectionDriver& operator=(const UReplicationConnectionDriver&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReplicationConnectionDriver"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReplicationConnectionDriver"); }

};
