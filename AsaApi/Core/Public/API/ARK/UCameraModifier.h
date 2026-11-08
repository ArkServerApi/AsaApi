#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UCameraModifier : public UObject
{
public:
	UCameraModifier() = delete;
	~UCameraModifier() = delete;
	UCameraModifier(const UCameraModifier&) = delete;
	UCameraModifier& operator=(const UCameraModifier&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraModifier"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraModifier"); }
	unsigned char& PriorityField() { return *GetNativePointerField<unsigned char*>(this, "UCameraModifier.Priority"); }
	float& AlphaInTimeField() { return *GetNativePointerField<float*>(this, "UCameraModifier.AlphaInTime"); }
	float& AlphaOutTimeField() { return *GetNativePointerField<float*>(this, "UCameraModifier.AlphaOutTime"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "UCameraModifier.Alpha"); }
	BitFieldValue<bool, unsigned __int32> bDebug() { return { this, "UCameraModifier.bDebug"}; }
	BitFieldValue<bool, unsigned __int32> bExclusive() { return { this, "UCameraModifier.bExclusive"}; }
	BitFieldValue<bool, unsigned __int32> bDisabled() { return { this, "UCameraModifier.bDisabled"}; }
	BitFieldValue<bool, unsigned __int32> bPendingDisable() { return { this, "UCameraModifier.bPendingDisable"}; }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "UCameraModifier.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	bool IsPendingDisable() { return NativeCall<bool>(this, "UCameraModifier.IsPendingDisable()"); }
	bool ModifyCamera(float DeltaTime, FMinimalViewInfo& InOutPOV, bool IgnoredBasedOnModifiers) { return NativeCall<bool, float, FMinimalViewInfo&, bool>(this, "UCameraModifier.ModifyCamera(float,FMinimalViewInfo&,bool)", DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	bool IsDisabled() { return NativeCall<bool>(this, "UCameraModifier.IsDisabled()"); }
	void EnableModifier() { NativeCall<void>(this, "UCameraModifier.EnableModifier()"); }
	void UpdateAlpha(float DeltaTime) { NativeCall<void, float>(this, "UCameraModifier.UpdateAlpha(float)", DeltaTime); }
	void DisableModifier(bool bImmediate) { NativeCall<void, bool>(this, "UCameraModifier.DisableModifier(bool)", bImmediate); }
	void ModifyCamera(float DeltaTime, UE::Math::TVector<double>* ViewLocation, UE::Math::TRotator<double>* ViewRotation, float FOV, UE::Math::TVector<double>& NewViewLocation, UE::Math::TRotator<double>& NewViewRotation, float& NewFOV) { if (!ViewLocation) throw std::invalid_argument("Null native value parameter"); if (!ViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, float, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, float, UE :: Math :: TVector < double > &, UE :: Math :: TRotator < double > &, float &>(this, "UCameraModifier.ModifyCamera(float,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float&)", DeltaTime, *ViewLocation, *ViewRotation, FOV, NewViewLocation, NewViewRotation, NewFOV); }
	float GetTargetAlpha() { return NativeCall<float>(this, "UCameraModifier.GetTargetAlpha()"); }
	void ToggleModifier() { NativeCall<void>(this, "UCameraModifier.ToggleModifier()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UCameraModifier.GetWorld()"); }
	void AddedToCamera(APlayerCameraManager* Camera) { NativeCall<void, APlayerCameraManager*>(this, "UCameraModifier.AddedToCamera(APlayerCameraManager*)", Camera); }
	AActor* GetViewTarget() { return NativeCall<AActor*>(this, "UCameraModifier.GetViewTarget()"); }
	void ModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings) { NativeCall<void, float, float&, FPostProcessSettings&>(this, "UCameraModifier.ModifyPostProcess(float,float&,FPostProcessSettings&)", DeltaTime, PostProcessBlendWeight, PostProcessSettings); }
	bool ProcessViewRotation(AActor* ViewTarget, float DeltaTime, UE::Math::TRotator<double>& OutViewRotation, UE::Math::TRotator<double>& OutDeltaRot) { return NativeCall<bool, AActor*, float, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&>(this, "UCameraModifier.ProcessViewRotation(AActor*,float,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", ViewTarget, DeltaTime, OutViewRotation, OutDeltaRot); }
};
