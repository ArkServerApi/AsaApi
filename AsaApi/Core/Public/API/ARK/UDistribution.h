#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UDistribution : public UObject
{
public:
	UDistribution() = delete;
	~UDistribution() = delete;
	UDistribution(const UDistribution&) = delete;
	UDistribution& operator=(const UDistribution&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UDistribution.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UDistribution.IsPostLoadThreadSafe()"); }
};
