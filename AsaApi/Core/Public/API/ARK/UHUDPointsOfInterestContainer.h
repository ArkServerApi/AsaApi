#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UHUDPointsOfInterestContainer : public UPrimalUI
{
public:
	UHUDPointsOfInterestContainer() = delete;
	~UHUDPointsOfInterestContainer() = delete;
	UHUDPointsOfInterestContainer(const UHUDPointsOfInterestContainer&) = delete;
	UHUDPointsOfInterestContainer& operator=(const UHUDPointsOfInterestContainer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDPointsOfInterestContainer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDPointsOfInterestContainer"); }

	FName& PointContainerCanvasNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointsOfInterestContainer.PointContainerCanvasName"); }
	UCanvasPanel*& PointContainerCanvasField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDPointsOfInterestContainer.PointContainerCanvas"); }
	TArray<UUserWidget*, TSizedDefaultAllocator<32> >& SpawnedPointWidgetsField() { return *GetNativePointerField<TArray<UUserWidget*, TSizedDefaultAllocator<32> >*>(this, "UHUDPointsOfInterestContainer.SpawnedPointWidgets"); }
	UTrackedDinoListEntryWidget*& TamingPOITooltipField() { return *GetNativePointerField<UTrackedDinoListEntryWidget**>(this, "UHUDPointsOfInterestContainer.TamingPOITooltip"); }
	UTrackedDinoListEntryWidget*& TrackedDinoPOITooltipField() { return *GetNativePointerField<UTrackedDinoListEntryWidget**>(this, "UHUDPointsOfInterestContainer.TrackedDinoPOITooltip"); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UHUDPointsOfInterestContainer.AddToViewport(int)", ZOrder); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDPointsOfInterestContainer.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void ProcessSplitscreenScaling(bool ScaleX) { NativeCall<void, bool>(this, "UHUDPointsOfInterestContainer.ProcessSplitscreenScaling(bool)", ScaleX); }
};
