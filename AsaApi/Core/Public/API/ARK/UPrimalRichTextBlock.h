#pragma once
#include "BulkForward.h"
#include "UWidget.h"

class UPrimalRichTextBlock : public UWidget
{
public:
	UPrimalRichTextBlock() = delete;
	~UPrimalRichTextBlock() = delete;
	UPrimalRichTextBlock(const UPrimalRichTextBlock&) = delete;
	UPrimalRichTextBlock& operator=(const UPrimalRichTextBlock&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalRichTextBlock"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalRichTextBlock"); }

	FText& TextField() { return *GetNativePointerField<FText*>(this, "UPrimalRichTextBlock.Text"); }
	TEnumAsByte<ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TEnumAsByte<ETextJustify::Type>*>(this, "UPrimalRichTextBlock.Justification"); }
	bool& AutoWrapTextField() { return *GetNativePointerField<bool*>(this, "UPrimalRichTextBlock.AutoWrapText"); }
	float& WrapTextAtField() { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.WrapTextAt"); }
	bool& CenterVerticallyField() { return *GetNativePointerField<bool*>(this, "UPrimalRichTextBlock.CenterVertically"); }
	bool& bIgnoreParsingField() { return *GetNativePointerField<bool*>(this, "UPrimalRichTextBlock.bIgnoreParsing"); }
	FMargin& MarginField() { return *GetNativePointerField<FMargin*>(this, "UPrimalRichTextBlock.Margin"); }
	float& LineHeightPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.LineHeightPercentage"); }
	FTextBlockStyle& WidgetStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UPrimalRichTextBlock.WidgetStyle"); }
	void SetString(const FString& InString) { NativeCall<void, const FString&>(this, "UPrimalRichTextBlock.SetString(FString&)", InString); }
	void PostLoad() { NativeCall<void>(this, "UPrimalRichTextBlock.PostLoad()"); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPrimalRichTextBlock.SynchronizeProperties()"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UPrimalRichTextBlock.ReleaseSlateResources(bool)", bReleaseChildren); }
	void ParseText(FText& InText) { NativeCall<void, FText&>(this, "UPrimalRichTextBlock.ParseText(FText&)", InText); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimalRichTextBlock.BeginDestroy()"); }
};
