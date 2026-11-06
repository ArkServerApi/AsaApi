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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UInterface.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
