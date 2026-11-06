#pragma once
#include "BulkForward.h"
#include "UEngine.h"

struct UGameEngine : public UEngine
{
public:
	UGameEngine() = delete;
	~UGameEngine() = delete;
	UGameEngine(const UGameEngine&) = delete;
	UGameEngine& operator=(const UGameEngine&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
