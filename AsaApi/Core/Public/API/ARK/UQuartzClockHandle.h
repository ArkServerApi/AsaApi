#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UQuartzClockHandle : public UObject
{
public:
	UQuartzClockHandle() = delete;
	~UQuartzClockHandle() = delete;
	UQuartzClockHandle(const UQuartzClockHandle&) = delete;
	UQuartzClockHandle& operator=(const UQuartzClockHandle&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UQuartzClockHandle"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UQuartzClockHandle"); }
	FName& CurrentClockIdField() { return *GetNativePointerField<FName*>(this, "UQuartzClockHandle.CurrentClockId"); }
	void QueueQuantizedSound(const UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle, const FAudioComponentCommandInfo& InAudioComponentData, const FOnQuartzCommandEventBP& InDelegate, const FQuartzQuantizationBoundary& InTargetBoundary) { NativeCall<void, const UObject*, UQuartzClockHandle*&, const FAudioComponentCommandInfo&, const FOnQuartzCommandEventBP&, const FQuartzQuantizationBoundary&>(this, "UQuartzClockHandle.QueueQuantizedSound(UObject*,UQuartzClockHandle*&,FAudioComponentCommandInfo&,FOnQuartzCommandEventBP&,FQuartzQuantizationBoundary&)", WorldContextObject, InClockHandle, InAudioComponentData, InDelegate, InTargetBoundary); }
	void BeginDestroy() { NativeCall<void>(this, "UQuartzClockHandle.BeginDestroy()"); }
	bool IsClockRunning(const UObject* WorldContextObject) { return NativeCall<bool, const UObject*>(this, "UQuartzClockHandle.IsClockRunning(UObject*)", WorldContextObject); }
	void ResetTransport(const UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate) { NativeCall<void, const UObject*, const FOnQuartzCommandEventBP&>(this, "UQuartzClockHandle.ResetTransport(UObject*,FOnQuartzCommandEventBP&)", WorldContextObject, InDelegate); }
};
