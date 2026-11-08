#pragma once
#include "BulkForward.h"
#include "APlayerCameraManager.h"

struct ASPPlayerCameraManager : public APlayerCameraManager
{
public:
	ASPPlayerCameraManager() = delete;
	~ASPPlayerCameraManager() = delete;
	ASPPlayerCameraManager(const ASPPlayerCameraManager&) = delete;
	ASPPlayerCameraManager& operator=(const ASPPlayerCameraManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASPPlayerCameraManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASPPlayerCameraManager"); }

	float& BasePelvisRelativeZField() { return *GetNativePointerField<float*>(this, "ASPPlayerCameraManager.BasePelvisRelativeZ"); }
	FName& PelvisBoneNameField() { return *GetNativePointerField<FName*>(this, "ASPPlayerCameraManager.PelvisBoneName"); }
	bool& bSkipBlendsOnNextUpdateField() { return *GetNativePointerField<bool*>(this, "ASPPlayerCameraManager.bSkipBlendsOnNextUpdate"); }
	bool& bSkipNextInterpolationField() { return *GetNativePointerField<bool*>(this, "ASPPlayerCameraManager.bSkipNextInterpolation"); }
	bool& bUsingAltCameraModeField() { return *GetNativePointerField<bool*>(this, "ASPPlayerCameraManager.bUsingAltCameraMode"); }
	AActor*& AltViewTargetField() { return *GetNativePointerField<AActor**>(this, "ASPPlayerCameraManager.AltViewTarget"); }
	float& AltCameraTransitionTimeField() { return *GetNativePointerField<float*>(this, "ASPPlayerCameraManager.AltCameraTransitionTime"); }
	AActor*& SavedMainViewTargetField() { return *GetNativePointerField<AActor**>(this, "ASPPlayerCameraManager.SavedMainViewTarget"); }
	FMinimalViewInfo& TransitionGoalPOVField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "ASPPlayerCameraManager.TransitionGoalPOV"); }
	float& DefaultMinPitchLimitField() { return *GetNativePointerField<float*>(this, "ASPPlayerCameraManager.DefaultMinPitchLimit"); }
	float& DefaultMaxPitchLimitField() { return *GetNativePointerField<float*>(this, "ASPPlayerCameraManager.DefaultMaxPitchLimit"); }
	void UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime) { NativeCall<void, FTViewTarget&, float>(this, "ASPPlayerCameraManager.UpdateViewTarget(FTViewTarget&,float)", OutVT, DeltaTime); }
	void UpdateCameraInStack(int StackIdx, float DeltaTime, FTViewTarget& OutVT) { NativeCall<void, int, float, FTViewTarget&>(this, "ASPPlayerCameraManager.UpdateCameraInStack(int,float,FTViewTarget&)", StackIdx, DeltaTime, OutVT); }
	void SetUsingAlternateCamera(bool bNewUsingAltCamera) { NativeCall<void, bool>(this, "ASPPlayerCameraManager.SetUsingAlternateCamera(bool)", bNewUsingAltCamera); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "ASPPlayerCameraManager.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	int GetBestCameraMode(AActor* Target) { return NativeCall<int, AActor*>(this, "ASPPlayerCameraManager.GetBestCameraMode(AActor*)", Target); }
};
