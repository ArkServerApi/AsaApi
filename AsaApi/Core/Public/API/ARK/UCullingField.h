#pragma once
#include "BulkForward.h"
#include "UFieldNodeBase.h"

struct UCullingField : public UFieldNodeBase
{
public:
	UCullingField() = delete;
	~UCullingField() = delete;
	UCullingField(const UCullingField&) = delete;
	UCullingField& operator=(const UCullingField&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCullingField"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCullingField"); }

	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UCullingField.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
