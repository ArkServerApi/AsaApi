#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADataflowActor : public AActor
{
public:
	ADataflowActor() = delete;
	~ADataflowActor() = delete;
	ADataflowActor(const ADataflowActor&) = delete;
	ADataflowActor& operator=(const ADataflowActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
