#pragma once
#include "BulkForward.h"
#include "USubsystem.h"

struct UWorldSubsystem : public USubsystem
{
public:
	UWorldSubsystem() = delete;
	~UWorldSubsystem() = delete;
	UWorldSubsystem(const UWorldSubsystem&) = delete;
	UWorldSubsystem& operator=(const UWorldSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldSubsystem"); }

};
