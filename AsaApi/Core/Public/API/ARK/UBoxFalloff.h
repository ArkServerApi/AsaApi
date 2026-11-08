#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct UBoxFalloff : public UFieldNodeFloat
{
public:
	UBoxFalloff() = delete;
	~UBoxFalloff() = delete;
	UBoxFalloff(const UBoxFalloff&) = delete;
	UBoxFalloff& operator=(const UBoxFalloff&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBoxFalloff"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBoxFalloff"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "UBoxFalloff.Magnitude"); }
	float& MinRangeField() { return *GetNativePointerField<float*>(this, "UBoxFalloff.MinRange"); }
	float& MaxRangeField() { return *GetNativePointerField<float*>(this, "UBoxFalloff.MaxRange"); }
	float& DefaultField() { return *GetNativePointerField<float*>(this, "UBoxFalloff.Default"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UBoxFalloff.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
