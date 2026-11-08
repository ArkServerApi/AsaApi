#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UDyeRegionButtonWidget : public UPrimalUI
{
public:
	UDyeRegionButtonWidget() = delete;
	~UDyeRegionButtonWidget() = delete;
	UDyeRegionButtonWidget(const UDyeRegionButtonWidget&) = delete;
	UDyeRegionButtonWidget& operator=(const UDyeRegionButtonWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDyeRegionButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDyeRegionButtonWidget"); }

	FLinearColor& DefaultBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDyeRegionButtonWidget.DefaultBackgroundColor"); }
	FLinearColor& DefaultPreviewColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDyeRegionButtonWidget.DefaultPreviewColor"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDyeRegionButtonWidget.Button"); }
	UTextBlock*& DisplayStringField() { return *GetNativePointerField<UTextBlock**>(this, "UDyeRegionButtonWidget.DisplayString"); }
	UBorder*& BackgroundColorField() { return *GetNativePointerField<UBorder**>(this, "UDyeRegionButtonWidget.BackgroundColor"); }
	UBorder*& PaintColorPreviewField() { return *GetNativePointerField<UBorder**>(this, "UDyeRegionButtonWidget.PaintColorPreview"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UDyeRegionButtonWidget.bSelectOnClicked"}; }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDyeRegionButtonWidget.ClickedButton(UWidget*)", clickedWidget); }
	bool IsSelected() { return NativeCall<bool>(this, "UDyeRegionButtonWidget.IsSelected()"); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDyeRegionButtonWidget.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UDyeRegionButtonWidget.SetEnabled(bool)", bEnabled); }
	bool IsEnabled() { return NativeCall<bool>(this, "UDyeRegionButtonWidget.IsEnabled()"); }
	void InitializeMe() { NativeCall<void>(this, "UDyeRegionButtonWidget.InitializeMe()"); }
	void ResetDefaultPreviewColor() { NativeCall<void>(this, "UDyeRegionButtonWidget.ResetDefaultPreviewColor()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDyeRegionButtonWidget.SetSelected(bool)", bSelected); }
};
