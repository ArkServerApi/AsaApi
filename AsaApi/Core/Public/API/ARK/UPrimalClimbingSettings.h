#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalClimbingSettings : UObject
{
public:
	UPrimalClimbingSettings() = delete;
	~UPrimalClimbingSettings() = delete;
	UPrimalClimbingSettings(const UPrimalClimbingSettings&) = delete;
	UPrimalClimbingSettings& operator=(const UPrimalClimbingSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalClimbingSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalClimbingSettings"); }

	bool& bDebugField() { return *GetNativePointerField<bool*>(this, "UPrimalClimbingSettings.bDebug"); }
	bool& bAllowInputClimbingField() { return *GetNativePointerField<bool*>(this, "UPrimalClimbingSettings.bAllowInputClimbing"); }
	bool& bAllowSlidingField() { return *GetNativePointerField<bool*>(this, "UPrimalClimbingSettings.bAllowSliding"); }
	float& ArmSwitchAngleField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ArmSwitchAngle"); }
	float& PreFlinchUnclimbableIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.PreFlinchUnclimbableInterval"); }
	float& PostFlinchUnclimbableIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.PostFlinchUnclimbableInterval"); }
	float& ClimbingWaitAfterQuakeFallField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ClimbingWaitAfterQuakeFall"); }
	bool& bUseExtendedLandTraceField() { return *GetNativePointerField<bool*>(this, "UPrimalClimbingSettings.bUseExtendedLandTrace"); }
	float& RootLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.RootLocationInterpSpeed"); }
	float& JumpUpVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpUpVelocity"); }
	float& JumpForwardVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpForwardVelocity"); }
	float& JumpDirectionVelocityField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpDirectionVelocity"); }
	float& JumpCameraTransitionDurationField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpCameraTransitionDuration"); }
	float& ClimbingWaitForJumpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ClimbingWaitForJump"); }
	float& ForceReleaseOnImpulseForceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ForceReleaseOnImpulseForce"); }
	float& AttachAnchoredTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AttachAnchoredTraceRadius"); }
	float& AttachEffectTraceDistanceForwardField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AttachEffectTraceDistanceForward"); }
	float& AttachEffectTraceDistanceBackwardField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AttachEffectTraceDistanceBackward"); }
	float& MinAimDirectionDotField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinAimDirectionDot"); }
	float& AimDirectionBiasField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AimDirectionBias"); }
	float& TracePlaneInterpolationField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.TracePlaneInterpolation"); }
	float& HangingTracePlaneInterpolationField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingTracePlaneInterpolation"); }
	float& MinFloorDirectionDotField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinFloorDirectionDot"); }
	float& FallingConsumeDurabilityMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.FallingConsumeDurabilityMultiplier"); }
	float& ImpactNormalOffsetAllowanceDotField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ImpactNormalOffsetAllowanceDot"); }
	float& MoveTraceDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MoveTraceDistance"); }
	float& MoveTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MoveTraceRadius"); }
	float& HangingMinDotUpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingMinDotUp"); }
	float& CeilingDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CeilingDistance"); }
	float& CeilingTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CeilingTraceRadius"); }
	float& CeilingTraceDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CeilingTraceDistance"); }
	float& MinCeilingTraceTimeField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinCeilingTraceTime"); }
	float& WallDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.WallDistance"); }
	float& WallTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.WallTraceRadius"); }
	float& WallTraceDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.WallTraceDistance"); }
	float& MinWallTraceTimeField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinWallTraceTime"); }
	float& GroundMaxDotUpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.GroundMaxDotUp"); }
	float& MinFloorDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinFloorDistance"); }
	float& FloorTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.FloorTraceRadius"); }
	float& LandMinFloorSpaceDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.LandMinFloorSpaceDistance"); }
	float& LandFloorSpaceTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.LandFloorSpaceTraceRadius"); }
	float& FlipMaxNormalDotField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.FlipMaxNormalDot"); }
	float& TurnMaxNormalDotField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.TurnMaxNormalDot"); }
	float& ClimbAnimPlayRateDistanceScaleField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ClimbAnimPlayRateDistanceScale"); }
	float& MinClimbAnimPlayRateField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinClimbAnimPlayRate"); }
	float& MaxClimbAnimPlayRateField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MaxClimbAnimPlayRate"); }
	float& CameraYawMinField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraYawMin"); }
	float& CameraYawMaxField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraYawMax"); }
	float& CameraPitchUpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraPitchUp"); }
	float& CameraPitchDownField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraPitchDown"); }
	float& HangingCameraPitchUpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingCameraPitchUp"); }
	float& HangingCameraPitchDownField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingCameraPitchDown"); }
	float& SwitchToFPVDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchToFPVDistance"); }
	float& SwitchToFPVDownDotField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchToFPVDownDot"); }
	float& SwitchToFPVTransitionDurationField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchToFPVTransitionDuration"); }
	float& SwitchFromFPVTransitionDurationField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchFromFPVTransitionDuration"); }
	float& UpAndOverExtendedUpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.UpAndOverExtendedUp"); }
	float& UpAndOverExtendedForwardField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.UpAndOverExtendedForward"); }
	float& HangingFailTraceExtraLengthField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailTraceExtraLength"); }
	float& HangingFailMinDotUpField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailMinDotUp"); }
	float& HangingFailOppositeDirectTraceLengthField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailOppositeDirectTraceLength"); }
	float& HangingFailOppositeDirectTraceRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailOppositeDirectTraceRadius"); }
	float& InvisibleWallTooCloseRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.InvisibleWallTooCloseRadius"); }



	UE::Math::TVector<double>& CameraOffsetScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalClimbingSettings.CameraOffsetScale"); }
	UE::Math::TVector<double>& HangingCameraOffsetScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalClimbingSettings.HangingCameraOffsetScale"); }
};
