#pragma once
#include "BulkForward.h"
#include "UContextMenuItem.h"

struct UContextMenuItem_Spinner : public UContextMenuItem
{
public:
	UContextMenuItem_Spinner() = delete;
	~UContextMenuItem_Spinner() = delete;
	UContextMenuItem_Spinner(const UContextMenuItem_Spinner&) = delete;
	UContextMenuItem_Spinner& operator=(const UContextMenuItem_Spinner&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenuItem_Spinner"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenuItem_Spinner"); }

	int& ValueField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_Spinner.Value"); }
	int& MinValueField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_Spinner.MinValue"); }
	int& MaxValueField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_Spinner.MaxValue"); }
	UEditableText*& EditableTextWidgetField() { return *GetNativePointerField<UEditableText**>(this, "UContextMenuItem_Spinner.EditableTextWidget"); }
	UButton*& DecreaseButtonWidgetField() { return *GetNativePointerField<UButton**>(this, "UContextMenuItem_Spinner.DecreaseButtonWidget"); }
	UButton*& IncreaseButtonWidgetField() { return *GetNativePointerField<UButton**>(this, "UContextMenuItem_Spinner.IncreaseButtonWidget"); }
	int GetValue() { return NativeCall<int>(this, "UContextMenuItem_Spinner.GetValue()"); }
	int GetMaxValue() { return NativeCall<int>(this, "UContextMenuItem_Spinner.GetMaxValue()"); }
	void SetValue(int NewValue) { NativeCall<void, int>(this, "UContextMenuItem_Spinner.SetValue(int)", NewValue); }
	void SetMaxValue(int NewValue) { NativeCall<void, int>(this, "UContextMenuItem_Spinner.SetMaxValue(int)", NewValue); }
	void RefreshButtons() { NativeCall<void>(this, "UContextMenuItem_Spinner.RefreshButtons()"); }
	void SetMinValue(int NewValue) { NativeCall<void, int>(this, "UContextMenuItem_Spinner.SetMinValue(int)", NewValue); }
	void HandleOnButtonIncreaseClicked() { NativeCall<void>(this, "UContextMenuItem_Spinner.HandleOnButtonIncreaseClicked()"); }
	int GetMinValue() { return NativeCall<int>(this, "UContextMenuItem_Spinner.GetMinValue()"); }
	void HandleOnButtonDecreaseClicked() { NativeCall<void>(this, "UContextMenuItem_Spinner.HandleOnButtonDecreaseClicked()"); }
	void HandleOnTextCommited(const FText& Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText&, ETextCommit::Type>(this, "UContextMenuItem_Spinner.HandleOnTextCommited(FText&,ETextCommit::Type)", Text, CommitMethod); }
	void HandleOnTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UContextMenuItem_Spinner.HandleOnTextChanged(FText&)", Text); }
	bool TextToValue(const FText& Text, int& OutValue) { return NativeCall<bool, const FText&, int&>(this, "UContextMenuItem_Spinner.TextToValue(FText&,int&)", Text, OutValue); }
	void RefreshEditableText() { NativeCall<void>(this, "UContextMenuItem_Spinner.RefreshEditableText()"); }
};
