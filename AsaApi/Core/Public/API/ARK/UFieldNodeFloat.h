#pragma once
#include "BulkForward.h"
#include "UFieldNodeBase.h"

struct UFieldNodeFloat : public UFieldNodeBase
{
public:
	UFieldNodeFloat() = delete;
	~UFieldNodeFloat() = delete;
	UFieldNodeFloat(const UFieldNodeFloat&) = delete;
	UFieldNodeFloat& operator=(const UFieldNodeFloat&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UFieldNodeFloat.StaticClass()"); }
};
