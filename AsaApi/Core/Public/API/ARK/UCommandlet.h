#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UCommandlet : public UObject
{
public:
	UCommandlet() = delete;
	~UCommandlet() = delete;
	UCommandlet(const UCommandlet&) = delete;
	UCommandlet& operator=(const UCommandlet&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCommandlet"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCommandlet"); }

};
