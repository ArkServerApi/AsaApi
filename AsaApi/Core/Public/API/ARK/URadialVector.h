#pragma once
#include "BulkForward.h"
#include "UFieldNodeVector.h"

struct URadialVector : public UFieldNodeVector
{
public:
	URadialVector() = delete;
	~URadialVector() = delete;
	URadialVector(const URadialVector&) = delete;
	URadialVector& operator=(const URadialVector&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "URadialVector.Magnitude"); }
	UE::Math::TVector<double>& PositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "URadialVector.Position"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "URadialVector.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
