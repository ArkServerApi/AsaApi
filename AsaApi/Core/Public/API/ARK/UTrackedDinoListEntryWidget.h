#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UTrackedDinoListEntryWidget : public UBaseSelectableButtonWidget
{
public:
	UTrackedDinoListEntryWidget() = delete;
	~UTrackedDinoListEntryWidget() = delete;
	UTrackedDinoListEntryWidget(const UTrackedDinoListEntryWidget&) = delete;
	UTrackedDinoListEntryWidget& operator=(const UTrackedDinoListEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTrackedDinoListEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTrackedDinoListEntryWidget"); }

	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UTrackedDinoListEntryWidget.ItemLabelName"); }
	FLinearColor& NameLabelColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.NameLabelColor_Default"); }
	FLinearColor& NameLabelColor_FemaleField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.NameLabelColor_Female"); }
	FLinearColor& NameLabelColor_MaleField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.NameLabelColor_Male"); }
	FLinearColor& BackgroundColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.BackgroundColor_Default"); }
	FLinearColor& BackgroundColor_TrackedField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.BackgroundColor_Tracked"); }
	FLinearColor& BackgroundColor_CompletedField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.BackgroundColor_Completed"); }
	FLinearColor& SeparatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTrackedDinoListEntryWidget.SeparatorColor"); }
	UTexture2D*& DistanceIconTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UTrackedDinoListEntryWidget.DistanceIconTexture"); }
	UTexture2D*& CompletedIconTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UTrackedDinoListEntryWidget.CompletedIconTexture"); }
	UTexture2D*& TooltipBackgroundTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UTrackedDinoListEntryWidget.TooltipBackgroundTexture"); }
	UTexture2D*& GenderIcon_MaleField() { return *GetNativePointerField<UTexture2D**>(this, "UTrackedDinoListEntryWidget.GenderIcon_Male"); }
	UTexture2D*& GenderIcon_FemaleField() { return *GetNativePointerField<UTexture2D**>(this, "UTrackedDinoListEntryWidget.GenderIcon_Female"); }
	UTexture2D*& PlayerIconField() { return *GetNativePointerField<UTexture2D**>(this, "UTrackedDinoListEntryWidget.PlayerIcon"); }
	double& LastSyncTimeField() { return *GetNativePointerField<double*>(this, "UTrackedDinoListEntryWidget.LastSyncTime"); }
	bool& bIsTamedField() { return *GetNativePointerField<bool*>(this, "UTrackedDinoListEntryWidget.bIsTamed"); }
	bool& bIsPlayerField() { return *GetNativePointerField<bool*>(this, "UTrackedDinoListEntryWidget.bIsPlayer"); }
	bool& bIsTrackedWaypointField() { return *GetNativePointerField<bool*>(this, "UTrackedDinoListEntryWidget.bIsTrackedWaypoint"); }
	bool& HasPOIinworldField() { return *GetNativePointerField<bool*>(this, "UTrackedDinoListEntryWidget.HasPOIinworld"); }
	int& ID1Field() { return *GetNativePointerField<int*>(this, "UTrackedDinoListEntryWidget.ID1"); }
	int& ID2Field() { return *GetNativePointerField<int*>(this, "UTrackedDinoListEntryWidget.ID2"); }
	int& IndexInScrollboxField() { return *GetNativePointerField<int*>(this, "UTrackedDinoListEntryWidget.IndexInScrollbox"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UTrackedDinoListEntryWidget.Button"); }
	UButton*& FavoriteButtonField() { return *GetNativePointerField<UButton**>(this, "UTrackedDinoListEntryWidget.FavoriteButton"); }
	UButton*& FavoriteButton_SelectedField() { return *GetNativePointerField<UButton**>(this, "UTrackedDinoListEntryWidget.FavoriteButton_Selected"); }
	UButton*& POIOptButtonField() { return *GetNativePointerField<UButton**>(this, "UTrackedDinoListEntryWidget.POIOptButton"); }
	UButton*& POIOptButton_SelectedField() { return *GetNativePointerField<UButton**>(this, "UTrackedDinoListEntryWidget.POIOptButton_Selected"); }
	UPanelWidget*& DistancePanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTrackedDinoListEntryWidget.DistancePanel"); }
	UPanelWidget*& LeftColumnField() { return *GetNativePointerField<UPanelWidget**>(this, "UTrackedDinoListEntryWidget.LeftColumn"); }
	UPanelWidget*& RightColumnField() { return *GetNativePointerField<UPanelWidget**>(this, "UTrackedDinoListEntryWidget.RightColumn"); }
	UPanelWidget*& FirstBarPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTrackedDinoListEntryWidget.FirstBarPanel"); }
	UPanelWidget*& SecondBarPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTrackedDinoListEntryWidget.SecondBarPanel"); }
	UBorder*& SeparatorPanelField() { return *GetNativePointerField<UBorder**>(this, "UTrackedDinoListEntryWidget.SeparatorPanel"); }
	UBorder*& PortraitPanelField() { return *GetNativePointerField<UBorder**>(this, "UTrackedDinoListEntryWidget.PortraitPanel"); }
	UImage*& GenderIconImageField() { return *GetNativePointerField<UImage**>(this, "UTrackedDinoListEntryWidget.GenderIconImage"); }
	UImage*& DinoIconImageField() { return *GetNativePointerField<UImage**>(this, "UTrackedDinoListEntryWidget.DinoIconImage"); }
	UImage*& TrackedIconField() { return *GetNativePointerField<UImage**>(this, "UTrackedDinoListEntryWidget.TrackedIcon"); }
	UTextBlock*& DistanceLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.DistanceLabel"); }
	UTextBlock*& NameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.NameLabel"); }
	UTextBlock*& LevelLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.LevelLabel"); }
	UTextBlock*& HealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.HealthLabel"); }
	UTextBlock*& FoodLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.FoodLabel"); }
	UTextBlock*& SecondBarLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.SecondBarLabel"); }
	UTextBlock*& TamingImprintPercentField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.TamingImprintPercent"); }
	UTextBlock*& FirstBarLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.FirstBarLabel"); }
	UTextBlock*& UnconsciousWantsCarePercentField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.UnconsciousWantsCarePercent"); }
	UTextBlock*& SecondHeaderLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.SecondHeaderLabel"); }
	UTextBlock*& MaturationTamingEffectivenessRightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.MaturationTamingEffectivenessRightLabel"); }
	UTextBlock*& BottomLeftLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.BottomLeftLabel"); }
	UTextBlock*& BottomRightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.BottomRightLabel"); }
	UTextBlock*& InfoUpdatePausedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTrackedDinoListEntryWidget.InfoUpdatePausedLabel"); }
	UProgressBar*& SecondBarField() { return *GetNativePointerField<UProgressBar**>(this, "UTrackedDinoListEntryWidget.SecondBar"); }
	UProgressBar*& FirstBarField() { return *GetNativePointerField<UProgressBar**>(this, "UTrackedDinoListEntryWidget.FirstBar"); }
	UProgressBar*& FoodBarHorizontalField() { return *GetNativePointerField<UProgressBar**>(this, "UTrackedDinoListEntryWidget.FoodBarHorizontal"); }
	UProgressBar*& HealthBarHorizontalField() { return *GetNativePointerField<UProgressBar**>(this, "UTrackedDinoListEntryWidget.HealthBarHorizontal"); }
	UBorder*& OpacityBorderField() { return *GetNativePointerField<UBorder**>(this, "UTrackedDinoListEntryWidget.OpacityBorder"); }
	UWidget*& SizeBoxFoodField() { return *GetNativePointerField<UWidget**>(this, "UTrackedDinoListEntryWidget.SizeBoxFood"); }
	FButtonStyle& DefaultButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UTrackedDinoListEntryWidget.DefaultButtonStyle"); }
	FButtonStyle& TrackedButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UTrackedDinoListEntryWidget.TrackedButtonStyle"); }
	int& WidgetIndexField() { return *GetNativePointerField<int*>(this, "UTrackedDinoListEntryWidget.WidgetIndex"); }
	FTimerHandle& RecentlyUpdatedInfoTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UTrackedDinoListEntryWidget.RecentlyUpdatedInfoTimerHandle"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTrackedDinoListEntryWidget.SetSelected(bool)", bSelected); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UTrackedDinoListEntryWidget.GetButton()"); }
	void OnPOIOptButton_SelectedPressed() { NativeCall<void>(this, "UTrackedDinoListEntryWidget.OnPOIOptButton_SelectedPressed()"); }
	void RecentlyUpdatedInfoTimerEnd() { NativeCall<void>(this, "UTrackedDinoListEntryWidget.RecentlyUpdatedInfoTimerEnd()"); }
	void OnFavoriteButton_SelectedPressed() { NativeCall<void>(this, "UTrackedDinoListEntryWidget.OnFavoriteButton_SelectedPressed()"); }
	void InitializeWithClick() { NativeCall<void>(this, "UTrackedDinoListEntryWidget.InitializeWithClick()"); }
	void SetIsEnabled(bool bWithEnabled) { NativeCall<void, bool>(this, "UTrackedDinoListEntryWidget.SetIsEnabled(bool)", bWithEnabled); }
	void OnPOIOptButtonPressed() { NativeCall<void>(this, "UTrackedDinoListEntryWidget.OnPOIOptButtonPressed()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTrackedDinoListEntryWidget.ClickedButton(UWidget*)", clickedWidget); }
	void BPOnFavoriteButtonPressed(bool Favorited, bool& Handled) { NativeCall<void, bool, bool&>(this, "UTrackedDinoListEntryWidget.BPOnFavoriteButtonPressed(bool,bool&)", Favorited, Handled); }
	void OnFavoriteButtonPressed() { NativeCall<void>(this, "UTrackedDinoListEntryWidget.OnFavoriteButtonPressed()"); }
	bool IsSelected() { return NativeCall<bool>(this, "UTrackedDinoListEntryWidget.IsSelected()"); }
};
