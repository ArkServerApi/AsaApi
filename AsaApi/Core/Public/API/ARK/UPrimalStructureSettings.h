#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalStructureSettings : UObject
{
public:
	UPrimalStructureSettings() = delete;
	~UPrimalStructureSettings() = delete;
	UPrimalStructureSettings(const UPrimalStructureSettings&) = delete;
	UPrimalStructureSettings& operator=(const UPrimalStructureSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalStructureSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalStructureSettings"); }

	float& DecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalStructureSettings.DecayDestructionPeriodMultiplier"); }



	FName& TierTagField() { return *GetNativePointerField<FName*>(this, "UPrimalStructureSettings.TierTag"); }
};
