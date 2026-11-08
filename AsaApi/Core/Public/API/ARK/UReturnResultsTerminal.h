#pragma once
#include "BulkForward.h"
#include "UFieldNodeBase.h"

struct UReturnResultsTerminal : public UFieldNodeBase
{
public:
	UReturnResultsTerminal() = delete;
	~UReturnResultsTerminal() = delete;
	UReturnResultsTerminal(const UReturnResultsTerminal&) = delete;
	UReturnResultsTerminal& operator=(const UReturnResultsTerminal&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReturnResultsTerminal"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReturnResultsTerminal"); }

	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UReturnResultsTerminal.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
