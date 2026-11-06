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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	USphereComponent*& SphereComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalLevelSequenceVolumeSphere.SphereComponent"); }
	float CalculateWeight(UE::Math::TVector<double>& Point) { return NativeCall<float, UE::Math::TVector<double>&>(this, "APrimalLevelSequenceVolumeSphere.CalculateWeight(UE::Math::TVector<double>&)", Point); }
};
