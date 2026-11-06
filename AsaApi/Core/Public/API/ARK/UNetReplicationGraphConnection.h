#pragma once
#include "BulkForward.h"
#include "UReplicationConnectionDriver.h"

struct UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	UNetReplicationGraphConnection() = delete;
	~UNetReplicationGraphConnection() = delete;
	UNetReplicationGraphConnection(const UNetReplicationGraphConnection&) = delete;
	UNetReplicationGraphConnection& operator=(const UNetReplicationGraphConnection&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
