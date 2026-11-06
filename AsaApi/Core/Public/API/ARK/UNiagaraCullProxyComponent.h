#pragma once
#include "BulkForward.h"
#include "UNiagaraComponent.h"

struct UNiagaraCullProxyComponent : public UNiagaraComponent
{
public:
	UNiagaraCullProxyComponent() = delete;
	~UNiagaraCullProxyComponent() = delete;
	UNiagaraCullProxyComponent(const UNiagaraCullProxyComponent&) = delete;
	UNiagaraCullProxyComponent& operator=(const UNiagaraCullProxyComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UNiagaraCullProxyComponent.CreateSceneProxy()"); }
	void TickCullProxy() { NativeCall<void>(this, "UNiagaraCullProxyComponent.TickCullProxy()"); }
};
