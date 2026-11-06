#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UParticleSystemReplay : public UObject
{
public:
	UParticleSystemReplay() = delete;
	~UParticleSystemReplay() = delete;
	UParticleSystemReplay(const UParticleSystemReplay&) = delete;
	UParticleSystemReplay& operator=(const UParticleSystemReplay&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	int& ClipIDNumberField() { return *GetNativePointerField<int*>(this, "UParticleSystemReplay.ClipIDNumber"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UParticleSystemReplay.Serialize(FArchive&)", Ar); }
};
