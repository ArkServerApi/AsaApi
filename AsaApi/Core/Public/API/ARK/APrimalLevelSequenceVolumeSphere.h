#pragma once
#include "BulkForward.h"
#include "APrimalLevelSequenceVolumeBase.h"

struct APrimalLevelSequenceVolumeSphere : public APrimalLevelSequenceVolumeBase
{
public:
	APrimalLevelSequenceVolumeSphere() = delete;
	~APrimalLevelSequenceVolumeSphere() = delete;
	APrimalLevelSequenceVolumeSphere(const APrimalLevelSequenceVolumeSphere&) = delete;
	APrimalLevelSequenceVolumeSphere& operator=(const APrimalLevelSequenceVolumeSphere&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalLevelSequenceVolumeSphere"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalLevelSequenceVolumeSphere"); }

	USphereComponent*& SphereComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalLevelSequenceVolumeSphere.SphereComponent"); }
	float CalculateWeight(UE::Math::TVector<double>& Point) { return NativeCall<float, UE::Math::TVector<double>&>(this, "APrimalLevelSequenceVolumeSphere.CalculateWeight(UE::Math::TVector<double>&)", Point); }
};
