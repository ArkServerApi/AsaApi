#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UHUDActiveMissionWidget : public UPrimalUI
{
public:
	UHUDActiveMissionWidget() = delete;
	~UHUDActiveMissionWidget() = delete;
	UHUDActiveMissionWidget(const UHUDActiveMissionWidget&) = delete;
	UHUDActiveMissionWidget& operator=(const UHUDActiveMissionWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDActiveMissionWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDActiveMissionWidget"); }

	TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>& ForPrimalCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>*>(this, "UHUDActiveMissionWidget.ForPrimalCharacter"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ActiveMissionVisibilityWidgetNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UHUDActiveMissionWidget.ActiveMissionVisibilityWidgetNames"); }
	FName& MissionNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionNameTextBlockName"); }
	FName& MissionDifficultyTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionDifficultyTextBlockName"); }
	FName& MissionDescriptionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionDescriptionTextBlockName"); }
	FName& ObjectiveTimeValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimeValueTextBlockName"); }
	FName& ObjectiveTimeLabelTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimeLabelTextBlockName"); }
	FName& ObjectiveTimePanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimePanelName"); }
	FName& ObjectiveTimeProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimeProgressBarName"); }
	FName& MissionDifficultyPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionDifficultyPanelName"); }
	FName& PhaseRequirementContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseRequirementContainerName"); }
	FLinearColor& MissionTimeRemainingDefaultTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionTimeRemainingDefaultTextColor"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MissionStatTrackerVisibilityWidgetNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UHUDActiveMissionWidget.MissionStatTrackerVisibilityWidgetNames"); }
	FName& MissionStatTrackerContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionStatTrackerContainerName"); }
	FName& PhaseBackgroundBorderWidgetNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseBackgroundBorderWidgetName"); }
	FName& PhaseRichTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseRichTextBlockName"); }
	FName& PhaseDescriptionBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseDescriptionBlockName"); }
	FName& PhaseDescriptionPrefixBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseDescriptionPrefixBlockName"); }
	FName& PhaseDescriptionSuffixBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseDescriptionSuffixBlockName"); }
	FName& PhaseValueContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseValueContainerName"); }
	FName& PhaseValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseValueTextBlockName"); }
	FName& PhaseValueSlashTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseValueSlashTextBlockName"); }
	FName& PhaseMaxValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseMaxValueTextBlockName"); }
	FName& PhaseProgressContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseProgressContainerName"); }
	FName& PhaseProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseProgressBarName"); }
	FLinearColor& PhaseNormalBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseNormalBackgroundColor"); }
	FLinearColor& PhaseCompleteBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseCompleteBackgroundColor"); }
	FName& MissionAlertFlyoutContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertFlyoutContainerName"); }
	FName& MissionAlertEntryContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertEntryContainerName"); }
	FName& MissionAlertTitleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertTitleTextBlockName"); }
	FName& MissionAlertBorderNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertBorderName"); }
	FName& TopMissionAlertFlyoutContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertFlyoutContainerName"); }
	FName& TopMissionAlertEntryContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertEntryContainerName"); }
	FName& TopMissionAlertTitleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertTitleTextBlockName"); }
	FName& TopMissionAlertBorderNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertBorderName"); }
	FLinearColor& MissionAlertColor_NegativeField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionAlertColor_Negative"); }
	FLinearColor& MissionAlertColor_NeutralField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionAlertColor_Neutral"); }
	FLinearColor& MissionAlertColor_PositiveField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionAlertColor_Positive"); }
	float& AlertFlyoutAnimationDurationField() { return *GetNativePointerField<float*>(this, "UHUDActiveMissionWidget.AlertFlyoutAnimationDuration"); }
	TEnumAsByte<ESimpleCurve::Type>& AlertFlyoutCurveField() { return *GetNativePointerField<TEnumAsByte<ESimpleCurve::Type>*>(this, "UHUDActiveMissionWidget.AlertFlyoutCurve"); }
	UE::Math::TVector2<double>& AlertOffscreenTransformField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UHUDActiveMissionWidget.AlertOffscreenTransform"); }
	UE::Math::TVector2<double>& TopAlertOffscreenTransformField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UHUDActiveMissionWidget.TopAlertOffscreenTransform"); }
	USoundBase*& DefaultPositiveMissionAlertSoundField() { return *GetNativePointerField<USoundBase**>(this, "UHUDActiveMissionWidget.DefaultPositiveMissionAlertSound"); }
	USoundBase*& DefaultNeutralMissionAlertSoundField() { return *GetNativePointerField<USoundBase**>(this, "UHUDActiveMissionWidget.DefaultNeutralMissionAlertSound"); }
	USoundBase*& DefaultNegativeMissionAlertSoundField() { return *GetNativePointerField<USoundBase**>(this, "UHUDActiveMissionWidget.DefaultNegativeMissionAlertSound"); }
	FName& AlertEntryIconContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertEntryIconContainerName"); }
	FName& AlertEntryIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertEntryIconName"); }
	FName& AlertCountTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertCountTextBlockName"); }
	FName& AlertContentTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertContentTextBlockName"); }
	FName& RacePanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.RacePanelName"); }
	FName& RacePositionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.RacePositionTextBlockName"); }
	FName& RaceMaxPositionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.RaceMaxPositionTextBlockName"); }
	FName& MissionTimeValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionTimeValueTextBlockName"); }
	FName& BestRaceTimeNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.BestRaceTimeName"); }
	FLinearColor& ObjectiveTimeRemainingProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.ObjectiveTimeRemainingProgressBarColor"); }
	FLinearColor& LowObjectiveTimeRemainingProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.LowObjectiveTimeRemainingProgressBarColor"); }
	FLinearColor& PhaseReqTextColor_NegativeField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqTextColor_Negative"); }
	FLinearColor& PhaseReqTextColor_NeutralField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqTextColor_Neutral"); }
	FLinearColor& PhaseReqTextColor_PositiveField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqTextColor_Positive"); }
	FLinearColor& PhaseReqProgressColor_NegativeField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqProgressColor_Negative"); }
	FLinearColor& PhaseReqProgressColor_NeutralField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqProgressColor_Neutral"); }
	FLinearColor& PhaseReqProgressColor_PositiveField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqProgressColor_Positive"); }
	float& OpacityForSlashAndMaxValueTextField() { return *GetNativePointerField<float*>(this, "UHUDActiveMissionWidget.OpacityForSlashAndMaxValueText"); }
	double& LastEffectsListSyncTimeField() { return *GetNativePointerField<double*>(this, "UHUDActiveMissionWidget.LastEffectsListSyncTime"); }
	UTextBlock*& BestRaceTimeTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.BestRaceTimeTextBlock"); }
	UWidget*& TopMissionAlertFlyoutContainerField() { return *GetNativePointerField<UWidget**>(this, "UHUDActiveMissionWidget.TopMissionAlertFlyoutContainer"); }
	int& MaxWorldBuffsDisplayedAtOnceField() { return *GetNativePointerField<int*>(this, "UHUDActiveMissionWidget.MaxWorldBuffsDisplayedAtOnce"); }
	TArray<UUserWidget*, TSizedDefaultAllocator<32> >& PhaseRequirementWidgetsField() { return *GetNativePointerField<TArray<UUserWidget*, TSizedDefaultAllocator<32> >*>(this, "UHUDActiveMissionWidget.PhaseRequirementWidgets"); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >& ActiveMissionVisibilityWidgetsField() { return *GetNativePointerField<TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UHUDActiveMissionWidget.ActiveMissionVisibilityWidgets"); }
	UTextBlock*& MissionNameTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.MissionNameTextBlock"); }
	UTextBlock*& MissionDifficultyTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.MissionDifficultyTextBlock"); }
	UTextBlock*& MissionDescTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.MissionDescTextBlock"); }
	UTextBlock*& ObjectiveTimeValueTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.ObjectiveTimeValueTextBlock"); }
	UTextBlock*& ObjectiveTimeLabelTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.ObjectiveTimeLabelTextBlock"); }
	UPanelWidget*& ObjectiveTimePanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.ObjectiveTimePanel"); }
	UProgressBar*& ObjectiveTimeProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UHUDActiveMissionWidget.ObjectiveTimeProgressBar"); }
	UPanelWidget*& MissionPhaseRequirementContainerField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.MissionPhaseRequirementContainer"); }
	UBorder*& MissionDifficultyPanelField() { return *GetNativePointerField<UBorder**>(this, "UHUDActiveMissionWidget.MissionDifficultyPanel"); }
	UTextBlock*& RacePositionTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.RacePositionTextBlock"); }
	UTextBlock*& RaceMaxPositionTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.RaceMaxPositionTextBlock"); }
	UPanelWidget*& RacePanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.RacePanel"); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >& MissionStatTrackerVisibilityWidgetsField() { return *GetNativePointerField<TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UHUDActiveMissionWidget.MissionStatTrackerVisibilityWidgets"); }
	UPanelWidget*& MissionStatTrackerContainerField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.MissionStatTrackerContainer"); }
	UTextBlock*& MissionAlertTitleTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.MissionAlertTitleTextBlock"); }
	UBorder*& MissionAlertBorderField() { return *GetNativePointerField<UBorder**>(this, "UHUDActiveMissionWidget.MissionAlertBorder"); }
	UWidget*& MissionAlertFlyoutContainerField() { return *GetNativePointerField<UWidget**>(this, "UHUDActiveMissionWidget.MissionAlertFlyoutContainer"); }
	UPanelWidget*& MissionAlertEntryContainerField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.MissionAlertEntryContainer"); }
	UTextBlock*& TopMissionAlertTitleTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.TopMissionAlertTitleTextBlock"); }
	UBorder*& TopMissionAlertBorderField() { return *GetNativePointerField<UBorder**>(this, "UHUDActiveMissionWidget.TopMissionAlertBorder"); }
	UPanelWidget*& TopMissionAlertEntryContainerField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.TopMissionAlertEntryContainer"); }
	UPanelWidget*& EffectsPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UHUDActiveMissionWidget.EffectsPanel"); }
	double& AlertFlyoutStartTimeField() { return *GetNativePointerField<double*>(this, "UHUDActiveMissionWidget.AlertFlyoutStartTime"); }
	double& TopAlertFlyoutStartTimeField() { return *GetNativePointerField<double*>(this, "UHUDActiveMissionWidget.TopAlertFlyoutStartTime"); }
	bool& bAlertFlyoutInField() { return *GetNativePointerField<bool*>(this, "UHUDActiveMissionWidget.bAlertFlyoutIn"); }
	bool& bWantsToBeVisibleField() { return *GetNativePointerField<bool*>(this, "UHUDActiveMissionWidget.bWantsToBeVisible"); }
	AMissionType*& ActiveMissionField() { return *GetNativePointerField<AMissionType**>(this, "UHUDActiveMissionWidget.ActiveMission"); }
	APrimalBuff_MissionData*& MissionDataField() { return *GetNativePointerField<APrimalBuff_MissionData**>(this, "UHUDActiveMissionWidget.MissionData"); }
	UUserWidget*& ActiveMissionWidgetField() { return *GetNativePointerField<UUserWidget**>(this, "UHUDActiveMissionWidget.ActiveMissionWidget"); }
	UCanvasPanel*& CustomStatusCanvasField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDActiveMissionWidget.CustomStatusCanvas"); }
	UTextBlock*& MissionTimeValueTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDActiveMissionWidget.MissionTimeValueTextBlock"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ActiveWorldBuffsLastSyncField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UHUDActiveMissionWidget.ActiveWorldBuffsLastSync"); }
	BitFieldValue<bool, unsigned __int32> bTopAlertFlyoutIn() { return { this, "UHUDActiveMissionWidget.bTopAlertFlyoutIn"}; }
	void SetActiveMissionVisible(bool bIsVisible) { NativeCall<void, bool>(this, "UHUDActiveMissionWidget.SetActiveMissionVisible(bool)", bIsVisible); }
	void SetMissionUIVisible(bool bIsVisible) { NativeCall<void, bool>(this, "UHUDActiveMissionWidget.SetMissionUIVisible(bool)", bIsVisible); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDActiveMissionWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void SyncPhaseRequirementWidget(UWidget* WidgetRoot, int ReqIndex, const FMissionPhaseRequirement& PhaseReq, bool bForActiveMission, UClass* MissionStatType) { NativeCall<void, UWidget*, int, const FMissionPhaseRequirement&, bool, UClass*>(this, "UHUDActiveMissionWidget.SyncPhaseRequirementWidget(UWidget*,int,FMissionPhaseRequirement&,bool,UClass*)", WidgetRoot, ReqIndex, PhaseReq, bForActiveMission, MissionStatType); }
	void HideMissionAlert(bool bInstant, bool bHideTop) { NativeCall<void, bool, bool>(this, "UHUDActiveMissionWidget.HideMissionAlert(bool,bool)", bInstant, bHideTop); }
	static UHUDActiveMissionWidget* GetActiveMissionWidget(APlayerController* PlayerController) { return NativeCall<UHUDActiveMissionWidget*, APlayerController*>(nullptr, "UHUDActiveMissionWidget.GetActiveMissionWidget(APlayerController*)", PlayerController); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UHUDActiveMissionWidget.AddToViewport(int)", ZOrder); }
	bool IsMissionAlertVisible(bool bIsTop) { return NativeCall<bool, bool>(this, "UHUDActiveMissionWidget.IsMissionAlertVisible(bool)", bIsTop); }
	bool HaveActiveMission() { return NativeCall<bool>(this, "UHUDActiveMissionWidget.HaveActiveMission()"); }
	void SetRacePanelVisibility(ESlateVisibility NewVisibility) { NativeCall<void, ESlateVisibility>(this, "UHUDActiveMissionWidget.SetRacePanelVisibility(ESlateVisibility)", NewVisibility); }
	void SyncEffectsList() { NativeCall<void>(this, "UHUDActiveMissionWidget.SyncEffectsList()"); }
};
