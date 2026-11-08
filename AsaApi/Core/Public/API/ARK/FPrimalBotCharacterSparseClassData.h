#pragma once


struct FPrimalBotCharacterSparseClassData : FPrimalDinoCharacterSparseClassData
{
    // Fields

    TArray<FLinearColor, TSizedDefaultAllocator<32> >& RandomHairDyeColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.RandomHairDyeColors"); }
    TArray<FLinearColor, TSizedDefaultAllocator<32> >& RandomHairTipDyeColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.RandomHairTipDyeColors"); }
    TArray<FLinearColor, TSizedDefaultAllocator<32> >& RandomFacialHairDyeColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.RandomFacialHairDyeColors"); }
    TArray<FLinearColor, TSizedDefaultAllocator<32> >& RandomFacialHairTipDyeColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.RandomFacialHairTipDyeColors"); }
    UAnimSequence*& AlternateDinoRidingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.AlternateDinoRidingAnimation"); }
    UAnimSequence*& AlternateDinoRidingMoveAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.AlternateDinoRidingMoveAnimation"); }
    TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& AcquiredTargetAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.AcquiredTargetAnimations"); }
    float& AcquiredTargetAnimPercentageToPlayField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.AcquiredTargetAnimPercentageToPlay"); }
    TArray<int, TSizedDefaultAllocator<32> >& NonWeaponAttacksField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.NonWeaponAttacks"); }
    int& DefaultEquippedWeaponIndexField() { return *GetNativePointerField<int*>(this, "FPrimalBotCharacterSparseClassData.DefaultEquippedWeaponIndex"); }
    float& UnequipDelayWhenNotInCombatField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.UnequipDelayWhenNotInCombat"); }
    float& WeaponSwitchMinTimeField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.WeaponSwitchMinTime"); }
    FName& WeaponDefaultAttachPointField() { return *GetNativePointerField<FName*>(this, "FPrimalBotCharacterSparseClassData.WeaponDefaultAttachPoint"); }
    bool& HasMeleeWeaponField() { return *GetNativePointerField<bool*>(this, "FPrimalBotCharacterSparseClassData.HasMeleeWeapon"); }
    float& MaxShieldBlockDamageField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.MaxShieldBlockDamage"); }
    float& ShieldBlockDamageRecoveryRateField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ShieldBlockDamageRecoveryRate"); }
    float& ShieldBlockDamageTimeToStartRecoveringField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ShieldBlockDamageTimeToStartRecovering"); }
    TSoftClassPtr<APrimalBuff>& BuffToGiveOnShieldBlockDamageDepletedField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "FPrimalBotCharacterSparseClassData.BuffToGiveOnShieldBlockDamageDepleted"); }
    TSoftClassPtr<APrimalBuff>& BuffToGiveToDamageCauserOnShieldBlockDamageDepletedField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "FPrimalBotCharacterSparseClassData.BuffToGiveToDamageCauserOnShieldBlockDamageDepleted"); }
    USoundBase*& OnShieldBlockDamageDepletedSoundToPlayField() { return *GetNativePointerField<USoundBase**>(this, "FPrimalBotCharacterSparseClassData.OnShieldBlockDamageDepletedSoundToPlay"); }
    UAnimSequence*& DefaultShieldAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultShieldAnimation"); }
    UAnimSequence*& ShieldCoverAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.ShieldCoverAnimation"); }
    TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >& BuffsPreventBlockingWithShieldField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.BuffsPreventBlockingWithShield"); }
    TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& RideableDinoClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FPrimalBotCharacterSparseClassData.RideableDinoClasses"); }
    //TSubclassOf<UAnimInstance>& DefaultAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "FPrimalBotCharacterSparseClassData.DefaultAnimBlueprint"); }
    UAnimSequence*& DefaultDinoRidingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultDinoRidingAnimation"); }
    UAnimSequence*& DefaultDinoRidingMoveAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultDinoRidingMoveAnimation"); }
    UAnimMontage*& DefaultWeaponEquipAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.DefaultWeaponEquipAnimation"); }
    UAnimMontage*& DefaultWeaponUnequipAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.DefaultWeaponUnequipAnimation"); }
    int& BotVoiceCollectionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalBotCharacterSparseClassData.BotVoiceCollectionIndex"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bUseBPOverrideColorIDForEquipmentAttachmentField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPOverrideColorIDForEquipmentAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMinAttackRangeField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPGetMinAttackRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMaxAttackRangeField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPGetMaxAttackRange" }; }
    BitFieldValue<bool, unsigned __int32> bUnequipWeaponWhenNotInCombatField() { return { this, "FPrimalBotCharacterSparseClassData.bUnequipWeaponWhenNotInCombat" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanEquipWeaponField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPCanEquipWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMeleeSocketLocationField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPGetMeleeSocketLocation" }; }
    BitFieldValue<bool, unsigned __int32> bInstantWeaponOnlyDamageTargetField() { return { this, "FPrimalBotCharacterSparseClassData.bInstantWeaponOnlyDamageTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFireInstantWeaponField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPFireInstantWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideInstantWeaponConfigField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPOverrideInstantWeaponConfig" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeleeDamageAmountAsBaseInstantDamageField() { return { this, "FPrimalBotCharacterSparseClassData.bUseMeleeDamageAmountAsBaseInstantDamage" }; }
    BitFieldValue<bool, unsigned __int32> bScaleInstantDamageWithDinoDamageField() { return { this, "FPrimalBotCharacterSparseClassData.bScaleInstantDamageWithDinoDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDebugInstantWeaponTracesField() { return { this, "FPrimalBotCharacterSparseClassData.bDebugInstantWeaponTraces" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanRideDinoField() { return { this, "FPrimalBotCharacterSparseClassData.bUseBPCanRideDino" }; }
    BitFieldValue<bool, unsigned __int32> bUsingCustomBotVoiceCollectionField() { return { this, "FPrimalBotCharacterSparseClassData.bUsingCustomBotVoiceCollection" }; }
    BitFieldValue<bool, unsigned __int32> bUsingRandomBotVoiceCollectionField() { return { this, "FPrimalBotCharacterSparseClassData.bUsingRandomBotVoiceCollection" }; }

    // Functions

    static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalBotCharacterSparseClassData>(); }
    FPrimalBotCharacterSparseClassData& operator=(const FPrimalBotCharacterSparseClassData* __that) { return NativeCall<FPrimalBotCharacterSparseClassData&, const FPrimalBotCharacterSparseClassData*>(this, "FPrimalBotCharacterSparseClassData.operator=(FPrimalBotCharacterSparseClassData&)", __that); }


	std::add_const_t<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >>& RandomHairDyeColorsField() const { return *GetNativePointerField<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalBotCharacterSparseClassData.RandomHairDyeColors"); }
	std::add_const_t<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >>& RandomHairTipDyeColorsField() const { return *GetNativePointerField<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalBotCharacterSparseClassData.RandomHairTipDyeColors"); }
	std::add_const_t<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >>& RandomFacialHairDyeColorsField() const { return *GetNativePointerField<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalBotCharacterSparseClassData.RandomFacialHairDyeColors"); }
	std::add_const_t<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >>& RandomFacialHairTipDyeColorsField() const { return *GetNativePointerField<TArray < FLinearColor , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalBotCharacterSparseClassData.RandomFacialHairTipDyeColors"); }
	std::add_const_t<UAnimSequence *>& AlternateDinoRidingAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.AlternateDinoRidingAnimation"); }
	std::add_const_t<UAnimSequence *>& AlternateDinoRidingMoveAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.AlternateDinoRidingMoveAnimation"); }
	std::add_const_t<TArray < UAnimMontage * , TSizedDefaultAllocator < 32 > >>& AcquiredTargetAnimationsField() const { return *GetNativePointerField<TArray < UAnimMontage * , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalBotCharacterSparseClassData.AcquiredTargetAnimations"); }
	std::add_const_t<float>& AcquiredTargetAnimPercentageToPlayField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.AcquiredTargetAnimPercentageToPlay"); }
	std::add_const_t<TArray < int , TSizedDefaultAllocator < 32 > >>& NonWeaponAttacksField() const { return *GetNativePointerField<TArray < int , TSizedDefaultAllocator < 32 > >*>(this, "FPrimalBotCharacterSparseClassData.NonWeaponAttacks"); }
	std::add_const_t<int>& DefaultEquippedWeaponIndexField() const { return *GetNativePointerField<int*>(this, "FPrimalBotCharacterSparseClassData.DefaultEquippedWeaponIndex"); }
	std::add_const_t<float>& UnequipDelayWhenNotInCombatField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.UnequipDelayWhenNotInCombat"); }
	std::add_const_t<float>& WeaponSwitchMinTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.WeaponSwitchMinTime"); }
	std::add_const_t<FName>& WeaponDefaultAttachPointField() const { return *GetNativePointerField<FName*>(this, "FPrimalBotCharacterSparseClassData.WeaponDefaultAttachPoint"); }
	std::add_const_t<bool>& HasMeleeWeaponField() const { return *GetNativePointerField<bool*>(this, "FPrimalBotCharacterSparseClassData.HasMeleeWeapon"); }
	std::add_const_t<float>& MaxShieldBlockDamageField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.MaxShieldBlockDamage"); }
	std::add_const_t<float>& ShieldBlockDamageRecoveryRateField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ShieldBlockDamageRecoveryRate"); }
	std::add_const_t<float>& ShieldBlockDamageTimeToStartRecoveringField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ShieldBlockDamageTimeToStartRecovering"); }
	std::add_const_t<USoundBase *>& OnShieldBlockDamageDepletedSoundToPlayField() const { return *GetNativePointerField<USoundBase **>(this, "FPrimalBotCharacterSparseClassData.OnShieldBlockDamageDepletedSoundToPlay"); }
	std::add_const_t<UAnimSequence *>& DefaultShieldAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.DefaultShieldAnimation"); }
	std::add_const_t<UAnimSequence *>& ShieldCoverAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.ShieldCoverAnimation"); }

	TSubclassOf<UAnimInstance>& DefaultAnimBlueprintField() { return *GetNativePointerField<TSubclassOf<UAnimInstance>*>(this, "FPrimalBotCharacterSparseClassData.DefaultAnimBlueprint"); }
	std::add_const_t<TSubclassOf < UAnimInstance >>& DefaultAnimBlueprintField() const { return *GetNativePointerField<TSubclassOf < UAnimInstance >*>(this, "FPrimalBotCharacterSparseClassData.DefaultAnimBlueprint"); }
	std::add_const_t<UAnimSequence *>& DefaultDinoRidingAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.DefaultDinoRidingAnimation"); }
	std::add_const_t<UAnimSequence *>& DefaultDinoRidingMoveAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.DefaultDinoRidingMoveAnimation"); }
	std::add_const_t<UAnimMontage *>& DefaultWeaponEquipAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalBotCharacterSparseClassData.DefaultWeaponEquipAnimation"); }
	std::add_const_t<UAnimMontage *>& DefaultWeaponUnequipAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalBotCharacterSparseClassData.DefaultWeaponUnequipAnimation"); }
	std::add_const_t<int>& BotVoiceCollectionIndexField() const { return *GetNativePointerField<int*>(this, "FPrimalBotCharacterSparseClassData.BotVoiceCollectionIndex"); }

	UAnimSequence*& DefaultSeatingAnimationField() { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalBotCharacterSparseClassData.DefaultSeatingAnimation"); }
	std::add_const_t<UAnimSequence *>& DefaultSeatingAnimationField() const { return *GetNativePointerField<UAnimSequence **>(this, "FPrimalBotCharacterSparseClassData.DefaultSeatingAnimation"); }

	UAnimMontage*& FireBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.FireBallistaAnimation"); }
	std::add_const_t<UAnimMontage *>& FireBallistaAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalBotCharacterSparseClassData.FireBallistaAnimation"); }

	UAnimMontage*& ReloadBallistaAnimationField() { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalBotCharacterSparseClassData.ReloadBallistaAnimation"); }
	std::add_const_t<UAnimMontage *>& ReloadBallistaAnimationField() const { return *GetNativePointerField<UAnimMontage **>(this, "FPrimalBotCharacterSparseClassData.ReloadBallistaAnimation"); }

	float& DefaultMaxSeatingStructureControlDurationField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.DefaultMaxSeatingStructureControlDuration"); }
	std::add_const_t<float>& DefaultMaxSeatingStructureControlDurationField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.DefaultMaxSeatingStructureControlDuration"); }

	float& ClaimSeatingStructureCooldownField() { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ClaimSeatingStructureCooldown"); }
	std::add_const_t<float>& ClaimSeatingStructureCooldownField() const { return *GetNativePointerField<float*>(this, "FPrimalBotCharacterSparseClassData.ClaimSeatingStructureCooldown"); }
};