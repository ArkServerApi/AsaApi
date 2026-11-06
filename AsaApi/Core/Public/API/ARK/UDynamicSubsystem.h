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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
