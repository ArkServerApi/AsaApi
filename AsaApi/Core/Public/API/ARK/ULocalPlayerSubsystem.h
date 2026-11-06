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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULocalPlayerSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULocalPlayerSubsystem"); }

};
