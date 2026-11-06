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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
