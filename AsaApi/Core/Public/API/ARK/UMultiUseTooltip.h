#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UMultiUseTooltip : public UToolTipWidget
{
public:
	UMultiUseTooltip() = delete;
	~UMultiUseTooltip() = delete;
	UMultiUseTooltip(const UMultiUseTooltip&) = delete;
	UMultiUseTooltip& operator=(const UMultiUseTooltip&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMultiUseTooltip"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMultiUseTooltip"); }

	UMultiUseActionWidget*& MultiUseActionWidget_UIField() { return *GetNativePointerField<UMultiUseActionWidget**>(this, "UMultiUseTooltip.MultiUseActionWidget_UI"); }
	AShooterPlayerController*& ForPCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "UMultiUseTooltip.ForPC"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& MyActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UMultiUseTooltip.MyActor"); }
	UWidget*& InfoBorderField() { return *GetNativePointerField<UWidget**>(this, "UMultiUseTooltip.InfoBorder"); }
	UPanelWidget*& InfoPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UMultiUseTooltip.InfoPanel"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& TextInfoArrayField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UMultiUseTooltip.TextInfoArray"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UMultiUseTooltip.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UMultiUseTooltip.UpdateToolTip(float)", DeltaSeconds); }
};
