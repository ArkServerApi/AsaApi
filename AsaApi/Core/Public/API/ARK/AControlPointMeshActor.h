#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AControlPointMeshActor : public AActor
{
public:
	AControlPointMeshActor() = delete;
	~AControlPointMeshActor() = delete;
	AControlPointMeshActor(const AControlPointMeshActor&) = delete;
	AControlPointMeshActor& operator=(const AControlPointMeshActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "AControlPointMeshActor.GetDetailedInfoInternal()", result); }
};
