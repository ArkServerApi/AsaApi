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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UActorChannel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UActorChannel"); }

};
