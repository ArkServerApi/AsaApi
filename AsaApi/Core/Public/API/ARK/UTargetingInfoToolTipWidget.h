#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UTargetingInfoToolTipWidget : public UToolTipWidget
{
public:
	UTargetingInfoToolTipWidget() = delete;
	~UTargetingInfoToolTipWidget() = delete;
	UTargetingInfoToolTipWidget(const UTargetingInfoToolTipWidget&) = delete;
	UTargetingInfoToolTipWidget& operator=(const UTargetingInfoToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTargetingInfoToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTargetingInfoToolTipWidget"); }

	AShooterPlayerController*& ForPCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "UTargetingInfoToolTipWidget.ForPC"); }
	UTextBlock*& TitleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTargetingInfoToolTipWidget.TitleLabel"); }
	UTextBlock*& HealthDescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTargetingInfoToolTipWidget.HealthDescriptionLabel"); }
	UTextBlock*& TorpidityDescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTargetingInfoToolTipWidget.TorpidityDescriptionLabel"); }
	UPrimalRichTextBlock*& InfoLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UTargetingInfoToolTipWidget.InfoLabel"); }
	UPanelWidget*& HealthPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTargetingInfoToolTipWidget.HealthPanel"); }
	UPanelWidget*& TorpidityPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UTargetingInfoToolTipWidget.TorpidityPanel"); }
	UProgressBar*& HealthProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UTargetingInfoToolTipWidget.HealthProgressBar"); }
	UProgressBar*& TorpidityProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UTargetingInfoToolTipWidget.TorpidityProgressBar"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& TargetActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UTargetingInfoToolTipWidget.TargetActor"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UTargetingInfoToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void RefreshInfo() { NativeCall<void>(this, "UTargetingInfoToolTipWidget.RefreshInfo()"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UTargetingInfoToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
};
