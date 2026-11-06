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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
