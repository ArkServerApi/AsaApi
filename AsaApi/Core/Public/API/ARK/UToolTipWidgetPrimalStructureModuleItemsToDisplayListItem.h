#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem : public UPrimalUserWidget
{
public:
	UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem() = delete;
	~UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem() = delete;
	UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem(const UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem&) = delete;
	UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem& operator=(const UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem"); }

	UImage*& ItemIconImageField() { return *GetNativePointerField<UImage**>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.ItemIconImage"); }
	UTextBlock*& ItemQuantityTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.ItemQuantityTextBlock"); }
	void InitListItem(UTexture2D* NewIcon, int NewQuantity) { NativeCall<void, UTexture2D*, int>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.InitListItem(UTexture2D*,int)", NewIcon, NewQuantity); }
};
