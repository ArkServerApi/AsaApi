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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
