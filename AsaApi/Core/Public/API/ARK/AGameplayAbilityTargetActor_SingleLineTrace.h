#pragma once
#include "BulkForward.h"
#include "AGameplayAbilityTargetActor_Trace.h"

struct AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	AGameplayAbilityTargetActor_SingleLineTrace() = delete;
	~AGameplayAbilityTargetActor_SingleLineTrace() = delete;
	AGameplayAbilityTargetActor_SingleLineTrace(const AGameplayAbilityTargetActor_SingleLineTrace&) = delete;
	AGameplayAbilityTargetActor_SingleLineTrace& operator=(const AGameplayAbilityTargetActor_SingleLineTrace&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
