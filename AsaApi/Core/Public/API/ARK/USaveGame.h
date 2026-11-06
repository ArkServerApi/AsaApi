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
	static UClass* StaticClass() { return AsaApi::ResolveClass("USaveGame"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USaveGame"); }

};
