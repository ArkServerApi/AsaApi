#pragma once
#include "BulkForward.h"
#include "UPlayer.h"

struct ULocalPlayer : public UPlayer
{
public:
	ULocalPlayer() = delete;
	~ULocalPlayer() = delete;
	ULocalPlayer(const ULocalPlayer&) = delete;
	ULocalPlayer& operator=(const ULocalPlayer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULocalPlayer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULocalPlayer"); }

};
