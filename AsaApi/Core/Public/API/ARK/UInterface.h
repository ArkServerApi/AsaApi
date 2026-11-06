#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UInterface : public UObject
{
public:
	UInterface() = delete;
	~UInterface() = delete;
	UInterface(const UInterface&) = delete;
	UInterface& operator=(const UInterface&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
