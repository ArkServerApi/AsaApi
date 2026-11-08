#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMaterialInstanceActor : public AActor
{
public:
	AMaterialInstanceActor() = delete;
	~AMaterialInstanceActor() = delete;
	AMaterialInstanceActor(const AMaterialInstanceActor&) = delete;
	AMaterialInstanceActor& operator=(const AMaterialInstanceActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMaterialInstanceActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMaterialInstanceActor"); }

	void PostLoad() { NativeCall<void>(this, "AMaterialInstanceActor.PostLoad()"); }
};
