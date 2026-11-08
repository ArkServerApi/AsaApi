#pragma once
#include "BulkForward.h"


struct APawn : AActor
{
	// Fields

	float& BaseEyeHeightField() { return *GetNativePointerField<float*>(this, "APawn.BaseEyeHeight"); }
	FieldArray<char, 1> AutoPossessAIField() { return { this, "APawn.AutoPossessAI" }; }
	TSubclassOf<AController>& AIControllerClassField() { return *GetNativePointerField<TSubclassOf<AController>*>(this, "APawn.AIControllerClass"); }
	TObjectPtr<APlayerState>& PlayerStateField() { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "APawn.PlayerState"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& BlendedReplayViewPitchField();
	TObjectPtr<AController>& LastHitByField() { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APawn.LastHitBy"); }
	TObjectPtr<AController>& ControllerField() { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APawn.Controller"); }
	TObjectPtr<AController>& PreviousControllerField() { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APawn.PreviousController"); }
	float& AllowedYawErrorField() { return *GetNativePointerField<float*>(this, "APawn.AllowedYawError"); }
	//FPawnRestartedSignature& ReceiveRestartedDelegateField() { return *GetNativePointerField<FPawnRestartedSignature*>(this, "APawn.ReceiveRestartedDelegate"); }
	UE::Math::TVector<double>& ControlInputVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APawn.ControlInputVector"); }
	UE::Math::TVector<double>& LastControlInputVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APawn.LastControlInputVector"); }
	TSubclassOf<UInputComponent>& OverrideInputComponentClassField() { return *GetNativePointerField<TSubclassOf<UInputComponent>*>(this, "APawn.OverrideInputComponentClass"); }
	//FMovementTetherEvent& OnMovementTetherSetField() { return *GetNativePointerField<FMovementTetherEvent*>(this, "APawn.OnMovementTetherSet"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseControllerRotationPitch() { return { this, "APawn.bUseControllerRotationPitch" }; }
	BitFieldValue<bool, unsigned __int32> bUseControllerRotationYaw() { return { this, "APawn.bUseControllerRotationYaw" }; }
	BitFieldValue<bool, unsigned __int32> bUseControllerRotationRoll() { return { this, "APawn.bUseControllerRotationRoll" }; }
	BitFieldValue<bool, unsigned __int32> bCanAffectNavigationGeneration() { return { this, "APawn.bCanAffectNavigationGeneration" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseCustomCameraComponent() { return { this, "APawn.bForceUseCustomCameraComponent" }; }
	BitFieldValue<bool, unsigned __int32> bDisableControllerDesiredRotation() { return { this, "APawn.bDisableControllerDesiredRotation" }; }
	BitFieldValue<bool, unsigned __int32> bInputEnabled() { return { this, "APawn.bInputEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bProcessingOutsideWorldBounds() { return { this, "APawn.bProcessingOutsideWorldBounds" }; }
	BitFieldValue<bool, unsigned __int32> bIsLocalViewTarget() { return { this, "APawn.bIsLocalViewTarget" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APawn"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APawn"); }
	bool IsPawnControlled() { return NativeCall<bool>(this, "APawn.IsPawnControlled()"); }
	AShooterPlayerState* GetPlayerState() { return NativeCall<AShooterPlayerState*>(this, "APawn.GetPlayerState<AShooterPlayerState>()"); }
	void PostLoad() { NativeCall<void>(this, "APawn.PostLoad()"); }
	void BeginPlay() { NativeCall<void>(this, "APawn.BeginPlay()"); }
	void GetMoveGoalReachTest(const AActor* MovingActor, const UE::Math::TVector<double>* MoveOffset, UE::Math::TVector<double>* GoalOffset, float* GoalRadius, float* GoalHalfHeight) { NativeCall<void, const AActor*, const UE::Math::TVector<double>*, UE::Math::TVector<double>*, float*, float*>(this, "APawn.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPawn();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void PreInitializeComponents() { NativeCall<void>(this, "APawn.PreInitializeComponents()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APawn.PostInitializeComponents()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "APawn.PostRegisterAllComponents()"); }
	UPawnMovementComponent* GetMovementComponent() { return NativeCall<UPawnMovementComponent*>(this, "APawn.GetMovementComponent()"); }
	void UpdateNavAgent() { NativeCall<void>(this, "APawn.UpdateNavAgent()"); }
	void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) { NativeCall<void, bool, bool>(this, "APawn.SetCanAffectNavigationGeneration(bool,bool)", bNewValue, bForceUpdate); }
	bool CanBeBaseForCharacter(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "APawn.CanBeBaseForCharacter(APawn*)", Pawn); }
	bool IsLocallyControlled() { return NativeCall<bool>(this, "APawn.IsLocallyControlled()"); }
	bool IsPlayerControlled() { return NativeCall<bool>(this, "APawn.IsPlayerControlled()"); }
	bool IsBotControlled() { return NativeCall<bool>(this, "APawn.IsBotControlled()"); }
	bool ReachedDesiredRotation() { return NativeCall<bool>(this, "APawn.ReachedDesiredRotation()"); }
	float GetDefaultHalfHeight() { return NativeCall<float>(this, "APawn.GetDefaultHalfHeight()"); }
	//UPawnNoiseEmitterComponent* GetPawnNoiseEmitterComponent() { return NativeCall<UPawnNoiseEmitterComponent*>(this, "APawn.GetPawnNoiseEmitterComponent()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "APawn.ShouldTickIfViewportsOnly()"); }
	void SpawnDefaultController() { NativeCall<void>(this, "APawn.SpawnDefaultController()"); }
	void TurnOff() { NativeCall<void>(this, "APawn.TurnOff()"); }
	void BecomeViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APawn.BecomeViewTarget(APlayerController*)", PC); }
	void EndViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APawn.EndViewTarget(APlayerController*)", PC); }
	APlayerController* GetLocalViewingPlayerController() { return NativeCall<APlayerController*>(this, "APawn.GetLocalViewingPlayerController()"); }
	void PawnClientRestart() { NativeCall<void>(this, "APawn.PawnClientRestart()"); }
	void NotifyRestarted() { NativeCall<void>(this, "APawn.NotifyRestarted()"); }
	void Destroyed() { NativeCall<void>(this, "APawn.Destroyed()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APawn.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool ShouldTakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APawn.ShouldTakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APawn.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void OnRep_Controller() { NativeCall<void>(this, "APawn.OnRep_Controller()"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController*>(this, "APawn.PossessedBy(AController*)", NewController); }
	void UnPossessed() { NativeCall<void>(this, "APawn.UnPossessed()"); }
	void NotifyControllerChanged() { NativeCall<void>(this, "APawn.NotifyControllerChanged()"); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "APawn.GetNetConnection()"); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer*>(this, "APawn.GetNetOwningPlayer()"); }
	UInputComponent* CreatePlayerInputComponent() { return NativeCall<UInputComponent*>(this, "APawn.CreatePlayerInputComponent()"); }
	void DestroyPlayerInputComponent() { NativeCall<void>(this, "APawn.DestroyPlayerInputComponent()"); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "APawn.IsMoveInputIgnored()"); }
	void AddMovementInput(UE::Math::TVector<double>* WorldDirection, float ScaleValue, bool bForce) { NativeCall<void, UE::Math::TVector<double>*, float, bool>(this, "APawn.AddMovementInput(UE::Math::TVector<double>,float,bool)", WorldDirection, ScaleValue, bForce); }
	void AddControllerPitchInput(float Val) { NativeCall<void, float>(this, "APawn.AddControllerPitchInput(float)", Val); }
	void AddControllerYawInput(float Val) { NativeCall<void, float>(this, "APawn.AddControllerYawInput(float)", Val); }
	void AddControllerRollInput(float Val) { NativeCall<void, float>(this, "APawn.AddControllerRollInput(float)", Val); }
	void Restart() { NativeCall<void>(this, "APawn.Restart()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// APhysicsVolume* GetPawnPhysicsVolume();
	APhysicsVolume* GetPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "APawn.GetPhysicsVolume()"); }
	void RecalculateBaseEyeHeight() { NativeCall<void>(this, "APawn.RecalculateBaseEyeHeight()"); }
	void Reset() { NativeCall<void>(this, "APawn.Reset()"); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString*, FString*>(this, "APawn.GetHumanReadableName()", result); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "APawn.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void GetActorEyesViewPoint(UE::Math::TVector<double>* out_Location, UE::Math::TRotator<double>* out_Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APawn.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", out_Location, out_Rotation); }
	bool InFreeCam() { return NativeCall<bool>(this, "APawn.InFreeCam()"); }
	void OutsideWorldBounds() { NativeCall<void>(this, "APawn.OutsideWorldBounds()"); }
	void FaceRotation(UE::Math::TRotator<double>* NewControlRotation, float DeltaTime) { NativeCall<void, UE::Math::TRotator<double>*, float>(this, "APawn.FaceRotation(UE::Math::TRotator<double>,float,bool)", NewControlRotation, DeltaTime); }
	void DetachFromControllerPendingDestroy() { NativeCall<void>(this, "APawn.DetachFromControllerPendingDestroy()"); }
	AController* GetDamageInstigator(AController* InstigatedBy, const UDamageType* DamageType) { return NativeCall<AController*, AController*, const UDamageType*>(this, "APawn.GetDamageInstigator(AController*,UDamageType&)", InstigatedBy, DamageType); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "APawn.EnableInput(APlayerController*)", PlayerController); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "APawn.DisableInput(APlayerController*)", PlayerController); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "APawn.TeleportSucceeded(bool,bool)", bIsATest, bSimpleTeleport); }
	void PostNetReceiveVelocity(const UE::Math::TVector<double>* NewVelocity) { NativeCall<void, const UE::Math::TVector<double>*>(this, "APawn.PostNetReceiveVelocity(UE::Math::TVector<double>&)", NewVelocity); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APawn.PostNetReceiveLocationAndRotation()"); }
	bool IsBasedOnActor(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "APawn.IsBasedOnActor(AActor*)", Other); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APawn.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APawn.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void PreReplication(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "APawn.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	const FNavAgentProperties* GetNavAgentPropertiesRef() { return NativeCall<const FNavAgentProperties*>(this, "APawn.GetNavAgentPropertiesRef()"); }
	FVector* GetPawnViewLocation(FVector* result) { return NativeCall<FVector*, FVector*>(this, "APawn.GetPawnViewLocation()", result); }

	TEnumAsByte<EAutoReceiveInput::Type>& AutoPossessPlayerField() { return *GetNativePointerField<TEnumAsByte<EAutoReceiveInput::Type>*>(this, "APawn.AutoPossessPlayer"); }
	unsigned short& RemoteViewPitch16Field() { return *GetNativePointerField<unsigned short*>(this, "APawn.RemoteViewPitch16"); }
	unsigned char& RemoteViewPitchField() { return *GetNativePointerField<unsigned char*>(this, "APawn.RemoteViewPitch"); }
	FPawnControllerChangedSignature& ReceiveControllerChangedDelegateField() { return *GetNativePointerField<FPawnControllerChangedSignature*>(this, "APawn.ReceiveControllerChangedDelegate"); }
	FPawnRestartedSignature& ReceiveRestartedDelegateField() { return *GetNativePointerField<FPawnRestartedSignature*>(this, "APawn.ReceiveRestartedDelegate"); }
	FMovementTetherEvent& OnMovementTetherSetField() { return *GetNativePointerField<FMovementTetherEvent*>(this, "APawn.OnMovementTetherSet"); }
	BitFieldValue<bool, unsigned __int32> bUseBPFaceRotation() { return { this, "APawn.bUseBPFaceRotation"}; }
	const AActor* GetNetOwner() { return NativeCall<const AActor*>(this, "APawn.GetNetOwner()"); }
	void UpdateNavigationRelevance() { NativeCall<void>(this, "APawn.UpdateNavigationRelevance()"); }
	UE::Math::TVector<double>* GetGravityDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APawn.GetGravityDirection()", result); }
	void SetPlayerDefaults() { NativeCall<void>(this, "APawn.SetPlayerDefaults()"); }
	UE::Math::TRotator<double>* GetBaseAimRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APawn.GetBaseAimRotation()", result); }
	UPawnNoiseEmitterComponent* GetPawnNoiseEmitterComponent() { return NativeCall<UPawnNoiseEmitterComponent*>(this, "APawn.GetPawnNoiseEmitterComponent()"); }
	static AActor* GetMovementBaseActor(const APawn* Pawn) { return NativeCall<AActor*, const APawn*>(nullptr, "APawn.GetMovementBaseActor(APawn*)", Pawn); }
	void Internal_AddMovementInput(UE::Math::TVector<double>* WorldAccel, bool bForce) { if (!WorldAccel) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool>(this, "APawn.Internal_AddMovementInput(UE::Math::TVector<double>,bool)", *WorldAccel, bForce); }
	bool IsLocallyViewed() { return NativeCall<bool>(this, "APawn.IsLocallyViewed()"); }
	const FMovementBaseInterfaceData* GetMovementBaseInterfaceData() { return NativeCall<const FMovementBaseInterfaceData*>(this, "APawn.GetMovementBaseInterfaceData()"); }
	UObject* GetMovementBaseObject() { return NativeCall<UObject*>(this, "APawn.GetMovementBaseObject()"); }
	UE::Math::TQuat<double>* GetGravityTransform(UE::Math::TQuat<double>* result) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*>(this, "APawn.GetGravityTransform()", result); }
	UE::Math::TVector<double>* GetNavAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APawn.GetNavAgentLocation()", result); }
	UE::Math::TVector<double>* Internal_ConsumeMovementInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APawn.Internal_ConsumeMovementInputVector()", result); }
	void SetController(AController* InController) { NativeCall<void, AController*>(this, "APawn.SetController(AController*)", InController); }
	FMovementBaseInterfaceData* GetMovementBaseInterfaceData_Mutable() { return NativeCall<FMovementBaseInterfaceData*>(this, "APawn.GetMovementBaseInterfaceData_Mutable()"); }
	UE::Math::TVector<double>* ConsumeMovementInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APawn.ConsumeMovementInputVector()", result); }
	void PawnStartFire(unsigned char FireModeNum) { NativeCall<void, unsigned char>(this, "APawn.PawnStartFire(unsignedchar)", FireModeNum); }
	UPrimitiveComponent* GetMovementBase() { return NativeCall<UPrimitiveComponent*>(this, "APawn.GetMovementBase()"); }
	void SetPlayerState(APlayerState* NewPlayerState) { NativeCall<void, APlayerState*>(this, "APawn.SetPlayerState(APlayerState*)", NewPlayerState); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APawn.GetVelocity(bool)", result, bIsForRagdoll); }
	UE::Math::TRotator<double>* GetControlRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APawn.GetControlRotation()", result); }
	void DispatchRestart(bool bCallClientRestart) { NativeCall<void, bool>(this, "APawn.DispatchRestart(bool)", bCallClientRestart); }
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) { NativeCall<void, UInputComponent*>(this, "APawn.SetupPlayerInputComponent(UInputComponent*)", PlayerInputComponent); }
	void OnPlayerStateChanged(APlayerState* NewPlayerState, APlayerState* OldPlayerState) { NativeCall<void, APlayerState*, APlayerState*>(this, "APawn.OnPlayerStateChanged(APlayerState*,APlayerState*)", NewPlayerState, OldPlayerState); }
	UE::Math::TRotator<double>* GetViewRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APawn.GetViewRotation()", result); }
	void SetRemoteViewPitch(double NewRemoteViewPitch) { NativeCall<void, double>(this, "APawn.SetRemoteViewPitch(double)", NewRemoteViewPitch); }
	UPlayer* GetNetOwningPlayerAnyRole() { return NativeCall<UPlayer*>(this, "APawn.GetNetOwningPlayerAnyRole()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APawn._getUObject()"); }
	void OnRep_PlayerState() { NativeCall<void>(this, "APawn.OnRep_PlayerState()"); }
	UE::Math::TVector<double>* GetLastMovementInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APawn.GetLastMovementInputVector()", result); }
	void ReceivePossessed(AController* NewController) { NativeCall<void, AController*>(this, "APawn.ReceivePossessed(AController*)", NewController); }
};