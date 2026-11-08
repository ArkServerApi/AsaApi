#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UItemFilterWidget : public UPrimalUserWidget
{
public:
	UItemFilterWidget() = delete;
	~UItemFilterWidget() = delete;
	UItemFilterWidget(const UItemFilterWidget&) = delete;
	UItemFilterWidget& operator=(const UItemFilterWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UItemFilterWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UItemFilterWidget"); }

	UTextBlock*& LabelStringField() { return *GetNativePointerField<UTextBlock**>(this, "UItemFilterWidget.LabelString"); }
	UTextBlock*& FilterStringField() { return *GetNativePointerField<UTextBlock**>(this, "UItemFilterWidget.FilterString"); }
	UButton*& ClearFilterButtonField() { return *GetNativePointerField<UButton**>(this, "UItemFilterWidget.ClearFilterButton"); }
	UWidget*& FilterBorderField() { return *GetNativePointerField<UWidget**>(this, "UItemFilterWidget.FilterBorder"); }
	UImage*& FilterImageField() { return *GetNativePointerField<UImage**>(this, "UItemFilterWidget.FilterImage"); }
	FOnFilterCleared& OnFilterClearedField() { return *GetNativePointerField<FOnFilterCleared*>(this, "UItemFilterWidget.OnFilterCleared"); }
	void SetFilterItem(UPrimalItem* Item) { NativeCall<void, UPrimalItem*>(this, "UItemFilterWidget.SetFilterItem(UPrimalItem*)", Item); }
	void OnClickedClearFilter(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UItemFilterWidget.OnClickedClearFilter(UWidget*)", clickedWidget); }
	void ClearFilter() { NativeCall<void>(this, "UItemFilterWidget.ClearFilter()"); }
	bool Initialize() { return NativeCall<bool>(this, "UItemFilterWidget.Initialize()"); }
};
