#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UShooterHaptics : public UDataAsset
{
public:
	UShooterHaptics() = delete;
	~UShooterHaptics() = delete;
	UShooterHaptics(const UShooterHaptics&) = delete;
	UShooterHaptics& operator=(const UShooterHaptics&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterHaptics"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterHaptics"); }

};
