#pragma once


struct FPrimalCharacterSparseClassData
{
	// Fields

	UE::Math::TRotator<double>& OldRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalCharacterSparseClassData.OldRotation"); }
	FName& RootBodyBoneNameField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.RootBodyBoneName"); }
	float& DefaultTPVZoomField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DefaultTPVZoom"); }
	float& MaxTPVZoomField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxTPVZoom"); }
	float& MinTPVZoomField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTPVZoom"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraMaxZoomMultiplier"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraDistanceScaleFactor"); }
	USoundBase*& StartDraggedSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.StartDraggedSound"); }
	USoundBase*& EndDraggedSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.EndDraggedSound"); }
	float& JumpBaseLockingThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.JumpBaseLockingThreshold"); }
	FName& DediOverrideCapsuleCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DediOverrideCapsuleCollisionProfileName"); }
	FName& DediOverrideMeshCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DediOverrideMeshCollisionProfileName"); }
	FName& SnaredFromSocketField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.SnaredFromSocket"); }
	float& DamageNotifyTeamAggroMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageNotifyTeamAggroMultiplier"); }
	float& DamageNotifyTeamAggroRangeFalloffField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageNotifyTeamAggroRangeFalloff"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >& CharacterOverrideSoundFromField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideSoundFrom"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >& CharacterOverrideSoundToField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideSoundTo"); }
	TArray<UParticleSystem*, TSizedDefaultAllocator<32> >& CharacterOverrideParticleFromField() { return *GetNativePointerField<TArray<UParticleSystem*, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideParticleFrom"); }
	TArray<UParticleSystem*, TSizedDefaultAllocator<32> >& CharacterOverrideParticleToField() { return *GetNativePointerField<TArray<UParticleSystem*, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideParticleTo"); }
	TArray<USoundBase*, TSizedDefaultAllocator<32> >& LandedSoundsPhysMatField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterSparseClassData.LandedSoundsPhysMat"); }
	FName& MeshRootSocketNameField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.MeshRootSocketName"); }
	float& MontageSyncIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MontageSyncInterval"); }
	float& FallingDamageHealthScaleBaseField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.FallingDamageHealthScaleBase"); }
	float& MinTimeBetweenFootstepsField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTimeBetweenFootsteps"); }
	float& MinTimeBetweenFootstepsRunningField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTimeBetweenFootstepsRunning"); }
	float& TPVStructurePlacingHeightMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.TPVStructurePlacingHeightMultiplier"); }
	float& RagdollDeathImpulseScalerField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollDeathImpulseScaler"); }
	float& OrbitCamZoomStepSizeField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamZoomStepSize"); }
	float& OrbitCamMinZoomLevelField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamMinZoomLevel"); }
	float& OrbitCamMaxZoomLevelField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamMaxZoomLevel"); }
	float& MaxCursorHUDDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxCursorHUDDistance"); }
	UE::Math::TVector<double>& DeathActorTargetingOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalCharacterSparseClassData.DeathActorTargetingOffset"); }
	FName& SocketOverrideTargetingLocationField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.SocketOverrideTargetingLocation"); }
	float& FootPhysicalSurfaceCheckIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.FootPhysicalSurfaceCheckInterval"); }
	float& RagdollImpactDamageVelocityScaleField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollImpactDamageVelocityScale"); }
	float& RagdollImpactDamageMinDecelerationSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollImpactDamageMinDecelerationSpeed"); }
	float& StartFallingImpactRagdollTimeIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.StartFallingImpactRagdollTimeInterval"); }
	USoundBase*& EnteredSwimmingSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.EnteredSwimmingSound"); }
	USoundBase*& EnteredSleepingSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.EnteredSleepingSound"); }
	USoundBase*& LeftSleepingSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.LeftSleepingSound"); }
	float& CorpseDraggedDecayRateField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CorpseDraggedDecayRate"); }
	float& PoopAltItemChanceField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PoopAltItemChance"); }
	UTexture2D*& PoopIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterSparseClassData.PoopIcon"); }
	float& RunningMaxDesiredRotDeltaField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RunningMaxDesiredRotDelta"); }
	float& TamedDinoCallOutRangeField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.TamedDinoCallOutRange"); }
	UE::Math::TVector<double>& TargetPathfindingLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalCharacterSparseClassData.TargetPathfindingLocationOffset"); }
	float& DamageTheMeleeDamageCauserPercentField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageTheMeleeDamageCauserPercent"); }
	float& DurabilityDegrateTheMeleeDamageCauserPercentField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DurabilityDegrateTheMeleeDamageCauserPercent"); }
	TSubclassOf<UDamageType>& DamageTheMeleeDamageCauserDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FPrimalCharacterSparseClassData.DamageTheMeleeDamageCauserDamageType"); }
	float& CharacterDamageImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CharacterDamageImpulseMultiplier"); }
	float& MaxRagdollDeathVelocityImpulseField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxRagdollDeathVelocityImpulse"); }
	float& ClientRotationInterpSpeedMultiplierGroundField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ClientRotationInterpSpeedMultiplierGround"); }
	FName& DefaultCameraStyleField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DefaultCameraStyle"); }
	float& ScaleDeathHarvestHealthyByMaxHealthBaseField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ScaleDeathHarvestHealthyByMaxHealthBase"); }
	TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& PreventBuffClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterSparseClassData.PreventBuffClasses"); }
	float& ControlledInventoryAccessDistanceOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ControlledInventoryAccessDistanceOffset"); }
	float& AdditionalMaxUseDistanceField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.AdditionalMaxUseDistance"); }
	float& DraggingInterpSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DraggingInterpSpeed"); }
	float& DraggingInterpDurationField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DraggingInterpDuration"); }
	TEnumAsByte<enum EMovementMode>& DraggedMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "FPrimalCharacterSparseClassData.DraggedMovementMode"); }
	TEnumAsByte<enum ETickingGroup>& BeingDraggedMovementComponentTickGroupField() { return *GetNativePointerField<TEnumAsByte<enum ETickingGroup>*>(this, "FPrimalCharacterSparseClassData.BeingDraggedMovementComponentTickGroup"); }
	TEnumAsByte<enum ETickingGroup>& DraggingMovementComponentTickGroupField() { return *GetNativePointerField<TEnumAsByte<enum ETickingGroup>*>(this, "FPrimalCharacterSparseClassData.DraggingMovementComponentTickGroup"); }
	UNiagaraSystem*& DamageImpactFXForAttackerField() { return *GetNativePointerField<UNiagaraSystem**>(this, "FPrimalCharacterSparseClassData.DamageImpactFXForAttacker"); }
	float& DamageImpactFXSizeOverrideField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageImpactFXSizeOverride"); }
	FName& NonLocationalDamageHurtFXSocketField() { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.NonLocationalDamageHurtFXSocket"); }
	UE::Math::TVector<double>& NonLocationalDamageHurtFXScaleOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalCharacterSparseClassData.NonLocationalDamageHurtFXScaleOverride"); }
	TObjectPtr<UTexture2D>& DragBodyIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.DragBodyIcon"); }
	TObjectPtr<UTexture2D>& ReleaseBodyIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.ReleaseBodyIcon"); }
	TObjectPtr<UTexture2D>& MoveCloserIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.MoveCloserIcon"); }
	TObjectPtr<UTexture2D>& ColorizeIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.ColorizeIcon"); }
	TObjectPtr<UTexture2D>& TrackingInfoIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.TrackingInfoIcon"); }
	TObjectPtr<UTexture2D>& ToggleTrackingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.ToggleTrackingIcon"); }
	TObjectPtr<UTexture2D>& TogglePOIIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.TogglePOIIcon"); }
	float& ArmorDurabilityPercentUpdateIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ArmorDurabilityPercentUpdateInterval"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAllowCapsuleDamageAfterDeathField() { return { this, "FPrimalCharacterSparseClassData.bAllowCapsuleDamageAfterDeath" }; }
	BitFieldValue<bool, unsigned __int32> bUseHealthDamageMaterialOverlayField() { return { this, "FPrimalCharacterSparseClassData.bUseHealthDamageMaterialOverlay" }; }
	BitFieldValue<bool, unsigned __int32> bIsBigDinoField() { return { this, "FPrimalCharacterSparseClassData.bIsBigDino" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanNotifyTeamAggroAIField() { return { this, "FPrimalCharacterSparseClassData.bUseBPCanNotifyTeamAggroAI" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OverrideCameraTargetOriginLocationField() { return { this, "FPrimalCharacterSparseClassData.bUseBP_OverrideCameraTargetOriginLocation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamageField() { return { this, "FPrimalCharacterSparseClassData.bUseBPPreventFallDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyIsDamageCauserOfAddedBuffField() { return { this, "FPrimalCharacterSparseClassData.bUseBPNotifyIsDamageCauserOfAddedBuff" }; }
	BitFieldValue<bool, unsigned __int32> bPreventProjectileAttachmentField() { return { this, "FPrimalCharacterSparseClassData.bPreventProjectileAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bForceTriggerIgnoredTrapsField() { return { this, "FPrimalCharacterSparseClassData.bForceTriggerIgnoredTraps" }; }
	BitFieldValue<bool, unsigned __int32> bForceNetDidLandField() { return { this, "FPrimalCharacterSparseClassData.bForceNetDidLand" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSimpleIKField() { return { this, "FPrimalCharacterSparseClassData.bPreventSimpleIK" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyAllowRunningWhileFlyingField() { return { this, "FPrimalCharacterSparseClassData.bOnlyAllowRunningWhileFlying" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyPlayPoopAnimWhileWalkingField() { return { this, "FPrimalCharacterSparseClassData.bOnlyPlayPoopAnimWhileWalking" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomEventField() { return { this, "FPrimalCharacterSparseClassData.bUseBlueprintAnimNotifyCustomEvent" }; }
	BitFieldValue<bool, unsigned __int32> bPreventImmobilizationField() { return { this, "FPrimalCharacterSparseClassData.bPreventImmobilization" }; }
	BitFieldValue<bool, unsigned __int32> bSleepingUseRagdollField() { return { this, "FPrimalCharacterSparseClassData.bSleepingUseRagdoll" }; }
	BitFieldValue<bool, unsigned __int32> bDediForceUnregisterSKMeshField() { return { this, "FPrimalCharacterSparseClassData.bDediForceUnregisterSKMesh" }; }
	BitFieldValue<bool, unsigned __int32> bIsWaterDinoField() { return { this, "FPrimalCharacterSparseClassData.bIsWaterDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsFlyerDinoField() { return { this, "FPrimalCharacterSparseClassData.bIsFlyerDino" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreTargetingCarnivoresField() { return { this, "FPrimalCharacterSparseClassData.bIgnoreTargetingCarnivores" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCharacterPaintingField() { return { this, "FPrimalCharacterSparseClassData.bAllowCharacterPainting" }; }
	BitFieldValue<bool, unsigned __int32> bTickStatusComponentField() { return { this, "FPrimalCharacterSparseClassData.bTickStatusComponent" }; }
	BitFieldValue<bool, unsigned __int32> bBPHUDOverideBuffProgressBarField() { return { this, "FPrimalCharacterSparseClassData.bBPHUDOverideBuffProgressBar" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyBumpedByPawnField() { return { this, "FPrimalCharacterSparseClassData.bUseBPNotifyBumpedByPawn" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyBumpedPawnField() { return { this, "FPrimalCharacterSparseClassData.bUseBPNotifyBumpedPawn" }; }
	BitFieldValue<bool, unsigned __int32> bPreventTargetingByTurretsField() { return { this, "FPrimalCharacterSparseClassData.bPreventTargetingByTurrets" }; }
	BitFieldValue<bool, unsigned __int32> bDelayFootstepsUnderMinIntervalField() { return { this, "FPrimalCharacterSparseClassData.bDelayFootstepsUnderMinInterval" }; }
	BitFieldValue<bool, unsigned __int32> bSleepingDisableIKField() { return { this, "FPrimalCharacterSparseClassData.bSleepingDisableIK" }; }
	BitFieldValue<bool, unsigned __int32> bRagdollRetainAnimationsField() { return { this, "FPrimalCharacterSparseClassData.bRagdollRetainAnimations" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAddedAttachmentsField() { return { this, "FPrimalCharacterSparseClassData.bUseBPAddedAttachments" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyHasRunningAnimationWhenWalkingField() { return { this, "FPrimalCharacterSparseClassData.bOnlyHasRunningAnimationWhenWalking" }; }
	BitFieldValue<bool, unsigned __int32> bBPPreventInputTypeField() { return { this, "FPrimalCharacterSparseClassData.bBPPreventInputType" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventStasisField() { return { this, "FPrimalCharacterSparseClassData.bUseBPPreventStasis" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreSerializeSaveGameField() { return { this, "FPrimalCharacterSparseClassData.bUseBPPreSerializeSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGameField() { return { this, "FPrimalCharacterSparseClassData.bUseBPPostLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bUseHeavyCombatMusicField() { return { this, "FPrimalCharacterSparseClassData.bUseHeavyCombatMusic" }; }
	BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantityField() { return { this, "FPrimalCharacterSparseClassData.bServerBPNotifyInventoryItemChangesUseQuantity" }; }
	BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesField() { return { this, "FPrimalCharacterSparseClassData.bServerBPNotifyInventoryItemChanges" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnStaminaDrainedField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnStaminaDrained" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGrabDebugSnapshotField() { return { this, "FPrimalCharacterSparseClassData.bUseBPGrabDebugSnapshot" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustTorpidityDamageField() { return { this, "FPrimalCharacterSparseClassData.bUseBPAdjustTorpidityDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPRemovedAsPassengerField() { return { this, "FPrimalCharacterSparseClassData.bUseBPRemovedAsPassenger" }; }
	BitFieldValue<bool, unsigned __int32> bDisableIkOnDeathField() { return { this, "FPrimalCharacterSparseClassData.bDisableIkOnDeath" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInterceptAttemptedCarriedByField() { return { this, "FPrimalCharacterSparseClassData.bUseBPInterceptAttemptedCarriedBy" }; }
	BitFieldValue<bool, unsigned __int32> bIsNPCField() { return { this, "FPrimalCharacterSparseClassData.bIsNPC" }; }
	BitFieldValue<bool, unsigned __int32> bPreventRunningWhileWalkingField() { return { this, "FPrimalCharacterSparseClassData.bPreventRunningWhileWalking" }; }
	BitFieldValue<bool, unsigned __int32> bCanLandOnWaterField() { return { this, "FPrimalCharacterSparseClassData.bCanLandOnWater" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustMoveForwardField() { return { this, "FPrimalCharacterSparseClassData.bUseBPAdjustMoveForward" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustMoveRightField() { return { this, "FPrimalCharacterSparseClassData.bUseBPAdjustMoveRight" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDamageWhenMountedField() { return { this, "FPrimalCharacterSparseClassData.bAllowDamageWhenMounted" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnAttachmentReplicationField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnAttachmentReplication" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnMovementModeChangedNotifyField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnMovementModeChangedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnAnimPlayedNotifyField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnAnimPlayedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_OnSetRunningEventField() { return { this, "FPrimalCharacterSparseClassData.bUseBP_OnSetRunningEvent" }; }
	BitFieldValue<bool, unsigned __int32> bForceTurretFastTargetingField() { return { this, "FPrimalCharacterSparseClassData.bForceTurretFastTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bFlyingOrWaterDinoPreventBackwardsRunField() { return { this, "FPrimalCharacterSparseClassData.bFlyingOrWaterDinoPreventBackwardsRun" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideFlyingVelocityField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOverrideFlyingVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnStasisWhenDeadField() { return { this, "FPrimalCharacterSparseClassData.bDestroyOnStasisWhenDead" }; }
	BitFieldValue<bool, unsigned __int32> bForceAlwaysUpdateMeshAndCollisionField() { return { this, "FPrimalCharacterSparseClassData.bForceAlwaysUpdateMeshAndCollision" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideWalkingVelocityField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOverrideWalkingVelocity" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventStructurePlacementField() { return { this, "FPrimalCharacterSparseClassData.bUseBPPreventStructurePlacement" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnMassTeleportEventField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnMassTeleportEvent" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElementsField() { return { this, "FPrimalCharacterSparseClassData.bUseBPGetHUDElements" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanBeBaseForCharacterField() { return { this, "FPrimalCharacterSparseClassData.bUseBPCanBeBaseForCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanBaseOnCharacterField() { return { this, "FPrimalCharacterSparseClassData.bUseBPCanBaseOnCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnLandedField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnLanded" }; }
	BitFieldValue<bool, unsigned __int32> bEnableMoveCollapsingField() { return { this, "FPrimalCharacterSparseClassData.bEnableMoveCollapsing" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCheckJumpInputField() { return { this, "FPrimalCharacterSparseClassData.bUseBPCheckJumpInput" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideHurtAnimField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOverrideHurtAnim" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamageField() { return { this, "FPrimalCharacterSparseClassData.bUseBPAdjustImpulseFromDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulseField() { return { this, "FPrimalCharacterSparseClassData.bUseBPAdjustCharacterMovementImpulse" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyFOVInterpSpeedField() { return { this, "FPrimalCharacterSparseClassData.bUseBPModifyFOVInterpSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bVerifyBasingForSaddleStructuresField() { return { this, "FPrimalCharacterSparseClassData.bVerifyBasingForSaddleStructures" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_ShouldForceDisableTPVCameraInterpolationField() { return { this, "FPrimalCharacterSparseClassData.bUseBP_ShouldForceDisableTPVCameraInterpolation" }; }
	BitFieldValue<bool, unsigned __int32> bIsBigPusherField() { return { this, "FPrimalCharacterSparseClassData.bIsBigPusher" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomStateField() { return { this, "FPrimalCharacterSparseClassData.bUseBlueprintAnimNotifyCustomState" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySoundField() { return { this, "FPrimalCharacterSparseClassData.bUseBPPreventNotifySound" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_ModifySavedMoveAcceleration_PreRepField() { return { this, "FPrimalCharacterSparseClassData.bUseBP_ModifySavedMoveAcceleration_PreRep" }; }
	BitFieldValue<bool, unsigned __int32> bUseBP_ModifySavedMoveAcceleration_PostRepField() { return { this, "FPrimalCharacterSparseClassData.bUseBP_ModifySavedMoveAcceleration_PostRep" }; }
	BitFieldValue<bool, unsigned __int32> bUsesRootMotionField() { return { this, "FPrimalCharacterSparseClassData.bUsesRootMotion" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUnconsciousMeshBasingField() { return { this, "FPrimalCharacterSparseClassData.bPreventUnconsciousMeshBasing" }; }
	BitFieldValue<bool, unsigned __int32> bCorrectMeshRelativeZOffsetWhileDraggedField() { return { this, "FPrimalCharacterSparseClassData.bCorrectMeshRelativeZOffsetWhileDragged" }; }
	BitFieldValue<bool, unsigned __int32> bReturnToCapsuleCenterWhenDroppedInWaterField() { return { this, "FPrimalCharacterSparseClassData.bReturnToCapsuleCenterWhenDroppedInWater" }; }
	BitFieldValue<bool, unsigned __int32> bNetworkClientsUpdateBasedMovementOnTickField() { return { this, "FPrimalCharacterSparseClassData.bNetworkClientsUpdateBasedMovementOnTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseArmorDurabilityVFXField() { return { this, "FPrimalCharacterSparseClassData.bUseArmorDurabilityVFX" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStaggeredMovementField() { return { this, "FPrimalCharacterSparseClassData.bPreventStaggeredMovement" }; }
	BitFieldValue<bool, unsigned __int32> bBPForceUseOldASECameraField() { return { this, "FPrimalCharacterSparseClassData.bBPForceUseOldASECamera" }; }
	BitFieldValue<bool, unsigned __int32> bUsesWaterFinLockingField() { return { this, "FPrimalCharacterSparseClassData.bUsesWaterFinLocking" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnNearbyCharacterDiedField() { return { this, "FPrimalCharacterSparseClassData.bUseBPOnNearbyCharacterDied" }; }

	// Functions

	FPrimalCharacterSparseClassData& operator=(const FPrimalCharacterSparseClassData* __that) { return NativeCall<FPrimalCharacterSparseClassData&, const FPrimalCharacterSparseClassData*>(this, "FPrimalCharacterSparseClassData.operator=(FPrimalCharacterSparseClassData&)", __that); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalCharacterSparseClassData>(); }

	std::add_const_t<UE :: Math :: TRotator < double >>& OldRotationField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalCharacterSparseClassData.OldRotation"); }
	std::add_const_t<FName>& RootBodyBoneNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.RootBodyBoneName"); }
	std::add_const_t<float>& DefaultTPVZoomField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DefaultTPVZoom"); }
	std::add_const_t<float>& MaxTPVZoomField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxTPVZoom"); }
	std::add_const_t<float>& MinTPVZoomField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTPVZoom"); }
	std::add_const_t<float>& PreviewCameraMaxZoomMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraMaxZoomMultiplier"); }
	std::add_const_t<float>& PreviewCameraDefaultZoomMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
	std::add_const_t<float>& PreviewCameraDistanceScaleFactorField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraDistanceScaleFactor"); }

	UE::Math::TVector<double>& PreviewCameraPivotOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPrimalCharacterSparseClassData.PreviewCameraPivotOffset"); }
	std::add_const_t<UE :: Math :: TVector < double >>& PreviewCameraPivotOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalCharacterSparseClassData.PreviewCameraPivotOffset"); }
	std::add_const_t<USoundBase *>& StartDraggedSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.StartDraggedSound"); }
	std::add_const_t<USoundBase *>& EndDraggedSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.EndDraggedSound"); }

	USoundBase*& CombatDayMusicField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.CombatDayMusic"); }
	std::add_const_t<USoundBase *>& CombatDayMusicField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.CombatDayMusic"); }

	USoundBase*& CombatNightMusicField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.CombatNightMusic"); }
	std::add_const_t<USoundBase *>& CombatNightMusicField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.CombatNightMusic"); }

	float& NearbyCombatMusicRangeField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.NearbyCombatMusicRange"); }
	std::add_const_t<float>& NearbyCombatMusicRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.NearbyCombatMusicRange"); }

	float& CombatTimeoutField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CombatTimeout"); }
	std::add_const_t<float>& CombatTimeoutField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CombatTimeout"); }
	std::add_const_t<float>& JumpBaseLockingThresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.JumpBaseLockingThreshold"); }

	float& JumpAnimBlendInTimeField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.JumpAnimBlendInTime"); }
	std::add_const_t<float>& JumpAnimBlendInTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.JumpAnimBlendInTime"); }
	std::add_const_t<FName>& DediOverrideCapsuleCollisionProfileNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DediOverrideCapsuleCollisionProfileName"); }
	std::add_const_t<FName>& DediOverrideMeshCollisionProfileNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DediOverrideMeshCollisionProfileName"); }
	std::add_const_t<FName>& SnaredFromSocketField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.SnaredFromSocket"); }
	std::add_const_t<float>& DamageNotifyTeamAggroMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageNotifyTeamAggroMultiplier"); }
	std::add_const_t<float>& DamageNotifyTeamAggroRangeFalloffField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageNotifyTeamAggroRangeFalloff"); }
	std::add_const_t<TArray < USoundBase * , TSizedDefaultAllocator < 32 > >>& CharacterOverrideSoundFromField() const { return *GetNativePointerField<TArray < USoundBase * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideSoundFrom"); }
	std::add_const_t<TArray < USoundBase * , TSizedDefaultAllocator < 32 > >>& CharacterOverrideSoundToField() const { return *GetNativePointerField<TArray < USoundBase * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideSoundTo"); }
	std::add_const_t<TArray < UParticleSystem * , TSizedDefaultAllocator < 32 > >>& CharacterOverrideParticleFromField() const { return *GetNativePointerField<TArray < UParticleSystem * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideParticleFrom"); }
	std::add_const_t<TArray < UParticleSystem * , TSizedDefaultAllocator < 32 > >>& CharacterOverrideParticleToField() const { return *GetNativePointerField<TArray < UParticleSystem * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideParticleTo"); }
	std::add_const_t<TArray < USoundBase * , TSizedDefaultAllocator < 32 > >>& LandedSoundsPhysMatField() const { return *GetNativePointerField<TArray < USoundBase * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalCharacterSparseClassData.LandedSoundsPhysMat"); }
	std::add_const_t<FName>& MeshRootSocketNameField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.MeshRootSocketName"); }
	std::add_const_t<float>& MontageSyncIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MontageSyncInterval"); }
	std::add_const_t<float>& FallingDamageHealthScaleBaseField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.FallingDamageHealthScaleBase"); }
	std::add_const_t<float>& MinTimeBetweenFootstepsField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTimeBetweenFootsteps"); }
	std::add_const_t<float>& MinTimeBetweenFootstepsRunningField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTimeBetweenFootstepsRunning"); }
	std::add_const_t<float>& TPVStructurePlacingHeightMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.TPVStructurePlacingHeightMultiplier"); }
	std::add_const_t<float>& RagdollDeathImpulseScalerField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollDeathImpulseScaler"); }
	std::add_const_t<float>& OrbitCamZoomStepSizeField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamZoomStepSize"); }
	std::add_const_t<float>& OrbitCamMinZoomLevelField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamMinZoomLevel"); }
	std::add_const_t<float>& OrbitCamMaxZoomLevelField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamMaxZoomLevel"); }
	std::add_const_t<float>& MaxCursorHUDDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxCursorHUDDistance"); }
	std::add_const_t<UE :: Math :: TVector < double >>& DeathActorTargetingOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalCharacterSparseClassData.DeathActorTargetingOffset"); }
	std::add_const_t<FName>& SocketOverrideTargetingLocationField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.SocketOverrideTargetingLocation"); }
	std::add_const_t<float>& FootPhysicalSurfaceCheckIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.FootPhysicalSurfaceCheckInterval"); }
	std::add_const_t<float>& RagdollImpactDamageVelocityScaleField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollImpactDamageVelocityScale"); }
	std::add_const_t<float>& RagdollImpactDamageMinDecelerationSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollImpactDamageMinDecelerationSpeed"); }
	std::add_const_t<float>& StartFallingImpactRagdollTimeIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.StartFallingImpactRagdollTimeInterval"); }
	std::add_const_t<USoundBase *>& EnteredSwimmingSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.EnteredSwimmingSound"); }
	std::add_const_t<USoundBase *>& EnteredSleepingSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.EnteredSleepingSound"); }
	std::add_const_t<USoundBase *>& LeftSleepingSoundField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalCharacterSparseClassData.LeftSleepingSound"); }
	std::add_const_t<float>& CorpseDraggedDecayRateField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CorpseDraggedDecayRate"); }
	std::add_const_t<float>& PoopAltItemChanceField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PoopAltItemChance"); }
	std::add_const_t<UTexture2D *>& PoopIconField() const { return *GetNativePointerField<UTexture2D **>(this, "FPrimalCharacterSparseClassData.PoopIcon"); }
	std::add_const_t<float>& RunningMaxDesiredRotDeltaField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RunningMaxDesiredRotDelta"); }
	std::add_const_t<float>& TamedDinoCallOutRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.TamedDinoCallOutRange"); }
	std::add_const_t<UE :: Math :: TVector < double >>& TargetPathfindingLocationOffsetField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalCharacterSparseClassData.TargetPathfindingLocationOffset"); }
	std::add_const_t<float>& DamageTheMeleeDamageCauserPercentField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageTheMeleeDamageCauserPercent"); }
	std::add_const_t<float>& DurabilityDegrateTheMeleeDamageCauserPercentField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DurabilityDegrateTheMeleeDamageCauserPercent"); }
	std::add_const_t<TSubclassOf < UDamageType >>& DamageTheMeleeDamageCauserDamageTypeField() const { return *GetNativePointerField<TSubclassOf < UDamageType >*>(this, "FPrimalCharacterSparseClassData.DamageTheMeleeDamageCauserDamageType"); }
	std::add_const_t<float>& CharacterDamageImpulseMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CharacterDamageImpulseMultiplier"); }
	std::add_const_t<float>& MaxRagdollDeathVelocityImpulseField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxRagdollDeathVelocityImpulse"); }
	std::add_const_t<float>& ClientRotationInterpSpeedMultiplierGroundField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ClientRotationInterpSpeedMultiplierGround"); }
	std::add_const_t<FName>& DefaultCameraStyleField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DefaultCameraStyle"); }
	std::add_const_t<float>& ScaleDeathHarvestHealthyByMaxHealthBaseField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ScaleDeathHarvestHealthyByMaxHealthBase"); }
	std::add_const_t<float>& ControlledInventoryAccessDistanceOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ControlledInventoryAccessDistanceOffset"); }
	std::add_const_t<float>& AdditionalMaxUseDistanceField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.AdditionalMaxUseDistance"); }
	std::add_const_t<float>& DraggingInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DraggingInterpSpeed"); }
	std::add_const_t<float>& DraggingInterpDurationField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DraggingInterpDuration"); }
	std::add_const_t<TEnumAsByte < EMovementMode >>& DraggedMovementModeField() const { return *GetNativePointerField<TEnumAsByte < EMovementMode >*>(this, "FPrimalCharacterSparseClassData.DraggedMovementMode"); }
	std::add_const_t<TEnumAsByte < ETickingGroup >>& BeingDraggedMovementComponentTickGroupField() const { return *GetNativePointerField<TEnumAsByte < ETickingGroup >*>(this, "FPrimalCharacterSparseClassData.BeingDraggedMovementComponentTickGroup"); }
	std::add_const_t<TEnumAsByte < ETickingGroup >>& DraggingMovementComponentTickGroupField() const { return *GetNativePointerField<TEnumAsByte < ETickingGroup >*>(this, "FPrimalCharacterSparseClassData.DraggingMovementComponentTickGroup"); }
	std::add_const_t<UNiagaraSystem *>& DamageImpactFXForAttackerField() const { return *GetNativePointerField<UNiagaraSystem **>(this, "FPrimalCharacterSparseClassData.DamageImpactFXForAttacker"); }
	std::add_const_t<float>& DamageImpactFXSizeOverrideField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageImpactFXSizeOverride"); }
	std::add_const_t<FName>& NonLocationalDamageHurtFXSocketField() const { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.NonLocationalDamageHurtFXSocket"); }
	std::add_const_t<UE :: Math :: TVector < double >>& NonLocationalDamageHurtFXScaleOverrideField() const { return *GetNativePointerField<UE :: Math :: TVector < double >*>(this, "FPrimalCharacterSparseClassData.NonLocationalDamageHurtFXScaleOverride"); }
	std::add_const_t<float>& ArmorDurabilityPercentUpdateIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ArmorDurabilityPercentUpdateInterval"); }

	float& DeathDepositLifespanOverrideField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DeathDepositLifespanOverride"); }
	std::add_const_t<float>& DeathDepositLifespanOverrideField() const { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DeathDepositLifespanOverride"); }

	TSubclassOf<UPrimalUI>& RidingUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "FPrimalCharacterSparseClassData.RidingUI"); }
	std::add_const_t<TSubclassOf < UPrimalUI >>& RidingUIField() const { return *GetNativePointerField<TSubclassOf < UPrimalUI >*>(this, "FPrimalCharacterSparseClassData.RidingUI"); }

	TSubclassOf<UPrimalUI>& CarryingUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "FPrimalCharacterSparseClassData.CarryingUI"); }
	std::add_const_t<TSubclassOf < UPrimalUI >>& CarryingUIField() const { return *GetNativePointerField<TSubclassOf < UPrimalUI >*>(this, "FPrimalCharacterSparseClassData.CarryingUI"); }

	TSubclassOf<UPrimalUI>& PassengerUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "FPrimalCharacterSparseClassData.PassengerUI"); }
	std::add_const_t<TSubclassOf < UPrimalUI >>& PassengerUIField() const { return *GetNativePointerField<TSubclassOf < UPrimalUI >*>(this, "FPrimalCharacterSparseClassData.PassengerUI"); }

	TSubclassOf<UPrimalUI>& BasedUIField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "FPrimalCharacterSparseClassData.BasedUI"); }
	std::add_const_t<TSubclassOf < UPrimalUI >>& BasedUIField() const { return *GetNativePointerField<TSubclassOf < UPrimalUI >*>(this, "FPrimalCharacterSparseClassData.BasedUI"); }
};