#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UGamepadButtonLegendWidget : public UPrimalUserWidget
{
public:
	UGamepadButtonLegendWidget() = delete;
	~UGamepadButtonLegendWidget() = delete;
	UGamepadButtonLegendWidget(const UGamepadButtonLegendWidget&) = delete;
	UGamepadButtonLegendWidget& operator=(const UGamepadButtonLegendWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGamepadButtonLegendWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGamepadButtonLegendWidget"); }

	FText& ButtonDescriptionField() { return *GetNativePointerField<FText*>(this, "UGamepadButtonLegendWidget.ButtonDescription"); }
	UTexture2D*& ButtonIconField() { return *GetNativePointerField<UTexture2D**>(this, "UGamepadButtonLegendWidget.ButtonIcon"); }
	FName& ButtonIconImageNameField() { return *GetNativePointerField<FName*>(this, "UGamepadButtonLegendWidget.ButtonIconImageName"); }
	UTextBlock*& ButtonDescriptionBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UGamepadButtonLegendWidget.ButtonDescriptionBlock"); }
	UImage*& ButtonIconImageField() { return *GetNativePointerField<UImage**>(this, "UGamepadButtonLegendWidget.ButtonIconImage"); }
	void SetButtonIcon(UTexture2D* icon) { NativeCall<void, UTexture2D*>(this, "UGamepadButtonLegendWidget.SetButtonIcon(UTexture2D*)", icon); }
	void SynchronizeProperties() { NativeCall<void>(this, "UGamepadButtonLegendWidget.SynchronizeProperties()"); }
	void SetText(const FText& InText) { NativeCall<void, const FText&>(this, "UGamepadButtonLegendWidget.SetText(FText&)", InText); }
	void SetButtonDescription(const FText& desc) { NativeCall<void, const FText&>(this, "UGamepadButtonLegendWidget.SetButtonDescription(FText&)", desc); }
	void NativeConstruct() { NativeCall<void>(this, "UGamepadButtonLegendWidget.NativeConstruct()"); }
};
