#pragma once
#include "BulkForward.h"
#include "ACameraRig_Rail.h"

struct ACineCameraRigRail : public ACameraRig_Rail
{
public:
	ACineCameraRigRail() = delete;
	~ACineCameraRigRail() = delete;
	ACineCameraRigRail(const ACineCameraRigRail&) = delete;
	ACineCameraRigRail& operator=(const ACineCameraRigRail&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACineCameraRigRail"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACineCameraRigRail"); }

	bool& bUseAbsolutePositionField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bUseAbsolutePosition"); }
	float& AbsolutePositionOnRailField() { return *GetNativePointerField<float*>(this, "ACineCameraRigRail.AbsolutePositionOnRail"); }
	bool& bUsePointRotationField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bUsePointRotation"); }
	bool& bDisplaySpeedHeatmapField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bDisplaySpeedHeatmap"); }
	int& SpeedSampleCountPerSegmentField() { return *GetNativePointerField<int*>(this, "ACineCameraRigRail.SpeedSampleCountPerSegment"); }
	bool& bAttachLocationXField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bAttachLocationX"); }
	bool& bAttachLocationYField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bAttachLocationY"); }
	bool& bAttachLocationZField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bAttachLocationZ"); }
	bool& bAttachRotationXField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bAttachRotationX"); }
	bool& bAttachRotationYField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bAttachRotationY"); }
	bool& bAttachRotationZField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bAttachRotationZ"); }
	bool& bInheritFocalLengthField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bInheritFocalLength"); }
	bool& bInheritApertureField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bInheritAperture"); }
	bool& bInheritFocusDistanceField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bInheritFocusDistance"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "ACineCameraRigRail.Speed"); }
	bool& bPlayField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bPlay"); }
	bool& bReverseField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bReverse"); }
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bLoop"); }
	bool& bCompensateTimeScaleField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bCompensateTimeScale"); }
	float& SpeedProgressField() { return *GetNativePointerField<float*>(this, "ACineCameraRigRail.SpeedProgress"); }
	bool& bBounceForwardField() { return *GetNativePointerField<bool*>(this, "ACineCameraRigRail.bBounceForward"); }
	void UpdateSpeedHeatmap() { NativeCall<void>(this, "ACineCameraRigRail.UpdateSpeedHeatmap()"); }
	void UpdateSplineMeshMID() { NativeCall<void>(this, "ACineCameraRigRail.UpdateSplineMeshMID()"); }
	void DriveByParam(float DeltaTime) { NativeCall<void, float>(this, "ACineCameraRigRail.DriveByParam(float)", DeltaTime); }
	void SetMIDParameters() { NativeCall<void>(this, "ACineCameraRigRail.SetMIDParameters()"); }
	float LastPositionValue() { return NativeCall<float>(this, "ACineCameraRigRail.LastPositionValue()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ACineCameraRigRail.Tick(float)", DeltaTime); }
	void PostLoad() { NativeCall<void>(this, "ACineCameraRigRail.PostLoad()"); }
	void UpdateRailComponents() { NativeCall<void>(this, "ACineCameraRigRail.UpdateRailComponents()"); }
	void UpdateSpeedProgress() { NativeCall<void>(this, "ACineCameraRigRail.UpdateSpeedProgress()"); }
	void OnSplineEdited() { NativeCall<void>(this, "ACineCameraRigRail.OnSplineEdited()"); }
	UE::Math::TVector<double>* GetVelocityAtPosition(UE::Math::TVector<double>* result, float InPosition, float delta) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, float>(this, "ACineCameraRigRail.GetVelocityAtPosition(float,float)", result, InPosition, delta); }
};
