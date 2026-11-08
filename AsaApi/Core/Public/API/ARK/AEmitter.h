#pragma once
#include "BulkForward.h"


struct AEmitter : AActor { 
	static UClass* StaticClass() { return AsaApi::ResolveClass("AEmitter"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AEmitter"); }

	FParticleSpawnSignature& OnParticleSpawnField() { return *GetNativePointerField<FParticleSpawnSignature*>(this, "AEmitter.OnParticleSpawn"); }
	FParticleBurstSignature& OnParticleBurstField() { return *GetNativePointerField<FParticleBurstSignature*>(this, "AEmitter.OnParticleBurst"); }
	FParticleDeathSignature& OnParticleDeathField() { return *GetNativePointerField<FParticleDeathSignature*>(this, "AEmitter.OnParticleDeath"); }
	FParticleCollisionSignature& OnParticleCollideField() { return *GetNativePointerField<FParticleCollisionSignature*>(this, "AEmitter.OnParticleCollide"); }
	bool& omitHapticsField() { return *GetNativePointerField<bool*>(this, "AEmitter.omitHaptics"); }
	BitFieldValue<bool, unsigned __int32> bDestroyOnSystemFinish() { return { this, "AEmitter.bDestroyOnSystemFinish"}; }
	BitFieldValue<bool, unsigned __int32> bPostUpdateTickGroup() { return { this, "AEmitter.bPostUpdateTickGroup"}; }
	BitFieldValue<bool, unsigned __int32> bCurrentlyActive() { return { this, "AEmitter.bCurrentlyActive"}; }
	BitFieldValue<bool, unsigned __int32> bForceOnDediServer() { return { this, "AEmitter.bForceOnDediServer"}; }
	void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) { NativeCall<void, UParticleSystemComponent*>(this, "AEmitter.OnParticleSystemFinished(UParticleSystemComponent*)", FinishedComponent); }
	void PostActorCreated() { NativeCall<void>(this, "AEmitter.PostActorCreated()"); }
	static void SetbCurrentlyActive_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AEmitter.SetbCurrentlyActive_WrapperImpl(void*,void*)", Object, InValue); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "AEmitter.GetDetailedInfoInternal()", result); }
	static void GetbCurrentlyActive_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AEmitter.GetbCurrentlyActive_WrapperImpl(void*,void*)", Object, OutValue); }
	void OnRep_bCurrentlyActive() { NativeCall<void>(this, "AEmitter.OnRep_bCurrentlyActive()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AEmitter.PostInitializeComponents()"); }
	void Deactivate() { NativeCall<void>(this, "AEmitter.Deactivate()"); }
	void Activate() { NativeCall<void>(this, "AEmitter.Activate()"); }
	void SetTemplate(UParticleSystem* NewTemplate) { NativeCall<void, UParticleSystem*>(this, "AEmitter.SetTemplate(UParticleSystem*)", NewTemplate); }
};