#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UInventoryStatsPanel : public UPrimalUI
{
public:
	UInventoryStatsPanel() = delete;
	~UInventoryStatsPanel() = delete;
	UInventoryStatsPanel(const UInventoryStatsPanel&) = delete;
	UInventoryStatsPanel& operator=(const UInventoryStatsPanel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInventoryStatsPanel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInventoryStatsPanel"); }

	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.TabBgSwitcherName"); }
	FName& PlayerStatsTabButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerStatsTabButtonName"); }
	FName& RemoteStatsTabButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteStatsTabButtonName"); }
	FName& RemoteStatsTabTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteStatsTabTextBlockName"); }
	FName& PlayerEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerEnabledEffectName"); }
	FName& RemoteEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteEnabledEffectName"); }
	FName& StatsWidgetSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.StatsWidgetSwitcherName"); }
	FName& PlayerStatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerStatsPanelName"); }
	FName& HeaderPanelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.HeaderPanelName"); }
	FName& RootSizeBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RootSizeBoxName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryStatsPanel.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryStatsPanel.SwitcherTextInactiveColor"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UInventoryStatsPanel.InventoryUI"); }
	UWidgetSwitcher*& StatsWidgetSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UInventoryStatsPanel.StatsWidgetSwitcher"); }
	UStatsPanelWidget_Character*& PlayerStatsPanelField() { return *GetNativePointerField<UStatsPanelWidget_Character**>(this, "UInventoryStatsPanel.PlayerStatsPanel"); }
	UWidgetSwitcher*& TabBgSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UInventoryStatsPanel.TabBgSwitcher"); }
	UButton*& PlayerStatsTabButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryStatsPanel.PlayerStatsTabButton"); }
	UButton*& RemoteStatsTabButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryStatsPanel.RemoteStatsTabButton"); }
	UTextBlock*& RemoteStatsTabNameField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryStatsPanel.RemoteStatsTabName"); }
	UWidget*& PlayerEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UInventoryStatsPanel.PlayerEnabledEffect"); }
	UWidget*& RemoteEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UInventoryStatsPanel.RemoteEnabledEffect"); }
	UWidget*& HeaderPanelField() { return *GetNativePointerField<UWidget**>(this, "UInventoryStatsPanel.HeaderPanel"); }
	USizeBox*& RootSizeBoxField() { return *GetNativePointerField<USizeBox**>(this, "UInventoryStatsPanel.RootSizeBox"); }
	UStatsPanelWidget*& RemoteStatsPanelField() { return *GetNativePointerField<UStatsPanelWidget**>(this, "UInventoryStatsPanel.RemoteStatsPanel"); }
	void SetupSpecialWidgetAdjacents(UWidget* InWidget) { NativeCall<void, UWidget*>(this, "UInventoryStatsPanel.SetupSpecialWidgetAdjacents(UWidget*)", InWidget); }
	UPrimalInventoryComponent* GetCurrentlyViewingInventory() { return NativeCall<UPrimalInventoryComponent*>(this, "UInventoryStatsPanel.GetCurrentlyViewingInventory()"); }
	void ShowLocalStats() { NativeCall<void>(this, "UInventoryStatsPanel.ShowLocalStats()"); }
	void ShowRemoteStats() { NativeCall<void>(this, "UInventoryStatsPanel.ShowRemoteStats()"); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UInventoryStatsPanel.GetParentPrimalUI()"); }
	void RefreshItemLists() { NativeCall<void>(this, "UInventoryStatsPanel.RefreshItemLists()"); }
	void Init(UUI_Inventory* InInventory) { NativeCall<void, UUI_Inventory*>(this, "UInventoryStatsPanel.Init(UUI_Inventory*)", InInventory); }
	void SetRemoteInventoryComp(UPrimalInventoryComponent* InRemoteInventoryComponent) { NativeCall<void, UPrimalInventoryComponent*>(this, "UInventoryStatsPanel.SetRemoteInventoryComp(UPrimalInventoryComponent*)", InRemoteInventoryComponent); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UInventoryStatsPanel.ClickedButton(UWidget*)", clickedButton); }
	void RefreshPanelHeight() { NativeCall<void>(this, "UInventoryStatsPanel.RefreshPanelHeight()"); }
	void GotoNextTab() { NativeCall<void>(this, "UInventoryStatsPanel.GotoNextTab()"); }
	void ShowCustomCosmeticTab(bool Show) { NativeCall<void, bool>(this, "UInventoryStatsPanel.ShowCustomCosmeticTab(bool)", Show); }
};
