#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UCharacterViewPanelWidget : public UPrimalUserWidget
{
public:
	UCharacterViewPanelWidget() = delete;
	~UCharacterViewPanelWidget() = delete;
	UCharacterViewPanelWidget(const UCharacterViewPanelWidget&) = delete;
	UCharacterViewPanelWidget& operator=(const UCharacterViewPanelWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCharacterViewPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCharacterViewPanelWidget"); }

	FString& PreviewWidgetNameField() { return *GetNativePointerField<FString*>(this, "UCharacterViewPanelWidget.PreviewWidgetName"); }
	float& prevZoomField() { return *GetNativePointerField<float*>(this, "UCharacterViewPanelWidget.prevZoom"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UCharacterViewPanelWidget.InventoryUI"); }
	UUI_PreviewWidget*& PreviewWidgetField() { return *GetNativePointerField<UUI_PreviewWidget**>(this, "UCharacterViewPanelWidget.PreviewWidget"); }
	UDataListPanel*& PetDataListPanelField() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.PetDataListPanel"); }
	UDataListPanel*& AccessoryDataListPanel_Slot0Field() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.AccessoryDataListPanel_Slot0"); }
	UDataListPanel*& AccessoryDataListPanel_Slot1Field() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.AccessoryDataListPanel_Slot1"); }
	UDataListPanel*& AccessoryDataListPanel_Slot2Field() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.AccessoryDataListPanel_Slot2"); }
	UDataListPanel*& AccessoryDataListPanel_Slot3Field() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.AccessoryDataListPanel_Slot3"); }
	UDataListPanel*& AccessoryDataListPanel_Slot4Field() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.AccessoryDataListPanel_Slot4"); }
	UDataListPanel*& AccessoryDataListPanel_Slot5Field() { return *GetNativePointerField<UDataListPanel**>(this, "UCharacterViewPanelWidget.AccessoryDataListPanel_Slot5"); }
	void HidePreview() { NativeCall<void>(this, "UCharacterViewPanelWidget.HidePreview()"); }
	void ShowPreview() { NativeCall<void>(this, "UCharacterViewPanelWidget.ShowPreview()"); }
	void RefreshItemLists() { NativeCall<void>(this, "UCharacterViewPanelWidget.RefreshItemLists()"); }
	void Init(UUI_Inventory* InInventoryUI) { NativeCall<void, UUI_Inventory*>(this, "UCharacterViewPanelWidget.Init(UUI_Inventory*)", InInventoryUI); }
	void RefreshPreviewWidget() { NativeCall<void>(this, "UCharacterViewPanelWidget.RefreshPreviewWidget()"); }
	UDataListPanel* GetPetDataListPanel() { return NativeCall<UDataListPanel*>(this, "UCharacterViewPanelWidget.GetPetDataListPanel()"); }
	UDataListPanel* GetAccessoryDataListPanel(int AccSlot) { return NativeCall<UDataListPanel*, int>(this, "UCharacterViewPanelWidget.GetAccessoryDataListPanel(int)", AccSlot); }
};
