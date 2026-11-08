#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct UPlaneFalloff : public UFieldNodeFloat
{
public:
	UPlaneFalloff() = delete;
	~UPlaneFalloff() = delete;
	UPlaneFalloff(const UPlaneFalloff&) = delete;
	UPlaneFalloff& operator=(const UPlaneFalloff&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlaneFalloff"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlaneFalloff"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "UPlaneFalloff.Magnitude"); }
	float& MinRangeField() { return *GetNativePointerField<float*>(this, "UPlaneFalloff.MinRange"); }
	float& MaxRangeField() { return *GetNativePointerField<float*>(this, "UPlaneFalloff.MaxRange"); }
	float& DefaultField() { return *GetNativePointerField<float*>(this, "UPlaneFalloff.Default"); }
	float& DistanceField() { return *GetNativePointerField<float*>(this, "UPlaneFalloff.Distance"); }
	UE::Math::TVector<double>& PositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPlaneFalloff.Position"); }
	UE::Math::TVector<double>& NormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPlaneFalloff.Normal"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UPlaneFalloff.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
