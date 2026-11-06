#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UHUDPointOfInterestWidget : public UPrimalUI
{
public:
	UHUDPointOfInterestWidget() = delete;
	~UHUDPointOfInterestWidget() = delete;
	UHUDPointOfInterestWidget(const UHUDPointOfInterestWidget&) = delete;
	UHUDPointOfInterestWidget& operator=(const UHUDPointOfInterestWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDPointOfInterestWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDPointOfInterestWidget"); }

	FName& OuterContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OuterContainerName"); }
	FName& PointTitleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointTitleTextBlockName"); }
	FName& PointDescTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointDescTextBlockName"); }
	FName& PointIconPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointIconPanelName"); }
	FName& PointIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointIconName"); }
	FName& PointSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointSwitcherName"); }
	FName& PointOffScreenArrowNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointOffScreenArrowName"); }
	FName& PointOffScreenIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointOffScreenIconName"); }
	FName& OnScreenPrimaryPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenPrimaryPanelName"); }
	FName& OffScreenPrimaryPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenPrimaryPanelName"); }
	FName& OnScreenIndicatorImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenIndicatorImageName"); }
	FName& OffScreenIndicatorImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenIndicatorImageName"); }
	FName& OnScreenProgressPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenProgressPanelName"); }
	FName& OnScreenProgressLabelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenProgressLabelName"); }
	FName& OffScreenProgressPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenProgressPanelName"); }
	FName& OffScreenProgressLabelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenProgressLabelName"); }
	float& WidgetTitleHiddenIconRenderOffset_YField() { return *GetNativePointerField<float*>(this, "UHUDPointOfInterestWidget.WidgetTitleHiddenIconRenderOffset_Y"); }
	FPointOfInterestData& WidgetPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "UHUDPointOfInterestWidget.WidgetPointOfInterestData"); }
	UTexture2D*& FallbackIconField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDPointOfInterestWidget.FallbackIcon"); }
	USoundBase*& DefaultLocationAddedSoundField() { return *GetNativePointerField<USoundBase**>(this, "UHUDPointOfInterestWidget.DefaultLocationAddedSound"); }
	USoundBase*& DefaultLocationReachedSoundField() { return *GetNativePointerField<USoundBase**>(this, "UHUDPointOfInterestWidget.DefaultLocationReachedSound"); }
	float& OffScreenWidgetScaleField() { return *GetNativePointerField<float*>(this, "UHUDPointOfInterestWidget.OffScreenWidgetScale"); }
	UCanvasPanel*& OuterContainerField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDPointOfInterestWidget.OuterContainer"); }
	UTextBlock*& PointOfInterest_TitleField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPointOfInterestWidget.PointOfInterest_Title"); }
	UTextBlock*& PointOfInterest_DescField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPointOfInterestWidget.PointOfInterest_Desc"); }
	UCanvasPanel*& PointIconPanelField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDPointOfInterestWidget.PointIconPanel"); }
	UImage*& PointOfInterest_IconField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.PointOfInterest_Icon"); }
	UWidgetSwitcher*& PointOfInterest_SwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UHUDPointOfInterestWidget.PointOfInterest_Switcher"); }
	UImage*& PointOfInterest_OffScreenArrowField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.PointOfInterest_OffScreenArrow"); }
	UImage*& PointOfInterest_OffScreenIconField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.PointOfInterest_OffScreenIcon"); }
	UCanvasPanel*& OnScreenPrimaryPanelField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDPointOfInterestWidget.OnScreenPrimaryPanel"); }
	UCanvasPanel*& OffScreenPrimaryPanelField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDPointOfInterestWidget.OffScreenPrimaryPanel"); }
	UImage*& OnScreenIndicatorImageField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.OnScreenIndicatorImage"); }
	UImage*& OffScreenIndicatorImageField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.OffScreenIndicatorImage"); }
	UTextBlock*& OnScreenProgressLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPointOfInterestWidget.OnScreenProgressLabel"); }
	UTextBlock*& OffScreenProgressLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPointOfInterestWidget.OffScreenProgressLabel"); }
	UTextBlock*& DistanceLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDPointOfInterestWidget.DistanceLabel"); }
	UImage*& OnScreenProgressMaterialHostField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.OnScreenProgressMaterialHost"); }
	UImage*& SecondaryOnScreenProgressMaterialHostField() { return *GetNativePointerField<UImage**>(this, "UHUDPointOfInterestWidget.SecondaryOnScreenProgressMaterialHost"); }
	UWidget*& PointTitlePanelField() { return *GetNativePointerField<UWidget**>(this, "UHUDPointOfInterestWidget.PointTitlePanel"); }
	bool& bOnlyVisibleOffScreenField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bOnlyVisibleOffScreen"); }
	bool& bOnlyVisibleOnScreenField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bOnlyVisibleOnScreen"); }
	bool& bAlwaysVisibleField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bAlwaysVisible"); }
	bool& bDismissOverlayVisislbeField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bDismissOverlayVisislbe"); }
	BitFieldValue<bool, unsigned __int32> bIsPulsing() { return { this, "UHUDPointOfInterestWidget.bIsPulsing"}; }
	bool UpdateWidgetPointOfInterestData(const FPointOfInterestData& WithPointData) { return NativeCall<bool, const FPointOfInterestData&>(this, "UHUDPointOfInterestWidget.UpdateWidgetPointOfInterestData(FPointOfInterestData&)", WithPointData); }
	void SetDismissOverlay(bool Visible) { NativeCall<void, bool>(this, "UHUDPointOfInterestWidget.SetDismissOverlay(bool)", Visible); }
	USoundBase* GetPointOfInterestAddedSound() { return NativeCall<USoundBase*>(this, "UHUDPointOfInterestWidget.GetPointOfInterestAddedSound()"); }
	USoundBase* GetPointOfInterestReachedSound() { return NativeCall<USoundBase*>(this, "UHUDPointOfInterestWidget.GetPointOfInterestReachedSound()"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UHUDPointOfInterestWidget.RemoveFromViewport()"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDPointOfInterestWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UHUDPointOfInterestWidget.AddToViewport(int)", ZOrder); }
	static UE::Math::TTransform<double>* GetPointOfInterestTransform(UE::Math::TTransform<double>* result, const FPointOfInterestData& FromPointData) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestTransform(FPointOfInterestData&)", result, FromPointData); }
	static UE::Math::TRotator<double>* GetPointOfInterestWorldRotation(UE::Math::TRotator<double>* result, const FPointOfInterestData& FromPointData) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestWorldRotation(FPointOfInterestData&)", result, FromPointData); }
	static bool CanActorViewPointOfInterest(const AActor* ForActor, const FPointOfInterestData& CanViewPointData) { return NativeCall<bool, const AActor*, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.CanActorViewPointOfInterest(AActor*,FPointOfInterestData&)", ForActor, CanViewPointData); }
	bool HasValidPointOfInterestData() { return NativeCall<bool>(this, "UHUDPointOfInterestWidget.HasValidPointOfInterestData()"); }
	static UE::Math::TVector<double>* GetPointOfInterestWorldLocation(UE::Math::TVector<double>* result, const FPointOfInterestData& FromPointData) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestWorldLocation(FPointOfInterestData&)", result, FromPointData); }
	void DestroyPointOfInterestWidget_Implementation() { NativeCall<void>(this, "UHUDPointOfInterestWidget.DestroyPointOfInterestWidget_Implementation()"); }
	static bool IsPointOfInterestInitialized(const FPointOfInterestData& ForPointData) { return NativeCall<bool, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.IsPointOfInterestInitialized(FPointOfInterestData&)", ForPointData); }
	bool UpdateWidgetPointOfInterestData_Implementation(const FPointOfInterestData& WithPointData) { return NativeCall<bool, const FPointOfInterestData&>(this, "UHUDPointOfInterestWidget.UpdateWidgetPointOfInterestData_Implementation(FPointOfInterestData&)", WithPointData); }
	const FPointOfInterestData& GetPointOfInterestData() { return NativeCall<const FPointOfInterestData&>(this, "UHUDPointOfInterestWidget.GetPointOfInterestData()"); }
	static UE::Math::TTransform<double>* GetPointOfInterestCosmeticActorTransform(UE::Math::TTransform<double>* result, const FPointOfInterestData& FromPointData) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestCosmeticActorTransform(FPointOfInterestData&)", result, FromPointData); }
	static bool IsPointOfInterestValid(const FPointOfInterestData& ForPointData) { return NativeCall<bool, const FPointOfInterestData&>(nullptr, "UHUDPointOfInterestWidget.IsPointOfInterestValid(FPointOfInterestData&)", ForPointData); }
	void InitializePointOfInterestWidget_Implementation(const FPointOfInterestData& FromPointData) { NativeCall<void, const FPointOfInterestData&>(this, "UHUDPointOfInterestWidget.InitializePointOfInterestWidget_Implementation(FPointOfInterestData&)", FromPointData); }
};
