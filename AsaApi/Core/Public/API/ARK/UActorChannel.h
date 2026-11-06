#pragma once
#include "BulkForward.h"
#include "../Types/UChannel.h"

struct UActorChannel : public UChannel
{
public:
	UActorChannel() = delete;
	~UActorChannel() = delete;
	UActorChannel(const UActorChannel&) = delete;
	UActorChannel& operator=(const UActorChannel&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
