#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalBotCharacter : APrimalDinoCharacter
{
    // Fields

    //UAnimBlueprintGeneratedClass*& AlternateAnimBPField() { return *GetNativePointerField<UAnimBlueprintGeneratedClass**>(this, "APrimalBotCharacter.AlternateAnimBP"); }
    
    
    
    
    
    // Unavailable in UE 5.8.3: current overload already exists; this old accessor is disabled
	// bool& bIsStationaryField();
    TWeakObjectPtr<APrimalDinoCharacter>& DinoBeingRiddenField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalBotCharacter.DinoBeingRidden"); }
    TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >& AnimSequenceOverridesField() { return *GetNativePointerField<TMap<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UAnimSequence>, TSoftObjectPtr<UAnimSequence>, 0> >*>(this, "APrimalBotCharacter.AnimSequenceOverrides"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBotCharacter"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalBotCharacter();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalBotCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalBotCharacter.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalBotCharacter.BeginPlay()"); }
    bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalBotCharacter.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBotCharacter.Tick(float)", DeltaSeconds); }
    bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "APrimalBotCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
    float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalBotCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    void AttachToDino(APrimalDinoCharacter* Dino) { static_cast<void>(NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotCharacter.AttachToDino(APrimalDinoCharacter*)", Dino)); }
    APrimalDinoCharacter* CurrentlyRiddenDino() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotCharacter.CurrentlyRiddenDino()"); }
    void ClearRidingDino() { static_cast<void>(NativeCall<bool>(this, "APrimalBotCharacter.ClearRidingDino()")); }
    UAnimSequence* GetDinoRidingAnimation() { return NativeCall<UAnimSequence*>(this, "APrimalBotCharacter.GetDinoRidingAnimation()"); }
    UAnimSequence* GetDinoRidingMoveAnimation() { return NativeCall<UAnimSequence*>(this, "APrimalBotCharacter.GetDinoRidingMoveAnimation()"); }
    float GetMinAttackRange() { return NativeCall<float>(this, "APrimalBotCharacter.GetMinAttackRange()"); }
    float GetMaxAttackRange() { return NativeCall<float>(this, "APrimalBotCharacter.GetMaxAttackRange()"); }
    void InitializeAnimOverrides() { NativeCall<void>(this, "APrimalBotCharacter.InitializeAnimOverrides()"); }
    UAnimSequence* GetBotAnimSequenceOverride(UAnimSequence* AnimSeq) { return NativeCall<UAnimSequence*, UAnimSequence*>(this, "APrimalBotCharacter.GetBotAnimSequenceOverride(UAnimSequence*)", AnimSeq); }
    FPrimalBotCharacterSparseClassData* GetPrimalBotCharacterSparseClassData(EGetSparseClassDataMethod GetMethod)
    {
        return (FPrimalBotCharacterSparseClassData*)this->ClassPrivateField()->GetSparseClassData(GetMethod);
    }



	double& LastTimeEquippedWeaponField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastTimeEquippedWeapon"); }
	double& LastTimeWasAttackingField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastTimeWasAttacking"); }
	double& LastTimeBlockedWithShieldField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastTimeBlockedWithShield"); }
	double& LastTimeDidForceUpdateCharactersField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastTimeDidForceUpdateCharacters"); }
	double& LastTimeDetectedSleepingAnimWhileAwakeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastTimeDetectedSleepingAnimWhileAwake"); }
	double& LastTimeCheckedShouldMoveTowardsTargetWithinAttackRangeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastTimeCheckedShouldMoveTowardsTargetWithinAttackRange"); }
	double& LastFireTimeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastFireTime"); }
	double& LastReleaseSeatingStructureTimeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastReleaseSeatingStructureTime"); }
	double& LastControlSeatingStructureTimeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastControlSeatingStructureTime"); }
	double& LastStartedRidingTimeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastStartedRidingTime"); }
	double& LastStoppedRidingTimeField() { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastStoppedRidingTime"); }
	float& PercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.PercentOfFullFacialHairGrowth"); }
	float& PercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.PercentOfFullHeadHairGrowth"); }
	float& DodgeCooldownField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeCooldown"); }
	float& DodgeDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeDistance"); }
	float& DodgeSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeSpeed"); }
	float& DodgeChanceField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeChance"); }
	float& CheckDodgeIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.CheckDodgeInterval"); }
	float& SeatedViewRotationYawField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.SeatedViewRotationYaw"); }
	float& SeatedViewRotationPitchField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.SeatedViewRotationPitch"); }
	float& BodyScaleField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.BodyScale"); }
	float& RemainingShieldBlockDamageField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.RemainingShieldBlockDamage"); }
	float& RemainingDodgeCooldownField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.RemainingDodgeCooldown"); }
	float& DodgeTimeElapsedField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeTimeElapsed"); }
	float& DodgeDurationField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeDuration"); }
	float& CheckDodgeCooldownField() { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.CheckDodgeCooldown"); }
	int& AttackIndexForDesiredAttackRangeField() { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.AttackIndexForDesiredAttackRange"); }
	int& CurrEquippedWeaponIndexField() { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.CurrEquippedWeaponIndex"); }
	int& SeatingStructureSeatNumberField() { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.SeatingStructureSeatNumber"); }
	int& LastEquippedWeaponIndexField() { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.LastEquippedWeaponIndex"); }
	unsigned char& FacialHairIndexField() { return *GetNativePointerField<unsigned char*>(this, "APrimalBotCharacter.FacialHairIndex"); }
	unsigned char& HeadHairIndexField() { return *GetNativePointerField<unsigned char*>(this, "APrimalBotCharacter.HeadHairIndex"); }
	unsigned char& EyebrowIndexField() { return *GetNativePointerField<unsigned char*>(this, "APrimalBotCharacter.EyebrowIndex"); }

	FPrimalBotCharacterSparseClassData* GetMutablePrimalBotCharacterSparseClassData() { return const_cast<FPrimalBotCharacterSparseClassData*>(GetPrimalBotCharacterSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& AlternateSkeletalMeshMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalBotCharacter.AlternateSkeletalMeshMaterials"); }
	UE::Math::TVector<double>& DodgeDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBotCharacter.DodgeDirection"); }
	UE::Math::TVector<double>& DodgeStartLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBotCharacter.DodgeStartLoc"); }
	UE::Math::TVector<double>& DodgeEndLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBotCharacter.DodgeEndLoc"); }
	UE::Math::TRotator<double>& SpawnedRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalBotCharacter.SpawnedRotation"); }
	UE::Math::TVector2<double>& TyrantsInfluenceEffectField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBotCharacter.TyrantsInfluenceEffect"); }
	FTimerHandle& EquipDefaultWeaponHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBotCharacter.EquipDefaultWeaponHandle"); }
	FTimerHandle& OnEquipFinishedHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBotCharacter.OnEquipFinishedHandle"); }
	FTimerHandle& OnUnEquipFinishedHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBotCharacter.OnUnEquipFinishedHandle"); }
	FTimerHandle& UnEquipHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBotCharacter.UnEquipHandle"); }
	FTimerHandle& FinishWeaponSwitchHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBotCharacter.FinishWeaponSwitchHandle"); }
	USkeletalMeshComponent*& HeadHairComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.HeadHairComponent"); }
	USkeletalMeshComponent*& FacialHairComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.FacialHairComponent"); }
	USkeletalMeshComponent*& EyebrowsComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.EyebrowsComponent"); }
	USkeletalMeshComponent*& EyelashesComponentField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.EyelashesComponent"); }
	USkeletalMesh*& AlternateSkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalBotCharacter.AlternateSkeletalMesh"); }
	UAnimBlueprintGeneratedClass*& AlternateAnimBPField() { return *GetNativePointerField<UAnimBlueprintGeneratedClass**>(this, "APrimalBotCharacter.AlternateAnimBP"); }
	UAnimMontage*& DodgeMontageField() { return *GetNativePointerField<UAnimMontage**>(this, "APrimalBotCharacter.DodgeMontage"); }
	UPrimaryDataAsset*& Bot_Voice_CollectionField() { return *GetNativePointerField<UPrimaryDataAsset**>(this, "APrimalBotCharacter.Bot_Voice_Collection"); }
	UPrimaryDataAsset*& Bot_Voice_Collection_FemaleField() { return *GetNativePointerField<UPrimaryDataAsset**>(this, "APrimalBotCharacter.Bot_Voice_Collection_Female"); }
	TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr>& SeatingStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr>*>(this, "APrimalBotCharacter.SeatingStructure"); }
	UAnimationAsset*& ReplicatedSleepAnimField() { return *GetNativePointerField<UAnimationAsset**>(this, "APrimalBotCharacter.ReplicatedSleepAnim"); }
	AShooterWeapon*& EquippedWeaponCDOField() { return *GetNativePointerField<AShooterWeapon**>(this, "APrimalBotCharacter.EquippedWeaponCDO"); }
	USkeletalMeshComponentWithSoftRef*& WeaponMeshCompField() { return *GetNativePointerField<USkeletalMeshComponentWithSoftRef**>(this, "APrimalBotCharacter.WeaponMeshComp"); }
	UStaticMeshComponent*& ProjectileMeshCompField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalBotCharacter.ProjectileMeshComp"); }
	AActor*& WeaponOwnerActorField() { return *GetNativePointerField<AActor**>(this, "APrimalBotCharacter.WeaponOwnerActor"); }
	UAudioComponent*& FireACField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBotCharacter.FireAC"); }
	UFXSystemComponent*& MuzzleFXSCField() { return *GetNativePointerField<UFXSystemComponent**>(this, "APrimalBotCharacter.MuzzleFXSC"); }
	EWeaponState::Type& CurrentWeaponStateField() { return *GetNativePointerField<EWeaponState::Type*>(this, "APrimalBotCharacter.CurrentWeaponState"); }
	FBotNotifyEvent& OnFullyInitializedField() { return *GetNativePointerField<FBotNotifyEvent*>(this, "APrimalBotCharacter.OnFullyInitialized"); }
	FBotRidingEvent& OnStartRidingField() { return *GetNativePointerField<FBotRidingEvent*>(this, "APrimalBotCharacter.OnStartRiding"); }
	FBotRidingEvent& OnStopRidingField() { return *GetNativePointerField<FBotRidingEvent*>(this, "APrimalBotCharacter.OnStopRiding"); }
	FBotSeatingEvent& OnSeatedField() { return *GetNativePointerField<FBotSeatingEvent*>(this, "APrimalBotCharacter.OnSeated"); }
	FBotSeatingEvent& OnUnseatedField() { return *GetNativePointerField<FBotSeatingEvent*>(this, "APrimalBotCharacter.OnUnseated"); }
	FBotWeaponEvent& OnWeaponEquippedField() { return *GetNativePointerField<FBotWeaponEvent*>(this, "APrimalBotCharacter.OnWeaponEquipped"); }
	FBotWeaponEvent& OnWeaponUnequippedField() { return *GetNativePointerField<FBotWeaponEvent*>(this, "APrimalBotCharacter.OnWeaponUnequipped"); }
	FBotTargetEvent& NotifyOnTargetChangedField() { return *GetNativePointerField<FBotTargetEvent*>(this, "APrimalBotCharacter.NotifyOnTargetChanged"); }
	BitFieldValue<bool, unsigned char> bIsCurrentAttackComplete() { return { this, "APrimalBotCharacter.bIsCurrentAttackComplete"}; }
	BitFieldValue<bool, unsigned char> bCanEverDodge() { return { this, "APrimalBotCharacter.bCanEverDodge"}; }
	BitFieldValue<bool, unsigned char> bIsRiding() { return { this, "APrimalBotCharacter.bIsRiding"}; }
	BitFieldValue<bool, unsigned char> bIsStationary() { return { this, "APrimalBotCharacter.bIsStationary"}; }
	BitFieldValue<bool, unsigned char> UseAltAimOffsetAnimation() { return { this, "APrimalBotCharacter.UseAltAimOffsetAnimation"}; }
	BitFieldValue<bool, unsigned char> bIsCookingGrenade() { return { this, "APrimalBotCharacter.bIsCookingGrenade"}; }
	BitFieldValue<bool, unsigned char> bIsOnSeatingStructure() { return { this, "APrimalBotCharacter.bIsOnSeatingStructure"}; }
	BitFieldValue<bool, unsigned char> bIsControllingBallista() { return { this, "APrimalBotCharacter.bIsControllingBallista"}; }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffset() { return { this, "APrimalBotCharacter.bUseBallistaAimOffset"}; }
	BitFieldValue<bool, unsigned char> bIsControllingStandingMountedTurret() { return { this, "APrimalBotCharacter.bIsControllingStandingMountedTurret"}; }
	BitFieldValue<bool, unsigned char> bUseBallistaAimOffset_StandingTurret() { return { this, "APrimalBotCharacter.bUseBallistaAimOffset_StandingTurret"}; }
	BitFieldValue<bool, unsigned char> bIsGuardPost() { return { this, "APrimalBotCharacter.bIsGuardPost"}; }
	BitFieldValue<bool, unsigned char> bAlwaysCheckBPCanRideDino() { return { this, "APrimalBotCharacter.bAlwaysCheckBPCanRideDino"}; }
	BitFieldValue<bool, unsigned char> bAlwaysCheckBPCanSitOnStructure() { return { this, "APrimalBotCharacter.bAlwaysCheckBPCanSitOnStructure"}; }
	BitFieldValue<bool, unsigned char> bReceivesTyrantsInfluence() { return { this, "APrimalBotCharacter.bReceivesTyrantsInfluence"}; }
	BitFieldValue<bool, unsigned char> bIsPlayingSleepAnim() { return { this, "APrimalBotCharacter.bIsPlayingSleepAnim"}; }
	BitFieldValue<bool, unsigned char> bUseBPSaveEvents() { return { this, "APrimalBotCharacter.bUseBPSaveEvents"}; }
	BitFieldValue<bool, unsigned char> bStatExploitApplied() { return { this, "APrimalBotCharacter.bStatExploitApplied"}; }
	BitFieldValue<bool, unsigned char> bSavedWithAnimSharingVersion() { return { this, "APrimalBotCharacter.bSavedWithAnimSharingVersion"}; }
	BitFieldValue<bool, unsigned char> bIsUsingAlternateMesh() { return { this, "APrimalBotCharacter.bIsUsingAlternateMesh"}; }
	BitFieldValue<bool, unsigned char> bDidInitializeAnimOverrides() { return { this, "APrimalBotCharacter.bDidInitializeAnimOverrides"}; }
	BitFieldValue<bool, unsigned char> bIsPullingBowString() { return { this, "APrimalBotCharacter.bIsPullingBowString"}; }
	BitFieldValue<bool, unsigned char> bPlayingShieldCoverAnimation() { return { this, "APrimalBotCharacter.bPlayingShieldCoverAnimation"}; }
	BitFieldValue<bool, unsigned char> bHasShieldEquipped() { return { this, "APrimalBotCharacter.bHasShieldEquipped"}; }
	BitFieldValue<bool, unsigned char> bHasMeleeWeaponEquipped() { return { this, "APrimalBotCharacter.bHasMeleeWeaponEquipped"}; }
	BitFieldValue<bool, unsigned char> bHasBowEquipped() { return { this, "APrimalBotCharacter.bHasBowEquipped"}; }
	BitFieldValue<bool, unsigned char> bHasInstantWeaponEquippped() { return { this, "APrimalBotCharacter.bHasInstantWeaponEquippped"}; }
	BitFieldValue<bool, unsigned char> bHasProjectileWeaponEquipped() { return { this, "APrimalBotCharacter.bHasProjectileWeaponEquipped"}; }
	BitFieldValue<bool, unsigned char> bHasGrenadeWeaponEquipped() { return { this, "APrimalBotCharacter.bHasGrenadeWeaponEquipped"}; }
	BitFieldValue<bool, unsigned char> bWasDodging() { return { this, "APrimalBotCharacter.bWasDodging"}; }
	BitFieldValue<bool, unsigned char> bDidCheckDodgeThisAttack() { return { this, "APrimalBotCharacter.bDidCheckDodgeThisAttack"}; }
	BitFieldValue<bool, unsigned char> bHadTarget() { return { this, "APrimalBotCharacter.bHadTarget"}; }
	BitFieldValue<bool, unsigned char> bShouldPlayAquireTargetAnim() { return { this, "APrimalBotCharacter.bShouldPlayAquireTargetAnim"}; }
	BitFieldValue<bool, unsigned char> bTryingToSitOnSeatingStructure() { return { this, "APrimalBotCharacter.bTryingToSitOnSeatingStructure"}; }
	BitFieldValue<bool, unsigned char> bTryingToReRideDino() { return { this, "APrimalBotCharacter.bTryingToReRideDino"}; }
	int BPOverrideColorIDForEquipmentAttachment(int InColorID) { return NativeCall<int, int>(this, "APrimalBotCharacter.BPOverrideColorIDForEquipmentAttachment(int)", InColorID); }
	void ClientsReleaseSeatingStructure(APrimalStructureSeating* FromSeatingStructure, bool bForce) { NativeCall<void, APrimalStructureSeating*, bool>(this, "APrimalBotCharacter.ClientsReleaseSeatingStructure(APrimalStructureSeating*,bool)", FromSeatingStructure, bForce); }
	bool ShouldDodge(bool bIsFromDamageEvent) { return NativeCall<bool, bool>(this, "APrimalBotCharacter.ShouldDodge(bool)", bIsFromDamageEvent); }
	bool IsControllingStandingMountedTurret() { return NativeCall<bool>(this, "APrimalBotCharacter.IsControllingStandingMountedTurret()"); }
	void OnDodgeStart_Implementation() { NativeCall<void>(this, "APrimalBotCharacter.OnDodgeStart_Implementation()"); }
	bool IsOnSeatingStructure() { return NativeCall<bool>(this, "APrimalBotCharacter.IsOnSeatingStructure()"); }
	void UpdateHair(bool bForceUpdate) { NativeCall<void, bool>(this, "APrimalBotCharacter.UpdateHair(bool)", bForceUpdate); }
	void ShouldHideHair(bool& outHideHeadHair, bool& outHideFacialHair) { NativeCall<void, bool&, bool&>(this, "APrimalBotCharacter.ShouldHideHair(bool&,bool&)", outHideHeadHair, outHideFacialHair); }
	void BPNotifyWeaponUnequipped() { NativeCall<void>(this, "APrimalBotCharacter.BPNotifyWeaponUnequipped()"); }
	void NetOnShieldBlocked(UE::Math::TVector<double>* HitLoc, AActor* DamageCauser, float DurabilityToLose) { if (!HitLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, AActor *, float>(this, "APrimalBotCharacter.NetOnShieldBlocked(UE::Math::TVector<double>,AActor*,float)", *HitLoc, DamageCauser, DurabilityToLose); }
	bool ShouldActivateNavigationInvokerComponent() { return NativeCall<bool>(this, "APrimalBotCharacter.ShouldActivateNavigationInvokerComponent()"); }
	bool GetShouldUseComplexTargeting() { return NativeCall<bool>(this, "APrimalBotCharacter.GetShouldUseComplexTargeting()"); }
	bool CanDodge() { return NativeCall<bool>(this, "APrimalBotCharacter.CanDodge()"); }
	void RefreshEquipmentColors() { NativeCall<void>(this, "APrimalBotCharacter.RefreshEquipmentColors()"); }
	bool BPPreventPlayTauntOrAcquireTargetAnim(AActor* ForTarget, bool bIsTaunt) { return NativeCall<bool, AActor*, bool>(this, "APrimalBotCharacter.BPPreventPlayTauntOrAcquireTargetAnim(AActor*,bool)", ForTarget, bIsTaunt); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned char>(this, "APrimalBotCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode); }
	UE::Math::TVector<double>* GetLookOffsetSocketLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBotCharacter.GetLookOffsetSocketLocation()", result); }
	void OnDodgeStart() { NativeCall<void>(this, "APrimalBotCharacter.OnDodgeStart()"); }
	bool ReleaseSeatingStructure(APrimalStructureSeating* FromSeatingStructure, bool bForce) { return NativeCall<bool, APrimalStructureSeating*, bool>(this, "APrimalBotCharacter.ReleaseSeatingStructure(APrimalStructureSeating*,bool)", FromSeatingStructure, bForce); }
	bool IsDodging(float TimeFromEndtoConsiderFinished) { return NativeCall<bool, float>(this, "APrimalBotCharacter.IsDodging(float)", TimeFromEndtoConsiderFinished); }
	void SetProjectileVisible(bool bNewVisibility) { NativeCall<void, bool>(this, "APrimalBotCharacter.SetProjectileVisible(bool)", bNewVisibility); }
	void EquipDefaultWeapon() { NativeCall<void>(this, "APrimalBotCharacter.EquipDefaultWeapon()"); }
	void BPOnUpdateWeaponMesh(bool bIsDestroy) { NativeCall<void, bool>(this, "APrimalBotCharacter.BPOnUpdateWeaponMesh(bool)", bIsDestroy); }
	void UpdateDodgeCooldown_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBotCharacter.UpdateDodgeCooldown_Implementation(float)", DeltaTime); }
	TArray<int, TSizedDefaultAllocator<32> >* GetAvailableWeaponsForAttackIndex(TArray<int, TSizedDefaultAllocator<32> >* result, int AttackIndex) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, int>(this, "APrimalBotCharacter.GetAvailableWeaponsForAttackIndex(int)", result, AttackIndex); }
	void BPAttachedToSeatingStructure(APrimalStructureSeating* ToSeatingStructure) { NativeCall<void, APrimalStructureSeating*>(this, "APrimalBotCharacter.BPAttachedToSeatingStructure(APrimalStructureSeating*)", ToSeatingStructure); }
	UE::Math::TVector<double>* CalcDodgeWorldDirection_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBotCharacter.CalcDodgeWorldDirection_Implementation()", result); }
	void BPPostSave() { NativeCall<void>(this, "APrimalBotCharacter.BPPostSave()"); }
	void CopyBoneModifiersToMesh(USkeletalMeshComponent* ToMesh) { NativeCall<void, USkeletalMeshComponent*>(this, "APrimalBotCharacter.CopyBoneModifiersToMesh(USkeletalMeshComponent*)", ToMesh); }
	void OnRep_RawBoneModifiers() { NativeCall<void>(this, "APrimalBotCharacter.OnRep_RawBoneModifiers()"); }
	void DestroyWeaponMeshes() { NativeCall<void>(this, "APrimalBotCharacter.DestroyWeaponMeshes()"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "APrimalBotCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void RefreshDefaultAttachments() { NativeCall<void>(this, "APrimalBotCharacter.RefreshDefaultAttachments()"); }
	void NetPlayFireBallistaAnimation_Implementation() { NativeCall<void>(this, "APrimalBotCharacter.NetPlayFireBallistaAnimation_Implementation()"); }
	void ClientsControlSeatingStructure(APrimalStructureSeating* Structure, int SeatNumber) { NativeCall<void, APrimalStructureSeating*, int>(this, "APrimalBotCharacter.ClientsControlSeatingStructure(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	bool IsSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "APrimalBotCharacter.IsSitting(bool)", bIgnoreLockedToSeat); }
	bool StartFireBallista() { return NativeCall<bool>(this, "APrimalBotCharacter.StartFireBallista()"); }
	bool TryEquipWeapon(int DesiredWeaponIndex) { return NativeCall<bool, int>(this, "APrimalBotCharacter.TryEquipWeapon(int)", DesiredWeaponIndex); }
	void UpdateDodge_Implementation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBotCharacter.UpdateDodge_Implementation(float)", DeltaSeconds); }
	void PrepareForSaving() { NativeCall<void>(this, "APrimalBotCharacter.PrepareForSaving()"); }
	void BPOnShieldBlockDamageDepleted(AActor* ByDamageCauser) { NativeCall<void, AActor*>(this, "APrimalBotCharacter.BPOnShieldBlockDamageDepleted(AActor*)", ByDamageCauser); }
	bool TryDodge() { return NativeCall<bool>(this, "APrimalBotCharacter.TryDodge()"); }
	void SetShieldVisible(bool bNewIsVisible) { NativeCall<void, bool>(this, "APrimalBotCharacter.SetShieldVisible(bool)", bNewIsVisible); }
	float BPGetMaxAttackRange() { return NativeCall<float>(this, "APrimalBotCharacter.BPGetMaxAttackRange()"); }
	void OnRiddenDinoSleepStateChanged(APrimalCharacter* ForCharacter, bool bIsCharacterSleeping) { NativeCall<void, APrimalCharacter*, bool>(this, "APrimalBotCharacter.OnRiddenDinoSleepStateChanged(APrimalCharacter*,bool)", ForCharacter, bIsCharacterSleeping); }
	void BPStopFireWeapon() { NativeCall<void>(this, "APrimalBotCharacter.BPStopFireWeapon()"); }
	void OnUnEquipFinished() { NativeCall<void>(this, "APrimalBotCharacter.OnUnEquipFinished()"); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset, bool bPreserveSavedAnim) { NativeCall<void, bool, bool, bool>(this, "APrimalBotCharacter.SetSleeping(bool,bool,bool)", bSleeping, bUseRagdollLocationOffset, bPreserveSavedAnim); }
	void StartEquipNewWeapon() { NativeCall<void>(this, "APrimalBotCharacter.StartEquipNewWeapon()"); }
	bool PreventReleaseFromSeatingStructure(APrimalStructureSeating* FromSeatingStructure) { return NativeCall<bool, APrimalStructureSeating*>(this, "APrimalBotCharacter.PreventReleaseFromSeatingStructure(APrimalStructureSeating*)", FromSeatingStructure); }
	void FinishWeaponSwitch() { NativeCall<void>(this, "APrimalBotCharacter.FinishWeaponSwitch()"); }
	bool IsDodging_Implementation(float TimeFromEndtoConsiderFinished) { return NativeCall<bool, float>(this, "APrimalBotCharacter.IsDodging_Implementation(float)", TimeFromEndtoConsiderFinished); }
	void UnEquipWeapon() { NativeCall<void>(this, "APrimalBotCharacter.UnEquipWeapon()"); }
	TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr> GetSeatingStructure() { using AsaReturnType = TWeakObjectPtr < APrimalStructureSeating , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalBotCharacter.GetSeatingStructure()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	AShooterWeapon* GetWeaponTemplateCDO(int WeaponIndex) { return NativeCall<AShooterWeapon*, int>(this, "APrimalBotCharacter.GetWeaponTemplateCDO(int)", WeaponIndex); }
	bool CanAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBotCharacter.CanAttack(int)", AttackIndex); }
	UAnimSequence* GetSeatingAnimation() { return NativeCall<UAnimSequence*>(this, "APrimalBotCharacter.GetSeatingAnimation()"); }
	void OnRiddenDinoDied(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalBotCharacter.OnRiddenDinoDied(APrimalCharacter*)", DiedCharacter); }
	bool AllowedToPlayIdleFidgetAnimations() { return NativeCall<bool>(this, "APrimalBotCharacter.AllowedToPlayIdleFidgetAnimations()"); }
	bool CanEquipWeapon(int DesiredWeaponIndex) { return NativeCall<bool, int>(this, "APrimalBotCharacter.CanEquipWeapon(int)", DesiredWeaponIndex); }
	float GetCharacterCreatorDynamicMatValue(int GameData_DefaultDynamicMaterialByteFloats_index, FPlayerDynamicMaterialFloat& AssociatedDynamicMatModifierRange) { return NativeCall<float, int, FPlayerDynamicMaterialFloat&>(this, "APrimalBotCharacter.GetCharacterCreatorDynamicMatValue(int,FPlayerDynamicMaterialFloat&)", GameData_DefaultDynamicMaterialByteFloats_index, AssociatedDynamicMatModifierRange); }
	bool IsUsingShield() { return NativeCall<bool>(this, "APrimalBotCharacter.IsUsingShield()"); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "APrimalBotCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)", ParamName, Value); }
	void UnregisterWithAnimSharing() { NativeCall<void>(this, "APrimalBotCharacter.UnregisterWithAnimSharing()"); }
	bool HasWeaponEquippedForAttackIndex(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBotCharacter.HasWeaponEquippedForAttackIndex(int)", AttackIndex); }
	void BPReleasedFromSeatingStructure(APrimalStructureSeating* FromSeatingStructure) { NativeCall<void, APrimalStructureSeating*>(this, "APrimalBotCharacter.BPReleasedFromSeatingStructure(APrimalStructureSeating*)", FromSeatingStructure); }
	bool FireInstantWeapon() { return NativeCall<bool>(this, "APrimalBotCharacter.FireInstantWeapon()"); }
	void BPStartFireWeapon() { NativeCall<void>(this, "APrimalBotCharacter.BPStartFireWeapon()"); }
	void BPOnStopRiding(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotCharacter.BPOnStopRiding(APrimalDinoCharacter*)", Dino); }
	void NetStartFireWeapon() { NativeCall<void>(this, "APrimalBotCharacter.NetStartFireWeapon()"); }
	void StartFireWeapon(bool bReplicate) { NativeCall<void, bool>(this, "APrimalBotCharacter.StartFireWeapon(bool)", bReplicate); }
	void AttachWeaponMesh() { NativeCall<void>(this, "APrimalBotCharacter.AttachWeaponMesh()"); }
	void InitializeVoiceCollection() { NativeCall<void>(this, "APrimalBotCharacter.InitializeVoiceCollection()"); }
	bool DoAttack(int AttackIndex, bool bSetCurrentAttack, bool bInterruptCurrentAttack) { return NativeCall<bool, int, bool, bool>(this, "APrimalBotCharacter.DoAttack(int,bool,bool)", AttackIndex, bSetCurrentAttack, bInterruptCurrentAttack); }
	bool IsProjectileVisible() { return NativeCall<bool>(this, "APrimalBotCharacter.IsProjectileVisible()"); }
	bool IsPrimalBot() { return NativeCall<bool>(this, "APrimalBotCharacter.IsPrimalBot()"); }
	void OnTargetChanged_Implementation(AActor* NewTarget) { NativeCall<void, AActor*>(this, "APrimalBotCharacter.OnTargetChanged_Implementation(AActor*)", NewTarget); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >* GetAcquiredTargetAnimations(TArray<UAnimMontage*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*, TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "APrimalBotCharacter.GetAcquiredTargetAnimations()", result); }
	void BPPreSave() { NativeCall<void>(this, "APrimalBotCharacter.BPPreSave()"); }
	void StartFireSound() { NativeCall<void>(this, "APrimalBotCharacter.StartFireSound()"); }
	void OnEquipFinished() { NativeCall<void>(this, "APrimalBotCharacter.OnEquipFinished()"); }
	bool IsBlockedByShield(const FHitResult& HitInfo, const UE::Math::TVector<double>& ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult&, const UE::Math::TVector<double>&, bool>(this, "APrimalBotCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", HitInfo, ShotDirection, bBlockAllPointDamage); }
	APrimalStructureSeating* CurrentSeatingStructure() { return NativeCall<APrimalStructureSeating*>(this, "APrimalBotCharacter.CurrentSeatingStructure()"); }
	void RefreshEquipment(bool bRemoveExistingAttachments, bool bOnlyRefreshColors) { NativeCall<void, bool, bool>(this, "APrimalBotCharacter.RefreshEquipment(bool,bool)", bRemoveExistingAttachments, bOnlyRefreshColors); }
	UAnimMontage* OverrideAcquiredTargetAnim_Implementation(UAnimMontage* FromMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "APrimalBotCharacter.OverrideAcquiredTargetAnim_Implementation(UAnimMontage*)", FromMontage); }
	bool AllowBlockingWithShield() { return NativeCall<bool>(this, "APrimalBotCharacter.AllowBlockingWithShield()"); }
	UE::Math::TVector<double>* BPGetMeleeSocketLocation(UE::Math::TVector<double>* result, FName SocketName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "APrimalBotCharacter.BPGetMeleeSocketLocation(FName)", result, SocketName); }
	void ApplyMaterailDamageEffect(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBotCharacter.ApplyMaterailDamageEffect(float)", DeltaSeconds); }
	bool IsControllingBallistaTurret() { return NativeCall<bool>(this, "APrimalBotCharacter.IsControllingBallistaTurret()"); }
	bool ShouldDodge_Implementation(bool bIsFromDamageEvent) { return NativeCall<bool, bool>(this, "APrimalBotCharacter.ShouldDodge_Implementation(bool)", bIsFromDamageEvent); }
	bool BPCanSitOnStructure(APrimalStructureSeating* Structure) { return NativeCall<bool, APrimalStructureSeating*>(this, "APrimalBotCharacter.BPCanSitOnStructure(APrimalStructureSeating*)", Structure); }
	bool BPCanRideDino(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotCharacter.BPCanRideDino(APrimalDinoCharacter*)", Dino); }
	void OnTargetChanged(AActor* NewTarget) { NativeCall<void, AActor*>(this, "APrimalBotCharacter.OnTargetChanged(AActor*)", NewTarget); }
	void NetPlayFireBallistaAnimation() { NativeCall<void>(this, "APrimalBotCharacter.NetPlayFireBallistaAnimation()"); }
	void Unstasis() { NativeCall<void>(this, "APrimalBotCharacter.Unstasis()"); }
	void BPPreSetupCharacterMesh() { NativeCall<void>(this, "APrimalBotCharacter.BPPreSetupCharacterMesh()"); }
	bool UsesPlayerSleeping() { return NativeCall<bool>(this, "APrimalBotCharacter.UsesPlayerSleeping()"); }
	bool ShouldUseAnimationUpdateRateOptimizations() { return NativeCall<bool>(this, "APrimalBotCharacter.ShouldUseAnimationUpdateRateOptimizations()"); }
	bool UseAdditiveStandingAnimation_Implementation() { return NativeCall<bool>(this, "APrimalBotCharacter.UseAdditiveStandingAnimation_Implementation()"); }
	bool PreventReleaseFromSeatingStructure_Implementation(APrimalStructureSeating* FromSeatingStructure) { return NativeCall<bool, APrimalStructureSeating*>(this, "APrimalBotCharacter.PreventReleaseFromSeatingStructure_Implementation(APrimalStructureSeating*)", FromSeatingStructure); }
	void ApplyBodyColors() { NativeCall<void>(this, "APrimalBotCharacter.ApplyBodyColors()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "APrimalBotCharacter.Serialize(FArchive&)", Ar); }
	UE::Math::TVector<double>* GetComplexTargetingLocationForTarget(UE::Math::TVector<double>* result, const AActor* ForTarget, bool bSkipLOSCheck) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const AActor*, bool>(this, "APrimalBotCharacter.GetComplexTargetingLocationForTarget(AActor*,bool)", result, ForTarget, bSkipLOSCheck); }
	void BPOnVoiceCollectionInitialized() { NativeCall<void>(this, "APrimalBotCharacter.BPOnVoiceCollectionInitialized()"); }
	void OnRep_RidingDino() { NativeCall<void>(this, "APrimalBotCharacter.OnRep_RidingDino()"); }
	bool BPCanEquipWeapon(int DesiredWeaponIndex) { return NativeCall<bool, int>(this, "APrimalBotCharacter.BPCanEquipWeapon(int)", DesiredWeaponIndex); }
	UAnimSequence* GetAdditiveStandingAnimation_Implementation(float& OutBlendInTime, float& OutBlendOutTime) { return NativeCall<UAnimSequence*, float&, float&>(this, "APrimalBotCharacter.GetAdditiveStandingAnimation_Implementation(float&,float&)", OutBlendInTime, OutBlendOutTime); }
	void ApplyBoneModifiers() { NativeCall<void>(this, "APrimalBotCharacter.ApplyBoneModifiers()"); }
	bool CanDodge_Implementation() { return NativeCall<bool>(this, "APrimalBotCharacter.CanDodge_Implementation()"); }
	void AdjustDamage(float& Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float&, const FDamageEvent&, AController*, AActor*>(this, "APrimalBotCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool ShouldMoveTowardsTargetWithinAttackRange(float DistanceToTarget) { return NativeCall<bool, float>(this, "APrimalBotCharacter.ShouldMoveTowardsTargetWithinAttackRange(float)", DistanceToTarget); }
	float BPGetMinAttackRange() { return NativeCall<float>(this, "APrimalBotCharacter.BPGetMinAttackRange()"); }
	bool IsBlockingWithShield() { return NativeCall<bool>(this, "APrimalBotCharacter.IsBlockingWithShield()"); }
	bool IsNonWeaponAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBotCharacter.IsNonWeaponAttack(int)", AttackIndex); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalBotCharacter.PostInitializeComponents()"); }
	bool CanPlayVoiceLine_Implementation(FName VoicelineTag) { return NativeCall<bool, FName>(this, "APrimalBotCharacter.CanPlayVoiceLine_Implementation(FName)", VoicelineTag); }
	void GenerateBodyType() { NativeCall<void>(this, "APrimalBotCharacter.GenerateBodyType()"); }
	void BPOnStartRiding(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotCharacter.BPOnStartRiding(APrimalDinoCharacter*)", Dino); }
	int GetOriginalTargetingTeam() { return NativeCall<int>(this, "APrimalBotCharacter.GetOriginalTargetingTeam()"); }
	float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage*, float, FName, bool, bool, float, float>(this, "APrimalBotCharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	void OnRep_CurrEquippedWeaponIndex(int LastWeaponIndex) { NativeCall<void, int>(this, "APrimalBotCharacter.OnRep_CurrEquippedWeaponIndex(int)", LastWeaponIndex); }
	void TargetingTeamChanged() { NativeCall<void>(this, "APrimalBotCharacter.TargetingTeamChanged()"); }
	void NetStopFireWeapon_Implementation() { NativeCall<void>(this, "APrimalBotCharacter.NetStopFireWeapon_Implementation()"); }
	void StartMuzzleFX() { NativeCall<void>(this, "APrimalBotCharacter.StartMuzzleFX()"); }
	bool HasWeaponEquipped() { return NativeCall<bool>(this, "APrimalBotCharacter.HasWeaponEquipped()"); }
	void UnPausedAnimSharingLeaderComponent() { NativeCall<void>(this, "APrimalBotCharacter.UnPausedAnimSharingLeaderComponent()"); }
	bool ControlSeatingStructure(APrimalStructureSeating* Structure, int SeatNumber) { return NativeCall<bool, APrimalStructureSeating*, int>(this, "APrimalBotCharacter.ControlSeatingStructure(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	bool TryDodge_Implementation() { return NativeCall<bool>(this, "APrimalBotCharacter.TryDodge_Implementation()"); }
	void NetOnShieldBlocked_Implementation(UE::Math::TVector<double>* HitLoc, AActor* DamageCauser, float DurabilityToLose) { if (!HitLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, AActor *, float>(this, "APrimalBotCharacter.NetOnShieldBlocked_Implementation(UE::Math::TVector<double>,AActor*,float)", *HitLoc, DamageCauser, DurabilityToLose); }
	bool ShouldReleaseFromSeatingStructure_Implementation() { return NativeCall<bool>(this, "APrimalBotCharacter.ShouldReleaseFromSeatingStructure_Implementation()"); }
	bool CanRideDino(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotCharacter.CanRideDino(APrimalDinoCharacter*)", Dino); }
	void UpdateDodge(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBotCharacter.UpdateDodge(float)", DeltaSeconds); }
	void ClientsReleaseSeatingStructure_Implementation(APrimalStructureSeating* FromSeatingStructure, bool bForce) { NativeCall<void, APrimalStructureSeating*, bool>(this, "APrimalBotCharacter.ClientsReleaseSeatingStructure_Implementation(APrimalStructureSeating*,bool)", FromSeatingStructure, bForce); }
	bool IsUsingAlternateSkelMesh() { return NativeCall<bool>(this, "APrimalBotCharacter.IsUsingAlternateSkelMesh()"); }
	void PlayReloadBallistaAnimation() { NativeCall<void>(this, "APrimalBotCharacter.PlayReloadBallistaAnimation()"); }
	void UnEquipWeaponImmediate_Implementation() { NativeCall<void>(this, "APrimalBotCharacter.UnEquipWeaponImmediate_Implementation()"); }
	void PlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalBotCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool UseAlternateStandingAnimation_Implementation() { return NativeCall<bool>(this, "APrimalBotCharacter.UseAlternateStandingAnimation_Implementation()"); }
	UE::Math::TVector<double>* CalcDodgeWorldDirection(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalBotCharacter.CalcDodgeWorldDirection()", result); }
	void Destroyed() { NativeCall<void>(this, "APrimalBotCharacter.Destroyed()"); }
	void OnShieldBlockDamageDepleted(AActor* ByDamageCauser) { NativeCall<void, AActor*>(this, "APrimalBotCharacter.OnShieldBlockDamageDepleted(AActor*)", ByDamageCauser); }
	bool BPFireInstantWeapon() { return NativeCall<bool>(this, "APrimalBotCharacter.BPFireInstantWeapon()"); }
	void BPInitializeVoiceCollection() { NativeCall<void>(this, "APrimalBotCharacter.BPInitializeVoiceCollection()"); }
	void BPNotifyWeaponEquipped() { NativeCall<void>(this, "APrimalBotCharacter.BPNotifyWeaponEquipped()"); }
	UAnimMontage* OverrideIdleFidgetAnimation(UAnimMontage* FromMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "APrimalBotCharacter.OverrideIdleFidgetAnimation(UAnimMontage*)", FromMontage); }
	bool CanEquipShield() { return NativeCall<bool>(this, "APrimalBotCharacter.CanEquipShield()"); }
	void UpdateRidingDinoTargetingTeam() { NativeCall<void>(this, "APrimalBotCharacter.UpdateRidingDinoTargetingTeam()"); }
	bool GetTyrantsInfluenceEffect(UE::Math::TVector2<double>& Values) { return NativeCall<bool, UE::Math::TVector2<double>&>(this, "APrimalBotCharacter.GetTyrantsInfluenceEffect(UE::Math::TVector2<double>&)", Values); }
	void ClientsControlSeatingStructure_Implementation(APrimalStructureSeating* Structure, int SeatNumber) { NativeCall<void, APrimalStructureSeating*, int>(this, "APrimalBotCharacter.ClientsControlSeatingStructure_Implementation(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	UAnimSequence* GetAlternateStandingAnimation_Implementation(float& OutBlendInTime, float& OutBlendOutTime) { return NativeCall<UAnimSequence*, float&, float&>(this, "APrimalBotCharacter.GetAlternateStandingAnimation_Implementation(float&,float&)", OutBlendInTime, OutBlendOutTime); }
	UE::Math::TVector<double>* GetMeleeSocketLocation(UE::Math::TVector<double>* result, FName SocketName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "APrimalBotCharacter.GetMeleeSocketLocation(FName)", result, SocketName); }
	UAnimMontage* OverrideAcquiredTargetAnim(UAnimMontage* FromMontage) { return NativeCall<UAnimMontage*, UAnimMontage*>(this, "APrimalBotCharacter.OverrideAcquiredTargetAnim(UAnimMontage*)", FromMontage); }
	bool AddEquipmentAttachments(FBotEquipmentDefinitions& Definition, USkeletalMeshComponent* UseMeshComp) { return NativeCall<bool, FBotEquipmentDefinitions&, USkeletalMeshComponent*>(this, "APrimalBotCharacter.AddEquipmentAttachments(FBotEquipmentDefinitions&,USkeletalMeshComponent*)", Definition, UseMeshComp); }
	bool CanSitOnStructure(APrimalStructureSeating* Structure) { return NativeCall<bool, APrimalStructureSeating*>(this, "APrimalBotCharacter.CanSitOnStructure(APrimalStructureSeating*)", Structure); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const UAnimNotifyState* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, float, const UAnimNotifyState*>(this, "APrimalBotCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void PausedAnimSharingLeaderComponent() { NativeCall<void>(this, "APrimalBotCharacter.PausedAnimSharingLeaderComponent()"); }
	void UpdateDodgeCooldown(float DeltaTime) { NativeCall<void, float>(this, "APrimalBotCharacter.UpdateDodgeCooldown(float)", DeltaTime); }
	void SetIsStationairy(bool value) { NativeCall<void, bool>(this, "APrimalBotCharacter.SetIsStationairy(bool)", value); }
	void NetStartFireWeapon_Implementation() { NativeCall<void>(this, "APrimalBotCharacter.NetStartFireWeapon_Implementation()"); }
	UAnimationAsset* GetDeathAnim_Implementation(float KillingDamage, const UE::Math::TVector<double>& ImpactVelocity, APawn* InstigatingPawn, AActor* DamageCauser) { return NativeCall<UAnimationAsset*, float, const UE::Math::TVector<double>&, APawn*, AActor*>(this, "APrimalBotCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)", KillingDamage, ImpactVelocity, InstigatingPawn, DamageCauser); }
	bool StopFireBallista() { return NativeCall<bool>(this, "APrimalBotCharacter.StopFireBallista()"); }
	bool ShouldReleaseFromSeatingStructure() { return NativeCall<bool>(this, "APrimalBotCharacter.ShouldReleaseFromSeatingStructure()"); }
	bool WildCanDamageFoliage() { return NativeCall<bool>(this, "APrimalBotCharacter.WildCanDamageFoliage()"); }
	void StopFireWeapon(bool bReplicate) { NativeCall<void, bool>(this, "APrimalBotCharacter.StopFireWeapon(bool)", bReplicate); }
	void UpdateFollowerAttachedItemsLeaderPose() { NativeCall<void>(this, "APrimalBotCharacter.UpdateFollowerAttachedItemsLeaderPose()"); }
	bool PlayVoiceLine_Implementation(FName VoicelineTag, bool bForcePlay) { return NativeCall<bool, FName, bool>(this, "APrimalBotCharacter.PlayVoiceLine_Implementation(FName,bool)", VoicelineTag, bForcePlay); }
	bool IsPullingBowString() { return NativeCall<bool>(this, "APrimalBotCharacter.IsPullingBowString()"); }
	bool AttemptAddWildGeneTraits(bool bForceReRoll) { return NativeCall<bool, bool>(this, "APrimalBotCharacter.AttemptAddWildGeneTraits(bool)", bForceReRoll); }
	void NetStopFireWeapon() { NativeCall<void>(this, "APrimalBotCharacter.NetStopFireWeapon()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBotCharacter"); }
};