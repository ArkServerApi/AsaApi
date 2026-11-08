#pragma once
#include "BulkForward.h"
#include "UFieldNodeInt.h"

struct URadialIntMask : public UFieldNodeInt
{
public:
	URadialIntMask() = delete;
	~URadialIntMask() = delete;
	URadialIntMask(const URadialIntMask&) = delete;
	URadialIntMask& operator=(const URadialIntMask&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URadialIntMask"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URadialIntMask"); }

	float& RadiusField() { return *GetNativePointerField<float*>(this, "URadialIntMask.Radius"); }
	UE::Math::TVector<double>& PositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "URadialIntMask.Position"); }
	int& InteriorValueField() { return *GetNativePointerField<int*>(this, "URadialIntMask.InteriorValue"); }
	int& ExteriorValueField() { return *GetNativePointerField<int*>(this, "URadialIntMask.ExteriorValue"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "URadialIntMask.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
