#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UOnlineSession : public UObject
{
public:
	UOnlineSession() = delete;
	~UOnlineSession() = delete;
	UOnlineSession(const UOnlineSession&) = delete;
	UOnlineSession& operator=(const UOnlineSession&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UOnlineSession.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
