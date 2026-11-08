#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UParticleModuleEventBase.h"

class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	UParticleModuleEventGenerator() = delete;
	~UParticleModuleEventGenerator() = delete;
	UParticleModuleEventGenerator(const UParticleModuleEventGenerator&) = delete;
	UParticleModuleEventGenerator& operator=(const UParticleModuleEventGenerator&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModuleEventGenerator"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModuleEventGenerator"); }
	bool HandleParticleKilled(FParticleEmitterInstance* Owner, FParticleEventInstancePayload* EventPayload, FBaseParticle* DeadParticle) { return NativeCall<bool, FParticleEmitterInstance*, FParticleEventInstancePayload*, FBaseParticle*>(this, "UParticleModuleEventGenerator.HandleParticleKilled(FParticleEmitterInstance*,FParticleEventInstancePayload*,FBaseParticle*)", Owner, EventPayload, DeadParticle); }
	bool HandleParticleSpawned(FParticleEmitterInstance* Owner, FParticleEventInstancePayload* EventPayload, FBaseParticle* NewParticle) { return NativeCall<bool, FParticleEmitterInstance*, FParticleEventInstancePayload*, FBaseParticle*>(this, "UParticleModuleEventGenerator.HandleParticleSpawned(FParticleEmitterInstance*,FParticleEventInstancePayload*,FBaseParticle*)", Owner, EventPayload, NewParticle); }
	bool HandleParticleCollision(FParticleEmitterInstance* Owner, FParticleEventInstancePayload* EventPayload, FParticleCollisionPayload* CollidePayload, FHitResult* Hit, FBaseParticle* CollideParticle, UE::Math::TVector<double>& CollideDirection) { return NativeCall<bool, FParticleEmitterInstance*, FParticleEventInstancePayload*, FParticleCollisionPayload*, FHitResult*, FBaseParticle*, UE::Math::TVector<double>&>(this, "UParticleModuleEventGenerator.HandleParticleCollision(FParticleEmitterInstance*,FParticleEventInstancePayload*,FParticleCollisionPayload*,FHitResult*,FBaseParticle*,UE::Math::TVector<double>&)", Owner, EventPayload, CollidePayload, Hit, CollideParticle, CollideDirection); }
	unsigned int RequiredBytesPerInstance() { return NativeCall<unsigned int>(this, "UParticleModuleEventGenerator.RequiredBytesPerInstance()"); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance* Owner, void* InstData) { return NativeCall<unsigned int, FParticleEmitterInstance*, void*>(this, "UParticleModuleEventGenerator.PrepPerInstanceBlock(FParticleEmitterInstance*,void*)", Owner, InstData); }
	bool HandleParticleBurst(FParticleEmitterInstance* Owner, FParticleEventInstancePayload* EventPayload, int ParticleCount) { return NativeCall<bool, FParticleEmitterInstance*, FParticleEventInstancePayload*, int>(this, "UParticleModuleEventGenerator.HandleParticleBurst(FParticleEmitterInstance*,FParticleEventInstancePayload*,int)", Owner, EventPayload, ParticleCount); }
	unsigned int RequiredBytes(UParticleModuleTypeDataBase* TypeData) { return NativeCall<unsigned int, UParticleModuleTypeDataBase*>(this, "UParticleModuleEventGenerator.RequiredBytes(UParticleModuleTypeDataBase*)", TypeData); }
};
