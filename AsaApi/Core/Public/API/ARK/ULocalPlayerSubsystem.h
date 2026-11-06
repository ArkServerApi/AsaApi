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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ULocalPlayerSubsystem.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
