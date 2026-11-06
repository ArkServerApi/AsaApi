#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPendingNetGame : public UObject
{
public:
	UPendingNetGame() = delete;
	~UPendingNetGame() = delete;
	UPendingNetGame(const UPendingNetGame&) = delete;
	UPendingNetGame& operator=(const UPendingNetGame&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPendingNetGame.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
