#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UCameraShakeBase : public UObject
{
public:
	UCameraShakeBase() = delete;
	~UCameraShakeBase() = delete;
	UCameraShakeBase(const UCameraShakeBase&) = delete;
	UCameraShakeBase& operator=(const UCameraShakeBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraShakeBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraShakeBase"); }
	bool& bSingleInstanceField() { return *GetNativePointerField<bool*>(this, "UCameraShakeBase.bSingleInstance"); }
	float& ShakeScaleField() { return *GetNativePointerField<float*>(this, "UCameraShakeBase.ShakeScale"); }
	ECameraShakePlaySpace& PlaySpaceField() { return *GetNativePointerField<ECameraShakePlaySpace*>(this, "UCameraShakeBase.PlaySpace"); }
	bool& bIsActiveField() { return *GetNativePointerField<bool*>(this, "UCameraShakeBase.bIsActive"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "UCameraShakeBase.Speed"); }
	BitFieldValue<bool, unsigned __int32> bIgnoreWhenBasedOnDino() { return { this, "UCameraShakeBase.bIgnoreWhenBasedOnDino"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreWorldShakeScaling() { return { this, "UCameraShakeBase.bIgnoreWorldShakeScaling"}; }
	BitFieldValue<bool, unsigned __int32> bForceUseCameraShakeScale() { return { this, "UCameraShakeBase.bForceUseCameraShakeScale"}; }
	static void ApplyLimits(const FMinimalViewInfo& InPOV, FCameraShakePatternUpdateResult& InOutResult) { NativeCall<void, const FMinimalViewInfo&, FCameraShakePatternUpdateResult&>(nullptr, "UCameraShakeBase.ApplyLimits(FMinimalViewInfo&,FCameraShakePatternUpdateResult&)", InPOV, InOutResult); }
	void ScrubAndApplyCameraShake(float AbsoluteTime, float Alpha, FMinimalViewInfo& InOutPOV) { NativeCall<void, float, float, FMinimalViewInfo&>(this, "UCameraShakeBase.ScrubAndApplyCameraShake(float,float,FMinimalViewInfo&)", AbsoluteTime, Alpha, InOutPOV); }
	static void ApplyScale(float Scale, FCameraShakePatternUpdateResult& InOutResult) { NativeCall<void, float, FCameraShakePatternUpdateResult&>(nullptr, "UCameraShakeBase.ApplyScale(float,FCameraShakePatternUpdateResult&)", Scale, InOutResult); }
	void ApplyPlaySpace(const FCameraShakePatternUpdateParams& Params, FCameraShakePatternUpdateResult& InOutResult) { NativeCall<void, const FCameraShakePatternUpdateParams&, FCameraShakePatternUpdateResult&>(this, "UCameraShakeBase.ApplyPlaySpace(FCameraShakePatternUpdateParams&,FCameraShakePatternUpdateResult&)", Params, InOutResult); }
	bool IsFinished() { return NativeCall<bool>(this, "UCameraShakeBase.IsFinished()"); }
	void StopShake(bool bImmediately) { NativeCall<void, bool>(this, "UCameraShakeBase.StopShake(bool)", bImmediately); }
	static void ApplyResult(const FCameraShakeApplyResultParams& ApplyParams, const FCameraShakePatternUpdateResult& InResult, FMinimalViewInfo& InOutPOV) { NativeCall<void, const FCameraShakeApplyResultParams&, const FCameraShakePatternUpdateResult&, FMinimalViewInfo&>(nullptr, "UCameraShakeBase.ApplyResult(FCameraShakeApplyResultParams&,FCameraShakePatternUpdateResult&,FMinimalViewInfo&)", ApplyParams, InResult, InOutPOV); }
	void StartShake(const FCameraShakeBaseStartParams& Params) { NativeCall<void, const FCameraShakeBaseStartParams&>(this, "UCameraShakeBase.StartShake(FCameraShakeBaseStartParams&)", Params); }
	void TeardownShake() { NativeCall<void>(this, "UCameraShakeBase.TeardownShake()"); }
};
