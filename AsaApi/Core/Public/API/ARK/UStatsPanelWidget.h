#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UStatsPanelWidget : public UPrimalUI
{
public:
	UStatsPanelWidget() = delete;
	~UStatsPanelWidget() = delete;
	UStatsPanelWidget(const UStatsPanelWidget&) = delete;
	UStatsPanelWidget& operator=(const UStatsPanelWidget&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget"); }

	FName& MultiUseButton1NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton1Name"); }
	FName& MultiUseButton2NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton2Name"); }
	FName& MultiUseButton3NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton3Name"); }
	FName& MultiUseButton4NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton4Name"); }
	FName& MultiUseButton5NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton5Name"); }
	FName& MultiUseButton6NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton6Name"); }
	FCustomButtonWidgetStyle& DefaultMultiuseButtonExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UStatsPanelWidget.DefaultMultiuseButtonExtendedStyle"); }
	FButtonStyle& DefaultMultiuseButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UStatsPanelWidget.DefaultMultiuseButtonStyle"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UStatsPanelWidget.InventoryUI"); }
	TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>& InventoryCompField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>*>(this, "UStatsPanelWidget.InventoryComp"); }
	FString& PanelNameField() { return *GetNativePointerField<FString*>(this, "UStatsPanelWidget.PanelName"); }
	UButton*& MultiUseButton1Field() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget.MultiUseButton1"); }
	UButton*& MultiUseButton2Field() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget.MultiUseButton2"); }
	UButton*& MultiUseButton3Field() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget.MultiUseButton3"); }
	UButton*& MultiUseButton4Field() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget.MultiUseButton4"); }
	UButton*& MultiUseButton5Field() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget.MultiUseButton5"); }
	UButton*& MultiUseButton6Field() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget.MultiUseButton6"); }
	BitFieldValue<bool, unsigned char> bPreventAutoEnableMultiuseButtons() { return { this, "UStatsPanelWidget.bPreventAutoEnableMultiuseButtons"}; }
	BitFieldValue<bool, unsigned char> bStatsPanelReceiveGamepadInput() { return { this, "UStatsPanelWidget.bStatsPanelReceiveGamepadInput"}; }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UStatsPanelWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void SetInventoryComp(UPrimalInventoryComponent* InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent*>(this, "UStatsPanelWidget.SetInventoryComp(UPrimalInventoryComponent*)", InInventoryComponent); }
	void RefreshItemLists() { NativeCall<void>(this, "UStatsPanelWidget.RefreshItemLists()"); }
	UPrimalInventoryComponent* GetInventoryComp() { return NativeCall<UPrimalInventoryComponent*>(this, "UStatsPanelWidget.GetInventoryComp()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget"); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget.RefreshStats()"); }
	FString* GetPanelName(FString* result) { return NativeCall<FString*, FString*>(this, "UStatsPanelWidget.GetPanelName()", result); }
	UDataListPanel* GetEquipmentDataList() { return NativeCall<UDataListPanel*>(this, "UStatsPanelWidget.GetEquipmentDataList()"); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UStatsPanelWidget.ClickedButton(UWidget*)", clickedButton); }
	void Init(UUI_Inventory* InInventoryUI) { NativeCall<void, UUI_Inventory*>(this, "UStatsPanelWidget.Init(UUI_Inventory*)", InInventoryUI); }
};
