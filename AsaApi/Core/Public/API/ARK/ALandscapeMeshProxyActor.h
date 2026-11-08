#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALandscapeMeshProxyActor : public AActor
{
public:
	ALandscapeMeshProxyActor() = delete;
	~ALandscapeMeshProxyActor() = delete;
	ALandscapeMeshProxyActor(const ALandscapeMeshProxyActor&) = delete;
	ALandscapeMeshProxyActor& operator=(const ALandscapeMeshProxyActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeMeshProxyActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeMeshProxyActor"); }

};
