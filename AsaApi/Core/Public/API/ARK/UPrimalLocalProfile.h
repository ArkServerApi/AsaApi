#pragma once
#include "BulkForward.h"


struct UPrimalLocalProfile : UObject {
	// Fields

	// Bitfields

	// Functions

	void AddArkTributeDino(const FARKTributeDino* Dino) { NativeCall<void, const FARKTributeDino*>(this, "UPrimalLocalProfile.AddArkTributeDino(FARKTributeDino&)", Dino); }
	void AddArkTributeDino(APrimalDinoCharacter* ArkDino) { NativeCall<void, APrimalDinoCharacter*>(this, "UPrimalLocalProfile.AddArkTributeDino(APrimalDinoCharacter*)", ArkDino); }
	void AddArkTributePlayerData(FArkTributePlayerData* ArkPlayerData) { NativeCall<void, FArkTributePlayerData*>(this, "UPrimalLocalProfile.AddArkTributePlayerData(FArkTributePlayerData)", ArkPlayerData); }
	void RemoveArkTributeDinoDataAtIndex(int DinoID1, int DinoID2) { NativeCall<void, int, int>(this, "UPrimalLocalProfile.RemoveArkTributeDinoDataAtIndex(int,int)", DinoID1, DinoID2); }
	void GetArkTributeDinosData(TArray<FARKTributeDino>* outArray) { NativeCall<void, TArray<FARKTributeDino>*>(this, "UPrimalLocalProfile.GetArkTributeDinosData()", outArray); }
	int GetNumArkTributeDinos() const { return NativeCall<int>(this, "UPrimalLocalProfile.GetNumArkTributeDinos()"); }
	int GetArkTributeInventoryCount() const { return NativeCall<int>(this, "UPrimalLocalProfile.GetArkTributeInventoryCount()"); }
	void UpdateArkTributeDino(TArray<unsigned char, TSizedDefaultAllocator<32>>* DinoData, unsigned int DinoID1, unsigned int DinoID2, FString* NameInMap) { NativeCall<void, TArray<unsigned char, TSizedDefaultAllocator<32>>*, unsigned int, unsigned int, FString*>(this, "UPrimalLocalProfile.UpdateArkTributeDino(TArray<unsignedchar,TSizedDefaultAllocator<32>>,int,unsignedint,unsignedint,FString)", DinoData, DinoID1, DinoID2, NameInMap); }

