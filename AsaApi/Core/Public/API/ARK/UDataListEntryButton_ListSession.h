#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UDataListEntryButton_ListSession : public UBaseSelectableButtonWidget
{
public:
	UDataListEntryButton_ListSession() = delete;
	~UDataListEntryButton_ListSession() = delete;
	UDataListEntryButton_ListSession(const UDataListEntryButton_ListSession&) = delete;
	UDataListEntryButton_ListSession& operator=(const UDataListEntryButton_ListSession&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_ListSession"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_ListSession"); }

	FCustomButtonWidgetStyle& LastJoinedExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UDataListEntryButton_ListSession.LastJoinedExtendedStyle"); }
	FCustomButtonWidgetStyle& StandardExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UDataListEntryButton_ListSession.StandardExtendedStyle"); }
	FString& UniqueIdField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.UniqueId"); }
	FString& GameNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.GameName"); }
	FString& BuildIdField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.BuildId"); }
	FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.OwnerName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.MapName"); }
	FString& FriendlyMapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.FriendlyMapName"); }
	FString& DayTimeStrField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.DayTimeStr"); }
	unsigned int& NumPlayersField() { return *GetNativePointerField<unsigned int*>(this, "UDataListEntryButton_ListSession.NumPlayers"); }
	unsigned int& MaxNumPlayersField() { return *GetNativePointerField<unsigned int*>(this, "UDataListEntryButton_ListSession.MaxNumPlayers"); }
	unsigned __int64& ModIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_ListSession.ModId"); }
	unsigned __int64& TotalConversionIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_ListSession.TotalConversionId"); }
	unsigned __int64& PingField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_ListSession.Ping"); }
	FString& ModLabelStringField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.ModLabelString"); }
	bool& bHasModsField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bHasMods"); }
	bool& bHasPasswordField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bHasPassword"); }
	bool& bIsFavouriteField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsFavourite"); }
	bool& bIsPVEServerField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsPVEServer"); }
	UTexture2D*& PasswordTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryButton_ListSession.PasswordTexture"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsOfficialServer"); }
	bool& bUsingBattleEyeField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bUsingBattleEye"); }
	bool& bAllowDownloadCharactersField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bAllowDownloadCharacters"); }
	bool& bAllowDownloadDinosField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bAllowDownloadDinos"); }
	bool& bAllowDownloadItemsField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bAllowDownloadItems"); }
	UTexture2D*& BattleEyeTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryButton_ListSession.BattleEyeTexture"); }
	UTexture2D*& OfficialServerTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryButton_ListSession.OfficialServerTexture"); }
	UTexture2D*& PVPServerTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryButton_ListSession.PVPServerTexture"); }
	UTexture2D*& PVEServerTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UDataListEntryButton_ListSession.PVEServerTexture"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton_ListSession.DisplayStringSelectedColor"); }
	FShooterSessionData& CachedSessionResultField() { return *GetNativePointerField<FShooterSessionData*>(this, "UDataListEntryButton_ListSession.CachedSessionResult"); }
	FGuid& IdentifierField() { return *GetNativePointerField<FGuid*>(this, "UDataListEntryButton_ListSession.Identifier"); }
	FString& ModIdStringField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.ModIdString"); }
	bool& bIsFakeEntryField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsFakeEntry"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDataListEntryButton_ListSession.Button"); }
	UScrollBox*& ParentScrollBoxField() { return *GetNativePointerField<UScrollBox**>(this, "UDataListEntryButton_ListSession.ParentScrollBox"); }
	USizeBox*& BattleEyeIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_ListSession.BattleEyeIcon"); }
	USizeBox*& FavoriteIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_ListSession.FavoriteIcon"); }
	USizeBox*& LockIconField() { return *GetNativePointerField<USizeBox**>(this, "UDataListEntryButton_ListSession.LockIcon"); }
	UTextBlock*& SessionNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.SessionNameLabel"); }
	UTextBlock*& MapNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.MapNameLabel"); }
	UTextBlock*& PlayerNumLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.PlayerNumLabel"); }
	UTextBlock*& PingLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.PingLabel"); }
	UTextBlock*& DayLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.DayLabel"); }
	UTextBlock*& BuildLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.BuildLabel"); }
	UTextBlock*& GameModeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.GameModeLabel"); }
	UTextBlock*& WithModsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_ListSession.WithModsLabel"); }
	bool& bShowBuildColumnField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bShowBuildColumn"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UDataListEntryButton_ListSession.bSelectOnClicked"}; }
	void SetIsFakeEntry(bool fakeentry) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetIsFakeEntry(bool)", fakeentry); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UDataListEntryButton_ListSession.GetButton()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryButton_ListSession.ClickedButton(UWidget*)", clickedWidget); }
	bool IsSelected() { return NativeCall<bool>(this, "UDataListEntryButton_ListSession.IsSelected()"); }
	void SetShowBuildColumn(bool bShow) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetShowBuildColumn(bool)", bShow); }
	void SetParentScrollBox(UScrollBox* InParentScrollBox) { NativeCall<void, UScrollBox*>(this, "UDataListEntryButton_ListSession.SetParentScrollBox(UScrollBox*)", InParentScrollBox); }
	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_ListSession.InitializeMe()"); }
	void SynchronizeStrings() { NativeCall<void>(this, "UDataListEntryButton_ListSession.SynchronizeStrings()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetSelected(bool)", bSelected); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDataListEntryButton_ListSession.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void SetLastJoinedSession(bool bLastJoined) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetLastJoinedSession(bool)", bLastJoined); }
	void UpdateButton() { NativeCall<void>(this, "UDataListEntryButton_ListSession.UpdateButton()"); }
};
