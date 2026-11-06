#pragma once
#include "BulkForward.h"
#include "UParticleSystemComponent.h"

struct UParticleSystemComponentWithSoftRef : public UParticleSystemComponent
{
public:
	UParticleSystemComponentWithSoftRef() = delete;
	~UParticleSystemComponentWithSoftRef() = delete;
	UParticleSystemComponentWithSoftRef(const UParticleSystemComponentWithSoftRef&) = delete;
	UParticleSystemComponentWithSoftRef& operator=(const UParticleSystemComponentWithSoftRef&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void ResolveSynchronous() { NativeCall<void>(this, "UParticleSystemComponentWithSoftRef.ResolveSynchronous()"); }
};
