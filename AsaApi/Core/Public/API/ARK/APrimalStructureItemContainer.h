#pragma once
#include "BulkForward.h"


struct APrimalStructureItemContainer : APrimalStructure
{
    // Fields

    UPrimalInventoryComponent* MyInventoryComponentField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureItemContainer.MyInventoryComponent"); }
    float& SolarRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMin"); }
    float& SolarRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SolarRefreshInterval"); }
    long double& LastSolarRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSolarRefreshTime"); }
    TSubclassOf<UPrimalItem>& BatteryClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.BatteryClassOverride"); }
    int& PoweredOverrideCounterField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.PoweredOverrideCounter"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ActivateMaterials"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& InActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.InActivateMaterials"); }
    //TArray<FItemToDisplayInStructureTooltip, TSizedDefaultAllocator<32> >& ItemsToDisplayInStructureTooltipField() { return *GetNativePointerField<TArray<FItemToDisplayInStructureTooltip, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ItemsToDisplayInStructureTooltip"); }
    UChildActorComponent*& MyChildEmitterSpawnableField() { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureItemContainer.MyChildEmitterSpawnable"); }
    FString& BoxNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxName"); }
    int& MaxBoxNameLengthField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxBoxNameLength"); }
    float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.InsulationRange"); }
    float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.HypoThermiaInsulation"); }
    float& ContainerActiveDecreaseHealthSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ContainerActiveDecreaseHealthSpeed"); }
    float& FuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.FuelConsumptionIntervalsMultiplier"); }
    float& DropInventoryOnDestructionLifespanField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryOnDestructionLifespan"); }
    FString& ActivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.ActivateContainerString"); }
    TObjectPtr<UTexture2D>& ActivateContainerIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.ActivateContainerIcon"); }
    FString& DeactivateContainerStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DeactivateContainerString"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DeactivateContainerIcon"); }
    TSubclassOf<UDamageType>& ContainerActiveHealthDecreaseDamageTypePassiveField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.ContainerActiveHealthDecreaseDamageTypePassive"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ActiveRequiresFuelItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ActiveRequiresFuelItems"); }
    TArray<float, TSizedDefaultAllocator<32> >& FuelItemsConsumeIntervalField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.FuelItemsConsumeInterval"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& FuelItemsConsumedGiveItemsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.FuelItemsConsumedGiveItems"); }
    long double& NetDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.NetDestructionTime"); }
    unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureItemContainer.CurrentPinCode"); }
    long double& CurrentFuelTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.CurrentFuelTimeCache"); }
    long double& LastCheckedFuelTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastCheckedFuelTime"); }
    int& LinkedPowerJunctionStructureIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructureID"); }
    int& CurrentItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.CurrentItemCount"); }
    int& BlacklistedItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.BlacklistedItemCount"); }
    int& MaxItemCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.MaxItemCount"); }
    int& EmitterColorRegionIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.EmitterColorRegionIndex"); }
    TWeakObjectPtr<APrimalStructure>& LinkedPowerJunctionStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure>*>(this, "APrimalStructureItemContainer.LinkedPowerJunctionStructure"); }
    TSubclassOf<UPrimalItem>& NextConsumeFuelGiveItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.NextConsumeFuelGiveItemType"); }
    long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastLockStateChangeTime"); }
    long double& LastActiveStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActiveStateChangeTime"); }
    int& LastPowerJunctionLinkIDField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastPowerJunctionLinkID"); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureItemContainer.MapMarkerLocationInfo"); }
    FTimerHandle& UpdateContainerActiveHealthDecreaseHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecreaseHandle"); }
    float& BasedCharacterDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageInterval"); }
    float& BasedCharacterDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.BasedCharacterDamageAmount"); }
    TSubclassOf<UDamageType>& BasedCharacterDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureItemContainer.BasedCharacterDamageType"); }
    TSubclassOf<UPrimalItem>& EngramRequirementClassOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.EngramRequirementClassOverride"); }
    AActor*& LinkedBlueprintSpawnActorPointField() { return *GetNativePointerField<AActor**>(this, "APrimalStructureItemContainer.LinkedBlueprintSpawnActorPoint"); }
    TSoftClassPtr<APrimalStructureItemContainer>& PoweredNearbyStructureTemplateField() { return *GetNativePointerField<TSoftClassPtr<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureTemplate"); }
    float& PoweredNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredNearbyStructureRange"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureItemContainer.JunctionLinkParticleTemplate"); }
    TSubclassOf<UPrimalUI>& UISceneTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalUI>*>(this, "APrimalStructureItemContainer.UISceneTemplate"); }
    FString& OpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.OpenSceneActionName"); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.OpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionName"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisabledOpenSceneActionIcon"); }
    TSubclassOf<UPrimalItem>& RequiresItemForOpenSceneActionField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.RequiresItemForOpenSceneAction"); }
    long double& DeathCacheCreationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.DeathCacheCreationTime"); }
    long double& LastBasedCharacterDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageTime"); }
    int& LastBasedCharacterDamageFrameField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer.LastBasedCharacterDamageFrame"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastSignNamingTime"); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureItemContainer.JunctionLinkCableParticle"); }
    UE::Math::TVector<double>& JunctionCableBeamOffsetStartField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetStart"); }
    UE::Math::TVector<double>& JunctionCableBeamOffsetEndField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer.JunctionCableBeamOffsetEnd"); }
    USoundBase*& ContainerActivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerActivatedSound"); }
    USoundBase*& ContainerDeactivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.ContainerDeactivatedSound"); }
    TSubclassOf<APrimalStructureItemContainer>& DemolishInventoryDepositClassField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer.DemolishInventoryDepositClass"); }
    TSubclassOf<UPrimalItem>& FuelItemTrueClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.FuelItemTrueClass"); }
    TSubclassOf<UPrimalItem>& ReplicatedFuelItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemClass"); }
    float& CurrentFuelQuantityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.CurrentFuelQuantity"); }
    float& DrawFuelRemainingOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DrawFuelRemainingOffset"); }
    float& TimeCooldownRequestFuelRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.TimeCooldownRequestFuelRemaining"); }
    __int16& ReplicatedFuelItemColorIndexField() { return *GetNativePointerField<__int16*>(this, "APrimalStructureItemContainer.ReplicatedFuelItemColorIndex"); }
    //UFXSystemAsset*& DefaultParticleTemplateField() { return *GetNativePointerField<UFXSystemAsset**>(this, "APrimalStructureItemContainer.DefaultParticleTemplate"); }
    FLinearColor& DefaultParticleLightColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalStructureItemContainer.DefaultParticleLightColor"); }
    USoundBase*& DefaultAudioTemplateField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureItemContainer.DefaultAudioTemplate"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& OverrideParticleTemplateItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleTemplateItemClasses"); }
    //TArray<UFXSystemAsset*, TSizedDefaultAllocator<32> >& OverrideParticleTemplatesField() { return *GetNativePointerField<TArray<UFXSystemAsset*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleTemplates"); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    TArray<FLinearColor, TSizedDefaultAllocator<32> >& OverrideParticleLightColorField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleLightColor"); }
    TArray<USoundBase*, TSizedDefaultAllocator<32> >& OverrideAudioTemplatesField() { return *GetNativePointerField<TArray<USoundBase*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideAudioTemplates"); }
    float& MaxActivationDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.MaxActivationDistance"); }
    FString& BoxNamePrefaceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureItemContainer.BoxNamePrefaceString"); }
    TArray<float, TSizedDefaultAllocator<32> >& FuelConsumeDecreaseDurabilityAmountsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.FuelConsumeDecreaseDurabilityAmounts"); }
    float& RandomFuelUpdateTimeMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMin"); }
    float& RandomFuelUpdateTimeMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.RandomFuelUpdateTimeMax"); }
    long double& LastDeactivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastDeactivatedTime"); }
    long double& LastActivatedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer.LastActivatedTime"); }
    float& ValidCraftingResourceMaxDurabilityField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ValidCraftingResourceMaxDurability"); }
    float& ActivationCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.ActivationCooldownTime"); }
    unsigned __int64& DeathCacheCharacterIDField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureItemContainer.DeathCacheCharacterID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureItemContainer.LocalCorpseEmitter"); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& DropInventoryDepositTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer.DropInventoryDepositTraceDistance"); }
    TMap<FName, FPrimalWirelessReferences, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FPrimalWirelessReferences, 0> >& WirelessExchangeRefsField() { return *GetNativePointerField<TMap<FName, FPrimalWirelessReferences, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FPrimalWirelessReferences, 0> >*>(this, "APrimalStructureItemContainer.WirelessExchangeRefs"); }
    TArray<TWeakObjectPtr<AShooterPlayerController>, TSizedDefaultAllocator<32> >& ValidatedByPinCodePlayerControllersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterPlayerController>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.ValidatedByPinCodePlayerControllers"); }
    FTimerHandle& AdjustNetDestructionTimeHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureItemContainer.AdjustNetDestructionTimeHandle"); }
    FColor& ActivatedIconColorField() { return *GetNativePointerField<FColor*>(this, "APrimalStructureItemContainer.ActivatedIconColor"); }
    FColor& DeactivatedIconColorField() { return *GetNativePointerField<FColor*>(this, "APrimalStructureItemContainer.DeactivatedIconColor"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.EnableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.AllowWirelessCraftingIcon"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.PreventWirelessCraftingIcon"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer.DrinkWaterIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAdjustDamageAsPlayerWithEquipment() { return { this, "APrimalStructureItemContainer.bAdjustDamageAsPlayerWithEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bUseCollisionCompsForFloatingDPS() { return { this, "APrimalStructureItemContainer.bUseCollisionCompsForFloatingDPS" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyConsumeDurabilityOnEquipmentForEnemies() { return { this, "APrimalStructureItemContainer.bOnlyConsumeDurabilityOnEquipmentForEnemies" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateContainer() { return { this, "APrimalStructureItemContainer.bAutoActivateContainer" }; }
    BitFieldValue<bool, unsigned __int32> bCanToggleActivation() { return { this, "APrimalStructureItemContainer.bCanToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenFueled() { return { this, "APrimalStructureItemContainer.bAutoActivateWhenFueled" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomName() { return { this, "APrimalStructureItemContainer.bAllowCustomName" }; }
    BitFieldValue<bool, unsigned __int32> bContainerActivated() { return { this, "APrimalStructureItemContainer.bContainerActivated" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated() { return { this, "APrimalStructureItemContainer.bOnlyUseSpoilingMultipliersIfActivated" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingSubstractConnectedWater() { return { this, "APrimalStructureItemContainer.bCraftingSubstractConnectedWater" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking() { return { this, "APrimalStructureItemContainer.bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bClientBPNotifyInventoryItemChanges() { return { this, "APrimalStructureItemContainer.bClientBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUI() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUI" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFuelConsumptionMultiplier() { return { this, "APrimalStructureItemContainer.bUseBPGetFuelConsumptionMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPreventToggleActivation() { return { this, "APrimalStructureItemContainer.bPreventToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChangesUseQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bStartedUnderwater() { return { this, "APrimalStructureItemContainer.bStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bCheckStartedUnderwater() { return { this, "APrimalStructureItemContainer.bCheckStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUISecondary() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUISecondary" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUITertiary() { return { this, "APrimalStructureItemContainer.bDisplayActivationOnInventoryUITertiary" }; }
    BitFieldValue<bool, unsigned __int32> bFuelAllowActivationWhenNoPower() { return { this, "APrimalStructureItemContainer.bFuelAllowActivationWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBattery() { return { this, "APrimalStructureItemContainer.bPoweredAllowBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBattery() { return { this, "APrimalStructureItemContainer.bPoweredUsingBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBattery() { return { this, "APrimalStructureItemContainer.bPoweredHasBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowSolar() { return { this, "APrimalStructureItemContainer.bPoweredAllowSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingSolar() { return { this, "APrimalStructureItemContainer.bPoweredUsingSolar" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorRegionForEmitterColor() { return { this, "APrimalStructureItemContainer.bUseColorRegionForEmitterColor" }; }
    BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode() { return { this, "APrimalStructureItemContainer.UseBPApplyPinCode" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked() { return { this, "APrimalStructureItemContainer.bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked() { return { this, "APrimalStructureItemContainer.bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bHasFuel() { return { this, "APrimalStructureItemContainer.bHasFuel" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderwater() { return { this, "APrimalStructureItemContainer.bIsUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater() { return { this, "APrimalStructureItemContainer.bDisableActivationUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAutoActivateWhenConnectedToWater() { return { this, "APrimalStructureItemContainer.bForcePreventAutoActivateWhenConnectedToWater" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking() { return { this, "APrimalStructureItemContainer.bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking() { return { this, "APrimalStructureItemContainer.bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bDropInventoryOnDestruction() { return { this, "APrimalStructureItemContainer.bDropInventoryOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemoved() { return { this, "APrimalStructureItemContainer.bDestroyWhenAllItemsRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bDrinkingWater() { return { this, "APrimalStructureItemContainer.bDrinkingWater" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredWaterSourceWhenActive() { return { this, "APrimalStructureItemContainer.bPoweredWaterSourceWhenActive" }; }
    BitFieldValue<bool, unsigned __int32> bActiveRequiresPower() { return { this, "APrimalStructureItemContainer.bActiveRequiresPower" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowerJunction() { return { this, "APrimalStructureItemContainer.bIsPowerJunction" }; }
    BitFieldValue<bool, unsigned __int32> bHidePowerJunctionConnection() { return { this, "APrimalStructureItemContainer.bHidePowerJunctionConnection" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateIfPowered() { return { this, "APrimalStructureItemContainer.bAutoActivateIfPowered" }; }
    BitFieldValue<bool, unsigned __int32> bLastToggleActivated() { return { this, "APrimalStructureItemContainer.bLastToggleActivated" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinActivation() { return { this, "APrimalStructureItemContainer.bSupportsPinActivation" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowered() { return { this, "APrimalStructureItemContainer.bIsPowered" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowTeamActivation() { return { this, "APrimalStructureItemContainer.bOnlyAllowTeamActivation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateItemFuelClass() { return { this, "APrimalStructureItemContainer.bReplicateItemFuelClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseOpenSceneAction() { return { this, "APrimalStructureItemContainer.bUseOpenSceneAction" }; }
    BitFieldValue<bool, unsigned __int32> bHandledDestruction() { return { this, "APrimalStructureItemContainer.bHandledDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated() { return { this, "APrimalStructureItemContainer.bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivated() { return { this, "APrimalStructureItemContainer.bUseBPCanBeActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivatedByPlayer() { return { this, "APrimalStructureItemContainer.bUseBPCanBeActivatedByPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bBPOnContainerActiveHealthDecrease() { return { this, "APrimalStructureItemContainer.bBPOnContainerActiveHealthDecrease" }; }
    BitFieldValue<bool, unsigned __int32> bBPIsValidWaterSourceForPipe() { return { this, "APrimalStructureItemContainer.bBPIsValidWaterSourceForPipe" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower() { return { this, "APrimalStructureItemContainer.bAllowAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenNoPower() { return { this, "APrimalStructureItemContainer.bAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUsingAsWirelessCraftingSource() { return { this, "APrimalStructureItemContainer.bPreventUsingAsWirelessCraftingSource" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresItemExactClass() { return { this, "APrimalStructureItemContainer.bRequiresItemExactClass" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemovedExceptDefaults() { return { this, "APrimalStructureItemContainer.bDestroyWhenAllItemsRemovedExceptDefaults" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventRemoteAddItems() { return { this, "APrimalStructureItemContainer.bInventoryForcePreventRemoteAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventItemAppends() { return { this, "APrimalStructureItemContainer.bInventoryForcePreventItemAppends" }; }
    BitFieldValue<bool, unsigned __int32> bDidSetContainerActive() { return { this, "APrimalStructureItemContainer.bDidSetContainerActive" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeathCacheCharacterID() { return { this, "APrimalStructureItemContainer.bUseDeathCacheCharacterID" }; }
    BitFieldValue<bool, unsigned __int32> bHideAutoActivateToggle() { return { this, "APrimalStructureItemContainer.bHideAutoActivateToggle" }; }
    BitFieldValue<bool, unsigned __int32> bUseCooldownOnTransferAll() { return { this, "APrimalStructureItemContainer.bUseCooldownOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoContainerBuff() { return { this, "APrimalStructureItemContainer.bUseAmmoContainerBuff" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFuelRemaining() { return { this, "APrimalStructureItemContainer.bDrawFuelRemaining" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetQuantityOfItemWithoutCheckingInventory() { return { this, "APrimalStructureItemContainer.bUseBPGetQuantityOfItemWithoutCheckingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor() { return { this, "APrimalStructureItemContainer.bUseBPSetPlayerConstructor" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime() { return { this, "APrimalStructureItemContainer.bReplicateLastActivatedTime" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmmoContainer() { return { this, "APrimalStructureItemContainer.bIsAmmoContainer" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseSwapped() { return { this, "APrimalStructureItemContainer.bServerBPNotifyInventoryItemChangesUseSwapped" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyRemoteViewerChange() { return { this, "APrimalStructureItemContainer.bBPNotifyRemoteViewerChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOriginForInventoryAccessTrace() { return { this, "APrimalStructureItemContainer.bUseMeshOriginForInventoryAccessTrace" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer"); }
    bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPowered()"); }
    static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer"); }
    bool BPApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureItemContainer.BPApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    void NetUpdateBoxName(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureItemContainer.NetUpdateBoxName(FString&)", NewName); }
    void OnContainerRenamed() { NativeCall<void>(this, "APrimalStructureItemContainer.OnContainerRenamed()"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureItemContainer();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanBeActivated()"); }
    bool AllowToggleActivation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.AllowToggleActivation(AShooterPlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureItemContainer.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureItemContainer.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureItemContainer.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer.PreInitializeComponents()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay()"); }
    void PreviewClosestWirelessSources(APrimalDinoCharacter* PlacingOnSaddleDino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalStructureItemContainer.PreviewClosestWirelessSources(APrimalDinoCharacter*)", PlacingOnSaddleDino); }
    void AdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "APrimalStructureItemContainer.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
    void CheckForDeathCacheEmitter() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckForDeathCacheEmitter()"); }
    void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructureItemContainer.PlacedStructureLocation()"); }
    void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Stasis()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer.Unstasis()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer.PlacedStructure(AShooterPlayerController*)", PC); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    //UFXSystemAsset* GetOverrideParticleTemplate() { return NativeCall<UFXSystemAsset*>(this, "APrimalStructureItemContainer.GetOverrideParticleTemplate()"); }
    FLinearColor* GetOverrideParticleLightColor(FLinearColor* result) { return NativeCall<FLinearColor*, FLinearColor*>(this, "APrimalStructureItemContainer.GetOverrideParticleLightColor()", result); }
    USoundBase* GetOverrideAudioTemplate() { return NativeCall<USoundBase*>(this, "APrimalStructureItemContainer.GetOverrideAudioTemplate()"); }
    float GetTimeFuelRemaining() { return NativeCall<float>(this, "APrimalStructureItemContainer.GetTimeFuelRemaining()"); }
    bool CanDrawFuelRemaining() { return NativeCall<bool>(this, "APrimalStructureItemContainer.CanDrawFuelRemaining()"); }
    bool IsValidWaterSourceForPipe(APrimalStructureWaterPipe* ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe*>(this, "APrimalStructureItemContainer.IsValidWaterSourceForPipe(APrimalStructureWaterPipe*)", ForWaterPipe); }
    void SetDelayedActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.SetDelayedActivation()"); }
    void TryActivation() { NativeCall<void>(this, "APrimalStructureItemContainer.TryActivation()"); }
    void SetContainerActive(bool bNewActive) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetContainerActive(bool)", bNewActive); }
    FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer.GetDebugInfoString()", result); }
    bool CanOpen(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.CanOpen(APlayerController*)", ForPC); }
    bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPinLocked()"); }
    int GetPinCode() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetPinCode()"); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer.GetDescriptiveName()", result); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureItemContainer.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
    bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowViewing(APlayerController*)", ForPC); }
    bool RemoteInventoryAllowActivation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.RemoteInventoryAllowActivation(AShooterPlayerController*)", ForPC); }
    void UpdateContainerActiveHealthDecrease(__int64 a2) { NativeCall<void, __int64>(this, "APrimalStructureItemContainer.UpdateContainerActiveHealthDecrease()", a2); }
    void CheckAutoReactivate() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckAutoReactivate()"); }
    void ConsumeFuel(bool bGiveItem) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.ConsumeFuel(bool)", bGiveItem); }
    void NotifyItemQuantityUpdated(UPrimalItem* anItem, int amount) { NativeCall<void, UPrimalItem*, int>(this, "APrimalStructureItemContainer.NotifyItemQuantityUpdated(UPrimalItem*,int)", anItem, amount); }
    void NotifyInventoryItemsSwapped(UPrimalItem* anItem1, UPrimalItem* anItem2) { NativeCall<void, UPrimalItem*, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyInventoryItemsSwapped(UPrimalItem*,UPrimalItem*)", anItem1, anItem2); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void DeferredNotifyItemAdded() { NativeCall<void>(this, "APrimalStructureItemContainer.DeferredNotifyItemAdded()"); }
    void CheckFuelSetActive() { NativeCall<void>(this, "APrimalStructureItemContainer.CheckFuelSetActive()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void ClientNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem* theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.ClientNotifyInventoryItemChange(bool,UPrimalItem*,bool)", bIsItemAdd, theItem, bEquipItem); }
    void RefreshFuelState() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshFuelState()"); }
    bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer.UseItemSpoilingTimeMultipliers()"); }
    void UpdateSolarPower() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateSolarPower()"); }
    void CharacterBasedOnUpdate(AActor* characterBasedOnMe, float DeltaSeconds) { NativeCall<void, AActor*, float>(this, "APrimalStructureItemContainer.CharacterBasedOnUpdate(AActor*,float)", characterBasedOnMe, DeltaSeconds); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureItemContainer.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, bCheckedBox); }
    void NetUpdateLocation_Implementation(UE::Math::TVector<double>* NewLocation) { NativeCall<void, UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer.NetUpdateLocation_Implementation(UE::Math::TVector<double>)", NewLocation); }
    void NetSetContainerActive_Implementation(bool bSetActive, TSubclassOf<UPrimalItem> NetReplicatedFuelItemClass, __int16 NetReplicatedFuelItemColorIndex) { NativeCall<void, bool, TSubclassOf<UPrimalItem>, __int16>(this, "APrimalStructureItemContainer.NetSetContainerActive_Implementation(bool,TSubclassOf<UPrimalItem>,short)", bSetActive, NetReplicatedFuelItemClass, NetReplicatedFuelItemColorIndex); }
    void NetUpdateBoxName_Implementation(const FString* NewName) { NativeCall<void, const FString*>(this, "APrimalStructureItemContainer.NetUpdateBoxName_Implementation(FString&)", NewName); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureItemContainer.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    void SetDisabledTimer(float DisabledTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer.SetDisabledTimer(float)", DisabledTime); }
    void EnableActive(bool a2) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.EnableActive()", a2); }
    void GetBlueprintSpawnActorTransform(UE::Math::TVector<double>* spawnLoc, UE::Math::TRotator<double>* spawnRot) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureItemContainer.GetBlueprintSpawnActorTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", spawnLoc, spawnRot); }
    void UpdateWirelessExchanges() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateWirelessExchanges()"); }
    void UpdateWirelessExchange(UPrimalWirelessExchangeData* myExchange) { NativeCall<void, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.UpdateWirelessExchange(UPrimalWirelessExchangeData*)", myExchange); }
    TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >* GetNearbyWirelessStructures(TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >* result, UPrimalWirelessExchangeData* myExchange) { return NativeCall<TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >*, TMap<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<APrimalStructureItemContainer*, UPrimalWirelessExchangeData*, 0> >*, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.GetNearbyWirelessStructures(UPrimalWirelessExchangeData*)", result, myExchange); }
    void RemoveWirelessConnections(__int64 a2) { NativeCall<void, __int64>(this, "APrimalStructureItemContainer.RemoveWirelessConnections()", a2); }
    bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer.OverrideHasWaterSource()"); }
    float SubtractWaterFromConnections(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections(float,bool)", Amount, bAllowNetworking); }
    float SubtractWaterFromPipes(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromPipes(float,bool)", Amount, bAllowNetworking); }
    void SubtractWaterFromWireless(float Amount, float* AmountRemoved, bool bAllowNetworking) { NativeCall<void, float, float*, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromWireless(float,float&,bool)", Amount, AmountRemoved, bAllowNetworking); }
    void RefreshWatered() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshWatered()"); }
    void SetWaterState(bool bValue) { NativeCall<void, bool>(this, "APrimalStructureItemContainer.SetWaterState(bool)", bValue); }
    bool CheckForWirelessWater(APrimalStructureItemContainer* ForStructure, bool IncrementTagger) { return NativeCall<bool, APrimalStructureItemContainer*, bool>(this, "APrimalStructureItemContainer.CheckForWirelessWater(APrimalStructureItemContainer*,bool)", ForStructure, IncrementTagger); }
    bool IsValidWirelessWaterSource(APrimalStructureItemContainer* ForStructure) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.IsValidWirelessWaterSource(APrimalStructureItemContainer*)", ForStructure); }
    void GetBestWirelessWaterSource(APrimalStructureItemContainer* ForStructure, APrimalStructureItemContainer** OutBestSource, bool IncrementTagger) { NativeCall<void, APrimalStructureItemContainer*, APrimalStructureItemContainer**, bool>(this, "APrimalStructureItemContainer.GetBestWirelessWaterSource(APrimalStructureItemContainer*,APrimalStructureItemContainer*&,bool)", ForStructure, OutBestSource, IncrementTagger); }
    void RefreshPowered(APrimalStructureItemContainer* InDirectPower) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.RefreshPowered(APrimalStructureItemContainer*)", InDirectPower); }
    void MovePowerJunctionLink() { NativeCall<void>(this, "APrimalStructureItemContainer.MovePowerJunctionLink()"); }
    void RefreshPowerJunctionLink(__int16 a2) { NativeCall<void, __int16>(this, "APrimalStructureItemContainer.RefreshPowerJunctionLink()", a2); }
    void AddPowerJunctionLinkParticle(APrimalStructure* MyOutlet) { NativeCall<void, APrimalStructure*>(this, "APrimalStructureItemContainer.AddPowerJunctionLinkParticle(APrimalStructure*)", MyOutlet); }
    void NotifyCraftedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer.NotifyCraftedItem(UPrimalItem*)", anItem); }
    //void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructureItemContainer.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void CopyStructureValuesFrom(APrimalStructureItemContainer* otherItemContainer) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.CopyStructureValuesFrom(APrimalStructureItemContainer*)", otherItemContainer); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureItemContainer.PostSpawnInitialize()"); }
    void TargetingTeamChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.TargetingTeamChanged()"); }
    FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructureItemContainer.GetSpawnPointInfo()", result); }
    void SetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.SetPlayerConstructor(APlayerController*)", PC); }
    void RefreshInventoryItemCounts() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshInventoryItemCounts()"); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureItemContainer.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }
    bool AdjustNetDestructionTime(float Delta) { return NativeCall<bool, float>(this, "APrimalStructureItemContainer.AdjustNetDestructionTime(float)", Delta); }
    void DrawStructureTooltip(AShooterHUD* HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD*, bool>(this, "APrimalStructureItemContainer.DrawStructureTooltip(AShooterHUD*,bool)", HUD, bForMultiUseSelector); }
    void UpdateTribeGroupInventoryRank_Implementation(unsigned __int8 NewRank) { NativeCall<void, unsigned __int8>(this, "APrimalStructureItemContainer.UpdateTribeGroupInventoryRank_Implementation(unsignedchar)", NewRank); }
    void NetRefreshActiveEffects_Implementation() { NativeCall<void>(this, "APrimalStructureItemContainer.NetRefreshActiveEffects_Implementation()"); }
//     void RefreshActiveEffects() { NativeCall<void>(this, "APrimalStructureItemContainer.RefreshActiveEffects()"); }
// FUNCTION MISSING: APrimalStructureItemContainer.RefreshActiveEffects()
    void RefreshStructureColors(UMeshComponent* ForceRefreshComponent) { NativeCall<void, UMeshComponent*>(this, "APrimalStructureItemContainer.RefreshStructureColors(UMeshComponent*)", ForceRefreshComponent); }
    void SetDefaultBlacklistedItemCount(int BlacklistedCount) { NativeCall<void, int>(this, "APrimalStructureItemContainer.SetDefaultBlacklistedItemCount(int)", BlacklistedCount); }
    int GetDefaultBlacklistedItemCount() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetDefaultBlacklistedItemCount()"); }

	bool& AllowOverrideParticleLightColorField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer.AllowOverrideParticleLightColor"); }
	unsigned char& TribeGroupInventoryRankField() { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer.TribeGroupInventoryRank"); }
	double& SkipConsumeFuelUntilTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer.SkipConsumeFuelUntilTime"); }

	UFXSystemAsset*& DefaultParticleTemplateField() { return *GetNativePointerField<UFXSystemAsset**>(this, "APrimalStructureItemContainer.DefaultParticleTemplate"); }
	TArray<UFXSystemAsset*, TSizedDefaultAllocator<32> >& OverrideParticleTemplatesField() { return *GetNativePointerField<TArray<UFXSystemAsset*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer.OverrideParticleTemplates"); }
	FItemNetInfo& SkinInventoryDataField() { return *GetNativePointerField<FItemNetInfo*>(this, "APrimalStructureItemContainer.SkinInventoryData"); }
	BitFieldValue<bool, unsigned __int32> bHasFuelOverriddenActivatedEmitter() { return { this, "APrimalStructureItemContainer.bHasFuelOverriddenActivatedEmitter"}; }
	BitFieldValue<bool, unsigned char> bForceNeverLock() { return { this, "APrimalStructureItemContainer.bForceNeverLock"}; }
	BitFieldValue<bool, unsigned char> bApplyNiagaraColorInBP() { return { this, "APrimalStructureItemContainer.bApplyNiagaraColorInBP"}; }
	BitFieldValue<bool, unsigned char> bUseBPNotifyWirelessSourceRemoved() { return { this, "APrimalStructureItemContainer.bUseBPNotifyWirelessSourceRemoved"}; }
	BitFieldValue<bool, unsigned char> bUseBPNotifyWirelessConsumerRemoved() { return { this, "APrimalStructureItemContainer.bUseBPNotifyWirelessConsumerRemoved"}; }
	BitFieldValue<bool, unsigned char> bUseBPCanAddWirelessExchange() { return { this, "APrimalStructureItemContainer.bUseBPCanAddWirelessExchange"}; }
	BitFieldValue<bool, unsigned char> bUseBPNotifyWirelessSourceAdded() { return { this, "APrimalStructureItemContainer.bUseBPNotifyWirelessSourceAdded"}; }
	BitFieldValue<bool, unsigned char> bUseBPNotifyWirelessConsumerAdded() { return { this, "APrimalStructureItemContainer.bUseBPNotifyWirelessConsumerAdded"}; }
	BitFieldValue<bool, unsigned char> bPreventContainerPingType() { return { this, "APrimalStructureItemContainer.bPreventContainerPingType"}; }
	BitFieldValue<bool, unsigned __int32> bPoweredAllowBot() { return { this, "APrimalStructureItemContainer.bPoweredAllowBot"}; }
	BitFieldValue<bool, unsigned __int32> bPoweredUsingBot() { return { this, "APrimalStructureItemContainer.bPoweredUsingBot"}; }
	BitFieldValue<bool, unsigned __int32> bPoweredHasBot() { return { this, "APrimalStructureItemContainer.bPoweredHasBot"}; }
	BitFieldValue<bool, unsigned __int32> bPreventLinkingToStorageInterface() { return { this, "APrimalStructureItemContainer.bPreventLinkingToStorageInterface"}; }
	BitFieldValue<bool, unsigned __int32> bSupportsStorageInterfaceLinking() { return { this, "APrimalStructureItemContainer.bSupportsStorageInterfaceLinking"}; }
	void BPNotifyRemoteViewerChange(bool bOpened, AShooterPlayerController* ByPC) { NativeCall<void, bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.BPNotifyRemoteViewerChange(bool,AShooterPlayerController*)", bOpened, ByPC); }
	float SubtractWaterFromConnections_IncludingSelf(float Amount, bool& OnlyRetrievedWaterFromSelf, bool bAllowNetworking) { return NativeCall<float, float, bool&, bool>(this, "APrimalStructureItemContainer.SubtractWaterFromConnections_IncludingSelf(float,bool&,bool)", Amount, OnlyRetrievedWaterFromSelf, bAllowNetworking); }
	void BPNotifyWirelessSourceAdded(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer) { NativeCall<void, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.BPNotifyWirelessSourceAdded(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", myExchange, otherContainer); }
	void ServerOpenRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer.ServerOpenRemoteInventory(AShooterPlayerController*)", ByPC); }
	bool BPCanBeActivatedByPlayer(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureItemContainer.BPCanBeActivatedByPlayer(AShooterPlayerController*)", PC); }
	void MultiUpdateNearbyDedicatedStoragesToMatchVisuals_Implementation(const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& DedicatedStoragesToUpdate, double TopAndBottomRotation, bool bHideTopAndBottom) { NativeCall<void, const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&, double, bool>(this, "APrimalStructureItemContainer.MultiUpdateNearbyDedicatedStoragesToMatchVisuals_Implementation(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,double,bool)", DedicatedStoragesToUpdate, TopAndBottomRotation, bHideTopAndBottom); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalStructureItemContainer.AllowSaving()"); }
	void AttemptRestartContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.AttemptRestartContainerActiveHealthDecrease()"); }
	UPrimalInventoryComponent* BPGetSortingInvComp_Implementation() { return NativeCall<UPrimalInventoryComponent*>(this, "APrimalStructureItemContainer.BPGetSortingInvComp_Implementation()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructureItemContainer.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
	bool IsValidForStorageInterfaceLinking(APrimalStructureItemContainer* StorageInterfaceOwner, bool bCheckPreventLinking) { return NativeCall<bool, APrimalStructureItemContainer*, bool>(this, "APrimalStructureItemContainer.IsValidForStorageInterfaceLinking(APrimalStructureItemContainer*,bool)", StorageInterfaceOwner, bCheckPreventLinking); }
	bool IsPrimalStructureItemContainer() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsPrimalStructureItemContainer()"); }
	void BPOnContainerActiveHealthDecrease() { NativeCall<void>(this, "APrimalStructureItemContainer.BPOnContainerActiveHealthDecrease()"); }
	void UpdateNearbyDedicatedStoragesToMatchVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer.UpdateNearbyDedicatedStoragesToMatchVisuals()"); }
	bool GetSkinMaterialsForActivation(APrimalStructureItemContainer* ForStructure, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& ActiveMats, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& InactiveMats) { return NativeCall<bool, APrimalStructureItemContainer*, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureItemContainer.GetSkinMaterialsForActivation(APrimalStructureItemContainer*,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&)", ForStructure, ActiveMats, InactiveMats); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureItemContainer.DrawHUD(AShooterHUD*)", HUD); }
	void RefreshWirelessBlueprintSharing(APrimalStructureItemContainer* ForSupplier, bool bSupplierRemoved) { NativeCall<void, APrimalStructureItemContainer*, bool>(this, "APrimalStructureItemContainer.RefreshWirelessBlueprintSharing(APrimalStructureItemContainer*,bool)", ForSupplier, bSupplierRemoved); }
	void BroadcastSkinInventoryChange_Implementation() { NativeCall<void>(this, "APrimalStructureItemContainer.BroadcastSkinInventoryChange_Implementation()"); }
	void BPNotifyInventoryItemChange(bool bIsItemAdd, UPrimalItem* theItem, bool bEquipItem) { NativeCall<void, bool, UPrimalItem*, bool>(this, "APrimalStructureItemContainer.BPNotifyInventoryItemChange(bool,UPrimalItem*,bool)", bIsItemAdd, theItem, bEquipItem); }
	void TryUpdateNearbyStorageInterfaces() { NativeCall<void>(this, "APrimalStructureItemContainer.TryUpdateNearbyStorageInterfaces()"); }
	void BPNotifyWirelessConsumerAdded(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer) { NativeCall<void, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.BPNotifyWirelessConsumerAdded(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", myExchange, otherContainer); }
	void BPNotifyWirelessSourceRemoved(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer) { NativeCall<void, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.BPNotifyWirelessSourceRemoved(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", myExchange, otherContainer); }
	void BPDisplayWirelessSupplyLinks(FName WirelessTag, const TArray<APrimalStructureItemContainer*, TSizedDefaultAllocator<32> >& SupplyLinks) { NativeCall<void, FName, const TArray<APrimalStructureItemContainer*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureItemContainer.BPDisplayWirelessSupplyLinks(FName,TArray<APrimalStructureItemContainer*,TSizedDefaultAllocator<32>>&)", WirelessTag, SupplyLinks); }
	bool IsValidForDinoFeedingContainer(APrimalDinoCharacter* ForDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalStructureItemContainer.IsValidForDinoFeedingContainer(APrimalDinoCharacter*)", ForDino); }
	void BroadcastSkinInventoryChange() { NativeCall<void>(this, "APrimalStructureItemContainer.BroadcastSkinInventoryChange()"); }
	bool AllowSetPinCode() { return NativeCall<bool>(this, "APrimalStructureItemContainer.AllowSetPinCode()"); }
	void NotifySkinInventoryChange() { NativeCall<void>(this, "APrimalStructureItemContainer.NotifySkinInventoryChange()"); }
	void BPContainerDeactivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerDeactivated()"); }
	bool ApplyActivationMaterialsToComponent(UMeshComponent* MeshComp, bool IsFromSkinRemoval) { return NativeCall<bool, UMeshComponent*, bool>(this, "APrimalStructureItemContainer.ApplyActivationMaterialsToComponent(UMeshComponent*,bool)", MeshComp, IsFromSkinRemoval); }
	void SetPoweredOverrideCounter(int NewPoweredOverrideCounter) { NativeCall<void, int>(this, "APrimalStructureItemContainer.SetPoweredOverrideCounter(int)", NewPoweredOverrideCounter); }
	UPrimalInventoryComponent* BPGetSortingInvComp() { return NativeCall<UPrimalInventoryComponent*>(this, "APrimalStructureItemContainer.BPGetSortingInvComp()"); }
	void ManuallyRemoveWirelessConnection(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer) { NativeCall<void, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.ManuallyRemoveWirelessConnection(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", myExchange, otherContainer); }
	void NetRefreshActiveEffects() { NativeCall<void>(this, "APrimalStructureItemContainer.NetRefreshActiveEffects()"); }
	UMeshComponent* GetMeshComponentForActivateMaterials() { return NativeCall<UMeshComponent*>(this, "APrimalStructureItemContainer.GetMeshComponentForActivateMaterials()"); }
	bool IsPlayerControllerInPinCodeValidationList(APlayerController* PlayerController) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.IsPlayerControllerInPinCodeValidationList(APlayerController*)", PlayerController); }
	int AddToValidatedByPinCodePlayerControllers(AShooterPlayerController* ForPC) { return NativeCall<int, AShooterPlayerController*>(this, "APrimalStructureItemContainer.AddToValidatedByPinCodePlayerControllers(AShooterPlayerController*)", ForPC); }
	void RemovePowerJunctionLinkParticle() { NativeCall<void>(this, "APrimalStructureItemContainer.RemovePowerJunctionLinkParticle()"); }
	void ValidateAndUpdateWirelessExchanges() { NativeCall<void>(this, "APrimalStructureItemContainer.ValidateAndUpdateWirelessExchanges()"); }
	float BPGetFuelConsumptionMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer.BPGetFuelConsumptionMultiplier()"); }
	static APrimalStructureItemContainer* SimpleGetBestWaterSource(UObject* WorldContextObject, UE::Math::TVector<double>* Location, float Distance) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<APrimalStructureItemContainer *, UObject *, UE :: Math :: TVector < double >, float>(nullptr, "APrimalStructureItemContainer.SimpleGetBestWaterSource(UObject*,UE::Math::TVector<double>,float)", WorldContextObject, *Location, Distance); }
	UFXSystemAsset* GetOverrideParticleTemplate() { return NativeCall<UFXSystemAsset*>(this, "APrimalStructureItemContainer.GetOverrideParticleTemplate()"); }
	void BPPreGetMultiUseEntries(APlayerController* ForPC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.BPPreGetMultiUseEntries(APlayerController*)", ForPC); }
	void BPNotifyPowerChanged() { NativeCall<void>(this, "APrimalStructureItemContainer.BPNotifyPowerChanged()"); }
	void SetSaddleRiderInventoryViewer(AShooterPlayerController* RiderPC, bool bRegister) { NativeCall<void, AShooterPlayerController*, bool>(this, "APrimalStructureItemContainer.SetSaddleRiderInventoryViewer(AShooterPlayerController*,bool)", RiderPC, bRegister); }
	void ValidateWirelessExchange(UPrimalWirelessExchangeData* myExchange) { NativeCall<void, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.ValidateWirelessExchange(UPrimalWirelessExchangeData*)", myExchange); }
	bool IsValidCraftingResource(UPrimalItem* theItem) { return NativeCall<bool, UPrimalItem*>(this, "APrimalStructureItemContainer.IsValidCraftingResource(UPrimalItem*)", theItem); }
	bool BPCanAddWirelessExchange(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer, UPrimalWirelessExchangeData* otherExchange) { return NativeCall<bool, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.BPCanAddWirelessExchange(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*,UPrimalWirelessExchangeData*)", myExchange, otherContainer, otherExchange); }
	void MultiUpdateNearbyDedicatedStoragesToMatchVisuals(const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >& DedicatedStoragesToUpdate, double TopAndBottomRotation, bool bHideTopAndBottom) { NativeCall<void, const TArray<APrimalStructure*, TSizedDefaultAllocator<32> >&, double, bool>(this, "APrimalStructureItemContainer.MultiUpdateNearbyDedicatedStoragesToMatchVisuals(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>&,double,bool)", DedicatedStoragesToUpdate, TopAndBottomRotation, bHideTopAndBottom); }
	void ContainerDeactivated() { NativeCall<void>(this, "APrimalStructureItemContainer.ContainerDeactivated()"); }
	bool HasSamePinCode(APrimalStructureItemContainer* otherContainer) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.HasSamePinCode(APrimalStructureItemContainer*)", otherContainer); }
	void BPSetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureItemContainer.BPSetPlayerConstructor(APlayerController*)", PC); }
	int GetDeathCacheCharacterID() { return NativeCall<int>(this, "APrimalStructureItemContainer.GetDeathCacheCharacterID()"); }
	bool IsValidatedPinCodePlayerController(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer.IsValidatedPinCodePlayerController(APlayerController*)", ForPC); }
	void RemoveWirelessConnection(UPrimalWirelessExchangeData* myExchange) { NativeCall<void, UPrimalWirelessExchangeData*>(this, "APrimalStructureItemContainer.RemoveWirelessConnection(UPrimalWirelessExchangeData*)", myExchange); }
	bool IsValidForDinoFeedingContainer_Implementation(APrimalDinoCharacter* ForDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalStructureItemContainer.IsValidForDinoFeedingContainer_Implementation(APrimalDinoCharacter*)", ForDino); }
	bool VerifyPinCode(int pinCode) { return NativeCall<bool, int>(this, "APrimalStructureItemContainer.VerifyPinCode(int)", pinCode); }
	bool BPCanBeActivated() { return NativeCall<bool>(this, "APrimalStructureItemContainer.BPCanBeActivated()"); }
	bool BPIsValidWaterSourceForPipe(APrimalStructureWaterPipe* ForWaterPipe) { return NativeCall<bool, APrimalStructureWaterPipe*>(this, "APrimalStructureItemContainer.BPIsValidWaterSourceForPipe(APrimalStructureWaterPipe*)", ForWaterPipe); }
	void BPContainerActivated() { NativeCall<void>(this, "APrimalStructureItemContainer.BPContainerActivated()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalStructureItemContainer.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void ManuallyAddWirelessConnection(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer) { NativeCall<void, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.ManuallyAddWirelessConnection(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", myExchange, otherContainer); }
	void ServerCloseRemoteInventory(AShooterPlayerController* ByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer.ServerCloseRemoteInventory(AShooterPlayerController*)", ByPC); }
	bool IsItemContainer() { return NativeCall<bool>(this, "APrimalStructureItemContainer.IsItemContainer()"); }
	void UpdateTribeGroupInventoryRank(unsigned char NewRank) { NativeCall<void, unsigned char>(this, "APrimalStructureItemContainer.UpdateTribeGroupInventoryRank(unsignedchar)", NewRank); }
	static bool AreThereAnyNearbyDrinkableWaterSourceStructures(UObject* WorldContextObject, UE::Math::TVector<double>* Location, float Distance) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UObject *, UE :: Math :: TVector < double >, float>(nullptr, "APrimalStructureItemContainer.AreThereAnyNearbyDrinkableWaterSourceStructures(UObject*,UE::Math::TVector<double>,float)", WorldContextObject, *Location, Distance); }
	void BPNotifyWirelessConsumerRemoved(UPrimalWirelessExchangeData* myExchange, APrimalStructureItemContainer* otherContainer) { NativeCall<void, UPrimalWirelessExchangeData*, APrimalStructureItemContainer*>(this, "APrimalStructureItemContainer.BPNotifyWirelessConsumerRemoved(UPrimalWirelessExchangeData*,APrimalStructureItemContainer*)", myExchange, otherContainer); }
	void ContainerActivated() { NativeCall<void>(this, "APrimalStructureItemContainer.ContainerActivated()"); }
};