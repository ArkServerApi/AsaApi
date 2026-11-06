#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMeshDeformerInstance : public UObject
{
public:
	UMeshDeformerInstance() = delete;
	~UMeshDeformerInstance() = delete;
	UMeshDeformerInstance(const UMeshDeformerInstance&) = delete;
	UMeshDeformerInstance& operator=(const UMeshDeformerInstance&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UMeshDeformerInstance.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	UMeshDeformerInstance* GetInstanceForSourceDeformer() { return NativeCall<UMeshDeformerInstance*>(this, "UMeshDeformerInstance.GetInstanceForSourceDeformer()"); }
	void ReleaseResources() { NativeCall<void>(this, "UMeshDeformerInstance.ReleaseResources()"); }
	void AllocateResources() { NativeCall<void>(this, "UMeshDeformerInstance.AllocateResources()"); }
};
