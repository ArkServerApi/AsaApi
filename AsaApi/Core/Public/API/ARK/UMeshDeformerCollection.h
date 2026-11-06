#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataAsset.h"

class UMeshDeformerCollection : public UDataAsset
{
public:
	UMeshDeformerCollection() = delete;
	~UMeshDeformerCollection() = delete;
	UMeshDeformerCollection(const UMeshDeformerCollection&) = delete;
	UMeshDeformerCollection& operator=(const UMeshDeformerCollection&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
};
