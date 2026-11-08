#pragma once
#include "BulkForward.h"
#include "UPrimalDamageType.h"

struct UShooterDamageType_Passive : public UPrimalDamageType
{
public:
	UShooterDamageType_Passive() = delete;
	~UShooterDamageType_Passive() = delete;
	UShooterDamageType_Passive(const UShooterDamageType_Passive&) = delete;
	UShooterDamageType_Passive& operator=(const UShooterDamageType_Passive&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterDamageType_Passive"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterDamageType_Passive"); }

};
