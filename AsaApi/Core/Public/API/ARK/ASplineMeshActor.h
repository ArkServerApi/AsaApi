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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "ASplineMeshActor.GetDetailedInfoInternal()", result); }
};
