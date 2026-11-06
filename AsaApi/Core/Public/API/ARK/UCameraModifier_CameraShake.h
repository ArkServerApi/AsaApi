#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UCameraModifier.h"

class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	UCameraModifier_CameraShake() = delete;
	~UCameraModifier_CameraShake() = delete;
	UCameraModifier_CameraShake(const UCameraModifier_CameraShake&) = delete;
	UCameraModifier_CameraShake& operator=(const UCameraModifier_CameraShake&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraModifier_CameraShake"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraModifier_CameraShake"); }
	float& SplitScreenShakeScaleField() { return *GetNativePointerField<float*>(this, "UCameraModifier_CameraShake.SplitScreenShakeScale"); }
	bool ModifyCamera(float DeltaTime, FMinimalViewInfo& InOutPOV, bool IgnoredBasedOnModifiers) { return NativeCall<bool, float, FMinimalViewInfo&, bool>(this, "UCameraModifier_CameraShake.ModifyCamera(float,FMinimalViewInfo&,bool)", DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "UCameraModifier_CameraShake.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void BeginDestroy() { NativeCall<void>(this, "UCameraModifier_CameraShake.BeginDestroy()"); }
	void SaveShakeInExpiredPoolIfPossible(const FActiveCameraShakeInfo& ShakeInfo) { NativeCall<void, const FActiveCameraShakeInfo&>(this, "UCameraModifier_CameraShake.SaveShakeInExpiredPoolIfPossible(FActiveCameraShakeInfo&)", ShakeInfo); }
	void OnPreGarbageCollect() { NativeCall<void>(this, "UCameraModifier_CameraShake.OnPreGarbageCollect()"); }
	void RemoveAllCameraShakes(bool bImmediately) { NativeCall<void, bool>(this, "UCameraModifier_CameraShake.RemoveAllCameraShakes(bool)", bImmediately); }
	void RemoveInvalidObjectsFromExpiredPool() { NativeCall<void>(this, "UCameraModifier_CameraShake.RemoveInvalidObjectsFromExpiredPool()"); }
	void RemoveCameraShake(UCameraShakeBase* ShakeInst, bool bImmediately) { NativeCall<void, UCameraShakeBase*, bool>(this, "UCameraModifier_CameraShake.RemoveCameraShake(UCameraShakeBase*,bool)", ShakeInst, bImmediately); }
	void RemoveAllCameraShakesFromSource(const UCameraShakeSourceComponent* SourceComponent, bool bImmediately) { NativeCall<void, const UCameraShakeSourceComponent*, bool>(this, "UCameraModifier_CameraShake.RemoveAllCameraShakesFromSource(UCameraShakeSourceComponent*,bool)", SourceComponent, bImmediately); }
};
