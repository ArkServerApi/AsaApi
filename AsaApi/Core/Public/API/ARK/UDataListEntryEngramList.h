#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UDataListEntryEngramList : public UPrimalUI
{
public:
	UDataListEntryEngramList() = delete;
	~UDataListEntryEngramList() = delete;
	UDataListEntryEngramList(const UDataListEntryEngramList&) = delete;
	UDataListEntryEngramList& operator=(const UDataListEntryEngramList&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryEngramList"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryEngramList"); }

	FName& DataPanelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.DataPanelName"); }
	FName& LevelLabelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.LevelLabelName"); }
	FName& LevelEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.LevelEnabledEffectName"); }
	FName& ElementIconNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.ElementIconName"); }
	FName& EngramRowStartNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.EngramRowStartName"); }
	FName& EngramRowMiddleNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.EngramRowMiddleName"); }
	FName& EngramRowEndNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.EngramRowEndName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryEngramList.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryEngramList.SwitcherTextInactiveColor"); }
	int& WidgetLimitField() { return *GetNativePointerField<int*>(this, "UDataListEntryEngramList.WidgetLimit"); }
	int& EngramLevelField() { return *GetNativePointerField<int*>(this, "UDataListEntryEngramList.EngramLevel"); }
	int& EntryCountField() { return *GetNativePointerField<int*>(this, "UDataListEntryEngramList.EntryCount"); }
	bool& bIsTekField() { return *GetNativePointerField<bool*>(this, "UDataListEntryEngramList.bIsTek"); }
	UTextBlock*& LevelLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryEngramList.LevelLabel"); }
	UHorizontalBox*& DataPanelField() { return *GetNativePointerField<UHorizontalBox**>(this, "UDataListEntryEngramList.DataPanel"); }
	TArray<UDataListEntryWidget*, TSizedDefaultAllocator<32> >& DataListEntriesField() { return *GetNativePointerField<TArray<UDataListEntryWidget*, TSizedDefaultAllocator<32> >*>(this, "UDataListEntryEngramList.DataListEntries"); }
	UWidget*& LevelEnabledEffectField() { return *GetNativePointerField<UWidget**>(this, "UDataListEntryEngramList.LevelEnabledEffect"); }
	UImage*& ElementIconField() { return *GetNativePointerField<UImage**>(this, "UDataListEntryEngramList.ElementIcon"); }
	UImage*& EngramRowStartField() { return *GetNativePointerField<UImage**>(this, "UDataListEntryEngramList.EngramRowStart"); }
	UImage*& EngramRowMiddleField() { return *GetNativePointerField<UImage**>(this, "UDataListEntryEngramList.EngramRowMiddle"); }
	UImage*& EngramRowEndField() { return *GetNativePointerField<UImage**>(this, "UDataListEntryEngramList.EngramRowEnd"); }
	void SetIsTekRow(bool bIsTekRow) { NativeCall<void, bool>(this, "UDataListEntryEngramList.SetIsTekRow(bool)", bIsTekRow); }
	void SetLevelLabelActive(bool bIsActive) { NativeCall<void, bool>(this, "UDataListEntryEngramList.SetLevelLabelActive(bool)", bIsActive); }
	void AddEntry(UDataListEntryWidget* DataEntry) { NativeCall<void, UDataListEntryWidget*>(this, "UDataListEntryEngramList.AddEntry(UDataListEntryWidget*)", DataEntry); }
	void SetStartRow() { NativeCall<void>(this, "UDataListEntryEngramList.SetStartRow()"); }
	void SetEngramLevel(int Level) { NativeCall<void, int>(this, "UDataListEntryEngramList.SetEngramLevel(int)", Level); }
	int GetEngramLevel() { return NativeCall<int>(this, "UDataListEntryEngramList.GetEngramLevel()"); }
	void RemoveEntries() { NativeCall<void>(this, "UDataListEntryEngramList.RemoveEntries()"); }
	void SetMiddleRow() { NativeCall<void>(this, "UDataListEntryEngramList.SetMiddleRow()"); }
	bool IsFull() { return NativeCall<bool>(this, "UDataListEntryEngramList.IsFull()"); }
	void InitializeMe(bool bCanExpire) { NativeCall<void, bool>(this, "UDataListEntryEngramList.InitializeMe(bool)", bCanExpire); }
	void SetEndRow() { NativeCall<void>(this, "UDataListEntryEngramList.SetEndRow()"); }
};
