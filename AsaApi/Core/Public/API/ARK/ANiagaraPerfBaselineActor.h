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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
