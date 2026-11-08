#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANiagaraPerfBaselineActor : public AActor
{
public:
	ANiagaraPerfBaselineActor() = delete;
	~ANiagaraPerfBaselineActor() = delete;
	ANiagaraPerfBaselineActor(const ANiagaraPerfBaselineActor&) = delete;
	ANiagaraPerfBaselineActor& operator=(const ANiagaraPerfBaselineActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANiagaraPerfBaselineActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANiagaraPerfBaselineActor"); }

};
