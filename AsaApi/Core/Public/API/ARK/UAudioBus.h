#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAudioBus : public UObject
{
public:
	UAudioBus() = delete;
	~UAudioBus() = delete;
	UAudioBus(const UAudioBus&) = delete;
	UAudioBus& operator=(const UAudioBus&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	void BeginDestroy() { NativeCall<void>(this, "UAudioBus.BeginDestroy()"); }
};
