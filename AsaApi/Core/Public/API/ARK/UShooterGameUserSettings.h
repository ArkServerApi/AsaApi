#pragma once
#include "BulkForward.h"
#include "UGameUserSettings.h"

struct UShooterGameUserSettings : public UGameUserSettings
{
public:
	UShooterGameUserSettings() = delete;
	~UShooterGameUserSettings() = delete;
	UShooterGameUserSettings(const UShooterGameUserSettings&) = delete;
	UShooterGameUserSettings& operator=(const UShooterGameUserSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGameUserSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGameUserSettings"); }

	int& AdvancedGraphicsQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.AdvancedGraphicsQuality"); }
	float& MasterAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.MasterAudioVolume"); }
	float& MusicAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.MusicAudioVolume"); }
	float& SFXAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SFXAudioVolume"); }
	float& VoiceAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.VoiceAudioVolume"); }
	float& SoundUIAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SoundUIAudioVolume"); }
	float& CharacterAudioVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CharacterAudioVolume"); }
	TArray<FString, TSizedDefaultAllocator<32> >& consoleCommandHistoryField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UShooterGameUserSettings.consoleCommandHistory"); }
	float& StructureTooltipMaxSpeedMultiplyField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.StructureTooltipMaxSpeedMultiply"); }
	float& UIScalingField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.UIScaling"); }
	float& UIQuickbarScalingField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.UIQuickbarScaling"); }
	float& CameraShakeScaleField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CameraShakeScale"); }
	bool& bFirstPersonRidingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFirstPersonRiding"); }
	bool& bFirstPersonShipDrivingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFirstPersonShipDriving"); }
	bool& bThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bThirdPersonPlayer"); }
	bool& bShowStatusNotificationMessagesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowStatusNotificationMessages"); }
	float& TrueSkyQualityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TrueSkyQuality"); }
	float& FOVMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FOVMultiplier"); }
	float& GroundClutterDensityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.GroundClutterDensity"); }
	bool& bFilmGrainField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFilmGrain"); }
	bool& bUserMotionBlurField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUserMotionBlur"); }
	bool& bUseGamepadSpeakerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseGamepadSpeaker"); }
	bool& bUseDFAOField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseDFAO"); }
	bool& bUseSSAOField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseSSAO"); }
	bool& bShowChatBoxField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowChatBox"); }
	bool& bCameraViewBobField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCameraViewBob"); }
	bool& bInvertLookYField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bInvertLookY"); }
	bool& bFloatingNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFloatingNames"); }
	bool& bChatBubblesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bChatBubbles"); }
	bool& bTextChatBubblesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bTextChatBubbles"); }
	bool& bHideServerInfoField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideServerInfo"); }
	bool& bJoinNotificationsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bJoinNotifications"); }
	bool& bReceiveDiscordNotificationsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bReceiveDiscordNotifications"); }
	bool& bReceiveDiscordFriendRequestsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bReceiveDiscordFriendRequests"); }
	bool& bDisableNameYourTamePopupField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableNameYourTamePopup"); }
	bool& MinimalFloatingNameSettingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.MinimalFloatingNameSetting"); }
	bool& bCraftablesShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCraftablesShowAllItems"); }
	bool& bLocalInventoryItemsShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLocalInventoryItemsShowAllItems"); }
	bool& bLocalInventoryCraftingShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLocalInventoryCraftingShowAllItems"); }
	bool& bRemoteInventoryItemsShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryItemsShowAllItems"); }
	bool& bRemoteInventoryCraftingShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryCraftingShowAllItems"); }
	bool& bCustomCosmeticsShowAllItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCustomCosmeticsShowAllItems"); }
	bool& bRemoteInventoryShowEngramsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryShowEngrams"); }
	bool& bEnableLowLightEnhancementField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableLowLightEnhancement"); }
	bool& bEnableFluidInteractionField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableFluidInteraction"); }
	bool& bDisableHLODField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableHLOD"); }
	bool& bCinematicLightingModeField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCinematicLightingMode"); }
	bool& bRequiresRestartField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRequiresRestart"); }
	float& LookLeftRightSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LookLeftRightSensitivity"); }
	float& LookUpDownSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LookUpDownSensitivity"); }
	float& TPVCameraHorizontalOffsetFactorField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TPVCameraHorizontalOffsetFactor"); }
	int& GraphicsQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.GraphicsQuality"); }
	int& ActiveLingeringWorldTilesField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.ActiveLingeringWorldTiles"); }
	int& ClientNetQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.ClientNetQuality"); }
	float& TheGammaCorrectionField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TheGammaCorrection"); }
	int& LastServerSearchTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastServerSearchType"); }
	int& LastServerSortField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastServerSort"); }
	int& LastPVESearchTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastPVESearchType"); }
	int& LastDLCTypeSearchTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastDLCTypeSearchType"); }
	FString& LastDLCTypeSearchStringField() { return *GetNativePointerField<FString*>(this, "UShooterGameUserSettings.LastDLCTypeSearchString"); }
	bool& LastServerSortAscField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSortAsc"); }
	bool& LastAutoFavoriteField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastAutoFavorite"); }
	bool& ShowPlayerServersField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.ShowPlayerServers"); }
	bool& LastServerSearchHideFullField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSearchHideFull"); }
	bool& LastServerSearchProtectedField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastServerSearchProtected"); }
	bool& LastPlatformSpecificServerSearchField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.LastPlatformSpecificServerSearch"); }
	bool& HideItemTextOverlayField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.HideItemTextOverlay"); }
	bool& bForceShowItemNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bForceShowItemNames"); }
	bool& bDistanceFieldShadowingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDistanceFieldShadowing"); }
	bool& bDisableShadowsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableShadows"); }
	float& LODScalarField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LODScalar"); }
	bool& bToggleToTalkField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bToggleToTalk"); }
	bool& HighQualityMaterialsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.HighQualityMaterials"); }
	bool& HighQualitySurfacesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.HighQualitySurfaces"); }
	bool& bTemperatureFField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bTemperatureF"); }
	bool& bDisableTorporEffectField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableTorporEffect"); }
	bool& bChatShowSteamNameField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bChatShowSteamName"); }
	bool& bChatShowTribeNameField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bChatShowTribeName"); }
	bool& bReverseTribeLogOrderField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bReverseTribeLogOrder"); }
	int& EmoteKeyBind1Field() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EmoteKeyBind1"); }
	int& EmoteKeyBind2Field() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EmoteKeyBind2"); }
	bool& bNoBloodEffectsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bNoBloodEffects"); }
	bool& bLowQualityVFXField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bLowQualityVFX"); }
	bool& bSpectatorManualFloatingNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bSpectatorManualFloatingNames"); }
	bool& bSuppressAdminIconField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bSuppressAdminIcon"); }
	bool& bUseSimpleDistanceMovementField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseSimpleDistanceMovement"); }
	bool& bHasSavedGameField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasSavedGame"); }
	bool& bDisableMeleeCameraSwingAnimsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableMeleeCameraSwingAnims"); }
	bool& bPreventInventoryOpeningSoundsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventInventoryOpeningSounds"); }
	bool& bPreventBiomeWallsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventBiomeWalls"); }
	bool& bPreventHitMarkersField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventHitMarkers"); }
	bool& bPreventCrosshairField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventCrosshair"); }
	bool& bPreventColorizedItemNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventColorizedItemNames"); }
	bool& bHighQualityLODsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHighQualityLODs"); }
	bool& bExtraLevelStreamingDistanceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bExtraLevelStreamingDistance"); }
	bool& bEnableColorGradingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableColorGrading"); }
	int& VSyncModeTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.VSyncModeType"); }
	float& DOFSettingInterpTimeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.DOFSettingInterpTime"); }
	TArray<FString, TSizedDefaultAllocator<32> >& LastJoinedSessionPerCategoryField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UShooterGameUserSettings.LastJoinedSessionPerCategory"); }
	int& LastSessionCategoryJoinedField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastSessionCategoryJoined"); }
	int& PendingLastSessionCategoryJoinedField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.PendingLastSessionCategoryJoined"); }
	bool& bDisableMenuTransitionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableMenuTransitions"); }
	bool& bEnableInventoryItemTooltipsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableInventoryItemTooltips"); }
	bool& bRemoteInventoryShowCraftablesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRemoteInventoryShowCraftables"); }
	bool& bNoTooltipDelayField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bNoTooltipDelay"); }
	int& LocalItemSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalItemSortType"); }
	int& LocalCraftingSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalCraftingSortType"); }
	bool& bCustomCosmeticDefaultItemsTabField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCustomCosmeticDefaultItemsTab"); }
	bool& bCustomCosmeticLocalTabExpandedField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCustomCosmeticLocalTabExpanded"); }
	int& RemoteItemSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.RemoteItemSortType"); }
	int& RemoteCraftingSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.RemoteCraftingSortType"); }
	int& WorldMarketSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.WorldMarketSortType"); }
	int& LocalMarketSortTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalMarketSortType"); }
	int& WorldMarketSortType_AllyField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.WorldMarketSortType_Ally"); }
	int& LocalMarketSortType_AllyField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalMarketSortType_Ally"); }
	int& MarketFilterTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MarketFilterType"); }
	bool& bPreventDinoNameTagsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventDinoNameTags"); }
	int& VersionMetaTagField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.VersionMetaTag"); }
	bool& ShowExplorerNoteSubtitlesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.ShowExplorerNoteSubtitles"); }
	bool& DisableMenuMusicField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableMenuMusic"); }
	bool& DisableDefaultCharacterItemsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableDefaultCharacterItems"); }
	bool& DisableLoadScreenMusicField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableLoadScreenMusic"); }
	bool& DisableCosmeticsDynamicDownloadingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableCosmeticsDynamicDownloading"); }
	bool& bRequestDefaultCharacterItemsOnceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bRequestDefaultCharacterItemsOnce"); }
	bool& bHasSeenGen2IntroField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasSeenGen2Intro"); }
	bool& bHasSetupDifficultySPField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasSetupDifficultySP"); }
	bool& bHasSetupVisualSettingsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasSetupVisualSettings"); }
	bool& bDontReduceGameResolutionInInventoryField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDontReduceGameResolutionInInventory"); }
	bool& bDisableVirtualKeyboardField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableVirtualKeyboard"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& DLCModIDsLastSessionField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterGameUserSettings.DLCModIDsLastSession"); }
	int& DynamicDownloadSpeedField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.DynamicDownloadSpeed"); }
	bool& bAssociateIDWithOverwolfRunningField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bAssociateIDWithOverwolfRunning"); }
	bool& bHasEmptyStoreField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasEmptyStore"); }
	bool& bHasRunAutoSettingsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasRunAutoSettings"); }
	bool& bHideFloatingPlayerNamesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideFloatingPlayerNames"); }
	bool& bHideGamepadItemSelectionModifierField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideGamepadItemSelectionModifier"); }
	bool& bToggleExtendedHUDInfoField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bToggleExtendedHUDInfo"); }
	bool& PlayActionWheelClickSoundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.PlayActionWheelClickSound"); }
	bool& PlayHUDRolloverSoundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.PlayHUDRolloverSound"); }
	int& CompanionReactionVerbosityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CompanionReactionVerbosity"); }
	bool& EnableEnvironmentalReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableEnvironmentalReactions"); }
	bool& EnableRespawnReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableRespawnReactions"); }
	bool& EnableDeathReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableDeathReactions"); }
	bool& EnableSayHelloReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableSayHelloReactions"); }
	bool& EnableEmoteReactionsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableEmoteReactions"); }
	bool& EnableMovementSoundsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.EnableMovementSounds"); }
	bool& DisableSubtitlesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DisableSubtitles"); }
	bool& bEnableASACameraField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableASACamera"); }
	bool& ConsoleAccessField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.ConsoleAccess"); }
	int& CompanionSubtitleVerbosityLevelField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CompanionSubtitleVerbosityLevel"); }
	bool& CompanionIsHiddenStateField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.CompanionIsHiddenState"); }
	int& MaxAscensionLevelField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MaxAscensionLevel"); }
	bool& bHostSessionHasBeenOpenedField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHostSessionHasBeenOpened"); }
	bool& bForceTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bForceTPVCameraOffset"); }
	bool& bDisableTPVCameraInterpolationField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableTPVCameraInterpolation"); }
	bool& bEnableHDROutputField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableHDROutput"); }
	float& HDRDisplayMinLuminanceField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMinLuminance"); }
	float& HDRDisplayMidLuminanceField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMidLuminance"); }
	float& HDRDisplayMaxLuminanceField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMaxLuminance"); }
	float& FoliageInteractionDistanceField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FoliageInteractionDistance"); }
	float& FoliageInteractionDistanceLimitField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FoliageInteractionDistanceLimit"); }
	float& FoliageInteractionQuantityLimitField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FoliageInteractionQuantityLimit"); }
	float& HDRDisplayMinLuminanceMinValueField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMinLuminanceMinValue"); }
	float& HDRDisplayMidLuminanceMinValueField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMidLuminanceMinValue"); }
	float& HDRDisplayMaxLuminanceMinValueField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMaxLuminanceMinValue"); }
	float& HDRDisplayMinLuminanceMaxValueField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMinLuminanceMaxValue"); }
	float& HDRDisplayMidLuminanceMaxValueField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMidLuminanceMaxValue"); }
	float& HDRDisplayMaxLuminanceMaxValueField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMaxLuminanceMaxValue"); }
	float& GUI3DWidgetQualityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.GUI3DWidgetQuality"); }
	bool& bFPVClimbingGearField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFPVClimbingGear"); }
	bool& bFPVGlidingGearField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bFPVGlidingGear"); }
	bool& bHasInitializedScreenPercentageField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasInitializedScreenPercentage"); }
	int& MaxLastDeathMarkField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MaxLastDeathMark"); }
	bool& bSaveLastDeathMarkField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bSaveLastDeathMark"); }
	bool& bShowPingsOnMapField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowPingsOnMap"); }
	bool& bShowDinosOnMapField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowDinosOnMap"); }
	bool& bShowWaypointsOnMapField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowWaypointsOnMap"); }
	bool& bShowPlayersOnMapField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowPlayersOnMap"); }
	bool& bShowBedsOnMapField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowBedsOnMap"); }
	bool& bShowMissionsOnMapField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowMissionsOnMap"); }
	float& AimAssistStrengthMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.AimAssistStrengthMultiplier"); }
	float& ScreenPercentageField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.ScreenPercentage"); }
	bool& bForceShowRadialWheelTextsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bForceShowRadialWheelTexts"); }
	bool& bHideStructurePlacementCrosshairField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHideStructurePlacementCrosshair"); }
	float& SavedMainMapZoomField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SavedMainMapZoom"); }
	float& SavedOverlayMapZoomField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SavedOverlayMapZoom"); }
	bool& bMinimalUIField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bMinimalUI"); }
	TEnumAsByte<ETooltipMode::Type>& FloatingTooltipStructureModeField() { return *GetNativePointerField<TEnumAsByte<ETooltipMode::Type>*>(this, "UShooterGameUserSettings.FloatingTooltipStructureMode"); }
	TEnumAsByte<ETooltipMode::Type>& FloatingTooltipDinoModeField() { return *GetNativePointerField<TEnumAsByte<ETooltipMode::Type>*>(this, "UShooterGameUserSettings.FloatingTooltipDinoMode"); }
	TEnumAsByte<ETooltipMode::Type>& FloatingTooltipDroppedItemsModeField() { return *GetNativePointerField<TEnumAsByte<ETooltipMode::Type>*>(this, "UShooterGameUserSettings.FloatingTooltipDroppedItemsMode"); }
	TEnumAsByte<ETooltipMode::Type>& FloatingTooltipPlayerModeField() { return *GetNativePointerField<TEnumAsByte<ETooltipMode::Type>*>(this, "UShooterGameUserSettings.FloatingTooltipPlayerMode"); }
	TEnumAsByte<ENotificationMode::Type>& TopNotificationModeField() { return *GetNativePointerField<TEnumAsByte<ENotificationMode::Type>*>(this, "UShooterGameUserSettings.TopNotificationMode"); }
	TEnumAsByte<ENotificationMode::Type>& ItemNotificationModeField() { return *GetNativePointerField<TEnumAsByte<ENotificationMode::Type>*>(this, "UShooterGameUserSettings.ItemNotificationMode"); }
	bool& bMinimapOverlayUseLowOpacityField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bMinimapOverlayUseLowOpacity"); }
	int& FilterTypeInventoryLocalField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeInventoryLocal"); }
	int& FilterTypeInventoryRemoteField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeInventoryRemote"); }
	int& FilterTypeCustomCosmeticItemsField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeCustomCosmeticItems"); }
	int& FilterTypeCustomCosmeticSkinsField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeCustomCosmeticSkins"); }
	TEnumAsByte<EAimAssistType::Type>& bUseGamepadAimAssistField() { return *GetNativePointerField<TEnumAsByte<EAimAssistType::Type>*>(this, "UShooterGameUserSettings.bUseGamepadAimAssist"); }
	float& Gamma1Field() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Gamma1"); }
	float& Gamma2Field() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Gamma2"); }
	bool& bDisableBloomField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableBloom"); }
	bool& bDisableLightShaftsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableLightShafts"); }
	bool& bUseLowQualityLevelStreamingField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseLowQualityLevelStreaming"); }
	bool& bUseDistanceFieldAmbientOcclusionField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseDistanceFieldAmbientOcclusion"); }
	bool& bPreventItemCraftingSoundsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bPreventItemCraftingSounds"); }
	bool& bHighQualityAnisotropicFilteringField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHighQualityAnisotropicFiltering"); }
	float& AmbientSoundVolumeField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.AmbientSoundVolume"); }
	bool& bUseOldThirdPersonCameraTraceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseOldThirdPersonCameraTrace"); }
	bool& bUseOldThirdPersonCameraOffsetField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUseOldThirdPersonCameraOffset"); }
	bool& bShowedGenesisDLCBackgroundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowedGenesisDLCBackground"); }
	bool& bShowedGenesis2DLCBackgroundField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowedGenesis2DLCBackground"); }
	int& LastBrowsedDLCVersionField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastBrowsedDLCVersion"); }
	bool& bHasStartedTheGameOnceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasStartedTheGameOnce"); }
	bool& bHasLoadedLostColonyMainMenuOnceField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasLoadedLostColonyMainMenuOnce"); }
	bool& bViewedAnimatedSeriesTrailerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bViewedAnimatedSeriesTrailer"); }
	bool& bViewedARK2TrailerField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bViewedARK2Trailer"); }
	bool& bShowRTSKeyBindsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowRTSKeyBinds"); }
	float& TemporaryMusicStingerReductionMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TemporaryMusicStingerReductionMultiplier"); }
	bool& bHasCompletedGen2Field() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasCompletedGen2"); }
	bool& bEnableFootstepDecalsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableFootstepDecals"); }
	bool& bEnableFootstepParticlesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableFootstepParticles"); }
	bool& bShowInfoButtonsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowInfoButtons"); }
	bool& bDisablePaintingsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisablePaintings"); }
	bool& StopExplorerNoteAudioOnCloseField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.StopExplorerNoteAudioOnClose"); }
	bool& bVibrationField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bVibration"); }
	bool& bUIVibrationField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bUIVibration"); }
	float& radialSelectionSpeedField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.radialSelectionSpeed"); }
	float& radialSelectionSpeedConstantField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.radialSelectionSpeedConstant"); }
	bool& bDisableVirtualCursorField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableVirtualCursor"); }
	bool& DetailGraphicsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.DetailGraphics"); }
	bool& PreventDetailGraphicsField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.PreventDetailGraphics"); }
	int& GroundClutterRadiusField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.GroundClutterRadius"); }
	int& HFSQualityField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.HFSQuality"); }
	bool& bMenuGyroField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bMenuGyro"); }
	float& gyroSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.gyroSensitivity"); }
	float& virtualCursorSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.virtualCursorSensitivity"); }
	float& BubbleParticlesMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.BubbleParticlesMultiplier"); }
	float& CrosshairScaleField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CrosshairScale"); }
	float& CrosshairOpacityField() { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CrosshairOpacity"); }
	FLinearColor& CrosshairColorField() { return *GetNativePointerField<FLinearColor*>(this, "UShooterGameUserSettings.CrosshairColor"); }
	UE::Math::TVector2<double>& CrosshairColorPickerValueField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UShooterGameUserSettings.CrosshairColorPickerValue"); }
	FLinearColor& CrosshairColorOverEnemyField() { return *GetNativePointerField<FLinearColor*>(this, "UShooterGameUserSettings.CrosshairColorOverEnemy"); }
	UE::Math::TVector2<double>& CrosshairColorPickerValueOverEnemyField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UShooterGameUserSettings.CrosshairColorPickerValueOverEnemy"); }
	FLinearColor& CrosshairColorOverAllyField() { return *GetNativePointerField<FLinearColor*>(this, "UShooterGameUserSettings.CrosshairColorOverAlly"); }
	UE::Math::TVector2<double>& CrosshairColorPickerValueOverAllyField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UShooterGameUserSettings.CrosshairColorPickerValueOverAlly"); }
	FLinearColor& CrosshairColorHitmarkField() { return *GetNativePointerField<FLinearColor*>(this, "UShooterGameUserSettings.CrosshairColorHitmark"); }
	UE::Math::TVector2<double>& CrosshairColorPickerValueHitmarkField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UShooterGameUserSettings.CrosshairColorPickerValueHitmark"); }
	int& CurrentCameraModeIndexField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CurrentCameraModeIndex"); }
	int& CurrentDinoCameraModeIndexField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CurrentDinoCameraModeIndex"); }
	bool& bShowAmbientInsectsVFXField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bShowAmbientInsectsVFX"); }
	int& TextChatFilterTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.TextChatFilterType"); }
	int& VoiceChatFilterTypeField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.VoiceChatFilterType"); }
	bool& bAutomaticallyCreateWaypointOnTamingCreaturesField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bAutomaticallyCreateWaypointOnTamingCreatures"); }
	bool& bAutomaticallyCreatePOIOnDeathField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bAutomaticallyCreatePOIOnDeath"); }
	bool& bHasCFAuthCFForClientSessionField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bHasCFAuthCFForClientSession"); }
	bool& bCustomCosmeticsDefaultSupressedField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bCustomCosmeticsDefaultSupressed"); }
	int& EnableDLSSField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EnableDLSS"); }
	bool& bEnableDLFGField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableDLFG"); }
	int& FrameMultiplierField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FrameMultiplier"); }
	bool& bEnableReflexField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bEnableReflex"); }
	int& SuperResolutionQualityLevelField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.SuperResolutionQualityLevel"); }
	bool& bIsInUISpawnField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bIsInUISpawn"); }
	bool& bOCIOIsEnabledField() { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bOCIOIsEnabled"); }
	FString& OCIOAssetField() { return *GetNativePointerField<FString*>(this, "UShooterGameUserSettings.OCIOAsset"); }
	int& OCIOColorSpaceField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.OCIOColorSpace"); }
	int& OCIODisplayViewField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.OCIODisplayView"); }
	UOpenColorIOConfiguration*& CurrentOCIOConfigurationField() { return *GetNativePointerField<UOpenColorIOConfiguration**>(this, "UShooterGameUserSettings.CurrentOCIOConfiguration"); }
	FOpenColorIODisplayConfiguration& CurrenOCIODisplayConfigurationField() { return *GetNativePointerField<FOpenColorIODisplayConfiguration*>(this, "UShooterGameUserSettings.CurrenOCIODisplayConfiguration"); }
	FWorldSettingsScalabilityOverrides& CurrentWorldSettingsOverridesField() { return *GetNativePointerField<FWorldSettingsScalabilityOverrides*>(this, "UShooterGameUserSettings.CurrentWorldSettingsOverrides"); }
	int& PrevVSMEnableValueField() { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.PrevVSMEnableValue"); }
	FDelegateHandle& addedQualityChangedCallbackField() { return *GetNativePointerField<FDelegateHandle*>(this, "UShooterGameUserSettings.addedQualityChangedCallback"); }
	FTimerHandle& CosmeticSaveHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UShooterGameUserSettings.CosmeticSaveHandle"); }
	__int64& LastSavedCosmeticsTimeField() { return *GetNativePointerField<__int64*>(this, "UShooterGameUserSettings.LastSavedCosmeticsTime"); }
	EWindowMode::Type GetCurrentFullscreenMode() { return NativeCall<EWindowMode::Type>(this, "UShooterGameUserSettings.GetCurrentFullscreenMode()"); }
	FString* GetFSRQualityModeName(FString* result, int QualityMode) { return NativeCall<FString*, FString*, int>(this, "UShooterGameUserSettings.GetFSRQualityModeName(int)", result, QualityMode); }
	void ApplySFXVolumes() { NativeCall<void>(this, "UShooterGameUserSettings.ApplySFXVolumes()"); }
	void MarkDLCBrowsed(int DLCVersion) { NativeCall<void, int>(this, "UShooterGameUserSettings.MarkDLCBrowsed(int)", DLCVersion); }
	bool GetDLSSSupported() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetDLSSSupported()"); }
	static UShooterGameUserSettings* GetUserSettings() { return NativeCall<UShooterGameUserSettings*>(nullptr, "UShooterGameUserSettings.GetUserSettings()"); }
	void UpdateCustomCosmeticUserSettingName(const FCFCoreMod& mod) { NativeCall<void, const FCFCoreMod&>(this, "UShooterGameUserSettings.UpdateCustomCosmeticUserSettingName(FCFCoreMod&)", mod); }
	void SetEnableFSRFG(bool bEnable) { NativeCall<void, bool>(this, "UShooterGameUserSettings.SetEnableFSRFG(bool)", bEnable); }
	void ApplyCurrentOCIOSettings() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyCurrentOCIOSettings()"); }
	int GetDLSSModeIndex(const FString& Value) { return NativeCall<int, const FString&>(this, "UShooterGameUserSettings.GetDLSSModeIndex(FString&)", Value); }
	bool GetEnableFSRFG() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetEnableFSRFG()"); }
	static int RateGPUPerf() { return NativeCall<int>(nullptr, "UShooterGameUserSettings.RateGPUPerf()"); }
	void SetFrameGenMultiplier(int GenFrames) { NativeCall<void, int>(this, "UShooterGameUserSettings.SetFrameGenMultiplier(int)", GenFrames); }
	static int RateGPUMemory() { return NativeCall<int>(nullptr, "UShooterGameUserSettings.RateGPUMemory()"); }
	void ResolveDLCModInstallActions(const TArray<__int64, TSizedDefaultAllocator<32> >& in_modIDs, TArray<__int64, TSizedDefaultAllocator<32> >& out_InstallMods, TArray<__int64, TSizedDefaultAllocator<32> >& out_UninstallMods) { NativeCall<void, const TArray<__int64, TSizedDefaultAllocator<32> >&, TArray<__int64, TSizedDefaultAllocator<32> >&, TArray<__int64, TSizedDefaultAllocator<32> >&>(this, "UShooterGameUserSettings.ResolveDLCModInstallActions(TArray<__int64,TSizedDefaultAllocator<32>>&,TArray<__int64,TSizedDefaultAllocator<32>>&,TArray<__int64,TSizedDefaultAllocator<32>>&)", in_modIDs, out_InstallMods, out_UninstallMods); }
	int GetFrameGenMultiplier() { return NativeCall<int>(this, "UShooterGameUserSettings.GetFrameGenMultiplier()"); }
	TArray<int, TSizedDefaultAllocator<32> >* GetSupportedSuperResolutionQualityLevels(TArray<int, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(this, "UShooterGameUserSettings.GetSupportedSuperResolutionQualityLevels()", result); }
	void SetEnableReflex(bool bEnable) { NativeCall<void, bool>(this, "UShooterGameUserSettings.SetEnableReflex(bool)", bEnable); }
	void ResetDefaultGraphicsSetting() { NativeCall<void>(this, "UShooterGameUserSettings.ResetDefaultGraphicsSetting()"); }
	void AddToAgreedToTerms() { NativeCall<void>(this, "UShooterGameUserSettings.AddToAgreedToTerms()"); }
	void ApplyVolumeSettings() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyVolumeSettings()"); }
	void LoadSettings(bool bForceReload) { NativeCall<void, bool>(this, "UShooterGameUserSettings.LoadSettings(bool)", bForceReload); }
	void AddPMXM(const FOwnedPremiumMods& OwnedPremiumMods) { NativeCall<void, const FOwnedPremiumMods&>(this, "UShooterGameUserSettings.AddPMXM(FOwnedPremiumMods&)", OwnedPremiumMods); }
	FString* GetLowLatencySystemName(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterGameUserSettings.GetLowLatencySystemName()", result); }
	bool GetEnableDLFG() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetEnableDLFG()"); }
	void DoSaveCosmeticsUserSettings() { NativeCall<void>(this, "UShooterGameUserSettings.DoSaveCosmeticsUserSettings()"); }
	bool GetEnableLowLatency() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetEnableLowLatency()"); }
	FString* GetFSRProviderName(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterGameUserSettings.GetFSRProviderName()", result); }
	static double GetGPUMemoryGB() { return NativeCall<double>(nullptr, "UShooterGameUserSettings.GetGPUMemoryGB()"); }
	bool HasAgreedToTerms() { return NativeCall<bool>(this, "UShooterGameUserSettings.HasAgreedToTerms()"); }
	void ApplySettings(bool bCheckForCommandLineOverrides) { NativeCall<void, bool>(this, "UShooterGameUserSettings.ApplySettings(bool)", bCheckForCommandLineOverrides); }
	void GetMotionState(UE::Math::TVector<double>* pTilt, UE::Math::TVector<double>* pRotationRate, UE::Math::TVector<double>* pGravity, UE::Math::TVector<double>* pAcceleration) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UShooterGameUserSettings.GetMotionState(UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*)", pTilt, pRotationRate, pGravity, pAcceleration); }
	void ApplyInGameSettings() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyInGameSettings()"); }
	void ResetDefaultOptionsSetting() { NativeCall<void>(this, "UShooterGameUserSettings.ResetDefaultOptionsSetting()"); }
	void TimerSaveCosmeticsUserSettings() { NativeCall<void>(this, "UShooterGameUserSettings.TimerSaveCosmeticsUserSettings()"); }
	void ApplyGammaWithCurrentSetting() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyGammaWithCurrentSetting()"); }
	bool GetEnableReflex() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetEnableReflex()"); }
	void ApplyGammaWithNormalizedValue(float NormalizedValue) { NativeCall<void, float>(this, "UShooterGameUserSettings.ApplyGammaWithNormalizedValue(float)", NormalizedValue); }
	bool GetShouldResetCinematicForNote(int ExplorerNoteId) { return NativeCall<bool, int>(this, "UShooterGameUserSettings.GetShouldResetCinematicForNote(int)", ExplorerNoteId); }
	void ApplyCurrentWorldSettingsOverrides() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyCurrentWorldSettingsOverrides()"); }
	void EnableHDRDisplayOutputInternal(bool bEnable, int DisplayNits, bool bFromUserSettings) { NativeCall<void, bool, int, bool>(this, "UShooterGameUserSettings.EnableHDRDisplayOutputInternal(bool,int,bool)", bEnable, DisplayNits, bFromUserSettings); }
	void SetScreenPercentageClamped(float screenPct) { NativeCall<void, float>(this, "UShooterGameUserSettings.SetScreenPercentageClamped(float)", screenPct); }
	void ManageShadowSetting() { NativeCall<void>(this, "UShooterGameUserSettings.ManageShadowSetting()"); }
	bool GetDLFGSupported() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetDLFGSupported()"); }
	float GetAmbientSoundVolume() { return NativeCall<float>(this, "UShooterGameUserSettings.GetAmbientSoundVolume()"); }
	bool InitGraphicsQuality() { return NativeCall<bool>(this, "UShooterGameUserSettings.InitGraphicsQuality()"); }
	float GetVolumeByType(unsigned char VolumeType) { return NativeCall<float, unsigned char>(this, "UShooterGameUserSettings.GetVolumeByType(unsignedchar)", VolumeType); }
	void SetEnableLowLatency(bool bEnable) { NativeCall<void, bool>(this, "UShooterGameUserSettings.SetEnableLowLatency(bool)", bEnable); }
	void ResetAllCinematicForNotes() { NativeCall<void>(this, "UShooterGameUserSettings.ResetAllCinematicForNotes()"); }
	void SetToDefaults() { NativeCall<void>(this, "UShooterGameUserSettings.SetToDefaults()"); }
	FString* GetSuperResolutionQualityLevelName(FString* result, int QualityLevel) { return NativeCall<FString*, FString*, int>(this, "UShooterGameUserSettings.GetSuperResolutionQualityLevelName(int)", result, QualityLevel); }
	void ForceMuteOtherSounds(float ReductionMultiplier) { NativeCall<void, float>(this, "UShooterGameUserSettings.ForceMuteOtherSounds(float)", ReductionMultiplier); }
	void AssociateIDWithOverwolf() { NativeCall<void>(this, "UShooterGameUserSettings.AssociateIDWithOverwolf()"); }
	TArray<int, TSizedDefaultAllocator<32> >* GetSupportedFSRQualityModes(TArray<int, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(this, "UShooterGameUserSettings.GetSupportedFSRQualityModes()", result); }
	int GetSuperResolutionQualityLevelIndex(int QualityLevelIndex, bool bFromUI) { return NativeCall<int, int, bool>(this, "UShooterGameUserSettings.GetSuperResolutionQualityLevelIndex(int,bool)", QualityLevelIndex, bFromUI); }
	bool GetLowLatencySupported() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetLowLatencySupported()"); }
	void SetFSRQualityMode(int QualityMode, bool bWriteToConfig) { NativeCall<void, int, bool>(this, "UShooterGameUserSettings.SetFSRQualityMode(int,bool)", QualityMode, bWriteToConfig); }
	bool IsFSR4Supported() { return NativeCall<bool>(this, "UShooterGameUserSettings.IsFSR4Supported()"); }
	void ResetDefaultAudioSetting() { NativeCall<void>(this, "UShooterGameUserSettings.ResetDefaultAudioSetting()"); }
	bool SetSuperResolutionMethod(const FString& Method) { return NativeCall<bool, const FString&>(this, "UShooterGameUserSettings.SetSuperResolutionMethod(FString&)", Method); }
	int GetFSRQualityMode() { return NativeCall<int>(this, "UShooterGameUserSettings.GetFSRQualityMode()"); }
	bool UseFirstPersonRiding() { return NativeCall<bool>(this, "UShooterGameUserSettings.UseFirstPersonRiding()"); }
	int GetSuperResolutionQualityLevel() { return NativeCall<int>(this, "UShooterGameUserSettings.GetSuperResolutionQualityLevel()"); }
	void AllModulesLoaded() { NativeCall<void>(this, "UShooterGameUserSettings.AllModulesLoaded()"); }
	void SetEnableDLFG(bool bEnable) { NativeCall<void, bool>(this, "UShooterGameUserSettings.SetEnableDLFG(bool)", bEnable); }
	bool GetEnableDLSS() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetEnableDLSS()"); }
	int GetDLSSMode() { return NativeCall<int>(this, "UShooterGameUserSettings.GetDLSSMode()"); }
	void SetMasterAudioVolume(float volume) { NativeCall<void, float>(this, "UShooterGameUserSettings.SetMasterAudioVolume(float)", volume); }
	void SetDLSSQualityMode(const FString& mode) { NativeCall<void, const FString&>(this, "UShooterGameUserSettings.SetDLSSQualityMode(FString&)", mode); }
	void SetWorldSettingsOverrides(const FWorldSettingsScalabilityOverrides& Overrides) { NativeCall<void, const FWorldSettingsScalabilityOverrides&>(this, "UShooterGameUserSettings.SetWorldSettingsOverrides(FWorldSettingsScalabilityOverrides&)", Overrides); }
	void UpdateResolutionQuality() { NativeCall<void>(this, "UShooterGameUserSettings.UpdateResolutionQuality()"); }
	void ApplyHardwareBenchmarkResults() { NativeCall<void>(this, "UShooterGameUserSettings.ApplyHardwareBenchmarkResults()"); }
	void RemoveInGameSettings() { NativeCall<void>(this, "UShooterGameUserSettings.RemoveInGameSettings()"); }
	int GetFSRQualityModeIndex(const FString& Value) { return NativeCall<int, const FString&>(this, "UShooterGameUserSettings.GetFSRQualityModeIndex(FString&)", Value); }
	bool GetReflexSupported() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetReflexSupported()"); }
	void SetEnableDLSS(bool bEnable) { NativeCall<void, bool>(this, "UShooterGameUserSettings.SetEnableDLSS(bool)", bEnable); }
	void ValidateSettings() { NativeCall<void>(this, "UShooterGameUserSettings.ValidateSettings()"); }
	float GetMasterAudioVolume() { return NativeCall<float>(this, "UShooterGameUserSettings.GetMasterAudioVolume()"); }
	void SaveSettings() { NativeCall<void>(this, "UShooterGameUserSettings.SaveSettings()"); }
	bool GetEnableFSR() { return NativeCall<bool>(this, "UShooterGameUserSettings.GetEnableFSR()"); }
	void UpdateScreenPercentage(bool bForceToMedium) { NativeCall<void, bool>(this, "UShooterGameUserSettings.UpdateScreenPercentage(bool)", bForceToMedium); }
	void UpdateCustomCosmeticUserSetting(__int64 ForModID, bool bSuppressed, bool bSetSeen) { NativeCall<void, __int64, bool, bool>(this, "UShooterGameUserSettings.UpdateCustomCosmeticUserSetting(__int64,bool,bool)", ForModID, bSuppressed, bSetSeen); }
};
