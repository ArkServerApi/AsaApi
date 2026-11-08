#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UToolTipWidget : public UPrimalUserWidget
{
public:
	UToolTipWidget() = delete;
	~UToolTipWidget() = delete;
	UToolTipWidget(const UToolTipWidget&) = delete;
	UToolTipWidget& operator=(const UToolTipWidget&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UToolTipWidget"); }

	FString& ToolTipLabelNameField() { return *GetNativePointerField<FString*>(this, "UToolTipWidget.ToolTipLabelName"); }
	int& WidgetWidthField() { return *GetNativePointerField<int*>(this, "UToolTipWidget.WidgetWidth"); }
	int& WidgetHeightField() { return *GetNativePointerField<int*>(this, "UToolTipWidget.WidgetHeight"); }
	UE::Math::TVector2<double>& CustomOverlayScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UToolTipWidget.CustomOverlayScale"); }
	bool& bUseBPInitToolTipField() { return *GetNativePointerField<bool*>(this, "UToolTipWidget.bUseBPInitToolTip"); }
	bool& bUseBPUpdateToolTipField() { return *GetNativePointerField<bool*>(this, "UToolTipWidget.bUseBPUpdateToolTip"); }
	TWeakObjectPtr<UWidget, FWeakObjectPtr>& SponsorWidgetField() { return *GetNativePointerField<TWeakObjectPtr<UWidget, FWeakObjectPtr>*>(this, "UToolTipWidget.SponsorWidget"); }
	TWeakObjectPtr<UObject, FWeakObjectPtr>& MyDataListEntryObjectField() { return *GetNativePointerField<TWeakObjectPtr<UObject, FWeakObjectPtr>*>(this, "UToolTipWidget.MyDataListEntryObject"); }
	TWeakObjectPtr<UCanvasPanelSlot, FWeakObjectPtr>& MyCanvasSlotPanelField() { return *GetNativePointerField<TWeakObjectPtr<UCanvasPanelSlot, FWeakObjectPtr>*>(this, "UToolTipWidget.MyCanvasSlotPanel"); }
	int& LastDisplayFrameCounterField() { return *GetNativePointerField<int*>(this, "UToolTipWidget.LastDisplayFrameCounter"); }
	bool& OverlayRetainScreenProjectionFromWorldField() { return *GetNativePointerField<bool*>(this, "UToolTipWidget.OverlayRetainScreenProjectionFromWorld"); }
	UE::Math::TVector<double>& OverlayScreenProjectionWorldPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UToolTipWidget.OverlayScreenProjectionWorldPosition"); }
	UE::Math::TVector2<double>& OverlayScreenProjectionPositionOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UToolTipWidget.OverlayScreenProjectionPositionOffset"); }
	UTextBlock*& ToolTipLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UToolTipWidget.ToolTipLabel"); }
	BitFieldValue<bool, unsigned __int32> bDoOverlayFade() { return { this, "UToolTipWidget.bDoOverlayFade"}; }
	BitFieldValue<bool, unsigned char> bIsEmbeddedToolTip() { return { this, "UToolTipWidget.bIsEmbeddedToolTip"}; }
	void ProcessSplitscreenAndAddToViewport(bool ScaleX, int YOffsetDirection) { NativeCall<void, bool, int>(this, "UToolTipWidget.ProcessSplitscreenAndAddToViewport(bool,int)", ScaleX, YOffsetDirection); }
	void BPUpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UToolTipWidget.BPUpdateToolTip(float)", DeltaSeconds); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	bool RecalculateGeometryAfterParentPaint() { return NativeCall<bool>(this, "UToolTipWidget.RecalculateGeometryAfterParentPaint()"); }
	void BPInitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, UObject* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, UObject*>(this, "UToolTipWidget.BPInitToolTip(AShooterPlayerController*,FString&,UObject*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UToolTipWidget"); }
};
