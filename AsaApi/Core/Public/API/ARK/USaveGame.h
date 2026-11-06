#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct USaveGame : public UObject
{
public:
	USaveGame() = delete;
	~USaveGame() = delete;
	USaveGame(const USaveGame&) = delete;
	USaveGame& operator=(const USaveGame&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "USaveGame.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
