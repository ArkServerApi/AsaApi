#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UContextMenuItem : public UPrimalUserWidget
{
public:
	UContextMenuItem() = delete;
	~UContextMenuItem() = delete;
	UContextMenuItem(const UContextMenuItem&) = delete;
	UContextMenuItem& operator=(const UContextMenuItem&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenuItem"); }

	FName& SubmenuMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SubmenuMenuAnchorName"); }
	FName& SubmenuIndicatorNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SubmenuIndicatorName"); }
	FName& ShortcutKeyWidgetNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.ShortcutKeyWidgetName"); }
	FName& SwitchNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SwitchName"); }
	FName& SwitchContainerNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.SwitchContainerName"); }
	TEnumAsByte<UContextMenuItemSwitchMode::Type>& SwitchTypeField() { return *GetNativePointerField<TEnumAsByte<UContextMenuItemSwitchMode::Type>*>(this, "UContextMenuItem.SwitchType"); }
	bool& IsSwitchedOnField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem.IsSwitchedOn"); }
	FName& CustomNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem.CustomName"); }
	UMenuAnchor*& SubmenuAnchorField() { return *GetNativePointerField<UMenuAnchor**>(this, "UContextMenuItem.SubmenuAnchor"); }
	UContextMenu*& ParentContextMenuField() { return *GetNativePointerField<UContextMenu**>(this, "UContextMenuItem.ParentContextMenu"); }
	UTextBlock*& LabelTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UContextMenuItem.LabelTextBlock"); }
	UWidget*& SubmenuIndicatorField() { return *GetNativePointerField<UWidget**>(this, "UContextMenuItem.SubmenuIndicator"); }
	UButton*& ButtonField() { return *GetNativePointerField<UButton**>(this, "UContextMenuItem.Button"); }
	UInputKeyDisplayWidget*& ShortcutKeyWidgetField() { return *GetNativePointerField<UInputKeyDisplayWidget**>(this, "UContextMenuItem.ShortcutKeyWidget"); }
	UCheckBox*& SwitchField() { return *GetNativePointerField<UCheckBox**>(this, "UContextMenuItem.Switch"); }
	UWidget*& SwitchContainerField() { return *GetNativePointerField<UWidget**>(this, "UContextMenuItem.SwitchContainer"); }
	FText& CaptionField() { return *GetNativePointerField<FText*>(this, "UContextMenuItem.Caption"); }
	UTexture2D*& CachedImageField() { return *GetNativePointerField<UTexture2D**>(this, "UContextMenuItem.CachedImage"); }
	ETextJustify::Type& JustificationField() { return *GetNativePointerField<ETextJustify::Type*>(this, "UContextMenuItem.Justification"); }
	bool& SubmenuEnabledField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem.SubmenuEnabled"); }
	void SetJustification(ETextJustify::Type Value) { NativeCall<void, ETextJustify::Type>(this, "UContextMenuItem.SetJustification(ETextJustify::Type)", Value); }
	void OnActiveMenuItemChanged(UContextMenu* ContextMenu, UContextMenuItem* NewActiveItem, UContextMenuItem* OldActiveItem) { NativeCall<void, UContextMenu*, UContextMenuItem*, UContextMenuItem*>(this, "UContextMenuItem.OnActiveMenuItemChanged(UContextMenu*,UContextMenuItem*,UContextMenuItem*)", ContextMenu, NewActiveItem, OldActiveItem); }
	ETextJustify::Type GetJustification() { return NativeCall<ETextJustify::Type>(this, "UContextMenuItem.GetJustification()"); }
	void InitializeMe(UContextMenu* WithParentContextMenu) { NativeCall<void, UContextMenu*>(this, "UContextMenuItem.InitializeMe(UContextMenu*)", WithParentContextMenu); }
	void SetCaption(const FText& caption) { NativeCall<void, const FText&>(this, "UContextMenuItem.SetCaption(FText&)", caption); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenuItem"); }
	void OnButtonClicked() { NativeCall<void>(this, "UContextMenuItem.OnButtonClicked()"); }
	void InternalRefresh() { NativeCall<void>(this, "UContextMenuItem.InternalRefresh()"); }
	UContextMenu* GetParentContextMenu() { return NativeCall<UContextMenu*>(this, "UContextMenuItem.GetParentContextMenu()"); }
	void SetSubmenuEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UContextMenuItem.SetSubmenuEnabled(bool)", bEnabled); }
	void SynchronizeProperties() { NativeCall<void>(this, "UContextMenuItem.SynchronizeProperties()"); }
	bool GetSubmenuEnabled() { return NativeCall<bool>(this, "UContextMenuItem.GetSubmenuEnabled()"); }
	UWidget* OnGetContextMenuContent() { return NativeCall<UWidget*>(this, "UContextMenuItem.OnGetContextMenuContent()"); }
	UMenuAnchor* GetSubmenuAnchor() { return NativeCall<UMenuAnchor*>(this, "UContextMenuItem.GetSubmenuAnchor()"); }
	void NativeOnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) { NativeCall<void, const FGeometry&, const FPointerEvent&>(this, "UContextMenuItem.NativeOnMouseEnter(FGeometry&,FPointerEvent&)", MyGeometry, MouseEvent); }
};
