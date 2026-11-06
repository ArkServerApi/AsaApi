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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATextRenderActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATextRenderActor"); }

};
