#pragma once
#include "BulkForward.h"
#include "APhysicsVolume.h"

struct AOceanVolume : public APhysicsVolume
{
public:
	AOceanVolume() = delete;
	~AOceanVolume() = delete;
	AOceanVolume(const AOceanVolume&) = delete;
	AOceanVolume& operator=(const AOceanVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOceanVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOceanVolume"); }

	double& LastRPCTimeField() { return *GetNativePointerField<double*>(this, "AOceanVolume.LastRPCTime"); }
	bool& bDrawDebugDataField() { return *GetNativePointerField<bool*>(this, "AOceanVolume.bDrawDebugData"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AOceanVolume.Tick(float)", DeltaSeconds); }
	bool IsOceanVolume() { return NativeCall<bool>(this, "AOceanVolume.IsOceanVolume()"); }
	float GetVolumeZAtPosition2D(UE::Math::TVector2<double>* Position) { if (!Position) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector2 < double >>(this, "AOceanVolume.GetVolumeZAtPosition2D(UE::Math::TVector2<double>)", *Position); }
	void BeginPlay() { NativeCall<void>(this, "AOceanVolume.BeginPlay()"); }
	bool IsOverlapInVolume(const USceneComponent& TestComponent) { return NativeCall<bool, const USceneComponent&>(this, "AOceanVolume.IsOverlapInVolume(USceneComponent&)", TestComponent); }
	bool EncompassesPoint(UE::Math::TVector<double>* Point, float SphereRadius, float* OutDistanceToPoint, float* MaxDistanceLimit) { if (!Point) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float, float *, float *>(this, "AOceanVolume.EncompassesPoint(UE::Math::TVector<double>,float,float*,float*)", *Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
	float GetVolumeZAtPosition(UE::Math::TVector2<double>* Position) { if (!Position) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector2 < double >>(this, "AOceanVolume.GetVolumeZAtPosition(UE::Math::TVector2<double>)", *Position); }
};
