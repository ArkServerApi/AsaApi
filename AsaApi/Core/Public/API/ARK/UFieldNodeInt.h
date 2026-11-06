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
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldNodeInt"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldNodeInt"); }
};
