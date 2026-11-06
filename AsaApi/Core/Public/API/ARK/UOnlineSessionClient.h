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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
