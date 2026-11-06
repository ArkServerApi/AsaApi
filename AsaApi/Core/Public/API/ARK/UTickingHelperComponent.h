#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UTickingHelperComponent : public UActorComponent
{
public:
	UTickingHelperComponent() = delete;
	~UTickingHelperComponent() = delete;
	UTickingHelperComponent(const UTickingHelperComponent&) = delete;
	UTickingHelperComponent& operator=(const UTickingHelperComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTickingHelperComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTickingHelperComponent"); }

	FTimeRange& ThrottledTickTimeRangeField() { return *GetNativePointerField<FTimeRange*>(this, "UTickingHelperComponent.ThrottledTickTimeRange"); }
	bool& bUsePerFrameTickEventsField() { return *GetNativePointerField<bool*>(this, "UTickingHelperComponent.bUsePerFrameTickEvents"); }
	bool& bUseThrottledTickEventsField() { return *GetNativePointerField<bool*>(this, "UTickingHelperComponent.bUseThrottledTickEvents"); }
	FTickingHelperDelegate& OnPerFrameTickEventField() { return *GetNativePointerField<FTickingHelperDelegate*>(this, "UTickingHelperComponent.OnPerFrameTickEvent"); }
	FTickingHelperDelegate& OnThrottledTickEventField() { return *GetNativePointerField<FTickingHelperDelegate*>(this, "UTickingHelperComponent.OnThrottledTickEvent"); }
	float& CurrentThrottledTickIntervalField() { return *GetNativePointerField<float*>(this, "UTickingHelperComponent.CurrentThrottledTickInterval"); }
	double& LastThrottledTickTimeField() { return *GetNativePointerField<double*>(this, "UTickingHelperComponent.LastThrottledTickTime"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UTickingHelperComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void SetComponentTickGroup(ETickingGroup NewTickGroup) { NativeCall<void, ETickingGroup>(this, "UTickingHelperComponent.SetComponentTickGroup(ETickingGroup)", NewTickGroup); }
	void InitializeComponent() { NativeCall<void>(this, "UTickingHelperComponent.InitializeComponent()"); }
	void OnThrottledTick(float DeltaTime) { NativeCall<void, float>(this, "UTickingHelperComponent.OnThrottledTick(float)", DeltaTime); }
};
