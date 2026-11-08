#pragma once
#include "BulkForward.h"
#include "UFieldNodeVector.h"

struct UUniformVector : public UFieldNodeVector
{
public:
	UUniformVector() = delete;
	~UUniformVector() = delete;
	UUniformVector(const UUniformVector&) = delete;
	UUniformVector& operator=(const UUniformVector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UUniformVector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UUniformVector"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "UUniformVector.Magnitude"); }
	UE::Math::TVector<double>& DirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UUniformVector.Direction"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UUniformVector.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
