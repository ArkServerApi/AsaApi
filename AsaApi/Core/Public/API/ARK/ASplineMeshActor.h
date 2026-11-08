#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASplineMeshActor : public AActor
{
public:
	ASplineMeshActor() = delete;
	~ASplineMeshActor() = delete;
	ASplineMeshActor(const ASplineMeshActor&) = delete;
	ASplineMeshActor& operator=(const ASplineMeshActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASplineMeshActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASplineMeshActor"); }

	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "ASplineMeshActor.GetDetailedInfoInternal()", result); }
};
