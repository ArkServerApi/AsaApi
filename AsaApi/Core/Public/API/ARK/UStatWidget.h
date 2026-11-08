#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UStatWidget : public UPrimalUserWidget
{
public:
	UStatWidget() = delete;
	~UStatWidget() = delete;
	UStatWidget(const UStatWidget&) = delete;
	UStatWidget& operator=(const UStatWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStatWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStatWidget"); }

	FText& StatNameField() { return *GetNativePointerField<FText*>(this, "UStatWidget.StatName"); }
	UTexture2D*& StatIconField() { return *GetNativePointerField<UTexture2D**>(this, "UStatWidget.StatIcon"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UStatWidget.InventoryUI"); }
	TWeakObjectPtr<UPrimalCharacterStatusComponent, FWeakObjectPtr>& LinkedCharacterStatusField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalCharacterStatusComponent, FWeakObjectPtr>*>(this, "UStatWidget.LinkedCharacterStatus"); }
	TEnumAsByte<EPrimalCharacterStatusValue::Type>& LinkedCharacterStatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<EPrimalCharacterStatusValue::Type>*>(this, "UStatWidget.LinkedCharacterStatusValueType"); }
	FName& StatTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatTextBlockName"); }
	FName& StatValueBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatValueBlockName"); }
	FName& StatImageNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatImageName"); }
	FName& StatBarNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatBarName"); }
	FName& StatButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatWidget.StatButtonName"); }
	float& OverrideStatBarPercentField() { return *GetNativePointerField<float*>(this, "UStatWidget.OverrideStatBarPercent"); }
	FString& OverrideStatValueStringField() { return *GetNativePointerField<FString*>(this, "UStatWidget.OverrideStatValueString"); }
	UProgressBar*& StatBarField() { return *GetNativePointerField<UProgressBar**>(this, "UStatWidget.StatBar"); }
	UTextBlock*& StatTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatWidget.StatTextBlock"); }
	UTextBlock*& StatValueBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatWidget.StatValueBlock"); }
	UImage*& StatImageField() { return *GetNativePointerField<UImage**>(this, "UStatWidget.StatImage"); }
	UButton*& StatUpgradeButtonField() { return *GetNativePointerField<UButton**>(this, "UStatWidget.StatUpgradeButton"); }
	UWidgetSwitcher*& PulsatingSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UStatWidget.PulsatingSwitcher"); }
	bool& OverrideButtonSoundsField() { return *GetNativePointerField<bool*>(this, "UStatWidget.OverrideButtonSounds"); }
	UButton* GetUpgradeButton() { return NativeCall<UButton*>(this, "UStatWidget.GetUpgradeButton()"); }
	void Refresh(UWidget* CurrentHighlightedWidget) { NativeCall<void, UWidget*>(this, "UStatWidget.Refresh(UWidget*)", CurrentHighlightedWidget); }
	void MuteButtonSounds(bool bMute) { NativeCall<void, bool>(this, "UStatWidget.MuteButtonSounds(bool)", bMute); }
	UProgressBar* GetStatBar() { return NativeCall<UProgressBar*>(this, "UStatWidget.GetStatBar()"); }
	void SynchronizeProperties() { NativeCall<void>(this, "UStatWidget.SynchronizeProperties()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UStatWidget.ClickedButton(UWidget*)", clickedWidget); }
	UTextBlock* GetStatValueBlock() { return NativeCall<UTextBlock*>(this, "UStatWidget.GetStatValueBlock()"); }
};
