#pragma once
#include "BulkForward.h"


struct ACharacter : APrimalPawn
{
	// Fields

	TObjectPtr<USkeletalMeshComponent>& MeshField() { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "ACharacter.Mesh"); }
	TObjectPtr<UCharacterMovementComponent>& CharacterMovementField() { return *GetNativePointerField<TObjectPtr<UCharacterMovementComponent>*>(this, "ACharacter.CharacterMovement"); }
	TObjectPtr<UCapsuleComponent>& CapsuleComponentField() { return *GetNativePointerField<TObjectPtr<UCapsuleComponent>*>(this, "ACharacter.CapsuleComponent"); }
	FBasedMovementInfo& BasedMovementField() { return *GetNativePointerField<FBasedMovementInfo*>(this, "ACharacter.BasedMovement"); }
	FReplicatedBasedMovementInfo& ReplicatedBasedMovementField() { return *GetNativePointerField<FReplicatedBasedMovementInfo*>(this, "ACharacter.ReplicatedBasedMovement"); }
	float& AnimRootMotionTranslationScaleField() { return *GetNativePointerField<float*>(this, "ACharacter.AnimRootMotionTranslationScale"); }
	UE::Math::TVector<double>& BaseTranslationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ACharacter.BaseTranslationOffset"); }
	UE::Math::TQuat<double>& BaseRotationOffsetField() { return *GetNativePointerField<UE::Math::TQuat<double>*>(this, "ACharacter.BaseRotationOffset"); }
	long double& ReplicatedServerLastTransformUpdateTimeStampField() { return *GetNativePointerField<long double*>(this, "ACharacter.ReplicatedServerLastTransformUpdateTimeStamp"); }
	float& ReplayLastTransformUpdateTimeStampField() { return *GetNativePointerField<float*>(this, "ACharacter.ReplayLastTransformUpdateTimeStamp"); }
	bool& bInBaseReplicationField() { return *GetNativePointerField<bool*>(this, "ACharacter.bInBaseReplication"); }
	float& CrouchedEyeHeightField() { return *GetNativePointerField<float*>(this, "ACharacter.CrouchedEyeHeight"); }
	float& JumpKeyHoldTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.JumpKeyHoldTime"); }
	float& JumpOfWaterKeyHoldTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.JumpOfWaterKeyHoldTime"); }
	float& JumpForceTimeRemainingField() { return *GetNativePointerField<float*>(this, "ACharacter.JumpForceTimeRemaining"); }
	float& ProxyJumpForceStartedTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.ProxyJumpForceStartedTime"); }
	float& JumpMaxHoldTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.JumpMaxHoldTime"); }
	int& JumpMaxCountField() { return *GetNativePointerField<int*>(this, "ACharacter.JumpMaxCount"); }
	int& JumpCurrentCountField() { return *GetNativePointerField<int*>(this, "ACharacter.JumpCurrentCount"); }
	int& JumpCurrentCountPreJumpField() { return *GetNativePointerField<int*>(this, "ACharacter.JumpCurrentCountPreJump"); }
	unsigned int& NumActorOverlapEventsCounterField() { return *GetNativePointerField<unsigned int*>(this, "ACharacter.NumActorOverlapEventsCounter"); }
	FCharacterReachedApexSignature& OnReachedJumpApexField() { return *GetNativePointerField<FCharacterReachedApexSignature*>(this, "ACharacter.OnReachedJumpApex"); }
	FLandedSignature& LandedDelegateField() { return *GetNativePointerField<FLandedSignature*>(this, "ACharacter.LandedDelegate"); }
	FMovementModeChangedSignature& MovementModeChangedDelegateField() { return *GetNativePointerField<FMovementModeChangedSignature*>(this, "ACharacter.MovementModeChangedDelegate"); }
	FCharacterMovementUpdatedSignature& OnCharacterMovementUpdatedField() { return *GetNativePointerField<FCharacterMovementUpdatedSignature*>(this, "ACharacter.OnCharacterMovementUpdated"); }
	FRootMotionSourceGroup& SavedRootMotionField() { return *GetNativePointerField<FRootMotionSourceGroup*>(this, "ACharacter.SavedRootMotion"); }
	FRootMotionMovementParams& ClientRootMotionParamsField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "ACharacter.ClientRootMotionParams"); }
	TArray<FSimulatedRootMotionReplicatedMove, TSizedDefaultAllocator<32> >& RootMotionRepMovesField() { return *GetNativePointerField<TArray<FSimulatedRootMotionReplicatedMove, TSizedDefaultAllocator<32> >*>(this, "ACharacter.RootMotionRepMoves"); }
	FRepRootMotionMontage& RepRootMotionField() { return *GetNativePointerField<FRepRootMotionMontage*>(this, "ACharacter.RepRootMotion"); }
	long double& LeftDynamicActorBaseTimeField() { return *GetNativePointerField<long double*>(this, "ACharacter.LeftDynamicActorBaseTime"); }
	long double& LastClientForceUpdateMovementTimeField() { return *GetNativePointerField<long double*>(this, "ACharacter.LastClientForceUpdateMovementTime"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsCrouched() { return { this, "ACharacter.bIsCrouched" }; }
	BitFieldValue<bool, unsigned __int32> bProxyIsJumpForceApplied() { return { this, "ACharacter.bProxyIsJumpForceApplied" }; }
	BitFieldValue<bool, unsigned __int32> bCurrentlyUpdatingRootMotion() { return { this, "ACharacter.bCurrentlyUpdatingRootMotion" }; }
	BitFieldValue<bool, unsigned __int32> bPressedJump() { return { this, "ACharacter.bPressedJump" }; }
	BitFieldValue<bool, unsigned __int32> bClientUpdating() { return { this, "ACharacter.bClientUpdating" }; }
	BitFieldValue<bool, unsigned __int32> bClientWasFalling() { return { this, "ACharacter.bClientWasFalling" }; }
	BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotion() { return { this, "ACharacter.bClientResimulateRootMotion" }; }
	BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotionSources() { return { this, "ACharacter.bClientResimulateRootMotionSources" }; }
	BitFieldValue<bool, unsigned __int32> bSimGravityDisabled() { return { this, "ACharacter.bSimGravityDisabled" }; }
	BitFieldValue<bool, unsigned __int32> bClientCheckEncroachmentOnNetUpdate() { return { this, "ACharacter.bClientCheckEncroachmentOnNetUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bServerMoveIgnoreRootMotion() { return { this, "ACharacter.bServerMoveIgnoreRootMotion" }; }
	BitFieldValue<bool, unsigned __int32> bWasJumping() { return { this, "ACharacter.bWasJumping" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("ACharacter"); }
	UPrimitiveComponent* GetMovementBase() { return NativeCall<UPrimitiveComponent*>(this, "ACharacter.GetMovementBase()"); }
	UPawnMovementComponent* GetMovementComponent() { return NativeCall<UPawnMovementComponent*>(this, "ACharacter.GetMovementComponent()"); }
	void ClientAdjustRootMotionSourcePosition(float TimeStamp, FRootMotionSourceGroup* ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, UE::Math::TVector<double>* ServerLoc, FVector_NetQuantizeNormal* ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned __int8 ServerMovementMode) { NativeCall<void, float, FRootMotionSourceGroup*, bool, float, UE::Math::TVector<double>*, FVector_NetQuantizeNormal*, float, UPrimitiveComponent*, FName, bool, bool, unsigned __int8>(this, "ACharacter.ClientAdjustRootMotionSourcePosition(float,FRootMotionSourceGroup,bool,float,UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", TimeStamp, ServerRootMotion, bHasAnimRootMotion, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	void OnJumped() { NativeCall<void>(this, "ACharacter.OnJumped()"); }
	void OnLanded(const FHitResult* Hit) { NativeCall<void, const FHitResult*>(this, "ACharacter.OnLanded(FHitResult&)", Hit); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesACharacter();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void PostInitializeComponents() { NativeCall<void>(this, "ACharacter.PostInitializeComponents()"); }
	void CacheInitialMeshOffset(UE::Math::TVector<double>* MeshRelativeLocation, UE::Math::TRotator<double>* MeshRelativeRotation, __int64 a4) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, __int64>(this, "ACharacter.CacheInitialMeshOffset(UE::Math::TVector<double>,UE::Math::TRotator<double>)", MeshRelativeLocation, MeshRelativeRotation, a4); }
	void GetSimpleCollisionCylinder(float* CollisionRadius, float* CollisionHalfHeight) { NativeCall<void, float*, float*>(this, "ACharacter.GetSimpleCollisionCylinder(float&,float&)", CollisionRadius, CollisionHalfHeight); }
	float GetDefaultHalfHeight() { return NativeCall<float>(this, "ACharacter.GetDefaultHalfHeight()"); }
	UActorComponent* FindComponentByClass(const TSubclassOf<UActorComponent> ComponentClass) { return NativeCall<UActorComponent*, const TSubclassOf<UActorComponent>>(this, "ACharacter.FindComponentByClass(TSubclassOf<UActorComponent>)", ComponentClass); }
	void NotifyJumpApex() { NativeCall<void>(this, "ACharacter.NotifyJumpApex()"); }
	void Landed(const FHitResult* Hit) { NativeCall<void, const FHitResult*>(this, "ACharacter.Landed(FHitResult&)", Hit); }
	bool CanJump() { return NativeCall<bool>(this, "ACharacter.CanJump()"); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>(this, "ACharacter.CanJumpInternal_Implementation()"); }
	void ResetJumpState() { NativeCall<void>(this, "ACharacter.ResetJumpState()"); }
	bool IsJumpProvidingForce() { return NativeCall<bool>(this, "ACharacter.IsJumpProvidingForce()"); }
	void RecalculateBaseEyeHeight() { NativeCall<void>(this, "ACharacter.RecalculateBaseEyeHeight()"); }
	void OnRep_IsCrouched(__int64 a2) { NativeCall<void, __int64>(this, "ACharacter.OnRep_IsCrouched()", a2); }
	void SetReplicateMovement(bool bInReplicateMovement) { NativeCall<void, bool>(this, "ACharacter.SetReplicateMovement(bool)", bInReplicateMovement); }
	bool CanCrouch() { return NativeCall<bool>(this, "ACharacter.CanCrouch()"); }
	void Crouch(bool bClientSimulation) { NativeCall<void, bool>(this, "ACharacter.Crouch(bool)", bClientSimulation); }
	void UnCrouch(bool bClientSimulation) { NativeCall<void, bool>(this, "ACharacter.UnCrouch(bool)", bClientSimulation); }
	void OnEndCrouch(float HeightAdjust, float ScaledHeightAdjust) { NativeCall<void, float, float>(this, "ACharacter.OnEndCrouch(float,float)", HeightAdjust, ScaledHeightAdjust); }
	void OnStartCrouch(float HeightAdjust, float ScaledHeightAdjust) { NativeCall<void, float, float>(this, "ACharacter.OnStartCrouch(float,float)", HeightAdjust, ScaledHeightAdjust); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "ACharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void ClearCrossLevelReferences(__int64 a2, __int64 a3, __int64 a4) { NativeCall<void, __int64, __int64, __int64>(this, "ACharacter.ClearCrossLevelReferences()", a2, a3, a4); }
	void SetBase(UPrimitiveComponent* NewBaseComponent, const FName InBoneName, bool bNotifyPawn) { NativeCall<void, UPrimitiveComponent*, const FName, bool>(this, "ACharacter.SetBase(UPrimitiveComponent*,FName,bool)", NewBaseComponent, InBoneName, bNotifyPawn); }
	void TurnOff() { NativeCall<void>(this, "ACharacter.TurnOff()"); }
	void Restart() { NativeCall<void>(this, "ACharacter.Restart()"); }
	void PawnClientRestart() { NativeCall<void>(this, "ACharacter.PawnClientRestart()"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController*>(this, "ACharacter.PossessedBy(AController*)", NewController); }
	void UnPossessed() { NativeCall<void>(this, "ACharacter.UnPossessed()"); }
	void TornOff() { NativeCall<void>(this, "ACharacter.TornOff()"); }
	void NotifyActorBeginOverlap(AActor* OtherActor) { NativeCall<void, AActor*>(this, "ACharacter.NotifyActorBeginOverlap(AActor*)", OtherActor); }
	void NotifyActorEndOverlap(AActor* OtherActor) { NativeCall<void, AActor*>(this, "ACharacter.NotifyActorEndOverlap(AActor*)", OtherActor); }
	void BaseChange() { NativeCall<void>(this, "ACharacter.BaseChange()"); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "ACharacter.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void LaunchCharacter(UE::Math::TVector<double>* LaunchVelocity, bool bXYOverride, bool bZOverride) { NativeCall<void, UE::Math::TVector<double>*, bool, bool>(this, "ACharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)", LaunchVelocity, bXYOverride, bZOverride); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, unsigned __int8 PrevCustomMode) { NativeCall<void, EMovementMode, unsigned __int8>(this, "ACharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", PrevMovementMode, PrevCustomMode); }
	bool ShouldNotifyLanded(const FHitResult* Hit) { return NativeCall<bool, const FHitResult*>(this, "ACharacter.ShouldNotifyLanded(FHitResult&)", Hit); }
	void Jump() { NativeCall<void>(this, "ACharacter.Jump()"); }
	void StopJumping() { NativeCall<void>(this, "ACharacter.StopJumping()"); }
	void CheckJumpInput(float DeltaTime) { NativeCall<void, float>(this, "ACharacter.CheckJumpInput(float)", DeltaTime); }
	void ClearJumpInput(float DeltaTime) { NativeCall<void, float>(this, "ACharacter.ClearJumpInput(float)", DeltaTime); }
	float GetJumpMaxHoldTime() { return NativeCall<float>(this, "ACharacter.GetJumpMaxHoldTime()"); }
	void PreNetReceive() { NativeCall<void>(this, "ACharacter.PreNetReceive()"); }
	void PostNetReceive() { NativeCall<void>(this, "ACharacter.PostNetReceive()"); }
	void OnRep_ReplicatedBasedMovement() { NativeCall<void>(this, "ACharacter.OnRep_ReplicatedBasedMovement()"); }
	void OnRep_ReplicatedMovement() { NativeCall<void>(this, "ACharacter.OnRep_ReplicatedMovement()"); }
	void SimulatedRootMotionPositionFixup(float DeltaSeconds) { NativeCall<void, float>(this, "ACharacter.SimulatedRootMotionPositionFixup(float)", DeltaSeconds); }
	bool RestoreReplicatedMove(const FSimulatedRootMotionReplicatedMove* RootMotionRepMove) { return NativeCall<bool, const FSimulatedRootMotionReplicatedMove*>(this, "ACharacter.RestoreReplicatedMove(FSimulatedRootMotionReplicatedMove&)", RootMotionRepMove); }
	void OnUpdateSimulatedPosition(const UE::Math::TVector<double>* OldLocation, const UE::Math::TQuat<double>* OldRotation) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*>(this, "ACharacter.OnUpdateSimulatedPosition(UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", OldLocation, OldRotation); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "ACharacter.PostNetReceiveLocationAndRotation()"); }
	void PreReplication(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "ACharacter.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void GetReplicatedCustomConditionState(FCustomPropertyConditionState* OutActiveState) { NativeCall<void, FCustomPropertyConditionState*>(this, "ACharacter.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)", OutActiveState); }
	void PreReplicationForReplay(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "ACharacter.PreReplicationForReplay(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ACharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage*, float, FName, bool, bool, float, float>(this, "ACharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	void StopAnimMontage(UAnimMontage* AnimMontage) { NativeCall<void, UAnimMontage*>(this, "ACharacter.StopAnimMontage(UAnimMontage*)", AnimMontage); }
	//     UAnimMontage* GetCurrentMontage() { return NativeCall<UAnimMontage*>(this, "ACharacter.GetCurrentMontage()"); }
	// FUNCTION MISSING: ACharacter.GetCurrentMontage()
	void ClientCheatWalk_Implementation() { NativeCall<void>(this, "ACharacter.ClientCheatWalk_Implementation()"); }
	void ClientCheatFly_Implementation() { NativeCall<void>(this, "ACharacter.ClientCheatFly_Implementation()"); }
	void ClientCheatGhost_Implementation() { NativeCall<void>(this, "ACharacter.ClientCheatGhost_Implementation()"); }
	bool IsBasedOnDynamicActor() { return NativeCall<bool>(this, "ACharacter.IsBasedOnDynamicActor()"); }
	void ClientForceUpdateMovement_Implementation(UE::Math::TVector<double>* NewLocation, UE::Math::TVector<double>* NewVelocity) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ACharacter.ClientForceUpdateMovement_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", NewLocation, NewVelocity); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACharacter"); }

	FVector_NetQuantizeNormal& ReplicatedGravityDirectionField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ACharacter.ReplicatedGravityDirection"); }
	FVector_NetQuantizeNormal& PreNetReceivedGravityDirectionField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ACharacter.PreNetReceivedGravityDirection"); }
	unsigned char& ReplicatedMovementModeField() { return *GetNativePointerField<unsigned char*>(this, "ACharacter.ReplicatedMovementMode"); }
	BitFieldValue<bool, unsigned char> bProxyIsCharacterMovementActive() { return { this, "ACharacter.bProxyIsCharacterMovementActive"}; }
	void MoveBlockedBy(const FHitResult& Impact) { NativeCall<void, const FHitResult&>(this, "ACharacter.MoveBlockedBy(FHitResult&)", Impact); }
	void ClientCheatGhost() { NativeCall<void>(this, "ACharacter.ClientCheatGhost()"); }
	void K2_UpdateCustomMovement(float DeltaTime) { NativeCall<void, float>(this, "ACharacter.K2_UpdateCustomMovement(float)", DeltaTime); }
	UAnimMontage* GetCurrentMontage() { return NativeCall<UAnimMontage*>(this, "ACharacter.GetCurrentMontage()"); }
	bool IsCrouched() { return NativeCall<bool>(this, "ACharacter.IsCrouched()"); }
	void UpdateNavigationRelevance() { NativeCall<void>(this, "ACharacter.UpdateNavigationRelevance()"); }
	void OnRep_IsCharacterMovementActive() { NativeCall<void>(this, "ACharacter.OnRep_IsCharacterMovementActive()"); }
	void OnWalkingOffLedge_Implementation(const UE::Math::TVector<double>& PreviousFloorImpactNormal, const UE::Math::TVector<double>& PreviousFloorContactNormal, const UE::Math::TVector<double>& PreviousLocation, float TimeDelta) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "ACharacter.OnWalkingOffLedge_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", PreviousFloorImpactNormal, PreviousFloorContactNormal, PreviousLocation, TimeDelta); }
	void GatherCurrentMovement() { NativeCall<void>(this, "ACharacter.GatherCurrentMovement()"); }
	UE::Math::TVector<double>* GetGravityDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ACharacter.GetGravityDirection()", result); }
	void RecalculateCrouchedEyeHeight() { NativeCall<void>(this, "ACharacter.RecalculateCrouchedEyeHeight()"); }
	void InitializeAsyncOutput(FCharacterAsyncOutput& Output) { NativeCall<void, FCharacterAsyncOutput&>(this, "ACharacter.InitializeAsyncOutput(FCharacterAsyncOutput&)", Output); }
	void SetAnimRootMotionTranslationScale(float InAnimRootMotionTranslationScale) { NativeCall<void, float>(this, "ACharacter.SetAnimRootMotionTranslationScale(float)", InAnimRootMotionTranslationScale); }
	float GetAnimRootMotionTranslationScale() { return NativeCall<float>(this, "ACharacter.GetAnimRootMotionTranslationScale()"); }
	void BeginPlay() { NativeCall<void>(this, "ACharacter.BeginPlay()"); }
	UE::Math::TQuat<double>* GetGravityTransform(UE::Math::TQuat<double>* result) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*>(this, "ACharacter.GetGravityTransform()", result); }
	UObject* GetMovementBaseObject() { return NativeCall<UObject*>(this, "ACharacter.GetMovementBaseObject()"); }
	void Falling() { NativeCall<void>(this, "ACharacter.Falling()"); }
	void RootMotionDebugClientPrintOnScreen_Implementation(const FString& InString) { NativeCall<void, const FString&>(this, "ACharacter.RootMotionDebugClientPrintOnScreen_Implementation(FString&)", InString); }
	const FMovementBaseInterfaceData* GetMovementBaseInterfaceData() { return NativeCall<const FMovementBaseInterfaceData*>(this, "ACharacter.GetMovementBaseInterfaceData()"); }
	void FillAsyncInput(FCharacterAsyncInput& Input) { NativeCall<void, FCharacterAsyncInput&>(this, "ACharacter.FillAsyncInput(FCharacterAsyncInput&)", Input); }
	bool CanJumpWhileFalling() { return NativeCall<bool>(this, "ACharacter.CanJumpWhileFalling()"); }
	void ClientForceUpdateMovement(UE::Math::TVector<double>* NewLocation, UE::Math::TVector<double>* NewVelocity) { if (!NewLocation) throw std::invalid_argument("Null native value parameter"); if (!NewVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "ACharacter.ClientForceUpdateMovement(UE::Math::TVector<double>,UE::Math::TVector<double>)", *NewLocation, *NewVelocity); }
	void ClientAckGoodMove(float TimeStamp) { NativeCall<void, float>(this, "ACharacter.ClientAckGoodMove(float)", TimeStamp); }
	UE::Math::TQuat<double>* GetBaseRotationOffset(UE::Math::TQuat<double>* result) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*>(this, "ACharacter.GetBaseRotationOffset()", result); }
	bool IsPlayingNetworkedRootMotionMontage() { return NativeCall<bool>(this, "ACharacter.IsPlayingNetworkedRootMotionMontage()"); }
	void UpdateMeshAllowAutonomousTickPose() { NativeCall<void>(this, "ACharacter.UpdateMeshAllowAutonomousTickPose()"); }
	void SetIsCrouched(bool bInIsCrouched) { NativeCall<void, bool>(this, "ACharacter.SetIsCrouched(bool)", bInIsCrouched); }
	void ClientMoveResponsePacked(const FCharacterMoveResponsePackedBits& PackedBits) { NativeCall<void, const FCharacterMoveResponsePackedBits&>(this, "ACharacter.ClientMoveResponsePacked(FCharacterMoveResponsePackedBits&)", PackedBits); }
	void ModifyRootMotion(FRootMotionMovementParams& InOutRootMotion, float DeltaTime) { NativeCall<void, FRootMotionMovementParams&, float>(this, "ACharacter.ModifyRootMotion(FRootMotionMovementParams&,float)", InOutRootMotion, DeltaTime); }
	UE::Math::TVector<double>* GetReplicatedGravityDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ACharacter.GetReplicatedGravityDirection()", result); }
	FMovementBaseInterfaceData* GetMovementBaseInterfaceData_Mutable() { return NativeCall<FMovementBaseInterfaceData*>(this, "ACharacter.GetMovementBaseInterfaceData_Mutable()"); }
	void ClientAdjustPosition(float TimeStamp, UE::Math::TVector<double>* NewLoc, UE::Math::TVector<double>* NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) { if (!NewLoc) throw std::invalid_argument("Null native value parameter"); if (!NewVel) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UPrimitiveComponent *, FName, bool, bool, unsigned char>(this, "ACharacter.ClientAdjustPosition(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", TimeStamp, *NewLoc, *NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	bool IsPlayingRootMotion() { return NativeCall<bool>(this, "ACharacter.IsPlayingRootMotion()"); }
	UE::Math::TVector<double>* GetNavAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ACharacter.GetNavAgentLocation()", result); }
	void OnJumped_Implementation() { NativeCall<void>(this, "ACharacter.OnJumped_Implementation()"); }
	void ClientCheatFly() { NativeCall<void>(this, "ACharacter.ClientCheatFly()"); }
	FAnimMontageInstance* GetRootMotionAnimMontageInstance() { return NativeCall<FAnimMontageInstance*>(this, "ACharacter.GetRootMotionAnimMontageInstance()"); }
	void PostLoad() { NativeCall<void>(this, "ACharacter.PostLoad()"); }
	void ClientVeryShortAdjustPosition(float TimeStamp, UE::Math::TVector<double>* NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) { if (!NewLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, float, UE :: Math :: TVector < double >, UPrimitiveComponent *, FName, bool, bool, unsigned char>(this, "ACharacter.ClientVeryShortAdjustPosition(float,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", TimeStamp, *NewLoc, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	void SaveRelativeBasedMovement(const UE::Math::TVector<double>& NewRelativeLocation, const UE::Math::TRotator<double>& NewRotation, bool bRelativeRotation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool>(this, "ACharacter.SaveRelativeBasedMovement(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool)", NewRelativeLocation, NewRotation, bRelativeRotation); }
	void OnWalkingOffLedge(const UE::Math::TVector<double>& PreviousFloorImpactNormal, const UE::Math::TVector<double>& PreviousFloorContactNormal, const UE::Math::TVector<double>& PreviousLocation, float TimeDelta) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float>(this, "ACharacter.OnWalkingOffLedge(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", PreviousFloorImpactNormal, PreviousFloorContactNormal, PreviousLocation, TimeDelta); }
	bool ShouldReplicateAcceleration() { return NativeCall<bool>(this, "ACharacter.ShouldReplicateAcceleration()"); }
	void ApplyAsyncOutput(const FCharacterAsyncOutput& Output) { NativeCall<void, const FCharacterAsyncOutput&>(this, "ACharacter.ApplyAsyncOutput(FCharacterAsyncOutput&)", Output); }
	void ServerMovePacked(const FCharacterServerMovePackedBits& PackedBits) { NativeCall<void, const FCharacterServerMovePackedBits&>(this, "ACharacter.ServerMovePacked(FCharacterServerMovePackedBits&)", PackedBits); }
	void ClientCheatWalk() { NativeCall<void>(this, "ACharacter.ClientCheatWalk()"); }
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) { NativeCall<void, UInputComponent*>(this, "ACharacter.SetupPlayerInputComponent(UInputComponent*)", PlayerInputComponent); }
};