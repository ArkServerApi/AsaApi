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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDistribution"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDistribution"); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UDistribution.IsPostLoadThreadSafe()"); }
};
