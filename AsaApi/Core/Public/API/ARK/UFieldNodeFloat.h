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
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldNodeFloat"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldNodeFloat"); }
};
