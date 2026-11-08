#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UToolTipWidgetPrimalStructureModuleItemsToDisplay : public UPrimalUserWidget
{
public:
	UToolTipWidgetPrimalStructureModuleItemsToDisplay() = delete;
	~UToolTipWidgetPrimalStructureModuleItemsToDisplay() = delete;
	UToolTipWidgetPrimalStructureModuleItemsToDisplay(const UToolTipWidgetPrimalStructureModuleItemsToDisplay&) = delete;
	UToolTipWidgetPrimalStructureModuleItemsToDisplay& operator=(const UToolTipWidgetPrimalStructureModuleItemsToDisplay&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UToolTipWidgetPrimalStructureModuleItemsToDisplay"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UToolTipWidgetPrimalStructureModuleItemsToDisplay"); }

	UTextBlock*& HeaderTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplay.HeaderTextBlock"); }
	UScrollBox*& ItemsToDisplayContainerField() { return *GetNativePointerField<UScrollBox**>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplay.ItemsToDisplayContainer"); }
};
