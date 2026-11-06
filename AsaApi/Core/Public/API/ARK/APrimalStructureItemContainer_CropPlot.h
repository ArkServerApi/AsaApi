#pragma once
#include "BulkForward.h"


struct APrimalStructureItemContainer_CropPlot : APrimalStructureItemContainer
{
    // Fields

    TSubclassOf<UPrimalItem>& SeedBaseItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.SeedBaseItemTemplate"); }
    TSubclassOf<UPrimalItem>& FertilizerBaseItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerBaseItemTemplate"); }
    TSubclassOf<APrimalStructureItemContainer>& WaterNearbyStructureTemplateField() { return *GetNativePointerField<TSubclassOf<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureTemplate"); }
    float& CropRefreshIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMin"); }
    float& CropRefreshIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshIntervalMax"); }
    float& WaterNearbyStructureRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterNearbyStructureRange"); }
    float& MaxWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxWaterAmount"); }
    float& ActiveRainWaterIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ActiveRainWaterIncreaseSpeed"); }
    float& AverageRainWaterIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.AverageRainWaterIncreaseMultiplier"); }
    float& WaterItemAmountMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterItemAmountMultiplier"); }
    UE::Math::TVector<double>& ExtraCropMeshScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_CropPlot.ExtraCropMeshScale"); }
    float& CropRefreshIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshInterval"); }
    float& CropPhaseFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropPhaseFertilizerCache"); }
    float& CropFruitFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropFruitFertilizerCache"); }
    TSubclassOf<UPrimalItem>& PlantedCropField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.PlantedCrop"); }
    TWeakObjectPtr<APrimalStructureItemContainer>& IrrigationWaterTapField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureItemContainer>*>(this, "APrimalStructureItemContainer_CropPlot.IrrigationWaterTap"); }
    long double& LastCropRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.LastCropRefreshTime"); }
    long double& NextAllowedCropRefreshTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.NextAllowedCropRefreshTime"); }
    TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >& MyCropMeshesField() { return *GetNativePointerField<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.MyCropMeshes"); }
    APrimalStructure*& MyCropStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureItemContainer_CropPlot.MyCropStructure"); }
    long double& CropRefreshTimeCacheField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.CropRefreshTimeCache"); }
    int& FertilizerAmountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerAmount"); }
    float& WaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.WaterAmount"); }
    bool& bIsOpenToSkyField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_CropPlot.bIsOpenToSky"); }
    TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& WateringItemTemplatesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.WateringItemTemplates"); }
    float& FertilizerConsumptionRateMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerConsumptionRateMultiplier"); }
    float& LastReplicatedWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.LastReplicatedWaterAmount"); }
    int& LastReplicatedFertilizerAmountField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.LastReplicatedFertilizerAmount"); }
    float& LastWaterAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.LastWaterAmount"); }
    TSubclassOf<UPrimalItem>& WateredOverridesCraftingItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureItemContainer_CropPlot.WateredOverridesCraftingItemTemplate"); }
    float& MinWateredOverridesCraftingField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MinWateredOverridesCrafting"); }
    int& MaxGreenHouseStructuresField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseStructures"); }
    float& MaxGreenHouseCropGrowthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.MaxGreenHouseCropGrowthMultiplier"); }
    float& GainWaterRateField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.GainWaterRate"); }
    long double& LastForceReplicatedGreenhouseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_CropPlot.LastForceReplicatedGreenhouseTime"); }
    float& CropMaxFruitsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CropMaxFruitsMultiplier"); }
    unsigned __int64& FrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureItemContainer_CropPlot.FrameCounter"); }
    TObjectPtr<UTexture2D>& FertilizerOnIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerOnIcon"); }
    TObjectPtr<UTexture2D>& FertilizerOffIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.FertilizerOffIcon"); }
    TObjectPtr<UTexture2D>& DestroyPlantedCropIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureItemContainer_CropPlot.DestroyPlantedCropIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bUsesCrop() { return { this, "APrimalStructureItemContainer_CropPlot.bUsesCrop" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterTank() { return { this, "APrimalStructureItemContainer_CropPlot.bIsWaterTank" }; }
    BitFieldValue<bool, unsigned __int32> bGainWaterOverTime() { return { this, "APrimalStructureItemContainer_CropPlot.bGainWaterOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bAutoFill() { return { this, "APrimalStructureItemContainer_CropPlot.bAutoFill" }; }
    BitFieldValue<bool, unsigned __int32> bDontAddWaterOnInventoryItemUsed() { return { this, "APrimalStructureItemContainer_CropPlot.bDontAddWaterOnInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOpenToSky() { return { this, "APrimalStructureItemContainer_CropPlot.bAllowOpenToSky" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAdditionalGrowthMultiplier() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPGetAdditionalGrowthMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bIsFertilized() { return { this, "APrimalStructureItemContainer_CropPlot.bIsFertilized" }; }
    BitFieldValue<bool, unsigned __int32> bIsWatered() { return { this, "APrimalStructureItemContainer_CropPlot.bIsWatered" }; }
    BitFieldValue<bool, unsigned __int32> bIsSeeded() { return { this, "APrimalStructureItemContainer_CropPlot.bIsSeeded" }; }
    BitFieldValue<bool, unsigned __int32> bHasFruitItems() { return { this, "APrimalStructureItemContainer_CropPlot.bHasFruitItems" }; }
    BitFieldValue<bool, unsigned __int32> bCropUsesGreenhouse() { return { this, "APrimalStructureItemContainer_CropPlot.bCropUsesGreenhouse" }; }
    BitFieldValue<bool, unsigned __int32> bShowWaterAmount() { return { this, "APrimalStructureItemContainer_CropPlot.bShowWaterAmount" }; }

    // Functions

    static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_CropPlot"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureItemContainer_CropPlot();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool AllowRemoteAddItemToInventory(UPrimalInventoryComponent* invComp, UPrimalItem* anItem) { return NativeCall<bool, UPrimalInventoryComponent*, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.AllowRemoteAddItemToInventory(UPrimalInventoryComponent*,UPrimalItem*)", invComp, anItem); }
    void RefreshOpenToSky(EForceInit a2) { NativeCall<void, EForceInit>(this, "APrimalStructureItemContainer_CropPlot.RefreshOpenToSky()", a2); }
    void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer_CropPlot.Tick(float)", DeltaTime); }
    void RequeueAutoWaterRefreshCrop(bool bReadWaterAmount) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.RequeueAutoWaterRefreshCrop(bool)", bReadWaterAmount); }
    void DoRefreshCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.DoRefreshCrop()"); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.PostInitializeComponents()"); }
    void Unstasis() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.Unstasis()"); }
    float AddWater(float Amount, bool bAllowNetworking) { return NativeCall<float, float, bool>(this, "APrimalStructureItemContainer_CropPlot.AddWater(float,bool)", Amount, bAllowNetworking); }
    bool RefreshCrop(float DeltaTime) { return NativeCall<bool, float>(this, "APrimalStructureItemContainer_CropPlot.RefreshCrop(float)", DeltaTime); }
    int GetPhaseInventoryItemCount(ESeedCropPhase::Type cropPhase) { return NativeCall<int, ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.GetPhaseInventoryItemCount(ESeedCropPhase::Type)", cropPhase); }
    TSubclassOf<UPrimalItem>* GetRandomItemToGive(TSubclassOf<UPrimalItem>* result, ESeedCropPhase::Type cropPhase) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*, ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.GetRandomItemToGive(ESeedCropPhase::Type)", result, cropPhase); }
    void SubtractWaterFromWireless(bool bAllowNetworking, float DeltaTime) { NativeCall<void, bool, float>(this, "APrimalStructureItemContainer_CropPlot.SubtractWaterFromWireless(bool,float)", bAllowNetworking, DeltaTime); }
    void SubtractWaterFromPipes(bool UseTaps, bool bAllowNetworking, float DeltaTime) { NativeCall<void, bool, bool, float>(this, "APrimalStructureItemContainer_CropPlot.SubtractWaterFromPipes(bool,bool,float)", UseTaps, bAllowNetworking, DeltaTime); }
    void RefreshWatered() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshWatered()"); }
    void SetWaterState(bool bValue) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.SetWaterState(bool)", bValue); }
    void RefreshFertilized() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RefreshFertilized()"); }
    void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemRemoved(UPrimalItem*)", anItem); }
    void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem*, bool>(this, "APrimalStructureItemContainer_CropPlot.NotifyItemAdded(UPrimalItem*,bool)", anItem, bEquipItem); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureItemContainer_CropPlot.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BeginPlay()"); }
    FString* GetCropName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureItemContainer_CropPlot.GetCropName()", result); }
    void RemovePlantedCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.RemovePlantedCrop()"); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureItemContainer_CropPlot.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureItemContainer_CropPlot.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void UpdateCropVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.UpdateCropVisuals()"); }
    bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.UseItemSpoilingTimeMultipliers()"); }
    void InventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject*>(this, "APrimalStructureItemContainer_CropPlot.InventoryItemUsed(UObject*)", InventoryItemObject); }
    bool ForceAllowsInventoryUse(const UObject* InventoryItemObject) { return NativeCall<bool, const UObject*>(this, "APrimalStructureItemContainer_CropPlot.ForceAllowsInventoryUse(UObject*)", InventoryItemObject); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureItemContainer_CropPlot.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
    bool OverrideHasWaterSource() { return NativeCall<bool>(this, "APrimalStructureItemContainer_CropPlot.OverrideHasWaterSource()"); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureItemContainer_CropPlot.PlacedStructure(AShooterPlayerController*)", PC); }
    bool RemoteInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer_CropPlot.RemoteInventoryAllowViewing(APlayerController*)", ForPC); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureItemContainer_CropPlot.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    bool OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.OverrideBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)", ItemTemplate, ItemQuantity); }
    bool AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.AllowBlueprintCraftingRequirement(TSubclassOf<UPrimalItem>,int)", ItemTemplate, ItemQuantity); }
    bool AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem> ItemTemplate, int ItemQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, int>(this, "APrimalStructureItemContainer_CropPlot.AllowCraftingResourceConsumption(TSubclassOf<UPrimalItem>,int)", ItemTemplate, ItemQuantity); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureItemContainer_CropPlot.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }

