#pragma once
#include "BulkForward.h"
#include "UPrimalDamageType.h"

struct UFallDamageType : public UPrimalDamageType
{
public:
	UFallDamageType() = delete;
	~UFallDamageType() = delete;
	UFallDamageType(const UFallDamageType&) = delete;
	UFallDamageType& operator=(const UFallDamageType&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
