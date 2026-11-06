#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ATextRenderActor : public AActor
{
public:
	ATextRenderActor() = delete;
	~ATextRenderActor() = delete;
	ATextRenderActor(const ATextRenderActor&) = delete;
	ATextRenderActor& operator=(const ATextRenderActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
