#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UTrackingItemUI : public UPrimalUI
{
public:
	UTrackingItemUI() = delete;
	~UTrackingItemUI() = delete;
	UTrackingItemUI(const UTrackingItemUI&) = delete;
	UTrackingItemUI& operator=(const UTrackingItemUI&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTrackingItemUI"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTrackingItemUI"); }

	UPrimalRichTextBlock*& ItemInfoLabel1Field() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UTrackingItemUI.ItemInfoLabel1"); }
	UPrimalRichTextBlock*& ItemInfoLabel2Field() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UTrackingItemUI.ItemInfoLabel2"); }
	UPrimalRichTextBlock*& ItemInfoLabel3Field() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UTrackingItemUI.ItemInfoLabel3"); }
	UImage*& TrackEngramIcon1Field() { return *GetNativePointerField<UImage**>(this, "UTrackingItemUI.TrackEngramIcon1"); }
	UImage*& TrackEngramIcon2Field() { return *GetNativePointerField<UImage**>(this, "UTrackingItemUI.TrackEngramIcon2"); }
	UImage*& TrackEngramIcon3Field() { return *GetNativePointerField<UImage**>(this, "UTrackingItemUI.TrackEngramIcon3"); }
	UWidget*& SlotEngram1Field() { return *GetNativePointerField<UWidget**>(this, "UTrackingItemUI.SlotEngram1"); }
	UWidget*& SlotEngram2Field() { return *GetNativePointerField<UWidget**>(this, "UTrackingItemUI.SlotEngram2"); }
	UWidget*& SlotEngram3Field() { return *GetNativePointerField<UWidget**>(this, "UTrackingItemUI.SlotEngram3"); }
	UTextBlock*& EngramName1Field() { return *GetNativePointerField<UTextBlock**>(this, "UTrackingItemUI.EngramName1"); }
	UTextBlock*& EngramName2Field() { return *GetNativePointerField<UTextBlock**>(this, "UTrackingItemUI.EngramName2"); }
	UTextBlock*& EngramName3Field() { return *GetNativePointerField<UTextBlock**>(this, "UTrackingItemUI.EngramName3"); }
	UTextBlock*& MaxQuantityEngram1Field() { return *GetNativePointerField<UTextBlock**>(this, "UTrackingItemUI.MaxQuantityEngram1"); }
	UTextBlock*& MaxQuantityEngram2Field() { return *GetNativePointerField<UTextBlock**>(this, "UTrackingItemUI.MaxQuantityEngram2"); }
	UTextBlock*& MaxQuantityEngram3Field() { return *GetNativePointerField<UTextBlock**>(this, "UTrackingItemUI.MaxQuantityEngram3"); }
	int& MaxNumberTrackingInfoField() { return *GetNativePointerField<int*>(this, "UTrackingItemUI.MaxNumberTrackingInfo"); }
	TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>& InventorReferenceField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalInventoryComponent, FWeakObjectPtr>*>(this, "UTrackingItemUI.InventorReference"); }
	bool& bExtendendHUDActivatedCachedField() { return *GetNativePointerField<bool*>(this, "UTrackingItemUI.bExtendendHUDActivatedCached"); }
	float& LastTimeUpdatedField() { return *GetNativePointerField<float*>(this, "UTrackingItemUI.LastTimeUpdated"); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UTrackingItemUI.AddToViewport(int)", ZOrder); }
	void UpdateTrackingInfoBP() { NativeCall<void>(this, "UTrackingItemUI.UpdateTrackingInfoBP()"); }
	void RemoveInfoTrackIndex(int Index) { NativeCall<void, int>(this, "UTrackingItemUI.RemoveInfoTrackIndex(int)", Index); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UTrackingItemUI.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void UpdateTrackingInfo() { NativeCall<void>(this, "UTrackingItemUI.UpdateTrackingInfo()"); }
};