	bool& bDelayCropRefreshField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_CropPlot.bDelayCropRefresh"); }
	unsigned char& NumGreenHouseStructuresField() { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer_CropPlot.NumGreenHouseStructures"); }
	float& CreatureTamingEffectivenessField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.CreatureTamingEffectiveness"); }
	double& TendingWindowOpenedTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureItemContainer_CropPlot.TendingWindowOpenedTime"); }
	unsigned char& RequiredTendingItemIndexField() { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureItemContainer_CropPlot.RequiredTendingItemIndex"); }
	int& TendingPhaseCounterField() { return *GetNativePointerField<int*>(this, "APrimalStructureItemContainer_CropPlot.TendingPhaseCounter"); }
	float& GeneralGrowthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.GeneralGrowthMultiplier"); }
	float& ReplicatedGamemodeCropGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ReplicatedGamemodeCropGrowthSpeedMultiplier"); }
	float& ReplicatedCropPhaseFertilizerCacheField() { return *GetNativePointerField<float*>(this, "APrimalStructureItemContainer_CropPlot.ReplicatedCropPhaseFertilizerCache"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_CropPlot"); }

	TEnumAsByte<ESeedCropPhase::Type>& CurrentCropPhaseField() { return *GetNativePointerField<TEnumAsByte<ESeedCropPhase::Type>*>(this, "APrimalStructureItemContainer_CropPlot.CurrentCropPhase"); }
	FUnreplicatedEggData& StoredCreatureDataField() { return *GetNativePointerField<FUnreplicatedEggData*>(this, "APrimalStructureItemContainer_CropPlot.StoredCreatureData"); }
	BitFieldValue<bool, unsigned char> bAutoMaxWaterAndFertilize() { return { this, "APrimalStructureItemContainer_CropPlot.bAutoMaxWaterAndFertilize"}; }
	BitFieldValue<bool, unsigned char> bAutoMaxGreenhouseEffect() { return { this, "APrimalStructureItemContainer_CropPlot.bAutoMaxGreenhouseEffect"}; }
	BitFieldValue<bool, unsigned char> bUseBPAdjustCropYield_Max() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPAdjustCropYield_Max"}; }
	BitFieldValue<bool, unsigned char> bUseBPAdjustCropYield_SingleRefresh() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPAdjustCropYield_SingleRefresh"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnCropPhaseIncrease() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnCropPhaseIncrease"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnCropPhaseDecrease() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnCropPhaseDecrease"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnHarvestItemsCreated() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnHarvestItemsCreated"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnRemovedCrop() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnRemovedCrop"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnRefreshCrop() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnRefreshCrop"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnNotifyCraftedItem() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnNotifyCraftedItem"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnFertilizerItemUsedUp() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnFertilizerItemUsedUp"}; }
	BitFieldValue<bool, unsigned char> bUseBPOnUpdateCropVisuals() { return { this, "APrimalStructureItemContainer_CropPlot.bUseBPOnUpdateCropVisuals"}; }
	unsigned char GetRandomTendingResourceIndex_Implementation() { return NativeCall<unsigned char>(this, "APrimalStructureItemContainer_CropPlot.GetRandomTendingResourceIndex_Implementation()"); }
	void BPOnRemovedCrop() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPOnRemovedCrop()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalStructureItemContainer_CropPlot.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	int BPAdjustCropYield_Max(int ItemsToGenerateBeforeAdjustment) { return NativeCall<int, int>(this, "APrimalStructureItemContainer_CropPlot.BPAdjustCropYield_Max(int)", ItemsToGenerateBeforeAdjustment); }
	bool CanTendCrop_Implementation(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer_CropPlot.CanTendCrop_Implementation(APlayerController*)", ForPC); }
	void BPOnHarvestItemsCreated(const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& CreatedItems) { NativeCall<void, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureItemContainer_CropPlot.BPOnHarvestItemsCreated(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&)", CreatedItems); }
	void BPOnNotifyCraftedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.BPOnNotifyCraftedItem(UPrimalItem*)", anItem); }
	unsigned char GetRandomTendingResourceIndex() { return NativeCall<unsigned char>(this, "APrimalStructureItemContainer_CropPlot.GetRandomTendingResourceIndex()"); }
	void BPOnFertilizerItemUsedUp() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPOnFertilizerItemUsedUp()"); }
	void OnRep_WaterAmount() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.OnRep_WaterAmount()"); }
	float BPGetAdditionalGrowthMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer_CropPlot.BPGetAdditionalGrowthMultiplier()"); }
	float GetGreenHouseCropGrowthMultiplier() { return NativeCall<float>(this, "APrimalStructureItemContainer_CropPlot.GetGreenHouseCropGrowthMultiplier()"); }
	bool CanTendCrop(APlayerController* ForPC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureItemContainer_CropPlot.CanTendCrop(APlayerController*)", ForPC); }
	void NotifyCraftedItem(UPrimalItem* anItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.NotifyCraftedItem(UPrimalItem*)", anItem); }
	APrimalDinoCharacter* SpawnCreatureFromPlant() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalStructureItemContainer_CropPlot.SpawnCreatureFromPlant()"); }
	void BPOnUpdateCropVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPOnUpdateCropVisuals()"); }
	void BPClientUpdateWaterAmount() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.BPClientUpdateWaterAmount()"); }
	void BPOnRefreshCrop(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructureItemContainer_CropPlot.BPOnRefreshCrop(float)", DeltaTime); }
	void BPOnCropPhaseIncrease(int CropPhase) { NativeCall<void, int>(this, "APrimalStructureItemContainer_CropPlot.BPOnCropPhaseIncrease(int)", CropPhase); }
	bool TendPlantWithResource(UPrimalItem* TendingItem, UPrimalInventoryComponent* ItemInventoryComp) { return NativeCall<bool, UPrimalItem*, UPrimalInventoryComponent*>(this, "APrimalStructureItemContainer_CropPlot.TendPlantWithResource(UPrimalItem*,UPrimalInventoryComponent*)", TendingItem, ItemInventoryComp); }
	int IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, FPlacementData& OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double>* PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData, APawn* BuildingPawnOverride) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); if (!PlayerViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<int, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, FPlacementData &, bool, UE :: Math :: TRotator < double >, bool, bool, APawn *>(this, "APrimalStructureItemContainer_CropPlot.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", PC, *AtLocation, *AtRotation, OutPlacementData, bDontAdjustForMaxRange, *PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData, BuildingPawnOverride); }
	void OnRep_CurrentCropPhase(ESeedCropPhase::Type PrevCropPhase) { NativeCall<void, ESeedCropPhase::Type>(this, "APrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase(ESeedCropPhase::Type)", PrevCropPhase); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureItemContainer_CropPlot.Stasis()"); }
	void BPOnCropPhaseDecrease(int CropPhase) { NativeCall<void, int>(this, "APrimalStructureItemContainer_CropPlot.BPOnCropPhaseDecrease(int)", CropPhase); }
	void CopyCreatureDataFromSeed(UPrimalItem* SeedItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureItemContainer_CropPlot.CopyCreatureDataFromSeed(UPrimalItem*)", SeedItem); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureItemContainer_CropPlot.DrawHUD(AShooterHUD*)", HUD); }
	void OnRep_HasFruitItems(bool bPreviousHasFruitItems) { NativeCall<void, bool>(this, "APrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems(bool)", bPreviousHasFruitItems); }
	int BPAdjustCropYield_SingleRefresh(int ItemsToGenerateBeforeAdjustment) { return NativeCall<int, int>(this, "APrimalStructureItemContainer_CropPlot.BPAdjustCropYield_SingleRefresh(int)", ItemsToGenerateBeforeAdjustment); }
};