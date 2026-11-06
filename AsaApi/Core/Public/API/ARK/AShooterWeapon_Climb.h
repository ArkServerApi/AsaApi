#pragma once
#include "BulkForward.h"


struct AShooterWeapon_Climb : AShooterWeapon_Melee
{
	// Fields

	float& MinStaminaToClimbField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.MinStaminaToClimb"); }
	unsigned __int8& PreviousClimbingModeField() { return *GetNativePointerField<unsigned __int8*>(this, "AShooterWeapon_Climb.PreviousClimbingMode"); }
	unsigned __int8& CurrentClimbingMovementTypeField() { return *GetNativePointerField<unsigned __int8*>(this, "AShooterWeapon_Climb.CurrentClimbingMovementType"); }
	//FVector_NetQuantize100& ClimbingAnchorPositionField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "AShooterWeapon_Climb.ClimbingAnchorPosition"); }
	FVector_NetQuantizeNormal& ClimbingAnchorNormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "AShooterWeapon_Climb.ClimbingAnchorNormal"); }
	TWeakObjectPtr<AActor>& ClimbingAttachedActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "AShooterWeapon_Climb.ClimbingAttachedActor"); }
	UE::Math::TVector<double>& PreviousClimbingAnchorPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.PreviousClimbingAnchorPosition"); }
	UE::Math::TVector<double>& PreviousClimbingAnchorNormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.PreviousClimbingAnchorNormal"); }
	UE::Math::TVector<double>& ClimbingDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.ClimbingDirection"); }
	UE::Math::TVector<double>& ClimbingAnchorDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.ClimbingAnchorDirection"); }
	float& ClimbingOvershootTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingOvershootTime"); }
	float& ClimbingLookingToSideField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingLookingToSide"); }
	USoundCue*& ClimbLowStaminaLoopSCField() { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Climb.ClimbLowStaminaLoopSC"); }
	UAudioComponent*& ClimbLowStaminaLoopACField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_Climb.ClimbLowStaminaLoopAC"); }
	float& ClimbLowStaminaPercentagePlaySoundField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbLowStaminaPercentagePlaySound"); }
	//FClimbingAnims& ClimbAnimsField() { return *GetNativePointerField<FClimbingAnims*>(this, "AShooterWeapon_Climb.ClimbAnims"); }
	//FWeaponAnim& TurnLeftAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnLeftAnim"); }
	//FWeaponAnim& TurnRightAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnRightAnim"); }
	//FWeaponAnim& TurnLeftAnimHangingField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnLeftAnimHanging"); }
	//FWeaponAnim& TurnRightAnimHangingField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnRightAnimHanging"); }
	UAnimSequence*& RightClimbingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.RightClimbingAnimation"); }
	UAnimSequence*& LeftClimbingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.LeftClimbingAnimation"); }
	UAnimSequence*& RightClimbingHangAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.RightClimbingHangAnimation"); }
	UAnimSequence*& LeftClimbingHangAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.LeftClimbingHangAnimation"); }
	UAnimSequence*& InventoryRightClimbAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryRightClimbAnimation"); }
	UAnimSequence*& InventoryLeftClimbAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryLeftClimbAnimation"); }
	UAnimSequence*& InventoryRightClimbHangAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryRightClimbHangAnimation"); }
	UAnimSequence*& InventoryLeftClimbHangAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "AShooterWeapon_Climb.InventoryLeftClimbHangAnimation"); }
	//FWeaponAnim& SlideDownLeftAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.SlideDownLeftAnim"); }
	//FWeaponAnim& SlideDownRightAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.SlideDownRightAnim"); }
	FName& LeftMesh1PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftMesh1PComponentName"); }
	FName& RightMesh1PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.RightMesh1PComponentName"); }
	FName& LeftMesh3PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftMesh3PComponentName"); }
	FName& RightMesh3PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.RightMesh3PComponentName"); }
	FName& LeftPickAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftPickAttachPoint3P"); }
	UStaticMeshComponent*& LeftMesh1PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.LeftMesh1P"); }
	UStaticMeshComponent*& RightMesh1PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.RightMesh1P"); }
	UStaticMeshComponent*& LeftMesh3PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.LeftMesh3P"); }
	UStaticMeshComponent*& RightMesh3PField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Climb.RightMesh3P"); }
	//TSubclassOf<UMatineeCameraShake>& ClimbPickHitCameraShakeField() { return *GetNativePointerField<TSubclassOf<UMatineeCameraShake>*>(this, "AShooterWeapon_Climb.ClimbPickHitCameraShake"); }
	//FBiomeZoneImpactEffect& LeftClimbImpactEffectsField() { return *GetNativePointerField<FBiomeZoneImpactEffect*>(this, "AShooterWeapon_Climb.LeftClimbImpactEffects"); }
	//FBiomeZoneImpactEffect& RightClimbImpactEffectsField() { return *GetNativePointerField<FBiomeZoneImpactEffect*>(this, "AShooterWeapon_Climb.RightClimbImpactEffects"); }
	FName& ImpactSocketNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.ImpactSocketName"); }
	int& MaxSpawnedImpactEffectsField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Climb.MaxSpawnedImpactEffects"); }
	UE::Math::TVector<double>& ServerCurrentClimbingDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.ServerCurrentClimbingDirection"); }
	float& UpdatingDirectionTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.UpdatingDirectionTime"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& ActiveImpactEffectsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Climb.ActiveImpactEffects"); }
	//TSubclassOf<UPrimalClimbingSettings>& ClimbingSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalClimbingSettings>*>(this, "AShooterWeapon_Climb.ClimbingSettingsClass"); }
	//UCameraModifier*& ActiveCameraModiferField() { return *GetNativePointerField<UCameraModifier**>(this, "AShooterWeapon_Climb.ActiveCameraModifer"); }
	float& ClimbingMinAttachedDurationBeforeAllowingDetachField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingMinAttachedDurationBeforeAllowingDetach"); }
	long double& ClimbingLastAttachedStartedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_Climb.ClimbingLastAttachedStartedTime"); }
	float& LastDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.LastDistance"); }
	UE::Math::TVector<double>& LastClimbInputVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.LastClimbInputVector"); }
	bool& bLastThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bLastThirdPersonPlayer"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bClimbingLeftArm() { return { this, "AShooterWeapon_Climb.bClimbingLeftArm" }; }
	BitFieldValue<bool, unsigned __int32> bInitialAttach() { return { this, "AShooterWeapon_Climb.bInitialAttach" }; }
	BitFieldValue<bool, unsigned __int32> bEarthquakeLocked() { return { this, "AShooterWeapon_Climb.bEarthquakeLocked" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Climb"); }
	void ServerRequestClimbMove(unsigned __int8 Type, UE::Math::TVector<double>* Direction, bool ClimbingLeftArm) { NativeCall<void, unsigned __int8, UE::Math::TVector<double>*, bool>(this, "AShooterWeapon_Climb.ServerRequestClimbMove(unsignedchar,UE::Math::TVector<double>,bool)", Type, Direction, ClimbingLeftArm); }
	void SetClimbingAnchorPoint(unsigned __int8 Type, unsigned __int8 Mode, FVector_NetQuantize100* Direction, FVector_NetQuantize100* Position, FVector_NetQuantizeNormal* Normal) { NativeCall<void, unsigned __int8, unsigned __int8, FVector_NetQuantize100*, FVector_NetQuantize100*, FVector_NetQuantizeNormal*>(this, "AShooterWeapon_Climb.SetClimbingAnchorPoint(unsignedchar,unsignedchar,FVector_NetQuantize100,FVector_NetQuantize100,FVector_NetQuantizeNormal)", Type, Mode, Direction, Position, Normal); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterWeapon_Climb();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	//const UPrimalClimbingSettings* GetClimbingSettingsFast() { return NativeCall<const UPrimalClimbingSettings*>(this, "AShooterWeapon_Climb.GetClimbingSettingsFast()"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterWeapon_Climb.BeginPlay()"); }
	void Destroyed(__int16 a2) { NativeCall<void, __int16>(this, "AShooterWeapon_Climb.Destroyed()", a2); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Climb.Tick(float)", DeltaSeconds); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterWeapon_Climb.PostInitializeComponents()"); }
	void PreApplyAccumulatedForces(float DeltaSeconds, UE::Math::TVector<double>* PendingImpulseToApply, UE::Math::TVector<double>* PendingForceToApply) { NativeCall<void, float, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.PreApplyAccumulatedForces(float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", DeltaSeconds, PendingImpulseToApply, PendingForceToApply); }
	bool GetAimOffsets(float DeltaTime, UE::Math::TRotator<double>* RootRotOffset, float* RootYawSpeed, float MaxYawAimClamp, UE::Math::TVector<double>* RootLocOffset, UE::Math::TRotator<double>* CurrentAimRot, UE::Math::TVector<double>* CurrentRootLoc, UE::Math::TVector<double>* TargetRootLoc, UE::Math::TRotator<double>* TargetAimRot) { return NativeCall<bool, float, UE::Math::TRotator<double>*, float*, float, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "AShooterWeapon_Climb.GetAimOffsets(float,UE::Math::TRotator<double>&,float&,float,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, CurrentAimRot, CurrentRootLoc, TargetRootLoc, TargetAimRot); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.StartFire(bool)", bFromGamepad); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon_Climb.StartAltFire()"); }
	void StopAltFire() { NativeCall<void>(this, "AShooterWeapon_Climb.StopAltFire()"); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Climb.AttachOtherMeshes()"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Climb.DetachOtherMeshes()"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.UpdateFirstPersonMeshes(bool)", bIsFirstPerson); }
	void ApplyPrimalItemSettingsToWeapon(bool bShallowUpdate) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ApplyPrimalItemSettingsToWeapon(bool)", bShallowUpdate); }
	bool ShouldOverrideOpenInventory() { return NativeCall<bool>(this, "AShooterWeapon_Climb.ShouldOverrideOpenInventory()"); }
	//const FWeaponAnim* GetOpenInventoryAnim() { return NativeCall<const FWeaponAnim*>(this, "AShooterWeapon_Climb.GetOpenInventoryAnim()"); }
	UAnimSequence* GetStandingAnimation_Implementation(float* OutBlendInTime, float* OutBlendOutTime) { return NativeCall<UAnimSequence*, float*, float*>(this, "AShooterWeapon_Climb.GetStandingAnimation_Implementation(float&,float&)", OutBlendInTime, OutBlendOutTime); }
	bool AllowStatusRecovery() { return NativeCall<bool>(this, "AShooterWeapon_Climb.AllowStatusRecovery()"); }
	void TryClimbMove(EClimbingType::Type WithClimbingType, const UE::Math::TVector<double>* MoveDirection) { NativeCall<void, EClimbingType::Type, const UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.TryClimbMove(EClimbingType::Type,UE::Math::TVector<double>&)", WithClimbingType, MoveDirection); }
	bool CanMeleeAttack(bool a2) { return NativeCall<bool, bool>(this, "AShooterWeapon_Climb.CanMeleeAttack()", a2); }
	void SetClimbingAnchorPoint_Implementation(unsigned __int8 Type, unsigned __int8 Mode, FVector_NetQuantize100* Direction, FVector_NetQuantize100* Position, FVector_NetQuantizeNormal* Normal) { NativeCall<void, unsigned __int8, unsigned __int8, FVector_NetQuantize100*, FVector_NetQuantize100*, FVector_NetQuantizeNormal*>(this, "AShooterWeapon_Climb.SetClimbingAnchorPoint_Implementation(unsignedchar,unsignedchar,FVector_NetQuantize100,FVector_NetQuantize100,FVector_NetQuantizeNormal)", Type, Mode, Direction, Position, Normal); }
	void ReleaseClimbingAnchor(bool bWithJump, UE::Math::TVector<double>* InputDir, bool bForceMinTimeCheckBeforeReleasing) { NativeCall<void, bool, UE::Math::TVector<double>*, bool>(this, "AShooterWeapon_Climb.ReleaseClimbingAnchor(bool,UE::Math::TVector<double>,bool)", bWithJump, InputDir, bForceMinTimeCheckBeforeReleasing); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AShooterWeapon_Climb.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void ServerReleaseClimbingAnchor_Implementation(bool bWithJump, FVector_NetQuantizeNormal* InputDir, bool bForceMinTimeCheckBeforeReleasing) { NativeCall<void, bool, FVector_NetQuantizeNormal*, bool>(this, "AShooterWeapon_Climb.ServerReleaseClimbingAnchor_Implementation(bool,FVector_NetQuantizeNormal,bool)", bWithJump, InputDir, bForceMinTimeCheckBeforeReleasing); }
	void ServerRequestClimbMove_Implementation(unsigned __int8 Type, UE::Math::TVector<double>* Direction, bool ClimbingLeftArm) { NativeCall<void, unsigned __int8, UE::Math::TVector<double>*, bool>(this, "AShooterWeapon_Climb.ServerRequestClimbMove_Implementation(unsignedchar,UE::Math::TVector<double>,bool)", Type, Direction, ClimbingLeftArm); }
	void ServerPerformTurn_Implementation(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerPerformTurn_Implementation(bool)", ClimbingLeftArm); }
	void ServerSetClimbingLeftArm_Implementation(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerSetClimbingLeftArm_Implementation(bool)", ClimbingLeftArm); }
	void ClientNotifyNoClimbSurface_Implementation() { NativeCall<void>(this, "AShooterWeapon_Climb.ClientNotifyNoClimbSurface_Implementation()"); }
	void PlayClimbAnim(unsigned __int8 Type, unsigned __int8 AnimationType) { NativeCall<void, unsigned __int8, unsigned __int8>(this, "AShooterWeapon_Climb.PlayClimbAnim(unsignedchar,unsignedchar)", Type, AnimationType); }
	//FWeaponAnim* SelectMeleeAttackAnim(FWeaponAnim* result, int ForceSelectedAnim) { return NativeCall<FWeaponAnim*, FWeaponAnim*, int>(this, "AShooterWeapon_Climb.SelectMeleeAttackAnim(int)", result, ForceSelectedAnim); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterWeapon_Climb.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void CalculateClimbDirections(UE::Math::TVector<double>* UseClimbingDirection, UE::Math::TVector<double>* AdjustedAnchorDir, UE::Math::TVector<double>* OutTraceMove, UE::Math::TVector<double>* OutTraceDir) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.CalculateClimbDirections(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", UseClimbingDirection, AdjustedAnchorDir, OutTraceMove, OutTraceDir); }
	bool ClimbTrace(FHitResult* HitResult, unsigned __int8 Type, UE::Math::TVector<double>* Direction, ECollisionChannel Channel) { return NativeCall<bool, FHitResult*, unsigned __int8, UE::Math::TVector<double>*, ECollisionChannel>(this, "AShooterWeapon_Climb.ClimbTrace(FHitResult&,unsignedchar,UE::Math::TVector<double>,ECollisionChannel)", HitResult, Type, Direction, Channel); }
	bool CanLandOnSurface(const FHitResult* HitResult) { return NativeCall<bool, const FHitResult*>(this, "AShooterWeapon_Climb.CanLandOnSurface(FHitResult&)", HitResult); }
	bool CanClimbOnSurface(const FHitResult* HitResult) { return NativeCall<bool, const FHitResult*>(this, "AShooterWeapon_Climb.CanClimbOnSurface(FHitResult&)", HitResult); }
	void UpdateClimbDirection(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Climb.UpdateClimbDirection(float)", DeltaSeconds); }
	bool ClimbingPositionTrace(const UE::Math::TVector<double>* TraceStart, const UE::Math::TVector<double>* TraceNormal, UE::Math::TVector<double>* OutDirection, float* OutDistance) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, UE::Math::TVector<double>*, float*>(this, "AShooterWeapon_Climb.ClimbingPositionTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>*,float*)", TraceStart, TraceNormal, OutDirection, OutDistance); }
	void UpdateClimbing(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Climb.UpdateClimbing(float)", DeltaSeconds); }
	bool IsClimbing() { return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbing()"); }
	bool ShouldShowTargetingArray() { return NativeCall<bool>(this, "AShooterWeapon_Climb.ShouldShowTargetingArray()"); }
	bool IsClimbingHanging() { return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbingHanging()"); }
	bool IsHitInvisibleWall(const FHitResult* HitResult) { return NativeCall<bool, const FHitResult*>(this, "AShooterWeapon_Climb.IsHitInvisibleWall(FHitResult&)", HitResult); }
	void ClearImpactEffects() { NativeCall<void>(this, "AShooterWeapon_Climb.ClearImpactEffects()"); }
	bool MustForceFPV() { return NativeCall<bool>(this, "AShooterWeapon_Climb.MustForceFPV()"); }
	void AttemptForceTPV() { NativeCall<void>(this, "AShooterWeapon_Climb.AttemptForceTPV()"); }
	bool AllowUnequip_Implementation() { return NativeCall<bool>(this, "AShooterWeapon_Climb.AllowUnequip_Implementation()"); }

	unsigned char& ClimbingModeField() { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.ClimbingMode"); }
	unsigned char& ClimbingTypeField() { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.ClimbingType"); }
	unsigned char& ServerCurrentClimbingTypeField() { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_Climb.ServerCurrentClimbingType"); }
	bool& bHasAValidClimbingTargetField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bHasAValidClimbingTarget"); }
	bool& bForcedTPVField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bForcedTPV"); }
	bool& bFellFromQuakeField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bFellFromQuake"); }

	FVector_NetQuantize100& ClimbingAnchorPositionField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "AShooterWeapon_Climb.ClimbingAnchorPosition"); }
	FClimbingAnims& ClimbAnimsField() { return *GetNativePointerField<FClimbingAnims*>(this, "AShooterWeapon_Climb.ClimbAnims"); }
	FWeaponAnim& TurnLeftAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnLeftAnim"); }
	FWeaponAnim& TurnRightAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnRightAnim"); }
	FWeaponAnim& TurnLeftAnimHangingField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnLeftAnimHanging"); }
	FWeaponAnim& TurnRightAnimHangingField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnRightAnimHanging"); }
	FWeaponAnim& SlideDownLeftAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.SlideDownLeftAnim"); }
	FWeaponAnim& SlideDownRightAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.SlideDownRightAnim"); }
	FBiomeZoneImpactEffect& LeftClimbImpactEffectsField() { return *GetNativePointerField<FBiomeZoneImpactEffect*>(this, "AShooterWeapon_Climb.LeftClimbImpactEffects"); }
	FBiomeZoneImpactEffect& RightClimbImpactEffectsField() { return *GetNativePointerField<FBiomeZoneImpactEffect*>(this, "AShooterWeapon_Climb.RightClimbImpactEffects"); }
	UCameraModifier*& ActiveCameraModiferField() { return *GetNativePointerField<UCameraModifier**>(this, "AShooterWeapon_Climb.ActiveCameraModifer"); }
	BitFieldValue<bool, unsigned char> bPreventJumpingRotationChangeOnSmallDelta() { return { this, "AShooterWeapon_Climb.bPreventJumpingRotationChangeOnSmallDelta"}; }
	static void SetClimbingAnchorPosition_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_Climb.SetClimbingAnchorPosition_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsClimbingUp() { return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbingUp()"); }
	static void GetClimbingType_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_Climb.GetClimbingType_WrapperImpl(void*,void*)", Object, OutValue); }
	EClimbingAnimationType::Type GetClimbingMovementType() { return NativeCall<EClimbingAnimationType::Type>(this, "AShooterWeapon_Climb.GetClimbingMovementType()"); }
	UE::Math::TVector<double>* GetViewDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.GetViewDirection()", result); }
	static void SetClimbingType_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_Climb.SetClimbingType_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetClimbingAnchorPosition_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_Climb.GetClimbingAnchorPosition_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, const UE::Math::TVector<double>& AnchorPosition, const UE::Math::TVector<double>& AnchorNormal, bool bCanClimb, bool bCanLand, const UE::Math::TVector<double>& ClimbLocation, const UE::Math::TVector<double>& ClimbNormal, bool bHudVisible) { NativeCall<void, float, bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool, bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool>(this, "AShooterWeapon_Climb.BPUpdateClimbTarget(float,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", DeltaSeconds, bClimbing, AnchorPosition, AnchorNormal, bCanClimb, bCanLand, ClimbLocation, ClimbNormal, bHudVisible); }
	const UPrimalClimbingSettings& GetClimbingSettingsFast() { return NativeCall<const UPrimalClimbingSettings&>(this, "AShooterWeapon_Climb.GetClimbingSettingsFast()"); }
	void DrawDebugCapsuleTrace(const UWorld* InWorld, const UE::Math::TVector<double>& LineStart, const UE::Math::TVector<double>& LineEnd, float Radius, const FColor& Color, bool bPersistentLines, float LifeTime, unsigned char DepthPriority) { NativeCall<void, const UWorld*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, const FColor&, bool, float, unsigned char>(this, "AShooterWeapon_Climb.DrawDebugCapsuleTrace(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,FColor&,bool,float,unsignedchar)", InWorld, LineStart, LineEnd, Radius, Color, bPersistentLines, LifeTime, DepthPriority); }
	static void SetClimbingMode_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_Climb.SetClimbingMode_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetClimbingMode_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_Climb.GetClimbingMode_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetClimbingAnchorNormal_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "AShooterWeapon_Climb.GetClimbingAnchorNormal_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetClimbingAnchorNormal_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "AShooterWeapon_Climb.SetClimbingAnchorNormal_WrapperImpl(void*,void*)", Object, InValue); }
	void GetPitchMinMax(float& outMin, float& outMax) { NativeCall<void, float&, float&>(this, "AShooterWeapon_Climb.GetPitchMinMax(float&,float&)", outMin, outMax); }
	void ServerSetClimbingLeftArm(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerSetClimbingLeftArm(bool)", ClimbingLeftArm); }
	void ClientNotifyNoClimbSurface() { NativeCall<void>(this, "AShooterWeapon_Climb.ClientNotifyNoClimbSurface()"); }
	void ServerPerformTurn(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerPerformTurn(bool)", ClimbingLeftArm); }
	const FWeaponAnim* GetOpenInventoryAnim() { return NativeCall<const FWeaponAnim*>(this, "AShooterWeapon_Climb.GetOpenInventoryAnim()"); }
	UE::Math::TVector<double>* GetViewLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AShooterWeapon_Climb.GetViewLocation()", result); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Climb"); }
};