#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UTamingListEntryWidget : public UBaseSelectableButtonWidget
{
public:
	UTamingListEntryWidget() = delete;
	~UTamingListEntryWidget() = delete;
	UTamingListEntryWidget(const UTamingListEntryWidget&) = delete;
	UTamingListEntryWidget& operator=(const UTamingListEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTamingListEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTamingListEntryWidget"); }

	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UTamingListEntryWidget.ItemLabelName"); }
	FLinearColor& NameLabelColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.NameLabelColor_Default"); }
	FLinearColor& NameLabelColor_FemaleField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.NameLabelColor_Female"); }
	FLinearColor& NameLabelColor_MaleField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.NameLabelColor_Male"); }
	FLinearColor& BackgroundColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.BackgroundColor_Default"); }
	FLinearColor& BackgroundColor_TrackedField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.BackgroundColor_Tracked"); }
	FLinearColor& BackgroundColor_CompletedField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.BackgroundColor_Completed"); }
	FLinearColor& SeparatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.SeparatorColor"); }
	UTexture2D*& DistanceIconTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UTamingListEntryWidget.DistanceIconTexture"); }
	UTexture2D*& CompletedIconTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UTamingListEntryWidget.CompletedIconTexture"); }
	UTexture2D*& TooltipBackgroundTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UTamingListEntryWidget.TooltipBackgroundTexture"); }
	UTexture2D*& GenderIcon_MaleField() { return *GetNativePointerField<UTexture2D**>(this, "UTamingListEntryWidget.GenderIcon_Male"); }
	UTexture2D*& GenderIcon_FemaleField() { return *GetNativePointerField<UTexture2D**>(this, "UTamingListEntryWidget.GenderIcon_Female"); }
	double& LastSyncTimeField() { return *GetNativePointerField<double*>(this, "UTamingListEntryWidget.LastSyncTime"); }
	bool& bIsTamedField() { return *GetNativePointerField<bool*>(this, "UTamingListEntryWidget.bIsTamed"); }
	int& ID1Field() { return *GetNativePointerField<int*>(this, "UTamingListEntryWidget.ID1"); }
	int& ID2Field() { return *GetNativePointerField<int*>(this, "UTamingListEntryWidget.ID2"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UTamingListEntryWidget.Button"); }
	UPanelWidget*& DistancePanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTamingListEntryWidget.DistancePanel"); }
	UPanelWidget*& LeftColumnField() { return *GetNativePointerField<UPanelWidget**>(this, "UTamingListEntryWidget.LeftColumn"); }
	UPanelWidget*& RightColumnField() { return *GetNativePointerField<UPanelWidget**>(this, "UTamingListEntryWidget.RightColumn"); }
	UPanelWidget*& TorporPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTamingListEntryWidget.TorporPanel"); }
	UBorder*& SeparatorPanelField() { return *GetNativePointerField<UBorder**>(this, "UTamingListEntryWidget.SeparatorPanel"); }
	UBorder*& PortraitPanelField() { return *GetNativePointerField<UBorder**>(this, "UTamingListEntryWidget.PortraitPanel"); }
	UImage*& GenderIconImageField() { return *GetNativePointerField<UImage**>(this, "UTamingListEntryWidget.GenderIconImage"); }
	UImage*& DinoIconImageField() { return *GetNativePointerField<UImage**>(this, "UTamingListEntryWidget.DinoIconImage"); }
	UTextBlock*& DistanceLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.DistanceLabel"); }
	UTextBlock*& NameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.NameLabel"); }
	UTextBlock*& TamingLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.TamingLabel"); }
	UTextBlock*& EffectivenessLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.EffectivenessLabel"); }
	UTextBlock*& TorporLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.TorporLabel"); }
	UTextBlock*& HealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.HealthLabel"); }
	UTextBlock*& FoodLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTamingListEntryWidget.FoodLabel"); }
	UProgressBar*& TamingBarField() { return *GetNativePointerField<UProgressBar**>(this, "UTamingListEntryWidget.TamingBar"); }
	UProgressBar*& TorporBarField() { return *GetNativePointerField<UProgressBar**>(this, "UTamingListEntryWidget.TorporBar"); }
	UProgressBarWidget*& FoodBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UTamingListEntryWidget.FoodBar"); }
	UProgressBarWidget*& HealthBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UTamingListEntryWidget.HealthBar"); }
	UBorder*& OpacityBorderField() { return *GetNativePointerField<UBorder**>(this, "UTamingListEntryWidget.OpacityBorder"); }
	FString* GetNameString(FString* result) { return NativeCall<FString*, FString*>(this, "UTamingListEntryWidget.GetNameString()", result); }
	void SyncInfo(UE::Math::TVector<double>* CurrentPlayerLocation, const FTamingDinoInfo& InInfo) { if (!CurrentPlayerLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, const FTamingDinoInfo &>(this, "UTamingListEntryWidget.SyncInfo(UE::Math::TVector<double>,FTamingDinoInfo&)", *CurrentPlayerLocation, InInfo); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UTamingListEntryWidget.GetButton()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTamingListEntryWidget.SetSelected(bool)", bSelected); }
	void SetIsEnabled(bool bWithEnabled) { NativeCall<void, bool>(this, "UTamingListEntryWidget.SetIsEnabled(bool)", bWithEnabled); }
	void InitializeWithClick() { NativeCall<void>(this, "UTamingListEntryWidget.InitializeWithClick()"); }
	bool IsSelected() { return NativeCall<bool>(this, "UTamingListEntryWidget.IsSelected()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTamingListEntryWidget.ClickedButton(UWidget*)", clickedWidget); }
};
