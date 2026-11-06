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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
