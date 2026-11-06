#pragma once
#include "BulkForward.h"
#include "APartitionActor.h"

struct ALandscapeSplineMeshesActor : public APartitionActor
{
public:
	ALandscapeSplineMeshesActor() = delete;
	~ALandscapeSplineMeshesActor() = delete;
	ALandscapeSplineMeshesActor(const ALandscapeSplineMeshesActor&) = delete;
	ALandscapeSplineMeshesActor& operator=(const ALandscapeSplineMeshesActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeSplineMeshesActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeSplineMeshesActor"); }

	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "ALandscapeSplineMeshesActor.GetDetailedInfoInternal()", result); }
};
