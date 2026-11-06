#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPrimalCameraConfig_WeaponOverride : public UObject
{
public:
	UPrimalCameraConfig_WeaponOverride() = delete;
	~UPrimalCameraConfig_WeaponOverride() = delete;
	UPrimalCameraConfig_WeaponOverride(const UPrimalCameraConfig_WeaponOverride&) = delete;
	UPrimalCameraConfig_WeaponOverride& operator=(const UPrimalCameraConfig_WeaponOverride&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
