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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNetReplicationGraphConnection.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
