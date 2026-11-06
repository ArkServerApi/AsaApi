#pragma once
#include "BulkForward.h"
#include "UFieldNodeBase.h"

struct UFieldNodeInt : public UFieldNodeBase
{
public:
	UFieldNodeInt() = delete;
	~UFieldNodeInt() = delete;
	UFieldNodeInt(const UFieldNodeInt&) = delete;
	UFieldNodeInt& operator=(const UFieldNodeInt&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UFieldNodeInt.StaticClass()"); }
};
