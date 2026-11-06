#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UParticleModuleSpawnBase.h"

class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	UParticleModuleSpawn() = delete;
	~UParticleModuleSpawn() = delete;
	UParticleModuleSpawn(const UParticleModuleSpawn&) = delete;
	UParticleModuleSpawn& operator=(const UParticleModuleSpawn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModuleSpawn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModuleSpawn"); }
	FRawDistributionFloat& RateField() { return *GetNativePointerField<FRawDistributionFloat*>(this, "UParticleModuleSpawn.Rate"); }
	FRawDistributionFloat& RateScaleField() { return *GetNativePointerField<FRawDistributionFloat*>(this, "UParticleModuleSpawn.RateScale"); }
	FRawDistributionFloat& BurstScaleField() { return *GetNativePointerField<FRawDistributionFloat*>(this, "UParticleModuleSpawn.BurstScale"); }
	BitFieldValue<bool, unsigned __int32> bApplyGlobalSpawnRateScale() { return { this, "UParticleModuleSpawn.bApplyGlobalSpawnRateScale"}; }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSpawn.PostInitProperties()"); }
	float GetMaximumSpawnRate() { return NativeCall<float>(this, "UParticleModuleSpawn.GetMaximumSpawnRate()"); }
	int GetMaximumBurstCount() { return NativeCall<int>(this, "UParticleModuleSpawn.GetMaximumBurstCount()"); }
	void PostLoad() { NativeCall<void>(this, "UParticleModuleSpawn.PostLoad()"); }
	bool GenerateLODModuleValues(UParticleModule* SourceModule, float Percentage, UParticleLODLevel* LODLevel) { return NativeCall<bool, UParticleModule*, float, UParticleLODLevel*>(this, "UParticleModuleSpawn.GenerateLODModuleValues(UParticleModule*,float,UParticleLODLevel*)", SourceModule, Percentage, LODLevel); }
	float GetGlobalRateScale() { return NativeCall<float>(this, "UParticleModuleSpawn.GetGlobalRateScale()"); }
	float GetEstimatedSpawnRate() { return NativeCall<float>(this, "UParticleModuleSpawn.GetEstimatedSpawnRate()"); }
};
