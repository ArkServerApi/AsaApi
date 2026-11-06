#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UPrimalStructureToolTipWidget : public UToolTipWidget
{
public:
	UPrimalStructureToolTipWidget() = delete;
	~UPrimalStructureToolTipWidget() = delete;
	UPrimalStructureToolTipWidget(const UPrimalStructureToolTipWidget&) = delete;
	UPrimalStructureToolTipWidget& operator=(const UPrimalStructureToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalStructureToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalStructureToolTipWidget"); }

	AShooterPlayerController*& ForPCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "UPrimalStructureToolTipWidget.ForPC"); }
	UTextBlock*& StructureNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalStructureToolTipWidget.StructureNameLabel"); }
	UTextBlock*& HealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalStructureToolTipWidget.HealthLabel"); }
	UTextBlock*& ContainterItemsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalStructureToolTipWidget.ContainterItemsLabel"); }
	UProgressBar*& HealthBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalStructureToolTipWidget.HealthBar"); }
	UPrimalRichTextBlock*& RequirementsLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalStructureToolTipWidget.RequirementsLabel"); }
	UPanelWidget*& RepairPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalStructureToolTipWidget.RepairPanel"); }
	UPanelWidget*& HealthPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalStructureToolTipWidget.HealthPanel"); }
	UPanelWidget*& InfoPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalStructureToolTipWidget.InfoPanel"); }
	UPanelWidget*& ContainerBoxField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalStructureToolTipWidget.ContainerBox"); }
	UVerticalBox*& ModulePanelField() { return *GetNativePointerField<UVerticalBox**>(this, "UPrimalStructureToolTipWidget.ModulePanel"); }
	UWidget*& InfoBorderField() { return *GetNativePointerField<UWidget**>(this, "UPrimalStructureToolTipWidget.InfoBorder"); }
	UMultiUseActionWidget*& MultiUseActionWidget_UIField() { return *GetNativePointerField<UMultiUseActionWidget**>(this, "UPrimalStructureToolTipWidget.MultiUseActionWidget_UI"); }
	TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>& MyStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructure, FWeakObjectPtr>*>(this, "UPrimalStructureToolTipWidget.MyStructure"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& TextInfoArrayField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalStructureToolTipWidget.TextInfoArray"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalStructureToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalStructureToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
};
