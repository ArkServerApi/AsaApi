#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANiagaraActor : public AActor
{
public:
	ANiagaraActor() = delete;
	~ANiagaraActor() = delete;
	ANiagaraActor(const ANiagaraActor&) = delete;
	ANiagaraActor& operator=(const ANiagaraActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	BitFieldValue<bool, unsigned __int32> bDestroyOnSystemFinish() { return { this, "ANiagaraActor.bDestroyOnSystemFinish"}; }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ANiagaraActor.PostUnregisterAllComponents()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ANiagaraActor.StaticClass()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ANiagaraActor.PostRegisterAllComponents()"); }
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) { NativeCall<void, bool>(this, "ANiagaraActor.SetDestroyOnSystemFinish(bool)", bShouldDestroyOnSystemFinish); }
};
