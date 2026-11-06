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
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANiagaraActor"); }

	BitFieldValue<bool, unsigned __int32> bDestroyOnSystemFinish() { return { this, "ANiagaraActor.bDestroyOnSystemFinish"}; }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ANiagaraActor.PostUnregisterAllComponents()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANiagaraActor"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ANiagaraActor.PostRegisterAllComponents()"); }
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) { NativeCall<void, bool>(this, "ANiagaraActor.SetDestroyOnSystemFinish(bool)", bShouldDestroyOnSystemFinish); }
};
