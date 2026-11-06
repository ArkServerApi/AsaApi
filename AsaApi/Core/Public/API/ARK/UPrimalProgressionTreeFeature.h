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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }



	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalProgressionTreeFeature.StaticClass()"); }
};
