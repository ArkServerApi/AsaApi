#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UTradeItemButtonWidget : public UBaseSelectableButtonWidget
{
public:
	UTradeItemButtonWidget() = delete;
	~UTradeItemButtonWidget() = delete;
	UTradeItemButtonWidget(const UTradeItemButtonWidget&) = delete;
	UTradeItemButtonWidget& operator=(const UTradeItemButtonWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTradeItemButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTradeItemButtonWidget"); }

	FName& ItemCostTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemCostTextBlockName"); }
	FName& ItemQuantityTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemQuantityTextBlockName"); }
	FName& ItemImageNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemImageName"); }
	FName& ItemWeightTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemWeightTextBlockName"); }
	FName& ItemSaleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemSaleTextBlockName"); }
	FLinearColor& CanAffordPriceTextField() { return *GetNativePointerField<FLinearColor*>(this, "UTradeItemButtonWidget.CanAffordPriceText"); }
	FLinearColor& TooExpensivePriceTextField() { return *GetNativePointerField<FLinearColor*>(this, "UTradeItemButtonWidget.TooExpensivePriceText"); }
	UObject*& SponsoredOptionReferenceField() { return *GetNativePointerField<UObject**>(this, "UTradeItemButtonWidget.SponsoredOptionReference"); }
	int& AssociatedOptionIndexField() { return *GetNativePointerField<int*>(this, "UTradeItemButtonWidget.AssociatedOptionIndex"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UTradeItemButtonWidget.Button"); }
	UTextBlock*& ItemCostTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UTradeItemButtonWidget.ItemCostTextBlock"); }
	UTextBlock*& ItemQuantityTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UTradeItemButtonWidget.ItemQuantityTextBlock"); }
	UTextBlock*& ItemWeightTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UTradeItemButtonWidget.ItemWeightTextBlock"); }
	UTextBlock*& ItemSaleTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UTradeItemButtonWidget.ItemSaleTextBlock"); }
	UImage*& ItemImageField() { return *GetNativePointerField<UImage**>(this, "UTradeItemButtonWidget.ItemImage"); }
	UImage*& ExtraImageField() { return *GetNativePointerField<UImage**>(this, "UTradeItemButtonWidget.ExtraImage"); }
	UBorder*& ItemQualityPanelField() { return *GetNativePointerField<UBorder**>(this, "UTradeItemButtonWidget.ItemQualityPanel"); }
	bool& bAllowButtonClickField() { return *GetNativePointerField<bool*>(this, "UTradeItemButtonWidget.bAllowButtonClick"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UTradeItemButtonWidget.bSelectOnClicked"}; }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTradeItemButtonWidget.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void InitializeMe(bool bCanExpire) { NativeCall<void, bool>(this, "UTradeItemButtonWidget.InitializeMe(bool)", bCanExpire); }
	void SetItemCostString(const FString& NewCost) { NativeCall<void, const FString&>(this, "UTradeItemButtonWidget.SetItemCostString(FString&)", NewCost); }
	void SetItemQuantityString(const FString& NewQuantity) { NativeCall<void, const FString&>(this, "UTradeItemButtonWidget.SetItemQuantityString(FString&)", NewQuantity); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UTradeItemButtonWidget.GetButton()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTradeItemButtonWidget.SetSelected(bool)", bSelected); }
	void SetItemSaleString(const FString& NewSale) { NativeCall<void, const FString&>(this, "UTradeItemButtonWidget.SetItemSaleString(FString&)", NewSale); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTradeItemButtonWidget.ClickedButton(UWidget*)", clickedWidget); }
	void SetExtraImageBrush(UObject* NewBrush) { NativeCall<void, UObject*>(this, "UTradeItemButtonWidget.SetExtraImageBrush(UObject*)", NewBrush); }
	void UpdateItemSaleStringColor(const int& PercentageOff) { NativeCall<void, const int&>(this, "UTradeItemButtonWidget.UpdateItemSaleStringColor(int&)", PercentageOff); }
	bool IsSelected() { return NativeCall<bool>(this, "UTradeItemButtonWidget.IsSelected()"); }
	void SetItemWeightString(const FString& NewWeight) { NativeCall<void, const FString&>(this, "UTradeItemButtonWidget.SetItemWeightString(FString&)", NewWeight); }
	bool UseCustomToolTip(bool bWantToDisplayTooltip) { return NativeCall<bool, bool>(this, "UTradeItemButtonWidget.UseCustomToolTip(bool)", bWantToDisplayTooltip); }
	void SetItemImageBrush(UTexture2D* NewBrush) { NativeCall<void, UTexture2D*>(this, "UTradeItemButtonWidget.SetItemImageBrush(UTexture2D*)", NewBrush); }
	void InitializeSponsorObjectBP(UObject* Option) { NativeCall<void, UObject*>(this, "UTradeItemButtonWidget.InitializeSponsorObjectBP(UObject*)", Option); }
	void SetItemImageBrush(UMaterialInterface* NewBrush) { NativeCall<void, UMaterialInterface*>(this, "UTradeItemButtonWidget.SetItemImageBrush(UMaterialInterface*)", NewBrush); }
};
