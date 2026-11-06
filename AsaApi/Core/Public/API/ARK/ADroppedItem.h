#pragma once
#include "BulkForward.h"


struct ADroppedItem : AActor
{
	// Fields

	FItemNetInfo& MyItemInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "ADroppedItem.MyItemInfo"); }
	UPrimalItem*& MyItemField() { return *GetNativePointerField<UPrimalItem**>(this, "ADroppedItem.MyItem"); }
	int& AssignedToTribeIDField() { return *GetNativePointerField<int*>(this, "ADroppedItem.AssignedToTribeID"); }
	float& ImpulseMagnitudeField() { return *GetNativePointerField<float*>(this, "ADroppedItem.ImpulseMagnitude"); }
	UE::Math::TRotator<double>& ImpulseOffsetRangesField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ADroppedItem.ImpulseOffsetRanges"); }
	float& ForceSleepTimerField() { return *GetNativePointerField<float*>(this, "ADroppedItem.ForceSleepTimer"); }
	UE::Math::TVector<double>& DroppedItemScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.DroppedItemScale"); }
	UE::Math::TVector2<double>& OverlayTooltipPaddingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ADroppedItem.OverlayTooltipPadding"); }
	UE::Math::TVector2<double>& OverlayTooltipScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ADroppedItem.OverlayTooltipScale"); }
	UE::Math::TVector<double>& CenterLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.CenterLocationOffset"); }
	//TSubclassOf<UPrimalItemToolTipWidget>& HUDOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalItemToolTipWidget>*>(this, "ADroppedItem.HUDOverlayToolTipWidget"); }
	TSubclassOf<UToolTipWidget>& HUDOverlayToolTipWidgetOnlyActionField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "ADroppedItem.HUDOverlayToolTipWidgetOnlyAction"); }
	FString& DroppedByNameField() { return *GetNativePointerField<FString*>(this, "ADroppedItem.DroppedByName"); }
	unsigned __int64& DroppedByPlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ADroppedItem.DroppedByPlayerID"); }
	long double& DroppedItemDestructionTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.DroppedItemDestructionTime"); }
	UE::Math::TVector<double>& DroppedItemInterpTargetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.DroppedItemInterpTarget"); }
	UStaticMesh*& NetDroppedMeshOverrideField() { return *GetNativePointerField<UStaticMesh**>(this, "ADroppedItem.NetDroppedMeshOverride"); }
	UMaterialInterface*& NetDroppedMeshMaterialOverrideField() { return *GetNativePointerField<UMaterialInterface**>(this, "ADroppedItem.NetDroppedMeshMaterialOverride"); }
	UE::Math::TVector<double>& NetDroppedMeshOverrideScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.NetDroppedMeshOverrideScale3D"); }
	UE::Math::TVector<double>& DroppedItemVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.DroppedItemVelocity"); }
	float& DroppedItemAccelerationGravityField() { return *GetNativePointerField<float*>(this, "ADroppedItem.DroppedItemAccelerationGravity"); }
	float& DroppedItemMaxFallSpeedField() { return *GetNativePointerField<float*>(this, "ADroppedItem.DroppedItemMaxFallSpeed"); }
	float& MaxPickUpDistanceField() { return *GetNativePointerField<float*>(this, "ADroppedItem.MaxPickUpDistance"); }
	long double& LastReplicatedMovementField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.LastReplicatedMovement"); }
	float& PrevLinearDampingField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PrevLinearDamping"); }
	float& PrevAngularDampingField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PrevAngularDamping"); }
	long double& SpawnDropSoundTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.SpawnDropSoundTime"); }
	UE::Math::TVector<double>& PreviousLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.PreviousLocation"); }
	TWeakObjectPtr<AActor>& DroppedByActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "ADroppedItem.DroppedByActor"); }
	APrimalCharacter*& BasedTransformCharacterField() { return *GetNativePointerField<APrimalCharacter**>(this, "ADroppedItem.BasedTransformCharacter"); }
	UE::Math::TVector<double>& BasedTransformLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.BasedTransformLocation"); }
	UE::Math::TVector<double>& BasedTransformVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.BasedTransformVelocity"); }
	UStaticMesh*& UsedMeshAssetField() { return *GetNativePointerField<UStaticMesh**>(this, "ADroppedItem.UsedMeshAsset"); }
	bool& bUseBPSetupDroppedItemVisualsField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bUseBPSetupDroppedItemVisuals"); }
	UE::Math::TVector<double>& PreviousStuckLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADroppedItem.PreviousStuckLocation"); }
	float& LocationStuckTimerField() { return *GetNativePointerField<float*>(this, "ADroppedItem.LocationStuckTimer"); }
	long double& PhysicsKeepAliveUntilTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.PhysicsKeepAliveUntilTime"); }
	float& FreezePhysicsAfterTimeField() { return *GetNativePointerField<float*>(this, "ADroppedItem.FreezePhysicsAfterTime"); }
	float& PickupAllRangeField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PickupAllRange"); }
	float& DroppedLifeSpanOverrideField() { return *GetNativePointerField<float*>(this, "ADroppedItem.DroppedLifeSpanOverride"); }
	TObjectPtr<UTexture2D>& PickupIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "ADroppedItem.PickupIcon"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bApplyImpulseOnSpawn() { return { this, "ADroppedItem.bApplyImpulseOnSpawn" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnStasis() { return { this, "ADroppedItem.bDestroyOnStasis" }; }
	BitFieldValue<bool, unsigned __int32> bUseCollisionTrace() { return { this, "ADroppedItem.bUseCollisionTrace" }; }
	BitFieldValue<bool, unsigned __int32> bPreventPickup() { return { this, "ADroppedItem.bPreventPickup" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOutOfWater() { return { this, "ADroppedItem.bDestroyOutOfWater" }; }
	BitFieldValue<bool, unsigned __int32> bUseClientDroppedItemPhysics() { return { this, "ADroppedItem.bUseClientDroppedItemPhysics" }; }
	BitFieldValue<bool, unsigned __int32> bIsUnderwater() { return { this, "ADroppedItem.bIsUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bNotifyPreviousOwnerOfPickup() { return { this, "ADroppedItem.bNotifyPreviousOwnerOfPickup" }; }
	BitFieldValue<bool, unsigned __int32> bAssignedToTribePickupOnly() { return { this, "ADroppedItem.bAssignedToTribePickupOnly" }; }
	BitFieldValue<bool, unsigned __int32> bLowQuality() { return { this, "ADroppedItem.bLowQuality" }; }
	BitFieldValue<bool, unsigned __int32> bBPOnItemPickedUp() { return { this, "ADroppedItem.bBPOnItemPickedUp" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADroppedItem"); }
	void PostNetReceivePhysicState() { NativeCall<void>(this, "ADroppedItem.PostNetReceivePhysicState()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADroppedItem();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItem.Tick(float)", DeltaSeconds); }
	void OnRep_ReplicatedMovement() { NativeCall<void>(this, "ADroppedItem.OnRep_ReplicatedMovement()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "ADroppedItem.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	void Stasis() { NativeCall<void>(this, "ADroppedItem.Stasis()"); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "ADroppedItem.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "ADroppedItem.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void BeginPlay() { NativeCall<void>(this, "ADroppedItem.BeginPlay()"); }
	void SetupDroppedItemLifeSpan() { NativeCall<void>(this, "ADroppedItem.SetupDroppedItemLifeSpan()"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "ADroppedItem.PostNetReceiveLocationAndRotation()"); }
	void ReplicateMovement() { NativeCall<void>(this, "ADroppedItem.ReplicateMovement()"); }
	void FreezePhysics() { NativeCall<void>(this, "ADroppedItem.FreezePhysics()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "ADroppedItem.DrawHUD(AShooterHUD*)", HUD); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ADroppedItem.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void ForceSleep() { NativeCall<void>(this, "ADroppedItem.ForceSleep()"); }
	void SetupVisuals() { NativeCall<void>(this, "ADroppedItem.SetupVisuals()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "ADroppedItem.PreInitializeComponents()"); }
	APhysicsVolume* GetApproximateLocationPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "ADroppedItem.GetApproximateLocationPhysicsVolume()"); }
	void KeepPhysicsActiveForDuration(float Duration) { NativeCall<void, float>(this, "ADroppedItem.KeepPhysicsActiveForDuration(float)", Duration); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADroppedItem"); }

	bool& bUseImpulseOffsetRangesField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bUseImpulseOffsetRanges"); }
	bool& bClientDisablePhysicsField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bClientDisablePhysics"); }
	bool& bIsPreventDroppedItemPhysicsField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bIsPreventDroppedItemPhysics"); }
	bool& bUseBPDroppedItemImpactedField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bUseBPDroppedItemImpacted"); }
	bool& bPreventDropAttachmentField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bPreventDropAttachment"); }
	bool& bHasTickedField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bHasTicked"); }
	bool& bItemInteractionInProgressField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bItemInteractionInProgress"); }
	double& TimeLastTriedToPickupField() { return *GetNativePointerField<double*>(this, "ADroppedItem.TimeLastTriedToPickup"); }
	float& PickupCooldownField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PickupCooldown"); }
	bool& bLocationStreamingCompletedField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bLocationStreamingCompleted"); }
	BitFieldValue<bool, unsigned __int32> bHasStoppedMovement() { return { this, "ADroppedItem.bHasStoppedMovement"}; }
	BitFieldValue<bool, unsigned __int32> bIsWildEgg() { return { this, "ADroppedItem.bIsWildEgg"}; }
	static void SetDroppedByName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetDroppedByName_WrapperImpl(void*,void*)", Object, InValue); }
	void SetDroppedItemLifeTime() { NativeCall<void>(this, "ADroppedItem.SetDroppedItemLifeTime()"); }
	static void SetDroppedItemDestructionTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetDroppedItemDestructionTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetUsedMeshAsset_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetUsedMeshAsset_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetMyItemInfo_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetMyItemInfo_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetNetDroppedMeshOverride_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetNetDroppedMeshOverride_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPSetupDroppedItemVisuals() { NativeCall<void>(this, "ADroppedItem.BPSetupDroppedItemVisuals()"); }
	static void GetUsedMeshAsset_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetUsedMeshAsset_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetDroppedItemDestructionTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetDroppedItemDestructionTime_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetBasedTransformLocation_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetBasedTransformLocation_WrapperImpl(void*,void*)", Object, OutValue); }
	void BPOnItemPickedUp(APlayerController* ByPC, UPrimalItem* InventoryItem) { NativeCall<void, APlayerController*, UPrimalItem*>(this, "ADroppedItem.BPOnItemPickedUp(APlayerController*,UPrimalItem*)", ByPC, InventoryItem); }
	static void SetbAssignedToTribePickupOnly_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetbAssignedToTribePickupOnly_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetDroppedByActor_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetDroppedByActor_WrapperImpl(void*,void*)", Object, OutValue); }
	void OnItemPickedUp(APlayerController* ByPC, UPrimalItem* InventoryItem) { NativeCall<void, APlayerController*, UPrimalItem*>(this, "ADroppedItem.OnItemPickedUp(APlayerController*,UPrimalItem*)", ByPC, InventoryItem); }
	static void SetSpawnDropSoundTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetSpawnDropSoundTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetDroppedItemVelocity_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetDroppedItemVelocity_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetAssignedToTribeID_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetAssignedToTribeID_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetDroppedByActor_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetDroppedByActor_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetAssignedToTribeID_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetAssignedToTribeID_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetNetDroppedMeshOverrideScale3D_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetNetDroppedMeshOverrideScale3D_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsAllowedToPickupItem(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "ADroppedItem.IsAllowedToPickupItem(APlayerController*)", PC); }
	static void GetSpawnDropSoundTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetSpawnDropSoundTime_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetDroppedByName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetDroppedByName_WrapperImpl(void*,void*)", Object, OutValue); }
	int GetItemNetQuantity() { return NativeCall<int>(this, "ADroppedItem.GetItemNetQuantity()"); }
	static void SetDroppedByPlayerID_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetDroppedByPlayerID_WrapperImpl(void*,void*)", Object, InValue); }
	void ResetLifeSpan(float NewLifeSpan) { NativeCall<void, float>(this, "ADroppedItem.ResetLifeSpan(float)", NewLifeSpan); }
	static void GetNetDroppedMeshMaterialOverride_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetNetDroppedMeshMaterialOverride_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetDroppedItemLifeTime() { return NativeCall<float>(this, "ADroppedItem.GetDroppedItemLifeTime()"); }
	void OnRep_HasStoppedDroppedItemMovement() { NativeCall<void>(this, "ADroppedItem.OnRep_HasStoppedDroppedItemMovement()"); }
	static void SetBasedTransformLocation_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetBasedTransformLocation_WrapperImpl(void*,void*)", Object, InValue); }
	void StopDroppedItemMovement() { NativeCall<void>(this, "ADroppedItem.StopDroppedItemMovement()"); }
	static void SetNetDroppedMeshOverride_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetNetDroppedMeshOverride_WrapperImpl(void*,void*)", Object, InValue); }
	void CharPickUpItem(APrimalCharacter* TheChar, bool& bCouldPickAllItems, UAnimMontage* PickupItemAnim, bool bForcePlayPickUpAnim, float DontExceedWeightPercent, int NumItemsToPickUpOverride, bool bDestroyPickedUpItems) { NativeCall<void, APrimalCharacter*, bool&, UAnimMontage*, bool, float, int, bool>(this, "ADroppedItem.CharPickUpItem(APrimalCharacter*,bool&,UAnimMontage*,bool,float,int,bool)", TheChar, bCouldPickAllItems, PickupItemAnim, bForcePlayPickUpAnim, DontExceedWeightPercent, NumItemsToPickUpOverride, bDestroyPickedUpItems); }
	static void GetDroppedItemVelocity_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetDroppedItemVelocity_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbHasStoppedMovement_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetbHasStoppedMovement_WrapperImpl(void*,void*)", Object, OutValue); }
	void CharPickUpNearbyItems(APrimalCharacter* TheChar, bool& bCouldPickAllItems, UAnimMontage* PickupItemAnim, float PickUpRangeOverride, bool bForcePlayPickUpAnim, float DontExceedWeightPercent) { NativeCall<void, APrimalCharacter*, bool&, UAnimMontage*, float, bool, float>(this, "ADroppedItem.CharPickUpNearbyItems(APrimalCharacter*,bool&,UAnimMontage*,float,bool,float)", TheChar, bCouldPickAllItems, PickupItemAnim, PickUpRangeOverride, bForcePlayPickUpAnim, DontExceedWeightPercent); }
	void NetUpdateItemQuantity(unsigned int NewQuantity) { NativeCall<void, unsigned int>(this, "ADroppedItem.NetUpdateItemQuantity(unsignedint)", NewQuantity); }
	void BPDroppedItemImpacted_Implementation(const FHitResult& impactHitInfo) { NativeCall<void, const FHitResult&>(this, "ADroppedItem.BPDroppedItemImpacted_Implementation(FHitResult&)", impactHitInfo); }
	static void GetMyItemInfo_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetMyItemInfo_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbHasStoppedMovement_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetbHasStoppedMovement_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetNetDroppedMeshOverrideScale3D_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetNetDroppedMeshOverrideScale3D_WrapperImpl(void*,void*)", Object, OutValue); }
	bool CanCharPickUpItem(APrimalCharacter* TheChar, bool bDestroyPickedUpItems) { return NativeCall<bool, APrimalCharacter*, bool>(this, "ADroppedItem.CanCharPickUpItem(APrimalCharacter*,bool)", TheChar, bDestroyPickedUpItems); }
	static void GetDroppedByPlayerID_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetDroppedByPlayerID_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetNetDroppedMeshMaterialOverride_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetNetDroppedMeshMaterialOverride_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetBasedTransformCharacter_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetBasedTransformCharacter_WrapperImpl(void*,void*)", Object, InValue); }
	bool IsAllowedToPickupItem_Implementation(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "ADroppedItem.IsAllowedToPickupItem_Implementation(APlayerController*)", PC); }
	static void GetBasedTransformCharacter_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetBasedTransformCharacter_WrapperImpl(void*,void*)", Object, OutValue); }
	UE::Math::TVector<double>& GetDroppedItemVelocityForWriteAndMarkDirty() { return NativeCall<UE::Math::TVector<double>&>(this, "ADroppedItem.GetDroppedItemVelocityForWriteAndMarkDirty()"); }
	void NetUpdateItemQuantity_Implementation(unsigned int NewQuantity) { NativeCall<void, unsigned int>(this, "ADroppedItem.NetUpdateItemQuantity_Implementation(unsignedint)", NewQuantity); }
	static void SetBasedTransformVelocity_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItem.SetBasedTransformVelocity_WrapperImpl(void*,void*)", Object, InValue); }
	float GetMaxPickupDistance(AShooterPlayerController* ForPC) { return NativeCall<float, AShooterPlayerController*>(this, "ADroppedItem.GetMaxPickupDistance(AShooterPlayerController*)", ForPC); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ADroppedItem._getUObject()"); }
	void BPDroppedItemImpacted(const FHitResult& impactHitInfo) { NativeCall<void, const FHitResult&>(this, "ADroppedItem.BPDroppedItemImpacted(FHitResult&)", impactHitInfo); }
	static void GetBasedTransformVelocity_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetBasedTransformVelocity_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetbAssignedToTribePickupOnly_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADroppedItem.GetbAssignedToTribePickupOnly_WrapperImpl(void*,void*)", Object, OutValue); }
};