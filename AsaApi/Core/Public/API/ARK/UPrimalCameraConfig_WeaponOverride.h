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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCameraConfig_WeaponOverride"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCameraConfig_WeaponOverride"); }

};
