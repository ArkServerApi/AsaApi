#pragma once
#include "BulkForward.h"
#include "UDynamicSubsystem.h"

struct UEngineSubsystem : public UDynamicSubsystem
{
public:
	UEngineSubsystem() = delete;
	~UEngineSubsystem() = delete;
	UEngineSubsystem(const UEngineSubsystem&) = delete;
	UEngineSubsystem& operator=(const UEngineSubsystem&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
