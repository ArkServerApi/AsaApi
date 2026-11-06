#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UDataListEntryButton_HostSession : public UBaseSelectableButtonWidget
{
public:
	UDataListEntryButton_HostSession() = delete;
	~UDataListEntryButton_HostSession() = delete;
	UDataListEntryButton_HostSession(const UDataListEntryButton_HostSession&) = delete;
	UDataListEntryButton_HostSession& operator=(const UDataListEntryButton_HostSession&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_HostSession"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_HostSession"); }

	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.DisplayName"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_HostSession.bCenterDisplayName"); }
	FString& ShortMapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.ShortMapName"); }
	FString& LongMapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.LongMapName"); }
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.ModName"); }
	FString& ModPathField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.ModPath"); }
	unsigned __int64& ModItemIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_HostSession.ModItemId"); }
	FString& MapEntryStringField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.MapEntryString"); }
	FString& MapSaveFolderAbsolutePathField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.MapSaveFolderAbsolutePath"); }
	FColor& IncompatibleTextColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_HostSession.IncompatibleTextColor"); }
	FString& IncompatibleTextField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.IncompatibleText"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_HostSession.Button"); }
	UCustomButtonWidget*& DeleteSaveGameButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_HostSession.DeleteSaveGameButton"); }
	UCustomButtonWidget*& DLCInstalledButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_HostSession.DLCInstalledButton"); }
	UCustomButtonWidget*& DeleteServerDataButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_HostSession.DeleteServerDataButton"); }
	UScrollBox*& ParentScrollBoxField() { return *GetNativePointerField<UScrollBox**>(this, "UDataListEntryButton_HostSession.ParentScrollBox"); }
	bool& bHasSaveGameField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_HostSession.bHasSaveGame"); }
	bool& bHasServerDataField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_HostSession.bHasServerData"); }
	USizeBox*& SaveGameIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_HostSession.SaveGameIcon"); }
	USizeBox*& ServerDataIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_HostSession.ServerDataIcon"); }
	USizeBox*& DLCInstalledIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_HostSession.DLCInstalledIcon"); }
	USizeBox*& ActiveIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_HostSession.ActiveIcon"); }
	UBorder*& TextBorderField() { return *GetNativePointerField<UBorder**>(this, "UDataListEntryButton_HostSession.TextBorder"); }
	UTextBlock*& EntryNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_HostSession.EntryNameLabel"); }
	UWidgetSwitcher*& ButtonIconSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UDataListEntryButton_HostSession.ButtonIconSwitcher"); }
	UCustomButtonWidget*& MoveEntryUpButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_HostSession.MoveEntryUpButton"); }
	UCustomButtonWidget*& MoveEntryDownButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_HostSession.MoveEntryDownButton"); }
	USizeBox*& ActiveModMoveUpIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_HostSession.ActiveModMoveUpIcon"); }
	USizeBox*& ActiveModMoveDownIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_HostSession.ActiveModMoveDownIcon"); }
	UWidget*& ScaleNewIconField() { return *GetNativePointerField<UWidget**>(this, "UDataListEntryButton_HostSession.ScaleNewIcon"); }
	UWidget*& ScaleNewUpdateIconField() { return *GetNativePointerField<UWidget**>(this, "UDataListEntryButton_HostSession.ScaleNewUpdateIcon"); }
	double& lastTimeClickedField() { return *GetNativePointerField<double*>(this, "UDataListEntryButton_HostSession.lastTimeClicked"); }
	BitFieldValue<bool, unsigned __int32> bIsCustom() { return { this, "UDataListEntryButton_HostSession.bIsCustom"}; }
	BitFieldValue<bool, unsigned __int32> bIsProcedural() { return { this, "UDataListEntryButton_HostSession.bIsProcedural"}; }
	BitFieldValue<bool, unsigned __int32> bIsActivated() { return { this, "UDataListEntryButton_HostSession.bIsActivated"}; }
	BitFieldValue<bool, unsigned __int32> bIsMapMod() { return { this, "UDataListEntryButton_HostSession.bIsMapMod"}; }
	BitFieldValue<bool, unsigned __int32> bIsActiveModListingEntry() { return { this, "UDataListEntryButton_HostSession.bIsActiveModListingEntry"}; }
	BitFieldValue<bool, unsigned __int32> bSelectOnClicked() { return { this, "UDataListEntryButton_HostSession.bSelectOnClicked"}; }
	BitFieldValue<bool, unsigned __int32> bIsTotalConversion() { return { this, "UDataListEntryButton_HostSession.bIsTotalConversion"}; }
	BitFieldValue<bool, unsigned __int32> bIsCompatibleMod() { return { this, "UDataListEntryButton_HostSession.bIsCompatibleMod"}; }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryButton_HostSession.ClickedButton(UWidget*)", clickedWidget); }
	bool IsSelected() { return NativeCall<bool>(this, "UDataListEntryButton_HostSession.IsSelected()"); }
	void SetActivatedMod(bool SetActivatedState) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetActivatedMod(bool)", SetActivatedState); }
	void SetHasDLCInstalled(bool bInstalled) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetHasDLCInstalled(bool)", bInstalled); }
	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_HostSession.InitializeMe()"); }
	void RefreshReorderIcons(bool bIsFirst, bool bIsLast) { NativeCall<void, bool, bool>(this, "UDataListEntryButton_HostSession.RefreshReorderIcons(bool,bool)", bIsFirst, bIsLast); }
	void SetHasSaveData(bool bSaveGame) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetHasSaveData(bool)", bSaveGame); }
	void SetHasServerData(bool bServerData) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetHasServerData(bool)", bServerData); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UDataListEntryButton_HostSession.GetButton()"); }
	bool GetHasSaveGame() { return NativeCall<bool>(this, "UDataListEntryButton_HostSession.GetHasSaveGame()"); }
	void SetIsNewMap(bool bIsNew) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetIsNewMap(bool)", bIsNew); }
	bool GetHasServerData() { return NativeCall<bool>(this, "UDataListEntryButton_HostSession.GetHasServerData()"); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryButton_HostSession.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void SetEntryName(const FString& EntryName) { NativeCall<void, const FString&>(this, "UDataListEntryButton_HostSession.SetEntryName(FString&)", EntryName); }
	void SetIsNewUpdate(bool bIsNew) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetIsNewUpdate(bool)", bIsNew); }
	void RefreshIconSet() { NativeCall<void>(this, "UDataListEntryButton_HostSession.RefreshIconSet()"); }
	void SetParentScrollBox(UScrollBox* InParentScrollBox) { NativeCall<void, UScrollBox*>(this, "UDataListEntryButton_HostSession.SetParentScrollBox(UScrollBox*)", InParentScrollBox); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetSelected(bool)", bSelected); }
};
