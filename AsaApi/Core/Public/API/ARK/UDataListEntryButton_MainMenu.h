#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UDataListEntryButton_MainMenu : public UBaseSelectableButtonWidget
{
public:
	UDataListEntryButton_MainMenu() = delete;
	~UDataListEntryButton_MainMenu() = delete;
	UDataListEntryButton_MainMenu(const UDataListEntryButton_MainMenu&) = delete;
	UDataListEntryButton_MainMenu& operator=(const UDataListEntryButton_MainMenu&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_MainMenu"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_MainMenu"); }

	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.DisplayName"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_MainMenu.bCenterDisplayName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.MapName"); }
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.ModName"); }
	FString& ModPathField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.ModPath"); }
	unsigned __int64& ModItemIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_MainMenu.ModItemId"); }
	UCustomButtonWidget*& ButtonObjectField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_MainMenu.ButtonObject"); }
	UTextBlock*& EntryNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_MainMenu.EntryNameLabel"); }
	BitFieldValue<bool, unsigned __int32> bIsCustom() { return { this, "UDataListEntryButton_MainMenu.bIsCustom"}; }
	BitFieldValue<bool, unsigned __int32> bIsProcedural() { return { this, "UDataListEntryButton_MainMenu.bIsProcedural"}; }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UDataListEntryButton_MainMenu.bSelectOnClicked"}; }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryButton_MainMenu.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDataListEntryButton_MainMenu.SetSelected(bool)", bSelected); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UDataListEntryButton_MainMenu.GetButton()"); }
	bool IsSelected() { return NativeCall<bool>(this, "UDataListEntryButton_MainMenu.IsSelected()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryButton_MainMenu.ClickedButton(UWidget*)", clickedWidget); }
};
