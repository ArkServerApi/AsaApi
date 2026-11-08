#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UHUDPingsContainer : public UPrimalUI
{
public:
	UHUDPingsContainer() = delete;
	~UHUDPingsContainer() = delete;
	UHUDPingsContainer(const UHUDPingsContainer&) = delete;
	UHUDPingsContainer& operator=(const UHUDPingsContainer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDPingsContainer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDPingsContainer"); }

	FName& PingContainerCanvasNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingsContainer.PingContainerCanvasName"); }
	UCanvasPanel*& PingContainerCanvasField() { return *GetNativePointerField<UCanvasPanel**>(this, "UHUDPingsContainer.PingContainerCanvas"); }
	TArray<UUserWidget*, TSizedDefaultAllocator<32> >& SpawnedPingWidgetsField() { return *GetNativePointerField<TArray<UUserWidget*, TSizedDefaultAllocator<32> >*>(this, "UHUDPingsContainer.SpawnedPingWidgets"); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UHUDPingsContainer.AddToViewport(int)", ZOrder); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDPingsContainer.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	bool DestroyPingWidget(int AtIndex) { return NativeCall<bool, int>(this, "UHUDPingsContainer.DestroyPingWidget(int)", AtIndex); }
};
