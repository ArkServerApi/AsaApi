#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UBaseSelectableButtonWidget : public UPrimalUI
{
public:
	UBaseSelectableButtonWidget() = delete;
	~UBaseSelectableButtonWidget() = delete;
	UBaseSelectableButtonWidget(const UBaseSelectableButtonWidget&) = delete;
	UBaseSelectableButtonWidget& operator=(const UBaseSelectableButtonWidget&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBaseSelectableButtonWidget"); }

	bool BPIsSelected() { return NativeCall<bool>(this, "UBaseSelectableButtonWidget.BPIsSelected()"); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UBaseSelectableButtonWidget.GetButton()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UBaseSelectableButtonWidget.SetSelected(bool)", bSelected); }
	void BPSetSelected(bool bSelected) { NativeCall<void, bool>(this, "UBaseSelectableButtonWidget.BPSetSelected(bool)", bSelected); }
	bool IsSelected() { return NativeCall<bool>(this, "UBaseSelectableButtonWidget.IsSelected()"); }
	UCustomButtonWidget* BPGetButton() { return NativeCall<UCustomButtonWidget*>(this, "UBaseSelectableButtonWidget.BPGetButton()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBaseSelectableButtonWidget"); }
};