	float& MapMarkersColorSliderPercentField() { return *GetNativePointerField<float*>(this, "UPrimalLocalProfile.MapMarkersColorSliderPercent"); }
	bool& CompanionHasReactedToFirstThatchCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstThatchCraft"); }
	bool& CompanionHasReactedToFirstJumpPadCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstJumpPadCraft"); }
	bool& CompanionHasReactedToFirstOceanPlatformCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstOceanPlatformCraft"); }
	bool& CompanionHasReactedToFirstPressurePlateCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstPressurePlateCraft"); }
	bool& CompanionHasReactedToFirstFishingNetCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstFishingNetCraft"); }
	bool& CompanionHasReactedToFirstMiningDrillCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstMiningDrillCraft"); }
	bool& CompanionHasReactedToFirstShoulderCannonCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShoulderCannonCraft"); }
	bool& CompanionHasReactedToFirstTekGrenadeLauncherCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekGrenadeLauncherCraft"); }
	bool& CompanionHasReactedToFirstTekCruiseMissileCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekCruiseMissileCraft"); }
	bool& CompanionHasReactedToFirstLaserTripWireCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstLaserTripWireCraft"); }
	bool& CompanionHasReactedToFirstTekClawsCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekClawsCraft"); }
	bool& CompanionHasReactedToFirstHoverSkiffCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstHoverSkiffCraft"); }
	bool& CompanionHasReactedToFirstShapeshifterTransformField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShapeshifterTransform"); }
	bool& CompanionHasReactedToFirstShapeshifterRevertField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShapeshifterRevert"); }
	bool& CompanionHasReactedToFirstShapeshifterBloodlustField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShapeshifterBloodlust"); }
	bool& CompanionHasReactedToFirstExoSuitField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstExoSuit"); }
	bool& CompanionHasReactedToFirstTekBowField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekBow"); }
	bool& CompanionHasReactedToFirstTekPistolField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekPistol"); }
	bool& CompanionHasReactedToFirstTekCropPlotField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekCropPlot"); }
	bool& CompanionHasReactedToFirstHoversailField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstHoversail"); }
	bool& CompanionHasReactedToFirstPlantSpeciesRField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstPlantSpeciesR"); }
	bool& CompanionHasReactedToGen2BossBattleAvailableField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToGen2BossBattleAvailable"); }
	bool& CompanionHasReactedToFirstGen2ExplorerNoteFoundField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstGen2ExplorerNoteFound"); }
	bool& CompanionHasReactedToFirstGen2DispatcherEncounteredField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstGen2DispatcherEncountered"); }
	int& NumRespawnsField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.NumRespawns"); }
	int& SavedFavoritesVersionField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.SavedFavoritesVersion"); }
	bool& bHandedOffSavesToGameModeField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.bHandedOffSavesToGameMode"); }
	bool& bRetryUploadField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.bRetryUpload"); }
	double& LastSuccessfulS3UploadedTimeField() { return *GetNativePointerField<double*>(this, "UPrimalLocalProfile.LastSuccessfulS3UploadedTime"); }
	bool& bLoadedProfileField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.bLoadedProfile"); }
	bool& HasReadBytesField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.HasReadBytes"); }
	int& RemainingRetriesField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.RemainingRetries"); }
	int& LastFailedRequestField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.LastFailedRequest"); }
	double& LastLoadedOrSavedTimeField() { return *GetNativePointerField<double*>(this, "UPrimalLocalProfile.LastLoadedOrSavedTime"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalLocalProfile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalLocalProfile"); }

	FOnLoadArkTributePlayersDataFinished& OnLoadArkTributePlayersDataFinishedField() { return *GetNativePointerField<FOnLoadArkTributePlayersDataFinished*>(this, "UPrimalLocalProfile.OnLoadArkTributePlayersDataFinished"); }
	FOnSaveArkTributeFinished& OnSaveArkTributeFinishedField() { return *GetNativePointerField<FOnSaveArkTributeFinished*>(this, "UPrimalLocalProfile.OnSaveArkTributeFinished"); }
	TArray<int, TSizedDefaultAllocator<32> >& DisplayedTutorialsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.DisplayedTutorials"); }
	FArkInventoryData& MyArkDataField() { return *GetNativePointerField<FArkInventoryData*>(this, "UPrimalLocalProfile.MyArkData"); }
	TArray<unsigned __int64, TSizedDefaultAllocator<32> >& SpectatorSavedIdsField() { return *GetNativePointerField<TArray<unsigned __int64, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.SpectatorSavedIds"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& SpectatorPositionsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.SpectatorPositions"); }
	TArray<UE::Math::TRotator<double>, TSizedDefaultAllocator<32> >& SpectatorRotationsField() { return *GetNativePointerField<TArray<UE::Math::TRotator<double>, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.SpectatorRotations"); }
	TArray<FString, TSizedDefaultAllocator<32> >& FavoriteServersNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.FavoriteServersNames"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RecentlyJoinedServersNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.RecentlyJoinedServersNames"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UnlockedAchievementsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.UnlockedAchievements"); }
	TArray<FString, TSizedDefaultAllocator<32> >& UnlockedAchievementsListField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.UnlockedAchievementsList"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& GlobalExplorerNoteUnlocksField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.GlobalExplorerNoteUnlocks"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TamedDinoTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.TamedDinoTags"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& PendingSaveBytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.PendingSaveBytes"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& LastReadBytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.LastReadBytes"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& LastUploadedBytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.LastUploadedBytes"); }
	FString& CachedMapMarkersMapnameField() { return *GetNativePointerField<FString*>(this, "UPrimalLocalProfile.CachedMapMarkersMapname"); }
	FString& CachedAccountIdField() { return *GetNativePointerField<FString*>(this, "UPrimalLocalProfile.CachedAccountId"); }
	void RemoveArkTributePlayerDataAtIndex(int Index) { NativeCall<void, int>(this, "UPrimalLocalProfile.RemoveArkTributePlayerDataAtIndex(int)", Index); }
	bool IsRecentlyJoinedServerName(const FString& RecentlyJoinedServerName) { return NativeCall<bool, const FString&>(this, "UPrimalLocalProfile.IsRecentlyJoinedServerName(FString&)", RecentlyJoinedServerName); }
	void HandOffPendingSaveToGameMode() { NativeCall<void>(this, "UPrimalLocalProfile.HandOffPendingSaveToGameMode()"); }
	void RemoveAllMapMarkers() { NativeCall<void>(this, "UPrimalLocalProfile.RemoveAllMapMarkers()"); }
	void SaveToFile(FObjectWriter& Writer) { NativeCall<void, FObjectWriter&>(this, "UPrimalLocalProfile.SaveToFile(FObjectWriter&)", Writer); }
	bool ShouldUploadToS3() { return NativeCall<bool>(this, "UPrimalLocalProfile.ShouldUploadToS3()"); }
	int FindArkTributeDinoDataIndexById(unsigned int DinoID1, unsigned int DinoID2) { return NativeCall<int, unsigned int, unsigned int>(this, "UPrimalLocalProfile.FindArkTributeDinoDataIndexById(unsignedint,unsignedint)", DinoID1, DinoID2); }
	bool GetSpectatorPosition(int It, UE::Math::TVector<double>& Pos, UE::Math::TRotator<double>& Rot) { return NativeCall<bool, int, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "UPrimalLocalProfile.GetSpectatorPosition(int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", It, Pos, Rot); }
	bool LoadFromFile(FObjectReader& Reader) { return NativeCall<bool, FObjectReader&>(this, "UPrimalLocalProfile.LoadFromFile(FObjectReader&)", Reader); }
	void ReconcileArkTributePlayerDataClaims() { NativeCall<void>(this, "UPrimalLocalProfile.ReconcileArkTributePlayerDataClaims()"); }
	FGuid* ClaimArkTributePlayerData(FGuid* result, unsigned __int64 PlayerDataID, float Version, const FString& ClaimServerId) { return NativeCall<FGuid*, FGuid*, unsigned __int64, float, const FString&>(this, "UPrimalLocalProfile.ClaimArkTributePlayerData(unsigned__int64,float,FString&)", result, PlayerDataID, Version, ClaimServerId); }
	void UnlockGlobalExplorerNote(int ExplorerNoteIndex) { NativeCall<void, int>(this, "UPrimalLocalProfile.UnlockGlobalExplorerNote(int)", ExplorerNoteIndex); }
	void MarkGen2IntroAsSeen() { NativeCall<void>(this, "UPrimalLocalProfile.MarkGen2IntroAsSeen()"); }
	void RemoveMapMarkerAt(int index) { NativeCall<void, int>(this, "UPrimalLocalProfile.RemoveMapMarkerAt(int)", index); }
	bool HasReachedTributeDinosLimit(int Limit) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.HasReachedTributeDinosLimit(int)", Limit); }
	void SyncAchievementDataToLocalProfile() { NativeCall<void>(this, "UPrimalLocalProfile.SyncAchievementDataToLocalProfile()"); }
	void Load(bool ForceReload) { NativeCall<void, bool>(this, "UPrimalLocalProfile.Load(bool)", ForceReload); }
	bool ReleaseArkTributePlayerDataClaim(const FGuid& ClaimId) { return NativeCall<bool, const FGuid&>(this, "UPrimalLocalProfile.ReleaseArkTributePlayerDataClaim(FGuid&)", ClaimId); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalLocalProfile.BeginPlay()"); }
	bool HasReachedTributePlayerCharactersLimit(int Limit) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.HasReachedTributePlayerCharactersLimit(int)", Limit); }
	void AddArkTributeItem(const FItemNetInfo& ArkItem, bool SaveNow) { NativeCall<void, const FItemNetInfo&, bool>(this, "UPrimalLocalProfile.AddArkTributeItem(FItemNetInfo&,bool)", ArkItem, SaveNow); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >* SerializeClusterProfileBytes(TArray<unsigned char, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UPrimalLocalProfile.SerializeClusterProfileBytes()", result); }
	bool HasReachedTributeItemsLimit(int Limit) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.HasReachedTributeItemsLimit(int)", Limit); }
	void AddRecentlyJoinedServerName(const FString& RecentlyJoinedServerName) { NativeCall<void, const FString&>(this, "UPrimalLocalProfile.AddRecentlyJoinedServerName(FString&)", RecentlyJoinedServerName); }
	void ClearTutorials() { NativeCall<void>(this, "UPrimalLocalProfile.ClearTutorials()"); }
	FString* GetClusterPlayerPath(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalLocalProfile.GetClusterPlayerPath()", result); }
	void RemoveArkTributeItem(const FItemNetInfo& InsecureArkItem, unsigned int Quantity, bool SaveNow) { NativeCall<void, const FItemNetInfo&, unsigned int, bool>(this, "UPrimalLocalProfile.RemoveArkTributeItem(FItemNetInfo&,unsignedint,bool)", InsecureArkItem, Quantity, SaveNow); }
	void ProcessS3Uploader() { NativeCall<void>(this, "UPrimalLocalProfile.ProcessS3Uploader()"); }
	void OnProfileBytesReady(bool Success, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReadBytes, int FailureResponseCode) { NativeCall<void, bool, const TArray<unsigned char, TSizedDefaultAllocator<32> >&, int>(this, "UPrimalLocalProfile.OnProfileBytesReady(bool,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int)", Success, ReadBytes, FailureResponseCode); }
	bool IsFavoriteServerName(const FString& FavoriteServerName) { return NativeCall<bool, const FString&>(this, "UPrimalLocalProfile.IsFavoriteServerName(FString&)", FavoriteServerName); }
	void Tick() { NativeCall<void>(this, "UPrimalLocalProfile.Tick()"); }
	void RemoveAllFavoritesNamed(const FString& FavoriteServerName) { NativeCall<void, const FString&>(this, "UPrimalLocalProfile.RemoveAllFavoritesNamed(FString&)", FavoriteServerName); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimalLocalProfile.BeginDestroy()"); }
	void StartDownloading(const FString& Path) { NativeCall<void, const FString&>(this, "UPrimalLocalProfile.StartDownloading(FString&)", Path); }
	bool HasArkTributePlayerDataClaimedBy(const FString& ClaimServerId) { return NativeCall<bool, const FString&>(this, "UPrimalLocalProfile.HasArkTributePlayerDataClaimedBy(FString&)", ClaimServerId); }
	void RemoveMapMarker(FPrimalMapMarkerEntryData& marker) { NativeCall<void, FPrimalMapMarkerEntryData&>(this, "UPrimalLocalProfile.RemoveMapMarker(FPrimalMapMarkerEntryData&)", marker); }
	bool IsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.IsGlobalExplorerNoteUnlocked(int)", ExplorerNoteIndex); }
	bool ShouldHandleArkTribute() { return NativeCall<bool>(this, "UPrimalLocalProfile.ShouldHandleArkTribute()"); }
	void OnProfileFinishedSaving(bool Success, int FailureResponseCode, const FString& FailureResponseMessage, bool bAllowForcedItemDownload) { NativeCall<void, bool, int, const FString&, bool>(this, "UPrimalLocalProfile.OnProfileFinishedSaving(bool,int,FString&,bool)", Success, FailureResponseCode, FailureResponseMessage, bAllowForcedItemDownload); }
	void SaveProfile(bool bAllowForcedItemDownload) { NativeCall<void, bool>(this, "UPrimalLocalProfile.SaveProfile(bool)", bAllowForcedItemDownload); }
	void UploadToS3(const FString& Filename, const TArray<unsigned char, TSizedDefaultAllocator<32> >& DataBytes) { NativeCall<void, const FString&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "UPrimalLocalProfile.UploadToS3(FString&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", Filename, DataBytes); }
	void Save(bool bAllowForcedItemDownload) { NativeCall<void, bool>(this, "UPrimalLocalProfile.Save(bool)", bAllowForcedItemDownload); }
	void RemoveFavoriteServerName(const FString& FavoriteServerName) { NativeCall<void, const FString&>(this, "UPrimalLocalProfile.RemoveFavoriteServerName(FString&)", FavoriteServerName); }
	void ProcessS3Downloader() { NativeCall<void>(this, "UPrimalLocalProfile.ProcessS3Downloader()"); }
	FString* GetLocalSaveName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalLocalProfile.GetLocalSaveName()", result); }
	int ReleaseAllArkTributePlayerDataClaims() { return NativeCall<int>(this, "UPrimalLocalProfile.ReleaseAllArkTributePlayerDataClaims()"); }
	void AddFavoriteServerName(const FString& FavoriteServerName) { NativeCall<void, const FString&>(this, "UPrimalLocalProfile.AddFavoriteServerName(FString&)", FavoriteServerName); }
	bool IsLoading() { return NativeCall<bool>(this, "UPrimalLocalProfile.IsLoading()"); }
	bool HasSeenGen2Intro() { return NativeCall<bool>(this, "UPrimalLocalProfile.HasSeenGen2Intro()"); }
	void SetSpectatorPosition(int It, const UE::Math::TVector<double>& NewPos, const UE::Math::TRotator<double>& NewRot) { NativeCall<void, int, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "UPrimalLocalProfile.SetSpectatorPosition(int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", It, NewPos, NewRot); }
};