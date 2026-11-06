#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UMissionDispatcherToolTipWidget : public UToolTipWidget
{
public:
	UMissionDispatcherToolTipWidget() = delete;
	~UMissionDispatcherToolTipWidget() = delete;
	UMissionDispatcherToolTipWidget(const UMissionDispatcherToolTipWidget&) = delete;
	UMissionDispatcherToolTipWidget& operator=(const UMissionDispatcherToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMissionDispatcherToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMissionDispatcherToolTipWidget"); }

	FString& MissionNameLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionDispatcherToolTipWidget.MissionNameLabelName"); }
	FString& TitleLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionDispatcherToolTipWidget.TitleLabelName"); }
	FString& MissionStatusLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionDispatcherToolTipWidget.MissionStatusLabelName"); }
	AShooterPlayerController*& ForPCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "UMissionDispatcherToolTipWidget.ForPC"); }
	AMissionDispatcher*& MissionDispatcherField() { return *GetNativePointerField<AMissionDispatcher**>(this, "UMissionDispatcherToolTipWidget.MissionDispatcher"); }
	UTextBlock*& MissionDescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionDispatcherToolTipWidget.MissionDescriptionLabel"); }
	UTextBlock*& TitleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionDispatcherToolTipWidget.TitleLabel"); }
	UPrimalRichTextBlock*& MissionStatusLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UMissionDispatcherToolTipWidget.MissionStatusLabel"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UMissionDispatcherToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UMissionDispatcherToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
};
