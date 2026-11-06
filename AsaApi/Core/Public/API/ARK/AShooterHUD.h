#pragma once
#include "BulkForward.h"
#include "AHUD.h"

struct AShooterHUD : public AHUD
{
public:
	AShooterHUD() = delete;
	~AShooterHUD() = delete;
	AShooterHUD(const AShooterHUD&) = delete;
	AShooterHUD& operator=(const AShooterHUD&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterHUD"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterHUD"); }

	UUI_SavingOverlay*& SavingOverlayField() { return *GetNativePointerField<UUI_SavingOverlay**>(this, "AShooterHUD.SavingOverlay"); }
	float& MaxDamageCameraShakeScaleField() { return *GetNativePointerField<float*>(this, "AShooterHUD.MaxDamageCameraShakeScale"); }
	float& MaxDamageCameraShakeSpeedInverseField() { return *GetNativePointerField<float*>(this, "AShooterHUD.MaxDamageCameraShakeSpeedInverse"); }
	bool& bShowAllPlayersWhenSpectatingField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowAllPlayersWhenSpectating"); }
	bool& bRemovedPrimalGameplayHudsField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bRemovedPrimalGameplayHuds"); }
	bool& bShowAllPlayersWhenSpectatingLocalField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowAllPlayersWhenSpectatingLocal"); }
	double& LastPlayerInfoRequestTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.LastPlayerInfoRequestTime"); }
	float& PlayerInfoRequestTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterHUD.PlayerInfoRequestTimeInterval"); }
	UTrackingItemUI*& TrackingItemsHUDField() { return *GetNativePointerField<UTrackingItemUI**>(this, "AShooterHUD.TrackingItemsHUD"); }
	UUI_MilestonesNotificationFeed*& MilestonesFeedField() { return *GetNativePointerField<UUI_MilestonesNotificationFeed**>(this, "AShooterHUD.MilestonesFeed"); }
	UPlayerHUDUI*& MyPlayerHUDField() { return *GetNativePointerField<UPlayerHUDUI**>(this, "AShooterHUD.MyPlayerHUD"); }
	UPrimalUI*& MyPlayerHUDSOTFField() { return *GetNativePointerField<UPrimalUI**>(this, "AShooterHUD.MyPlayerHUDSOTF"); }
	UPrimalUI*& CurrentMinimapHUDField() { return *GetNativePointerField<UPrimalUI**>(this, "AShooterHUD.CurrentMinimapHUD"); }
	UPrimalUI*& CurrentBasedUIField() { return *GetNativePointerField<UPrimalUI**>(this, "AShooterHUD.CurrentBasedUI"); }
	UPrimalUI*& ChangeCameraModeUIField() { return *GetNativePointerField<UPrimalUI**>(this, "AShooterHUD.ChangeCameraModeUI"); }
	UHUDCustomStatusWidget*& MyPlayerCustomStatusHUDField() { return *GetNativePointerField<UHUDCustomStatusWidget**>(this, "AShooterHUD.MyPlayerCustomStatusHUD"); }
	UHUDActiveMissionWidget*& MyPlayerActiveMissionHUDField() { return *GetNativePointerField<UHUDActiveMissionWidget**>(this, "AShooterHUD.MyPlayerActiveMissionHUD"); }
	UHUDPointsOfInterestContainer*& MyPlayerPointsOfInterestHUDField() { return *GetNativePointerField<UHUDPointsOfInterestContainer**>(this, "AShooterHUD.MyPlayerPointsOfInterestHUD"); }
	UHUDPingsContainer*& MyPlayerPingHUDField() { return *GetNativePointerField<UHUDPingsContainer**>(this, "AShooterHUD.MyPlayerPingHUD"); }
	UUI_LeaderboardWidget*& MyPlayerLeaderboardHUDField() { return *GetNativePointerField<UUI_LeaderboardWidget**>(this, "AShooterHUD.MyPlayerLeaderboardHUD"); }
	UUI_Subtitles*& MySubtitlesHUDField() { return *GetNativePointerField<UUI_Subtitles**>(this, "AShooterHUD.MySubtitlesHUD"); }
	UUI_HudOverlay*& MyOverlayHUDField() { return *GetNativePointerField<UUI_HudOverlay**>(this, "AShooterHUD.MyOverlayHUD"); }
	UUI_HudOverlay*& MyTopOverlayHUDField() { return *GetNativePointerField<UUI_HudOverlay**>(this, "AShooterHUD.MyTopOverlayHUD"); }
	UUI_ChatBox*& ChatBoxUIField() { return *GetNativePointerField<UUI_ChatBox**>(this, "AShooterHUD.ChatBoxUI"); }
	UBuildingUI*& BuildingUIField() { return *GetNativePointerField<UBuildingUI**>(this, "AShooterHUD.BuildingUI"); }
	bool& bShowChatBoxByDefaultField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowChatBoxByDefault"); }
	URadialSelectorHUD*& CurrentRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD**>(this, "AShooterHUD.CurrentRadialSelector"); }
	URadialSelectorHUD_Inventory*& InventoryRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD_Inventory**>(this, "AShooterHUD.InventoryRadialSelector"); }
	URadialSelectorHUD_MultiUse*& MultiUseRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD_MultiUse**>(this, "AShooterHUD.MultiUseRadialSelector"); }
	URadialSelectorHUD_PlayerAction*& PlayerActionRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD_PlayerAction**>(this, "AShooterHUD.PlayerActionRadialSelector"); }
	URadialSelectorHUD_PlayerAction*& WhistleRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD_PlayerAction**>(this, "AShooterHUD.WhistleRadialSelector"); }
	URadialSelectorHUD_PlayerAction*& EmoteRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD_PlayerAction**>(this, "AShooterHUD.EmoteRadialSelector"); }
	URadialSelectorHUD_Custom*& CustomRadialSelectorField() { return *GetNativePointerField<URadialSelectorHUD_Custom**>(this, "AShooterHUD.CustomRadialSelector"); }
	TWeakObjectPtr<UUI_Spawn, FWeakObjectPtr>& CurrentRespawnUIField() { return *GetNativePointerField<TWeakObjectPtr<UUI_Spawn, FWeakObjectPtr>*>(this, "AShooterHUD.CurrentRespawnUI"); }
	FMultiUseEntry& CurrentMultiUseActionField() { return *GetNativePointerField<FMultiUseEntry*>(this, "AShooterHUD.CurrentMultiUseAction"); }
	UE::Math::TVector2<double>& MultiUseActionLocationField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterHUD.MultiUseActionLocation"); }
	float& FloatingMultiUseIconSizeField() { return *GetNativePointerField<float*>(this, "AShooterHUD.FloatingMultiUseIconSize"); }
	UE::Math::TVector2<double>& FloatingMultiUseIconOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterHUD.FloatingMultiUseIconOffset"); }
	FLinearColor& FloatingMultiUseIconBGColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterHUD.FloatingMultiUseIconBGColor"); }
	FColor& DisableUseIconColorField() { return *GetNativePointerField<FColor*>(this, "AShooterHUD.DisableUseIconColor"); }
	FLinearColor& ItemAddedNotificationIconColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterHUD.ItemAddedNotificationIconColor"); }
	FLinearColor& ItemRemovedNotificationIconColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterHUD.ItemRemovedNotificationIconColor"); }
	bool& bShowedKnockedNotificationField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowedKnockedNotification"); }
	UFont*& BigFontField() { return *GetNativePointerField<UFont**>(this, "AShooterHUD.BigFont"); }
	UFont*& NormalFontField() { return *GetNativePointerField<UFont**>(this, "AShooterHUD.NormalFont"); }
	UFont*& SmallFontField() { return *GetNativePointerField<UFont**>(this, "AShooterHUD.SmallFont"); }
	UTexture2D*& HitNotifyTextureField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.HitNotifyTexture"); }
	UTexture2D*& HUDMainTextureAtlasField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.HUDMainTextureAtlas"); }
	UTexture2D*& HUDAssets02TextureAtlasField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.HUDAssets02TextureAtlas"); }
	UTexture2D*& LowHealthOverlayTextureField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.LowHealthOverlayTexture"); }
	UTexture2D*& HitMarkerTextureField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.HitMarkerTexture"); }
	float& TimeToHideChatField() { return *GetNativePointerField<float*>(this, "AShooterHUD.TimeToHideChat"); }
	UTexture2D*& DeathIconField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.DeathIcon"); }
	UTexture2D*& KilledIconField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.KilledIcon"); }
	float& ChatPopupIntervalField() { return *GetNativePointerField<float*>(this, "AShooterHUD.ChatPopupInterval"); }
	UTexture2D*& SpeechBubbleField() { return *GetNativePointerField<UTexture2D**>(this, "AShooterHUD.SpeechBubble"); }
	FColor& HUDLightField() { return *GetNativePointerField<FColor*>(this, "AShooterHUD.HUDLight"); }
	FColor& HUDDarkField() { return *GetNativePointerField<FColor*>(this, "AShooterHUD.HUDDark"); }
	double& NoAmmoNotifyTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.NoAmmoNotifyTime"); }
	double& CantUseHereTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.CantUseHereTime"); }
	float& NoAmmoFadeOutTimeField() { return *GetNativePointerField<float*>(this, "AShooterHUD.NoAmmoFadeOutTime"); }
	double& LastHitTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.LastHitTime"); }
	float& HitNotifyDisplayTimeField() { return *GetNativePointerField<float*>(this, "AShooterHUD.HitNotifyDisplayTime"); }
	FName& LastFilterEmoteNameField() { return *GetNativePointerField<FName*>(this, "AShooterHUD.LastFilterEmoteName"); }
	float& CurrentCrosshairAlphaField() { return *GetNativePointerField<float*>(this, "AShooterHUD.CurrentCrosshairAlpha"); }
	FCanvasIcon& HitNotifyCrosshairField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterHUD.HitNotifyCrosshair"); }
	float& ScaleUIField() { return *GetNativePointerField<float*>(this, "AShooterHUD.ScaleUI"); }
	float& PulseValueField() { return *GetNativePointerField<float*>(this, "AShooterHUD.PulseValue"); }
	FFontRenderInfo& ShadowedFontField() { return *GetNativePointerField<FFontRenderInfo*>(this, "AShooterHUD.ShadowedFont"); }
	float& OffsetField() { return *GetNativePointerField<float*>(this, "AShooterHUD.Offset"); }
	bool& bHudHiddenField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bHudHidden"); }
	bool& bShowChatPopupField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowChatPopup"); }
	FCustomWheelSettings& TeamPingWheelSettingsField() { return *GetNativePointerField<FCustomWheelSettings*>(this, "AShooterHUD.TeamPingWheelSettings"); }
	FTimerHandle& TimerHandle_DoShowSpawnUIField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterHUD.TimerHandle_DoShowSpawnUI"); }
	FTimerHandle& HideChatBoxHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterHUD.HideChatBoxHandle"); }
	double& CantBuildNotifyTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.CantBuildNotifyTime"); }
	FString& CantBuildStringField() { return *GetNativePointerField<FString*>(this, "AShooterHUD.CantBuildString"); }
	UE::Math::TVector2<double>& AimAssistLastLocationField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterHUD.AimAssistLastLocation"); }
	bool& bAutoShowChatField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bAutoShowChat"); }
	bool& bTargetHarvestableField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bTargetHarvestable"); }
	bool& bTargetHarvestableAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bTargetHarvestableAllowed"); }
	bool& bTargetHarvestableIsUsableField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bTargetHarvestableIsUsable"); }
	bool& bInitializedUIScenesField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bInitializedUIScenes"); }
	bool& bForceHUDHiddenField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bForceHUDHidden"); }
	bool& bExtraHideHUDField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bExtraHideHUD"); }
	bool& bExtraConsoleHideHUDField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bExtraConsoleHideHUD"); }
	UUI_Inventory*& CurrentOpenedInventoryField() { return *GetNativePointerField<UUI_Inventory**>(this, "AShooterHUD.CurrentOpenedInventory"); }
	UUI_Hub*& CurrentlyOpenedHubUIField() { return *GetNativePointerField<UUI_Hub**>(this, "AShooterHUD.CurrentlyOpenedHubUI"); }
	bool& bMultiUseIsDrawingUIHUDField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bMultiUseIsDrawingUIHUD"); }
	double& LastTorpidityIncreaseTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.LastTorpidityIncreaseTime"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& LastTargetedActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "AShooterHUD.LastTargetedActor"); }
	float& AdditionalDinoMultiuseCheckDistanceField() { return *GetNativePointerField<float*>(this, "AShooterHUD.AdditionalDinoMultiuseCheckDistance"); }
	UPrimalUI*& CurrentSpawnMenuField() { return *GetNativePointerField<UPrimalUI**>(this, "AShooterHUD.CurrentSpawnMenu"); }
	FPrimalChatMessage& TempChatMsgField() { return *GetNativePointerField<FPrimalChatMessage*>(this, "AShooterHUD.TempChatMsg"); }
	UE::Math::TVector2<double>& CurrentCrosshairScreenLocationField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AShooterHUD.CurrentCrosshairScreenLocation"); }
	TArray<TWeakObjectPtr<UPrimalUI, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& ExtraHitTestInvisibleHiddenUIsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPrimalUI, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "AShooterHUD.ExtraHitTestInvisibleHiddenUIs"); }
	float& TorpidityOpacityField() { return *GetNativePointerField<float*>(this, "AShooterHUD.TorpidityOpacity"); }
	bool& bChatVisibleField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bChatVisible"); }
	double& LastHUDTargetChangedTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.LastHUDTargetChangedTime"); }
	FTimerHandle& TutorialEndTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterHUD.TutorialEndTimerHandle"); }
	UUI_Tutorial*& TutorialUIField() { return *GetNativePointerField<UUI_Tutorial**>(this, "AShooterHUD.TutorialUI"); }
	int& CurrentTutorialIndexField() { return *GetNativePointerField<int*>(this, "AShooterHUD.CurrentTutorialIndex"); }
	bool& bPreventShowChatBoxField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bPreventShowChatBox"); }
	FString& HitchStringField() { return *GetNativePointerField<FString*>(this, "AShooterHUD.HitchString"); }
	float& LastHitchField() { return *GetNativePointerField<float*>(this, "AShooterHUD.LastHitch"); }
	float& KingHitchField() { return *GetNativePointerField<float*>(this, "AShooterHUD.KingHitch"); }
	int& LastNumLocalPlayersField() { return *GetNativePointerField<int*>(this, "AShooterHUD.LastNumLocalPlayers"); }
	TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >& CachedFloatingOverlapsField() { return *GetNativePointerField<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(this, "AShooterHUD.CachedFloatingOverlaps"); }
	unsigned __int64& LastCachedOverlapsFrameField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterHUD.LastCachedOverlapsFrame"); }
	bool& bShowingMinimapTooltipField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bShowingMinimapTooltip"); }
	bool& bFrameGenDisabledBecauseUIField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bFrameGenDisabledBecauseUI"); }
	bool& bLastFrameGenDisabledBecauseUIField() { return *GetNativePointerField<bool*>(this, "AShooterHUD.bLastFrameGenDisabledBecauseUI"); }
	double& PreventTeleportWhiteoutUntilTimeField() { return *GetNativePointerField<double*>(this, "AShooterHUD.PreventTeleportWhiteoutUntilTime"); }
	BitFieldValue<bool, unsigned __int32> bUseRadialSelectorWithMouse() { return { this, "AShooterHUD.bUseRadialSelectorWithMouse"}; }
	BitFieldValue<bool, unsigned __int32> bIsScoreBoardVisible() { return { this, "AShooterHUD.bIsScoreBoardVisible"}; }
	BitFieldValue<bool, unsigned __int32> bIsServerBroadcasting() { return { this, "AShooterHUD.bIsServerBroadcasting"}; }
	BitFieldValue<bool, unsigned char> bDefeatedBossPreventingSpawnUICreation() { return { this, "AShooterHUD.bDefeatedBossPreventingSpawnUICreation"}; }
	void BPAddHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData& InOverlay, int InsertAtIndex) { NativeCall<void, const FHUDRichTextOverlayData&, int>(this, "AShooterHUD.BPAddHUDRichTextOverlayAtIndex(FHUDRichTextOverlayData&,int)", InOverlay, InsertAtIndex); }
	bool GetMultiUseRadialSelection(FMultiUseEntry& SelectedEntry, bool bIncludeTimedEntries) { return NativeCall<bool, FMultiUseEntry&, bool>(this, "AShooterHUD.GetMultiUseRadialSelection(FMultiUseEntry&,bool)", SelectedEntry, bIncludeTimedEntries); }
	UUI_AdminMangment* ShowAdminManger(bool isDedicatedUI) { return NativeCall<UUI_AdminMangment*, bool>(this, "AShooterHUD.ShowAdminManger(bool)", isDedicatedUI); }
	bool CloseActiveHub() { return NativeCall<bool>(this, "AShooterHUD.CloseActiveHub()"); }
	void DrawHUD() { NativeCall<void>(this, "AShooterHUD.DrawHUD()"); }
	float GetMinNotificationScale(float inputScale) { return NativeCall<float, float>(this, "AShooterHUD.GetMinNotificationScale(float)", inputScale); }
	FName GetEmoteRadialFilter() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AShooterHUD.GetEmoteRadialFilter()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	FString* FormatTextureAsRichText(FString* result, UTexture2D* InTexture, int iconOffset) { return NativeCall<FString*, FString*, UTexture2D*, int>(this, "AShooterHUD.FormatTextureAsRichText(UTexture2D*,int)", result, InTexture, iconOffset); }
	void NotifyHubRemoveFromViewport(UUI_Hub* hub) { NativeCall<void, UUI_Hub*>(this, "AShooterHUD.NotifyHubRemoveFromViewport(UUI_Hub*)", hub); }
	void ShowTeamPingWheel(bool CanTrack) { NativeCall<void, bool>(this, "AShooterHUD.ShowTeamPingWheel(bool)", CanTrack); }
	void SetAllowShowChatBox(bool bAllow) { NativeCall<void, bool>(this, "AShooterHUD.SetAllowShowChatBox(bool)", bAllow); }
	void RefreshSkillTreeUI() { NativeCall<void>(this, "AShooterHUD.RefreshSkillTreeUI()"); }
	void StartInventoryRadialSelector() { NativeCall<void>(this, "AShooterHUD.StartInventoryRadialSelector()"); }
	UUI_MilestonesNotificationFeed* CreateOrGetMilestonesFeed() { return NativeCall<UUI_MilestonesNotificationFeed*>(this, "AShooterHUD.CreateOrGetMilestonesFeed()"); }
	void ShowChatBox(bool bShow, bool bIsFromNewChat) { NativeCall<void, bool, bool>(this, "AShooterHUD.ShowChatBox(bool,bool)", bShow, bIsFromNewChat); }
	void Destroyed() { NativeCall<void>(this, "AShooterHUD.Destroyed()"); }
	void ClearHUDNotifications(int MessageTypeID) { NativeCall<void, int>(this, "AShooterHUD.ClearHUDNotifications(int)", MessageTypeID); }
	UTrackingItemUI* CreateOrGetTrackItemUI() { return NativeCall<UTrackingItemUI*>(this, "AShooterHUD.CreateOrGetTrackItemUI()"); }
	void ReturnChatBoxToIntialLocation() { NativeCall<void>(this, "AShooterHUD.ReturnChatBoxToIntialLocation()"); }
	UPrimalUI* GetOrCreateSpawnMenu() { return NativeCall<UPrimalUI*>(this, "AShooterHUD.GetOrCreateSpawnMenu()"); }
	void BPDrawHUD(UCanvas* theCanvas) { NativeCall<void, UCanvas*>(this, "AShooterHUD.BPDrawHUD(UCanvas*)", theCanvas); }
	void BPInitUIScenes() { NativeCall<void>(this, "AShooterHUD.BPInitUIScenes()"); }
	void BPDrawUIHUD(UCanvas* theCanvas) { NativeCall<void, UCanvas*>(this, "AShooterHUD.BPDrawUIHUD(UCanvas*)", theCanvas); }
	AShooterPlayerController* GetShooterPC() { return NativeCall<AShooterPlayerController*>(this, "AShooterHUD.GetShooterPC()"); }
	void DrawTooltipAction(AActor* ToActor, bool bForMultiUseSelector) { NativeCall<void, AActor*, bool>(this, "AShooterHUD.DrawTooltipAction(AActor*,bool)", ToActor, bForMultiUseSelector); }
	void HideChatBox() { NativeCall<void>(this, "AShooterHUD.HideChatBox()"); }
	void BPRemoveAllHUDRichTextOverlays() { NativeCall<void>(this, "AShooterHUD.BPRemoveAllHUDRichTextOverlays()"); }
	void AddChatLine(const FString& ChatString, bool bWantFocus) { NativeCall<void, const FString&, bool>(this, "AShooterHUD.AddChatLine(FString&,bool)", ChatString, bWantFocus); }
	void HideMissionAlert() { NativeCall<void>(this, "AShooterHUD.HideMissionAlert()"); }
	APlayerController* GetPlayerOwner() { return NativeCall<APlayerController*>(this, "AShooterHUD.GetPlayerOwner()"); }
	void BPSetHUDRichTextOverlayInstigator(const FHUDRichTextOverlayData& InOverlay, AActor* InInstigator, FHUDRichTextOverlayData& OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData&, AActor*, FHUDRichTextOverlayData&, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayInstigator(FHUDRichTextOverlayData&,AActor*,FHUDRichTextOverlayData&,bool)", InOverlay, InInstigator, OutOverlay, bUpdateAfterSetting); }
	void CancelCustomWheelRadialSelector() { NativeCall<void>(this, "AShooterHUD.CancelCustomWheelRadialSelector()"); }
	UUI_SurvivorProfile* ShowSurvivorProfileUI() { return NativeCall<UUI_SurvivorProfile*>(this, "AShooterHUD.ShowSurvivorProfileUI()"); }
	void InitUIScenes(bool bForceReinitUI) { NativeCall<void, bool>(this, "AShooterHUD.InitUIScenes(bool)", bForceReinitUI); }
	void BPUpdateHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData& InOverlay, int Index) { NativeCall<void, const FHUDRichTextOverlayData&, int>(this, "AShooterHUD.BPUpdateHUDRichTextOverlayAtIndex(FHUDRichTextOverlayData&,int)", InOverlay, Index); }
	UUI_Hub* GetCurrentHubUI() { return NativeCall<UUI_Hub*>(this, "AShooterHUD.GetCurrentHubUI()"); }
	void DrawItemHUDNOtifications(UCanvas* TheCanvas, float YOffset) { NativeCall<void, UCanvas*, float>(this, "AShooterHUD.DrawItemHUDNOtifications(UCanvas*,float)", TheCanvas, YOffset); }
	UUI_MissionList* ShowMissionList(UObject* FromDispatcher) { return NativeCall<UUI_MissionList*, UObject*>(this, "AShooterHUD.ShowMissionList(UObject*)", FromDispatcher); }
	float DrawHUDNotifications(UCanvas* TheCanvas, float YOffset, float XOffset) { return NativeCall<float, UCanvas*, float, float>(this, "AShooterHUD.DrawHUDNotifications(UCanvas*,float,float)", TheCanvas, YOffset, XOffset); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterHUD.PostInitializeComponents()"); }
	void MoveChatBoxToBottomOfScreen() { NativeCall<void>(this, "AShooterHUD.MoveChatBoxToBottomOfScreen()"); }
	UPrimalUI* ShowNewMinimap(AShooterPlayerController* ToSPC) { return NativeCall<UPrimalUI*, AShooterPlayerController*>(this, "AShooterHUD.ShowNewMinimap(AShooterPlayerController*)", ToSPC); }
	void TutorialEndTimer() { NativeCall<void>(this, "AShooterHUD.TutorialEndTimer()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "AShooterHUD.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void RemoveBuildingUI() { NativeCall<void>(this, "AShooterHUD.RemoveBuildingUI()"); }
	void AcceptTeamPingWheel() { NativeCall<void>(this, "AShooterHUD.AcceptTeamPingWheel()"); }
	void PushMilestoneNotify(FName MilestoneID, float NewProgress, bool LockNotification, FName MilestoneTree) { NativeCall<void, FName, float, bool, FName>(this, "AShooterHUD.PushMilestoneNotify(FName,float,bool,FName)", MilestoneID, NewProgress, LockNotification, MilestoneTree); }
	void BeginPlay() { NativeCall<void>(this, "AShooterHUD.BeginPlay()"); }
	void EndCustomWheelRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndCustomWheelRadialSelector()"); }
	void HitchDetected(const FSoftObjectPath& ForAsset, float HitchTime) { NativeCall<void, const FSoftObjectPath&, float>(this, "AShooterHUD.HitchDetected(FSoftObjectPath&,float)", ForAsset, HitchTime); }
	void NotifyHUDHit(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator) { NativeCall<void, float, const FDamageEvent&, APawn*>(this, "AShooterHUD.NotifyHUDHit(float,FDamageEvent&,APawn*)", DamageTaken, DamageEvent, PawnInstigator); }
	void ClearChatBoxTimer() { NativeCall<void>(this, "AShooterHUD.ClearChatBoxTimer()"); }
	UUI_EngramsMenu* ShowEngramsMenu(bool bInputDelay) { return NativeCall<UUI_EngramsMenu*, bool>(this, "AShooterHUD.ShowEngramsMenu(bool)", bInputDelay); }
	void BPUpdateHUDRichTextOverlay(const FHUDRichTextOverlayData& InOverlay) { NativeCall<void, const FHUDRichTextOverlayData&>(this, "AShooterHUD.BPUpdateHUDRichTextOverlay(FHUDRichTextOverlayData&)", InOverlay); }
	UPrimalUI* ShowSkillTreeMenu(FName SkillTreeTag, UObject* SkillProviderObject) { return NativeCall<UPrimalUI*, FName, UObject*>(this, "AShooterHUD.ShowSkillTreeMenu(FName,UObject*)", SkillTreeTag, SkillProviderObject); }
	UUI_Hub* GetOrCreateActiveHub() { return NativeCall<UUI_Hub*>(this, "AShooterHUD.GetOrCreateActiveHub()"); }
	void BPUpdateHUDRichTextOverlaysByInstigator(AActor* ByInstigator) { NativeCall<void, AActor*>(this, "AShooterHUD.BPUpdateHUDRichTextOverlaysByInstigator(AActor*)", ByInstigator); }
	void DrawUIHUD(UCanvas* UICanvas) { NativeCall<void, UCanvas*>(this, "AShooterHUD.DrawUIHUD(UCanvas*)", UICanvas); }
	bool IsChatBoxVisible() { return NativeCall<bool>(this, "AShooterHUD.IsChatBoxVisible()"); }
	void CloseChangeCameraModeUI() { NativeCall<void>(this, "AShooterHUD.CloseChangeCameraModeUI()"); }
	void BPAddHUDRichTextOverlay(const FHUDRichTextOverlayData& InOverlay) { NativeCall<void, const FHUDRichTextOverlayData&>(this, "AShooterHUD.BPAddHUDRichTextOverlay(FHUDRichTextOverlayData&)", InOverlay); }
	void DrawCrosshair() { NativeCall<void>(this, "AShooterHUD.DrawCrosshair()"); }
	void BPSimulateHit(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator) { NativeCall<void, float, const FDamageEvent&, APawn*>(this, "AShooterHUD.BPSimulateHit(float,FDamageEvent&,APawn*)", DamageTaken, DamageEvent, PawnInstigator); }
	UMinimapSubMenuUI* ShowMap() { return NativeCall<UMinimapSubMenuUI*>(this, "AShooterHUD.ShowMap()"); }
	void BPSetHUDRichTextOverlayPosition(const FHUDRichTextOverlayData& InOverlay, UE::Math::TVector2<double>* InPosition, FHUDRichTextOverlayData& OutOverlay, bool bUpdateAfterSetting) { if (!InPosition) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, const FHUDRichTextOverlayData &, UE :: Math :: TVector2 < double >, FHUDRichTextOverlayData &, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayPosition(FHUDRichTextOverlayData&,UE::Math::TVector2<double>,FHUDRichTextOverlayData&,bool)", InOverlay, *InPosition, OutOverlay, bUpdateAfterSetting); }
	void ToggleHudHidden() { NativeCall<void>(this, "AShooterHUD.ToggleHudHidden()"); }
	UPrimalUI* ShowChangeCameraModeUI() { return NativeCall<UPrimalUI*>(this, "AShooterHUD.ShowChangeCameraModeUI()"); }
	float GetFloatingHUDScreenEdgeFadeAlpha(UE::Math::TVector2<double>* ScreenPosition) { if (!ScreenPosition) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector2 < double >>(this, "AShooterHUD.GetFloatingHUDScreenEdgeFadeAlpha(UE::Math::TVector2<double>)", *ScreenPosition); }
	bool GetSelectedCustomWheelEntry(FCustomWheelEntry& OutSelectedEntry) { return NativeCall<bool, FCustomWheelEntry&>(this, "AShooterHUD.GetSelectedCustomWheelEntry(FCustomWheelEntry&)", OutSelectedEntry); }
	void ShowSpawnUI(APrimalStructure* FastTravelIgnoreBed) { NativeCall<void, APrimalStructure*>(this, "AShooterHUD.ShowSpawnUI(APrimalStructure*)", FastTravelIgnoreBed); }
	void BPRemoveHUDRichTextOverlay(const FHUDRichTextOverlayData& InOverlay) { NativeCall<void, const FHUDRichTextOverlayData&>(this, "AShooterHUD.BPRemoveHUDRichTextOverlay(FHUDRichTextOverlayData&)", InOverlay); }
	UUI_TribeWarEntry* ShowTribeWarMenu() { return NativeCall<UUI_TribeWarEntry*>(this, "AShooterHUD.ShowTribeWarMenu()"); }
	void DrawHitIndicator() { NativeCall<void>(this, "AShooterHUD.DrawHitIndicator()"); }
	UUI_Inventory* ShowInventory(UPrimalInventoryComponent* inventoryComp) { return NativeCall<UUI_Inventory*, UPrimalInventoryComponent*>(this, "AShooterHUD.ShowInventory(UPrimalInventoryComponent*)", inventoryComp); }
	void EndAllRadialSelectors() { NativeCall<void>(this, "AShooterHUD.EndAllRadialSelectors()"); }
	void ShowPinEntryUI(AActor* aTargetable, bool bIsSetting, int CustomIndex) { NativeCall<void, AActor*, bool, int>(this, "AShooterHUD.ShowPinEntryUI(AActor*,bool,int)", aTargetable, bIsSetting, CustomIndex); }
	void NotifyOutOfAmmo() { NativeCall<void>(this, "AShooterHUD.NotifyOutOfAmmo()"); }
	void EndMultiUseRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndMultiUseRadialSelector()"); }
	AActor* GetMultiUseRadialSelectorTargetActor() { return NativeCall<AActor*>(this, "AShooterHUD.GetMultiUseRadialSelectorTargetActor()"); }
	void ShowTribeManager(bool bShowInviteData) { NativeCall<void, bool>(this, "AShooterHUD.ShowTribeManager(bool)", bShowInviteData); }
	void BPRemoveHUDRichTextOverlaysByInstigator(AActor* ByInstigator) { NativeCall<void, AActor*>(this, "AShooterHUD.BPRemoveHUDRichTextOverlaysByInstigator(AActor*)", ByInstigator); }
	void BPSetHUDRichTextOverlayUseAutoWrap(const FHUDRichTextOverlayData& InOverlay, bool InAutoWrap, FHUDRichTextOverlayData& OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData&, bool, FHUDRichTextOverlayData&, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayUseAutoWrap(FHUDRichTextOverlayData&,bool,FHUDRichTextOverlayData&,bool)", InOverlay, InAutoWrap, OutOverlay, bUpdateAfterSetting); }
	void ShowLevelUpAvailable(const FString& theString) { NativeCall<void, const FString&>(this, "AShooterHUD.ShowLevelUpAvailable(FString&)", theString); }
	void TryToHideMouseCursor() { NativeCall<void>(this, "AShooterHUD.TryToHideMouseCursor()"); }
	void HideTopMissionAlert() { NativeCall<void>(this, "AShooterHUD.HideTopMissionAlert()"); }
	void BPForceReinitUI() { NativeCall<void>(this, "AShooterHUD.BPForceReinitUI()"); }
	void ForceHUDHidden(bool bForcedHidden) { NativeCall<void, bool>(this, "AShooterHUD.ForceHUDHidden(bool)", bForcedHidden); }
	UUI_Subtitles* GetSubtitlesWidget() { return NativeCall<UUI_Subtitles*>(this, "AShooterHUD.GetSubtitlesWidget()"); }
	UE::Math::TVector2<double>* GetCurrentCrosshairScreenLocation(UE::Math::TVector2<double>* result) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(this, "AShooterHUD.GetCurrentCrosshairScreenLocation()", result); }
	UUserWidget* GetSkillTreeMenu() { return NativeCall<UUserWidget*>(this, "AShooterHUD.GetSkillTreeMenu()"); }
	void EndEmoteRadialSelector() { NativeCall<void>(this, "AShooterHUD.EndEmoteRadialSelector()"); }
	UUI_ChatBox* GetChatBoxWidget() { return NativeCall<UUI_ChatBox*>(this, "AShooterHUD.GetChatBoxWidget()"); }
	void BPSetHUDRichTextOverlayScale(const FHUDRichTextOverlayData& InOverlay, float InScale, FHUDRichTextOverlayData& OutOverlay, bool bUpdateAfterSetting) { NativeCall<void, const FHUDRichTextOverlayData&, float, FHUDRichTextOverlayData&, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayScale(FHUDRichTextOverlayData&,float,FHUDRichTextOverlayData&,bool)", InOverlay, InScale, OutOverlay, bUpdateAfterSetting); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AShooterHUD.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void AddMatchInfoString(FCanvasTextItem& InInfoItem) { NativeCall<void, FCanvasTextItem&>(this, "AShooterHUD.AddMatchInfoString(FCanvasTextItem&)", InInfoItem); }
	void DrawCrosshairOnScreen(UE::Math::TVector2<double>* AtScreenLocation, float WithCrossSpread, FColor WithDrawColor, float WithAlphaPercent, float WithScale) { if (!AtScreenLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, float, FColor, float, float>(this, "AShooterHUD.DrawCrosshairOnScreen(UE::Math::TVector2<double>,float,FColor,float,float)", *AtScreenLocation, WithCrossSpread, WithDrawColor, WithAlphaPercent, WithScale); }
	void ShowTutorial(const FString& TutorialTitle, const FString& TutorialText, UTexture2D* TutorialImage, int TutorialIndex, float TutorialDuration) { NativeCall<void, const FString&, const FString&, UTexture2D*, int, float>(this, "AShooterHUD.ShowTutorial(FString&,FString&,UTexture2D*,int,float)", TutorialTitle, TutorialText, TutorialImage, TutorialIndex, TutorialDuration); }
	void BPRemoveHUDRichTextOverlayAtIndex(int Index) { NativeCall<void, int>(this, "AShooterHUD.BPRemoveHUDRichTextOverlayAtIndex(int)", Index); }
	bool IsUsingCustomWheelRadialSelector() { return NativeCall<bool>(this, "AShooterHUD.IsUsingCustomWheelRadialSelector()"); }
	bool GetSelectedCustomWheelEntry_v2(FCustomWheelEntry_v2& OutSelectedEntry) { return NativeCall<bool, FCustomWheelEntry_v2&>(this, "AShooterHUD.GetSelectedCustomWheelEntry_v2(FCustomWheelEntry_v2&)", OutSelectedEntry); }
	bool IsZoomingSpyglass() { return NativeCall<bool>(this, "AShooterHUD.IsZoomingSpyglass()"); }
	bool CloseSpawnMenu() { return NativeCall<bool>(this, "AShooterHUD.CloseSpawnMenu()"); }
	bool ChatWindowHasFocus() { return NativeCall<bool>(this, "AShooterHUD.ChatWindowHasFocus()"); }
	bool IsMissionAlertVisible(bool bGetTopAlertVisibility) { return NativeCall<bool, bool>(this, "AShooterHUD.IsMissionAlertVisible(bool)", bGetTopAlertVisibility); }
};
