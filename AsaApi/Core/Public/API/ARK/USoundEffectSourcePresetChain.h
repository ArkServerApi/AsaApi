#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USoundEffectSourcePresetChain : public UObject
{
public:
	USoundEffectSourcePresetChain() = delete;
	~USoundEffectSourcePresetChain() = delete;
	USoundEffectSourcePresetChain(const USoundEffectSourcePresetChain&) = delete;
	USoundEffectSourcePresetChain& operator=(const USoundEffectSourcePresetChain&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundEffectSourcePresetChain"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundEffectSourcePresetChain"); }
	BitFieldValue<bool, unsigned __int32> bPlayEffectChainTails() { return { this, "USoundEffectSourcePresetChain.bPlayEffectChainTails"}; }
	int GetSupportedChannelCount() { return NativeCall<int>(this, "USoundEffectSourcePresetChain.GetSupportedChannelCount()"); }
	void AddReferencedEffects(FReferenceCollector& Collector) { NativeCall<void, FReferenceCollector&>(this, "USoundEffectSourcePresetChain.AddReferencedEffects(FReferenceCollector&)", Collector); }
};
