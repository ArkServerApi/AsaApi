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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
