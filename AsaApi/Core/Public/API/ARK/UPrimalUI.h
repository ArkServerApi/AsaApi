#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UPrimalUI : public UPrimalUserWidget
{
public:
	UPrimalUI() = delete;
	~UPrimalUI() = delete;
	UPrimalUI(const UPrimalUI&) = delete;
	UPrimalUI& operator=(const UPrimalUI&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalUI"); }

	bool& bAddedToViewportClientField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bAddedToViewportClient"); }
	double& PressedSelectButtonTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.PressedSelectButtonTime"); }
	double& selectButtoneReleaseTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.selectButtoneReleaseTime"); }
	UE::Math::TVector2<double>& selectInitialCursorPosField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.selectInitialCursorPos"); }
	bool& bIsHoldingSelectButtonField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsHoldingSelectButton"); }
	float& IntervalToActivateHoldField() { return *GetNativePointerField<float*>(this, "UPrimalUI.IntervalToActivateHold"); }
	FString& LastDLCConfirmationNameField() { return *GetNativePointerField<FString*>(this, "UPrimalUI.LastDLCConfirmationName"); }
	bool& bSelectButtonPressedField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bSelectButtonPressed"); }
	float& LeftAnalogDeltaXField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LeftAnalogDeltaX"); }
	float& LeftAnalogDeltaYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LeftAnalogDeltaY"); }
	bool& bForceDisableFrameGenField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bForceDisableFrameGen"); }
	bool& bCaptureMouseInputField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCaptureMouseInput"); }
	bool& bScaleScreenResolutionField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bScaleScreenResolution"); }
	bool& bPreventGamepadDpadNavegationField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bPreventGamepadDpadNavegation"); }
	bool& bForceVirtualCursorEnabledField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bForceVirtualCursorEnabled"); }
	bool& bIsClosingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsClosing"); }
	bool& bWantsPrimalItemNotificationsField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bWantsPrimalItemNotifications"); }
	bool& bEscapeClosesMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bEscapeClosesMenu"); }
	bool& bEscapeOpensPauseMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bEscapeOpensPauseMenu"); }
	bool& bSpecialRightOpensPauseMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bSpecialRightOpensPauseMenu"); }
	bool& bMenuSupportSlomoField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bMenuSupportSlomo"); }
	bool& bClickClosesMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bClickClosesMenu"); }
	bool& bIsGameplayUIField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsGameplayUI"); }
	bool& bIsTopUIField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsTopUI"); }
	bool& bShowCancelIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowCancelIcon"); }
	bool& bShowAcceptIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowAcceptIcon"); }
	bool& bShowLStickIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowLStickIcon"); }
	bool& bShowRStickIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowRStickIcon"); }
	bool& bShowBumpersIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowBumpersIcon"); }
	bool& bShowStartBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowStartBtnIcon"); }
	bool& bShowLTBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowLTBtnIcon"); }
	bool& bShowRTBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowRTBtnIcon"); }
	bool& bShowFaceBtnLeftIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnLeftIcon"); }
	bool& bShowFaceBtnTopIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnTopIcon"); }
	bool& bShowFaceBtnRightIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnRightIcon"); }
	bool& bShowFaceBtnBottomIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnBottomIcon"); }
	bool& bShowLeftShoulderBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowLeftShoulderBtnIcon"); }
	bool& bShowXBoxFooterField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowXBoxFooter"); }
	bool& bIgnoreUIScalingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIgnoreUIScaling"); }
	bool& bCloseOnPlayerDieField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCloseOnPlayerDie"); }
	float& SplitscreenDPIScalerField() { return *GetNativePointerField<float*>(this, "UPrimalUI.SplitscreenDPIScaler"); }
	bool& bForceFullscreenVirtualCursorField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bForceFullscreenVirtualCursor"); }
	bool& bConstrainVirtualCursorField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bConstrainVirtualCursor"); }
	bool& bDoExtraDataListButtonPanelFilteringChecksField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bDoExtraDataListButtonPanelFilteringChecks"); }
	FName& DefaultHighlightWidgetOverrideNameField() { return *GetNativePointerField<FName*>(this, "UPrimalUI.DefaultHighlightWidgetOverrideName"); }
	bool& bShouldValidateInputOnRemoveField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShouldValidateInputOnRemove"); }
	bool& ShouldStretchMainScreenWhenHandheldField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.ShouldStretchMainScreenWhenHandheld"); }
	bool& WasInHandheldModeField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.WasInHandheldMode"); }
	bool& tickedDockedModeChangesField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.tickedDockedModeChanges"); }
	FAnchors& OriginalUnStretchedAnchorsField() { return *GetNativePointerField<FAnchors*>(this, "UPrimalUI.OriginalUnStretchedAnchors"); }
	FMargin& OriginalUnstretchedSizeField() { return *GetNativePointerField<FMargin*>(this, "UPrimalUI.OriginalUnstretchedSize"); }
	UE::Math::TVector2<double>& OriginalSizeBoxUnstretchedSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.OriginalSizeBoxUnstretchedSize"); }
	FAnchors& StretchedHandheldAnchorsField() { return *GetNativePointerField<FAnchors*>(this, "UPrimalUI.StretchedHandheldAnchors"); }
	FMargin& StretchedHandheldSizeField() { return *GetNativePointerField<FMargin*>(this, "UPrimalUI.StretchedHandheldSize"); }
	UE::Math::TVector2<double>& SizeBoxHandheldSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.SizeBoxHandheldSize"); }
	bool& bAutoProcessSplitscreenScalingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bAutoProcessSplitscreenScaling"); }
	int& virtualCursorFramesField() { return *GetNativePointerField<int*>(this, "UPrimalUI.virtualCursorFrames"); }
	TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>& OverrideViewingInventoryCompField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>*>(this, "UPrimalUI.OverrideViewingInventoryComp"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& LastFocusedWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.LastFocusedWidget"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& LastFocusedDataWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.LastFocusedDataWidget"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& recentlyExpandedWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.recentlyExpandedWidget"); }
	double& recentlyExpandedTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.recentlyExpandedTime"); }
	TArray<TWeakObjectPtr<UWidget, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& HighlightedWidgetsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UWidget, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalUI.HighlightedWidgets"); }
	bool& bIsDraggingWidgetField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsDraggingWidget"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& DraggedWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.DraggedWidget"); }
	double& OpenedTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.OpenedTime"); }
	float& AnalogDeltaXField() { return *GetNativePointerField<float*>(this, "UPrimalUI.AnalogDeltaX"); }
	float& AnalogDeltaYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.AnalogDeltaY"); }
	UE::Math::TVector2<double>& ScrollMaxVelocityField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.ScrollMaxVelocity"); }
	UE::Math::TVector2<double>& ScrollCurrentVelocityField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.ScrollCurrentVelocity"); }
	UE::Math::TVector2<double>& ScrollTagetVelocityField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.ScrollTagetVelocity"); }
	bool& bScrolledField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bScrolled"); }
	bool& bKeepControllerOpenedToolTipField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bKeepControllerOpenedToolTip"); }
	bool& bKeepToolTipOpenField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bKeepToolTipOpen"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& CurrentHighlightedField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.CurrentHighlighted"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& SelectedEntryField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.SelectedEntry"); }
	TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>& CachedItemForReHighlightField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>*>(this, "UPrimalUI.CachedItemForReHighlight"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& OverlayWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.OverlayWidget"); }
	UE::Math::TVector2<double>& LastHighlightedScreenPosField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.LastHighlightedScreenPos"); }
	float& LastXLeftField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LastXLeft"); }
	float& LastYLeftField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LastYLeft"); }
	bool& bRemovedFromViewportField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bRemovedFromViewport"); }
	double& LastGamepadMovementTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.LastGamepadMovementTime"); }
	bool& bCanBeTopField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCanBeTop"); }
	FTimerHandle& SetupInputFocusAndHighlightHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalUI.SetupInputFocusAndHighlightHandle"); }
	FTimerHandle& SelectClosestToLastHighlightedPosHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalUI.SelectClosestToLastHighlightedPosHandle"); }
	FTimerHandle& ShowToolTipForHighlightedHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalUI.ShowToolTipForHighlightedHandle"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& LastHighlightedWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.LastHighlightedWidget"); }
	TWeakObjectPtr<UToolTipWidget, FWeakObjectPtr>& CurrentToolTipInstanceField() { return *GetNativePointerField<TWeakObjectPtr<UToolTipWidget, FWeakObjectPtr>*>(this, "UPrimalUI.CurrentToolTipInstance"); }
	bool& bUsingTooltipField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bUsingTooltip"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& CurrentToolTipSponsorField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.CurrentToolTipSponsor"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& ForcedWidgetToolTipField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.ForcedWidgetToolTip"); }
	FKey& ShowGlobalChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowGlobalChatKey"); }
	FKey& ShowTribeChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowTribeChatKey"); }
	FKey& ShowLocalChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowLocalChatKey"); }
	FKey& ShowAllianceChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowAllianceChatKey"); }
	FKey& ToggleAutoChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ToggleAutoChatKey"); }
	FKey& ScrollChatDownKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollChatDownKey"); }
	FKey& ScrollChatUpKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollChatUpKey"); }
	FKey& ScrollUpGamePadKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollUpGamePadKey"); }
	FKey& ScrollDownGamePadKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollDownGamePadKey"); }
	FKey& RightStickFunctionModifierKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.RightStickFunctionModifierKey"); }
	bool& bModifyRightStickFunctionField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bModifyRightStickFunction"); }
	bool& bIsPaintingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsPainting"); }
	bool& bHasCycleHighlightedField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bHasCycleHighlighted"); }
	bool& bDisableHighlightSetAfterAnimationIfCycleHighlightedField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bDisableHighlightSetAfterAnimationIfCycleHighlighted"); }
	bool& leftShoulderDownField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.leftShoulderDown"); }
	bool& leftTriggerDownField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.leftTriggerDown"); }
	bool& rightTriggerDownField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.rightTriggerDown"); }
	FOnHTTPGetResponse& HTTPGetResponseEventField() { return *GetNativePointerField<FOnHTTPGetResponse*>(this, "UPrimalUI.HTTPGetResponseEvent"); }
	TWeakObjectPtr<APrimalStructureItemContainer, FWeakObjectPtr>& ItemContainerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureItemContainer, FWeakObjectPtr>*>(this, "UPrimalUI.ItemContainer"); }
	bool& bCachedIsGamepadActiveField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCachedIsGamepadActive"); }
	double& LastTooltipChangeTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.LastTooltipChangeTime"); }
	float& LastTargetVelocityYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LastTargetVelocityY"); }
	bool& bResetTooltipField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bResetTooltip"); }
	bool& bForceDirtyWidgetGeometryCacheField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bForceDirtyWidgetGeometryCache"); }
	bool& bPendingFrameInterpolationSensitiveBrushInitializationField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bPendingFrameInterpolationSensitiveBrushInitialization"); }
	TArray<TWeakObjectPtr<UToolTipWidget, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& PreviousToolTipsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UToolTipWidget, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalUI.PreviousToolTips"); }
	TArray<TWeakObjectPtr<UToolTipWidget, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& PooledToolTipsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UToolTipWidget, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalUI.PooledToolTips"); }
	bool& bBlockMovementForAddingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bBlockMovementForAdding"); }
	TArray<UPrimalUI*, TSizedDefaultAllocator<32> >& RemoveChildTickUIsField() { return *GetNativePointerField<TArray<UPrimalUI*, TSizedDefaultAllocator<32> >*>(this, "UPrimalUI.RemoveChildTickUIs"); }
	bool& HasBeenAddedToParentRemoveListField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.HasBeenAddedToParentRemoveList"); }
	float& OrgRenderTransformPivotYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.OrgRenderTransformPivotY"); }
	float& OrgRenderTransformTranslationYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.OrgRenderTransformTranslationY"); }
	float& OrgRenderTransformPivotXField() { return *GetNativePointerField<float*>(this, "UPrimalUI.OrgRenderTransformPivotX"); }
	float& OrgRenderTransformTranslationXField() { return *GetNativePointerField<float*>(this, "UPrimalUI.OrgRenderTransformTranslationX"); }
	UE::Math::TVector2<double>& OrgRenderTransformScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UPrimalUI.OrgRenderTransformScale"); }
	bool& HasScaledForSplitscreenField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.HasScaledForSplitscreen"); }
	bool& bDirtyCacheField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bDirtyCache"); }
	unsigned char& NumTimesRefreshedWhileCollectingGarbageField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI.NumTimesRefreshedWhileCollectingGarbage"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& autoScrollWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UPrimalUI.autoScrollWidget"); }
	bool& OverrideButtonSoundsField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.OverrideButtonSounds"); }
	FOnPrimalUIRemovedFromViewport& OnRemovedFromViewportField() { return *GetNativePointerField<FOnPrimalUIRemovedFromViewport*>(this, "UPrimalUI.OnRemovedFromViewport"); }
	double& LeftTriggerZoomHoldStartTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.LeftTriggerZoomHoldStartTime"); }
	double& RightTriggerZoomHoldStartTimeField() { return *GetNativePointerField<double*>(this, "UPrimalUI.RightTriggerZoomHoldStartTime"); }
	BitFieldValue<bool, unsigned char> bUseBPInitForObjects() { return { this, "UPrimalUI.bUseBPInitForObjects"}; }
	UBorder* GetParentBorder(UWidget* widget) { return NativeCall<UBorder*, UWidget*>(this, "UPrimalUI.GetParentBorder(UWidget*)", widget); }
	void AutoScrollManage(float InDeltaTime) { NativeCall<void, float>(this, "UPrimalUI.AutoScrollManage(float)", InDeltaTime); }
	bool BPCycleHighlighted() { return NativeCall<bool>(this, "UPrimalUI.BPCycleHighlighted()"); }
	void HighlightItemInDataListByIndex(UDataListPanel* Panel, int index) { NativeCall<void, UDataListPanel*, int>(this, "UPrimalUI.HighlightItemInDataListByIndex(UDataListPanel*,int)", Panel, index); }
	void ShowToolTip(UWidget* sponsorWidget) { NativeCall<void, UWidget*>(this, "UPrimalUI.ShowToolTip(UWidget*)", sponsorWidget); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UPrimalUI.ClickedButton(UWidget*)", clickedWidget); }
	void SetItemContainer(APrimalStructureItemContainer* Container) { NativeCall<void, APrimalStructureItemContainer*>(this, "UPrimalUI.SetItemContainer(APrimalStructureItemContainer*)", Container); }
	float AutoScrollGetParentScrollOffset() { return NativeCall<float>(this, "UPrimalUI.AutoScrollGetParentScrollOffset()"); }
	void NotifyInventoryCraftingEnabled(UPrimalInventoryComponent* inventoryComp, bool bEnabled) { NativeCall<void, UPrimalInventoryComponent*, bool>(this, "UPrimalUI.NotifyInventoryCraftingEnabled(UPrimalInventoryComponent*,bool)", inventoryComp, bEnabled); }
	void ClickedButtonWithController(UWidget* clickedWidget, int ControllerId) { NativeCall<void, UWidget*, int>(this, "UPrimalUI.ClickedButtonWithController(UWidget*,int)", clickedWidget, ControllerId); }
	void BPVirtualCursorinit() { NativeCall<void>(this, "UPrimalUI.BPVirtualCursorinit()"); }
	UPanelSlot* AddWidgetToRoot(UWidget* NewWidget) { return NativeCall<UPanelSlot*, UWidget*>(this, "UPrimalUI.AddWidgetToRoot(UWidget*)", NewWidget); }
	UWidget* AutoScrollGetParentScrollBox() { return NativeCall<UWidget*>(this, "UPrimalUI.AutoScrollGetParentScrollBox()"); }
	void InitForObjects(UObject* AssociatedObject1, UObject* AssociatedObject2, unsigned int ExtraID1, unsigned int ExtraID2) { NativeCall<void, UObject*, UObject*, unsigned int, unsigned int>(this, "UPrimalUI.InitForObjects(UObject*,UObject*,unsignedint,unsignedint)", AssociatedObject1, AssociatedObject2, ExtraID1, ExtraID2); }
	void CycleComboBox(UComboBoxString* CBox, ControlDirection Dir) { NativeCall<void, UComboBoxString*, ControlDirection>(this, "UPrimalUI.CycleComboBox(UComboBoxString*,ControlDirection)", CBox, Dir); }
	void NotifyInventoryPrimalArkItemAdded() { NativeCall<void>(this, "UPrimalUI.NotifyInventoryPrimalArkItemAdded()"); }
	bool GetWidgetGeometry(UWidget* Widget, FGeometry& Geometry) { return NativeCall<bool, UWidget*, FGeometry&>(this, "UPrimalUI.GetWidgetGeometry(UWidget*,FGeometry&)", Widget, Geometry); }
	void AddedToViewport() { NativeCall<void>(this, "UPrimalUI.AddedToViewport()"); }
	bool EnsureAlphaNumeric(FString& text, int maxChars) { return NativeCall<bool, FString&, int>(this, "UPrimalUI.EnsureAlphaNumeric(FString&,int)", text, maxChars); }
	static void StopAllHapticEffects(APlayerController* PC) { NativeCall<void, APlayerController*>(nullptr, "UPrimalUI.StopAllHapticEffects(APlayerController*)", PC); }
	bool ShouldHighlightParentPanel(UWidget* widget) { return NativeCall<bool, UWidget*>(this, "UPrimalUI.ShouldHighlightParentPanel(UWidget*)", widget); }
	bool CanControlScene(const FControllerEvent& ControllerEvent) { return NativeCall<bool, const FControllerEvent&>(this, "UPrimalUI.CanControlScene(FControllerEvent&)", ControllerEvent); }
	void UpdateTooltips(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalUI.UpdateTooltips(float)", DeltaSeconds); }
	UPrimalUI* GetNextParentPrimalUIInTree(UWidget* Root, UWidget* Descendant) { return NativeCall<UPrimalUI*, UWidget*, UWidget*>(this, "UPrimalUI.GetNextParentPrimalUIInTree(UWidget*,UWidget*)", Root, Descendant); }
	ABasePlayerController* GetBasePC() { return NativeCall<ABasePlayerController*>(this, "UPrimalUI.GetBasePC()"); }
	UPrimalUI* GetTopLevelParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UPrimalUI.GetTopLevelParentPrimalUI()"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UPrimalUI.RemoveFromViewport()"); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UPrimalUI.AddToViewport(int)", ZOrder); }
	void BPProcessSplitscreenAndAddToViewport(bool ScaleX, int ZOrder) { NativeCall<void, bool, int>(this, "UPrimalUI.BPProcessSplitscreenAndAddToViewport(bool,int)", ScaleX, ZOrder); }
	UComboBoxString* GetOpenComboBox() { return NativeCall<UComboBoxString*>(this, "UPrimalUI.GetOpenComboBox()"); }
	UE::Math::TVector2<double>* GetWidgetCenter(UE::Math::TVector2<double>* result, UWidget* widget) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, UWidget*>(this, "UPrimalUI.GetWidgetCenter(UWidget*)", result, widget); }
	bool BPEscapeClosed() { return NativeCall<bool>(this, "UPrimalUI.BPEscapeClosed()"); }
	static bool UsingProController(bool debugOut) { return NativeCall<bool, bool>(nullptr, "UPrimalUI.UsingProController(bool)", debugOut); }
	void UnHighlightWidgetWhenNotTopUI() { NativeCall<void>(this, "UPrimalUI.UnHighlightWidgetWhenNotTopUI()"); }
	bool VirtualCursorNavDisabled() { return NativeCall<bool>(this, "UPrimalUI.VirtualCursorNavDisabled()"); }
	void ProcessSplitscreenAndAddToViewport(bool ScaleX, int ZOrder) { NativeCall<void, bool, int>(this, "UPrimalUI.ProcessSplitscreenAndAddToViewport(bool,int)", ScaleX, ZOrder); }
	static void OpenTheStoreDLCPage(const FString& theDLCName) { NativeCall<void, const FString&>(nullptr, "UPrimalUI.OpenTheStoreDLCPage(FString&)", theDLCName); }
	void GetAllWidgets(TArray<UWidget*, TSizedDefaultAllocator<32> >& Widgets, bool bForceAll) { NativeCall<void, TArray<UWidget*, TSizedDefaultAllocator<32> >&, bool>(this, "UPrimalUI.GetAllWidgets(TArray<UWidget*,TSizedDefaultAllocator<32>>&,bool)", Widgets, bForceAll); }
	void OnVirtualCursorRightStickSlider() { NativeCall<void>(this, "UPrimalUI.OnVirtualCursorRightStickSlider()"); }
	bool ComponentsHasKeyboardFocus() { return NativeCall<bool>(this, "UPrimalUI.ComponentsHasKeyboardFocus()"); }
	void NativeDestruct() { NativeCall<void>(this, "UPrimalUI.NativeDestruct()"); }
	UScrollBox* FindTheParentScrollBox(TWeakObjectPtr<UWidget, FWeakObjectPtr> theHighlightedWidget) { return NativeCall<UScrollBox*, TWeakObjectPtr<UWidget, FWeakObjectPtr>>(this, "UPrimalUI.FindTheParentScrollBox(TWeakObjectPtr<UWidget,FWeakObjectPtr>)", theHighlightedWidget); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUI.OnGamepadActiveChanged(bool)", bIsGamepadActive); }
	void SetSelectedAndDraggedEntry(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalUI.SetSelectedAndDraggedEntry(UWidget*)", widget); }
	bool WantsVisible() { return NativeCall<bool>(this, "UPrimalUI.WantsVisible()"); }
	void HighlightedWidgetPressed(int ControllerId) { NativeCall<void, int>(this, "UPrimalUI.HighlightedWidgetPressed(int)", ControllerId); }
	bool BPHighlightWidgetOnStart() { return NativeCall<bool>(this, "UPrimalUI.BPHighlightWidgetOnStart()"); }
	bool CheckRehighlight(UPrimalItem* Item, bool bSwapped) { return NativeCall<bool, UPrimalItem*, bool>(this, "UPrimalUI.CheckRehighlight(UPrimalItem*,bool)", Item, bSwapped); }
	UWidget* CheckIfWidgetIsContainedInPrimalUI(UWidget* Root, UWidget* Descendant) { return NativeCall<UWidget*, UWidget*, UWidget*>(this, "UPrimalUI.CheckIfWidgetIsContainedInPrimalUI(UWidget*,UWidget*)", Root, Descendant); }
	void CloseTooltip() { NativeCall<void>(this, "UPrimalUI.CloseTooltip()"); }
	void CloseWithAnimation() { NativeCall<void>(this, "UPrimalUI.CloseWithAnimation()"); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UPrimalUI.ConfirmationDialogAccepted()"); }
	void CacheLastHighlightedWidget(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalUI.CacheLastHighlightedWidget(UWidget*)", widget); }
	void MoveVirtualCursorToWidget(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalUI.MoveVirtualCursorToWidget(UWidget*)", widget); }
	USizeBox* GetSizeboxForExtraHandheldScaling() { return NativeCall<USizeBox*>(this, "UPrimalUI.GetSizeboxForExtraHandheldScaling()"); }
	void AutoScrollSetParentScrollOffset(float offset) { NativeCall<void, float>(this, "UPrimalUI.AutoScrollSetParentScrollOffset(float)", offset); }
	void OnCreateCredits(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalUI.OnCreateCredits(UWidget*)", widget); }
	void RemoveFromParent() { NativeCall<void>(this, "UPrimalUI.RemoveFromParent()"); }
	UE::Math::TVector2<double>* GetCursorPos(UE::Math::TVector2<double>* result) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(this, "UPrimalUI.GetCursorPos()", result); }
	AShooterHUD* GetShooterHud() { return NativeCall<AShooterHUD*>(this, "UPrimalUI.GetShooterHud()"); }
	void NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent* inventoryComp, UPrimalItem* theItem) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*>(this, "UPrimalUI.NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent*,UPrimalItem*)", inventoryComp, theItem); }
	void FixHighlights() { NativeCall<void>(this, "UPrimalUI.FixHighlights()"); }
	void OnConfirmationDialogClosedBP(bool bAccept) { NativeCall<void, bool>(this, "UPrimalUI.OnConfirmationDialogClosedBP(bool)", bAccept); }
	void OnPaintingStopped() { NativeCall<void>(this, "UPrimalUI.OnPaintingStopped()"); }
	void SetHighlightedWidget(UWidget* widget, bool bSetLastHighlightedPosition) { NativeCall<void, UWidget*, bool>(this, "UPrimalUI.SetHighlightedWidget(UWidget*,bool)", widget, bSetLastHighlightedPosition); }
	void CloseScene() { NativeCall<void>(this, "UPrimalUI.CloseScene()"); }
	void SetVirtualCursorPosition(UE::Math::TVector2<double>* NewCursorPos) { if (!NewCursorPos) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >>(this, "UPrimalUI.SetVirtualCursorPosition(UE::Math::TVector2<double>)", *NewCursorPos); }
	APrimalCharacter* GetPawn() { return NativeCall<APrimalCharacter*>(this, "UPrimalUI.GetPawn()"); }
	void RemovedFromViewport() { NativeCall<void>(this, "UPrimalUI.RemovedFromViewport()"); }
	void HandleSignOutStatusChange() { NativeCall<void>(this, "UPrimalUI.HandleSignOutStatusChange()"); }
	void SetInputMode() { NativeCall<void>(this, "UPrimalUI.SetInputMode()"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UPrimalUI.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void BuildFrameInterpolationSensitiveBrushCache() { NativeCall<void>(this, "UPrimalUI.BuildFrameInterpolationSensitiveBrushCache()"); }
	void OnGamepadActiveChangedBP(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUI.OnGamepadActiveChangedBP(bool)", bIsGamepadActive); }
	void SetupSpecialWidgetAdjacents(UWidget* InWidget) { NativeCall<void, UWidget*>(this, "UPrimalUI.SetupSpecialWidgetAdjacents(UWidget*)", InWidget); }
	void HandleButtonOverrides() { NativeCall<void>(this, "UPrimalUI.HandleButtonOverrides()"); }
	void EnableTooltip() { NativeCall<void>(this, "UPrimalUI.EnableTooltip()"); }
	void SetupInputFocusAndHighlight() { NativeCall<void>(this, "UPrimalUI.SetupInputFocusAndHighlight()"); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UPrimalUI.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void HighlightDefaultWidget(UPanelWidget* RestrictToPanel) { NativeCall<void, UPanelWidget*>(this, "UPrimalUI.HighlightDefaultWidget(UPanelWidget*)", RestrictToPanel); }
	void OnDLCConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalUI.OnDLCConfirmationDialogClosed(bool)", bAccept); }
	void DisableClipChildren() { NativeCall<void>(this, "UPrimalUI.DisableClipChildren()"); }
	void OnAnimationFinishedPlaying(UUMGSequencePlayer& Player) { NativeCall<void, UUMGSequencePlayer&>(this, "UPrimalUI.OnAnimationFinishedPlaying(UUMGSequencePlayer&)", Player); }
	void GetAbsPosSize(UWidget* Widget, UE::Math::TVector2<double>& AbsPos, UE::Math::TVector2<double>& Size) { NativeCall<void, UWidget*, UE::Math::TVector2<double>&, UE::Math::TVector2<double>&>(this, "UPrimalUI.GetAbsPosSize(UWidget*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&)", Widget, AbsPos, Size); }
	void ShowConfirmationDialogBP(const FString& TitleText, const FString& MessageText, bool isJustOKBox) { NativeCall<void, const FString&, const FString&, bool>(this, "UPrimalUI.ShowConfirmationDialogBP(FString&,FString&,bool)", TitleText, MessageText, isJustOKBox); }
	static unsigned int ChangeChildrenTextColor(UPanelWidget& parent, const FSlateColor& newColor, bool recursive) { return NativeCall<unsigned int, UPanelWidget&, const FSlateColor&, bool>(nullptr, "UPrimalUI.ChangeChildrenTextColor(UPanelWidget&,FSlateColor&,bool)", parent, newColor, recursive); }
	void ResetAllScrollBars() { NativeCall<void>(this, "UPrimalUI.ResetAllScrollBars()"); }
	void PopulateWidgetGeometryCache(FArrangedWidget& Root) { NativeCall<void, FArrangedWidget&>(this, "UPrimalUI.PopulateWidgetGeometryCache(FArrangedWidget&)", Root); }
	void ProcessSplitscreen(bool ScaleX) { NativeCall<void, bool>(this, "UPrimalUI.ProcessSplitscreen(bool)", ScaleX); }
	void BPGameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UPrimalUI.BPGameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void CheckGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUI.CheckGamepadActiveChanged(bool)", bIsGamepadActive); }
	void NotifyInventoryPrimalItemSwapped(UPrimalInventoryComponent* inventoryComp, UPrimalItem* Item1, UPrimalItem* Item2) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, UPrimalItem*>(this, "UPrimalUI.NotifyInventoryPrimalItemSwapped(UPrimalInventoryComponent*,UPrimalItem*,UPrimalItem*)", inventoryComp, Item1, Item2); }
	void OnHoldSelectButton(bool movedCursor, float timeSinceLastRelease) { NativeCall<void, bool, float>(this, "UPrimalUI.OnHoldSelectButton(bool,float)", movedCursor, timeSinceLastRelease); }
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UPrimalUI.NativeTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void SetWidgetNativeContext(unsigned char value) { NativeCall<void, unsigned char>(this, "UPrimalUI.SetWidgetNativeContext(unsignedchar)", value); }
	void SetupWidgetAdjacents() { NativeCall<void>(this, "UPrimalUI.SetupWidgetAdjacents()"); }
	void PressedVirtualAccept() { NativeCall<void>(this, "UPrimalUI.PressedVirtualAccept()"); }
	void HighlightWidgetOnStart(UPanelWidget* RestrictToPanel) { NativeCall<void, UPanelWidget*>(this, "UPrimalUI.HighlightWidgetOnStart(UPanelWidget*)", RestrictToPanel); }
	void ShowToolTipForHighlighted() { NativeCall<void>(this, "UPrimalUI.ShowToolTipForHighlighted()"); }
	bool BPDisableWorldRendering_Implementation() { return NativeCall<bool>(this, "UPrimalUI.BPDisableWorldRendering_Implementation()"); }
	void NotifyInventoryPrimalItemStatus(UPrimalInventoryComponent* inventoryComp, UPrimalItem* theItem, UPrimalItem* theItem2, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, UPrimalItem*, bool, bool, bool, bool, bool, bool, bool, bool>(this, "UPrimalUI.NotifyInventoryPrimalItemStatus(UPrimalInventoryComponent*,UPrimalItem*,UPrimalItem*,bool,bool,bool,bool,bool,bool,bool,bool)", inventoryComp, theItem, theItem2, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void ReHighlightSlotInDataList(int index, UDataListPanel* ParentDataList) { NativeCall<void, int, UDataListPanel*>(this, "UPrimalUI.ReHighlightSlotInDataList(int,UDataListPanel*)", index, ParentDataList); }
	void MainMenuEscapePressed() { NativeCall<void>(this, "UPrimalUI.MainMenuEscapePressed()"); }
	void ResolveFrameInterpolationSensitiveBrushes() { NativeCall<void>(this, "UPrimalUI.ResolveFrameInterpolationSensitiveBrushes()"); }
	UE::Math::TVector2<double>* GetCursorPosOnSlider(UE::Math::TVector2<double>* result, USlider* slider) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, USlider*>(this, "UPrimalUI.GetCursorPosOnSlider(USlider*)", result, slider); }
	AShooterPlayerController* GetPC() { return NativeCall<AShooterPlayerController*>(this, "UPrimalUI.GetPC()"); }
	void StopHighlightedWidgets() { NativeCall<void>(this, "UPrimalUI.StopHighlightedWidgets()"); }
	UWidget* GetWidgetToScaleForHandheld() { return NativeCall<UWidget*>(this, "UPrimalUI.GetWidgetToScaleForHandheld()"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr> GetHighlightedOrVirtualCursorWidget(const UE::Math::TVector2<double>* initialCursorPos) { using AsaReturnType = TWeakObjectPtr < UWidget , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const UE :: Math :: TVector2 < double > *>(this, "UPrimalUI.GetHighlightedOrVirtualCursorWidget(UE::Math::TVector2<double>*)", AsaReturnPointer, initialCursorPos); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void CycleHighlighted(UWidget* RestrictToParent, UDataListPanel* RestrictToDataListPanel) { NativeCall<void, UWidget*, UDataListPanel*>(this, "UPrimalUI.CycleHighlighted(UWidget*,UDataListPanel*)", RestrictToParent, RestrictToDataListPanel); }
	void ProcessSplitscreenScaling(bool ScaleX) { NativeCall<void, bool>(this, "UPrimalUI.ProcessSplitscreenScaling(bool)", ScaleX); }
	void SetRecentlyExpandedWidget(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalUI.SetRecentlyExpandedWidget(UWidget*)", widget); }
	void ConfirmationDialogCancelled() { NativeCall<void>(this, "UPrimalUI.ConfirmationDialogCancelled()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalUI"); }
	static UPrimalUI* GetParentPrimalUI(const UWidget* aWidget) { return NativeCall<UPrimalUI*, const UWidget*>(nullptr, "UPrimalUI.GetParentPrimalUI(UWidget*)", aWidget); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UPrimalUI.GetParentPrimalUI()"); }
	static void PlayHapticEffect(APlayerController* PC, EHapticEffectType type, const UE::Math::TVector<double>& location, UWorld* world) { NativeCall<void, APlayerController*, EHapticEffectType, const UE::Math::TVector<double>&, UWorld*>(nullptr, "UPrimalUI.PlayHapticEffect(APlayerController*,EHapticEffectType,UE::Math::TVector<double>&,UWorld*)", PC, type, location, world); }
	void ManageMemoryOnRefresh() { NativeCall<void>(this, "UPrimalUI.ManageMemoryOnRefresh()"); }
	bool UsingVirtualCursor() { return NativeCall<bool>(this, "UPrimalUI.UsingVirtualCursor()"); }
	void CycleHighlightedNew(const UE::Math::TVector2<double>* initialCursorPos) { NativeCall<void, const UE::Math::TVector2<double>*>(this, "UPrimalUI.CycleHighlightedNew(UE::Math::TVector2<double>*)", initialCursorPos); }
	void CheckTickList() { NativeCall<void>(this, "UPrimalUI.CheckTickList()"); }
	void AutoScrollCancel() { NativeCall<void>(this, "UPrimalUI.AutoScrollCancel()"); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent* inventoryComp, UPrimalItem* theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, bool>(this, "UPrimalUI.NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem*,bool)", inventoryComp, theItem, bEquippedItem); }
	void RemoveWidget(UWidget* WidgetToRemove) { NativeCall<void, UWidget*>(this, "UPrimalUI.RemoveWidget(UWidget*)", WidgetToRemove); }
	bool IsWidgetInView(UWidget* widget) { return NativeCall<bool, UWidget*>(this, "UPrimalUI.IsWidgetInView(UWidget*)", widget); }
	void HandleDockedModeChanges() { NativeCall<void>(this, "UPrimalUI.HandleDockedModeChanges()"); }
	bool HighlightPrevHighlightedWidget() { return NativeCall<bool>(this, "UPrimalUI.HighlightPrevHighlightedWidget()"); }
	void ResetFrameInterpolationSensitiveBrushRuntimeState() { NativeCall<void>(this, "UPrimalUI.ResetFrameInterpolationSensitiveBrushRuntimeState()"); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalUI.OnConfirmationDialogClosed(bool)", bAccept); }
	void BPHandleDockedModeChange(bool bIsDocked) { NativeCall<void, bool>(this, "UPrimalUI.BPHandleDockedModeChange(bool)", bIsDocked); }
	void DraggingStopped() { NativeCall<void>(this, "UPrimalUI.DraggingStopped()"); }
	void ManageWidgetGeometry(const FGeometry& MyGeometry) { NativeCall<void, const FGeometry&>(this, "UPrimalUI.ManageWidgetGeometry(FGeometry&)", MyGeometry); }
	bool EnsureNumeric(FString& text, int maxChars) { return NativeCall<bool, FString&, int>(this, "UPrimalUI.EnsureNumeric(FString&,int)", text, maxChars); }
	void NativeConstruct() { NativeCall<void>(this, "UPrimalUI.NativeConstruct()"); }
	AShooterPlayerState* GetPlayerState() { return NativeCall<AShooterPlayerState*>(this, "UPrimalUI.GetPlayerState()"); }
	void WidgetTreeGetAllChildWidgets(UWidget* Parent, TArray<UWidget*, TSizedDefaultAllocator<32> >& Widgets, bool bForceAll) { NativeCall<void, UWidget*, TArray<UWidget*, TSizedDefaultAllocator<32> >&, bool>(this, "UPrimalUI.WidgetTreeGetAllChildWidgets(UWidget*,TArray<UWidget*,TSizedDefaultAllocator<32>>&,bool)", Parent, Widgets, bForceAll); }
	void EscapeClosed() { NativeCall<void>(this, "UPrimalUI.EscapeClosed()"); }
	void PostGameTickApplyFrameInterpolationSensitiveBrushState(bool bShouldHideFrameInterpolationSensitiveBrushes) { NativeCall<void, bool>(this, "UPrimalUI.PostGameTickApplyFrameInterpolationSensitiveBrushState(bool)", bShouldHideFrameInterpolationSensitiveBrushes); }
	bool BPDisableWorldRendering() { return NativeCall<bool>(this, "UPrimalUI.BPDisableWorldRendering()"); }
	bool CanBeHighlightedForGamePad(UWidget* widget) { return NativeCall<bool, UWidget*>(this, "UPrimalUI.CanBeHighlightedForGamePad(UWidget*)", widget); }
	void SelectClosestToLastHighlightedPos() { NativeCall<void>(this, "UPrimalUI.SelectClosestToLastHighlightedPos()"); }
	UButton* InitializeButtonNameWithClick(FName ButtonName) { return NativeCall<UButton*, FName>(this, "UPrimalUI.InitializeButtonNameWithClick(FName)", ButtonName); }
	void ShowConfirmationDialog(const FString& TitleText, const FString& MessageText, bool isJustOKBox) { NativeCall<void, const FString&, const FString&, bool>(this, "UPrimalUI.ShowConfirmationDialog(FString&,FString&,bool)", TitleText, MessageText, isJustOKBox); }
	UWidget* FindWidget(const FString& Name) { return NativeCall<UWidget*, const FString&>(this, "UPrimalUI.FindWidget(FString&)", Name); }
	void OnVirtualCursorinit() { NativeCall<void>(this, "UPrimalUI.OnVirtualCursorinit()"); }
	void GetDirectionStartAndEndPoint(UE::Math::TVector<double>& DirP1, UE::Math::TVector<double>& DirP2, UE::Math::TVector2<double>& DirToCurr) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&, UE::Math::TVector2<double>&>(this, "UPrimalUI.GetDirectionStartAndEndPoint(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector2<double>&)", DirP1, DirP2, DirToCurr); }
	bool IsWidgetVisibleInScrollBox(UWidget* widget, bool bFully) { return NativeCall<bool, UWidget*, bool>(this, "UPrimalUI.IsWidgetVisibleInScrollBox(UWidget*,bool)", widget, bFully); }
	UScrollBox* GetWidgetParentScrollBox(UWidget* myWidget) { return NativeCall<UScrollBox*, UWidget*>(this, "UPrimalUI.GetWidgetParentScrollBox(UWidget*)", myWidget); }
	void ReleasedVirtualAccept(unsigned int userIndex, bool highlight) { NativeCall<void, unsigned int, bool>(this, "UPrimalUI.ReleasedVirtualAccept(unsignedint,bool)", userIndex, highlight); }
	void RefreshKeyBindings() { NativeCall<void>(this, "UPrimalUI.RefreshKeyBindings()"); }
	void UnHighlightWidget(bool bAllWidgets) { NativeCall<void, bool>(this, "UPrimalUI.UnHighlightWidget(bool)", bAllWidgets); }
	void SetOverlayWidget(UWidget* InOverlayWidget) { NativeCall<void, UWidget*>(this, "UPrimalUI.SetOverlayWidget(UWidget*)", InOverlayWidget); }
	UPrimalUI* GetPrimalUiWithOpenTooltip() { return NativeCall<UPrimalUI*>(this, "UPrimalUI.GetPrimalUiWithOpenTooltip()"); }
	int CustomNavScore(UWidget* widget, float viewportScale, const UE::Math::TVector2<double>& inputDir, UE::Math::TVector2<double>& cursorPos, TWeakObjectPtr<UWidget, FWeakObjectPtr> theHighlightedWidget) { return NativeCall<int, UWidget*, float, const UE::Math::TVector2<double>&, UE::Math::TVector2<double>&, TWeakObjectPtr<UWidget, FWeakObjectPtr>>(this, "UPrimalUI.CustomNavScore(UWidget*,float,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,TWeakObjectPtr<UWidget,FWeakObjectPtr>)", widget, viewportScale, inputDir, cursorPos, theHighlightedWidget); }
	void ManageVirtualCursorInit() { NativeCall<void>(this, "UPrimalUI.ManageVirtualCursorInit()"); }
	void OnPaintingStarted() { NativeCall<void>(this, "UPrimalUI.OnPaintingStarted()"); }
	ULocalPlayer* GetPlayerOwner() { return NativeCall<ULocalPlayer*>(this, "UPrimalUI.GetPlayerOwner()"); }
	void CacheSplitScreenValues() { NativeCall<void>(this, "UPrimalUI.CacheSplitScreenValues()"); }
	void OnSetHighlighedWidget(UWidget* widget) { NativeCall<void, UWidget*>(this, "UPrimalUI.OnSetHighlighedWidget(UWidget*)", widget); }
	void BPReleasedVirtualAccept() { NativeCall<void>(this, "UPrimalUI.BPReleasedVirtualAccept()"); }
	bool IsWidgetATab(UWidget* widget) { return NativeCall<bool, UWidget*>(this, "UPrimalUI.IsWidgetATab(UWidget*)", widget); }
	void DoExtraScalingForSplitscreen(UE::Math::TVector2<double>* PlayerSize) { if (!PlayerSize) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >>(this, "UPrimalUI.DoExtraScalingForSplitscreen(UE::Math::TVector2<double>)", *PlayerSize); }
	void BPInitForObjects(UObject* AssociatedObject1, UObject* AssociatedObject2, int ExtraID1, int ExtraID2) { NativeCall<void, UObject*, UObject*, int, int>(this, "UPrimalUI.BPInitForObjects(UObject*,UObject*,int,int)", AssociatedObject1, AssociatedObject2, ExtraID1, ExtraID2); }
};
