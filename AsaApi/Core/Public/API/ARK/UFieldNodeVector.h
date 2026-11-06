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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UFieldNodeVector.StaticClass()"); }
};
