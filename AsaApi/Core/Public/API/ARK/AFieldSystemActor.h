#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AFieldSystemActor : public AActor
{
public:
	AFieldSystemActor() = delete;
	~AFieldSystemActor() = delete;
	AFieldSystemActor(const AFieldSystemActor&) = delete;
	AFieldSystemActor& operator=(const AFieldSystemActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AFieldSystemActor.StaticClass()"); }
};
