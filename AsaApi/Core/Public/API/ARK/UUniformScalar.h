#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct UUniformScalar : public UFieldNodeFloat
{
public:
	UUniformScalar() = delete;
	~UUniformScalar() = delete;
	UUniformScalar(const UUniformScalar&) = delete;
	UUniformScalar& operator=(const UUniformScalar&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UUniformScalar"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UUniformScalar"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "UUniformScalar.Magnitude"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UUniformScalar.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
