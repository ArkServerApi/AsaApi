#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureSeating.h"

struct APrimalStructureSeating_DriverSeat : APrimalStructureSeating
{
public:
	APrimalStructureSeating_DriverSeat() = delete;
	~APrimalStructureSeating_DriverSeat() = delete;
	APrimalStructureSeating_DriverSeat(const APrimalStructureSeating_DriverSeat&) = delete;
	APrimalStructureSeating_DriverSeat& operator=(const APrimalStructureSeating_DriverSeat&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureSeating_DriverSeat"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureSeating_DriverSeat"); }

	bool& bDebugDrivingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bDebugDriving"); }
	bool& bDebugRowingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bDebugRowing"); }
	float& ThrottleInputField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ThrottleInput"); }
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SteeringInput"); }
	float& ForceFirstPersonCameraTraceLengthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonCameraTraceLengthMultiplier"); }
	bool& bSkipForceFirstPersonCameraCheckField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bSkipForceFirstPersonCameraCheck"); }
	float& RowingIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingInterval"); }
	float& RowingIntervalMult_FXField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingIntervalMult_FX"); }
	float& RowingImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingImpulse"); }
	float& RowingStaminaCostField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingStaminaCost"); }
	float& RowLocationOffsetToSeat_MultField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowLocationOffsetToSeat_Mult"); }
	float& OarRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarRadius"); }
	float& OarLength_PlacementField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarLength_Placement"); }
	float& OarLength_RowingField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarLength_Rowing"); }
	float& OarAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarAngle"); }
	float& OarStartOffsetX_LeftField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarStartOffsetX_Left"); }
	float& OarStartOffsetX_RightField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarStartOffsetX_Right"); }
	float& OarStartOffsetZField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarStartOffsetZ"); }
	float& RowingVFX_ZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingVFX_ZOffset"); }
	bool& bCreateMusicPlayerField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bCreateMusicPlayer"); }
	bool& bEnabeldLoweringAnchorField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bEnabeldLoweringAnchor"); }
	bool& bInGamepadZoomingStateField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bInGamepadZoomingState"); }
	bool& bInGamepadLoweringAnchorField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bInGamepadLoweringAnchor"); }
	double& LastPressReloadTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastPressReloadTime"); }
	double& LastReleaseReloadTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastReleaseReloadTime"); }
	float& CaptainsOrderTargetRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.CaptainsOrderTargetRange"); }
	double& LastTimeSetMyTargetField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastTimeSetMyTarget"); }
	double& LastTimeGivenCaptainOrderField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastTimeGivenCaptainOrder"); }
	double& LastTimeUpdatedManualFireLocationField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastTimeUpdatedManualFireLocation"); }
	double& LastForceTpvTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastForceTpvTime"); }
	float& AutoPilot_HeadingIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_HeadingInterval"); }
	int& AutoPilot_ThrottleIntervalCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_ThrottleIntervalCount"); }
	float& AutoPilot_FollowWindUpdateInterval_MINField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindUpdateInterval_MIN"); }
	float& AutoPilot_FollowWindUpdateInterval_MAXField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindUpdateInterval_MAX"); }
	double& AutoPilot_FollowWindUpdateInterval_CurrentField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindUpdateInterval_Current"); }
	double& AutoPilot_LastFollowWindUpdateTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_LastFollowWindUpdateTime"); }
	double& TimeToStartDrawingFloatingHUDField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.TimeToStartDrawingFloatingHUD"); }
	int& LieutenantSeatIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.LieutenantSeatIndex"); }
	int& ActiveGroupsForSeatField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.ActiveGroupsForSeat"); }
	double& TimeOfLastCaptainExtraActionField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.TimeOfLastCaptainExtraAction"); }
	float& CaptainExtraActionCooldownField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.CaptainExtraActionCooldown"); }
	double& CheckUntilAttachedToShipStartTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.CheckUntilAttachedToShipStartTime"); }
	float& GamepadZoomAxisAccumField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.GamepadZoomAxisAccum"); }

	bool CanSeatedCharRow(APrimalCharacter* ForChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalStructureSeating_DriverSeat.CanSeatedCharRow(APrimalCharacter*)", ForChar); }
	UAnimMontage* GetNextRowingAnim() { return NativeCall<UAnimMontage*>(this, "APrimalStructureSeating_DriverSeat.GetNextRowingAnim()"); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.PostSpawnInitialize()"); }
	void ShowGroupIconsForTime(float ForTime, unsigned char IconsToShow) { NativeCall<void, float, unsigned char>(this, "APrimalStructureSeating_DriverSeat.ShowGroupIconsForTime(float,unsignedchar)", ForTime, IconsToShow); }
	void DriverSeat_ReleasedActivateTurningSail_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateTurningSail_Implementation()"); }
	void HideAmmoGroupHighlight() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.HideAmmoGroupHighlight()"); }
	void Multi_PlayRowingAnim(UAnimMontage* PlayMontage, float WithRowingInterval, float TimeSinceRowStart) { NativeCall<void, UAnimMontage*, float, float>(this, "APrimalStructureSeating_DriverSeat.Multi_PlayRowingAnim(UAnimMontage*,float,float)", PlayMontage, WithRowingInterval, TimeSinceRowStart); }
	bool CanPlaceDriverSeat(APrimalShip* OnShip, bool bForPlacement) { return NativeCall<bool, APrimalShip*, bool>(this, "APrimalStructureSeating_DriverSeat.CanPlaceDriverSeat(APrimalShip*,bool)", OnShip, bForPlacement); }
	void DoOnCaptainOrderReleased(int OrderIndex) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.DoOnCaptainOrderReleased(int)", OrderIndex); }
	float GetRowingInput_Seat(int ForSeat) { return NativeCall<float, int>(this, "APrimalStructureSeating_DriverSeat.GetRowingInput_Seat(int)", ForSeat); }
	void BP_OnStopRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.BP_OnStopRowing()"); }
	void DriverSeat_SetSteeringInput(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSteeringInput(float)", Val); }
	bool IsRowing() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.IsRowing()"); }
	bool AreAnyRowersNPCs() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.AreAnyRowersNPCs()"); }
	bool WeaponAllowCommand() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.WeaponAllowCommand()"); }
	void LowerAnchor() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.LowerAnchor()"); }
	void Multi_OnDriverUnseated_Implementation(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.Multi_OnDriverUnseated_Implementation(int)", SeatNumber); }
	void OnAttachedToValidShip() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnAttachedToValidShip()"); }
	void OnPlayerPawnBecomesInValid(APawn* OldPawn, APawn* NewPawn) { NativeCall<void, APawn*, APawn*>(this, "APrimalStructureSeating_DriverSeat.OnPlayerPawnBecomesInValid(APawn*,APawn*)", OldPawn, NewPawn); }
	void DriverSeat_ReleasedActivateLoweringAnchor() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateLoweringAnchor()"); }
	void Multi_OnStopRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.Multi_OnStopRowing()"); }
	void DriverSeat_PressedSubActivateRightClaw_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateRightClaw_Implementation()"); }
	void DriverSeat_PressedSubActivateHarpoon() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateHarpoon()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.PostInitializeComponents()"); }
	void OnDriverUnseated(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.OnDriverUnseated(int)", SeatNumber); }
	void DriverSeat_ReleasedActivateZooming() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateZooming()"); }
	void DriverSeat_GamepadZoomAxis(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_GamepadZoomAxis(float)", Val); }
	void DriverSeat_PressedProne() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedProne()"); }
	void GamepadDoOnCaptainOrderReleased(int OrderIndex) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderReleased(int)", OrderIndex); }
	void BP_OnDriverSeated(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.BP_OnDriverSeated(int)", SeatNumber); }
	void ServerSetTurningSailState(bool bNewTurnSailState) { NativeCall<void, bool>(this, "APrimalStructureSeating_DriverSeat.ServerSetTurningSailState(bool)", bNewTurnSailState); }
	void DriverSeat_PressedProne_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedProne_Implementation()"); }
	void DriverSeat_PressedShipThrottle_FullSpeed() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedShipThrottle_FullSpeed()"); }
	void Multi_OnStopRowing_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.Multi_OnStopRowing_Implementation()"); }
	void DriverSeat_StartShipSpecialAction() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_StartShipSpecialAction()"); }
	void OnStopRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnStopRowing()"); }
	void ToggleLadders() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.ToggleLadders()"); }
	void DriverSeat_SetTurnSailsInput(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetTurnSailsInput(float)", Val); }
	void DriverSeat_ReleasedActivateTurningSail() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateTurningSail()"); }
	void ServerSetTurningSailState_Implementation(bool bNewTurnSailState) { NativeCall<void, bool>(this, "APrimalStructureSeating_DriverSeat.ServerSetTurningSailState_Implementation(bool)", bNewTurnSailState); }
	void TickCriticalShipStructure(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.TickCriticalShipStructure(float)", DeltaTime); }
	bool ForceThirdPerson_Implementation() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.ForceThirdPerson_Implementation()"); }
	void DriverSeat_SetSubRaiseInput(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSubRaiseInput(float)", Val); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureSeating_DriverSeat.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void DriverSeat_PressedStartRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedStartRowing()"); }
	void SetShipAutoThrottle(bool bActive) { NativeCall<void, bool>(this, "APrimalStructureSeating_DriverSeat.SetShipAutoThrottle(bool)", bActive); }
	void DriverSeat_PressedSubActivateRightClaw() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateRightClaw()"); }
	void DriverSeat_GamepadDiscreteZoomOut() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_GamepadDiscreteZoomOut()"); }
	void BindCaptainsOrdersSeatInputs() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.BindCaptainsOrdersSeatInputs()"); }
	void DrawFloatingHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureSeating_DriverSeat.DrawFloatingHUD(AShooterHUD*)", HUD); }
	void DriverSeat_PressedActivateZooming() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateZooming()"); }
	void DriverSeat_ReleasedActivateZooming_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateZooming_Implementation()"); }
	bool HasActivePlayer() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.HasActivePlayer()"); }
	void OnDriverSeated(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.OnDriverSeated(int)", SeatNumber); }
	void DriverSeat_PressedSubActivateLight() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateLight()"); }
	void Multi_OnDriverSeated_Implementation(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.Multi_OnDriverSeated_Implementation(int)", SeatNumber); }
	void GamepadDriverSeat_ZoomOut() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.GamepadDriverSeat_ZoomOut()"); }
	void Multi_OnDriverUnseated(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.Multi_OnDriverUnseated(int)", SeatNumber); }
	void DriverSeat_PressedSubActivateLeftClaw() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateLeftClaw()"); }
	bool CanUseAutoPilot() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.CanUseAutoPilot()"); }
	void GamepadDriverSeat_RightThumbStickPressed() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.GamepadDriverSeat_RightThumbStickPressed()"); }
	void Net_StopRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.Net_StopRowing()"); }
	void OnStartRowing(bool bSuccess, float interval) { NativeCall<void, bool, float>(this, "APrimalStructureSeating_DriverSeat.OnStartRowing(bool,float)", bSuccess, interval); }
	bool ForceFirstPerson_Implementation() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPerson_Implementation()"); }
	int GetActiveDriverCount() { return NativeCall<int>(this, "APrimalStructureSeating_DriverSeat.GetActiveDriverCount()"); }
	void DriverSeat_PressedActivateTurningSail_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateTurningSail_Implementation()"); }
	void BP_OnDriverUnseated(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.BP_OnDriverUnseated(int)", SeatNumber); }
	void SetManualFireMode(bool bActivate) { NativeCall<void, bool>(this, "APrimalStructureSeating_DriverSeat.SetManualFireMode(bool)", bActivate); }
	void PlayNextRowingAnim() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.PlayNextRowingAnim()"); }
	void RequestToggleOpenAllGunports() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.RequestToggleOpenAllGunports()"); }
	void DriverSeat_SetSeatThrottleInput(float Val, int FromSeatNumber) { NativeCall<void, float, int>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSeatThrottleInput(float,int)", Val, FromSeatNumber); }
	void OnPressedGamepadLeftShoulder() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnPressedGamepadLeftShoulder()"); }
	void DriverSeat_PressedShipThrottle_FullStop() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedShipThrottle_FullStop()"); }
	void Multi_OnStartRowing_Implementation(bool bSuccess, float interval) { NativeCall<void, bool, float>(this, "APrimalStructureSeating_DriverSeat.Multi_OnStartRowing_Implementation(bool,float)", bSuccess, interval); }
	void DriverSeat_PressedActivateLoweringAnchor_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateLoweringAnchor_Implementation()"); }
	void OnStopShowAllGroupIcons() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnStopShowAllGroupIcons()"); }
	void DriverSeat_SetElevationInput(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetElevationInput(float)", Val); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureSeating_DriverSeat.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void Multi_OnDriverSeated(int SeatNumber) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.Multi_OnDriverSeated(int)", SeatNumber); }
	void OnShowAllGroupIcons() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnShowAllGroupIcons()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureSeating_DriverSeat.DrawHUD(AShooterHUD*)", HUD); }
	void AutoPilot_Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Tick(float)", DeltaTime); }
	bool SetupNextRow() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.SetupNextRow()"); }
	void OnReleaseReload() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnReleaseReload()"); }
	void StopAllRowingAnims() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.StopAllRowingAnims()"); }
	void DriverSeat_ZoomOut() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ZoomOut()"); }
	void LocalSetShouldDrawFloatingHUD(bool bShouldDraw) { NativeCall<void, bool>(this, "APrimalStructureSeating_DriverSeat.LocalSetShouldDrawFloatingHUD(bool)", bShouldDraw); }
	void DriverSeat_ReleasedActivateLoweringAnchor_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateLoweringAnchor_Implementation()"); }
	void DriverSeat_SetSailsFullyOpen() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyOpen()"); }
	void OnPressReload() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnPressReload()"); }
	void DriverSeat_AutoThrottleBindReleased() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_AutoThrottleBindReleased()"); }
	void DriverSeat_PressedActivateLoweringAnchor() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateLoweringAnchor()"); }
	void CheckUntilAttachedToValidShip() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.CheckUntilAttachedToValidShip()"); }
	void Release(AShooterCharacter* theCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureSeating_DriverSeat.Release(AShooterCharacter*)", theCharacter); }
	void OnReleasedGamepadLeftShoulder() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnReleasedGamepadLeftShoulder()"); }
	void TryRowingFX() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.TryRowingFX()"); }
	void HidePreviewOars() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.HidePreviewOars()"); }
	void OnFireWhileWheelOpen() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnFireWhileWheelOpen()"); }
	void DriverSeat_ToggleAutoThrottle() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ToggleAutoThrottle()"); }
	void BindDriverSeatInputs() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.BindDriverSeatInputs()"); }
	void DoOnCaptainOrderPressed(int OrderIndex) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.DoOnCaptainOrderPressed(int)", OrderIndex); }
	void DriverSeat_SetSubRaiseInput_Implementation(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSubRaiseInput_Implementation(float)", Val); }
	void DriverSeat_ZoomIn() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ZoomIn()"); }
	void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureSeating_DriverSeat.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void DriverSeat_PressedStopRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedStopRowing()"); }
	void DriverSeat_PressedSubActivateHarpoon_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateHarpoon_Implementation()"); }
	void UpdateWindSourceActorRef() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.UpdateWindSourceActorRef()"); }
	void Multi_OnStartRowing(bool bSuccess, float interval) { NativeCall<void, bool, float>(this, "APrimalStructureSeating_DriverSeat.Multi_OnStartRowing(bool,float)", bSuccess, interval); }
	void DriverSeat_PressedActivateZooming_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateZooming_Implementation()"); }
	void OnHoldingReload() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.OnHoldingReload()"); }
	void DriverSeat_SetThrottleInput(float Val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetThrottleInput(float)", Val); }
	void GamepadDoOnCaptainOrderPressed(int OrderIndex) { NativeCall<void, int>(this, "APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderPressed(int)", OrderIndex); }
	void SetAttackMyTargetMode(bool bActivate) { NativeCall<void, bool>(this, "APrimalStructureSeating_DriverSeat.SetAttackMyTargetMode(bool)", bActivate); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.BeginPlay()"); }
	void HandleAxisNoop(float val) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.HandleAxisNoop(float)", val); }
	void Net_StartRowing() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.Net_StartRowing()"); }
	bool CanRow() { return NativeCall<bool>(this, "APrimalStructureSeating_DriverSeat.CanRow()"); }
	void DriverSeat_SetSailsFullyClosed() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyClosed()"); }
	void GamepadDriverSeat_ZoomIn() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.GamepadDriverSeat_ZoomIn()"); }
	void DriverSeat_PressedSubActivateLight_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateLight_Implementation()"); }
	void DriverSeat_PressedShipThrottle_FullStop_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedShipThrottle_FullStop_Implementation()"); }
	void DriverSeat_SetShipThrottleRatio(float newRatio) { NativeCall<void, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetShipThrottleRatio(float)", newRatio); }
	int GetValidDriverCount() { return NativeCall<int>(this, "APrimalStructureSeating_DriverSeat.GetValidDriverCount()"); }
	void DriverSeat_SetSeatSteeringInput(float Val, int FromSeatNumber) { NativeCall<void, float, int>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSeatSteeringInput(float,int)", Val, FromSeatNumber); }
	void AutoPilot_Stop() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Stop()"); }
	void Multi_PlayRowingAnim_Implementation(UAnimMontage* PlayMontage, float WithRowingInterval, float TimeSinceRowStart) { NativeCall<void, UAnimMontage*, float, float>(this, "APrimalStructureSeating_DriverSeat.Multi_PlayRowingAnim_Implementation(UAnimMontage*,float,float)", PlayMontage, WithRowingInterval, TimeSinceRowStart); }
	void DriverSeat_GamepadDiscreteZoomIn() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_GamepadDiscreteZoomIn()"); }
	void DriverSeat_PressedActivateTurningSail() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateTurningSail()"); }
	float GetRowingInput_All() { return NativeCall<float>(this, "APrimalStructureSeating_DriverSeat.GetRowingInput_All()"); }
	void DriverSeat_PressedSubActivateLeftClaw_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedSubActivateLeftClaw_Implementation()"); }
	void DriverSeat_PressedShipThrottle_FullSpeed_Implementation() { NativeCall<void>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedShipThrottle_FullSpeed_Implementation()"); }

	BitFieldValue<bool, unsigned char> bAutoHoldThrottleForward() { return { this, "APrimalStructureSeating_DriverSeat.bAutoHoldThrottleForward"}; }
	BitFieldValue<bool, unsigned char> bAutoFurlSails() { return { this, "APrimalStructureSeating_DriverSeat.bAutoFurlSails"}; }
	BitFieldValue<bool, unsigned char> bUseShipCameraOffset() { return { this, "APrimalStructureSeating_DriverSeat.bUseShipCameraOffset"}; }
	BitFieldValue<bool, unsigned char> bUsesSubControls() { return { this, "APrimalStructureSeating_DriverSeat.bUsesSubControls"}; }
	BitFieldValue<bool, unsigned char> bIsRowingSeat() { return { this, "APrimalStructureSeating_DriverSeat.bIsRowingSeat"}; }
	BitFieldValue<bool, unsigned char> bOarTracesIgnoreHull() { return { this, "APrimalStructureSeating_DriverSeat.bOarTracesIgnoreHull"}; }
	BitFieldValue<bool, unsigned char> bIsRowingSeatActive() { return { this, "APrimalStructureSeating_DriverSeat.bIsRowingSeatActive"}; }
	BitFieldValue<bool, unsigned char> bRowingSeatPlacementRequiresBothSides() { return { this, "APrimalStructureSeating_DriverSeat.bRowingSeatPlacementRequiresBothSides"}; }
	BitFieldValue<bool, unsigned char> bUsesCustomThrottle() { return { this, "APrimalStructureSeating_DriverSeat.bUsesCustomThrottle"}; }
	BitFieldValue<bool, unsigned char> bUsesCustomSteering() { return { this, "APrimalStructureSeating_DriverSeat.bUsesCustomSteering"}; }
	BitFieldValue<bool, unsigned char> bLastRowSuccess() { return { this, "APrimalStructureSeating_DriverSeat.bLastRowSuccess"}; }
	BitFieldValue<bool, unsigned char> bUsingSteeringAnimation() { return { this, "APrimalStructureSeating_DriverSeat.bUsingSteeringAnimation"}; }
	BitFieldValue<bool, unsigned char> bWantsToTurnSails() { return { this, "APrimalStructureSeating_DriverSeat.bWantsToTurnSails"}; }
	BitFieldValue<bool, unsigned char> bAllowCaptainOrders() { return { this, "APrimalStructureSeating_DriverSeat.bAllowCaptainOrders"}; }
	BitFieldValue<bool, unsigned char> bSeatOnlyAllowsCaptainOrders() { return { this, "APrimalStructureSeating_DriverSeat.bSeatOnlyAllowsCaptainOrders"}; }
	BitFieldValue<bool, unsigned char> bAttackMyTargetEnabled() { return { this, "APrimalStructureSeating_DriverSeat.bAttackMyTargetEnabled"}; }
	BitFieldValue<bool, unsigned char> bManualFireEnabled() { return { this, "APrimalStructureSeating_DriverSeat.bManualFireEnabled"}; }
	BitFieldValue<bool, unsigned char> bHideSailsForAimingCaptainOrders() { return { this, "APrimalStructureSeating_DriverSeat.bHideSailsForAimingCaptainOrders"}; }
	BitFieldValue<bool, unsigned char> bWasForceTPVLastFrame() { return { this, "APrimalStructureSeating_DriverSeat.bWasForceTPVLastFrame"}; }
	BitFieldValue<bool, unsigned char> bForceDrawFloatingHUD() { return { this, "APrimalStructureSeating_DriverSeat.bForceDrawFloatingHUD"}; }
	BitFieldValue<bool, unsigned char> bToggleOpenGunports() { return { this, "APrimalStructureSeating_DriverSeat.bToggleOpenGunports"}; }
	BitFieldValue<bool, unsigned char> bCheckToDisableManualFire() { return { this, "APrimalStructureSeating_DriverSeat.bCheckToDisableManualFire"}; }
	BitFieldValue<bool, unsigned char> bPressedLB() { return { this, "APrimalStructureSeating_DriverSeat.bPressedLB"}; }
	BitFieldValue<bool, unsigned char> bDebugAutoPilot() { return { this, "APrimalStructureSeating_DriverSeat.bDebugAutoPilot"}; }
	BitFieldValue<bool, unsigned char> bAutoPilotActive() { return { this, "APrimalStructureSeating_DriverSeat.bAutoPilotActive"}; }
	BitFieldValue<bool, unsigned char> bAutoPilot_FollowWind() { return { this, "APrimalStructureSeating_DriverSeat.bAutoPilot_FollowWind"}; }
	BitFieldValue<bool, unsigned char> bAutoPilot_HasReachedHeading() { return { this, "APrimalStructureSeating_DriverSeat.bAutoPilot_HasReachedHeading"}; }

	UParticleSystem*& RowingVFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureSeating_DriverSeat.RowingVFX"); }
	USoundCue*& RowingSFXField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating_DriverSeat.RowingSFX"); }
	UAnimMontage*& RowingMontage_LeftField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Left"); }
	UAnimMontage*& RowingMontage_Left_ReverseField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Left_Reverse"); }
	UAnimMontage*& RowingMontage_RightField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Right"); }
	UAnimMontage*& RowingMontage_Right_ReverseField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Right_Reverse"); }
	UStaticMeshComponent*& MainOarField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeating_DriverSeat.MainOar"); }
	USceneComponent*& MainOar_BottomField() { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureSeating_DriverSeat.MainOar_Bottom"); }
	UMusicPlayerComponent*& MusicPlayerField() { return *GetNativePointerField<UMusicPlayerComponent**>(this, "APrimalStructureSeating_DriverSeat.MusicPlayer"); }
	AActor*& CurrentMyTargetField() { return *GetNativePointerField<AActor**>(this, "APrimalStructureSeating_DriverSeat.CurrentMyTarget"); }
	AActor*& LastMyTargetField() { return *GetNativePointerField<AActor**>(this, "APrimalStructureSeating_DriverSeat.LastMyTarget"); }
	APrimalEmitterSpawnable*& CurrentManualFireEmitterField() { return *GetNativePointerField<APrimalEmitterSpawnable**>(this, "APrimalStructureSeating_DriverSeat.CurrentManualFireEmitter"); }
	AActor*& WindSourceRefField() { return *GetNativePointerField<AActor**>(this, "APrimalStructureSeating_DriverSeat.WindSourceRef"); }

	TArray<float, TSizedDefaultAllocator<32> >& SeatThrottleInputsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating_DriverSeat.SeatThrottleInputs"); }
	TArray<float, TSizedDefaultAllocator<32> >& SeatSteeringInputsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating_DriverSeat.SeatSteeringInputs"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& LastDriverField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "APrimalStructureSeating_DriverSeat.LastDriver"); }
	UE::Math::TVector<double>& ForceFirstPersonCameraOffsetStructureTracesStartField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonCameraOffsetStructureTracesStart"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& ForceFirstPersonCameraOffsetStructureTracesEndField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonCameraOffsetStructureTracesEnd"); }
	UE::Math::TVector<double>& LastRowLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating_DriverSeat.LastRowLocation"); }
	UE::Math::TVector<double>& LastRowImpulseField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating_DriverSeat.LastRowImpulse"); }
	FName& LeftHandSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.LeftHandSocketName"); }
	FName& RightHandSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.RightHandSocketName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& SteeringSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating_DriverSeat.SteeringSockets"); }
	TArray<FName, TSizedDefaultAllocator<32> >& RightSteeringSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating_DriverSeat.RightSteeringSockets"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LeftSteeringSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating_DriverSeat.LeftSteeringSockets"); }
	FTimerHandle& OnHoldingReloadHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureSeating_DriverSeat.OnHoldingReloadHandle"); }
	UE::Math::TVector2<double>& AutoPilot_DesiredDirField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_DesiredDir"); }
	FColor& AutoPilot_FollowWindTextColorField() { return *GetNativePointerField<FColor*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindTextColor"); }
	UE::Math::TVector<double>* AutoPilot_GetHeadingFromAngleIndex_Global(UE::Math::TVector<double>* result, int AngleIndex) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, int>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_GetHeadingFromAngleIndex_Global(int)", result, AngleIndex); }
	UE::Math::TVector<double>* GetTPVCameraOffset(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureSeating_DriverSeat.GetTPVCameraOffset()", result); }
	UE::Math::TVector<double>* GetOarBottomLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureSeating_DriverSeat.GetOarBottomLocation()", result); }
	void GetHandIKEnabled(bool& bLeft, bool& bRight) { NativeCall<void, bool&, bool&>(this, "APrimalStructureSeating_DriverSeat.GetHandIKEnabled(bool&,bool&)", bLeft, bRight); }
	APrimalShip* GetAttachedToShip() { return NativeCall<APrimalShip*>(this, "APrimalStructureSeating_DriverSeat.GetAttachedToShip()"); }
	void Multi_OnRow_Implementation(bool bSuccess, float Interval, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Impulse) { if (!Location) throw std::invalid_argument("Null native value parameter"); if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalStructureSeating_DriverSeat.Multi_OnRow_Implementation(bool,float,UE::Math::TVector<double>,UE::Math::TVector<double>)", bSuccess, Interval, *Location, *Impulse); }
	void BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*, TSizedDefaultAllocator<32> >& outActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureSeating_DriverSeat.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", outActors); }
	UE::Math::TVector<double>* GetCameraModifiedOriginLocationOffset_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureSeating_DriverSeat.GetCameraModifiedOriginLocationOffset_Implementation()", result); }
	void AutoPilot_UpdateDesiredDir(UE::Math::TVector2<double>* newDir) { if (!newDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_UpdateDesiredDir(UE::Math::TVector2<double>)", *newDir); }
	UE::Math::TVector<double>* AutoPilot_GetHeadingFromAngleIndex_Ship(UE::Math::TVector<double>* result, int AngleIndex) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, int>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_GetHeadingFromAngleIndex_Ship(int)", result, AngleIndex); }
	bool GetCameraPivotOverride(UE::Math::TVector<double>& OutPivot, float& OutArmLength, bool& bSkipCameraCollision) { return NativeCall<bool, UE::Math::TVector<double>&, float&, bool&>(this, "APrimalStructureSeating_DriverSeat.GetCameraPivotOverride(UE::Math::TVector<double>&,float&,bool&)", OutPivot, OutArmLength, bSkipCameraCollision); }
	void UpdateManualFireLocation(UE::Math::TVector<double>* ManualFireLocation) { if (!ManualFireLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "APrimalStructureSeating_DriverSeat.UpdateManualFireLocation(UE::Math::TVector<double>)", *ManualFireLocation); }
	void OnRow(bool bSuccess, float Interval, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Impulse) { if (!Location) throw std::invalid_argument("Null native value parameter"); if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalStructureSeating_DriverSeat.OnRow(bool,float,UE::Math::TVector<double>,UE::Math::TVector<double>)", bSuccess, Interval, *Location, *Impulse); }
	void AutoPilot_Start(UE::Math::TVector2<double>* newDir) { if (!newDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Start(UE::Math::TVector2<double>)", *newDir); }
	void Multi_OnRow(bool bSuccess, float Interval, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Impulse) { if (!Location) throw std::invalid_argument("Null native value parameter"); if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "APrimalStructureSeating_DriverSeat.Multi_OnRow(bool,float,UE::Math::TVector<double>,UE::Math::TVector<double>)", bSuccess, Interval, *Location, *Impulse); }
	FColor GetCrosshairColorOverride_Implementation(FColor& originalColor) { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, FColor &>(this, "APrimalStructureSeating_DriverSeat.GetCrosshairColorOverride_Implementation(FColor&)", AsaReturnPointer, originalColor); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
};
