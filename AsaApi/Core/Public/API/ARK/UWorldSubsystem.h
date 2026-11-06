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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UWorldSubsystem.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
