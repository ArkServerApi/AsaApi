#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UPrimalDinoToolTipWidget : public UToolTipWidget
{
public:
	UPrimalDinoToolTipWidget() = delete;
	~UPrimalDinoToolTipWidget() = delete;
	UPrimalDinoToolTipWidget(const UPrimalDinoToolTipWidget&) = delete;
	UPrimalDinoToolTipWidget& operator=(const UPrimalDinoToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoToolTipWidget"); }

	FString& DinoNameLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.DinoNameLabelName"); }
	FString& TamedLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.TamedLabelName"); }
	FString& GenderLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.GenderLabelName"); }
	FString& InfoLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.InfoLabelName"); }
	FString& InfoLabel2NameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.InfoLabel2Name"); }
	FString& DinoIconImageNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.DinoIconImageName"); }
	FName& DinoUnconsciousPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DinoUnconsciousPanelName"); }
	FName& DinoTamingPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DinoTamingPanelName"); }
	FName& TorpidityProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TorpidityProgressBarName"); }
	FName& CustomProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.CustomProgressBarName"); }
	FName& TamingProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TamingProgressBarName"); }
	FName& HealthBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.HealthBarName"); }
	FName& StaminaBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.StaminaBarName"); }
	FName& FoodBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.FoodBarName"); }
	FName& WeightBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.WeightBarName"); }
	FName& XPBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.XPBarName"); }
	FName& TorpidityBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TorpidityBarName"); }
	FName& OxygenBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.OxygenBarName"); }
	FName& DamageBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DamageBarName"); }
	FName& SpeedBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.SpeedBarName"); }
	bool& bShowExtendedInfoField() { return *GetNativePointerField<bool*>(this, "UPrimalDinoToolTipWidget.bShowExtendedInfo"); }
	FLinearColor& FemaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalDinoToolTipWidget.FemaleColor"); }
	FLinearColor& MaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalDinoToolTipWidget.MaleColor"); }
	FLinearColor& NoGenderColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalDinoToolTipWidget.NoGenderColor"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& MyDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "UPrimalDinoToolTipWidget.MyDino"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& TextInfoArrayField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalDinoToolTipWidget.TextInfoArray"); }
	UTextBlock*& DinoNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalDinoToolTipWidget.DinoNameLabel"); }
	UTextBlock*& TamedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalDinoToolTipWidget.TamedLabel"); }
	UTextBlock*& GenderLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalDinoToolTipWidget.GenderLabel"); }
	UTextBlock*& TamingDescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalDinoToolTipWidget.TamingDescriptionLabel"); }
	UTextBlock*& UnconsciousDescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalDinoToolTipWidget.UnconsciousDescriptionLabel"); }
	UPrimalRichTextBlock*& InfoLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalDinoToolTipWidget.InfoLabel"); }
	UPrimalRichTextBlock*& InfoLabel2Field() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalDinoToolTipWidget.InfoLabel2"); }
	UPrimalRichTextBlock*& MatingTimeLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalDinoToolTipWidget.MatingTimeLabel"); }
	UPrimalRichTextBlock*& RepairRequerimentLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalDinoToolTipWidget.RepairRequerimentLabel"); }
	UPrimalRichTextBlock*& GeneTraitsLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalDinoToolTipWidget.GeneTraitsLabel"); }
	UPanelWidget*& DinoUnconsciousPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalDinoToolTipWidget.DinoUnconsciousPanel"); }
	UPanelWidget*& DinoTamingPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalDinoToolTipWidget.DinoTamingPanel"); }
	UImage*& DinoIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalDinoToolTipWidget.DinoIconImage"); }
	UImage*& DinoFoodTypeImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalDinoToolTipWidget.DinoFoodTypeImage"); }
	UImage*& MaxInventoryImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalDinoToolTipWidget.MaxInventoryImage"); }
	UImage*& MutagenIconField() { return *GetNativePointerField<UImage**>(this, "UPrimalDinoToolTipWidget.MutagenIcon"); }
	UProgressBar*& TorpidityProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalDinoToolTipWidget.TorpidityProgressBar"); }
	UProgressBar*& TamingProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalDinoToolTipWidget.TamingProgressBar"); }
	UProgressBarWidget*& HealthBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.HealthBar"); }
	UProgressBarWidget*& StaminaBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.StaminaBar"); }
	UProgressBarWidget*& FoodBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.FoodBar"); }
	UProgressBarWidget*& WeightBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.WeightBar"); }
	UProgressBarWidget*& XPBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.XPBar"); }
	UProgressBarWidget*& TorpidityBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.TorpidityBar"); }
	UProgressBarWidget*& OxygenBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.OxygenBar"); }
	UProgressBarWidget*& DamageBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.DamageBar"); }
	UProgressBarWidget*& SpeedBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPrimalDinoToolTipWidget.SpeedBar"); }
	UWidget*& RepairBoxField() { return *GetNativePointerField<UWidget**>(this, "UPrimalDinoToolTipWidget.RepairBox"); }
	UMultiUseActionWidget*& MultiUseActionWidget_UIField() { return *GetNativePointerField<UMultiUseActionWidget**>(this, "UPrimalDinoToolTipWidget.MultiUseActionWidget_UI"); }
	UWidgetSwitcher*& GenderSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UPrimalDinoToolTipWidget.GenderSwitcher"); }
	FString& FoodBarDefaultDisplayStringField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.FoodBarDefaultDisplayString"); }
	UPanelWidget*& InfoPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalDinoToolTipWidget.InfoPanel"); }
	UTexture2D*& FoodBarDefaultBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalDinoToolTipWidget.FoodBarDefaultBackground"); }
	UTexture2D*& FoodBarDefaultForegroundField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalDinoToolTipWidget.FoodBarDefaultForeground"); }
	void RefreshDinoState() { NativeCall<void>(this, "UPrimalDinoToolTipWidget.RefreshDinoState()"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalDinoToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalDinoToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
	void RefreshDinoNameText() { NativeCall<void>(this, "UPrimalDinoToolTipWidget.RefreshDinoNameText()"); }
	void SetupRepairDino() { NativeCall<void>(this, "UPrimalDinoToolTipWidget.SetupRepairDino()"); }
};
