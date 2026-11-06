#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	UPawnNoiseEmitterComponent() = delete;
	~UPawnNoiseEmitterComponent() = delete;
	UPawnNoiseEmitterComponent(const UPawnNoiseEmitterComponent&) = delete;
	UPawnNoiseEmitterComponent& operator=(const UPawnNoiseEmitterComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPawnNoiseEmitterComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPawnNoiseEmitterComponent"); }

	UE::Math::TVector<double>& LastRemoteNoisePositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPawnNoiseEmitterComponent.LastRemoteNoisePosition"); }
	float& NoiseLifetimeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.NoiseLifetime"); }
	float& LastRemoteNoiseVolumeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastRemoteNoiseVolume"); }
	float& LastRemoteNoiseTimeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastRemoteNoiseTime"); }
	float& LastLocalNoiseVolumeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastLocalNoiseVolume"); }
	float& LastLocalNoiseTimeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastLocalNoiseTime"); }
	BitFieldValue<bool, unsigned __int32> bAIPerceptionSystemCompatibilityMode() { return { this, "UPawnNoiseEmitterComponent.bAIPerceptionSystemCompatibilityMode"}; }
	float GetLastNoiseTime(bool bSourceWithinNoiseEmitter) { return NativeCall<float, bool>(this, "UPawnNoiseEmitterComponent.GetLastNoiseTime(bool)", bSourceWithinNoiseEmitter); }
	float GetLastNoiseVolume(bool bSourceWithinNoiseEmitter) { return NativeCall<float, bool>(this, "UPawnNoiseEmitterComponent.GetLastNoiseVolume(bool)", bSourceWithinNoiseEmitter); }
	void MakeNoise(AActor* NoiseMaker, float Loudness, const UE::Math::TVector<double>& NoiseLocation) { NativeCall<void, AActor*, float, const UE::Math::TVector<double>&>(this, "UPawnNoiseEmitterComponent.MakeNoise(AActor*,float,UE::Math::TVector<double>&)", NoiseMaker, Loudness, NoiseLocation); }
};
