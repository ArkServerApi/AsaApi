#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UPlayerHUDUI : public UPrimalUI
{
public:
	UPlayerHUDUI() = delete;
	~UPlayerHUDUI() = delete;
	UPlayerHUDUI(const UPlayerHUDUI&) = delete;
	UPlayerHUDUI& operator=(const UPlayerHUDUI&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlayerHUDUI"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlayerHUDUI"); }

	FString& SlotItemsDataListNameField() { return *GetNativePointerField<FString*>(this, "UPlayerHUDUI.SlotItemsDataListName"); }
	FName& PrimaryStatusBarsWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.PrimaryStatusBarsWidgetName"); }
	FName& SecondaryStatusBarsWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.SecondaryStatusBarsWidgetName"); }
	FName& CraftQueueItemButtonNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.CraftQueueItemButtonName"); }
	FName& ExtraProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.ExtraProgressBarName"); }
	FString& SlotItemsDataListParentPanelNameField() { return *GetNativePointerField<FString*>(this, "UPlayerHUDUI.SlotItemsDataListParentPanelName"); }
	FName& CompassBarWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.CompassBarWidgetName"); }
	FName& ElementBarWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.ElementBarWidgetName"); }
	TArray<UPrimalRichTextBlock*, TSizedDefaultAllocator<32> >& RichTextBlocksField() { return *GetNativePointerField<TArray<UPrimalRichTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPlayerHUDUI.RichTextBlocks"); }
	bool& UsingFastInventoryField() { return *GetNativePointerField<bool*>(this, "UPlayerHUDUI.UsingFastInventory"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UseItemKeybindingsArrayField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPlayerHUDUI.UseItemKeybindingsArray"); }
	UDataListPanel*& SlotItemsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UPlayerHUDUI.SlotItemsDataList"); }
	UDataListEntryWidget*& CraftQueueItemButtonField() { return *GetNativePointerField<UDataListEntryWidget**>(this, "UPlayerHUDUI.CraftQueueItemButton"); }
	UTextBlock*& CurrentTimeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.CurrentTimeLabel"); }
	UTextBlock*& CurrentDayLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.CurrentDayLabel"); }
	UTextBlock*& CurrentTemperatureLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.CurrentTemperatureLabel"); }
	UTextBlock*& PlayerNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.PlayerNameLabel"); }
	UTextBlock*& CurrentUploadTimerLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.CurrentUploadTimerLabel"); }
	UTextBlock*& CurrentLocationLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.CurrentLocationLabel"); }
	UTextBlock*& OrderingGroupLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.OrderingGroupLabel"); }
	UTextBlock*& MaxStructuresInRangeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.MaxStructuresInRangeLabel"); }
	UTextBlock*& MaxStructuresInSmallRangeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.MaxStructuresInSmallRangeLabel"); }
	UTextBlock*& StructureDamageMultLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPlayerHUDUI.StructureDamageMultLabel"); }
	UWidget*& SlotItemPanelField() { return *GetNativePointerField<UWidget**>(this, "UPlayerHUDUI.SlotItemPanel"); }
	UWidget*& Alt_ModifierRefField() { return *GetNativePointerField<UWidget**>(this, "UPlayerHUDUI.Alt_ModifierRef"); }
	UWidget*& GamepadActiveBackgroundField() { return *GetNativePointerField<UWidget**>(this, "UPlayerHUDUI.GamepadActiveBackground"); }
	UCanvasPanel*& SlotItemParentPanelField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.SlotItemParentPanel"); }
	UCanvasPanel*& GamepadQuickbarButtonsField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.GamepadQuickbarButtons"); }
	UCanvasPanel*& RightSideTopAnchorField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.RightSideTopAnchor"); }
	UCanvasPanel*& RightSideTopAnchorMarkerField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.RightSideTopAnchorMarker"); }
	UCanvasPanel*& RightSideBottomAnchorField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.RightSideBottomAnchor"); }
	UCanvasPanel*& RightSideBottomAnchorMarkerField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.RightSideBottomAnchorMarker"); }
	UCanvasPanel*& LeftSideAnchorField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.LeftSideAnchor"); }
	UCanvasPanel*& LeftSideAnchorMarkerField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.LeftSideAnchorMarker"); }
	UCanvasPanel*& TextOverlayContainerField() { return *GetNativePointerField<UCanvasPanel**>(this, "UPlayerHUDUI.TextOverlayContainer"); }
	UBorder*& BuldingBorderField() { return *GetNativePointerField<UBorder**>(this, "UPlayerHUDUI.BuldingBorder"); }
	UProgressBarWidget*& ExtraProgressBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UPlayerHUDUI.ExtraProgressBar"); }
	bool& bHubVisibleField() { return *GetNativePointerField<bool*>(this, "UPlayerHUDUI.bHubVisible"); }
	bool& bGamepadAltActiveField() { return *GetNativePointerField<bool*>(this, "UPlayerHUDUI.bGamepadAltActive"); }
	float& gamepadAltTimeField() { return *GetNativePointerField<float*>(this, "UPlayerHUDUI.gamepadAltTime"); }
	UUI_Compass*& CompassBarWidgetField() { return *GetNativePointerField<UUI_Compass**>(this, "UPlayerHUDUI.CompassBarWidget"); }
	UHUDStatusBarsWidget*& PrimaryStatusBarsWidgetField() { return *GetNativePointerField<UHUDStatusBarsWidget**>(this, "UPlayerHUDUI.PrimaryStatusBarsWidget"); }
	UHUDStatusBarsWidget*& SecondaryStatusBarsWidgetField() { return *GetNativePointerField<UHUDStatusBarsWidget**>(this, "UPlayerHUDUI.SecondaryStatusBarsWidget"); }
	UHUDElementBarWidget*& ElementBarWidgetField() { return *GetNativePointerField<UHUDElementBarWidget**>(this, "UPlayerHUDUI.ElementBarWidget"); }
	float& CurrentUIScalingField() { return *GetNativePointerField<float*>(this, "UPlayerHUDUI.CurrentUIScaling"); }
	float& CurrentUIQuickbarScalingField() { return *GetNativePointerField<float*>(this, "UPlayerHUDUI.CurrentUIQuickbarScaling"); }
	int& ConfirmationDialogTypeField() { return *GetNativePointerField<int*>(this, "UPlayerHUDUI.ConfirmationDialogType"); }
	UPrimalItem*& ItemAwaitingConfirmationField() { return *GetNativePointerField<UPrimalItem**>(this, "UPlayerHUDUI.ItemAwaitingConfirmation"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UPlayerHUDUI.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void RemoveHUDRichTextOverlayAtIndex(int Index) { NativeCall<void, int>(this, "UPlayerHUDUI.RemoveHUDRichTextOverlayAtIndex(int)", Index); }
	void UpdatedKeybindingBP() { NativeCall<void>(this, "UPlayerHUDUI.UpdatedKeybindingBP()"); }
	void UpdateMaxStructuresInRangeLabel(UTextBlock* label, float range, int maxStructuresInRange, const FString& header) { NativeCall<void, UTextBlock*, float, int, const FString&>(this, "UPlayerHUDUI.UpdateMaxStructuresInRangeLabel(UTextBlock*,float,int,FString&)", label, range, maxStructuresInRange, header); }
	void UpdateHUDRichTextOverlaysByInstigator(AActor* Instigator) { NativeCall<void, AActor*>(this, "UPlayerHUDUI.UpdateHUDRichTextOverlaysByInstigator(AActor*)", Instigator); }
	void RemoveAllHUDRichTextOverlays() { NativeCall<void>(this, "UPlayerHUDUI.RemoveAllHUDRichTextOverlays()"); }
	void OnFastInventoryChangedBP(bool bActivate) { NativeCall<void, bool>(this, "UPlayerHUDUI.OnFastInventoryChangedBP(bool)", bActivate); }
	void ShowBeforeUsingConfirmationDialog(UPrimalItem* Item) { NativeCall<void, UPrimalItem*>(this, "UPlayerHUDUI.ShowBeforeUsingConfirmationDialog(UPrimalItem*)", Item); }
	void AddHUDRichTextOverlay(const FHUDRichTextOverlayData& InOverlay) { NativeCall<void, const FHUDRichTextOverlayData&>(this, "UPlayerHUDUI.AddHUDRichTextOverlay(FHUDRichTextOverlayData&)", InOverlay); }
	void UpdateHUDRichTextOverlay(const FHUDRichTextOverlayData& InOverlay) { NativeCall<void, const FHUDRichTextOverlayData&>(this, "UPlayerHUDUI.UpdateHUDRichTextOverlay(FHUDRichTextOverlayData&)", InOverlay); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPlayerHUDUI.OnGamepadActiveChanged(bool)", bIsGamepadActive); }
	void SetFastInventoryUI(bool bActivate) { NativeCall<void, bool>(this, "UPlayerHUDUI.SetFastInventoryUI(bool)", bActivate); }
	void ProcessSplitscreenScaling(bool ScaleX) { NativeCall<void, bool>(this, "UPlayerHUDUI.ProcessSplitscreenScaling(bool)", ScaleX); }
	void AddHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData& InOverlay, int InsertAtIndex) { NativeCall<void, const FHUDRichTextOverlayData&, int>(this, "UPlayerHUDUI.AddHUDRichTextOverlayAtIndex(FHUDRichTextOverlayData&,int)", InOverlay, InsertAtIndex); }
	void UpdateMaxStructuresInRangeLabels() { NativeCall<void>(this, "UPlayerHUDUI.UpdateMaxStructuresInRangeLabels()"); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UPlayerHUDUI.ConfirmationDialogAccepted()"); }
	void ShowExtraProgressBar(UTexture2D* ProgressBarBackground, UTexture2D* ProgressBarForeground) { NativeCall<void, UTexture2D*, UTexture2D*>(this, "UPlayerHUDUI.ShowExtraProgressBar(UTexture2D*,UTexture2D*)", ProgressBarBackground, ProgressBarForeground); }
	void HideExtraProgressBar() { NativeCall<void>(this, "UPlayerHUDUI.HideExtraProgressBar()"); }
	void InitializeWidgets() { NativeCall<void>(this, "UPlayerHUDUI.InitializeWidgets()"); }
	void NotifyHubCreated() { NativeCall<void>(this, "UPlayerHUDUI.NotifyHubCreated()"); }
	void ForceRefreshSlots() { NativeCall<void>(this, "UPlayerHUDUI.ForceRefreshSlots()"); }
	void RemoveHUDRichTextOverlay(const FHUDRichTextOverlayData& InOverlay) { NativeCall<void, const FHUDRichTextOverlayData&>(this, "UPlayerHUDUI.RemoveHUDRichTextOverlay(FHUDRichTextOverlayData&)", InOverlay); }
	void RemoveHUDRichTextOverlaysByInstigator(AActor* Instigator) { NativeCall<void, AActor*>(this, "UPlayerHUDUI.RemoveHUDRichTextOverlaysByInstigator(AActor*)", Instigator); }
	void UpdateHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData& InOverlay, int Index) { NativeCall<void, const FHUDRichTextOverlayData&, int>(this, "UPlayerHUDUI.UpdateHUDRichTextOverlayAtIndex(FHUDRichTextOverlayData&,int)", InOverlay, Index); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UPlayerHUDUI.AddToViewport(int)", ZOrder); }
	void UpdateQuickBarScaling() { NativeCall<void>(this, "UPlayerHUDUI.UpdateQuickBarScaling()"); }
	void AddBuildingUI(UWidget* Widget) { NativeCall<void, UWidget*>(this, "UPlayerHUDUI.AddBuildingUI(UWidget*)", Widget); }
	void GetHotbarIndexInputInfo(int Index, UTexture2D*& GamepadAltIcon, FString& BindingString, UTexture2D*& Icon) { NativeCall<void, int, UTexture2D*&, FString&, UTexture2D*&>(this, "UPlayerHUDUI.GetHotbarIndexInputInfo(int,UTexture2D*&,FString&,UTexture2D*&)", Index, GamepadAltIcon, BindingString, Icon); }
	void NotifyHubDestroyed() { NativeCall<void>(this, "UPlayerHUDUI.NotifyHubDestroyed()"); }
};
