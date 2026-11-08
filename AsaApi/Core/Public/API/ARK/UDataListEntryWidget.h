#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UDataListEntryWidget : public UPrimalUserWidget
{
public:
	UDataListEntryWidget() = delete;
	~UDataListEntryWidget() = delete;
	UDataListEntryWidget(const UDataListEntryWidget&) = delete;
	UDataListEntryWidget& operator=(const UDataListEntryWidget&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryWidget"); }

	FName& DataListButtonNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget.DataListButtonName"); }
	int& ExistingButtonExplicitIndexTypeField() { return *GetNativePointerField<int*>(this, "UDataListEntryWidget.ExistingButtonExplicitIndexType"); }
	FName& TraditionalButtonNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget.TraditionalButtonName"); }
	FName& TraditionalLabelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget.TraditionalLabelName"); }
	UTexture2D*& ButtonBackgroundOverrideField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryWidget.ButtonBackgroundOverride"); }
	FString& DisplayStringOverrideField() { return *GetNativePointerField<FString*>(this, "UDataListEntryWidget.DisplayStringOverride"); }
	int& PrimalItemButton_UseItemCraftQueueIndexField() { return *GetNativePointerField<int*>(this, "UDataListEntryWidget.PrimalItemButton_UseItemCraftQueueIndex"); }
	UE::Math::TVector2<double>& OverrideButtonDisplayStringOffsetValueField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UDataListEntryWidget.OverrideButtonDisplayStringOffsetValue"); }
	float& OverrideButtonDisplayStringFontSizeValueField() { return *GetNativePointerField<float*>(this, "UDataListEntryWidget.OverrideButtonDisplayStringFontSizeValue"); }
	UE::Math::TVector2<double>& OverrideButtonDisplayStringScaleValueField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UDataListEntryWidget.OverrideButtonDisplayStringScaleValue"); }
	UTexture2D*& OverrideButtonSelectedIconField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryWidget.OverrideButtonSelectedIcon"); }
	bool& bBoundToDraggingField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget.bBoundToDragging"); }
	bool& CanBeHighlightedWhenEmptyField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget.CanBeHighlightedWhenEmpty"); }
	UDataListEntryButton*& MyDataListButtonField() { return *GetNativePointerField<UDataListEntryButton**>(this, "UDataListEntryWidget.MyDataListButton"); }
	UButton*& TraditionalButtonField() { return *GetNativePointerField<UButton**>(this, "UDataListEntryWidget.TraditionalButton"); }
	UTextBlock*& TraditionalLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryWidget.TraditionalLabel"); }
	TWeakObjectPtr<UDataListPanel, FWeakObjectPtr>& MyDataListPanelField() { return *GetNativePointerField<TWeakObjectPtr<UDataListPanel, FWeakObjectPtr>*>(this, "UDataListEntryWidget.MyDataListPanel"); }
	TWeakObjectPtr<UObject, FWeakObjectPtr>& MyDataListEntryObjectField() { return *GetNativePointerField<TWeakObjectPtr<UObject, FWeakObjectPtr>*>(this, "UDataListEntryWidget.MyDataListEntryObject"); }
	TWeakObjectPtr<UObject, FWeakObjectPtr>& TooltipDataListEntryObjectField() { return *GetNativePointerField<TWeakObjectPtr<UObject, FWeakObjectPtr>*>(this, "UDataListEntryWidget.TooltipDataListEntryObject"); }
	int& EntryIndexField() { return *GetNativePointerField<int*>(this, "UDataListEntryWidget.EntryIndex"); }
	bool& bIsFavouriteField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget.bIsFavourite"); }
	TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>& ViewerInventoryComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>*>(this, "UDataListEntryWidget.ViewerInventoryComponent"); }
	BitFieldValue<bool, unsigned __int32> PrimalItemButton_bUseRemoteCraftQueue() { return { this, "UDataListEntryWidget.PrimalItemButton_bUseRemoteCraftQueue"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonShowDisplayStringWhenHasItem() { return { this, "UDataListEntryWidget.bOverrideButtonShowDisplayStringWhenHasItem"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonShowDisplayStringWhenHasItemValue() { return { this, "UDataListEntryWidget.bOverrideButtonShowDisplayStringWhenHasItemValue"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringCenterX() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringCenterX"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringCenterXValue() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringCenterXValue"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringCenterY() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringCenterY"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringCenterYValue() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringCenterYValue"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringOffset() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringOffset"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringScale() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringScale"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideButtonDisplayStringFontSize() { return { this, "UDataListEntryWidget.bOverrideButtonDisplayStringFontSize"}; }
	BitFieldValue<bool, unsigned __int32> bUseEngramToolTips() { return { this, "UDataListEntryWidget.bUseEngramToolTips"}; }
	AShooterPlayerController* GetPC() { return NativeCall<AShooterPlayerController*>(this, "UDataListEntryWidget.GetPC()"); }
	UObject* GetDataListObjectForTooltip() { return NativeCall<UObject*>(this, "UDataListEntryWidget.GetDataListObjectForTooltip()"); }
	void InitializeMe(UDataListPanel* forPanel, IDataListEntryInterface* MyDataListEntry, int forIndex, UPrimalUI* ForUI) { NativeCall<void, UDataListPanel*, IDataListEntryInterface*, int, UPrimalUI*>(this, "UDataListEntryWidget.InitializeMe(UDataListPanel*,IDataListEntryInterface*,int,UPrimalUI*)", forPanel, MyDataListEntry, forIndex, ForUI); }
	void SelectedButton(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UDataListEntryWidget.SelectedButton(UDataListEntryButton*)", theButton); }
	IDataListEntryInterface* GetMyDataListEntryInterface() { return NativeCall<IDataListEntryInterface*>(this, "UDataListEntryWidget.GetMyDataListEntryInterface()"); }
	void SelectedButtonManually(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UDataListEntryWidget.SelectedButtonManually(UDataListEntryButton*)", theButton); }
	int GetMyDataListPanelType() { return NativeCall<int>(this, "UDataListEntryWidget.GetMyDataListPanelType()"); }
	bool OnMimickDroppedWidget(UWidget* DroppedWidget, UWidget* DroppedOnWidget) { return NativeCall<bool, UWidget*, UWidget*>(this, "UDataListEntryWidget.OnMimickDroppedWidget(UWidget*,UWidget*)", DroppedWidget, DroppedOnWidget); }
	void BPPostInitialize(UObject* MyDataListEntry) { NativeCall<void, UObject*>(this, "UDataListEntryWidget.BPPostInitialize(UObject*)", MyDataListEntry); }
	void InitializeMeDefaults() { NativeCall<void>(this, "UDataListEntryWidget.InitializeMeDefaults()"); }
	void OnDraggedClickedEventObject(UWidget* draggeddWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryWidget.OnDraggedClickedEventObject(UWidget*)", draggeddWidget); }
	bool OnDropWidgetEx(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent) { return NativeCall<bool, const FGeometry&, const FDragDropEvent&>(this, "UDataListEntryWidget.OnDropWidgetEx(FGeometry&,FDragDropEvent&)", InGeometry, InDragDropEvent); }
	void DoubleClickedButton() { NativeCall<void>(this, "UDataListEntryWidget.DoubleClickedButton()"); }
	UPrimalUI* GetMyScene() { return NativeCall<UPrimalUI*>(this, "UDataListEntryWidget.GetMyScene()"); }
	UDataListEntryButton* GetDataListButton() { return NativeCall<UDataListEntryButton*>(this, "UDataListEntryWidget.GetDataListButton()"); }
	bool DoesDataListPanelUseListWidgets() { return NativeCall<bool>(this, "UDataListEntryWidget.DoesDataListPanelUseListWidgets()"); }
	void BPInitializeMe(UDataListPanel* forPanel, UObject* MyDataListEntry, int forIndex, UPrimalUI* ForUI) { NativeCall<void, UDataListPanel*, UObject*, int, UPrimalUI*>(this, "UDataListEntryWidget.BPInitializeMe(UDataListPanel*,UObject*,int,UPrimalUI*)", forPanel, MyDataListEntry, forIndex, ForUI); }
	bool UseCustomToolTip(bool bWantToDisplayTooltip) { return NativeCall<bool, bool>(this, "UDataListEntryWidget.UseCustomToolTip(bool)", bWantToDisplayTooltip); }
	UPrimalInventoryComponent* GetViewerInventoryComponent() { return NativeCall<UPrimalInventoryComponent*>(this, "UDataListEntryWidget.GetViewerInventoryComponent()"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UDataListEntryWidget.ReleaseSlateResources(bool)", bReleaseChildren); }
	void SetEnabled(bool bEnable) { NativeCall<void, bool>(this, "UDataListEntryWidget.SetEnabled(bool)", bEnable); }
	bool AllowDragging() { return NativeCall<bool>(this, "UDataListEntryWidget.AllowDragging()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryWidget"); }
	void GetShowExtraCanvasBar(bool& IsVisible, float& Percent, FLinearColor& BarColor) { NativeCall<void, bool&, float&, FLinearColor&>(this, "UDataListEntryWidget.GetShowExtraCanvasBar(bool&,float&,FLinearColor&)", IsVisible, Percent, BarColor); }
};
