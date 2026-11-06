#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AISMPoolActor : public AActor
{
public:
	AISMPoolActor() = delete;
	~AISMPoolActor() = delete;
	AISMPoolActor(const AISMPoolActor&) = delete;
	AISMPoolActor& operator=(const AISMPoolActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
