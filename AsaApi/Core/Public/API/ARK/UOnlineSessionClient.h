#pragma once
#include "BulkForward.h"
#include "UOnlineSession.h"

struct UOnlineSessionClient : public UOnlineSession
{
public:
	UOnlineSessionClient() = delete;
	~UOnlineSessionClient() = delete;
	UOnlineSessionClient(const UOnlineSessionClient&) = delete;
	UOnlineSessionClient& operator=(const UOnlineSessionClient&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UOnlineSessionClient.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
