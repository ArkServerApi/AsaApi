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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_SingleLineTrace"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayAbilityTargetActor_SingleLineTrace"); }

};
