#pragma once
#include "BulkForward.h"
#include "UContextMenu.h"

struct UContextMenu_InventorySort : public UContextMenu
{
public:
	UContextMenu_InventorySort() = delete;
	~UContextMenu_InventorySort() = delete;
	UContextMenu_InventorySort(const UContextMenu_InventorySort&) = delete;
	UContextMenu_InventorySort& operator=(const UContextMenu_InventorySort&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenu_InventorySort"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenu_InventorySort"); }

	void HandleActionSpoilTimer(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_InventorySort.HandleActionSpoilTimer(UContextMenuItem*)", Item); }
	void CloseMenu(bool CloseParents) { NativeCall<void, bool>(this, "UContextMenu_InventorySort.CloseMenu(bool)", CloseParents); }
	void HandleActionUnsort(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_InventorySort.HandleActionUnsort(UContextMenuItem*)", Item); }
	void PopulateRootMenu(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_InventorySort.PopulateRootMenu(UContextMenu*)", ContextMenu); }
	void InitializeMe(UContextMenu* WithParentContextMenu, UMenuAnchor* WithParentMenuAnchor, UWidget* WithParentContextWidget) { NativeCall<void, UContextMenu*, UMenuAnchor*, UWidget*>(this, "UContextMenu_InventorySort.InitializeMe(UContextMenu*,UMenuAnchor*,UWidget*)", WithParentContextMenu, WithParentMenuAnchor, WithParentContextWidget); }
	void HandleActionAlphabetical(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_InventorySort.HandleActionAlphabetical(UContextMenuItem*)", Item); }
	void HandleActionType(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_InventorySort.HandleActionType(UContextMenuItem*)", Item); }
	void HandleActionWeight(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_InventorySort.HandleActionWeight(UContextMenuItem*)", Item); }
};
