#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UParticleModule.h"

class UParticleModuleEventBase : public UParticleModule
{
public:
	UParticleModuleEventBase() = delete;
	~UParticleModuleEventBase() = delete;
	UParticleModuleEventBase(const UParticleModuleEventBase&) = delete;
	UParticleModuleEventBase& operator=(const UParticleModuleEventBase&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UParticleModuleEventBase.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
};
