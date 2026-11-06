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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
