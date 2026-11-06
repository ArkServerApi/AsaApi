#pragma once
#include "BulkForward.h"
#include "UContextMenu_PrimalItem.h"

struct UContextMenu_PrimalItem_StorageInterface : public UContextMenu_PrimalItem
{
public:
	UContextMenu_PrimalItem_StorageInterface() = delete;
	~UContextMenu_PrimalItem_StorageInterface() = delete;
	UContextMenu_PrimalItem_StorageInterface(const UContextMenu_PrimalItem_StorageInterface&) = delete;
	UContextMenu_PrimalItem_StorageInterface& operator=(const UContextMenu_PrimalItem_StorageInterface&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenu_PrimalItem_StorageInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenu_PrimalItem_StorageInterface"); }

	int& WithdrawAmountValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem_StorageInterface.WithdrawAmountValue"); }
	void PopulateRootMenu(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem_StorageInterface.PopulateRootMenu(UContextMenu*)", ContextMenu); }
	void HandleActionWithdrawNonFuelItems(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionWithdrawNonFuelItems(UContextMenuItem*)", Item); }
	void HandleActionLocateItem(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionLocateItem(UContextMenuItem*)", Item); }
	void HandleActionWithdrawAmount(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionWithdrawAmount(UContextMenuItem*)", Item); }
	UContextMenu* HandleOnGetSubmenuWithdrawAmountContent(UContextMenuItem* MenuItem) { return NativeCall<UContextMenu*, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleOnGetSubmenuWithdrawAmountContent(UContextMenuItem*)", MenuItem); }
	void PopulateSubmenuWithdrawAmount(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_PrimalItem_StorageInterface.PopulateSubmenuWithdrawAmount(UContextMenu*)", ContextMenu); }
	void HandleActionUse(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionUse(UContextMenuItem*)", Item); }
	void HandleActionTransfer(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionTransfer(UContextMenuItem*)", Item); }
	void HandleWithdrawAmountValueCommit(UContextMenuItem_Spinner* Item, int InValue, ETextCommit::Type CommitMethod) { NativeCall<void, UContextMenuItem_Spinner*, int, ETextCommit::Type>(this, "UContextMenu_PrimalItem_StorageInterface.HandleWithdrawAmountValueCommit(UContextMenuItem_Spinner*,int,ETextCommit::Type)", Item, InValue, CommitMethod); }
	void HandleActionRemoveThreshold(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionRemoveThreshold(UContextMenuItem*)", Item); }
	void InitializeMe(UContextMenu* WithParentContextMenu, UMenuAnchor* WithParentMenuAnchor, UWidget* WithParentContextWidget) { NativeCall<void, UContextMenu*, UMenuAnchor*, UWidget*>(this, "UContextMenu_PrimalItem_StorageInterface.InitializeMe(UContextMenu*,UMenuAnchor*,UWidget*)", WithParentContextMenu, WithParentMenuAnchor, WithParentContextWidget); }
	void HandleActionSplitAmount(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionSplitAmount(UContextMenuItem*)", Item); }
	void HandleActionWithdrawAll(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_PrimalItem_StorageInterface.HandleActionWithdrawAll(UContextMenuItem*)", Item); }
};
