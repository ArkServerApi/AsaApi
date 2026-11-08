#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UInventoryDinoAncestryPanel : public UPrimalUI
{
public:
	UInventoryDinoAncestryPanel() = delete;
	~UInventoryDinoAncestryPanel() = delete;
	UInventoryDinoAncestryPanel(const UInventoryDinoAncestryPanel&) = delete;
	UInventoryDinoAncestryPanel& operator=(const UInventoryDinoAncestryPanel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInventoryDinoAncestryPanel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInventoryDinoAncestryPanel"); }

	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UInventoryDinoAncestryPanel.InventoryUI"); }
	APrimalDinoCharacter*& ActiveDinoField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "UInventoryDinoAncestryPanel.ActiveDino"); }
	UTextBlock*& DinoMotherLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.DinoMotherLabel"); }
	UTextBlock*& DinoFatherLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.DinoFatherLabel"); }
	UTextBlock*& RandomMutationsFemaleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.RandomMutationsFemaleLabel"); }
	UTextBlock*& RandomMutationsMaleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.RandomMutationsMaleLabel"); }
	UTextBlock*& DinoSelfLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.DinoSelfLabel"); }
	UWidgetSwitcher*& YourDinoGenderSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UInventoryDinoAncestryPanel.YourDinoGenderSwitcher"); }
	UTextBlock*& DinoAncestorsTitleField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.DinoAncestorsTitle"); }
	UTextBlock*& DinoAncestorsMaleTitleField() { return *GetNativePointerField<UTextBlock**>(this, "UInventoryDinoAncestryPanel.DinoAncestorsMaleTitle"); }
	UBorder*& MotherBorderField() { return *GetNativePointerField<UBorder**>(this, "UInventoryDinoAncestryPanel.MotherBorder"); }
	UButton*& CloseButtonField() { return *GetNativePointerField<UButton**>(this, "UInventoryDinoAncestryPanel.CloseButton"); }
	UScrollBox*& DinoAncestorsScrollBoxField() { return *GetNativePointerField<UScrollBox**>(this, "UInventoryDinoAncestryPanel.DinoAncestorsScrollBox"); }
	UScrollBox*& DinoAncestorsMaleScrollBoxField() { return *GetNativePointerField<UScrollBox**>(this, "UInventoryDinoAncestryPanel.DinoAncestorsMaleScrollBox"); }
	bool& bRefreshDinoAncestorsField() { return *GetNativePointerField<bool*>(this, "UInventoryDinoAncestryPanel.bRefreshDinoAncestors"); }
	void EscapeClosed() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.EscapeClosed()"); }
	void OnVirtualCursorinit() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.OnVirtualCursorinit()"); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UInventoryDinoAncestryPanel.ClickedButton(UWidget*)", clickedButton); }
	void UpdateAncestry() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.UpdateAncestry()"); }
	void RefreshAncestry(APrimalDinoCharacter* InDino) { NativeCall<void, APrimalDinoCharacter*>(this, "UInventoryDinoAncestryPanel.RefreshAncestry(APrimalDinoCharacter*)", InDino); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UInventoryDinoAncestryPanel.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void HighlightCloseButton() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.HighlightCloseButton()"); }
	void Init(UUI_Inventory* InInventory) { NativeCall<void, UUI_Inventory*>(this, "UInventoryDinoAncestryPanel.Init(UUI_Inventory*)", InInventory); }
};
