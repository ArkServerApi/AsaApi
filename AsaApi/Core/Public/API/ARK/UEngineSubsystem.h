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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UEngineSubsystem.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
