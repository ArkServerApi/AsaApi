#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct URadialFalloff : public UFieldNodeFloat
{
public:
	URadialFalloff() = delete;
	~URadialFalloff() = delete;
	URadialFalloff(const URadialFalloff&) = delete;
	URadialFalloff& operator=(const URadialFalloff&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URadialFalloff"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URadialFalloff"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "URadialFalloff.Magnitude"); }
	float& MinRangeField() { return *GetNativePointerField<float*>(this, "URadialFalloff.MinRange"); }
	float& MaxRangeField() { return *GetNativePointerField<float*>(this, "URadialFalloff.MaxRange"); }
	float& DefaultField() { return *GetNativePointerField<float*>(this, "URadialFalloff.Default"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "URadialFalloff.Radius"); }
	UE::Math::TVector<double>& PositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "URadialFalloff.Position"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "URadialFalloff.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
