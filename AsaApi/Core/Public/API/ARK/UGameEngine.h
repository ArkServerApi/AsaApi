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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UGameEngine.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
