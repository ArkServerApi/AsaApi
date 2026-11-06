#pragma once
#include "BulkForward.h"
#include "UGameViewportClient.h"

struct UShooterGameViewportClient : public UGameViewportClient
{
public:
	UShooterGameViewportClient() = delete;
	~UShooterGameViewportClient() = delete;
	UShooterGameViewportClient(const UShooterGameViewportClient&) = delete;
	UShooterGameViewportClient& operator=(const UShooterGameViewportClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGameViewportClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGameViewportClient"); }

	TArray<UObject*, TSizedDefaultAllocator<32> >& ViewPortWidgetsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UShooterGameViewportClient.ViewPortWidgets"); }
	USoundBase*& LoadingMusicField() { return *GetNativePointerField<USoundBase**>(this, "UShooterGameViewportClient.LoadingMusic"); }
	UFont*& InfoFontField() { return *GetNativePointerField<UFont**>(this, "UShooterGameViewportClient.InfoFont"); }
	bool& bDisplayedStartupTutorialField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bDisplayedStartupTutorial"); }
	bool& bActiveScreenFadeField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bActiveScreenFade"); }
	double& LastTimeLocalPlayerRemovedField() { return *GetNativePointerField<double*>(this, "UShooterGameViewportClient.LastTimeLocalPlayerRemoved"); }
	int& NumInventoryOpensWithoutGCField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.NumInventoryOpensWithoutGC"); }
	float& LastGarbageCollectionTimeField() { return *GetNativePointerField<float*>(this, "UShooterGameViewportClient.LastGarbageCollectionTime"); }
	UPrimalUI_Toast*& UpdatingModsUIField() { return *GetNativePointerField<UPrimalUI_Toast**>(this, "UShooterGameViewportClient.UpdatingModsUI"); }
	int& UpdatingModsNumField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.UpdatingModsNum"); }
	int& IncrementedUpdatingModsField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.IncrementedUpdatingMods"); }
	bool& bSettingModsCounterField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bSettingModsCounter"); }
	bool& VideoReplayEnabledField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.VideoReplayEnabled"); }
	int& NumReplaySecondsToStoreField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.NumReplaySecondsToStore"); }
	IConsoleVariable*& FrameGenerationCVarField() { return *GetNativePointerField<IConsoleVariable**>(this, "UShooterGameViewportClient.FrameGenerationCVar"); }
	bool& DidShowOnDeadSplitscreenDialogField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.DidShowOnDeadSplitscreenDialog"); }
	UAudioComponent*& LoadingMusicInstanceField() { return *GetNativePointerField<UAudioComponent**>(this, "UShooterGameViewportClient.LoadingMusicInstance"); }
	TArray<UCustomCanvasWidget*, TSizedDefaultAllocator<32> >& CustomCanvasWidgetsField() { return *GetNativePointerField<TArray<UCustomCanvasWidget*, TSizedDefaultAllocator<32> >*>(this, "UShooterGameViewportClient.CustomCanvasWidgets"); }
	bool& IsForgroundField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.IsForground"); }
	int& CachedControllerIDField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.CachedControllerID"); }
	bool& bSpawningNewPlayerField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bSpawningNewPlayer"); }
	bool& bGamepadActive_LastCheckField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bGamepadActive_LastCheck"); }
	TWeakObjectPtr<UPrimalUI, FWeakObjectPtr>& PreviousTopUIField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalUI, FWeakObjectPtr>*>(this, "UShooterGameViewportClient.PreviousTopUI"); }
	FString& RequestedPNTNameField() { return *GetNativePointerField<FString*>(this, "UShooterGameViewportClient.RequestedPNTName"); }
	FString& RequestedPNTTypeField() { return *GetNativePointerField<FString*>(this, "UShooterGameViewportClient.RequestedPNTType"); }
	FString& RequestedPNTScreenshotField() { return *GetNativePointerField<FString*>(this, "UShooterGameViewportClient.RequestedPNTScreenshot"); }
	bool& bHasReceivedNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bHasReceivedNewsMessage"); }
	bool& bHasReceivedSPNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bHasReceivedSPNewsMessage"); }
	bool& bHasReceivedMPNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bHasReceivedMPNewsMessage"); }
	bool& bChangedViewDistanceScaleField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bChangedViewDistanceScale"); }
	float& lastLeftXDeltaField() { return *GetNativePointerField<float*>(this, "UShooterGameViewportClient.lastLeftXDelta"); }
	float& lastLeftYDeltaField() { return *GetNativePointerField<float*>(this, "UShooterGameViewportClient.lastLeftYDelta"); }
	float& lastRightXDeltaField() { return *GetNativePointerField<float*>(this, "UShooterGameViewportClient.lastRightXDelta"); }
	float& lastRightYDeltaField() { return *GetNativePointerField<float*>(this, "UShooterGameViewportClient.lastRightYDelta"); }
	FName& LastLockedInputTopUINameField() { return *GetNativePointerField<FName*>(this, "UShooterGameViewportClient.LastLockedInputTopUIName"); }
	int& CurrentIndexIntoCompressedTimedReplayFramesField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.CurrentIndexIntoCompressedTimedReplayFrames"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplayFrameColorBufferField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UShooterGameViewportClient.ReplayFrameColorBuffer"); }
	FRenderCommandFence& ReplayFrameRequestFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UShooterGameViewportClient.ReplayFrameRequestFence"); }
	bool& bInitiatedReplayBufferField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bInitiatedReplayBuffer"); }
	bool& bRequestedReplayFrameField() { return *GetNativePointerField<bool*>(this, "UShooterGameViewportClient.bRequestedReplayFrame"); }
	int& ReplayBufferCompressionQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.ReplayBufferCompressionQuality"); }
	FString& ReplayBufferCompressionImageFileFormatField() { return *GetNativePointerField<FString*>(this, "UShooterGameViewportClient.ReplayBufferCompressionImageFileFormat"); }
	double& LastTimeAddedReplayFrameField() { return *GetNativePointerField<double*>(this, "UShooterGameViewportClient.LastTimeAddedReplayFrame"); }
	int& DisableFrameInterpolationCounterField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.DisableFrameInterpolationCounter"); }
	int& TestBuildWatermarkCLField() { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.TestBuildWatermarkCL"); }
	bool AddLocalPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.AddLocalPlayer(int)", ControllerId); }
	void PreWorldTick(float DeltaTime) { NativeCall<void, float>(this, "UShooterGameViewportClient.PreWorldTick(float)", DeltaTime); }
	void LostFocus(FViewport* InViewport) { NativeCall<void, FViewport*>(this, "UShooterGameViewportClient.LostFocus(FViewport*)", InViewport); }
	bool IsHubUIOpen() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsHubUIOpen()"); }
	UPrimalUI* GetTopUI(int ControllerId) { return NativeCall<UPrimalUI*, int>(this, "UShooterGameViewportClient.GetTopUI(int)", ControllerId); }
	bool IsFinalCreditsShowing() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsFinalCreditsShowing()"); }
	bool AnyNonInventoryScenesWithMouseCapture(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UShooterGameViewportClient.AnyNonInventoryScenesWithMouseCapture(AShooterPlayerController*)", ForPC); }
	void RemoveAllExistingWidgets() { NativeCall<void>(this, "UShooterGameViewportClient.RemoveAllExistingWidgets()"); }
	void SetVideoReplayEnabled(bool ShouldEnabled) { NativeCall<void, bool>(this, "UShooterGameViewportClient.SetVideoReplayEnabled(bool)", ShouldEnabled); }
	UPrimalUI* GetTopUI(APlayerController* ForController) { return NativeCall<UPrimalUI*, APlayerController*>(this, "UShooterGameViewportClient.GetTopUI(APlayerController*)", ForController); }
	UPrimalUI* GetTopUI(ULocalPlayer* LocalPlayer) { return NativeCall<UPrimalUI*, ULocalPlayer*>(this, "UShooterGameViewportClient.GetTopUI(ULocalPlayer*)", LocalPlayer); }
	void HideLoadingScreen() { NativeCall<void>(this, "UShooterGameViewportClient.HideLoadingScreen()"); }
	void NotifyPlayerAdded(int PlayerIndex, ULocalPlayer* AddedPlayer) { NativeCall<void, int, ULocalPlayer*>(this, "UShooterGameViewportClient.NotifyPlayerAdded(int,ULocalPlayer*)", PlayerIndex, AddedPlayer); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent* inventoryComp, UPrimalItem* theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, bool>(this, "UShooterGameViewportClient.NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem*,bool)", inventoryComp, theItem, bEquippedItem); }
	void PostRender_Impl(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UShooterGameViewportClient.PostRender_Impl(UCanvas*)", Canvas); }
	bool IsSplitscreenAllowed() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsSplitscreenAllowed()"); }
	static UWorld* GetGameWorld() { return NativeCall<UWorld*>(nullptr, "UShooterGameViewportClient.GetGameWorld()"); }
	ULocalPlayer* GetFirstLocalPlayer() { return NativeCall<ULocalPlayer*>(this, "UShooterGameViewportClient.GetFirstLocalPlayer()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterGameViewportClient.Tick(float)", DeltaSeconds); }
	void PostInitProperties() { NativeCall<void>(this, "UShooterGameViewportClient.PostInitProperties()"); }
	bool IsUnderwaterPostprocess(APostProcessVolume* forVolume, const UE::Math::TVector<double>& AtViewLocation) { return NativeCall<bool, APostProcessVolume*, const UE::Math::TVector<double>&>(this, "UShooterGameViewportClient.IsUnderwaterPostprocess(APostProcessVolume*,UE::Math::TVector<double>&)", forVolume, AtViewLocation); }
	void PostRender(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UShooterGameViewportClient.PostRender(UCanvas*)", Canvas); }
	void OnLocalPlayerAddedOrRemoved() { NativeCall<void>(this, "UShooterGameViewportClient.OnLocalPlayerAddedOrRemoved()"); }
	bool InputKey(const FInputKeyEventArgs& EventArgs) { return NativeCall<bool, const FInputKeyEventArgs&>(this, "UShooterGameViewportClient.InputKey(FInputKeyEventArgs&)", EventArgs); }
	TArray<UPrimalUI*, TSizedDefaultAllocator<32> >* GetOpenedScenes(TArray<UPrimalUI*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalUI*, TSizedDefaultAllocator<32> >*, TArray<UPrimalUI*, TSizedDefaultAllocator<32> >*>(this, "UShooterGameViewportClient.GetOpenedScenes()", result); }
	bool ProcessScreenShots(FViewport* InViewport) { return NativeCall<bool, FViewport*>(this, "UShooterGameViewportClient.ProcessScreenShots(FViewport*)", InViewport); }
	void ReAdjustUI() { NativeCall<void>(this, "UShooterGameViewportClient.ReAdjustUI()"); }
	void GetGameViewportSize(int& SizeX, int& SizeY) { NativeCall<void, int&, int&>(this, "UShooterGameViewportClient.GetGameViewportSize(int&,int&)", SizeX, SizeY); }
	int GetNumScenes(bool bIncludeFooter) { return NativeCall<int, bool>(this, "UShooterGameViewportClient.GetNumScenes(bool)", bIncludeFooter); }
	void Shutdown() { NativeCall<void>(this, "UShooterGameViewportClient.Shutdown()"); }
	FString* GetSuperResolutionQualityMode(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterGameViewportClient.GetSuperResolutionQualityMode()", result); }
	FString* WriteVideoReplayBufferToDisk(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterGameViewportClient.WriteVideoReplayBufferToDisk()", result); }
	bool ShouldHideFSRFrameInterpolationSensitiveBrushes() { return NativeCall<bool>(this, "UShooterGameViewportClient.ShouldHideFSRFrameInterpolationSensitiveBrushes()"); }
	void HideDialog(ULocalPlayer* PlayerOwner) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameViewportClient.HideDialog(ULocalPlayer*)", PlayerOwner); }
	void RefreshTopUI(int ControllerId) { NativeCall<void, int>(this, "UShooterGameViewportClient.RefreshTopUI(int)", ControllerId); }
	void ValidateInput(ULocalPlayer* LocalPlayer, bool WindowBroughtToForeground, bool bForceSet, bool bAbsolutelyForceIsFromMapLoad) { NativeCall<void, ULocalPlayer*, bool, bool, bool>(this, "UShooterGameViewportClient.ValidateInput(ULocalPlayer*,bool,bool,bool)", LocalPlayer, WindowBroughtToForeground, bForceSet, bAbsolutelyForceIsFromMapLoad); }
	void ValidateInput(float DeltaSeconds, bool bForceSet, bool bAbsolutelyForceIsFromMapLoad) { NativeCall<void, float, bool, bool>(this, "UShooterGameViewportClient.ValidateInput(float,bool,bool)", DeltaSeconds, bForceSet, bAbsolutelyForceIsFromMapLoad); }
	void ShowLoadingScreen() { NativeCall<void>(this, "UShooterGameViewportClient.ShowLoadingScreen()"); }
	void ResetSpawnFlag() { NativeCall<void>(this, "UShooterGameViewportClient.ResetSpawnFlag()"); }
	void DetachViewportClient() { NativeCall<void>(this, "UShooterGameViewportClient.DetachViewportClient()"); }
	bool IsDLCUIOpen() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsDLCUIOpen()"); }
	void UpdateFrameGenerationState() { NativeCall<void>(this, "UShooterGameViewportClient.UpdateFrameGenerationState()"); }
	void CenterMouse(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UShooterGameViewportClient.CenterMouse(AShooterPlayerController*)", PC); }
	void SetCounterModsUI(int Num) { NativeCall<void, int>(this, "UShooterGameViewportClient.SetCounterModsUI(int)", Num); }
	bool UsingVirtualCursor(int controllerID) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.UsingVirtualCursor(int)", controllerID); }
	bool InputAxis(const FInputKeyEventArgs& Args) { return NativeCall<bool, const FInputKeyEventArgs&>(this, "UShooterGameViewportClient.InputAxis(FInputKeyEventArgs&)", Args); }
	bool IsInPlayingState() { return NativeCall<bool>(this, "UShooterGameViewportClient.IsInPlayingState()"); }
	void RefreshTopUI(ULocalPlayer* ForPlayer) { NativeCall<void, ULocalPlayer*>(this, "UShooterGameViewportClient.RefreshTopUI(ULocalPlayer*)", ForPlayer); }
	static UShooterGameViewportClient* GetViewportClient(UWorld* ForWorld) { return NativeCall<UShooterGameViewportClient*, UWorld*>(nullptr, "UShooterGameViewportClient.GetViewportClient(UWorld*)", ForWorld); }
	void SeReplayVideoQuality(int VideoQuality) { NativeCall<void, int>(this, "UShooterGameViewportClient.SeReplayVideoQuality(int)", VideoQuality); }
	bool AnyScenesWithMouseCapture() { return NativeCall<bool>(this, "UShooterGameViewportClient.AnyScenesWithMouseCapture()"); }
	void ResetVideoReplayBuffers() { NativeCall<void>(this, "UShooterGameViewportClient.ResetVideoReplayBuffers()"); }
	ULocalPlayer* SetupInitialLocalPlayer(FString& OutError) { return NativeCall<ULocalPlayer*, FString&>(this, "UShooterGameViewportClient.SetupInitialLocalPlayer(FString&)", OutError); }
	void AddToUpdatingModsUI(bool DidError) { NativeCall<void, bool>(this, "UShooterGameViewportClient.AddToUpdatingModsUI(bool)", DidError); }
	void SetNumReplaySecondsToStore(int NumSecondsToStore) { NativeCall<void, int>(this, "UShooterGameViewportClient.SetNumReplaySecondsToStore(int)", NumSecondsToStore); }
	void NotifyPlayerRemoved(int PlayerIndex, ULocalPlayer* RemovedPlayer) { NativeCall<void, int, ULocalPlayer*>(this, "UShooterGameViewportClient.NotifyPlayerRemoved(int,ULocalPlayer*)", PlayerIndex, RemovedPlayer); }
	FString* WritePNTScreenshot(FString* result, const FString& filename) { return NativeCall<FString*, FString*, const FString&>(this, "UShooterGameViewportClient.WritePNTScreenshot(FString&)", result, filename); }
	bool CloseAllUIsOnDie(AShooterPlayerController* SPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UShooterGameViewportClient.CloseAllUIsOnDie(AShooterPlayerController*)", SPC); }
	bool CanAddSplitscreenLocalPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.CanAddSplitscreenLocalPlayer(int)", ControllerId); }
	bool RemoveLocalPlayer(int ControllerId) { return NativeCall<bool, int>(this, "UShooterGameViewportClient.RemoveLocalPlayer(int)", ControllerId); }
};
