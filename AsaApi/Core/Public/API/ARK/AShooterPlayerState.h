#pragma once
#include "BulkForward.h"


struct AShooterPlayerState : APlayerState
{
	// Fields

	UPrimalPlayerData*& MyPlayerDataField() { return *GetNativePointerField<UPrimalPlayerData**>(this, "AShooterPlayerState.MyPlayerData"); }
	FPrimalPlayerDataStruct& MyPlayerDataStructField() { return *GetNativePointerField<FPrimalPlayerDataStruct*>(this, "AShooterPlayerState.MyPlayerDataStruct"); }
	FieldArray<TSubclassOf<UPrimalItem>, 10> DefaultItemSlotClassesField() { return  { this, "AShooterPlayerState.DefaultItemSlotClasses" }; }
	FieldArray<unsigned char, 10> DefaultItemSlotEngramsField() { return { this, "AShooterPlayerState.DefaultItemSlotEngrams" }; }
	FTribeData& MyTribeDataField() { return *GetNativePointerField<FTribeData*>(this, "AShooterPlayerState.MyTribeData"); }
	FTribeData& LastTribeInviteDataField() { return *GetNativePointerField<FTribeData*>(this, "AShooterPlayerState.LastTribeInviteData"); }
	//TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>& OnClientAdminInfoPlayerConnectedRecivedField() { return *GetNativePointerField<TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>*>(this, "AShooterPlayerState.OnClientAdminInfoPlayerConnectedRecived"); }
	//TDelegate<void __cdecl(FServerOptions), FDefaultDelegateUserPolicy>& OnClientServerOptionsInfoRecivedField() { return *GetNativePointerField<TDelegate<void __cdecl(FServerOptions), FDefaultDelegateUserPolicy>*>(this, "AShooterPlayerState.OnClientServerOptionsInfoRecived"); }
	//TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>& OnClientAdminInfoPlayerBannedRecivedField() { return *GetNativePointerField<TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>*>(this, "AShooterPlayerState.OnClientAdminInfoPlayerBannedRecived"); }
	//TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>& OnClientAdminInfoPlayerAdministratorRecivedField() { return *GetNativePointerField<TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>*>(this, "AShooterPlayerState.OnClientAdminInfoPlayerAdministratorRecived"); }
	//TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>& OnClientAdminInfoPlayerWhiteListedRecivedField() { return *GetNativePointerField<TDelegate<void __cdecl(TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >), FDefaultDelegateUserPolicy>*>(this, "AShooterPlayerState.OnClientAdminInfoPlayerWhiteListedRecived"); }
	TArray<FSpawnPointInfo, TSizedDefaultAllocator<32> >& CachedSpawnPointInfosField() { return *GetNativePointerField<TArray<FSpawnPointInfo, TSizedDefaultAllocator<32> >*>(this, "AShooterPlayerState.CachedSpawnPointInfos"); }
	int& TotalEngramPointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.TotalEngramPoints"); }
	int& FreeEngramPointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.FreeEngramPoints"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& EngramItemBlueprintsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "AShooterPlayerState.EngramItemBlueprints"); }
	TSet<TSubclassOf<UPrimalItem>, DefaultKeyFuncs<TSubclassOf<UPrimalItem>, 0>, FDefaultSetAllocator>& ServerEngramItemBlueprintsSetField() { return *GetNativePointerField<TSet<TSubclassOf<UPrimalItem>, DefaultKeyFuncs<TSubclassOf<UPrimalItem>, 0>, FDefaultSetAllocator>*>(this, "AShooterPlayerState.ServerEngramItemBlueprintsSet"); }
	double& NextAllowedRespawnTimeField() { return *GetNativePointerField<double*>(this, "AShooterPlayerState.NextAllowedRespawnTime"); }
	float& AllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterPlayerState.AllowedRespawnInterval"); }
	double& LastTimeDiedToEnemyTeamField() { return *GetNativePointerField<double*>(this, "AShooterPlayerState.LastTimeDiedToEnemyTeam"); }
	int& CurrentlySelectedDinoOrderGroupField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.CurrentlySelectedDinoOrderGroup"); }
	FieldArray<FDinoOrderGroup, 10> DinoOrderGroupsField() { return { this, "AShooterPlayerState.DinoOrderGroups" }; }
	double& GenesisAbilityErrorLastTimeField() { return *GetNativePointerField<double*>(this, "AShooterPlayerState.GenesisAbilityErrorLastTime"); }
	double& NextAllowTurretCopySettingsTimeField() { return *GetNativePointerField<double*>(this, "AShooterPlayerState.NextAllowTurretCopySettingsTime"); }
	double& LastTribeRequestTimeField() { return *GetNativePointerField<double*>(this, "AShooterPlayerState.LastTribeRequestTime"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bQuitter() { return { this, "AShooterPlayerState.bQuitter" }; }

	// Functions

	int GetCharacterLevel() { return NativeCall<int>(this, "AShooterPlayerState.GetCharacterLevel()"); }
	bool AddToTribe(const FTribeData* MyNewTribe, bool bMergeTribe, bool bForce, bool bIsFromInvite, APlayerController* InviterPC) { return NativeCall<bool, const FTribeData*, bool, bool, bool, APlayerController*>(this, "AShooterPlayerState.AddToTribe(FTribeData&,bool,bool,bool,APlayerController*)", MyNewTribe, bMergeTribe, bForce, bIsFromInvite, InviterPC); }
	void ServerTribeRequestApplyRankGroupSettings_Implementation(int RankGroupIndex, FTribeRankGroup* newGroupSettings) { NativeCall<void, int, FTribeRankGroup*>(this, "AShooterPlayerState.ServerTribeRequestApplyRankGroupSettings_Implementation(int,FTribeRankGroup)", RankGroupIndex, newGroupSettings); }
	bool IsInTribe() { return NativeCall<bool>(this, "AShooterPlayerState.IsInTribe()"); }
	bool IsTribeOwner(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsTribeOwner(unsignedint)", CheckPlayerDataID); }
	void NotifyPlayerJoinedTribe_Implementation(const FString& ThePlayerName, const FString& TribeName, bool Joinee) { NativeCall<void, const FString&, const FString&, bool>(this, "AShooterPlayerState.NotifyPlayerJoinedTribe_Implementation(FString&,FString&,bool)", ThePlayerName, TribeName, Joinee); }
	void NotifyTribememberJoined_Implementation(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyTribememberJoined_Implementation(FString&)", ThePlayerName); }
	void Destroyed() { NativeCall<void>(this, "AShooterPlayerState.Destroyed()"); }
	//FString* GetPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterPlayerState.GetPlayerName()", result); }
	int GetHexCostToPurchaseNextEngramPoint() { return NativeCall<int>(this, "AShooterPlayerState.GetHexCostToPurchaseNextEngramPoint()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAShooterPlayerState();
	bool AllowDinoOrderByGroup(APrimalDinoCharacter* orderDino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "AShooterPlayerState.AllowDinoOrderByGroup(APrimalDinoCharacter*)", orderDino); }
	void ServerRequestSpawnPointsForDownloadedCharacters(unsigned long PlayerDataID, int IgnoreBedID) { NativeCall<void, unsigned long, int>(this, "AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters(unsigned__int64,int)", PlayerDataID, IgnoreBedID); }
	void ServerRequestChangePlayerData(FPrimalPlayerCharacterConfigStructReplicated* PlayerCharacterConfig) { NativeCall<void, FPrimalPlayerCharacterConfigStructReplicated*>(this, "AShooterPlayerState.ServerRequestChangePlayerData(FPrimalPlayerCharacterConfigStructReplicated)", PlayerCharacterConfig); }
	void ServerTribeRequestNewRallyPoint_Implementation(FTeamPingData* RallyPointData) { NativeCall<void, FTeamPingData*>(this, "AShooterPlayerState.ServerTribeRequestNewRallyPoint_Implementation(FTeamPingData)", RallyPointData); }
	bool HasEngram(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>&>(this, "AShooterPlayerState.HasEngram(TSubclassOf<UPrimalItem>)", ItemClass); }
	void NotifyPlayerLeft_Implementation(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyPlayerLeft_Implementation(FString&)", ThePlayerName); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >& OutLifetimeProps) const { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ClientReceiveSpawnPoints_Implementation(const TArray<FSpawnPointInfo, TSizedDefaultAllocator<32> >& SpawnPointsInfos);
	void ServerRequestCreateNewTribe_Implementation(const FString& TribeName, FTribeGovernment TribeGovernment) { NativeCall<void, const FString&, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestCreateNewTribe_Implementation(FString&,FTribeGovernment)", TribeName, TribeGovernment); }
	int GetTribeId() { return NativeCall<int>(this, "AShooterPlayerState.GetTribeId()"); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int groupIndex, APrimalDinoCharacter* DinoCharacter, bool bAdd) { NativeCall<void, int, APrimalDinoCharacter*, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int,APrimalDinoCharacter*,bool)", groupIndex, DinoCharacter, bAdd); }
	void ServerRequestApplyEngramPoints(TSubclassOf<UPrimalItem> forItemEntry) { NativeCall<void, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.ServerRequestApplyEngramPoints(TSubclassOf<UPrimalItem>)", forItemEntry); }
	void ServerRequestCreateNewTribe(const FString* TribeName, FTribeGovernment* TribeGovernment) { NativeCall<void, const FString*, FTribeGovernment*>(this, "AShooterPlayerState.ServerRequestCreateNewTribe(FString&,FTribeGovernment)", TribeName, TribeGovernment); }
	void ServerRequestLeaveTribe() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestLeaveTribe()"); }
	void ServerRequestMySpawnPoints_Implementation(int IgnoreBedID, TSubclassOf<APrimalStructure> FilterClass) { NativeCall<void, int, TSubclassOf<APrimalStructure>>(this, "AShooterPlayerState.ServerRequestMySpawnPoints_Implementation(int,TSubclassOf<APrimalStructure>)", IgnoreBedID, FilterClass); }
	void NotifyAllianceChanged_Implementation() { NativeCall<void>(this, "AShooterPlayerState.NotifyAllianceChanged_Implementation()"); }
	void ServerRequestRenameTribe_Implementation(const FString& TribeName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.ServerRequestRenameTribe_Implementation(FString&)", TribeName); }
	void ClientRefreshDinoOrderGroup(int groupIndex, FDinoOrderGroup* groupData, int UseCurrentlySelectedGroup) { NativeCall<void, int, FDinoOrderGroup*, int>(this, "AShooterPlayerState.ClientRefreshDinoOrderGroup(int,FDinoOrderGroup,int)", groupIndex, groupData, UseCurrentlySelectedGroup); }
	void BeginPlay() { NativeCall<void>(this, "AShooterPlayerState.BeginPlay()"); }
	FString GetEntryDefaultTextOverride(IDataListEntryInterface* entryInterface) { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, IDataListEntryInterface *>(this, "AShooterPlayerState.GetEntryDefaultTextOverride(IDataListEntryInterface*)", AsaReturnPointer, entryInterface); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	FString* GetPlayerOrTribeName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterPlayerState.GetPlayerOrTribeName()", result); }
	void ServerRequestPromoteAllianceMember_Implementation(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestPromoteAllianceMember_Implementation(unsignedint,unsignedint)", AllianceID, MemberID); }
	void ClientNotifyLevelUpAvailable_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ClientNotifyLevelUpAvailable_Implementation()"); }
	void BroadcastDeath_Implementation(AShooterPlayerState* KillerPlayerState, UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState) { NativeCall<void, AShooterPlayerState*, UDamageType*, AShooterPlayerState*>(this, "AShooterPlayerState.BroadcastDeath_Implementation(AShooterPlayerState*,UDamageType*,AShooterPlayerState*)", KillerPlayerState, KillerDamageType, KilledPlayerState); }
	void ServerRequestSetTribeMemberGroupRank(int PlayerIndexInTribe, int RankGroupIndex) { NativeCall<void, int, int>(this, "AShooterPlayerState.ServerRequestSetTribeMemberGroupRank(int,int)", PlayerIndexInTribe, RankGroupIndex); }
	void Reset() { NativeCall<void>(this, "AShooterPlayerState.Reset()"); }
	void NotifyUniqueDinoDownloaded_Implementation(const FString& TheDinoName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyUniqueDinoDownloaded_Implementation(FString&)", TheDinoName); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface* entryInterface) { return NativeCall<bool, IDataListEntryInterface*>(this, "AShooterPlayerState.GetEntryDefaultEnabled(IDataListEntryInterface*)", entryInterface); }
	void NotifyTribememberLeft_Implementation(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyTribememberLeft_Implementation(FString&)", ThePlayerName); }
	void ServerRequestChangePlayerData_Implementation(FPrimalPlayerCharacterConfigStructReplicated* PlayerCharacterConfig) { NativeCall<void, FPrimalPlayerCharacterConfigStructReplicated*>(this, "AShooterPlayerState.ServerRequestChangePlayerData_Implementation(FPrimalPlayerCharacterConfigStructReplicated)", PlayerCharacterConfig); }
	void ServerGetPlayerBannedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerBannedData_Implementation()"); }
	void ServerGetAllPlayerNamesAndLocations() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAllPlayerNamesAndLocations()"); }
	void SetTribeData(const FTribeData* TribeData) { NativeCall<void, const FTribeData*>(this, "AShooterPlayerState.SetTribeData(FTribeData&)", TribeData); }
	void ServerRequestDinoOrderGroups_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestDinoOrderGroups_Implementation()"); }
	void ClientUpdateNewRallyPoint_Implementation(bool DestroyRallyPoint, FTeamPingData* RallyPointData) { NativeCall<void, bool, FTeamPingData*>(this, "AShooterPlayerState.ClientUpdateNewRallyPoint_Implementation(bool,FTeamPingData)", DestroyRallyPoint, RallyPointData); }
	bool IsExclusivelyTribeAdmin(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsExclusivelyTribeAdmin(unsignedint)", CheckPlayerDataID); }
	//void ClientGetPlayerBannedData_Implementation(const TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >& list) { NativeCall<void, const TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerState.ClientGetPlayerBannedData_Implementation(TArray<FAdminPlayerDataInfo,TSizedDefaultAllocator<32>>&)", list); }
	AShooterPlayerController* GetShooterController() { return NativeCall<AShooterPlayerController*>(this, "AShooterPlayerState.GetShooterController()"); }
	void ReceivedPlayerCharacter(AShooterCharacter* NewPawn) { NativeCall<void, AShooterCharacter*>(this, "AShooterPlayerState.ReceivedPlayerCharacter(AShooterCharacter*)", NewPawn); }
	bool AllowTribeGroupPermission(ETribeGroupPermission::Type TribeGroupPermission, UObject* OnObject) { return NativeCall<bool, ETribeGroupPermission::Type, UObject*>(this, "AShooterPlayerState.AllowTribeGroupPermission(ETribeGroupPermission::Type,UObject*)", TribeGroupPermission, OnObject); }
	void AddEngramBlueprintToPlayerInventory(UPrimalInventoryComponent* invComp, TSubclassOf<UPrimalItem> engramItemBlueprint) { NativeCall<void, UPrimalInventoryComponent*, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.AddEngramBlueprintToPlayerInventory(UPrimalInventoryComponent*,TSubclassOf<UPrimalItem>)", invComp, engramItemBlueprint); }
	void ServerDeclareTribeWar_Implementation(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime) { NativeCall<void, int, int, int, float, float>(this, "AShooterPlayerState.ServerDeclareTribeWar_Implementation(int,int,int,float,float)", EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime); }
	//FTribeWar GetTribeWar(int EnemyTeam) { return NativeCall<FTribeWar, int>(this, "AShooterPlayerState.GetTribeWar(int)", EnemyTeam); }
	bool IsExclusivelyTribeOwner(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsExclusivelyTribeOwner(unsignedint)", CheckPlayerDataID); }
	void ServerUnlockEngram(TSubclassOf<UPrimalItem> forItemEntry, bool bNotifyPlayerHUD, bool bForceUnlock) { NativeCall<void, TSubclassOf<UPrimalItem>, bool, bool>(this, "AShooterPlayerState.ServerUnlockEngram(TSubclassOf<UPrimalItem>,bool,bool)", forItemEntry, bNotifyPlayerHUD, bForceUnlock); }
	void UnregisterPlayerWithSession() { NativeCall<void>(this, "AShooterPlayerState.UnregisterPlayerWithSession()"); }
	void ServerSetDefaultItemSlotClass(int slotNum, TSubclassOf<UPrimalItem> ItemClass, bool bIsEngram) { NativeCall<void, int, TSubclassOf<UPrimalItem>, bool>(this, "AShooterPlayerState.ServerSetDefaultItemSlotClass(int,TSubclassOf<UPrimalItem>,bool,FName)", slotNum, ItemClass, bIsEngram); }
	void InvitedRankGroupPlayerIntoTribe(AShooterPlayerState* OtherPlayer) { NativeCall<void, AShooterPlayerState*>(this, "AShooterPlayerState.InvitedRankGroupPlayerIntoTribe(AShooterPlayerState*)", OtherPlayer); }
	void ServerGetAllPlayerNamesAndLocations_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAllPlayerNamesAndLocations_Implementation()"); }
	//void ClientGetAllPlayerNamesAndLocations_Implementation(const TArray<FAliveNameAndLocation, TSizedDefaultAllocator<32> >& list) { NativeCall<void, const TArray<FAliveNameAndLocation, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerState.ClientGetAllPlayerNamesAndLocations_Implementation(TArray<FAliveNameAndLocation,TSizedDefaultAllocator<32>>&)", list); }
	void SetTribeTamingDinoSettings(APrimalDinoCharacter* aDinoChar) { NativeCall<void, APrimalDinoCharacter*>(this, "AShooterPlayerState.SetTribeTamingDinoSettings(APrimalDinoCharacter*)", aDinoChar); }
	FString* GetUniqueNetIdAsString(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterPlayerState.GetUniqueNetIdAsString()", result); }
	void ServerRequestLeaveAlliance_Implementation(unsigned int AllianceID) { NativeCall<void, unsigned int>(this, "AShooterPlayerState.ServerRequestLeaveAlliance_Implementation(unsignedint)", AllianceID); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "AShooterPlayerState.GetObject()"); }
	void RegisterPlayerWithSession(bool bWasFromInvite) { NativeCall<void, bool>(this, "AShooterPlayerState.RegisterPlayerWithSession(bool)", bWasFromInvite); }
	void NotifyUniqueDinoDownloadAllowed_Implementation(const FString& TheDinoName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyUniqueDinoDownloadAllowed_Implementation(FString&)", TheDinoName); }
	void CopyProperties(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AShooterPlayerState.CopyProperties(APlayerState*)", PlayerState); }
	void ServerRequestLeaveTribe_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestLeaveTribe_Implementation()"); }
	void ServerSetDinoGroupName_Implementation(int groupIndex, const FString& GroupName) { NativeCall<void, int, const FString&>(this, "AShooterPlayerState.ServerSetDinoGroupName_Implementation(int,FString&)", groupIndex, GroupName); }
	// Unavailable in UE 5.8.3: dependent factory unavailable
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterPlayerState"); }
	void ServerGetServerOptions_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetServerOptions_Implementation()"); }
	void SendTribeInviteData_Implementation(FTribeData* TribeInviteData) { NativeCall<void, FTribeData*>(this, "AShooterPlayerState.SendTribeInviteData_Implementation(FTribeData)", TribeInviteData); }
	void ClientRefreshDinoOrderGroup_Implementation(int groupIndex, FDinoOrderGroup* groupData, int UseCurrentlySelectedGroup) { NativeCall<void, int, FDinoOrderGroup*, int>(this, "AShooterPlayerState.ClientRefreshDinoOrderGroup_Implementation(int,FDinoOrderGroup,int)", groupIndex, groupData, UseCurrentlySelectedGroup); }
	void ServerRequestSetTribeGovernment_Implementation(FTribeGovernment TribeGovernment) { NativeCall<void, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestSetTribeGovernment_Implementation(FTribeGovernment)", TribeGovernment); }
	void ClientGetServerOptions_Implementation(FServerOptions* info) { NativeCall<void, FServerOptions*>(this, "AShooterPlayerState.ClientGetServerOptions_Implementation(FServerOptions)", info); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterPlayerState"); }
	void ServerRequestCreateNewPlayer_Implementation(FPrimalPlayerCharacterConfigStructReplicated* PlayerCharacterConfig) { NativeCall<void, FPrimalPlayerCharacterConfigStructReplicated*>(this, "AShooterPlayerState.ServerRequestCreateNewPlayer_Implementation(FPrimalPlayerCharacterConfigStructReplicated)", PlayerCharacterConfig); }
	bool IsInTribeWar(int EnemyTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.IsInTribeWar(int)", EnemyTeam); }
	void ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int groupIndex, TSubclassOf<APrimalDinoCharacter> DinoClass, bool bAdd) { NativeCall<void, int, TSubclassOf<APrimalDinoCharacter>, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int,TSubclassOf<APrimalDinoCharacter>,bool)", groupIndex, DinoClass, bAdd); }
	void DoRespec(UPrimalPlayerData* ForPlayerData, AShooterCharacter* ForCharacter, bool bSetRespecedAtCharacterLevel) { NativeCall<void, UPrimalPlayerData*, AShooterCharacter*, bool>(this, "AShooterPlayerState.DoRespec(UPrimalPlayerData*,AShooterCharacter*,bool)", ForPlayerData, ForCharacter, bSetRespecedAtCharacterLevel); }
	void TransferTribalObjects(const FTribeData* TribeData, bool bTransferToTribe, bool bDontIncludePlayers) { NativeCall<void, const FTribeData*, bool, bool>(this, "AShooterPlayerState.TransferTribalObjects(FTribeData&,bool,bool)", TribeData, bTransferToTribe, bDontIncludePlayers); }
	void PromoteToTribeAdmin(APlayerController* PromoterPC) { NativeCall<void, APlayerController*>(this, "AShooterPlayerState.PromoteToTribeAdmin(APlayerController*)", PromoterPC); }
	bool IsDinoClassInOrderGroup(int groupIndex, TSubclassOf<APrimalDinoCharacter> dinoClass) { return NativeCall<bool, int, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerState.IsDinoClassInOrderGroup(int,TSubclassOf<APrimalDinoCharacter>)", groupIndex, dinoClass); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int groupIndex, APrimalDinoCharacter* DinoCharacter, bool bAdd) { NativeCall<void, int, APrimalDinoCharacter*, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int,APrimalDinoCharacter*,bool)", groupIndex, DinoCharacter, bAdd); }
	void ServerDinoOrderGroup_Clear_Implementation(int groupIndex, bool bClearClasses, bool bClearChars) { NativeCall<void, int, bool, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_Clear_Implementation(int,bool,bool)", groupIndex, bClearClasses, bClearChars); }
	void ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int groupIndex, bool bIsClass, int entryIndex) { NativeCall<void, int, bool, int>(this, "AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int,bool,int)", groupIndex, bIsClass, entryIndex); }
	void ServerRequestRenameTribe_Implementation(const FString* TribeName) { NativeCall<void, const FString*>(this, "AShooterPlayerState.ServerRequestRenameTribe_Implementation(FString&)", TribeName); }
	void ServerRequestSetTribeGovernment_Implementation(FTribeGovernment* TribeGovernment) { NativeCall<void, FTribeGovernment*>(this, "AShooterPlayerState.ServerRequestSetTribeGovernment_Implementation(FTribeGovernment)", TribeGovernment); }
	void ServerRequestCreateNewTribe_Implementation(FString* TribeName, FTribeGovernment* TribeGovernment) { NativeCall<void, FString*, FTribeGovernment*>(this, "AShooterPlayerState.ServerRequestCreateNewTribe_Implementation(FString&,FTribeGovernment)", TribeName, TribeGovernment); }
	void ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int)", PlayerIndexInTribe); }
	void ServerRequestPromotePlayerInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestPromotePlayerInMyTribe_Implementation(int)", PlayerIndexInTribe); }
	void ServerRequestDemotePlayerInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestDemotePlayerInMyTribe_Implementation(int)", PlayerIndexInTribe); }
	void ServerRequestSetTribeMemberGroupRank_Implementation(int PlayerIndexInTribe, int RankGroupIndex) { NativeCall<void, int, int>(this, "AShooterPlayerState.ServerRequestSetTribeMemberGroupRank_Implementation(int,int)", PlayerIndexInTribe, RankGroupIndex); }
	void UpdatedPlayerData() { NativeCall<void>(this, "AShooterPlayerState.UpdatedPlayerData()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >& ClassReps) const;
	//void ClientGetPlayerWhiteListedData_Implementation(const TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >& list) { NativeCall<void, const TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerState.ClientGetPlayerWhiteListedData_Implementation(TArray<FAdminPlayerDataInfo,TSizedDefaultAllocator<32>>&)", list); }
	//void ClientGetAlivePlayerConnectedData_Implementation(const TArray<FAlivePlayerDataInfo, TSizedDefaultAllocator<32> >& list) { NativeCall<void, const TArray<FAlivePlayerDataInfo, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerState.ClientGetAlivePlayerConnectedData_Implementation(TArray<FAlivePlayerDataInfo,TSizedDefaultAllocator<32>>&)", list); }
	void ServerSetDefaultItemSlotClass_Implementation(int slotNum, TSubclassOf<UPrimalItem> ItemClass, bool bIsEngram) { NativeCall<void, int, TSubclassOf<UPrimalItem>, bool>(this, "AShooterPlayerState.ServerSetDefaultItemSlotClass_Implementation(int,TSubclassOf<UPrimalItem>,bool,FName)", slotNum, ItemClass, bIsEngram); }
	void ServerRejectTribeWar_Implementation(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRejectTribeWar_Implementation(int)", EnemyTeamID); }
	void ServerRequestCreateNewTribe(const FString& TribeName, FTribeGovernment TribeGovernment) { NativeCall<void, const FString&, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestCreateNewTribe(FString&,FTribeGovernment)", TribeName, TribeGovernment); }
	bool IsDinoInOrderGroup(int groupIndex, APrimalDinoCharacter* dinoChar) { return NativeCall<bool, int, APrimalDinoCharacter*>(this, "AShooterPlayerState.IsDinoInOrderGroup(int,APrimalDinoCharacter*)", groupIndex, dinoChar); }
	void ServerSetSelectedDinoOrderGroup_Implementation(int newGroup) { NativeCall<void, int>(this, "AShooterPlayerState.ServerSetSelectedDinoOrderGroup_Implementation(int)", newGroup); }
	UObject* _getUObject()const { return NativeCall<UObject*>(this, "AShooterPlayerState._getUObject()"); }
	void ServerGetAlivePlayerConnectedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAlivePlayerConnectedData_Implementation()"); }
	void OverrideWith(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AShooterPlayerState.OverrideWith(APlayerState*)", PlayerState); }
	void ServerGetPlayerWhiteListedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerWhiteListedData_Implementation()"); }
	void ServerAcceptTribeWar(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerAcceptTribeWar(int)", EnemyTeamID); }
	void ServerGetPlayerConnectedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerConnectedData_Implementation()"); }
	void NotifyPlayerLeftTribe_Implementation(const FString& ThePlayerName, const FString& TribeName, bool Joinee) { NativeCall<void, const FString&, const FString&, bool>(this, "AShooterPlayerState.NotifyPlayerLeftTribe_Implementation(FString&,FString&,bool)", ThePlayerName, TribeName, Joinee); }
	void GetEntryCustomColor(IDataListEntryInterface* entryInterface, FLinearColor* CustomColor, FLinearColor* TextColorOverride) { NativeCall<void, IDataListEntryInterface*, FLinearColor*, FLinearColor*>(this, "AShooterPlayerState.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor&,FLinearColor*)", entryInterface, CustomColor, TextColorOverride); }
	void GetDataListEntries(TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >& OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString, TSizedDefaultAllocator<32> >* FoldersFound, UObject* ForObject, const wchar_t* CustomFolderFilter, char SortType, const wchar_t* NameFilter, bool includeSkins, bool onlySkins, bool bIsSkinSelectorMode) { NativeCall<void, TArray<IDataListEntryInterface*, TSizedDefaultAllocator<32> >&, int, bool, char, TArray<FString, TSizedDefaultAllocator<32> >*, UObject*, const wchar_t*, char, const wchar_t*, bool, bool, bool>(this, "AShooterPlayerState.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter, includeSkins, onlySkins, bIsSkinSelectorMode); }
	void ServerRequestRenameTribe(const FString& ServerRequestRenameTribe) { NativeCall<void, const FString&>(this, "AShooterPlayerState.ServerRequestRenameTribe(FString&)", ServerRequestRenameTribe); }
	void ServerRequestApplyEngramPoints_Implementation(TSubclassOf<UPrimalItem> forItemEntry) { NativeCall<void, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.ServerRequestApplyEngramPoints_Implementation(TSubclassOf<UPrimalItem>)", forItemEntry); }
	void NotifyPlayerJoined_Implementation(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyPlayerJoined_Implementation(FString&)", ThePlayerName); }
	void ServerRequestRemoveAllianceMember_Implementation(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestRemoveAllianceMember_Implementation(unsignedint,unsignedint)", AllianceID, MemberID); }
	void ServerRequestTransferOwnershipInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe_Implementation(int)", PlayerIndexInTribe); }
	void ServerTribeRequestNewAlliance_Implementation(const FString& AllianceName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.ServerTribeRequestNewAlliance_Implementation(FString&)", AllianceName); }
	void ServerTribeRequestAddRankGroup_Implementation(const FString& GroupName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.ServerTribeRequestAddRankGroup_Implementation(FString&)", GroupName); }
	void ServerGetPlayerAdministratorData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerAdministratorData_Implementation()"); }
	void ClearTribe(bool bDontRemoveFromTribe, bool bForce, APlayerController* ForPC) { NativeCall<void, bool, bool, APlayerController*>(this, "AShooterPlayerState.ClearTribe(bool,bool,APlayerController*)", bDontRemoveFromTribe, bForce, ForPC); }
	//void ClientGetPlayerAdministratorData_Implementation(const TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >& list) { NativeCall<void, const TArray<FAdminPlayerDataInfo, TSizedDefaultAllocator<32> >&>(this, "AShooterPlayerState.ClientGetPlayerAdministratorData_Implementation(TArray<FAdminPlayerDataInfo,TSizedDefaultAllocator<32>>&)", list); }
	void ServerTribeRequestRemoveRankGroup_Implementation(int RankGroupIndex) { NativeCall<void, int>(this, "AShooterPlayerState.ServerTribeRequestRemoveRankGroup_Implementation(int)", RankGroupIndex); }
	FString GetEngramEntryCostTextOverride(IDataListEntryInterface* entryInterface) { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, IDataListEntryInterface *>(this, "AShooterPlayerState.GetEngramEntryCostTextOverride(IDataListEntryInterface*)", AsaReturnPointer, entryInterface); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool IsTribeAdmin() { return NativeCall<bool>(this, "AShooterPlayerState.IsTribeAdmin()"); }

	double& LastChangedPlayerDataTimeField() { return *GetNativePointerField<double*>(this, "AShooterPlayerState.LastChangedPlayerDataTime"); }
	FUniqueNetIdRepl& CachedPlayerUniqueNetIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "AShooterPlayerState.CachedPlayerUniqueNetId"); }
	FName& CachedPlayerPlatformField() { return *GetNativePointerField<FName*>(this, "AShooterPlayerState.CachedPlayerPlatform"); }
	FString& CachedPlayerIPAddressField() { return *GetNativePointerField<FString*>(this, "AShooterPlayerState.CachedPlayerIPAddress"); }
	unsigned int& HashedUniqueIDField() { return *GetNativePointerField<unsigned int*>(this, "AShooterPlayerState.HashedUniqueID"); }
	int& TotalSkillPointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.TotalSkillPoints"); }
	int& FreeSkillPointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.FreeSkillPoints"); }
	BitFieldValue<bool, unsigned char> bOwnsBobsTallTales() { return { this, "AShooterPlayerState.bOwnsBobsTallTales"}; }
	BitFieldValue<bool, unsigned char> bOwnsFireLion() { return { this, "AShooterPlayerState.bOwnsFireLion"}; }
	BitFieldValue<bool, unsigned char> bOwnsDarkPegasus() { return { this, "AShooterPlayerState.bOwnsDarkPegasus"}; }
	BitFieldValue<bool, unsigned char> bOwnsShoulderDragon() { return { this, "AShooterPlayerState.bOwnsShoulderDragon"}; }
	BitFieldValue<bool, unsigned char> bOwnsSpiritBear() { return { this, "AShooterPlayerState.bOwnsSpiritBear"}; }
	bool IsAlliedWith(int OtherTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.IsAlliedWith(int)", OtherTeam); }
	void ClientUnlockedSkill(FName SkillName) { NativeCall<void, FName>(this, "AShooterPlayerState.ClientUnlockedSkill(FName)", SkillName); }
	bool ConsumeTreeSkillPoints(FName TreeTag, int Amount) { return NativeCall<bool, FName, int>(this, "AShooterPlayerState.ConsumeTreeSkillPoints(FName,int)", TreeTag, Amount); }
	void ServerRequestTransferOwnershipInMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe(int)", PlayerIndexInTribe); }
	void ServerRequestRemovePlayerIndexFromMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe(int)", PlayerIndexInTribe); }
	int GetTreeSkillPointsTotal(FName TreeTag) { return NativeCall<int, FName>(this, "AShooterPlayerState.GetTreeSkillPointsTotal(FName)", TreeTag); }
	void ServerAcceptTribeWar_Implementation(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerAcceptTribeWar_Implementation(int)", EnemyTeamID); }
	void ServerDinoOrderGroup_RemoveEntryByIndex(int groupIndex, bool bIsClass, int entryIndex) { NativeCall<void, int, bool, int>(this, "AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex(int,bool,int)", groupIndex, bIsClass, entryIndex); }
	void NotifyAllianceChanged() { NativeCall<void>(this, "AShooterPlayerState.NotifyAllianceChanged()"); }
	void ServerRequestDemotePlayerInMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestDemotePlayerInMyTribe(int)", PlayerIndexInTribe); }
	void ClientUnlockedSkill_Implementation(FName SkillName) { NativeCall<void, FName>(this, "AShooterPlayerState.ClientUnlockedSkill_Implementation(FName)", SkillName); }
	bool IsTribeFounder() { return NativeCall<bool>(this, "AShooterPlayerState.IsTribeFounder()"); }
	void AddTreeSkillPoints(FName TreeTag, int Delta) { NativeCall<void, FName, int>(this, "AShooterPlayerState.AddTreeSkillPoints(FName,int)", TreeTag, Delta); }
	FString* GetPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterPlayerState.GetPlayerName()", result); }
	static float ComputeRepeatableMilestoneXP(AShooterCharacter* Char) { return NativeCall<float, AShooterCharacter*>(nullptr, "AShooterPlayerState.ComputeRepeatableMilestoneXP(AShooterCharacter*)", Char); }
	void ServerSetDinoGroupName(int groupIndex, const FString& GroupName) { NativeCall<void, int, const FString&>(this, "AShooterPlayerState.ServerSetDinoGroupName(int,FString&)", groupIndex, GroupName); }
	void RefreshNextAllowCopySettingsTime() { NativeCall<void>(this, "AShooterPlayerState.RefreshNextAllowCopySettingsTime()"); }
	int GetSpentSkillPoints() { return NativeCall<int>(this, "AShooterPlayerState.GetSpentSkillPoints()"); }
	void ClearSkillUnlocks(FPrimalPlayerDataStruct& ForPlayerData) { NativeCall<void, FPrimalPlayerDataStruct&>(this, "AShooterPlayerState.ClearSkillUnlocks(FPrimalPlayerDataStruct&)", ForPlayerData); }
	static UPrimalProgressionTreeAsset* FindTreeForSkill(FName SkillName) { return NativeCall<UPrimalProgressionTreeAsset*, FName>(nullptr, "AShooterPlayerState.FindTreeForSkill(FName)", SkillName); }
	bool IsFriendly(int OtherTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.IsFriendly(int)", OtherTeam); }
	bool IsInRepeatTier(FName TreeName) { return NativeCall<bool, FName>(this, "AShooterPlayerState.IsInRepeatTier(FName)", TreeName); }
	void ServerGetPlayerBannedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerBannedData()"); }
	void ServerRequestLeaveAlliance(unsigned int AllianceID) { NativeCall<void, unsigned int>(this, "AShooterPlayerState.ServerRequestLeaveAlliance(unsignedint)", AllianceID); }
	bool IsAllowedToCopySettings() { return NativeCall<bool>(this, "AShooterPlayerState.IsAllowedToCopySettings()"); }
	void NotifyTribememberLeft(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyTribememberLeft(FString&)", ThePlayerName); }
	void ServerDeclareTribeWar(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime) { NativeCall<void, int, int, int, float, float>(this, "AShooterPlayerState.ServerDeclareTribeWar(int,int,int,float,float)", EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime); }
	void ServerSetSelectedDinoOrderGroup(int newGroup) { NativeCall<void, int>(this, "AShooterPlayerState.ServerSetSelectedDinoOrderGroup(int)", newGroup); }
	void ServerGetServerOptions() { NativeCall<void>(this, "AShooterPlayerState.ServerGetServerOptions()"); }
	double GetNameValue(FName name) { return NativeCall<double, FName>(this, "AShooterPlayerState.GetNameValue(FName)", name); }
	void ClientInitialize(AController* InController) { NativeCall<void, AController*>(this, "AShooterPlayerState.ClientInitialize(AController*)", InController); }
	void ServerRejectTribeWar(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRejectTribeWar(int)", EnemyTeamID); }
	void ServerGetPlayerConnectedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerConnectedData()"); }
	FString* GetShortPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "AShooterPlayerState.GetShortPlayerName()", result); }
	void RequestCreateNewPlayerWithArkData(UPrimalPlayerData* PlayerArkData, bool bForceCreateNewTribe) { NativeCall<void, UPrimalPlayerData*, bool>(this, "AShooterPlayerState.RequestCreateNewPlayerWithArkData(UPrimalPlayerData*,bool)", PlayerArkData, bForceCreateNewTribe); }
	void NotifyPlayerJoined(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyPlayerJoined(FString&)", ThePlayerName); }
	void ServerRequestPromotePlayerInMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestPromotePlayerInMyTribe(int)", PlayerIndexInTribe); }
	bool HasTribeWarRequest(int EnemyTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.HasTribeWarRequest(int)", EnemyTeam); }
	void ServerGetPlayerWhiteListedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerWhiteListedData()"); }
	void ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned __int64 PlayerDataID, int IgnoreBedID) { NativeCall<void, unsigned __int64, int>(this, "AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned__int64,int)", PlayerDataID, IgnoreBedID); }
	void NotifyPlayerLeft(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyPlayerLeft(FString&)", ThePlayerName); }
	void ServerGetPlayerAdministratorData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerAdministratorData()"); }
	void OnSetUniqueId() { NativeCall<void>(this, "AShooterPlayerState.OnSetUniqueId()"); }
	void ServerTribeRequestAddRankGroup(const FString& GroupName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.ServerTribeRequestAddRankGroup(FString&)", GroupName); }
	void SetNameValue(FName name, double value) { NativeCall<void, FName, double>(this, "AShooterPlayerState.SetNameValue(FName,double)", name, value); }
	void CheckIfBlockCausedKickFromTribe() { NativeCall<void>(this, "AShooterPlayerState.CheckIfBlockCausedKickFromTribe()"); }
	void NotifyUniqueDinoDownloadAllowed(const FString& TheDinoName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyUniqueDinoDownloadAllowed(FString&)", TheDinoName); }
	void ServerTribeRequestRemoveRankGroup(int RankGroupIndex) { NativeCall<void, int>(this, "AShooterPlayerState.ServerTribeRequestRemoveRankGroup(int)", RankGroupIndex); }
	void ServerDinoOrderGroup_Clear(int groupIndex, bool bClearClasses, bool bClearChars) { NativeCall<void, int, bool, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_Clear(int,bool,bool)", groupIndex, bClearClasses, bClearChars); }
	void ServerGetAlivePlayerConnectedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAlivePlayerConnectedData()"); }
	void LocalSetSelectedDinoOrderGroup(int newGroup, bool bDontToggle) { NativeCall<void, int, bool>(this, "AShooterPlayerState.LocalSetSelectedDinoOrderGroup(int,bool)", newGroup, bDontToggle); }
	void NotifyPlayerLeftTribe(const FString& ThePlayerName, const FString& TribeName, bool Joinee) { NativeCall<void, const FString&, const FString&, bool>(this, "AShooterPlayerState.NotifyPlayerLeftTribe(FString&,FString&,bool)", ThePlayerName, TribeName, Joinee); }
	bool BackfillTOFMilestoneNotes(FPrimalPlayerDataStruct& ForPlayerData) { return NativeCall<bool, FPrimalPlayerDataStruct&>(this, "AShooterPlayerState.BackfillTOFMilestoneNotes(FPrimalPlayerDataStruct&)", ForPlayerData); }
	int GetTreeFreeSkillPoints(FName TreeTag) { return NativeCall<int, FName>(this, "AShooterPlayerState.GetTreeFreeSkillPoints(FName)", TreeTag); }
	void ServerTribeRequestNewAlliance(const FString& AllianceName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.ServerTribeRequestNewAlliance(FString&)", AllianceName); }
	void InitMilestones(FPrimalPlayerDataStruct& ForPlayerData) { NativeCall<void, FPrimalPlayerDataStruct&>(this, "AShooterPlayerState.InitMilestones(FPrimalPlayerDataStruct&)", ForPlayerData); }
	void SetQuitter(bool bInQuitter) { NativeCall<void, bool>(this, "AShooterPlayerState.SetQuitter(bool)", bInQuitter); }
	void ServerRequestRemoveAllianceMember(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestRemoveAllianceMember(unsignedint,unsignedint)", AllianceID, MemberID); }
	void ClientNotifyLevelUpAvailable() { NativeCall<void>(this, "AShooterPlayerState.ClientNotifyLevelUpAvailable()"); }
	FString* GetDinoOrderGroupName(FString* result, int groupIndex) { return NativeCall<FString*, FString*, int>(this, "AShooterPlayerState.GetDinoOrderGroupName(int)", result, groupIndex); }
	void ServerRequestPromoteAllianceMember(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestPromoteAllianceMember(unsignedint,unsignedint)", AllianceID, MemberID); }
	void ServerRequestDinoOrderGroups() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestDinoOrderGroups()"); }
	void ResetUnlockedSkills() { NativeCall<void>(this, "AShooterPlayerState.ResetUnlockedSkills()"); }
	void NotifyTribememberJoined(const FString& ThePlayerName) { NativeCall<void, const FString&>(this, "AShooterPlayerState.NotifyTribememberJoined(FString&)", ThePlayerName); }
	void NotifyPlayerJoinedTribe(const FString& ThePlayerName, const FString& TribeName, bool Joinee) { NativeCall<void, const FString&, const FString&, bool>(this, "AShooterPlayerState.NotifyPlayerJoinedTribe(FString&,FString&,bool)", ThePlayerName, TribeName, Joinee); }
	void BroadcastDeath(AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState) { NativeCall<void, AShooterPlayerState*, const UDamageType*, AShooterPlayerState*>(this, "AShooterPlayerState.BroadcastDeath(AShooterPlayerState*,UDamageType*,AShooterPlayerState*)", KillerPlayerState, KillerDamageType, KilledPlayerState); }
	void OnRep_UpdatedEngrams() { NativeCall<void>(this, "AShooterPlayerState.OnRep_UpdatedEngrams()"); }
};