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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
