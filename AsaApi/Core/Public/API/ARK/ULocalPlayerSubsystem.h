#pragma once
#include "BulkForward.h"
#include "USubsystem.h"

struct ULocalPlayerSubsystem : public USubsystem
{
public:
	ULocalPlayerSubsystem() = delete;
	~ULocalPlayerSubsystem() = delete;
	ULocalPlayerSubsystem(const ULocalPlayerSubsystem&) = delete;
	ULocalPlayerSubsystem& operator=(const ULocalPlayerSubsystem&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
