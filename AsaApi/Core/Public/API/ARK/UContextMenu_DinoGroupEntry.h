#pragma once
#include "BulkForward.h"
#include "UContextMenu.h"

struct UContextMenu_DinoGroupEntry : public UContextMenu
{
public:
	UContextMenu_DinoGroupEntry() = delete;
	~UContextMenu_DinoGroupEntry() = delete;
	UContextMenu_DinoGroupEntry(const UContextMenu_DinoGroupEntry&) = delete;
	UContextMenu_DinoGroupEntry& operator=(const UContextMenu_DinoGroupEntry&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenu_DinoGroupEntry"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenu_DinoGroupEntry"); }

	void HandleActionSetGroup(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_DinoGroupEntry.HandleActionSetGroup(UContextMenuItem*)", Item); }
	void InitializeMe(UContextMenu* WithParentContextMenu, UMenuAnchor* WithParentMenuAnchor, UWidget* WithParentContextWidget) { NativeCall<void, UContextMenu*, UMenuAnchor*, UWidget*>(this, "UContextMenu_DinoGroupEntry.InitializeMe(UContextMenu*,UMenuAnchor*,UWidget*)", WithParentContextMenu, WithParentMenuAnchor, WithParentContextWidget); }
	UUI_DinoOrderGroups* GetDinoOrderUI() { return NativeCall<UUI_DinoOrderGroups*>(this, "UContextMenu_DinoGroupEntry.GetDinoOrderUI()"); }
	void PopulateRootMenu(UContextMenu* ContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenu_DinoGroupEntry.PopulateRootMenu(UContextMenu*)", ContextMenu); }
	void HandleActionRemoveClass(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_DinoGroupEntry.HandleActionRemoveClass(UContextMenuItem*)", Item); }
	void HandleActionRemoveDino(UContextMenuItem* Item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu_DinoGroupEntry.HandleActionRemoveDino(UContextMenuItem*)", Item); }
};
