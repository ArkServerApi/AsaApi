#pragma once
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalProgressionTreeFeature : UObject
{
public:
	UPrimalProgressionTreeFeature() = delete;
	~UPrimalProgressionTreeFeature() = delete;
	UPrimalProgressionTreeFeature(const UPrimalProgressionTreeFeature&) = delete;
	UPrimalProgressionTreeFeature& operator=(const UPrimalProgressionTreeFeature&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeFeature"); }



	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeFeature"); }
};
