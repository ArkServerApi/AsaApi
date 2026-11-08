#pragma once
#include "BulkForward.h"
#include "UFieldNodeBase.h"

struct UFieldNodeVector : public UFieldNodeBase
{
public:
	UFieldNodeVector() = delete;
	~UFieldNodeVector() = delete;
	UFieldNodeVector(const UFieldNodeVector&) = delete;
	UFieldNodeVector& operator=(const UFieldNodeVector&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldNodeVector"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldNodeVector"); }
};
