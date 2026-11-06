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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInterface"); }

};
