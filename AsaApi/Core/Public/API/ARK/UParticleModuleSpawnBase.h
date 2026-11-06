#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UParticleModule.h"

class UParticleModuleSpawnBase : public UParticleModule
{
public:
	UParticleModuleSpawnBase() = delete;
	~UParticleModuleSpawnBase() = delete;
	UParticleModuleSpawnBase(const UParticleModuleSpawnBase&) = delete;
	UParticleModuleSpawnBase& operator=(const UParticleModuleSpawnBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModuleSpawnBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModuleSpawnBase"); }
	BitFieldValue<bool, unsigned __int32> bProcessSpawnRate() { return { this, "UParticleModuleSpawnBase.bProcessSpawnRate"}; }
	BitFieldValue<bool, unsigned __int32> bProcessBurstList() { return { this, "UParticleModuleSpawnBase.bProcessBurstList"}; }
	float GetEstimatedSpawnRate() { return NativeCall<float>(this, "UParticleModuleSpawnBase.GetEstimatedSpawnRate()"); }
	int GetMaximumBurstCount() { return NativeCall<int>(this, "UParticleModuleSpawnBase.GetMaximumBurstCount()"); }
	float GetMaximumSpawnRate() { return NativeCall<float>(this, "UParticleModuleSpawnBase.GetMaximumSpawnRate()"); }
	bool GetBurstCount(FParticleEmitterInstance* Owner, int Offset, float OldLeftover, float DeltaTime, int& Number) { return NativeCall<bool, FParticleEmitterInstance*, int, float, float, int&>(this, "UParticleModuleSpawnBase.GetBurstCount(FParticleEmitterInstance*,int,float,float,int&)", Owner, Offset, OldLeftover, DeltaTime, Number); }
};
