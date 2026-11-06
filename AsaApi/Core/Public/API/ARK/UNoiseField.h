#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct UNoiseField : public UFieldNodeFloat
{
public:
	UNoiseField() = delete;
	~UNoiseField() = delete;
	UNoiseField(const UNoiseField&) = delete;
	UNoiseField& operator=(const UNoiseField&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNoiseField"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNoiseField"); }

	float& MinRangeField() { return *GetNativePointerField<float*>(this, "UNoiseField.MinRange"); }
	float& MaxRangeField() { return *GetNativePointerField<float*>(this, "UNoiseField.MaxRange"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UNoiseField.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
