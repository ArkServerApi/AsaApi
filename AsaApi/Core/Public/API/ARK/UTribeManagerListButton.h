#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UTribeManagerListButton : public UBaseSelectableButtonWidget
{
public:
	UTribeManagerListButton() = delete;
	~UTribeManagerListButton() = delete;
	UTribeManagerListButton(const UTribeManagerListButton&) = delete;
	UTribeManagerListButton& operator=(const UTribeManagerListButton&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTribeManagerListButton"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTribeManagerListButton"); }

	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UTribeManagerListButton.Button"); }
	UTextBlock*& GroupNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeManagerListButton.GroupNameLabel"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UTribeManagerListButton.bSelectOnClicked"}; }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTribeManagerListButton.SetSelected(bool)", bSelected); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UTribeManagerListButton.GetButton()"); }
	FString* GetNameString(FString* result) { return NativeCall<FString*, FString*>(this, "UTribeManagerListButton.GetNameString()", result); }
	bool IsSelected() { return NativeCall<bool>(this, "UTribeManagerListButton.IsSelected()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTribeManagerListButton.ClickedButton(UWidget*)", clickedWidget); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTribeManagerListButton.ClickedSecondaryButton(UWidget*)", clickedWidget); }
};
