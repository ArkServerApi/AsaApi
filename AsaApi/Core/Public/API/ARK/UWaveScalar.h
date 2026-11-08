#pragma once
#include "BulkForward.h"
#include "UFieldNodeFloat.h"

struct UWaveScalar : public UFieldNodeFloat
{
public:
	UWaveScalar() = delete;
	~UWaveScalar() = delete;
	UWaveScalar(const UWaveScalar&) = delete;
	UWaveScalar& operator=(const UWaveScalar&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaveScalar"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaveScalar"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "UWaveScalar.Magnitude"); }
	UE::Math::TVector<double>& PositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UWaveScalar.Position"); }
	float& WavelengthField() { return *GetNativePointerField<float*>(this, "UWaveScalar.Wavelength"); }
	float& PeriodField() { return *GetNativePointerField<float*>(this, "UWaveScalar.Period"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "UWaveScalar.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
