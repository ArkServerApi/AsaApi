#pragma once
#include "BulkForward.h"
#include "UFieldNodeBase.h"

struct UOperatorField : public UFieldNodeBase
{
public:
	UOperatorField() = delete;
	~UOperatorField() = delete;
	UOperatorField(const UOperatorField&) = delete;
	UOperatorField& operator=(const UOperatorField&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "UOperatorField.Magnitude"); }
	bool ResultsExpector() { return NativeCall<bool>(this, "UOperatorField.ResultsExpector()"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UOperatorField.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
