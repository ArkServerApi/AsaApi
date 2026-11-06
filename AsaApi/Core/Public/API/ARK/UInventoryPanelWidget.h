#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UInventoryPanelWidget : public UPrimalUI
{
public:
	UInventoryPanelWidget() = delete;
	~UInventoryPanelWidget() = delete;
	UInventoryPanelWidget(const UInventoryPanelWidget&) = delete;
	UInventoryPanelWidget& operator=(const UInventoryPanelWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInventoryPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInventoryPanelWidget"); }

	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TabBgSwitcherName"); }
	FName& InventoryButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryButtonName"); }
	FName& SkinsButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SkinsButtonName"); }
	FName& CraftingButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingButtonName"); }
	FName& CreaturesButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CreaturesButtonName"); }
	FName& InventoryEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryEnabledEffectName"); }
	FName& SkinsEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SkinsEnabledEffectName"); }
	FName& CraftingEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingEnabledEffectName"); }
	FName& SearchTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SearchTextBoxName"); }
	FName& TooltipToggleButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TooltipToggleButtonName"); }
	FName& SortMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SortMenuButtonName"); }
	FName& SortMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SortMenuAnchorName"); }
	FName& ShowAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowAllButtonName"); }
	FName& ShowEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowEngramsButtonName"); }
	FName& ShowEngramsBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowEngramsBoxName"); }
	FName& TransferAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TransferAllButtonName"); }
	FName& DropAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DropAllButtonName"); }
	FName& NewFolderButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.NewFolderButtonName"); }
	FName& DataListSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DataListSwitcherName"); }
	FName& InventoryDataListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryDataListName"); }
	FName& SkinDataListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SkinDataListName"); }
	FName& CraftingDataListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingDataListName"); }
	FName& CraftingQueueHeaderBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingQueueHeaderBoxName"); }
	FName& CraftingQueueItemsBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingQueueItemsBoxName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& CraftQueueItemButtonNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UInventoryPanelWidget.CraftQueueItemButtonNames"); }
	FName& HeaderBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.HeaderBoxName"); }
	FName& InventoryTabLabelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryTabLabelName"); }
	FName& CraftingTabLabelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingTabLabelName"); }
	FName& ArkCreaturesPanelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ArkCreaturesPanelName"); }
	FName& ClearCraftingQueueButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ClearCraftingQueueButtonName"); }
	FName& AutoStackButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.AutoStackButtonName"); }
	FName& ReceivingItemsLabelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ReceivingItemsLabelName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryPanelWidget.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryPanelWidget.SwitcherTextInactiveColor"); }
	UE::Math::TVector2<double>& DefaultWidgetSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UInventoryPanelWidget.DefaultWidgetSize"); }
	int& DefaultWidgetWrapNumField() { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.DefaultWidgetWrapNum"); }
	UE::Math::TVector2<double>& HandheldWidgetSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UInventoryPanelWidget.HandheldWidgetSize"); }
	int& HandheldWidgetWrapNumField() { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.HandheldWidgetWrapNum"); }
	FTimerHandle& RefreshItemListsHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UInventoryPanelWidget.RefreshItemListsHandle"); }
	UPrimalItem*& LastSkinSelectedField() { return *GetNativePointerField<UPrimalItem**>(this, "UInventoryPanelWidget.LastSkinSelected"); }
	UPrimalItem*& LastItemSelectedField() { return *GetNativePointerField<UPrimalItem**>(this, "UInventoryPanelWidget.LastItemSelected"); }
	bool& bIsCustomCosmeticInvField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsCustomCosmeticInv"); }
	bool& bIsTradeInventoryField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsTradeInventory"); }
	bool& bIsInvTradeOwnerField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsInvTradeOwner"); }
	AShooterCharacter*& CurrentTradingPlayerField() { return *GetNativePointerField<AShooterCharacter**>(this, "UInventoryPanelWidget.CurrentTradingPlayer"); }
	bool& bIsRemoteInventoryField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsRemoteInventory"); }
	TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>& InventoryCompField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>*>(this, "UInventoryPanelWidget.InventoryComp"); }
	FString& EnableSortingButton_ToolTip_EnabledField() { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableSortingButton_ToolTip_Enabled"); }
	FString& EnableSortingButton_ToolTip_DisabledField() { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableSortingButton_ToolTip_Disabled"); }
	FString& EnableDediSortingInputButton_ToolTip_EnabledField() { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableDediSortingInputButton_ToolTip_Enabled"); }
	FString& EnableDediSortingInputButton_ToolTip_DisabledField() { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.EnableDediSortingInputButton_ToolTip_Disabled"); }
	UWidgetSwitcher*& TabBgSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UInventoryPanelWidget.TabBgSwitcher"); }
	UButton*& InventoryButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.InventoryButton"); }
	UButton*& SkinsButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.SkinsButton"); }
	UButton*& CraftingButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.CraftingButton"); }
	UButton*& CreaturesButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.CreaturesButton"); }
	UWidget*& InventoryEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.InventoryEnabledEffect"); }
	UWidget*& SkinsEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.SkinsEnabledEffect"); }
	UWidget*& CraftingEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.CraftingEnabledEffect"); }
	UWidget*& CreaturesEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.CreaturesEnabledEffect"); }
	FTimerHandle& SkinFilterHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UInventoryPanelWidget.SkinFilterHandle"); }
	UEditableTextBox*& SearchTextBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UInventoryPanelWidget.SearchTextBox"); }
	UCustomButtonWidget*& TooltipToggleButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UInventoryPanelWidget.TooltipToggleButton"); }
	UButton*& SortMenuButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.SortMenuButton"); }
	UMenuAnchor*& SortMenuAnchorField() { return *GetNativePointerField<UMenuAnchor**>(this, "UInventoryPanelWidget.SortMenuAnchor"); }
	UCustomButtonWidget*& ShowAllButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UInventoryPanelWidget.ShowAllButton"); }
	UCustomButtonWidget*& ShowEngramsButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UInventoryPanelWidget.ShowEngramsButton"); }
	UWidget*& ShowEngramsBoxField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.ShowEngramsBox"); }
	UButton*& TransferAllButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.TransferAllButton"); }
	UButton*& DropAllButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.DropAllButton"); }
	UButton*& NewFolderButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.NewFolderButton"); }
	UButton*& ClearCraftingQueueButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.ClearCraftingQueueButton"); }
	UButton*& AutoStackButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.AutoStackButton"); }
	UItemFilterWidget*& ItemFilter01Field() { return *GetNativePointerField<UItemFilterWidget**>(this, "UInventoryPanelWidget.ItemFilter01"); }
	UItemFilterWidget*& ItemFilter02Field() { return *GetNativePointerField<UItemFilterWidget**>(this, "UInventoryPanelWidget.ItemFilter02"); }
	UButton*& ClearTrackingItemsField() { return *GetNativePointerField<UButton**>(this, "UInventoryPanelWidget.ClearTrackingItems"); }
	UTextBlock*& SkinsTabLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryPanelWidget.SkinsTabLabel"); }
	UTextBlock*& InventoryTextField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryPanelWidget.InventoryText"); }
	UTextBlock*& SkinItemsTextField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryPanelWidget.SkinItemsText"); }
	int& MaxItemTradeQuantityField() { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.MaxItemTradeQuantity"); }
	UWidgetSwitcher*& DataListSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UInventoryPanelWidget.DataListSwitcher"); }
	UDataListPanel*& InventoryDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UInventoryPanelWidget.InventoryDataList"); }
	UDataListPanel*& SkinDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UInventoryPanelWidget.SkinDataList"); }
	UDataListPanel*& CraftingDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UInventoryPanelWidget.CraftingDataList"); }
	UDataListPanel*& SortingInputsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UInventoryPanelWidget.SortingInputsDataList"); }
	UWidget*& CraftingQueueHeaderBoxField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.CraftingQueueHeaderBox"); }
	UWidget*& CraftingQueueItemsBoxField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.CraftingQueueItemsBox"); }
	UWidget*& HeaderBoxField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.HeaderBox"); }
	UInventoryArkCreaturesPanel*& ArkCreaturesPanelField() { return *GetNativePointerField<UInventoryArkCreaturesPanel**>(this, "UInventoryPanelWidget.ArkCreaturesPanel"); }
	UInventoryQuickSlotsPanel*& QuickSlotsPanelField() { return *GetNativePointerField<UInventoryQuickSlotsPanel**>(this, "UInventoryPanelWidget.QuickSlotsPanel"); }
	UTextBlock*& InventoryTabLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryPanelWidget.InventoryTabLabel"); }
	UTextBlock*& CraftingTabLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryPanelWidget.CraftingTabLabel"); }
	UTextBlock*& ReceivingItemsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryPanelWidget.ReceivingItemsLabel"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UInventoryPanelWidget.InventoryUI"); }
	UImage*& MaxInventoryImageField() { return *GetNativePointerField<UImage**>(this, "UInventoryPanelWidget.MaxInventoryImage"); }
	UWidget*& MaxInventorySkinTabField() { return *GetNativePointerField<UWidget**>(this, "UInventoryPanelWidget.MaxInventorySkinTab"); }
	UComboBoxString*& FilterComboField() { return *GetNativePointerField<UComboBoxString**>(this, "UInventoryPanelWidget.FilterCombo"); }
	UComboBoxString*& OrderComboField() { return *GetNativePointerField<UComboBoxString**>(this, "UInventoryPanelWidget.OrderCombo"); }
	UCustomButtonWidget*& EnableSortingButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UInventoryPanelWidget.EnableSortingButton"); }
	UCustomButtonWidget*& EnableDediSortingInputButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UInventoryPanelWidget.EnableDediSortingInputButton"); }
	bool& bIsCurrentlyCraftingField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsCurrentlyCrafting"); }
	FTimerHandle& ProcessArkTributeExpirationTimesHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UInventoryPanelWidget.ProcessArkTributeExpirationTimesHandle"); }
	bool& bWaitingToPutItemTransferInFolderField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bWaitingToPutItemTransferInFolder"); }
	bool& WaitingToPutItemTransferInFolderLocalField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.WaitingToPutItemTransferInFolderLocal"); }
	FString& WaitingToPutItemTransferInFolderNameField() { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.WaitingToPutItemTransferInFolderName"); }
	int& WaitingToPutItemTransferInFolderProviderTypeField() { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.WaitingToPutItemTransferInFolderProviderType"); }
	void OnCraftingItemSelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UInventoryPanelWidget.OnCraftingItemSelected(UDataListEntryButton*)", theButton); }
	void Sort(EInventorySortType::Type SortType) { NativeCall<void, EInventorySortType::Type>(this, "UInventoryPanelWidget.Sort(EInventorySortType::Type)", SortType); }
	UDataListPanel* GetSkinDataList() { return NativeCall<UDataListPanel*>(this, "UInventoryPanelWidget.GetSkinDataList()"); }
	void GotoNextTab() { NativeCall<void>(this, "UInventoryPanelWidget.GotoNextTab()"); }
	void UpdateTradeInventory() { NativeCall<void>(this, "UInventoryPanelWidget.UpdateTradeInventory()"); }
	void Init(UUI_Inventory* InInventoryUI) { NativeCall<void, UUI_Inventory*>(this, "UInventoryPanelWidget.Init(UUI_Inventory*)", InInventoryUI); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UInventoryPanelWidget.GetParentPrimalUI()"); }
	void ShowItems() { NativeCall<void>(this, "UInventoryPanelWidget.ShowItems()"); }
	UPrimalItem* GetSelectedItem() { return NativeCall<UPrimalItem*>(this, "UInventoryPanelWidget.GetSelectedItem()"); }
	FString* GetSortTypeShortName(FString* result, EInventorySortType::Type SortType) { return NativeCall<FString*, FString*, EInventorySortType::Type>(this, "UInventoryPanelWidget.GetSortTypeShortName(EInventorySortType::Type)", result, SortType); }
	UDataListPanel* GetInventoryDataList() { return NativeCall<UDataListPanel*>(this, "UInventoryPanelWidget.GetInventoryDataList()"); }
	void UpdateCraftablesFolders(int DataListType) { NativeCall<void, int>(this, "UInventoryPanelWidget.UpdateCraftablesFolders(int)", DataListType); }
	void OnInventoryItemDoubleClicked(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UInventoryPanelWidget.OnInventoryItemDoubleClicked(UDataListEntryButton*)", theButton); }
	void SortByWeight() { NativeCall<void>(this, "UInventoryPanelWidget.SortByWeight()"); }
	void GamepadToggleTabs() { NativeCall<void>(this, "UInventoryPanelWidget.GamepadToggleTabs()"); }
	void UpdateItemsFolders(int DataListType) { NativeCall<void, int>(this, "UInventoryPanelWidget.UpdateItemsFolders(int)", DataListType); }
	void SortByType() { NativeCall<void>(this, "UInventoryPanelWidget.SortByType()"); }
	void OnInventoryPrimalItemAdded(UPrimalInventoryComponent* inventoryComp, UPrimalItem* theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, bool>(this, "UInventoryPanelWidget.OnInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem*,bool)", inventoryComp, theItem, bEquippedItem); }
	UUserWidget* OnGetSortContextMenuContent() { return NativeCall<UUserWidget*>(this, "UInventoryPanelWidget.OnGetSortContextMenuContent()"); }
	void UpdateTradeInventory_Implementation() { NativeCall<void>(this, "UInventoryPanelWidget.UpdateTradeInventory_Implementation()"); }
	void OnSkinFilterCleared() { NativeCall<void>(this, "UInventoryPanelWidget.OnSkinFilterCleared()"); }
	UDataListPanel* GetActiveDataList() { return NativeCall<UDataListPanel*>(this, "UInventoryPanelWidget.GetActiveDataList()"); }
	void SetupTradeInventory_Implementation(bool bIsTradeOwner, AShooterCharacter* TradingWith) { NativeCall<void, bool, AShooterCharacter*>(this, "UInventoryPanelWidget.SetupTradeInventory_Implementation(bool,AShooterCharacter*)", bIsTradeOwner, TradingWith); }
	void GetCraftables(TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >& OutArray) { NativeCall<void, TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >&>(this, "UInventoryPanelWidget.GetCraftables(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&)", OutArray); }
	void SetReceivingInventoryItemsLabelVisible(bool bNewVisibility) { NativeCall<void, bool>(this, "UInventoryPanelWidget.SetReceivingInventoryItemsLabelVisible(bool)", bNewVisibility); }
	void OnCraftingItemDoubleClicked(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UInventoryPanelWidget.OnCraftingItemDoubleClicked(UDataListEntryButton*)", theButton); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UInventoryPanelWidget.ClickedButton(UWidget*)", clickedButton); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UInventoryPanelWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void SetupInventory(UPrimalInventoryComponent* InventoryComponent, bool InbIsRemoteInventory) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UInventoryPanelWidget.SetupInventory(UPrimalInventoryComponent*,bool)", InventoryComponent, InbIsRemoteInventory); }
	void ShowArkCreatures() { NativeCall<void>(this, "UInventoryPanelWidget.ShowArkCreatures()"); }
	void UpdateSkinsFolders(int DataListType) { NativeCall<void, int>(this, "UInventoryPanelWidget.UpdateSkinsFolders(int)", DataListType); }
	void UpdateButtons() { NativeCall<void>(this, "UInventoryPanelWidget.UpdateButtons()"); }
	void OnDataListRequestUpdate(UDataListPanel& DataList) { NativeCall<void, UDataListPanel&>(this, "UInventoryPanelWidget.OnDataListRequestUpdate(UDataListPanel&)", DataList); }
	bool HasEngrams(const TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >& CraftableArray) { return NativeCall<bool, const TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >&>(this, "UInventoryPanelWidget.HasEngrams(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&)", CraftableArray); }
	EInventorySortType::Type GetSortType() { return NativeCall<EInventorySortType::Type>(this, "UInventoryPanelWidget.GetSortType()"); }
	void SearchTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UInventoryPanelWidget.SearchTextChanged(FText&)", Text); }
	void SortAlphabetical() { NativeCall<void>(this, "UInventoryPanelWidget.SortAlphabetical()"); }
	void RefreshItemLists() { NativeCall<void>(this, "UInventoryPanelWidget.RefreshItemLists()"); }
	void SetupTradeInventory(bool bIsTradeOwner, AShooterCharacter* TradingWith) { NativeCall<void, bool, AShooterCharacter*>(this, "UInventoryPanelWidget.SetupTradeInventory(bool,AShooterCharacter*)", bIsTradeOwner, TradingWith); }
	void SortBySpoilTime() { NativeCall<void>(this, "UInventoryPanelWidget.SortBySpoilTime()"); }
	void SetFilterInMode(int Mode) { NativeCall<void, int>(this, "UInventoryPanelWidget.SetFilterInMode(int)", Mode); }
	void StopTimers() { NativeCall<void>(this, "UInventoryPanelWidget.StopTimers()"); }
	void ShowSkins() { NativeCall<void>(this, "UInventoryPanelWidget.ShowSkins()"); }
	void OnInventorySkinSelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UInventoryPanelWidget.OnInventorySkinSelected(UDataListEntryButton*)", theButton); }
	void ShowCraftables() { NativeCall<void>(this, "UInventoryPanelWidget.ShowCraftables()"); }
	UDataListPanel* GetCraftingDataList() { return NativeCall<UDataListPanel*>(this, "UInventoryPanelWidget.GetCraftingDataList()"); }
	void ProcessArkTributeExpirationTimes() { NativeCall<void>(this, "UInventoryPanelWidget.ProcessArkTributeExpirationTimes()"); }
	void OnInventoryItemSelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UInventoryPanelWidget.OnInventoryItemSelected(UDataListEntryButton*)", theButton); }
	void OnSkinDelayFilterCleared(int ClearFilterIndex) { NativeCall<void, int>(this, "UInventoryPanelWidget.OnSkinDelayFilterCleared(int)", ClearFilterIndex); }
	void UpdateOrderCombo() { NativeCall<void>(this, "UInventoryPanelWidget.UpdateOrderCombo()"); }
	void ClearSearchBox() { NativeCall<void>(this, "UInventoryPanelWidget.ClearSearchBox()"); }
	UPrimalItem* GetSelectedSkin() { return NativeCall<UPrimalItem*>(this, "UInventoryPanelWidget.GetSelectedSkin()"); }
	void OnGamepadPressSortIcon() { NativeCall<void>(this, "UInventoryPanelWidget.OnGamepadPressSortIcon()"); }
	void OnSkinFilterClearClicked() { NativeCall<void>(this, "UInventoryPanelWidget.OnSkinFilterClearClicked()"); }
};
