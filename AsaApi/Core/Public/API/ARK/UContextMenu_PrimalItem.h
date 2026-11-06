#pragma once
#include "BulkForward.h"
#include "UContextMenu.h"

struct UContextMenu_PrimalItem : public UContextMenu
{
public:
	UContextMenu_PrimalItem() = delete;
	~UContextMenu_PrimalItem() = delete;
	UContextMenu_PrimalItem(const UContextMenu_PrimalItem&) = delete;
	UContextMenu_PrimalItem& operator=(const UContextMenu_PrimalItem&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenu_PrimalItem"); }

	UContextMenuItem*& CachedContextMenuItemField() { return *GetNativePointerField<UContextMenuItem**>(this, "UContextMenu_PrimalItem.CachedContextMenuItem"); }
	UPrimalItem*& CachedPrimalItemField() { return *GetNativePointerField<UPrimalItem**>(this, "UContextMenu_PrimalItem.CachedPrimalItem"); }
	int& SplitAmountValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SplitAmountValue"); }
	int& SplitAmountMaxField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SplitAmountMax"); }
	int& SplitAmountMinField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SplitAmountMin"); }
	int& CraftAmountValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.CraftAmountValue"); }
	int& CraftAmountMaxField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.CraftAmountMax"); }
	int& CraftQuantityValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.CraftQuantityValue"); }
	int& CraftQuantityMaxField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.CraftQuantityMax"); }
	int& SortingInputAmountValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SortingInputAmountValue"); }
	int& SortingInputAmountMaxField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SortingInputAmountMax"); }
	BitFieldValue<bool, unsigned char> bIsFreeCraftingMode() { return { this, "UContextMenu_PrimalItem.bIsFreeCraftingMode"}; }
	void PopulateRootMenu(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateRootMenu(UContextMenu*)", ContextMenu); }
	void PopulateSubmenuSortingInput(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuSortingInput(UContextMenu*)", ContextMenu); }
	void PopulateFolderMenu(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateFolderMenu(UContextMenu*)", ContextMenu); }
	void HandleActionFastInventoryInFolder(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionFastInventoryInFolder(UContextMenuItem*)", Item); }
	void HandleSortingInputAmountValueCommit(UContextMenuItem_Spinner* Item, int InValue, ETextCommit::Type CommitMethod) { NativeCall<void, UContextMenuItem_Spinner*, int, ETextCommit::Type>(this, "UContextMenu_PrimalItem.HandleSortingInputAmountValueCommit(UContextMenuItem_Spinner*,int,ETextCommit::Type)", Item, InValue, CommitMethod); }
	UContextMenu* HandleOnGetSubmenuRemoveContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuRemoveContent(UContextMenuItem*)", MenuItem); }
	void HandleActionSetCraftQuantity(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionSetCraftQuantity(UContextMenuItem*)", Item); }
	void PopulateSubmenuSplitAmount(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuSplitAmount(UContextMenu*)", ContextMenu); }
	void HandleActionRemoveCosmetic(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRemoveCosmetic(UContextMenuItem*)", Item); }
	void HandleActionSplitHalf(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionSplitHalf(UContextMenuItem*)", Item); }
	void HandleActionRemoveAmmo(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRemoveAmmo(UContextMenuItem*)", Item); }
	void HandleActionSplitAmount(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionSplitAmount(UContextMenuItem*)", Item); }
	void HandleActionRemoveAccessory(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRemoveAccessory(UContextMenuItem*)", Item); }
	void HandleActionCraftOne(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionCraftOne(UContextMenuItem*)", Item); }
	void HandleSplitAmountValueCommit(UContextMenuItem_Spinner* Item, int InValue, ETextCommit::Type CommitMethod) { NativeCall<void, UContextMenuItem_Spinner*, int, ETextCommit::Type>(this, "UContextMenu_PrimalItem.HandleSplitAmountValueCommit(UContextMenuItem_Spinner*,int,ETextCommit::Type)", Item, InValue, CommitMethod); }
	void HandleActionAddAsSortingInput(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionAddAsSortingInput(UContextMenuItem*)", Item); }
	UContextMenu* HandleOnGetSubmenuCustomCosmetics(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuCustomCosmetics(UContextMenuItem*)", MenuItem); }
	UContextMenu* HandleOnGetSubmenuCraftAmountContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuCraftAmountContent(UContextMenuItem*)", MenuItem); }
	void BPUpdateCanUse() { NativeCall<void>(this, "UContextMenu_PrimalItem.BPUpdateCanUse()"); }
	void HandleCraftAmountValueCommit(UContextMenuItem_Spinner* Item, int InValue, ETextCommit::Type CommitMethod) { NativeCall<void, UContextMenuItem_Spinner*, int, ETextCommit::Type>(this, "UContextMenu_PrimalItem.HandleCraftAmountValueCommit(UContextMenuItem_Spinner*,int,ETextCommit::Type)", Item, InValue, CommitMethod); }
	UContextMenu* HandleOnGetSubmenuSplitStackContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuSplitStackContent(UContextMenuItem*)", MenuItem); }
	UContextMenu* HandleOnGetSubmenuCustomContent(UContextMenuItem* MenuItem, const FName& ContextItemName) { return NativeCall<UContextMenu*, UContextMenuItem*, const FName&>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuCustomContent(UContextMenuItem*,FName&)", MenuItem, ContextItemName); }
	void HandleActionEquip(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionEquip(UContextMenuItem*)", Item); }
	void HandleToggleMuteExtraEquipmentSounds(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleToggleMuteExtraEquipmentSounds(UContextMenuItem*)", Item); }
	void PopulateSubmenuCraftAmount(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuCraftAmount(UContextMenu*)", ContextMenu); }
	void HandleActionUse(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionUse(UContextMenuItem*)", Item); }
	void HandleActionAddAsSortingInputOne(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionAddAsSortingInputOne(UContextMenuItem*)", Item); }
	void PopulateCraftMenu(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateCraftMenu(UContextMenu*)", ContextMenu); }
	void HandleActionDeleteFolder(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionDeleteFolder(UContextMenuItem*)", Item); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenu_PrimalItem"); }
	void HandleActionDiscard(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionDiscard(UContextMenuItem*)", Item); }
	void PopulateSubmenuCustomCosmetics(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuCustomCosmetics(UContextMenu*)", ContextMenu); }
	UContextMenu* HandleOnGetSubmenuSortingInputContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuSortingInputContent(UContextMenuItem*)", MenuItem); }
	void HandleActionTrack(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionTrack(UContextMenuItem*)", Item); }
	void HandleActionAddAsSortingInputFive(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionAddAsSortingInputFive(UContextMenuItem*)", Item); }
	UContextMenu* HandleOnGetSubmenuSortingInputAmountContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuSortingInputAmountContent(UContextMenuItem*)", MenuItem); }
	void HandleActionCraftAll(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionCraftAll(UContextMenuItem*)", Item); }
	void HandleActionUnequip(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionUnequip(UContextMenuItem*)", Item); }
	UUI_Inventory* GetInventoryUI() { return NativeCall<UUI_Inventory*>(this, "UContextMenu_PrimalItem.GetInventoryUI()"); }
	void HandleActionEquipAllInFolder(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionEquipAllInFolder(UContextMenuItem*)", Item); }
	void HandleActionSplitOne(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionSplitOne(UContextMenuItem*)", Item); }
	void HandleActionRenameFolder(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRenameFolder(UContextMenuItem*)", Item); }
	void HandleActionRemoveAsSortingInput(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRemoveAsSortingInput(UContextMenuItem*)", Item); }
	void PopulateSubmenuSortingInputAmount(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuSortingInputAmount(UContextMenu*)", ContextMenu); }
	void HandleActionRepair(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRepair(UContextMenuItem*)", Item); }
	void HandleActionApplyCosmetic(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionApplyCosmetic(UContextMenuItem*)", Item); }
	void HandleActionFavorite(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionFavorite(UContextMenuItem*)", Item); }
	void PopulateSubmenuSplitStack(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuSplitStack(UContextMenu*)", ContextMenu); }
	void InitializeMe(UContextMenu* WithParentContextMenu, UMenuAnchor* WithParentMenuAnchor, UWidget* WithParentContextWidget) { NativeCall<void, UContextMenu*, UMenuAnchor*, UWidget*>(this, "UContextMenu_PrimalItem.InitializeMe(UContextMenu*,UMenuAnchor*,UWidget*)", WithParentContextMenu, WithParentMenuAnchor, WithParentContextWidget); }
	void PopulateSubmenuRemove(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateSubmenuRemove(UContextMenu*)", ContextMenu); }
	void HandleActionTransfer(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionTransfer(UContextMenuItem*)", Item); }
	void PopulateSubmenuCustom(UContextMenu* ContextMenu, const FName& ContextItemName) { NativeCall<void, UContextMenu*, const FName&>(this, "UContextMenu_PrimalItem.PopulateSubmenuCustom(UContextMenu*,FName&)", ContextMenu, ContextItemName); }
	void HandleActionCustom(UContextMenuItem* Item, const FName& ContextItemName) { NativeCall<void, UContextMenuItem*, const FName&>(this, "UContextMenu_PrimalItem.HandleActionCustom(UContextMenuItem*,FName&)", Item, ContextItemName); }
	void HandleActionSplitAll(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionSplitAll(UContextMenuItem*)", Item); }
	void HandleActionSkinToggleIgnoreCharacterCustomizationProportions(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionSkinToggleIgnoreCharacterCustomizationProportions(UContextMenuItem*)", Item); }
	void PopulateTrackOption(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem.PopulateTrackOption(UContextMenu*)", ContextMenu); }
	void HandleActionRemoveSkin(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionRemoveSkin(UContextMenuItem*)", Item); }
	void HandleActionCraftAmount(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleActionCraftAmount(UContextMenuItem*)", Item); }
	UContextMenu* HandleOnGetSubmenuSplitAmountContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuSplitAmountContent(UContextMenuItem*)", MenuItem); }
	UContextMenu* HandleOnGetSubmenuCraftContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem.HandleOnGetSubmenuCraftContent(UContextMenuItem*)", MenuItem); }
};
