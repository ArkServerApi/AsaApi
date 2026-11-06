#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UTribeWarButtonWidget : public UBaseSelectableButtonWidget
{
public:
	UTribeWarButtonWidget() = delete;
	~UTribeWarButtonWidget() = delete;
	UTribeWarButtonWidget(const UTribeWarButtonWidget&) = delete;
	UTribeWarButtonWidget& operator=(const UTribeWarButtonWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTribeWarButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTribeWarButtonWidget"); }

	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UTribeWarButtonWidget.Button"); }
	UTextBlock*& EnemyTribeNameField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeWarButtonWidget.EnemyTribeName"); }
	UTextBlock*& StartTimeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeWarButtonWidget.StartTimeLabel"); }
	UTextBlock*& EndTimeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeWarButtonWidget.EndTimeLabel"); }
	bool& bAllowButtonClickField() { return *GetNativePointerField<bool*>(this, "UTribeWarButtonWidget.bAllowButtonClick"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UTribeWarButtonWidget.bSelectOnClicked"}; }
	void InitializeMe() { NativeCall<void>(this, "UTribeWarButtonWidget.InitializeMe()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTribeWarButtonWidget.ClickedButton(UWidget*)", clickedWidget); }
	bool IsSelected() { return NativeCall<bool>(this, "UTribeWarButtonWidget.IsSelected()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTribeWarButtonWidget.SetSelected(bool)", bSelected); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTribeWarButtonWidget.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UTribeWarButtonWidget.GetButton()"); }
	void InitializeWithClick() { NativeCall<void>(this, "UTribeWarButtonWidget.InitializeWithClick()"); }
};
