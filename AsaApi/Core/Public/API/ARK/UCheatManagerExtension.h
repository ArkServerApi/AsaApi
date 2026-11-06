#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UCheatManagerExtension : public UObject
{
public:
	UCheatManagerExtension() = delete;
	~UCheatManagerExtension() = delete;
	UCheatManagerExtension(const UCheatManagerExtension&) = delete;
	UCheatManagerExtension& operator=(const UCheatManagerExtension&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UCheatManagerExtension.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
