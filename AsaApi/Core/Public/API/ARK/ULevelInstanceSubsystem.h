#pragma once
#include "BulkForward.h"
#include "UWorldSubsystem.h"

struct ULevelInstanceSubsystem : public UWorldSubsystem
{
public:
	ULevelInstanceSubsystem() = delete;
	~ULevelInstanceSubsystem() = delete;
	ULevelInstanceSubsystem(const ULevelInstanceSubsystem&) = delete;
	ULevelInstanceSubsystem& operator=(const ULevelInstanceSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULevelInstanceSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULevelInstanceSubsystem"); }

};
