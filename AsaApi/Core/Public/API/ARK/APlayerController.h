#pragma once
#include "RestoredNativeForward.h"
#include "BulkForward.h"


struct APlayerController : APrimalController, PlayerControllerExtensions
{
	// Fields

	TObjectPtr<UPlayer>& PlayerField() { return *GetNativePointerField<TObjectPtr<UPlayer>*>(this, "APlayerController.Player"); }
	TObjectPtr<APawn>& AcknowledgedPawnField() { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerController.AcknowledgedPawn"); }
	TObjectPtr<UInterpTrackInstDirector>& ControllingDirTrackInstField() { return *GetNativePointerField<TObjectPtr<UInterpTrackInstDirector>*>(this, "APlayerController.ControllingDirTrackInst"); }
	TObjectPtr<AHUD>& MyHUDField() { return *GetNativePointerField<TObjectPtr<AHUD>*>(this, "APlayerController.MyHUD"); }
	TObjectPtr<APlayerCameraManager>& PlayerCameraManagerField() { return *GetNativePointerField<TObjectPtr<APlayerCameraManager>*>(this, "APlayerController.PlayerCameraManager"); }
	TSubclassOf<APlayerCameraManager>& PlayerCameraManagerClassField() { return *GetNativePointerField<TSubclassOf<APlayerCameraManager>*>(this, "APlayerController.PlayerCameraManagerClass"); }
	UE::Math::TRotator<double>& TargetViewRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APlayerController.TargetViewRotation"); }
	UE::Math::TRotator<double>& BlendedTargetViewRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APlayerController.BlendedTargetViewRotation"); }
	float& SmoothTargetViewRotationSpeedField() { return *GetNativePointerField<float*>(this, "APlayerController.SmoothTargetViewRotationSpeed"); }
	float& LocalPlayerCachedLODDistanceFactorField() { return *GetNativePointerField<float*>(this, "APlayerController.LocalPlayerCachedLODDistanceFactor"); }
	TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& HiddenActorsField() { return *GetNativePointerField<TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "APlayerController.HiddenActors"); }
	TArray<TWeakObjectPtr<UPrimitiveComponent>, TSizedDefaultAllocator<32> >& HiddenPrimitiveComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPrimitiveComponent>, TSizedDefaultAllocator<32> >*>(this, "APlayerController.HiddenPrimitiveComponents"); }
	long double& LastSpectatorStateSynchTimeField() { return *GetNativePointerField<long double*>(this, "APlayerController.LastSpectatorStateSynchTime"); }
	UE::Math::TVector<double>& LastSpectatorSyncLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerController.LastSpectatorSyncLocation"); }
	UE::Math::TRotator<double>& LastSpectatorSyncRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APlayerController.LastSpectatorSyncRotation"); }
	int& ClientCapField() { return *GetNativePointerField<int*>(this, "APlayerController.ClientCap"); }
	TObjectPtr<UCheatManager>& CheatManagerField() { return *GetNativePointerField<TObjectPtr<UCheatManager>*>(this, "APlayerController.CheatManager"); }
	TSubclassOf<UCheatManager>& CheatClassField() { return *GetNativePointerField<TSubclassOf<UCheatManager>*>(this, "APlayerController.CheatClass"); }
	TObjectPtr<UPlayerInput>& PlayerInputField() { return *GetNativePointerField<TObjectPtr<UPlayerInput>*>(this, "APlayerController.PlayerInput"); }
	TArray<FActiveForceFeedbackEffect, TSizedDefaultAllocator<32> >& ActiveForceFeedbackEffectsField() { return *GetNativePointerField<TArray<FActiveForceFeedbackEffect, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ActiveForceFeedbackEffects"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TSubclassOf<UAsyncPhysicsData>& AsyncPhysicsDataClassField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TObjectPtr<UAsyncPhysicsInputComponent>& AsyncPhysicsDataComponentField();
	//TSortedMap<unsigned __int64, APlayerController::FDynamicForceFeedbackAction, TSizedDefaultAllocator<32>, TLess<unsigned __int64 const > >& DynamicForceFeedbacksField() { return *GetNativePointerField<TSortedMap<unsigned __int64, APlayerController::FDynamicForceFeedbackAction, TSizedDefaultAllocator<32>, TLess<unsigned __int64 const > >*>(this, "APlayerController.DynamicForceFeedbacks"); }
	TSortedMap<int, FDynamicForceFeedbackDetails*, TSizedDefaultAllocator<32>, TLess<int const > >& LatentDynamicForceFeedbacksField() { return *GetNativePointerField<TSortedMap<int, FDynamicForceFeedbackDetails*, TSizedDefaultAllocator<32>, TLess<int const > >*>(this, "APlayerController.LatentDynamicForceFeedbacks"); }
	TSharedPtr<FActiveHapticFeedbackEffect>& ActiveHapticEffect_LeftField() { return *GetNativePointerField<TSharedPtr<FActiveHapticFeedbackEffect>*>(this, "APlayerController.ActiveHapticEffect_Left"); }
	TSharedPtr<FActiveHapticFeedbackEffect>& ActiveHapticEffect_RightField() { return *GetNativePointerField<TSharedPtr<FActiveHapticFeedbackEffect>*>(this, "APlayerController.ActiveHapticEffect_Right"); }
	TSharedPtr<FActiveHapticFeedbackEffect>& ActiveHapticEffect_GunField() { return *GetNativePointerField<TSharedPtr<FActiveHapticFeedbackEffect>*>(this, "APlayerController.ActiveHapticEffect_Gun"); }
	TSharedPtr<FActiveHapticFeedbackEffect>& ActiveHapticEffect_HMDField() { return *GetNativePointerField<TSharedPtr<FActiveHapticFeedbackEffect>*>(this, "APlayerController.ActiveHapticEffect_HMD"); }
	FForceFeedbackValues& ForceFeedbackValuesField() { return *GetNativePointerField<FForceFeedbackValues*>(this, "APlayerController.ForceFeedbackValues"); }
	TArray<FName, TSizedDefaultAllocator<32> >& PendingMapChangeLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APlayerController.PendingMapChangeLevelNames"); }
	FPlayerMuteList& MuteListField() { return *GetNativePointerField<FPlayerMuteList*>(this, "APlayerController.MuteList"); }
	TObjectPtr<UNetConnection>& PendingSwapConnectionField() { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "APlayerController.PendingSwapConnection"); }
	TObjectPtr<UNetConnection>& NetConnectionField() { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "APlayerController.NetConnection"); }
	UE::Math::TRotator<double>& RotationInputField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APlayerController.RotationInput"); }
	float& InputYawScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "APlayerController.InputYawScale_DEPRECATED"); }
	float& InputPitchScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "APlayerController.InputPitchScale_DEPRECATED"); }
	float& InputRollScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "APlayerController.InputRollScale_DEPRECATED"); }
	FColor& StreamingSourceDebugColorField() { return *GetNativePointerField<FColor*>(this, "APlayerController.StreamingSourceDebugColor"); }
	//TArray<FStreamingSourceShape, TSizedDefaultAllocator<32> >& StreamingSourceShapesField() { return *GetNativePointerField<TArray<FStreamingSourceShape, TSizedDefaultAllocator<32> >*>(this, "APlayerController.StreamingSourceShapes"); }
	float& ForceFeedbackScaleField() { return *GetNativePointerField<float*>(this, "APlayerController.ForceFeedbackScale"); }
	TArray<FKey, TSizedDefaultAllocator<32> >& ClickEventKeysField() { return *GetNativePointerField<TArray<FKey, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ClickEventKeys"); }
	//TEnumAsByte<enum EMouseCursor::Type>& CurrentMouseCursorField() { return *GetNativePointerField<TEnumAsByte<enum EMouseCursor::Type>*>(this, "APlayerController.CurrentMouseCursor"); }
	TEnumAsByte<enum ECollisionChannel>& CurrentClickTraceChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "APlayerController.CurrentClickTraceChannel"); }
	float& HitResultTraceDistanceField() { return *GetNativePointerField<float*>(this, "APlayerController.HitResultTraceDistance"); }
	unsigned __int16& SeamlessTravelCountField() { return *GetNativePointerField<unsigned __int16*>(this, "APlayerController.SeamlessTravelCount"); }
	unsigned __int16& LastCompletedSeamlessTravelCountField() { return *GetNativePointerField<unsigned __int16*>(this, "APlayerController.LastCompletedSeamlessTravelCount"); }
	TArray<FName, TSizedDefaultAllocator<32> >& NetConditionGroupsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APlayerController.NetConditionGroups"); }
	TWeakObjectPtr<UPrimitiveComponent>& CurrentClickablePrimitiveField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent>*>(this, "APlayerController.CurrentClickablePrimitive"); }
	FieldArray<TWeakObjectPtr<UPrimitiveComponent>, 11> CurrentTouchablePrimitivesField() { return { this, "APlayerController.CurrentTouchablePrimitives" }; }
	TArray<TWeakObjectPtr<UInputComponent>, TSizedDefaultAllocator<32> >& CurrentInputStackField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UInputComponent>, TSizedDefaultAllocator<32> >*>(this, "APlayerController.CurrentInputStack"); }
	TObjectPtr<UInputComponent>& InactiveStateInputComponentField() { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APlayerController.InactiveStateInputComponent"); }
	//TSharedPtr<SVirtualJoystick, 1>& VirtualJoystickField() { return *GetNativePointerField<TSharedPtr<SVirtualJoystick, 1>*>(this, "APlayerController.VirtualJoystick"); }
	//TObjectPtr<UTouchInterface>& CurrentTouchInterfaceField() { return *GetNativePointerField<TObjectPtr<UTouchInterface>*>(this, "APlayerController.CurrentTouchInterface"); }
	TSubclassOf<UPlayerInput>& OverridePlayerInputClassField() { return *GetNativePointerField<TSubclassOf<UPlayerInput>*>(this, "APlayerController.OverridePlayerInputClass"); }
	FTimerHandle& TimerHandle_UnFreezeField() { return *GetNativePointerField<FTimerHandle*>(this, "APlayerController.TimerHandle_UnFreeze"); }
	FTimerHandle& TimerHandle_DelayedPrepareMapChangeField() { return *GetNativePointerField<FTimerHandle*>(this, "APlayerController.TimerHandle_DelayedPrepareMapChange"); }
	FTimerHandle& TimerHandle_ClientCommitMapChangeField() { return *GetNativePointerField<FTimerHandle*>(this, "APlayerController.TimerHandle_ClientCommitMapChange"); }
	TWeakObjectPtr<USceneComponent>& AudioListenerComponentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent>*>(this, "APlayerController.AudioListenerComponent"); }
	TWeakObjectPtr<USceneComponent>& AudioListenerAttenuationComponentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent>*>(this, "APlayerController.AudioListenerAttenuationComponent"); }
	UE::Math::TVector<double>& AudioListenerLocationOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerController.AudioListenerLocationOverride"); }
	UE::Math::TRotator<double>& AudioListenerRotationOverrideField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APlayerController.AudioListenerRotationOverride"); }
	UE::Math::TVector<double>& AudioListenerAttenuationOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerController.AudioListenerAttenuationOverride"); }
	TObjectPtr<ASpectatorPawn>& SpectatorPawnField() { return *GetNativePointerField<TObjectPtr<ASpectatorPawn>*>(this, "APlayerController.SpectatorPawn"); }
	long double& LastRetryPlayerTimeField() { return *GetNativePointerField<long double*>(this, "APlayerController.LastRetryPlayerTime"); }
	UE::Math::TVector<double>& SpawnLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APlayerController.SpawnLocation"); }
	float& LastMovementUpdateTimeField() { return *GetNativePointerField<float*>(this, "APlayerController.LastMovementUpdateTime"); }
	float& LastMovementHitchField() { return *GetNativePointerField<float*>(this, "APlayerController.LastMovementHitch"); }
	//APlayerController::FInputCmdBuffer& InputBufferField() { return *GetNativePointerField<APlayerController::FInputCmdBuffer*>(this, "APlayerController.InputBuffer"); }
	//APlayerController::FClientFrameInfo& ClientFrameInfoField() { return *GetNativePointerField<APlayerController::FClientFrameInfo*>(this, "APlayerController.ClientFrameInfo"); }
	//APlayerController::FServerFrameInfo& ServerFrameInfoField() { return *GetNativePointerField<APlayerController::FServerFrameInfo*>(this, "APlayerController.ServerFrameInfo"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& LocalToServerAsyncPhysicsTickOffsetField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& ClientLatestCorrectedOffsetServerStepField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& ClientLatestAsyncPhysicsStepSentField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& ClientLatestTimeDilationServerStepField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& ServerAsyncPhysicsTimeDilationToSendField();
	//FAsyncPhysicsTimestamp& ServerLatestTimestampToCorrectField() { return *GetNativePointerField<FAsyncPhysicsTimestamp*>(this, "APlayerController.ServerLatestTimestampToCorrect"); }
	//TArray<FAsyncPhysicsTimestamp, TSizedDefaultAllocator<32> >& ServerPendingTimestampsField() { return *GetNativePointerField<TArray<FAsyncPhysicsTimestamp, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ServerPendingTimestamps"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bShortConnectTimeOut() { return { this, "APlayerController.bShortConnectTimeOut" }; }
	BitFieldValue<bool, unsigned __int32> bCinematicMode() { return { this, "APlayerController.bCinematicMode" }; }
	BitFieldValue<bool, unsigned __int32> bHidePawnInCinematicMode() { return { this, "APlayerController.bHidePawnInCinematicMode" }; }
	BitFieldValue<bool, unsigned __int32> bIsUsingStreamingVolumes() { return { this, "APlayerController.bIsUsingStreamingVolumes" }; }
	BitFieldValue<bool, unsigned __int32> bPlayerIsWaiting() { return { this, "APlayerController.bPlayerIsWaiting" }; }
	BitFieldValue<bool, unsigned __int32> bShowMouseCursor() { return { this, "APlayerController.bShowMouseCursor" }; }
	BitFieldValue<bool, unsigned __int32> bEnableClickEvents() { return { this, "APlayerController.bEnableClickEvents" }; }
	BitFieldValue<bool, unsigned __int32> bEnableTouchEvents() { return { this, "APlayerController.bEnableTouchEvents" }; }
	BitFieldValue<bool, unsigned __int32> bEnableMouseOverEvents() { return { this, "APlayerController.bEnableMouseOverEvents" }; }
	BitFieldValue<bool, unsigned __int32> bEnableTouchOverEvents() { return { this, "APlayerController.bEnableTouchOverEvents" }; }
	BitFieldValue<bool, unsigned __int32> bForceFeedbackEnabled() { return { this, "APlayerController.bForceFeedbackEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bEnableMotionControls() { return { this, "APlayerController.bEnableMotionControls" }; }
	BitFieldValue<bool, unsigned __int32> bEnableStreamingSource() { return { this, "APlayerController.bEnableStreamingSource" }; }
	BitFieldValue<bool, unsigned __int32> bStreamingSourceShouldActivate() { return { this, "APlayerController.bStreamingSourceShouldActivate" }; }
	BitFieldValue<bool, unsigned __int32> bStreamingSourceShouldBlockOnSlowStreaming() { return { this, "APlayerController.bStreamingSourceShouldBlockOnSlowStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bCinemaDisableInputMove() { return { this, "APlayerController.bCinemaDisableInputMove" }; }
	BitFieldValue<bool, unsigned __int32> bCinemaDisableInputLook() { return { this, "APlayerController.bCinemaDisableInputLook" }; }
	BitFieldValue<bool, unsigned __int32> bShouldPerformFullTickWhenPaused() { return { this, "APlayerController.bShouldPerformFullTickWhenPaused" }; }
	BitFieldValue<bool, unsigned __int32> bInputEnabled() { return { this, "APlayerController.bInputEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideAudioListener() { return { this, "APlayerController.bOverrideAudioListener" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideAudioAttenuationListener() { return { this, "APlayerController.bOverrideAudioAttenuationListener" }; }
	BitFieldValue<bool, unsigned __int32> bDisableHaptics() { return { this, "APlayerController.bDisableHaptics" }; }
	BitFieldValue<bool, unsigned __int32> bShouldFlushInputWhenViewportFocusChanges() { return { this, "APlayerController.bShouldFlushInputWhenViewportFocusChanges" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APlayerController"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APlayerController"); }
	const UObject* GetStreamingSourceOwner() { return NativeCall<const UObject*>(this, "APlayerController.GetStreamingSourceOwner()"); }
	bool ShouldFlushKeysWhenViewportFocusChanges() { return NativeCall<bool>(this, "APlayerController.ShouldFlushKeysWhenViewportFocusChanges()"); }
	EStreamingSourcePriority GetStreamingSourcePriority() { return NativeCall<EStreamingSourcePriority>(this, "APlayerController.GetStreamingSourcePriority()"); }
	bool StreamingSourceShouldBlockOnSlowStreaming() { return NativeCall<bool>(this, "APlayerController.StreamingSourceShouldBlockOnSlowStreaming()"); }
	bool StreamingSourceShouldActivate() { return NativeCall<bool>(this, "APlayerController.StreamingSourceShouldActivate()"); }
	bool IsStreamingSourceEnabled() { return NativeCall<bool>(this, "APlayerController.IsStreamingSourceEnabled()"); }
	void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor*, bool>(this, "APlayerController.GameHasEnded(AActor*,bool)", EndGameFocus, bIsWinner); }
	//     unsigned __int64 GetSpectatorPawn() { return NativeCall<unsigned __int64>(this, "APlayerController.GetSpectatorPawn()"); }
	// FUNCTION MISSING: APlayerController.GetSpectatorPawn()
	void FlushPressedKeys() { NativeCall<void>(this, "APlayerController.FlushPressedKeys()"); }
	void ClientClearCameraLensEffects() { NativeCall<void>(this, "APlayerController.ClientClearCameraLensEffects()"); }
	void ClientCommitMapChange() { NativeCall<void>(this, "APlayerController.ClientCommitMapChange()"); }
	void ClientEnableNetworkVoice(bool bEnable) { NativeCall<void, bool>(this, "APlayerController.ClientEnableNetworkVoice(bool)", bEnable); }
	void ClientGotoState(FName NewState) { NativeCall<void, FName>(this, "APlayerController.ClientGotoState(FName)", NewState); }
	void ClientMessage(const FString* S, FName Type, float MsgLifeTime) { NativeCall<void, const FString*, FName, float>(this, "APlayerController.ClientMessage(FString&,FName,float)", S, Type, MsgLifeTime); }
	void ClientMutePlayer(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ClientMutePlayer(FUniqueNetIdRepl)", PlayerId); }
	void ClientRepObjRef(UObject* Object) { NativeCall<void, UObject*>(this, "APlayerController.ClientRepObjRef(UObject*)", Object); }
	//     void ClientRetryClientRestart(APawn* NewPawn) { NativeCall<void, APawn*>(this, "APlayerController.ClientRetryClientRestart(APawn*)", NewPawn); }
	// FUNCTION MISSING: APlayerController.ClientRetryClientRestart(APawn*)
	//     void ClientReturnToMainMenu(const FString* ReturnReason) { NativeCall<void, const FString*>(this, "APlayerController.ClientReturnToMainMenu(FString&)", ReturnReason); }
	// FUNCTION MISSING: APlayerController.ClientReturnToMainMenu(FString&)
	void ClientReturnToMainMenuWithTextReason(const FText* ReturnReason) { NativeCall<void, const FText*>(this, "APlayerController.ClientReturnToMainMenuWithTextReason(FText&)", ReturnReason); }
	//void ClientStartCameraShake(TSubclassOf<UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, UE::Math::TRotator<double>* UserPlaySpaceRot, float Speed) { NativeCall<void, TSubclassOf<UCameraShakeBase>, float, ECameraShakePlaySpace, UE::Math::TRotator<double>*, float>(this, "APlayerController.ClientStartCameraShake(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,UE::Math::TRotator<double>,float,bool)", Shake, Scale, PlaySpace, UserPlaySpaceRot, Speed); }
	//void ClientStopCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately) { NativeCall<void, TSubclassOf<UCameraShakeBase>, bool>(this, "APlayerController.ClientStopCameraShake(TSubclassOf<UCameraShakeBase>,bool)", Shake, bImmediately); }
	void ClientTeamMessage(APlayerState* SenderPlayerState, const FString* S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState*, const FString*, FName, float>(this, "APlayerController.ClientTeamMessage(APlayerState*,FString&,FName,float)", SenderPlayerState, S, Type, MsgLifeTime); }
	void ClientUnmutePlayer(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ClientUnmutePlayer(FUniqueNetIdRepl)", PlayerId); }
	void ClientUnmutePlayers(const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >* PlayerIds) { NativeCall<void, const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ClientUnmutePlayers(TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", PlayerIds); }
	//void ClientUpdateMultipleLevelsStreamingStatus(const TArray<FUpdateLevelStreamingLevelStatus, TSizedDefaultAllocator<32> >* LevelStatuses) { NativeCall<void, const TArray<FUpdateLevelStreamingLevelStatus, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus,TSizedDefaultAllocator<32>>&)", LevelStatuses); }
	void ClientVoiceHandshakeComplete() { NativeCall<void>(this, "APlayerController.ClientVoiceHandshakeComplete()"); }
	void ClientWasKicked(const FText* KickReason) { NativeCall<void, const FText*>(this, "APlayerController.ClientWasKicked(FText&)", KickReason); }
	void CopyStringToClipboard(const FString* S) { NativeCall<void, const FString*>(this, "APlayerController.CopyStringToClipboard(FString&)", S); }
	void ServerBlockPlayer(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerBlockPlayer(FUniqueNetIdRepl)", PlayerId); }
	void ServerMutePlayer(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerMutePlayer(FUniqueNetIdRepl)", PlayerId); }
	void ServerRestartPlayer() { NativeCall<void>(this, "APlayerController.ServerRestartPlayer()"); }
	void ServerUnblockPlayer(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerUnblockPlayer(FUniqueNetIdRepl)", PlayerId); }
	void ServerUnmutePlayer(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerUnmutePlayer(FUniqueNetIdRepl)", PlayerId); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPlayerController();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	float GetNetPriority(const UE::Math::TVector<double>* ViewPos, const UE::Math::TVector<double>* ViewDir, AActor* Viewer, AActor* ViewTarget, UActorChannel* InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, AActor*, AActor*, UActorChannel*, float, bool>(this, "APlayerController.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*,float,bool)", ViewPos, ViewDir, Viewer, ViewTarget, InChannel, Time, bLowBandwidth); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer*>(this, "APlayerController.GetNetOwningPlayer()"); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "APlayerController.GetNetConnection()"); }
	bool DestroyNetworkActorHandled() { return NativeCall<bool>(this, "APlayerController.DestroyNetworkActorHandled()"); }
	void FailedToSpawnPawn() { NativeCall<void>(this, "APlayerController.FailedToSpawnPawn()"); }
	FName* NetworkRemapPath(FName* result, FName InPackageName, bool bReading) { return NativeCall<FName*, FName*, FName, bool>(this, "APlayerController.NetworkRemapPath(FName,bool)", result, InPackageName, bReading); }
	//void ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex, FNetLevelVisibilityTransactionId TransactionId, bool bNewShouldBlockOnUnload) { NativeCall<void, FName, bool, bool, bool, int, FNetLevelVisibilityTransactionId, bool>(this, "APlayerController.ClientUpdateLevelStreamingStatus_Implementation(FName,bool,bool,bool,int,FNetLevelVisibilityTransactionId,bool)", PackageName, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad, LODIndex, TransactionId, bNewShouldBlockOnUnload); }
	//void ClientUpdateMultipleLevelsStreamingStatus_Implementation(const TArray<FUpdateLevelStreamingLevelStatus, TSizedDefaultAllocator<32> >* LevelStatuses) { NativeCall<void, const TArray<FUpdateLevelStreamingLevelStatus, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ClientUpdateMultipleLevelsStreamingStatus_Implementation(TArray<FUpdateLevelStreamingLevelStatus,TSizedDefaultAllocator<32>>&)", LevelStatuses); }
	//void ClientAckUpdateLevelVisibility_Implementation(FName PackageName, FNetLevelVisibilityTransactionId TransactionId, bool bClientAckCanMakeVisibleResponse) { NativeCall<void, FName, FNetLevelVisibilityTransactionId, bool>(this, "APlayerController.ClientAckUpdateLevelVisibility_Implementation(FName,FNetLevelVisibilityTransactionId,bool)", PackageName, TransactionId, bClientAckCanMakeVisibleResponse); }
	//void ServerUpdateLevelVisibility_Implementation(const FUpdateLevelVisibilityLevelInfo* LevelVisibility) { NativeCall<void, const FUpdateLevelVisibilityLevelInfo*>(this, "APlayerController.ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo&)", LevelVisibility); }
	//bool ServerUpdateLevelVisibility_Validate(const FUpdateLevelVisibilityLevelInfo* LevelVisibility) { return NativeCall<bool, const FUpdateLevelVisibilityLevelInfo*>(this, "APlayerController.ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo&)", LevelVisibility); }
	void SetNetSpeed(int NewSpeed) { NativeCall<void, int>(this, "APlayerController.SetNetSpeed(int)", NewSpeed); }
	FString* ConsoleCommand(FString* result, const FString* Cmd, bool bWriteToLog) { return NativeCall<FString*, FString*, const FString*, bool>(this, "APlayerController.ConsoleCommand(FString&,bool)", result, Cmd, bWriteToLog); }
	void CleanUpAudioComponents() { NativeCall<void>(this, "APlayerController.CleanUpAudioComponents()"); }
	AActor* GetViewTarget() { return NativeCall<AActor*>(this, "APlayerController.GetViewTarget()"); }
	//void SetViewTarget(AActor* NewViewTarget, FViewTargetTransitionParams* TransitionParams) { NativeCall<void, AActor*, FViewTargetTransitionParams*>(this, "APlayerController.SetViewTarget(AActor*,FViewTargetTransitionParams)", NewViewTarget, TransitionParams); }
	void AutoManageActiveCameraTarget(AActor* SuggestedTarget) { NativeCall<void, AActor*>(this, "APlayerController.AutoManageActiveCameraTarget(AActor*)", SuggestedTarget); }
	//ACameraActor* GetAutoActivateCameraForPlayer() { return NativeCall<ACameraActor*>(this, "APlayerController.GetAutoActivateCameraForPlayer()"); }
//     void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName) { NativeCall<void, FName>(this, "APlayerController.ServerNotifyLoadedWorld_Implementation(FName)", WorldPackageName); }
// FUNCTION MISSING: APlayerController.ServerNotifyLoadedWorld_Implementation(FName)
	bool HasClientLoadedCurrentWorld() { return NativeCall<bool>(this, "APlayerController.HasClientLoadedCurrentWorld()"); }
	//     void ForceSingleNetUpdateFor(AActor* Target) { NativeCall<void, AActor*>(this, "APlayerController.ForceSingleNetUpdateFor(AActor*)", Target); }
	// FUNCTION MISSING: APlayerController.ForceSingleNetUpdateFor(AActor*)
	void SmoothTargetViewRotation(APawn* TargetPawn, float DeltaSeconds) { NativeCall<void, APawn*, float>(this, "APlayerController.SmoothTargetViewRotation(APawn*,float)", TargetPawn, DeltaSeconds); }
	void InitInputSystem() { NativeCall<void>(this, "APlayerController.InitInputSystem()"); }
	void SafeRetryClientRestart() { NativeCall<void>(this, "APlayerController.SafeRetryClientRestart()"); }
	void ClientRetryClientRestart_Implementation(APawn* NewPawn) { NativeCall<void, APawn*>(this, "APlayerController.ClientRetryClientRestart_Implementation(APawn*)", NewPawn); }
	void ClientRestart_Implementation(APawn* NewPawn) { NativeCall<void, APawn*>(this, "APlayerController.ClientRestart_Implementation(APawn*)", NewPawn); }
	void OnPossess(APawn* PawnToPossess) { NativeCall<void, APawn*>(this, "APlayerController.OnPossess(APawn*)", PawnToPossess); }
	void AcknowledgePossession(APawn* P) { NativeCall<void, APawn*>(this, "APlayerController.AcknowledgePossession(APawn*)", P); }
	void ReceivedPlayer(TSubclassOf<ASpectatorPawn> SpectatorClass) { NativeCall<void, TSubclassOf<ASpectatorPawn>>(this, "APlayerController.ReceivedPlayer()", SpectatorClass); }
	void PostLoad() { NativeCall<void>(this, "APlayerController.PostLoad()"); }
	void GetActorEyesViewPoint(UE::Math::TVector<double>* out_Location, UE::Math::TRotator<double>* out_Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APlayerController.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", out_Location, out_Rotation); }
	void CalcCamera(float DeltaTime, FMinimalViewInfo* OutResult) { NativeCall<void, float, FMinimalViewInfo*>(this, "APlayerController.CalcCamera(float,FMinimalViewInfo&)", DeltaTime, OutResult); }
	void GetPlayerViewPoint(UE::Math::TVector<double>* out_Location, UE::Math::TRotator<double>* out_Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APlayerController.GetPlayerViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", out_Location, out_Rotation); }
	void UpdateRotation(float DeltaTime) { NativeCall<void, float>(this, "APlayerController.UpdateRotation(float)", DeltaTime); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerController.PostInitializeComponents()"); }
	void ServerShortTimeout_Implementation() { NativeCall<void>(this, "APlayerController.ServerShortTimeout_Implementation()"); }
	void AddCheats(bool bForce) { NativeCall<void, bool>(this, "APlayerController.AddCheats(bool)", bForce); }
	void EnableCheats(const FString* pass) { NativeCall<void, const FString*>(this, "APlayerController.EnableCheats(FString)", pass); }
	void SpawnDefaultHUD() { NativeCall<void>(this, "APlayerController.SpawnDefaultHUD()"); }
	void CreateTouchInterface() { NativeCall<void>(this, "APlayerController.CreateTouchInterface()"); }
	//TSharedPtr<SVirtualJoystick, 1>* CreateVirtualJoystick(TSharedPtr<SVirtualJoystick, 1>* result) { return NativeCall<TSharedPtr<SVirtualJoystick, 1> *, TSharedPtr<SVirtualJoystick, 1>*>(this, "APlayerController.CreateVirtualJoystick()", result); }
	void CleanupGameViewport() { NativeCall<void>(this, "APlayerController.CleanupGameViewport()"); }
	void GetViewportSize(int* SizeX, int* SizeY) { NativeCall<void, int*, int*>(this, "APlayerController.GetViewportSize(int&,int&)", SizeX, SizeY); }
	void Reset() { NativeCall<void>(this, "APlayerController.Reset()"); }
	void ClientReset_Implementation() { NativeCall<void>(this, "APlayerController.ClientReset_Implementation()"); }
	bool IsFrozen() { return NativeCall<bool>(this, "APlayerController.IsFrozen()"); }
	void ServerAcknowledgePossession_Implementation(APawn* P) { NativeCall<void, APawn*>(this, "APlayerController.ServerAcknowledgePossession_Implementation(APawn*)", P); }
	bool ServerAcknowledgePossession_Validate(APawn* P) { return NativeCall<bool, APawn*>(this, "APlayerController.ServerAcknowledgePossession_Validate(APawn*)", P); }
	void OnUnPossess() { NativeCall<void>(this, "APlayerController.OnUnPossess()"); }
	void ClientSetHUD_Implementation(TSubclassOf<AHUD> NewHUDClass) { NativeCall<void, TSubclassOf<AHUD>>(this, "APlayerController.ClientSetHUD_Implementation(TSubclassOf<AHUD>)", NewHUDClass); }
	void CleanupPlayerState() { NativeCall<void>(this, "APlayerController.CleanupPlayerState()"); }
	//void OnActorChannelOpen(FInBunch* InBunch, UNetConnection* Connection) { NativeCall<void, FInBunch*, UNetConnection*>(this, "APlayerController.OnActorChannelOpen(FInBunch&,UNetConnection*)", InBunch, Connection); }
	bool UseShortConnectTimeout() { return NativeCall<bool>(this, "APlayerController.UseShortConnectTimeout()"); }
	void OnSerializeNewActor(FOutBunch* OutBunch) { NativeCall<void, FOutBunch*>(this, "APlayerController.OnSerializeNewActor(FOutBunch&)", OutBunch); }
	void OnNetCleanup(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "APlayerController.OnNetCleanup(UNetConnection*)", Connection); }
	void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage> Message, int Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject) { NativeCall<void, TSubclassOf<ULocalMessage>, int, APlayerState*, APlayerState*, UObject*>(this, "APlayerController.ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,UObject*)", Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject); }
	void ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundBase*, float, float>(this, "APlayerController.ClientPlaySound_Implementation(USoundBase*,float,float)", Sound, VolumeMultiplier, PitchMultiplier); }
	void ClientMessage_Implementation(const FString* S, FName Type, float MsgLifeTime) { NativeCall<void, const FString*, FName, float>(this, "APlayerController.ClientMessage_Implementation(FString&,FName,float)", S, Type, MsgLifeTime); }
	void CopyStringToClipboard_Implementation(const FString* S) { NativeCall<void, const FString*>(this, "APlayerController.CopyStringToClipboard_Implementation(FString&)", S); }
	void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString* S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState*, const FString*, FName, float>(this, "APlayerController.ClientTeamMessage_Implementation(APlayerState*,FString&,FName,float)", SenderPlayerState, S, Type, MsgLifeTime); }
	void ServerToggleAILogging_Implementation() { NativeCall<void>(this, "APlayerController.ServerToggleAILogging_Implementation()"); }
	void PawnLeavingGame() { NativeCall<void>(this, "APlayerController.PawnLeavingGame()"); }
	void BeginPlay() { NativeCall<void>(this, "APlayerController.BeginPlay()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APlayerController.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Destroyed() { NativeCall<void>(this, "APlayerController.Destroyed()"); }
	void FOV(float F) { NativeCall<void, float>(this, "APlayerController.FOV(float)", F); }
	//void PreClientTravel(const FString* PendingURL, ETravelType TravelType, bool bIsSeamlessTravel) { NativeCall<void, const FString*, ETravelType, bool>(this, "APlayerController.PreClientTravel(FString&,ETravelType,bool)", PendingURL, TravelType, bIsSeamlessTravel); }
	void Camera(FName NewMode) { NativeCall<void, FName>(this, "APlayerController.Camera(FName)", NewMode); }
	void ServerCamera_Implementation(FName NewMode) { NativeCall<void, FName>(this, "APlayerController.ServerCamera_Implementation(FName)", NewMode); }
	bool ServerCamera_Validate(FName NewMode) { return NativeCall<bool, FName>(this, "APlayerController.ServerCamera_Validate(FName)", NewMode); }
	void ClientSetCameraMode_Implementation(FName NewCamMode) { NativeCall<void, FName>(this, "APlayerController.ClientSetCameraMode_Implementation(FName)", NewCamMode); }
	void SetCameraMode(FName NewCamMode) { NativeCall<void, FName>(this, "APlayerController.SetCameraMode(FName)", NewCamMode); }
	void ResetCameraMode() { NativeCall<void>(this, "APlayerController.ResetCameraMode()"); }
	//void ClientSetCameraFade_Implementation(__int64 bEnableFading, __int64 FadeColor, UE::Math::TVector2<double>* FadeAlpha) { NativeCall<void, bool, UE::Math::TVector2<double>*, float, bool, bool>(this, "APlayerController.ClientSetCameraFade_Implementation(bool,FColor,UE::Math::TVector2<double>,float,bool,bool)", bEnableFading, FadeColor, FadeAlpha); }
	void SendClientAdjustment() { NativeCall<void>(this, "APlayerController.SendClientAdjustment()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ServerRecvClientInputFrame_Implementation(int InRecvClientInputFrame, const TArray<unsigned char, TSizedDefaultAllocator<32> >* Data);
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ClientRecvServerAckFrame_Implementation(int LastProcessedInputFrame, int RecvServerFrameNumber, char TimeDilation);
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ClientRecvServerAckFrameDebug_Implementation(unsigned __int8 NumBuffered, float TargetNumBufferedCmds);
	void ClientCapBandwidth_Implementation(int Cap) { NativeCall<void, int>(this, "APlayerController.ClientCapBandwidth_Implementation(int)", Cap); }
	void UpdatePing(float InPing) { NativeCall<void, float>(this, "APlayerController.UpdatePing(float)", InPing); }
	void SetSpawnLocation(const UE::Math::TVector<double>* NewLocation) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APlayerController.SetSpawnLocation(UE::Math::TVector<double>&)", NewLocation); }
	void SetInitialLocationAndRotation(const UE::Math::TVector<double>* NewLocation, const UE::Math::TRotator<double>* NewRotation) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "APlayerController.SetInitialLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	//void ServerUpdateCamera_Implementation(FVector_NetQuantize* CamLoc, int CamPitchAndYaw) { NativeCall<void, FVector_NetQuantize*, int>(this, "APlayerController.ServerUpdateCamera_Implementation(FVector_NetQuantize,int)", CamLoc, CamPitchAndYaw); }
	void RestartLevel() { NativeCall<void>(this, "APlayerController.RestartLevel()"); }
	void LocalTravel(const FString* FURL) { NativeCall<void, const FString*>(this, "APlayerController.LocalTravel(FString&)", FURL); }
	void ClientReturnToMainMenuWithTextReason_Implementation(const FText* ReturnReason) { NativeCall<void, const FText*>(this, "APlayerController.ClientReturnToMainMenuWithTextReason_Implementation(FText&)", ReturnReason); }
	//     void ClientReturnToMainMenu_Implementation(const FString* ReturnReason) { NativeCall<void, const FString*>(this, "APlayerController.ClientReturnToMainMenu_Implementation(FString&)", ReturnReason); }
	// FUNCTION MISSING: APlayerController.ClientReturnToMainMenu_Implementation(FString&)
	bool SetPause(bool bPause, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>* CanUnpauseDelegate) { return NativeCall<bool, bool, TDelegate<bool __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "APlayerController.SetPause(bool,TDelegate<bool__cdecl(void)>)", bPause, CanUnpauseDelegate); }
	bool IsPaused() { return NativeCall<bool>(this, "APlayerController.IsPaused()"); }
	void Pause() { NativeCall<void>(this, "APlayerController.Pause()"); }
	bool ServerPause_Validate() { return NativeCall<bool>(this, "APlayerController.ServerPause_Validate()"); }
	void ServerPause_Implementation() { NativeCall<void>(this, "APlayerController.ServerPause_Implementation()"); }
	void SetName(const FString* S) { NativeCall<void, const FString*>(this, "APlayerController.SetName(FString&)", S); }
	void ServerChangeName_Implementation(const FString* S) { NativeCall<void, const FString*>(this, "APlayerController.ServerChangeName_Implementation(FString&)", S); }
	bool ServerChangeName_Validate(const FString* S) { return NativeCall<bool, const FString*>(this, "APlayerController.ServerChangeName_Validate(FString&)", S); }
	void SwitchLevel(const FString* FURL) { NativeCall<void, const FString*>(this, "APlayerController.SwitchLevel(FString&)", FURL); }
	void NotifyLoadedWorld(FName WorldPackageName, bool bFinalDest) { NativeCall<void, FName, bool>(this, "APlayerController.NotifyLoadedWorld(FName,bool)", WorldPackageName, bFinalDest); }
	void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor*, bool>(this, "APlayerController.ClientGameEnded_Implementation(AActor*,bool)", EndGameFocus, bIsWinner); }
	bool GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult* HitResult) { return NativeCall<bool, ETouchIndex::Type, ECollisionChannel, bool, FHitResult*>(this, "APlayerController.GetHitResultUnderFinger(ETouchIndex::Type,ECollisionChannel,bool,FHitResult&)", FingerIndex, TraceChannel, bTraceComplex, HitResult); }
	char ProjectWorldLocationToScreenWithDistance(UE::Math::TVector<double>* WorldLocation, UE::Math::TVector<double>* ScreenLocation, bool bPlayerViewportRelative) { return NativeCall<char, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APlayerController.ProjectWorldLocationToScreenWithDistance(UE::Math::TVector<double>,UE::Math::TVector<double>&,bool)", WorldLocation, ScreenLocation, bPlayerViewportRelative); }
	bool GetHitResultAtScreenPosition(const UE::Math::TVector2<double>* ScreenPosition, const ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult* HitResult) { return NativeCall<bool, const UE::Math::TVector2<double>*, const ECollisionChannel, bool, FHitResult*>(this, "APlayerController.GetHitResultAtScreenPosition(UE::Math::TVector2<double>,ECollisionChannel,bool,FHitResult&)", ScreenPosition, TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultAtScreenPosition(const UE::Math::TVector2<double>* ScreenPosition, const TArray<TEnumAsByte<EObjectTypeQuery>, TSizedDefaultAllocator<32> >* ObjectTypes, bool bTraceComplex, FHitResult* HitResult) { return NativeCall<bool, const UE::Math::TVector2<double>*, const TArray<TEnumAsByte<EObjectTypeQuery>, TSizedDefaultAllocator<32> >*, bool, FHitResult*>(this, "APlayerController.GetHitResultAtScreenPosition(UE::Math::TVector2<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,FHitResult&)", ScreenPosition, ObjectTypes, bTraceComplex, HitResult); }
	void PlayerTick(float DeltaTime) { NativeCall<void, float>(this, "APlayerController.PlayerTick(float)", DeltaTime); }
	bool InputKey(const FInputKeyParams& Params) { return NativeCall<bool, const FInputKeyParams&>(this, "APlayerController.InputKey(FInputKeyParams&)", Params); }
	bool InputKey(const FInputKeyEventArgs& Params) { return NativeCall<bool, const FInputKeyEventArgs&>(this, "APlayerController.InputKey(FInputKeyEventArgs&)", Params); }
	//bool InputKey(const FInputKeyParams* Params) { return NativeCall<bool, const FInputKeyParams*>(this, "APlayerController.InputKey(FInputKeyParams&)", Params); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool InputAxis(FKey* Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad);
	bool InputMotion(const UE::Math::TVector<double>* Tilt, const UE::Math::TVector<double>* RotationRate, const UE::Math::TVector<double>* Gravity, const UE::Math::TVector<double>* Acceleration) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(this, "APlayerController.InputMotion(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Tilt, RotationRate, Gravity, Acceleration); }
	bool ShouldShowMouseCursor() { return NativeCall<bool>(this, "APlayerController.ShouldShowMouseCursor()"); }
	void SetupInputComponent() { NativeCall<void>(this, "APlayerController.SetupInputComponent()"); }
	void BuildInputStack(TArray<UInputComponent*, TSizedDefaultAllocator<32> >* InputStack) { NativeCall<void, TArray<UInputComponent*, TSizedDefaultAllocator<32> >*>(this, "APlayerController.BuildInputStack(TArray<UInputComponent*,TSizedDefaultAllocator<32>>&)", InputStack); }
	void ProcessPlayerInput(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.ProcessPlayerInput(float,bool)", DeltaTime, bGamePaused); }
	void PostProcessInput(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.PostProcessInput(float,bool)", DeltaTime, bGamePaused); }
	void ResetIgnoreInputFlags() { NativeCall<void>(this, "APlayerController.ResetIgnoreInputFlags()"); }
	void SetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool>(this, "APlayerController.SetCinematicMode(bool,bool,bool)", bInCinematicMode, bAffectsMovement, bAffectsTurning); }
	void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing) { NativeCall<void, AActor*, float, EViewTargetBlendFunction, float, bool>(this, "APlayerController.SetViewTargetWithBlend(AActor*,float,EViewTargetBlendFunction,float,bool)", NewViewTarget, BlendTime, BlendFunc, BlendExp, bLockOutgoing); }
	//void ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams* TransitionParams) { NativeCall<void, AActor*, FViewTargetTransitionParams*>(this, "APlayerController.ClientSetViewTarget_Implementation(AActor*,FViewTargetTransitionParams)", A, TransitionParams); }
	void ServerVerifyViewTarget_Implementation() { NativeCall<void>(this, "APlayerController.ServerVerifyViewTarget_Implementation()"); }
	void SpawnPlayerCameraManager() { NativeCall<void>(this, "APlayerController.SpawnPlayerCameraManager()"); }
	void GetAudioListenerPosition(UE::Math::TVector<double>* OutLocation, UE::Math::TVector<double>* OutFrontDir, UE::Math::TVector<double>* OutRightDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APlayerController.GetAudioListenerPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OutLocation, OutFrontDir, OutRightDir); }
	bool GetAudioListenerAttenuationOverridePosition(UE::Math::TVector<double>* OutLocation) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "APlayerController.GetAudioListenerAttenuationOverridePosition(UE::Math::TVector<double>&)", OutLocation); }
	void ServerCheckClientPossession_Implementation() { NativeCall<void>(this, "APlayerController.ServerCheckClientPossession_Implementation()"); }
	void ServerCheckClientPossessionReliable_Implementation() { NativeCall<void>(this, "APlayerController.ServerCheckClientPossessionReliable_Implementation()"); }
	void SafeServerCheckClientPossession() { NativeCall<void>(this, "APlayerController.SafeServerCheckClientPossession()"); }
	void ServerSetSpectatorLocation_Implementation(UE::Math::TVector<double>* NewLoc, UE::Math::TRotator<double>* NewRot) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APlayerController.ServerSetSpectatorLocation_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", NewLoc, NewRot); }
	void ClientSetSpectatorWaiting_Implementation(bool bWaiting) { NativeCall<void, bool>(this, "APlayerController.ClientSetSpectatorWaiting_Implementation(bool)", bWaiting); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float GetDeprecatedInputYawScale();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float GetDeprecatedInputPitchScale();
	void ServerViewNextPlayer_Implementation() { NativeCall<void>(this, "APlayerController.ServerViewNextPlayer_Implementation()"); }
	void ServerViewPrevPlayer_Implementation() { NativeCall<void>(this, "APlayerController.ServerViewPrevPlayer_Implementation()"); }
	APlayerState* GetNextViewablePlayer(int dir) { return NativeCall<APlayerState*, int>(this, "APlayerController.GetNextViewablePlayer(int)", dir); }
	void ViewAPlayer(int dir) { NativeCall<void, int>(this, "APlayerController.ViewAPlayer(int)", dir); }
	//void ServerViewSelf_Implementation(FViewTargetTransitionParams* TransitionParams) { NativeCall<void, FViewTargetTransitionParams*>(this, "APlayerController.ServerViewSelf_Implementation(FViewTargetTransitionParams)", TransitionParams); }
	void StartFire(unsigned __int8 FireModeNum) { NativeCall<void, unsigned __int8>(this, "APlayerController.StartFire(unsignedchar)", FireModeNum); }
	bool NotifyServerReceivedClientData(APawn* InPawn, float TimeStamp) { return NativeCall<bool, APawn*, float>(this, "APlayerController.NotifyServerReceivedClientData(APawn*,float)", InPawn, TimeStamp); }
	void ServerRestartPlayer_Implementation() { NativeCall<void>(this, "APlayerController.ServerRestartPlayer_Implementation()"); }
	bool CanRestartPlayer() { return NativeCall<bool>(this, "APlayerController.CanRestartPlayer()"); }
	void ClientIgnoreMoveInput_Implementation(bool bIgnore) { NativeCall<void, bool>(this, "APlayerController.ClientIgnoreMoveInput_Implementation(bool)", bIgnore); }
	void ClientIgnoreLookInput_Implementation(bool bIgnore) { NativeCall<void, bool>(this, "APlayerController.ClientIgnoreLookInput_Implementation(bool)", bIgnore); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "APlayerController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>(this, "APlayerController.SetCinematicMode(bool,bool,bool,bool,bool)", bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) { NativeCall<void, bool, bool, bool, bool>(this, "APlayerController.ClientSetCinematicMode_Implementation(bool,bool,bool,bool)", bInCinematicMode, bAffectsMovement, bAffectsTurning, bAffectsHUD); }
	void ClientForceGarbageCollection_Implementation() { NativeCall<void>(this, "APlayerController.ClientForceGarbageCollection_Implementation()"); }
	//void LevelStreamingStatusChanged(ULevelStreaming* LevelObject, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, bool bNewShouldBlockOnUnload, int LODIndex) { NativeCall<void, ULevelStreaming*, bool, bool, bool, bool, int>(this, "APlayerController.LevelStreamingStatusChanged(ULevelStreaming*,bool,bool,bool,bool,int)", LevelObject, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad, bNewShouldBlockOnUnload, LODIndex); }
	void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast) { NativeCall<void, FName, bool, bool>(this, "APlayerController.ClientPrepareMapChange_Implementation(FName,bool,bool)", LevelName, bFirst, bLast); }
	void DelayedPrepareMapChange() { NativeCall<void>(this, "APlayerController.DelayedPrepareMapChange()"); }
	void ClientCommitMapChange_Implementation() { NativeCall<void>(this, "APlayerController.ClientCommitMapChange_Implementation()"); }
	void ClientCancelPendingMapChange_Implementation() { NativeCall<void>(this, "APlayerController.ClientCancelPendingMapChange_Implementation()"); }
	void ClientSetBlockOnAsyncLoading_Implementation() { NativeCall<void>(this, "APlayerController.ClientSetBlockOnAsyncLoading_Implementation()"); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*, TSizedDefaultAllocator<32> >* ActorList) { NativeCall<void, bool, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APlayerController.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)", bToEntry, ActorList); }
	void SeamlessTravelTo(APlayerController* NewPC) { NativeCall<void, APlayerController*>(this, "APlayerController.SeamlessTravelTo(APlayerController*)", NewPC); }
	void SeamlessTravelFrom(APlayerController* OldPC) { NativeCall<void, APlayerController*>(this, "APlayerController.SeamlessTravelFrom(APlayerController*)", OldPC); }
	void PostSeamlessTravel() { NativeCall<void>(this, "APlayerController.PostSeamlessTravel()"); }
	void GetStreamingSourceLocationAndRotation(UE::Math::TVector<double>* OutLocation, UE::Math::TRotator<double>* OutRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APlayerController.GetStreamingSourceLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutLocation, OutRotation); }
	//void GetStreamingSourceShapes(TArray<FStreamingSourceShape, TSizedDefaultAllocator<32> >* OutShapes) { NativeCall<void, TArray<FStreamingSourceShape, TSizedDefaultAllocator<32> >*>(this, "APlayerController.GetStreamingSourceShapes(TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>>&)", OutShapes); }
	//bool GetStreamingSources(TArray<FWorldPartitionStreamingSource, TSizedDefaultAllocator<32> >* OutStreamingSources) { return NativeCall<bool, TArray<FWorldPartitionStreamingSource, TSizedDefaultAllocator<32> >*>(this, "APlayerController.GetStreamingSources(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", OutStreamingSources); }
	//bool GetStreamingSourcesInternal(TArray<FWorldPartitionStreamingSource, TSizedDefaultAllocator<32> >* OutStreamingSources) { return NativeCall<bool, TArray<FWorldPartitionStreamingSource, TSizedDefaultAllocator<32> >*>(this, "APlayerController.GetStreamingSourcesInternal(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", OutStreamingSources); }
	void ClientEnableNetworkVoice_Implementation(bool bEnable) { NativeCall<void, bool>(this, "APlayerController.ClientEnableNetworkVoice_Implementation(bool)", bEnable); }
	void ToggleSpeaking(bool bSpeaking) { NativeCall<void, bool>(this, "APlayerController.ToggleSpeaking(bool)", bSpeaking); }
	void ServerMutePlayer_Implementation(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerMutePlayer_Implementation(FUniqueNetIdRepl)", PlayerId); }
	bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl* PlayerId) { return NativeCall<bool, FUniqueNetIdRepl*>(this, "APlayerController.ServerUnmutePlayer_Validate(FUniqueNetIdRepl)", PlayerId); }
	void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerUnmutePlayer_Implementation(FUniqueNetIdRepl)", PlayerId); }
	void ClientMutePlayer_Implementation(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ClientMutePlayer_Implementation(FUniqueNetIdRepl)", PlayerId); }
	void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ClientUnmutePlayer_Implementation(FUniqueNetIdRepl)", PlayerId); }
	void ClientUnmutePlayers_Implementation(const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >* PlayerIds) { NativeCall<void, const TArray<FUniqueNetIdRepl, TSizedDefaultAllocator<32> >*>(this, "APlayerController.ClientUnmutePlayers_Implementation(TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", PlayerIds); }
	void ServerBlockPlayer_Implementation(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerBlockPlayer_Implementation(FUniqueNetIdRepl)", PlayerId); }
	__int64 ServerUnblockPlayer_Validate(FUniqueNetIdRepl* PlayerId) { return NativeCall<__int64, FUniqueNetIdRepl*>(this, "APlayerController.ServerUnblockPlayer_Validate(FUniqueNetIdRepl)", PlayerId); }
	void ServerUnblockPlayer_Implementation(FUniqueNetIdRepl* PlayerId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerController.ServerUnblockPlayer_Implementation(FUniqueNetIdRepl)", PlayerId); }
	APlayerController* GetPlayerControllerForMuting(const FUniqueNetIdRepl* PlayerNetId) { return NativeCall<APlayerController*, const FUniqueNetIdRepl*>(this, "APlayerController.GetPlayerControllerForMuting(FUniqueNetIdRepl&)", PlayerNetId); }
	bool IsPlayerMuted(const FUniqueNetId* PlayerId) { return NativeCall<bool, const FUniqueNetId*>(this, "APlayerController.IsPlayerMuted(FUniqueNetId&)", PlayerId); }
	void ClientStartOnlineSession_Implementation() { NativeCall<void>(this, "APlayerController.ClientStartOnlineSession_Implementation()"); }
	void ClientEndOnlineSession_Implementation() { NativeCall<void>(this, "APlayerController.ClientEndOnlineSession_Implementation()"); }
	void ConsoleKey(FKey* Key) { NativeCall<void, FKey*>(this, "APlayerController.ConsoleKey(FKey)", Key); }
	void SendToConsole(const FString* Command) { NativeCall<void, const FString*>(this, "APlayerController.SendToConsole(FString&)", Command); }
	bool IsSplitscreenPlayer(int* OutSplitscreenPlayerIndex) { return NativeCall<bool, int*>(this, "APlayerController.IsSplitscreenPlayer(int*)", OutSplitscreenPlayerIndex); }
	int GetSplitscreenPlayerCount() { return NativeCall<int>(this, "APlayerController.GetSplitscreenPlayerCount()"); }
	void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups) { NativeCall<void, UMaterialInterface*, float, int>(this, "APlayerController.ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface*,float,int)", Material, ForceDuration, CinematicTextureGroups); }
	void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups) { NativeCall<void, AActor*, float, bool, int>(this, "APlayerController.ClientPrestreamTextures_Implementation(AActor*,float,bool,int)", ForcedActor, ForceDuration, bEnableStreaming, CinematicTextureGroups); }
	//void ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters* Params, float intensityMult) { NativeCall<void, UForceFeedbackEffect*, FForceFeedbackParameters*, float>(this, "APlayerController.ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect*,FForceFeedbackParameters,float)", ForceFeedbackEffect, Params, intensityMult); }
	//void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) { NativeCall<void, UForceFeedbackEffect*, FName>(this, "APlayerController.ClientStopForceFeedback_Implementation(UForceFeedbackEffect*,FName)", ForceFeedbackEffect, Tag); }
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> Action, FLatentActionInfo* LatentInfo) { NativeCall<void, float, float, bool, bool, bool, bool, TEnumAsByte<EDynamicForceFeedbackAction::Type>, FLatentActionInfo*>(this, "APlayerController.PlayDynamicForceFeedback(float,float,bool,bool,bool,bool,TEnumAsByte<EDynamicForceFeedbackAction::Type>,FLatentActionInfo)", Intensity, Duration, bAffectsLeftLarge, bAffectsLeftSmall, bAffectsRightLarge, bAffectsRightSmall, Action, LatentInfo); }
	//void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop) { NativeCall<void, UHapticFeedbackEffect_Base*, EControllerHand, float, bool>(this, "APlayerController.PlayHapticEffect(UHapticFeedbackEffect_Base*,EControllerHand,float,bool)", HapticEffect, Hand, Scale, bLoop); }
	void SetDisableHaptics(bool bNewDisabled) { NativeCall<void, bool>(this, "APlayerController.SetDisableHaptics(bool)", bNewDisabled); }
	void SetHapticsByValue(const float Frequency, const float Amplitude, EControllerHand Hand) { NativeCall<void, const float, const float, EControllerHand>(this, "APlayerController.SetHapticsByValue(float,float,EControllerHand)", Frequency, Amplitude, Hand); }
	void SetControllerLightColor(FColor Color) { NativeCall<void, FColor>(this, "APlayerController.SetControllerLightColor(FColor)", Color); }
	void ProcessForceFeedbackAndHaptics(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.ProcessForceFeedbackAndHaptics(float,bool)", DeltaTime, bGamePaused); }
	//void UpdateForceFeedback(IInputInterface* InputInterface, const int ControllerId) { NativeCall<void, IInputInterface*, const int>(this, "APlayerController.UpdateForceFeedback(IInputInterface*,int)", InputInterface, ControllerId); }
	//void ClientStartCameraShake_Implementation(TSubclassOf<UCameraShakeBase> Shake, float Scale, __int64 PlaySpace, UE::Math::TRotator<double>* UserPlaySpaceRot, float Speed) { NativeCall<void, TSubclassOf<UCameraShakeBase>, float, __int64, UE::Math::TRotator<double>*, float>(this, "APlayerController.ClientStartCameraShake_Implementation(TSubclassOf<UCameraShakeBase>,float,ECameraShakePlaySpace,UE::Math::TRotator<double>,float,bool)", Shake, Scale, PlaySpace, UserPlaySpaceRot, Speed); }
	//void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately) { NativeCall<void, TSubclassOf<UCameraShakeBase>, bool>(this, "APlayerController.ClientStopCameraShake_Implementation(TSubclassOf<UCameraShakeBase>,bool)", Shake, bImmediately); }
	//void ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate) { NativeCall<void, UCameraAnim*, float, float>(this, "APlayerController.ClientPlayCameraAnim_Implementation(UCameraAnim*,float,float,float,float,bool,bool,ECameraShakePlaySpace,UE::Math::TRotator<double>)", AnimToPlay, Scale, Rate); }
	//void ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop) { NativeCall<void, UCameraAnim*>(this, "APlayerController.ClientStopCameraAnim_Implementation(UCameraAnim*)", AnimToStop); }
	void ClientSpawnGenericCameraLensEffect_Implementation(TSubclassOf<AActor> LensEffectEmitterClass) { NativeCall<void, TSubclassOf<AActor>>(this, "APlayerController.ClientSpawnGenericCameraLensEffect_Implementation(TSubclassOf<AActor>)", LensEffectEmitterClass); }
	//void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) { NativeCall<void, TSubclassOf<AEmitterCameraLensEffectBase>>(this, "APlayerController.ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase>)", LensEffectEmitterClass); }
	void ClientClearCameraLensEffects_Implementation() { NativeCall<void>(this, "APlayerController.ClientClearCameraLensEffects_Implementation()"); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn*>(this, "APlayerController.SetPawn(APawn*)", InPawn); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APlayerController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void SetPlayer(UPlayer* InPlayer) { NativeCall<void, UPlayer*>(this, "APlayerController.SetPlayer(UPlayer*)", InPlayer); }
	ULocalPlayer* GetLocalPlayer() { return NativeCall<ULocalPlayer*>(this, "APlayerController.GetLocalPlayer()"); }
	//bool IsInViewportClient(UGameViewportClient* ViewportClient) { return NativeCall<bool, UGameViewportClient*>(this, "APlayerController.IsInViewportClient(UGameViewportClient*)", ViewportClient); }
	int GetInputIndex() { return NativeCall<int>(this, "APlayerController.GetInputIndex()"); }
	void TickPlayerInput(const float DeltaSeconds, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.TickPlayerInput(float,bool)", DeltaSeconds, bGamePaused); }
	void TickActor(float DeltaSeconds, ELevelTick TickType, FActorTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction*>(this, "APlayerController.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaSeconds, TickType, ThisTickFunction); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APlayerController.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	//void ClientTravel(const FString* URL, ETravelType TravelType, bool bSeamless, FGuid* MapPackageGuid) { NativeCall<void, const FString*, ETravelType, bool, FGuid*>(this, "APlayerController.ClientTravel(FString&,ETravelType,bool,FGuid)", URL, TravelType, bSeamless, MapPackageGuid); }
	//void ClientTravelInternal_Implementation(const FString* URL, ETravelType TravelType, bool bSeamless) { NativeCall<void, const FString*, ETravelType, bool>(this, "APlayerController.ClientTravelInternal_Implementation(FString&,ETravelType,bool,FGuid)", URL, TravelType, bSeamless); }
	FString* GetPlayerNetworkAddress(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerController.GetPlayerNetworkAddress()", result); }
	bool DefaultCanUnpause() { return NativeCall<bool>(this, "APlayerController.DefaultCanUnpause()"); }
	void StartSpectatingOnly() { NativeCall<void>(this, "APlayerController.StartSpectatingOnly()"); }
	void EndPlayingState() { NativeCall<void>(this, "APlayerController.EndPlayingState()"); }
	void BeginSpectatingState() { NativeCall<void>(this, "APlayerController.BeginSpectatingState()"); }
	void SetSpectatorPawn(ASpectatorPawn* NewSpectatorPawn) { NativeCall<void, ASpectatorPawn*>(this, "APlayerController.SetSpectatorPawn(ASpectatorPawn*)", NewSpectatorPawn); }
	ASpectatorPawn* SpawnSpectatorPawn() { return NativeCall<ASpectatorPawn*>(this, "APlayerController.SpawnSpectatorPawn()"); }
	void DestroySpectatorPawn() { NativeCall<void>(this, "APlayerController.DestroySpectatorPawn()"); }
	APawn* GetPawnOrSpectator() { return NativeCall<APawn*>(this, "APlayerController.GetPawnOrSpectator()"); }
	void UpdateStateInputComponents() { NativeCall<void>(this, "APlayerController.UpdateStateInputComponents()"); }
	void ChangeState(FName NewState) { NativeCall<void, FName>(this, "APlayerController.ChangeState(FName)", NewState); }
	void EndSpectatingState() { NativeCall<void>(this, "APlayerController.EndSpectatingState()"); }
	void BeginInactiveState() { NativeCall<void>(this, "APlayerController.BeginInactiveState()"); }
	float GetMinRespawnDelay() { return NativeCall<float>(this, "APlayerController.GetMinRespawnDelay()"); }
	void SetupInactiveStateInputComponent(UInputComponent* InComponent) { NativeCall<void, UInputComponent*>(this, "APlayerController.SetupInactiveStateInputComponent(UInputComponent*)", InComponent); }
	void PushInputComponent(UInputComponent* InInputComponent) { NativeCall<void, UInputComponent*>(this, "APlayerController.PushInputComponent(UInputComponent*)", InInputComponent); }
	bool PopInputComponent(UInputComponent* InInputComponent) { return NativeCall<bool, UInputComponent*>(this, "APlayerController.PopInputComponent(UInputComponent*)", InInputComponent); }
	bool IsInputComponentInStack(const UInputComponent* InInputComponent) { return NativeCall<bool, const UInputComponent*>(this, "APlayerController.IsInputComponentInStack(UInputComponent*)", InInputComponent); }
	void AddPitchInput(float Val) { NativeCall<void, float>(this, "APlayerController.AddPitchInput(float)", Val); }
	void AddYawInput(float Val) { NativeCall<void, float>(this, "APlayerController.AddYawInput(float)", Val); }
	void AddRollInput(float Val) { NativeCall<void, float>(this, "APlayerController.AddRollInput(float)", Val); }
	bool IsInputKeyDown(FKey* Key) { return NativeCall<bool, FKey*>(this, "APlayerController.IsInputKeyDown(FKey)", Key); }
	void GetInputMotionState(UE::Math::TVector<double>* Tilt, UE::Math::TVector<double>* RotationRate, UE::Math::TVector<double>* Gravity, UE::Math::TVector<double>* Acceleration) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APlayerController.GetInputMotionState(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Tilt, RotationRate, Gravity, Acceleration); }
	//     float GetInputKeyTimeDown(FKey* Key) { return NativeCall<float, FKey*>(this, "APlayerController.GetInputKeyTimeDown(FKey)", Key); }
	// FUNCTION MISSING: APlayerController.GetInputKeyTimeDown(FKey)
	bool GetMousePosition(float* LocationX, float* LocationY, bool bEvenWhenMouseNotAttached) { return NativeCall<bool, float*, float*, bool>(this, "APlayerController.GetMousePosition(float&,float&,bool)", LocationX, LocationY, bEvenWhenMouseNotAttached); }
	void GetInputMouseDelta(float* DeltaX, float* DeltaY) { NativeCall<void, float*, float*>(this, "APlayerController.GetInputMouseDelta(float&,float&)", DeltaX, DeltaY); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "APlayerController.EnableInput(APlayerController*)", PlayerController); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "APlayerController.DisableInput(APlayerController*)", PlayerController); }
	//void ActivateTouchInterface(UTouchInterface* NewTouchInterface) { NativeCall<void, UTouchInterface*>(this, "APlayerController.ActivateTouchInterface(UTouchInterface*)", NewTouchInterface); }
	//void SetVirtualJoystickVisibility(bool bVisible) { NativeCall<void, bool>(this, "APlayerController.SetVirtualJoystickVisibility(bool)", bVisible); }
	//void SetInputMode(const FInputModeDataBase* InData) { NativeCall<void, const FInputModeDataBase*>(this, "APlayerController.SetInputMode(FInputModeDataBase&)", InData); }
	//void UpdateCameraManager(float DeltaSeconds) { NativeCall<void, float>(this, "APlayerController.UpdateCameraManager(float)", DeltaSeconds); }
	//void BuildHiddenComponentList(const UE::Math::TVector<double>* ViewLocation, TSet<FPrimitiveComponentId, DefaultKeyFuncs<FPrimitiveComponentId, 0>, FDefaultSetAllocator>* HiddenComponentsOut) { NativeCall<void, const UE::Math::TVector<double>*, TSet<FPrimitiveComponentId, DefaultKeyFuncs<FPrimitiveComponentId, 0>, FDefaultSetAllocator>*>(this, "APlayerController.BuildHiddenComponentList(UE::Math::TVector<double>&,TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>&)", ViewLocation, HiddenComponentsOut); }
	//bool ShouldPerformFullTickWhenPaused() { return NativeCall<bool>(this, "APlayerController.ShouldPerformFullTickWhenPaused()"); }
	//FAsyncPhysicsTimestamp* GetAsyncPhysicsTimestamp(FAsyncPhysicsTimestamp* result, float DeltaSeconds) { return NativeCall<FAsyncPhysicsTimestamp*, FAsyncPhysicsTimestamp*, float>(this, "APlayerController.GetAsyncPhysicsTimestamp(float)", result, DeltaSeconds); }
	//void ServerSendLatestAsyncPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp Timestamp) { NativeCall<void, FAsyncPhysicsTimestamp>(this, "APlayerController.ServerSendLatestAsyncPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp)", Timestamp); }
	//void ClientCorrectionAsyncPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp Timestamp) { NativeCall<void, FAsyncPhysicsTimestamp>(this, "APlayerController.ClientCorrectionAsyncPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp)", Timestamp); }
	//void ClientAckTimeDilation_Implementation(float TimeDilation, int ServerStep) { NativeCall<void, float, int>(this, "APlayerController.ClientAckTimeDilation_Implementation(float,int)", TimeDilation, ServerStep); }
	//void AsyncPhysicsTickActor(float DeltaTime, float SimTime) { NativeCall<void, float, float>(this, "APlayerController.AsyncPhysicsTickActor(float,float)", DeltaTime, SimTime); }

	bool& bAutoManageActiveCameraTargetField() { return *GetNativePointerField<bool*>(this, "APlayerController.bAutoManageActiveCameraTarget"); }
	bool& bRenderPrimitiveComponentsField() { return *GetNativePointerField<bool*>(this, "APlayerController.bRenderPrimitiveComponents"); }
	unsigned char& NetPlayerIndexField() { return *GetNativePointerField<unsigned char*>(this, "APlayerController.NetPlayerIndex"); }
	EStreamingSourcePriority& StreamingSourcePriorityField() { return *GetNativePointerField<EStreamingSourcePriority*>(this, "APlayerController.StreamingSourcePriority"); }
	bool& bIsLocalPlayerControllerField() { return *GetNativePointerField<bool*>(this, "APlayerController.bIsLocalPlayerController"); }
	int& NetworkPhysicsTickOffsetField() { return *GetNativePointerField<int*>(this, "APlayerController.NetworkPhysicsTickOffset"); }
	bool& bNetworkPhysicsTickOffsetAssignedField() { return *GetNativePointerField<bool*>(this, "APlayerController.bNetworkPhysicsTickOffsetAssigned"); }
	float& TickOffsetSyncCountdownField() { return *GetNativePointerField<float*>(this, "APlayerController.TickOffsetSyncCountdown"); }
	float& TickOffsetBufferTimeField() { return *GetNativePointerField<float*>(this, "APlayerController.TickOffsetBufferTime"); }
	float& NetworkPhysicsTickOffsetDesyncAccumulatedTimeField() { return *GetNativePointerField<float*>(this, "APlayerController.NetworkPhysicsTickOffsetDesyncAccumulatedTime"); }
	bool& bResetPredictionOnNextAcknowlegeField() { return *GetNativePointerField<bool*>(this, "APlayerController.bResetPredictionOnNextAcknowlege"); }
	FUniqueNetIdRepl& CachedConnectionPlayerIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "APlayerController.CachedConnectionPlayerId"); }
	unsigned int& ClientHandshakeIdField() { return *GetNativePointerField<unsigned int*>(this, "APlayerController.ClientHandshakeId"); }
	int& LocalPlayerConnectionIdentifierField() { return *GetNativePointerField<int*>(this, "APlayerController.LocalPlayerConnectionIdentifier"); }
	void ServerSetSpectatorWaiting_Implementation(bool bWaiting) { NativeCall<void, bool>(this, "APlayerController.ServerSetSpectatorWaiting_Implementation(bool)", bWaiting); }
	bool ServerCheckClientPossessionReliable_Validate() { return NativeCall<bool>(this, "APlayerController.ServerCheckClientPossessionReliable_Validate()"); }
	UPlayer* GetNetOwningPlayerAnyRole() { return NativeCall<UPlayer*>(this, "APlayerController.GetNetOwningPlayerAnyRole()"); }
	bool ServerRestartPlayer_Validate() { return NativeCall<bool>(this, "APlayerController.ServerRestartPlayer_Validate()"); }
	void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) { NativeCall<void, UForceFeedbackEffect*, FName>(this, "APlayerController.ClientStopForceFeedback_Implementation(UForceFeedbackEffect*,FName)", ForceFeedbackEffect, Tag); }
	void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundBase*, float, float>(this, "APlayerController.ClientPlaySound(USoundBase*,float,float)", Sound, VolumeMultiplier, PitchMultiplier); }
	bool ShouldParticipateInSeamlessTravel() { return NativeCall<bool>(this, "APlayerController.ShouldParticipateInSeamlessTravel()"); }
	void UpdateCameraManager(float DeltaSeconds) { NativeCall<void, float>(this, "APlayerController.UpdateCameraManager(float)", DeltaSeconds); }
	bool ServerToggleAILogging_Validate() { return NativeCall<bool>(this, "APlayerController.ServerToggleAILogging_Validate()"); }
	void OnServerStartedVisualLogger_Implementation(bool bIsLogging) { NativeCall<void, bool>(this, "APlayerController.OnServerStartedVisualLogger_Implementation(bool)", bIsLogging); }
	AHUD* GetHUD() { return NativeCall<AHUD*>(this, "APlayerController.GetHUD()"); }
	void ClientGotoState_Implementation(FName NewState) { NativeCall<void, FName>(this, "APlayerController.ClientGotoState_Implementation(FName)", NewState); }
	bool ShouldKeepCurrentPawnUponSpectating() { return NativeCall<bool>(this, "APlayerController.ShouldKeepCurrentPawnUponSpectating()"); }
	bool ServerVerifyViewTarget_Validate() { return NativeCall<bool>(this, "APlayerController.ServerVerifyViewTarget_Validate()"); }
	void OnActorChannelOpen(FInBunch& InBunch, UNetConnection* Connection) { NativeCall<void, FInBunch&, UNetConnection*>(this, "APlayerController.OnActorChannelOpen(FInBunch&,UNetConnection*)", InBunch, Connection); }
	bool PostProcessWorldToScreen(UE::Math::TVector<double>* WorldLocation, UE::Math::TVector2<double>& ScreenLocation, bool bPlayerViewportRelative) { if (!WorldLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector2 < double > &, bool>(this, "APlayerController.PostProcessWorldToScreen(UE::Math::TVector<double>,UE::Math::TVector2<double>&,bool)", *WorldLocation, ScreenLocation, bPlayerViewportRelative); }
	void ClientCapBandwidth(int Cap) { NativeCall<void, int>(this, "APlayerController.ClientCapBandwidth(int)", Cap); }
	bool ServerViewNextPlayer_Validate() { return NativeCall<bool>(this, "APlayerController.ServerViewNextPlayer_Validate()"); }
	bool GetStreamingSource(FWorldPartitionStreamingSource& OutStreamingSource) { return NativeCall<bool, FWorldPartitionStreamingSource&>(this, "APlayerController.GetStreamingSource(FWorldPartitionStreamingSource&)", OutStreamingSource); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "APlayerController.Serialize(FArchive&)", Ar); }
	void FellOutOfWorld(const UDamageType& dmgType) { NativeCall<void, const UDamageType&>(this, "APlayerController.FellOutOfWorld(UDamageType&)", dmgType); }
	void ServerExecRPC_Implementation(const FString& Msg) { NativeCall<void, const FString&>(this, "APlayerController.ServerExecRPC_Implementation(FString&)", Msg); }
	void ClientEndOnlineSession() { NativeCall<void>(this, "APlayerController.ClientEndOnlineSession()"); }
	bool HasNetOwner() { return NativeCall<bool>(this, "APlayerController.HasNetOwner()"); }
	void UpdateHiddenActors(const UE::Math::TVector<double>& ViewLocation) { NativeCall<void, const UE::Math::TVector<double>&>(this, "APlayerController.UpdateHiddenActors(UE::Math::TVector<double>&)", ViewLocation); }
	void ClientRepObjRef_Implementation(UObject* Object) { NativeCall<void, UObject*>(this, "APlayerController.ClientRepObjRef_Implementation(UObject*)", Object); }
	bool AllowConsoleUI() { return NativeCall<bool>(this, "APlayerController.AllowConsoleUI()"); }
	void ActivateTouchInterface(UTouchInterface* NewTouchInterface) { NativeCall<void, UTouchInterface*>(this, "APlayerController.ActivateTouchInterface(UTouchInterface*)", NewTouchInterface); }
	void UpdateForceFeedback(IInputInterface* InputInterface, int ControllerId) { NativeCall<void, IInputInterface*, int>(this, "APlayerController.UpdateForceFeedback(IInputInterface*,int)", InputInterface, ControllerId); }
	ACameraActor* GetAutoActivateCameraForPlayer() { return NativeCall<ACameraActor*>(this, "APlayerController.GetAutoActivateCameraForPlayer()"); }
	void ServerUpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) { NativeCall<void, const FUpdateLevelVisibilityLevelInfo&>(this, "APlayerController.ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo&)", LevelVisibility); }
	static void SetbShowMouseCursor_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APlayerController.SetbShowMouseCursor_WrapperImpl(void*,void*)", Object, InValue); }
	void ClientStartOnlineSession() { NativeCall<void>(this, "APlayerController.ClientStartOnlineSession()"); }
	void GetInputAnalogStickState(EControllerAnalogStick::Type WhichStick, float& StickX, float& StickY) { NativeCall<void, EControllerAnalogStick::Type, float&, float&>(this, "APlayerController.GetInputAnalogStickState(EControllerAnalogStick::Type,float&,float&)", WhichStick, StickX, StickY); }
	void OnAddedToPlayerControllerList() { NativeCall<void>(this, "APlayerController.OnAddedToPlayerControllerList()"); }
	bool ServerViewPrevPlayer_Validate() { return NativeCall<bool>(this, "APlayerController.ServerViewPrevPlayer_Validate()"); }
	void OnRemovedFromPlayerControllerList() { NativeCall<void>(this, "APlayerController.OnRemovedFromPlayerControllerList()"); }
	void ClientAckTimeDilation_Implementation(float TimeDilation, int ServerStep) { NativeCall<void, float, int>(this, "APlayerController.ClientAckTimeDilation_Implementation(float,int)", TimeDilation, ServerStep); }
	bool ServerSetSpectatorLocation_Validate(UE::Math::TVector<double>* NewLoc, UE::Math::TRotator<double>* NewRot) { if (!NewLoc) throw std::invalid_argument("Null native value parameter"); if (!NewRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APlayerController.ServerSetSpectatorLocation_Validate(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *NewLoc, *NewRot); }
	bool ProjectWorldLocationToScreen(UE::Math::TVector<double>* WorldLocation, UE::Math::TVector2<double>& ScreenLocation, bool bPlayerViewportRelative) { if (!WorldLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector2 < double > &, bool>(this, "APlayerController.ProjectWorldLocationToScreen(UE::Math::TVector<double>,UE::Math::TVector2<double>&,bool)", *WorldLocation, ScreenLocation, bPlayerViewportRelative); }
	bool ServerCheckClientPossession_Validate() { return NativeCall<bool>(this, "APlayerController.ServerCheckClientPossession_Validate()"); }
	void ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, UE::Math::TRotator<double>* CustomPlaySpace) { if (!CustomPlaySpace) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UCameraAnim *, float, float, float, float, bool, bool, ECameraShakePlaySpace, UE :: Math :: TRotator < double >>(this, "APlayerController.ClientPlayCameraAnim_Implementation(UCameraAnim*,float,float,float,float,bool,bool,ECameraShakePlaySpace,UE::Math::TRotator<double>)", AnimToPlay, Scale, Rate, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Space, *CustomPlaySpace); }
	void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast) { NativeCall<void, FName, bool, bool>(this, "APlayerController.ClientPrepareMapChange(FName,bool,bool)", LevelName, bFirst, bLast); }
	FString* GetServerNetworkAddress(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerController.GetServerNetworkAddress()", result); }
	void ClientWasKicked_Implementation(const FText& KickReason) { NativeCall<void, const FText&>(this, "APlayerController.ClientWasKicked_Implementation(FText&)", KickReason); }
	void EndInactiveState() { NativeCall<void>(this, "APlayerController.EndInactiveState()"); }
	void ServerUpdateLevelVisibility_Implementation(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) { NativeCall<void, const FUpdateLevelVisibilityLevelInfo&>(this, "APlayerController.ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo&)", LevelVisibility); }
	void BPPostRender(UCanvas* theCanvas) { NativeCall<void, UCanvas*>(this, "APlayerController.BPPostRender(UCanvas*)", theCanvas); }
	void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) { NativeCall<void, UForceFeedbackEffect*, FName>(this, "APlayerController.ClientStopForceFeedback(UForceFeedbackEffect*,FName)", ForceFeedbackEffect, Tag); }
	void StopTalking() { NativeCall<void>(this, "APlayerController.StopTalking()"); }
	void ClearAudioListenerOverride() { NativeCall<void>(this, "APlayerController.ClearAudioListenerOverride()"); }
	void ServerNotifyLoadedWorld(FName WorldPackageName) { NativeCall<void, FName>(this, "APlayerController.ServerNotifyLoadedWorld(FName)", WorldPackageName); }
	void BPPostRender_Implementation(UCanvas* theCanvas) { NativeCall<void, UCanvas*>(this, "APlayerController.BPPostRender_Implementation(UCanvas*)", theCanvas); }
	void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, UE::Math::TVector2<double>* FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished) { if (!FadeAlpha) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, FColor, UE :: Math :: TVector2 < double >, float, bool, bool>(this, "APlayerController.ClientSetCameraFade_Implementation(bool,FColor,UE::Math::TVector2<double>,float,bool,bool)", bEnableFading, FadeColor, *FadeAlpha, FadeTime, bFadeAudio, bHoldWhenFinished); }
	void ResetControllerLightColor() { NativeCall<void>(this, "APlayerController.ResetControllerLightColor()"); }
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, UE::Math::TVector<double>& WorldLocation, UE::Math::TVector<double>& WorldDirection) { return NativeCall<bool, float, float, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "APlayerController.DeprojectScreenPositionToWorld(float,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", ScreenX, ScreenY, WorldLocation, WorldDirection); }
	bool IsPrimaryPlayer() { return NativeCall<bool>(this, "APlayerController.IsPrimaryPlayer()"); }
	void ClientReset() { NativeCall<void>(this, "APlayerController.ClientReset()"); }
	UE::Math::TVector<double>* GetFocalLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APlayerController.GetFocalLocation()", result); }
	void SetLocalPlayerConnectionIdentifier(int Identifier) { NativeCall<void, int>(this, "APlayerController.SetLocalPlayerConnectionIdentifier(int)", Identifier); }
	void ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, UE::Math::TVector<double>* Location, float VolumeMultiplier, float PitchMultiplier) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, USoundBase *, UE :: Math :: TVector < double >, float, float>(this, "APlayerController.ClientPlaySoundAtLocation_Implementation(USoundBase*,UE::Math::TVector<double>,float,float)", Sound, *Location, VolumeMultiplier, PitchMultiplier); }
	void SetInputMode(const FInputModeDataBase& InData) { NativeCall<void, const FInputModeDataBase&>(this, "APlayerController.SetInputMode(FInputModeDataBase&)", InData); }
	void ClientVoiceHandshakeComplete_Implementation() { NativeCall<void>(this, "APlayerController.ClientVoiceHandshakeComplete_Implementation()"); }
	void UnFreeze() { NativeCall<void>(this, "APlayerController.UnFreeze()"); }
	const AActor* GetNetOwner() { return NativeCall<const AActor*>(this, "APlayerController.GetNetOwner()"); }
	bool ServerUpdateLevelVisibility_Validate(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) { return NativeCall<bool, const FUpdateLevelVisibilityLevelInfo&>(this, "APlayerController.ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo&)", LevelVisibility); }
	bool ServerSetSpectatorWaiting_Validate(bool bWaiting) { return NativeCall<bool, bool>(this, "APlayerController.ServerSetSpectatorWaiting_Validate(bool)", bWaiting); }
	void ServerExec(const FString& Msg) { NativeCall<void, const FString&>(this, "APlayerController.ServerExec(FString&)", Msg); }
	void NotifyActorChannelFailure(UActorChannel* ActorChan) { NativeCall<void, UActorChannel*>(this, "APlayerController.NotifyActorChannelFailure(UActorChannel*)", ActorChan); }
	void SetClientHandshakeId(unsigned int InClientHandshakeId) { NativeCall<void, unsigned int>(this, "APlayerController.SetClientHandshakeId(unsignedint)", InClientHandshakeId); }
	void ServerAcknowledgePossession(APawn* P) { NativeCall<void, APawn*>(this, "APlayerController.ServerAcknowledgePossession(APawn*)", P); }
	void ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop) { NativeCall<void, UCameraAnim*>(this, "APlayerController.ClientStopCameraAnim_Implementation(UCameraAnim*)", AnimToStop); }
	bool ServerExecRPC_Validate(const FString& Msg) { return NativeCall<bool, const FString&>(this, "APlayerController.ServerExecRPC_Validate(FString&)", Msg); }
	bool ServerShortTimeout_Validate() { return NativeCall<bool>(this, "APlayerController.ServerShortTimeout_Validate()"); }
	bool IsInViewportClient(UGameViewportClient* ViewportClient) { return NativeCall<bool, UGameViewportClient*>(this, "APlayerController.IsInViewportClient(UGameViewportClient*)", ViewportClient); }
	void BeginPlayingState() { NativeCall<void>(this, "APlayerController.BeginPlayingState()"); }
	bool IsLocalController() { return NativeCall<bool>(this, "APlayerController.IsLocalController()"); }
	void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, UE::Math::TVector2<double>* FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished) { if (!FadeAlpha) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, bool, FColor, UE :: Math :: TVector2 < double >, float, bool, bool>(this, "APlayerController.ClientSetCameraFade(bool,FColor,UE::Math::TVector2<double>,float,bool,bool)", bEnableFading, FadeColor, *FadeAlpha, FadeTime, bFadeAudio, bHoldWhenFinished); }
	int GetLocalPlayerConnectionIdentifier() { return NativeCall<int>(this, "APlayerController.GetLocalPlayerConnectionIdentifier()"); }
	void StartTalking() { NativeCall<void>(this, "APlayerController.StartTalking()"); }
	unsigned int GetClientHandshakeId() { return NativeCall<unsigned int>(this, "APlayerController.GetClientHandshakeId()"); }
	void ClientFlushLevelStreaming() { NativeCall<void>(this, "APlayerController.ClientFlushLevelStreaming()"); }
	void PreProcessInput(float DeltaTime, bool bGamePaused) { NativeCall<void, float, bool>(this, "APlayerController.PreProcessInput(float,bool)", DeltaTime, bGamePaused); }
	void SetTickOffsetBufferTime(float NewBufferTime) { NativeCall<void, float>(this, "APlayerController.SetTickOffsetBufferTime(float)", NewBufferTime); }
	bool ShouldPerformFullTickWhenPaused() { return NativeCall<bool>(this, "APlayerController.ShouldPerformFullTickWhenPaused()"); }
	void SetVirtualJoystickVisibility(bool bVisible) { NativeCall<void, bool>(this, "APlayerController.SetVirtualJoystickVisibility(bool)", bVisible); }
	void LevelStreamingStatusChanged(ULevelStreaming* LevelObject, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, bool bNewShouldBlockOnUnload, int LODIndex) { NativeCall<void, ULevelStreaming*, bool, bool, bool, bool, int>(this, "APlayerController.LevelStreamingStatusChanged(ULevelStreaming*,bool,bool,bool,bool,int)", LevelObject, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad, bNewShouldBlockOnUnload, LODIndex); }
};