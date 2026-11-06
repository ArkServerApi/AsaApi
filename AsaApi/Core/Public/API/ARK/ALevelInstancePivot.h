#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelInstancePivot : public AActor
{
public:
	ALevelInstancePivot() = delete;
	~ALevelInstancePivot() = delete;
	ALevelInstancePivot(const ALevelInstancePivot&) = delete;
	ALevelInstancePivot& operator=(const ALevelInstancePivot&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALevelInstancePivot._getUObject()"); }
};
