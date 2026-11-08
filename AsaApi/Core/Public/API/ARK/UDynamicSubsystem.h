#pragma once
#include "BulkForward.h"
#include "USubsystem.h"

struct UDynamicSubsystem : public USubsystem
{
public:
	UDynamicSubsystem() = delete;
	~UDynamicSubsystem() = delete;
	UDynamicSubsystem(const UDynamicSubsystem&) = delete;
	UDynamicSubsystem& operator=(const UDynamicSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDynamicSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDynamicSubsystem"); }

};
