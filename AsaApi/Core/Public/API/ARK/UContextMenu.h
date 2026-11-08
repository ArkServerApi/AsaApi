#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UContextMenu : public UPrimalUserWidget
{
public:
	UContextMenu() = delete;
	~UContextMenu() = delete;
	UContextMenu(const UContextMenu&) = delete;
	UContextMenu& operator=(const UContextMenu&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenu"); }

	FName& CustomNameField() { return *GetNativePointerField<FName*>(this, "UContextMenu.CustomName"); }
	UMenuAnchor*& ParentMenuAnchorField() { return *GetNativePointerField<UMenuAnchor**>(this, "UContextMenu.ParentMenuAnchor"); }
	UWidget*& ParentContextWidgetField() { return *GetNativePointerField<UWidget**>(this, "UContextMenu.ParentContextWidget"); }
	UContextMenu*& ParentContextMenuField() { return *GetNativePointerField<UContextMenu**>(this, "UContextMenu.ParentContextMenu"); }
	UContextMenuItem*& ActiveItemField() { return *GetNativePointerField<UContextMenuItem**>(this, "UContextMenu.ActiveItem"); }
	void InitializeMe(UContextMenu* WithParentContextMenu, UMenuAnchor* WithParentMenuAnchor, UWidget* WithParentContextWidget) { NativeCall<void, UContextMenu*, UMenuAnchor*, UWidget*>(this, "UContextMenu.InitializeMe(UContextMenu*,UMenuAnchor*,UWidget*)", WithParentContextMenu, WithParentMenuAnchor, WithParentContextWidget); }
	void SetActiveItem(UContextMenuItem* item) { NativeCall<void, UContextMenuItem*>(this, "UContextMenu.SetActiveItem(UContextMenuItem*)", item); }
	void CloseMenu(bool CloseParents) { NativeCall<void, bool>(this, "UContextMenu.CloseMenu(bool)", CloseParents); }
	UPanelWidget* GetMainContainer() { return NativeCall<UPanelWidget*>(this, "UContextMenu.GetMainContainer()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenu"); }
	void InternalPopulateMenu() { NativeCall<void>(this, "UContextMenu.InternalPopulateMenu()"); }
	UContextMenuItem* GetActiveItem() { return NativeCall<UContextMenuItem*>(this, "UContextMenu.GetActiveItem()"); }
};
