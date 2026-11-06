#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UTooltipSmartLayoutWidget : public UToolTipWidget
{
public:
	UTooltipSmartLayoutWidget() = delete;
	~UTooltipSmartLayoutWidget() = delete;
	UTooltipSmartLayoutWidget(const UTooltipSmartLayoutWidget&) = delete;
	UTooltipSmartLayoutWidget& operator=(const UTooltipSmartLayoutWidget&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTooltipSmartLayoutWidget"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UTooltipSmartLayoutWidget"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UTooltipSmartLayoutWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void RefreshSlotLayout() { NativeCall<void>(this, "UTooltipSmartLayoutWidget.RefreshSlotLayout()"); }
};
