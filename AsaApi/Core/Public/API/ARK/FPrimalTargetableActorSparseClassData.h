#pragma once


struct FPrimalTargetableActorSparseClassData
{
    // Fields

    UE::Math::TRotator<double>& DestructibleMeshRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPrimalTargetableActorSparseClassData.DestructibleMeshRotationOffset"); }
    UE::Math::TVector2<double>& OverlayMultiUseTooltipScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FPrimalTargetableActorSparseClassData.OverlayMultiUseTooltipScale"); }
    UE::Math::TVector2<double>& OverlayMultiUseTooltipPaddingField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FPrimalTargetableActorSparseClassData.OverlayMultiUseTooltipPadding"); }
    TSubclassOf<UToolTipWidget>& OverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UToolTipWidget>*>(this, "FPrimalTargetableActorSparseClassData.OverlayToolTipWidget"); }
    TSoftClassPtr<AActor>& DestructionActorTemplateField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "FPrimalTargetableActorSparseClassData.DestructionActorTemplate"); }
    TSoftObjectPtr<UGeometryCollection>& SoftDestructionGeoCollectionAssetField() { return *GetNativePointerField<TSoftObjectPtr<UGeometryCollection>*>(this, "FPrimalTargetableActorSparseClassData.SoftDestructionGeoCollectionAsset"); }
    float& DamageNotifyTeamAggroMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroMultiplier"); }
    float& DamageNotifyTeamAggroRangeField() { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroRange"); }
    float& DamageNotifyTeamAggroRangeFalloffField() { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroRangeFalloff"); }
    float& DestructibleMeshDeathImpulseScaleField() { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DestructibleMeshDeathImpulseScale"); }
    float& PassiveDamageHealthReplicationPercentIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.PassiveDamageHealthReplicationPercentInterval"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDestructionActorTemplateServerOnlyField() { return { this, "FPrimalTargetableActorSparseClassData.bDestructionActorTemplateServerOnly" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyedMeshUseSkeletalMeshComponentField() { return { this, "FPrimalTargetableActorSparseClassData.bDestroyedMeshUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> bPreventZeroDamageInstigatorSelfDamageField() { return { this, "FPrimalTargetableActorSparseClassData.bPreventZeroDamageInstigatorSelfDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAIField() { return { this, "FPrimalTargetableActorSparseClassData.bDamageNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageByFriendlyDinosField() { return { this, "FPrimalTargetableActorSparseClassData.bAllowDamageByFriendlyDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamageField() { return { this, "FPrimalTargetableActorSparseClassData.bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDoAllowRadialDamageWithoutVisiblityTraceField() { return { this, "FPrimalTargetableActorSparseClassData.bDoAllowRadialDamageWithoutVisiblityTrace" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDamageRepairCooldownField() { return { this, "FPrimalTargetableActorSparseClassData.bIgnoreDamageRepairCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDiedField() { return { this, "FPrimalTargetableActorSparseClassData.bUseBPDied" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDestroyedMeshesField() { return { this, "FPrimalTargetableActorSparseClassData.bUseBPGetDestroyedMeshes" }; }

    // Functions

    FPrimalTargetableActorSparseClassData& operator=(const FPrimalTargetableActorSparseClassData* __that) { return NativeCall<FPrimalTargetableActorSparseClassData&, const FPrimalTargetableActorSparseClassData*>(this, "FPrimalTargetableActorSparseClassData.operator=(FPrimalTargetableActorSparseClassData&)", __that); }
    static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalTargetableActorSparseClassData>(); }


	std::add_const_t<UE :: Math :: TRotator < double >>& DestructibleMeshRotationOffsetField() const { return *GetNativePointerField<UE :: Math :: TRotator < double >*>(this, "FPrimalTargetableActorSparseClassData.DestructibleMeshRotationOffset"); }
	std::add_const_t<TSubclassOf < UToolTipWidget >>& OverlayToolTipWidgetField() const { return *GetNativePointerField<TSubclassOf < UToolTipWidget >*>(this, "FPrimalTargetableActorSparseClassData.OverlayToolTipWidget"); }
	std::add_const_t<float>& DamageNotifyTeamAggroMultiplierField() const { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroMultiplier"); }
	std::add_const_t<float>& DamageNotifyTeamAggroRangeField() const { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroRange"); }
	std::add_const_t<float>& DamageNotifyTeamAggroRangeFalloffField() const { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroRangeFalloff"); }
	std::add_const_t<float>& DestructibleMeshDeathImpulseScaleField() const { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DestructibleMeshDeathImpulseScale"); }
	std::add_const_t<float>& PassiveDamageHealthReplicationPercentIntervalField() const { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.PassiveDamageHealthReplicationPercentInterval"); }
};