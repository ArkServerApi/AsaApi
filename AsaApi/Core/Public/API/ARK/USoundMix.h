#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct USoundMix : public UObject
{
public:
	USoundMix() = delete;
	~USoundMix() = delete;
	USoundMix(const USoundMix&) = delete;
	USoundMix& operator=(const USoundMix&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundMix"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundMix"); }
	float& EQPriorityField() { return *GetNativePointerField<float*>(this, "USoundMix.EQPriority"); }
	FAudioEQEffect& EQSettingsField() { return *GetNativePointerField<FAudioEQEffect*>(this, "USoundMix.EQSettings"); }
	float& InitialDelayField() { return *GetNativePointerField<float*>(this, "USoundMix.InitialDelay"); }
	float& FadeInTimeField() { return *GetNativePointerField<float*>(this, "USoundMix.FadeInTime"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "USoundMix.Duration"); }
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "USoundMix.FadeOutTime"); }
	BitFieldValue<bool, unsigned __int32> bApplyEQ() { return { this, "USoundMix.bApplyEQ"}; }
	void BeginDestroy() { NativeCall<void>(this, "USoundMix.BeginDestroy()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "USoundMix.GetDesc()", result); }
};
