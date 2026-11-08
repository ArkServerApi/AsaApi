#pragma once
#include "BulkForward.h"


struct AController : AActor
{
	// Fields

	TObjectPtr<APlayerState>& PlayerStateField() { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AController.PlayerState"); }
	TWeakObjectPtr<AActor>& StartSpotField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "AController.StartSpot"); }
	FInstigatedAnyDamageSignature& OnInstigatedAnyDamageField() { return *GetNativePointerField<FInstigatedAnyDamageSignature*>(this, "AController.OnInstigatedAnyDamage"); }
	FOnPossessedPawnChanged& OnPossessedPawnChangedField() { return *GetNativePointerField<FOnPossessedPawnChanged*>(this, "AController.OnPossessedPawnChanged"); }
	FName& StateNameField() { return *GetNativePointerField<FName*>(this, "AController.StateName"); }
	TObjectPtr<APawn>& PawnField() { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AController.Pawn"); }
	TWeakObjectPtr<APawn>& OldPawnField() { return *GetNativePointerField<TWeakObjectPtr<APawn>*>(this, "AController.OldPawn"); }
	TObjectPtr<ACharacter>& CharacterField() { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "AController.Character"); }
	TObjectPtr<USceneComponent>& TransformComponentField() { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AController.TransformComponent"); }
	TMulticastDelegate<void __cdecl(APawn*), FDefaultDelegateUserPolicy>& OnNewPawnField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(APawn*), FDefaultDelegateUserPolicy>*>(this, "AController.OnNewPawn"); }
	UE::Math::TRotator<double>& ControlRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AController.ControlRotation"); }
	unsigned __int8& IgnoreMoveInputField() { return *GetNativePointerField<unsigned __int8*>(this, "AController.IgnoreMoveInput"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAttachToPawn() { return { this, "AController.bAttachToPawn" }; }
	BitFieldValue<bool, unsigned __int32> bIsPlayerController() { return { this, "AController.bIsPlayerController" }; }
	BitFieldValue<bool, unsigned __int32> bCanPossessWithoutAuthority() { return { this, "AController.bCanPossessWithoutAuthority" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AController"); }
	void FailedToSpawnPawn() { NativeCall<void>(this, "AController.FailedToSpawnPawn()"); }
	void ClientSetRotation(UE::Math::TRotator<double>* NewRotation, bool bResetCamera) { NativeCall<void, UE::Math::TRotator<double>*, bool>(this, "AController.ClientSetRotation(UE::Math::TRotator<double>,bool)", NewRotation, bResetCamera); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAController();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	bool IsLocalController() { return NativeCall<bool>(this, "AController.IsLocalController()"); }
	void SetInitialLocationAndRotation(const UE::Math::TVector<double>* NewLocation, const UE::Math::TRotator<double>* NewRotation) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "AController.SetInitialLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	void SetControlRotation(const UE::Math::TRotator<double>* NewRotation) { NativeCall<void, const UE::Math::TRotator<double>*>(this, "AController.SetControlRotation(UE::Math::TRotator<double>&)", NewRotation); }
	void SetIgnoreMoveInput(bool bNewMoveInput) { NativeCall<void, bool>(this, "AController.SetIgnoreMoveInput(bool)", bNewMoveInput); }
	void ResetIgnoreMoveInput() { NativeCall<void>(this, "AController.ResetIgnoreMoveInput()"); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "AController.IsMoveInputIgnored()"); }
	void SetIgnoreLookInput(bool bNewLookInput) { NativeCall<void, bool>(this, "AController.SetIgnoreLookInput(bool)", bNewLookInput); }
	void ResetIgnoreLookInput() { NativeCall<void>(this, "AController.ResetIgnoreLookInput()"); }
	bool IsLookInputIgnored() { return NativeCall<bool>(this, "AController.IsLookInputIgnored()"); }
	void ResetIgnoreInputFlags() { NativeCall<void>(this, "AController.ResetIgnoreInputFlags()"); }
	void AttachToPawn(APawn* InPawn) { NativeCall<void, APawn*>(this, "AController.AttachToPawn(APawn*)", InPawn); }
	void DetachFromPawn() { NativeCall<void>(this, "AController.DetachFromPawn()"); }
	AActor* GetViewTarget() { return NativeCall<AActor*>(this, "AController.GetViewTarget()"); }
	void GetPlayerViewPoint(UE::Math::TVector<double>* out_Location, UE::Math::TRotator<double>* out_Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AController.GetPlayerViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", out_Location, out_Rotation); }
	bool LineOfSightTo(const AActor* Other, UE::Math::TVector<double>* ViewPoint, __int64 bAlternateChecks) { return NativeCall<bool, const AActor*, UE::Math::TVector<double>*, __int64>(this, "AController.LineOfSightTo(AActor*,UE::Math::TVector<double>,bool)", Other, ViewPoint, bAlternateChecks); }
	void PostInitializeComponents() { NativeCall<void>(this, "AController.PostInitializeComponents()"); }
	void Possess(APawn* InPawn) { NativeCall<void, APawn*>(this, "AController.Possess(APawn*)", InPawn); }
	void OnPossess(APawn* InPawn) { NativeCall<void, APawn*>(this, "AController.OnPossess(APawn*)", InPawn); }
	void UnPossess() { NativeCall<void>(this, "AController.UnPossess()"); }
	void OnUnPossess() { NativeCall<void>(this, "AController.OnUnPossess()"); }
	void PawnPendingDestroy(APawn* inPawn) { NativeCall<void, APawn*>(this, "AController.PawnPendingDestroy(APawn*)", inPawn); }
	void Reset() { NativeCall<void>(this, "AController.Reset()"); }
	void ClientSetLocation_Implementation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AController.ClientSetLocation_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", NewLocation, NewRotation); }
	void ClientSetRotation_Implementation(UE::Math::TRotator<double>* NewRotation, __int64 bResetCamera) { NativeCall<void, UE::Math::TRotator<double>*, __int64>(this, "AController.ClientSetRotation_Implementation(UE::Math::TRotator<double>,bool)", NewRotation, bResetCamera); }
	void RemovePawnTickDependency(APawn* InOldPawn) { NativeCall<void, APawn*>(this, "AController.RemovePawnTickDependency(APawn*)", InOldPawn); }
	void AddPawnTickDependency(APawn* NewPawn) { NativeCall<void, APawn*>(this, "AController.AddPawnTickDependency(APawn*)", NewPawn); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn*>(this, "AController.SetPawn(APawn*)", InPawn); }
	void OnRep_Pawn() { NativeCall<void>(this, "AController.OnRep_Pawn()"); }
	void OnRep_PlayerState() { NativeCall<void>(this, "AController.OnRep_PlayerState()"); }
	void Destroyed() { NativeCall<void>(this, "AController.Destroyed()"); }
	void CleanupPlayerState() { NativeCall<void>(this, "AController.CleanupPlayerState()"); }
	void InstigatedAnyDamage(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) { NativeCall<void, float, const UDamageType*, AActor*, AActor*>(this, "AController.InstigatedAnyDamage(float,UDamageType*,AActor*,AActor*)", Damage, DamageType, DamagedActor, DamageCauser); }
	void InitPlayerState() { NativeCall<void>(this, "AController.InitPlayerState()"); }
	void GetActorEyesViewPoint(UE::Math::TVector<double>* out_Location, UE::Math::TRotator<double>* out_Rotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AController.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", out_Location, out_Rotation); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "AController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString*, FString*>(this, "AController.GetHumanReadableName()", result); }
	void ChangeState(FName NewState) { NativeCall<void, FName>(this, "AController.ChangeState(FName)", NewState); }
	bool IsInState(FName InStateName) { return NativeCall<bool, FName>(this, "AController.IsInState(FName)", InStateName); }
	const FNavAgentProperties* GetNavAgentPropertiesRef() { return NativeCall<const FNavAgentProperties*>(this, "AController.GetNavAgentPropertiesRef()"); }
	void GetMoveGoalReachTest(const AActor* MovingActor, const UE::Math::TVector<double>* MoveOffset, UE::Math::TVector<double>* GoalOffset, float* GoalRadius, float* GoalHalfHeight) { NativeCall<void, const AActor*, const UE::Math::TVector<double>*, UE::Math::TVector<double>*, float*, float*>(this, "AController.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
	bool ShouldPostponePathUpdates() { return NativeCall<bool>(this, "AController.ShouldPostponePathUpdates()"); }
	bool IsFollowingAPath() { return NativeCall<bool>(this, "AController.IsFollowingAPath()"); }
	IPathFollowingAgentInterface* GetPathFollowingAgent() { return NativeCall<IPathFollowingAgentInterface*>(this, "AController.GetPathFollowingAgent()"); }
	void StopMovement() { NativeCall<void>(this, "AController.StopMovement()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool ShouldParticipateInSeamlessTravel() { return NativeCall<bool>(this, "AController.ShouldParticipateInSeamlessTravel()"); }
	void TickActor(float DeltaSeconds, ELevelTick TickType, FActorTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction*>(this, "AController.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaSeconds, TickType, ThisTickFunction); }

	unsigned char& IgnoreLookInputField() { return *GetNativePointerField<unsigned char*>(this, "AController.IgnoreLookInput"); }
	void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor*, bool>(this, "AController.GameHasEnded(AActor*,bool)", EndGameFocus, bIsWinner); }
	void EndInactiveState() { NativeCall<void>(this, "AController.EndInactiveState()"); }
	bool IsValidControlRotation(UE::Math::TRotator<double>* CheckRotation) { if (!CheckRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TRotator < double >>(this, "AController.IsValidControlRotation(UE::Math::TRotator<double>)", *CheckRotation); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AController.GetVelocity(bool)", result, bIsForRagdoll); }
	bool ClientSetLocation_Validate(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation) { if (!NewLocation) throw std::invalid_argument("Null native value parameter"); if (!NewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "AController.ClientSetLocation_Validate(UE::Math::TVector<double>,UE::Math::TRotator<double>)", *NewLocation, *NewRotation); }
	void K2_DestroyActor() { NativeCall<void>(this, "AController.K2_DestroyActor()"); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "AController.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	bool ClientSetRotation_Validate(UE::Math::TRotator<double>* NewRotation, bool bResetCamera) { if (!NewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TRotator < double >, bool>(this, "AController.ClientSetRotation_Validate(UE::Math::TRotator<double>,bool)", *NewRotation, bResetCamera); }
	void BeginInactiveState() { NativeCall<void>(this, "AController.BeginInactiveState()"); }
	UE::Math::TVector<double>* GetNavAgentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AController.GetNavAgentLocation()", result); }
	bool IsDinoController() { return NativeCall<bool>(this, "AController.IsDinoController()"); }
	bool IsLocalPlayerController() { return NativeCall<bool>(this, "AController.IsLocalPlayerController()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AController._getUObject()"); }
	UE::Math::TRotator<double>* GetDesiredRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AController.GetDesiredRotation()", result); }
	void CurrentLevelUnloaded() { NativeCall<void>(this, "AController.CurrentLevelUnloaded()"); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "AController.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	UE::Math::TRotator<double>* GetControlRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AController.GetControlRotation()", result); }
	void SetPlayerState(APlayerState* InPlayerState) { NativeCall<void, APlayerState*>(this, "AController.SetPlayerState(APlayerState*)", InPlayerState); }
	FName GetStateName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AController.GetStateName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void SetPawnFromRep(APawn* InPawn) { NativeCall<void, APawn*>(this, "AController.SetPawnFromRep(APawn*)", InPawn); }
};