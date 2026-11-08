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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameEngine"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameEngine"); }

};
