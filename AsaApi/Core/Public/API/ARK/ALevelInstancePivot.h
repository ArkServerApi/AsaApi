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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelInstancePivot"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelInstancePivot"); }

	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALevelInstancePivot._getUObject()"); }
};
