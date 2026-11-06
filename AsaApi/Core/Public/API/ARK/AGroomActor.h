#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGroomActor : public AActor
{
public:
	AGroomActor() = delete;
	~AGroomActor() = delete;
	AGroomActor(const AGroomActor&) = delete;
	AGroomActor& operator=(const AGroomActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGroomActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGroomActor"); }

};
