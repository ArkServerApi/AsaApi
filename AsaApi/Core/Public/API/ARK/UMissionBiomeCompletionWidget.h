#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UMissionBiomeCompletionWidget : public UBaseSelectableButtonWidget
{
public:
	UMissionBiomeCompletionWidget() = delete;
	~UMissionBiomeCompletionWidget() = delete;
	UMissionBiomeCompletionWidget(const UMissionBiomeCompletionWidget&) = delete;
	UMissionBiomeCompletionWidget& operator=(const UMissionBiomeCompletionWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMissionBiomeCompletionWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMissionBiomeCompletionWidget"); }

	UTexture2D*& ButtonIconField() { return *GetNativePointerField<UTexture2D**>(this, "UMissionBiomeCompletionWidget.ButtonIcon"); }
	FText& SectionNameField() { return *GetNativePointerField<FText*>(this, "UMissionBiomeCompletionWidget.SectionName"); }
	FLinearColor& AllMissionsCompletedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.AllMissionsCompletedColor"); }
	FLinearColor& SectionNameTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.SectionNameTextColor"); }
	FLinearColor& CompletionPercentLabelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.CompletionPercentLabelTextColor"); }
	FLinearColor& NumCompletedValueTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.NumCompletedValueTextColor"); }
	FLinearColor& NumCompletedLabelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.NumCompletedLabelTextColor"); }
	FLinearColor& CompletionProgressBarForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.CompletionProgressBarForegroundColor"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UMissionBiomeCompletionWidget.Button"); }
	UImage*& IconImageField() { return *GetNativePointerField<UImage**>(this, "UMissionBiomeCompletionWidget.IconImage"); }
	UTextBlock*& SectionNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionBiomeCompletionWidget.SectionNameLabel"); }
	UTextBlock*& CompletionPercentLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionBiomeCompletionWidget.CompletionPercentLabel"); }
	UTextBlock*& NumCompletedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionBiomeCompletionWidget.NumCompletedLabel"); }
	UTextBlock*& NumCompletedValueField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionBiomeCompletionWidget.NumCompletedValue"); }
	UProgressBar*& CompletionProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UMissionBiomeCompletionWidget.CompletionProgressBar"); }
	UWidget*& CompletedIconBoxField() { return *GetNativePointerField<UWidget**>(this, "UMissionBiomeCompletionWidget.CompletedIconBox"); }
	bool IsSelected() { return NativeCall<bool>(this, "UMissionBiomeCompletionWidget.IsSelected()"); }
	void SynchronizeProperties() { NativeCall<void>(this, "UMissionBiomeCompletionWidget.SynchronizeProperties()"); }
	void SetNumCompleted(int NumCompleted, int TotalNum) { NativeCall<void, int, int>(this, "UMissionBiomeCompletionWidget.SetNumCompleted(int,int)", NumCompleted, TotalNum); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UMissionBiomeCompletionWidget.GetButton()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UMissionBiomeCompletionWidget.SetSelected(bool)", bSelected); }
	void SetIsEnabled(bool bWithEnabled) { NativeCall<void, bool>(this, "UMissionBiomeCompletionWidget.SetIsEnabled(bool)", bWithEnabled); }
};
