#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct UToFloatField : public UFieldNodeFloat
{
public:
	UToFloatField() = delete;
	~UToFloatField() = delete;
	UToFloatField(const UToFloatField&) = delete;
	UToFloatField& operator=(const UToFloatField&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UToFloatField.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
