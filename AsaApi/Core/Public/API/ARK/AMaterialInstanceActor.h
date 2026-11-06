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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "AMaterialInstanceActor.PostLoad()"); }
};
