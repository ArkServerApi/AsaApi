#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct USubsystem : public UObject
{
public:
	USubsystem() = delete;
	~USubsystem() = delete;
	USubsystem(const USubsystem&) = delete;
	USubsystem& operator=(const USubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USubsystem"); }

};
