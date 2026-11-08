#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UPrimalSubMenuUI : public UPrimalUI
{
public:
	UPrimalSubMenuUI() = delete;
	~UPrimalSubMenuUI() = delete;
	UPrimalSubMenuUI(const UPrimalSubMenuUI&) = delete;
	UPrimalSubMenuUI& operator=(const UPrimalSubMenuUI&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalSubMenuUI"); }

	UUI_Hub*& ParentHubUIField() { return *GetNativePointerField<UUI_Hub**>(this, "UPrimalSubMenuUI.ParentHubUI"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& StoredHighlightedWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalSubMenuUI.StoredHighlightedWidget"); }
	bool SubMenuClickedButtonWithController(UWidget* clickedWidget, int ControllerId) { return NativeCall<bool, UWidget*, int>(this, "UPrimalSubMenuUI.SubMenuClickedButtonWithController(UWidget*,int)", clickedWidget, ControllerId); }
	void StoreHighlightedState() { NativeCall<void>(this, "UPrimalSubMenuUI.StoreHighlightedState()"); }
	bool RestoreHighlightedState() { return NativeCall<bool>(this, "UPrimalSubMenuUI.RestoreHighlightedState()"); }
	bool HighlightPrevHighlightedWidget() { return NativeCall<bool>(this, "UPrimalSubMenuUI.HighlightPrevHighlightedWidget()"); }
	void HighlightDefaultWidget(UPanelWidget* RestrictToPanel) { NativeCall<void, UPanelWidget*>(this, "UPrimalSubMenuUI.HighlightDefaultWidget(UPanelWidget*)", RestrictToPanel); }
	void OnHide() { NativeCall<void>(this, "UPrimalSubMenuUI.OnHide()"); }
	void OnHighlightedWidget(UWidget* Widget) { NativeCall<void, UWidget*>(this, "UPrimalSubMenuUI.OnHighlightedWidget(UWidget*)", Widget); }
	void SetAutoScroll(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalSubMenuUI.SetAutoScroll(UWidget*)", widget); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UPrimalSubMenuUI.GetParentPrimalUI()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalSubMenuUI"); }
	void InitializeSubMenu(UUI_Hub* Hub) { NativeCall<void, UUI_Hub*>(this, "UPrimalSubMenuUI.InitializeSubMenu(UUI_Hub*)", Hub); }
	void OnShow() { NativeCall<void>(this, "UPrimalSubMenuUI.OnShow()"); }
};
