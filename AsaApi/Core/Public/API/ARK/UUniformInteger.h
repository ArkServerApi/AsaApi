#pragma once
#include "BulkForward.h"
#include "UFieldNodeInt.h"

struct UUniformInteger : public UFieldNodeInt
{
public:
	UUniformInteger() = delete;
	~UUniformInteger() = delete;
	UUniformInteger(const UUniformInteger&) = delete;
	UUniformInteger& operator=(const UUniformInteger&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UUniformInteger"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UUniformInteger"); }

	int& MagnitudeField() { return *GetNativePointerField<int*>(this, "UUniformInteger.Magnitude"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UUniformInteger.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
