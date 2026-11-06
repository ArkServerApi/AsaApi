#pragma once
#include "BulkForward.h"


struct APrimalPawn : APawn
{
	// Fields

	FRotator_NetQuantizeSmartPitch& LastMovementDesiredRotationField() { return *GetNativePointerField<FRotator_NetQuantizeSmartPitch*>(this, "APrimalPawn.LastMovementDesiredRotation"); }
	float& HarvestingDestructionMeshRangeMultiplerField() { return *GetNativePointerField<float*>(this, "APrimalPawn.HarvestingDestructionMeshRangeMultipler"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUseBPPreventMovementMode() { return { this, "APrimalPawn.bUseBPPreventMovementMode" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateDesiredRotation() { return { this, "APrimalPawn.bReplicateDesiredRotation" }; }
	BitFieldValue<bool, unsigned __int32> bIsPlayingTurningAnim() { return { this, "APrimalPawn.bIsPlayingTurningAnim" }; }
	BitFieldValue<bool, unsigned __int32> bClearOnConsume() { return { this, "APrimalPawn.bClearOnConsume" }; }
	BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PreRep() { return { this, "APrimalPawn.bUse_ModifySavedMoveAcceleration_PreRep" }; }
	BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PostRep() { return { this, "APrimalPawn.bUse_ModifySavedMoveAcceleration_PostRep" }; }
	BitFieldValue<bool, unsigned __int32> bSetDefaultMovementMode() { return { this, "APrimalPawn.bSetDefaultMovementMode" }; }

	// Functions

	AController* GetCharacterController() { return NativeCall<AController*>(this, "APrimalPawn.GetCharacterController()"); }
	void SetLastMovementDesiredRotation(const UE::Math::TRotator<double>* InRotation) { NativeCall<void, const UE::Math::TRotator<double>*>(this, "APrimalPawn.SetLastMovementDesiredRotation(UE::Math::TRotator<double>&)", InRotation); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPawn"); }
	void InterceptInputEvent(const FString* InputName) { NativeCall<void, const FString*>(this, "APrimalPawn.InterceptInputEvent(FString&)", InputName); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalPawn();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalPawn.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool AllowMovementMode(EMovementMode NewMovementMode, unsigned __int8 NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned __int8>(this, "APrimalPawn.AllowMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	bool PreventMovementMode(EMovementMode NewMovementMode, unsigned __int8 NewCustomMode) { return NativeCall<bool, EMovementMode, unsigned __int8>(this, "APrimalPawn.PreventMovementMode(EMovementMode,unsignedchar)", NewMovementMode, NewCustomMode); }
	APlayerController* GetOwnerController() { return NativeCall<APlayerController*>(this, "APrimalPawn.GetOwnerController()"); }
	bool IsLocallyControlledByPlayer() { return NativeCall<bool>(this, "APrimalPawn.IsLocallyControlledByPlayer()"); }
	void InitInputComponent() { NativeCall<void>(this, "APrimalPawn.InitInputComponent()"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPawn"); }

	BitFieldValue<bool, unsigned __int32> bUseBPCanCombineMoves() { return { this, "APrimalPawn.bUseBPCanCombineMoves"}; }
	BitFieldValue<bool, unsigned char> bPreventHUDInitialization() { return { this, "APrimalPawn.bPreventHUDInitialization"}; }
	void InterceptInputEvent_Implementation(const FString& InputName) { NativeCall<void, const FString&>(this, "APrimalPawn.InterceptInputEvent_Implementation(FString&)", InputName); }
	bool BPAcknowledgeServerCorrection(float TimeStamp, UE::Math::TVector<double>* NewLoc, UE::Math::TVector<double>* NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) { if (!NewLoc) throw std::invalid_argument("Null native value parameter"); if (!NewVel) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UPrimitiveComponent *, FName, bool, bool, unsigned char>(this, "APrimalPawn.BPAcknowledgeServerCorrection(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", TimeStamp, *NewLoc, *NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	bool BasedOnDynamicActorUseFallingLateralFriction() { return NativeCall<bool>(this, "APrimalPawn.BasedOnDynamicActorUseFallingLateralFriction()"); }
	float ModifyAirControl(float AirControlIn) { return NativeCall<float, float>(this, "APrimalPawn.ModifyAirControl(float)", AirControlIn); }
	bool ShouldIKBeForceDisabled() { return NativeCall<bool>(this, "APrimalPawn.ShouldIKBeForceDisabled()"); }
	UE::Math::TRotator<double>* BPModifyRootMotionDeltaRotation_Implementation(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& Delta) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "APrimalPawn.BPModifyRootMotionDeltaRotation_Implementation(UE::Math::TRotator<double>&)", result, Delta); }
	UE::Math::TVector<double>* GetLastSweepLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalPawn.GetLastSweepLocation()", result); }
	bool AllowTreadWater() { return NativeCall<bool>(this, "APrimalPawn.AllowTreadWater()"); }
	void ResetCollisionSweepLocation(const UE::Math::TVector<double>& newLocation, bool bForceReset) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "APrimalPawn.ResetCollisionSweepLocation(UE::Math::TVector<double>&,bool)", newLocation, bForceReset); }
	AActor* GetTargetingPlayer() { return NativeCall<AActor*>(this, "APrimalPawn.GetTargetingPlayer()"); }
	bool IsAwaitingSeamlessTravelController() { return NativeCall<bool>(this, "APrimalPawn.IsAwaitingSeamlessTravelController()"); }
	bool WantsVesselPhysics() { return NativeCall<bool>(this, "APrimalPawn.WantsVesselPhysics()"); }
	void GetExtraSaveMovedData(FSavedMove_Character* ForMove) { NativeCall<void, FSavedMove_Character*>(this, "APrimalPawn.GetExtraSaveMovedData(FSavedMove_Character*)", ForMove); }
	float BPAdjustMoveDeltaTime(float CurrentDeltaTime) { return NativeCall<float, float>(this, "APrimalPawn.BPAdjustMoveDeltaTime(float)", CurrentDeltaTime); }
	void BPSetupPlayerInputComponent_Implementation(UInputComponent* ForInputComponent) { NativeCall<void, UInputComponent*>(this, "APrimalPawn.BPSetupPlayerInputComponent_Implementation(UInputComponent*)", ForInputComponent); }
	bool WalkingAllowCheckFall(const UE::Math::TVector<double>& DeltaWalk) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalPawn.WalkingAllowCheckFall(UE::Math::TVector<double>&)", DeltaWalk); }
	int WasAllowedToTickThisFrame() { return NativeCall<int>(this, "APrimalPawn.WasAllowedToTickThisFrame()"); }
	bool UseHighQualityMovement() { return NativeCall<bool>(this, "APrimalPawn.UseHighQualityMovement()"); }
	bool ShouldStillAllowRequestedMoveAcceleration() { return NativeCall<bool>(this, "APrimalPawn.ShouldStillAllowRequestedMoveAcceleration()"); }
	bool ModifyInputAcceleration(UE::Math::TVector<double>& InputAcceleration) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "APrimalPawn.ModifyInputAcceleration(UE::Math::TVector<double>&)", InputAcceleration); }
	bool AllowJumpOutOfWaterOnto(AActor* Jumper) { return NativeCall<bool, AActor*>(this, "APrimalPawn.AllowJumpOutOfWaterOnto(AActor*)", Jumper); }
	void ModifyDesiredRotation(UE::Math::TRotator<double>& InDesiredRotation, float DeltaTime, bool& bRequestMove) { NativeCall<void, UE::Math::TRotator<double>&, float, bool&>(this, "APrimalPawn.ModifyDesiredRotation(UE::Math::TRotator<double>&,float,bool&)", InDesiredRotation, DeltaTime, bRequestMove); }
	bool BP_PreventMovementMode(EMovementMode newMovementMode, unsigned char newCustomMode) { return NativeCall<bool, EMovementMode, unsigned char>(this, "APrimalPawn.BP_PreventMovementMode(EMovementMode,unsignedchar)", newMovementMode, newCustomMode); }
	float GetSpeedModifier() { return NativeCall<float>(this, "APrimalPawn.GetSpeedModifier()"); }
	void NotifyBumpedStructure(AActor* BumpedStructure) { NativeCall<void, AActor*>(this, "APrimalPawn.NotifyBumpedStructure(AActor*)", BumpedStructure); }
	float GetRotationRateModifier() { return NativeCall<float>(this, "APrimalPawn.GetRotationRateModifier()"); }
	bool AllowTickPhysics() { return NativeCall<bool>(this, "APrimalPawn.AllowTickPhysics()"); }
	void BPSetupPlayerInputComponent(UInputComponent* ForInputComponent) { NativeCall<void, UInputComponent*>(this, "APrimalPawn.BPSetupPlayerInputComponent(UInputComponent*)", ForInputComponent); }
	bool WalkingAllowCheckFloor(const UE::Math::TVector<double>& DeltaWalk) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APrimalPawn.WalkingAllowCheckFloor(UE::Math::TVector<double>&)", DeltaWalk); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn*>(this, "APrimalPawn.NotifyBumpedPawn(APawn*)", BumpedPawn); }
	bool OverrideForcePreventExitingWater() { return NativeCall<bool>(this, "APrimalPawn.OverrideForcePreventExitingWater()"); }
	bool ForceAllowBackwardsMovement() { return NativeCall<bool>(this, "APrimalPawn.ForceAllowBackwardsMovement()"); }
	bool BPCanCombineMoves() { return NativeCall<bool>(this, "APrimalPawn.BPCanCombineMoves()"); }
	UE::Math::TRotator<double>* BPModifyRootMotionDeltaRotation(UE::Math::TRotator<double>* result, const UE::Math::TRotator<double>& Delta) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const UE::Math::TRotator<double>&>(this, "APrimalPawn.BPModifyRootMotionDeltaRotation(UE::Math::TRotator<double>&)", result, Delta); }
	bool CanMove() { return NativeCall<bool>(this, "APrimalPawn.CanMove()"); }
	TArray<APawn*, TSizedDefaultAllocator<32> >* GetTrueBasedPawns(TArray<APawn*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<APawn*, TSizedDefaultAllocator<32> >*, TArray<APawn*, TSizedDefaultAllocator<32> >*>(this, "APrimalPawn.GetTrueBasedPawns()", result); }
};