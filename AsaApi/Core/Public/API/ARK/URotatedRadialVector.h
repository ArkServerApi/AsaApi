#pragma once
#include "BulkForward.h"
#include "UFieldNodeVector.h"

struct URotatedRadialVector : public UFieldNodeVector
{
public:
	URotatedRadialVector() = delete;
	~URotatedRadialVector() = delete;
	URotatedRadialVector(const URotatedRadialVector&) = delete;
	URotatedRadialVector& operator=(const URotatedRadialVector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URotatedRadialVector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URotatedRadialVector"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "URotatedRadialVector.Magnitude"); }
	UE::Math::TVector<double>& PositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "URotatedRadialVector.Position"); }
	float& AngleField() { return *GetNativePointerField<float*>(this, "URotatedRadialVector.Angle"); }
	UE::Math::TVector<double>& AxisField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "URotatedRadialVector.Axis"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "URotatedRadialVector.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
