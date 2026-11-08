#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalRaft : APrimalDinoCharacter
{
	// Fields

	UAudioComponent*& MovingSoundComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "APrimalRaft.MovingSoundComponent"); }
	USoundBase*& MovingSoundCueField() { return *GetNativePointerField<USoundBase**>(this, "APrimalRaft.MovingSoundCue"); }
	
	long double& NetworkCreationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.NetworkCreationTime"); }
	float& SurfaceAdjustmentZInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalRaft.SurfaceAdjustmentZInterpSpeed"); }
	long double& TimeSinceLastFadeOutField() { return *GetNativePointerField<long double*>(this, "APrimalRaft.TimeSinceLastFadeOut"); }
	int& NoWaterTriesField() { return *GetNativePointerField<int*>(this, "APrimalRaft.NoWaterTries"); }
	int& LastFrameDisabledForcedVelcoityDirectionField() { return *GetNativePointerField<int*>(this, "APrimalRaft.LastFrameDisabledForcedVelcoityDirection"); }
	float& LastTracedWaterZField() { return *GetNativePointerField<float*>(this, "APrimalRaft.LastTracedWaterZ"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bRaftAllowCrafting() { return { this, "APrimalRaft.bRaftAllowCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideSwimmingVelocity() { return { this, "APrimalRaft.bBPOverrideSwimmingVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideSwimmingAcceleration() { return { this, "APrimalRaft.bBPOverrideSwimmingAcceleration" }; }
	BitFieldValue<bool, unsigned __int32> bAllowOverrideUpdatesWhenNoRaftRider() { return { this, "APrimalRaft.bAllowOverrideUpdatesWhenNoRaftRider" }; }
	BitFieldValue<bool, unsigned __int32> bDisableGravityAdjustement() { return { this, "APrimalRaft.bDisableGravityAdjustement" }; }
	BitFieldValue<bool, unsigned __int32> bUseTracedSurfaceAdjustment() { return { this, "APrimalRaft.bUseTracedSurfaceAdjustment" }; }
	BitFieldValue<bool, unsigned __int32> bRaftAllowWalkingState() { return { this, "APrimalRaft.bRaftAllowWalkingState" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTargetingBasedCharacters() { return { this, "APrimalRaft.bAllowTargetingBasedCharacters" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalRaft"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalRaft();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalRaft.PostInitializeComponents()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalRaft.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	void Unstasis() { NativeCall<void>(this, "APrimalRaft.Unstasis()"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, unsigned __int8 PreviousCustomMode) { NativeCall<void, EMovementMode, unsigned __int8>(this, "APrimalRaft.OnMovementModeChanged(EMovementMode,unsignedchar)", PrevMovementMode, PreviousCustomMode); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalRaft.GetDescriptiveName()", result); }
	bool AllowSkeletalMeshTicking(USkeletalMeshComponent* meshComp) { return NativeCall<bool, USkeletalMeshComponent*>(this, "APrimalRaft.AllowSkeletalMeshTicking(USkeletalMeshComponent*)", meshComp); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalRaft.Tick(float)", DeltaSeconds); }
	void UpdateSwimmingState() { NativeCall<void>(this, "APrimalRaft.UpdateSwimmingState()"); }
	void SetCharacterStatusTameable(bool bSetTameable, bool bCreateInventory, bool keepInventoryForWakingTame) { NativeCall<void, bool, bool, bool>(this, "APrimalRaft.SetCharacterStatusTameable(bool,bool,bool)", bSetTameable, bCreateInventory, keepInventoryForWakingTame); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APrimalRaft.MoveForward(float)", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APrimalRaft.MoveRight(float)", Val); }
	bool PreventCharacterBasing(AActor* OtherActor, UPrimitiveComponent* BasedOnComponent) { return NativeCall<bool, AActor*, UPrimitiveComponent*>(this, "APrimalRaft.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", OtherActor, BasedOnComponent); }
	bool CanOrder(APrimalCharacter* FromCharacter, bool bBuildingStructures) { return NativeCall<bool, APrimalCharacter*, bool>(this, "APrimalRaft.CanOrder(APrimalCharacter*,bool)", FromCharacter, bBuildingStructures); }
	FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalRaft.GetEntryString()", result); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "APrimalRaft.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
	FString* GetEntryDescription(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalRaft.GetEntryDescription()", result); }
	void BeginPlay(double a2) { NativeCall<void, double>(this, "APrimalRaft.BeginPlay()", a2); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalRaft.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool CanDoPhysicsRotationAccelerationFollowsRotationDirectMove() { return NativeCall<bool>(this, "APrimalRaft.CanDoPhysicsRotationAccelerationFollowsRotationDirectMove()"); }
	bool AllowExtendedCraftingFunctionality() { return NativeCall<bool>(this, "APrimalRaft.AllowExtendedCraftingFunctionality()"); }
	void OverrideSwimmingVelocity(UE::Math::TVector<double>* InitialVelocity, const UE::Math::TVector<double>* Gravity, const float* FluidFriction, const float* NetBuoyancy, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const float*, const float*, float>(this, "APrimalRaft.OverrideSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	void OverrideSwimmingAcceleration(UE::Math::TVector<double>* ModifyAcceleration, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>*, float>(this, "APrimalRaft.OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)", ModifyAcceleration, DeltaTime); }

	double& AutoAnchorCountdownStartTimeField() { return *GetNativePointerField<double*>(this, "APrimalRaft.AutoAnchorCountdownStartTime"); }
	double& LastAnchorLiftedPersistentTimeField() { return *GetNativePointerField<double*>(this, "APrimalRaft.LastAnchorLiftedPersistentTime"); }
	double& LastRaftAllyRangePersistentTimeField() { return *GetNativePointerField<double*>(this, "APrimalRaft.LastRaftAllyRangePersistentTime"); }
	float& AutoAnchorDelaySecField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoAnchorDelaySec"); }
	float& AnchorMinimumWaveDampingField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchorMinimumWaveDamping"); }
	float& AnchorMaximumTraceDepthField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchorMaximumTraceDepth"); }
	float& AnchorMaximumDistanceFromShoreField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchorMaximumDistanceFromShore"); }
	float& UnAnchoredAutoDestroyTimeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.UnAnchoredAutoDestroyTime"); }
	float& AnchoredAutoDestroyTimeField() { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchoredAutoDestroyTime"); }
	bool& bCanAnchorField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bCanAnchor"); }
	bool& bAutoUnanchorOnDriveField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bAutoUnanchorOnDrive"); }
	bool& bIsAnchoredField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bIsAnchored"); }
	bool& bCheatAnchoredField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bCheatAnchored"); }
	bool& bAtAnchorLimitField() { return *GetNativePointerField<bool*>(this, "APrimalRaft.bAtAnchorLimit"); }
	double& LastAnchorLimitCheckTimeField() { return *GetNativePointerField<double*>(this, "APrimalRaft.LastAnchorLimitCheckTime"); }

	const FPrimalRaftSparseClassData* GetPrimalRaftSparseClassData(EGetSparseClassDataMethod GetMethod) { return NativeCall<const FPrimalRaftSparseClassData*, EGetSparseClassDataMethod>(this, "APrimalRaft.GetPrimalRaftSparseClassData(EGetSparseClassDataMethod)", GetMethod); }

	FPrimalRaftSparseClassData* GetMutablePrimalRaftSparseClassData() { return const_cast<FPrimalRaftSparseClassData*>(GetPrimalRaftSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalRaft"); }

	UTexture2D*& IconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalRaft.Icon"); }
	UTexture2D*& AnchorLoweringIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalRaft.AnchorLoweringIcon"); }
	UTexture2D*& AnchorRaisingIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalRaft.AnchorRaisingIcon"); }
	BitFieldValue<bool, unsigned char> bUnstasisNoWater() { return { this, "APrimalRaft.bUnstasisNoWater"}; }
	bool ShouldTreadWater() { return NativeCall<bool>(this, "APrimalRaft.ShouldTreadWater()"); }
	bool TryAnchor(bool bAllowCheat) { return NativeCall<bool, bool>(this, "APrimalRaft.TryAnchor(bool)", bAllowCheat); }
	bool ShouldTreadWater_Implementation() { return NativeCall<bool>(this, "APrimalRaft.ShouldTreadWater_Implementation()"); }
	void EnsureDecayClocksInitialized() { NativeCall<void>(this, "APrimalRaft.EnsureDecayClocksInitialized()"); }
	static UScriptStruct* StaticGetPrimalRaftSparseClassDataScriptStruct() { return NativeCall<UScriptStruct*>(nullptr, "APrimalRaft.StaticGetPrimalRaftSparseClassDataScriptStruct()"); }
	bool CheckJumpOutOfWater() { return NativeCall<bool>(this, "APrimalRaft.CheckJumpOutOfWater()"); }
	bool CanStartAnchorStateChange(APlayerController* ForPC, bool bLowering) { return NativeCall<bool, APlayerController*, bool>(this, "APrimalRaft.CanStartAnchorStateChange(APlayerController*,bool)", ForPC, bLowering); }
	APhysicsVolume* TryGetWaterVolume() { return NativeCall<APhysicsVolume*>(this, "APrimalRaft.TryGetWaterVolume()"); }
	bool IsVehicle() { return NativeCall<bool>(this, "APrimalRaft.IsVehicle()"); }
	void UpdateAllyRangeDecayTime(double PersistentTime) { NativeCall<void, double>(this, "APrimalRaft.UpdateAllyRangeDecayTime(double)", PersistentTime); }
	void Unanchor() { NativeCall<void>(this, "APrimalRaft.Unanchor()"); }
	bool TryAutoUnanchorForUse(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalRaft.TryAutoUnanchorForUse(APlayerController*)", ForPC); }
	void ValidateAnchorState() { NativeCall<void>(this, "APrimalRaft.ValidateAnchorState()"); }
	bool CanAnchor() { return NativeCall<bool>(this, "APrimalRaft.CanAnchor()"); }
	void SyncAllyRangeDecayTime() { NativeCall<void>(this, "APrimalRaft.SyncAllyRangeDecayTime()"); }
	bool CanHarvestCollectables() { return NativeCall<bool>(this, "APrimalRaft.CanHarvestCollectables()"); }
	bool CanPlayerCheatAnchor(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalRaft.CanPlayerCheatAnchor(APlayerController*)", ForPC); }
	void PlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalRaft.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool BPAllowMovementSound_Implementation() { return NativeCall<bool>(this, "APrimalRaft.BPAllowMovementSound_Implementation()"); }
	bool CanAnchorAtCurrentOceanLocation() { return NativeCall<bool>(this, "APrimalRaft.CanAnchorAtCurrentOceanLocation()"); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalRaft.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	bool CanBeCarried(APrimalCharacter* ByCarrier) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalRaft.CanBeCarried(APrimalCharacter*)", ByCarrier); }
	void CheckAutoDestroyOnUnstasis() { NativeCall<void>(this, "APrimalRaft.CheckAutoDestroyOnUnstasis()"); }
	void RefreshPhysicsVolumeForAnchor() { NativeCall<void>(this, "APrimalRaft.RefreshPhysicsVolumeForAnchor()"); }
	bool IsARaft() { return NativeCall<bool>(this, "APrimalRaft.IsARaft()"); }
	bool HasAnchorOccupant() { return NativeCall<bool>(this, "APrimalRaft.HasAnchorOccupant()"); }
	bool ShouldIgnoreHitResult(const UWorld* InWorld, const FHitResult& TestHit, const UE::Math::TVector<double>& MovementDirDenormalized) { return NativeCall<bool, const UWorld*, const FHitResult&, const UE::Math::TVector<double>&>(this, "APrimalRaft.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", InWorld, TestHit, MovementDirDenormalized); }
	void SetAnchorPropertyDirty() { NativeCall<void>(this, "APrimalRaft.SetAnchorPropertyDirty()"); }
	bool IsPhysicalPrimalRaft() { return NativeCall<bool>(this, "APrimalRaft.IsPhysicalPrimalRaft()"); }
	void TempDisableForcedVelcoityDirection() { NativeCall<void>(this, "APrimalRaft.TempDisableForcedVelcoityDirection()"); }
	bool ShouldEnableIKBasedOn() { return NativeCall<bool>(this, "APrimalRaft.ShouldEnableIKBasedOn()"); }
	bool ShouldBlockMovementForAnchor() { return NativeCall<bool>(this, "APrimalRaft.ShouldBlockMovementForAnchor()"); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APrimalRaft.MoveUp(float)", Val); }
	bool CanCombineMoves() { return NativeCall<bool>(this, "APrimalRaft.CanCombineMoves()"); }
	bool ServerHandleNetExecCommand(APlayerController* FromPC, FName CommandName, const FBPNetExecParams& ExecParams) { return NativeCall<bool, APlayerController*, FName, const FBPNetExecParams&>(this, "APrimalRaft.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", FromPC, CommandName, ExecParams); }
	bool IsInOcean() { return NativeCall<bool>(this, "APrimalRaft.IsInOcean()"); }
	bool IsRaft() { return NativeCall<bool>(this, "APrimalRaft.IsRaft()"); }
	bool UsesDinoAutoDestroyDecay() { return NativeCall<bool>(this, "APrimalRaft.UsesDinoAutoDestroyDecay()"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APrimalRaft.PostNetReceiveLocationAndRotation()"); }
	void BP_OverrideSwimmingAcceleration(UE::Math::TVector<double>& ModifyAcceleration, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>&, float>(this, "APrimalRaft.BP_OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)", ModifyAcceleration, DeltaTime); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalRaft.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void Anchor() { NativeCall<void>(this, "APrimalRaft.Anchor()"); }
	bool UpdateDecayPreventionState() { return NativeCall<bool>(this, "APrimalRaft.UpdateDecayPreventionState()"); }
};