#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UDinoAncestryEntryWidget : public UPrimalUI
{
public:
	UDinoAncestryEntryWidget() = delete;
	~UDinoAncestryEntryWidget() = delete;
	UDinoAncestryEntryWidget(const UDinoAncestryEntryWidget&) = delete;
	UDinoAncestryEntryWidget& operator=(const UDinoAncestryEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDinoAncestryEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDinoAncestryEntryWidget"); }

	UTextBlock*& MaternalEntryLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDinoAncestryEntryWidget.MaternalEntryLabel"); }
	UTextBlock*& PaternalEntryLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDinoAncestryEntryWidget.PaternalEntryLabel"); }
	UTextBlock*& AncestryLevelLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDinoAncestryEntryWidget.AncestryLevelLabel"); }
	UImage*& ArrowIconField() { return *GetNativePointerField<UImage**>(this, "UDinoAncestryEntryWidget.ArrowIcon"); }
	void SetMaternalEntry(const FString& MaternalEntry) { NativeCall<void, const FString&>(this, "UDinoAncestryEntryWidget.SetMaternalEntry(FString&)", MaternalEntry); }
	void SetPaternalEntry(const FString& PaternalEntry) { NativeCall<void, const FString&>(this, "UDinoAncestryEntryWidget.SetPaternalEntry(FString&)", PaternalEntry); }
	void SetAncestryLevel(const FString& AncestryLevel) { NativeCall<void, const FString&>(this, "UDinoAncestryEntryWidget.SetAncestryLevel(FString&)", AncestryLevel); }
	void SetIconVisibility(bool bVisible) { NativeCall<void, bool>(this, "UDinoAncestryEntryWidget.SetIconVisibility(bool)", bVisible); }
	void InitializeMe() { NativeCall<void>(this, "UDinoAncestryEntryWidget.InitializeMe()"); }
};
