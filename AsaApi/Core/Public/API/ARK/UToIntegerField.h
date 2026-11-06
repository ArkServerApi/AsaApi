#pragma once
#include "BulkForward.h"
#include "UFieldNodeInt.h"

struct UToIntegerField : public UFieldNodeInt
{
public:
	UToIntegerField() = delete;
	~UToIntegerField() = delete;
	UToIntegerField(const UToIntegerField&) = delete;
	UToIntegerField& operator=(const UToIntegerField&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UToIntegerField.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
