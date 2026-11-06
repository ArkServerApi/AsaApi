#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UFieldNodeBase : public UActorComponent
{
public:
	UFieldNodeBase() = delete;
	~UFieldNodeBase() = delete;
	UFieldNodeBase(const UFieldNodeBase&) = delete;
	UFieldNodeBase& operator=(const UFieldNodeBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldNodeBase"); }

	bool ResultsExpector() { return NativeCall<bool>(this, "UFieldNodeBase.ResultsExpector()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldNodeBase"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UFieldNodeBase.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
