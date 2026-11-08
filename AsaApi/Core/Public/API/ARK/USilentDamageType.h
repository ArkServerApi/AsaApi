#pragma once
#include "BulkForward.h"
#include "UPrimalDamageType.h"

struct USilentDamageType : public UPrimalDamageType
{
public:
	USilentDamageType() = delete;
	~USilentDamageType() = delete;
	USilentDamageType(const USilentDamageType&) = delete;
	USilentDamageType& operator=(const USilentDamageType&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USilentDamageType"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USilentDamageType"); }

};
