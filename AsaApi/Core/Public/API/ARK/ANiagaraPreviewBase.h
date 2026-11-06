#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANiagaraPreviewBase : public AActor
{
public:
	ANiagaraPreviewBase() = delete;
	~ANiagaraPreviewBase() = delete;
	ANiagaraPreviewBase(const ANiagaraPreviewBase&) = delete;
	ANiagaraPreviewBase& operator=(const ANiagaraPreviewBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANiagaraPreviewBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANiagaraPreviewBase"); }

	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ANiagaraPreviewBase.ShouldTickIfViewportsOnly()"); }
};
