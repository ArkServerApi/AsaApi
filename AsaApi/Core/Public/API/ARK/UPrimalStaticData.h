#pragma once
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalStaticData : UObject
{
public:
	UPrimalStaticData() = delete;
	~UPrimalStaticData() = delete;
	UPrimalStaticData(const UPrimalStaticData&) = delete;
	UPrimalStaticData& operator=(const UPrimalStaticData&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }



	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalStaticData.StaticClass()"); }
};
