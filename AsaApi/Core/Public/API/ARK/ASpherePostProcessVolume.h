#pragma once
#include "BulkForward.h"
#include "APostProcessVolume.h"

struct ASpherePostProcessVolume : public APostProcessVolume
{
public:
	ASpherePostProcessVolume() = delete;
	~ASpherePostProcessVolume() = delete;
	ASpherePostProcessVolume(const ASpherePostProcessVolume&) = delete;
	ASpherePostProcessVolume& operator=(const ASpherePostProcessVolume&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& SphereVolumeRadiusField() { return *GetNativePointerField<float*>(this, "ASpherePostProcessVolume.SphereVolumeRadius"); }
	USphereComponent*& SphereComponentField() { return *GetNativePointerField<USphereComponent**>(this, "ASpherePostProcessVolume.SphereComponent"); }
	bool EncompassesPoint(UE::Math::TVector<double>* Point, float SphereRadius, float* OutDistanceToPoint, float* MaxDistanceLimit) { if (!Point) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float, float *, float *>(this, "ASpherePostProcessVolume.EncompassesPoint(UE::Math::TVector<double>,float,float*,float*)", *Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
};
