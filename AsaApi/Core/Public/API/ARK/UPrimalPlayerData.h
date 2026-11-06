#pragma once
#include "BulkForward.h"


struct UPrimalPlayerData : UObject
{
	// Fields

	FPrimalPlayerDataStruct* MyDataField() { return GetNativePointerField<FPrimalPlayerDataStruct*>(this, "UPrimalPlayerData.MyData"); }
	TArray<UPrimalBuffPersistentData*, TSizedDefaultAllocator<32> >& MyPersistentBuffDatasField() { return *GetNativePointerField<TArray<UPrimalBuffPersistentData*, TSizedDefaultAllocator<32> >*>(this, "UPrimalPlayerData.MyPersistentBuffDatas"); }
	bool& bIsLocalPlayerField() { return *GetNativePointerField<bool*>(this, "UPrimalPlayerData.bIsLocalPlayer"); }
	int& LocalPlayerIndexField() { return *GetNativePointerField<int*>(this, "UPrimalPlayerData.LocalPlayerIndex"); }
	float& LastXPWritePercentField() { return *GetNativePointerField<float*>(this, "UPrimalPlayerData.LastXPWritePercent"); }
	TMap<FName, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, int, 0> >& MissionTagToLatestMissionScoreField() { return *GetNativePointerField<TMap<FName, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, int, 0> >*>(this, "UPrimalPlayerData.MissionTagToLatestMissionScore"); }
	//TArray<FBossEngramsSoftReferenceMapping, TSizedDefaultAllocator<32> >& BossEngramReferenceMapField() { return *GetNativePointerField<TArray<FBossEngramsSoftReferenceMapping, TSizedDefaultAllocator<32> >*>(this, "UPrimalPlayerData.BossEngramReferenceMap"); }
	TArray<FName, TSizedDefaultAllocator<32> >& RedeemedWorldItemSetsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalPlayerData.RedeemedWorldItemSets"); }
	TArray<FName, TSizedDefaultAllocator<32> >& RedeemedWorldEquipSetsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalPlayerData.RedeemedWorldEquipSets"); }
	bool& bAllowArkSeasonPassItemsField() { return *GetNativePointerField<bool*>(this, "UPrimalPlayerData.bAllowArkSeasonPassItems"); }

	// Bitfields

	// Functions

	bool SetPlayerHexagonCount(int NewHexagonCount) { return NativeCall<bool, int>(this, "UPrimalPlayerData.SetPlayerHexagonCount(int)", NewHexagonCount); }
	FLatestMissionScore* GetOrCreateLatestMissionScore(FName MissionTag, bool bCreate) { return NativeCall<FLatestMissionScore*, FName, bool>(this, "UPrimalPlayerData.GetOrCreateLatestMissionScore(FName,bool)", MissionTag, bCreate); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalPlayerData();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalPlayerData"); }
	void ApplyToPlayerState(AShooterPlayerState* aPlayerState) { NativeCall<void, AShooterPlayerState*>(this, "UPrimalPlayerData.ApplyToPlayerState(AShooterPlayerState*)", aPlayerState); }
	FString GetUniqueNetIdAsString() { using AsaReturnType = FString; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimalPlayerData.GetUniqueNetIdAsString()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void SetChibiLevels(int newLevels, AShooterPlayerController* ForPC) { NativeCall<void, int, AShooterPlayerController*>(this, "UPrimalPlayerData.SetChibiLevels(int,AShooterPlayerController*)", newLevels, ForPC); }
	void ApplyToPlayerCharacter(AShooterPlayerState* ForPlayerState, AShooterCharacter* NewPawn) { NativeCall<void, AShooterPlayerState*, AShooterCharacter*>(this, "UPrimalPlayerData.ApplyToPlayerCharacter(AShooterPlayerState*,AShooterCharacter*)", ForPlayerState, NewPawn); }
	static UPrimalPlayerData* GetDataForID(unsigned long PlayerDataID) { return NativeCall<UPrimalPlayerData*, unsigned long>(nullptr, "UPrimalPlayerData.GetDataForID(unsigned__int64)", PlayerDataID); }
	void CreatedNewPlayerData() { NativeCall<void>(this, "UPrimalPlayerData.CreatedNewPlayerData()"); }
	int GetTribeTeamID() { return NativeCall<int>(this, "UPrimalPlayerData.GetTribeTeamID()"); }
	void GrantGeneralizedAchievementTag_Implementation(FName ObtainedAchievementTag, AShooterPlayerController* ForPC) { NativeCall<void, FName, AShooterPlayerController*>(this, "UPrimalPlayerData.GrantGeneralizedAchievementTag_Implementation(FName,AShooterPlayerController*)", ObtainedAchievementTag, ForPC); }
	bool HasGeneralizedAchievementTag_Implementation(FName ObtainedAchievementTag) { return NativeCall<bool, FName>(this, "UPrimalPlayerData.HasGeneralizedAchievementTag_Implementation(FName)", ObtainedAchievementTag); }
	void GiveInitialItems(int AppID, AShooterPlayerController* ForPC) { NativeCall<void, int, AShooterPlayerController*>(this, "UPrimalPlayerData.GiveInitialItems(int,AShooterPlayerController*)", AppID, ForPC); }
	void RefreshPersistentBuffs(AShooterCharacter* theChar, bool bFromInstigatorDeath, bool bFromDisconnect, bool bSkipBuffCall) { NativeCall<void, AShooterCharacter*, bool, bool, bool>(this, "UPrimalPlayerData.RefreshPersistentBuffs(AShooterCharacter*,bool,bool,bool)", theChar, bFromInstigatorDeath, bFromDisconnect, bSkipBuffCall); }
	// Unavailable in UE 5.8.3: dependent class factory unavailable
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalPlayerData"); }
	void SetChibiLevels_Implementation(int newLevels, AShooterPlayerController* ForPC) { NativeCall<void, int, AShooterPlayerController*>(this, "UPrimalPlayerData.SetChibiLevels_Implementation(int,AShooterPlayerController*)", newLevels, ForPC); }
	void InitForPlayer(AShooterPlayerState* aPlayerState, bool bDontSaveGame) { NativeCall<void, AShooterPlayerState*, bool>(this, "UPrimalPlayerData.InitForPlayer(AShooterPlayerState*,bool)", aPlayerState, bDontSaveGame); }
	void SaveToFile(FObjectWriter* Writer) { NativeCall<void, FObjectWriter*>(this, "UPrimalPlayerData.SaveToFile(FObjectWriter&,bool)", Writer); }
	void SavePlayerData(UWorld* ForWorld, bool bSkipBuffRefresh) { NativeCall<void, UWorld*, bool>(this, "UPrimalPlayerData.SavePlayerData(UWorld*,bool)", ForWorld, bSkipBuffRefresh); }
	UWorld* GetWorld()const { return NativeCall<UWorld*>(this, "UPrimalPlayerData.GetWorld()"); }
	int GetPlayerHexagonCount_Implementation() { return NativeCall<int>(this, "UPrimalPlayerData.GetPlayerHexagonCount_Implementation()"); }
	bool HasGeneralizedAchievementTag(FName Tag) { return NativeCall<bool, FName>(this, "UPrimalPlayerData.HasGeneralizedAchievementTag(FName)", Tag); }
	void GrantGeneralizedAchievementTag(FName ObtainedAchievementTag, AShooterPlayerController* ForPC) { NativeCall<void, FName, AShooterPlayerController*>(this, "UPrimalPlayerData.GrantGeneralizedAchievementTag(FName,AShooterPlayerController*)", ObtainedAchievementTag, ForPC); }
	void GiveWorldItemSets(AShooterCharacter* NewPawn, int AppID) { NativeCall<void, AShooterCharacter*, int>(this, "UPrimalPlayerData.GiveWorldItemSets(AShooterCharacter*,int)", NewPawn, AppID); }
	bool MatchesPlayer(AShooterPlayerState* aPlayerState, bool bCheckForExistingPlayer, int WithLocalPlayerIndex) { return NativeCall<bool, AShooterPlayerState*, bool, int>(this, "UPrimalPlayerData.MatchesPlayer(AShooterPlayerState*,bool,int)", aPlayerState, bCheckForExistingPlayer, WithLocalPlayerIndex); }
	void SetSubscribedApp(int AppID, AShooterPlayerController* ForPC) { NativeCall<void, int, AShooterPlayerController*>(this, "UPrimalPlayerData.SetSubscribedApp(int,AShooterPlayerController*)", AppID, ForPC); }
	bool LoadFromFile(FObjectReader* Reader) { return NativeCall<bool, FObjectReader*>(this, "UPrimalPlayerData.LoadFromFile(FObjectReader&)", Reader); }
	AShooterPlayerState* GetPlayerState(AShooterPlayerState* ignorePlayerState, bool bOnlyCheckExistingPlayers, int WithLocalPlayerIndex) { return NativeCall<AShooterPlayerState*, AShooterPlayerState*, bool, int>(this, "UPrimalPlayerData.GetPlayerState(AShooterPlayerState*,bool,int)", ignorePlayerState, bOnlyCheckExistingPlayers, WithLocalPlayerIndex); }
	bool SetPlayerHexagonCount_Implementation(int newHexagonCount) { return NativeCall<bool, int>(this, "UPrimalPlayerData.SetPlayerHexagonCount_Implementation(int)", newHexagonCount); }
	void BPForceDefeatedBoss(int DifficultyIndex, FName BossName, AShooterPlayerController* PlayerController) { NativeCall<void, int, FName, AShooterPlayerController*>(this, "UPrimalPlayerData.BPForceDefeatedBoss(int,FName,AShooterPlayerController*)", DifficultyIndex, BossName, PlayerController); }
	//     void ApplyPersistentBuffs(AShooterCharacter* NewPawn, AShooterPlayerController* forPC) { NativeCall<void, AShooterCharacter*, AShooterPlayerController*>(this, "UPrimalPlayerData.ApplyPersistentBuffs(AShooterCharacter*,AShooterPlayerController*)", NewPawn, forPC); }
	// FUNCTION MISSING: UPrimalPlayerData.ApplyPersistentBuffs(AShooterCharacter*,AShooterPlayerController*)

	BitFieldValue<bool, unsigned char> bPreventRefreshPersistentBuffs() { return { this, "UPrimalPlayerData.bPreventRefreshPersistentBuffs"}; }
	int GetSigilCount_Abb() { return NativeCall<int>(this, "UPrimalPlayerData.GetSigilCount_Abb()"); }
	FString* LinkedPlayerIDString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalPlayerData.LinkedPlayerIDString()", result); }
	int GetPlayerHexagonCount() { return NativeCall<int>(this, "UPrimalPlayerData.GetPlayerHexagonCount()"); }
	void BPAppliedToPlayerState(AShooterPlayerState* ForPlayerState) { NativeCall<void, AShooterPlayerState*>(this, "UPrimalPlayerData.BPAppliedToPlayerState(AShooterPlayerState*)", ForPlayerState); }
	void CreateBuffsFromPersistentDatas(AShooterCharacter* NewPawn) { NativeCall<void, AShooterCharacter*>(this, "UPrimalPlayerData.CreateBuffsFromPersistentDatas(AShooterCharacter*)", NewPawn); }
	void BPCreatedNewPlayerData() { NativeCall<void>(this, "UPrimalPlayerData.BPCreatedNewPlayerData()"); }
	void ApplyPersistentBuffsFromPersistentDatas(AShooterCharacter* NewPawn, AShooterPlayerController* forPC) { NativeCall<void, AShooterCharacter*, AShooterPlayerController*>(this, "UPrimalPlayerData.ApplyPersistentBuffsFromPersistentDatas(AShooterCharacter*,AShooterPlayerController*)", NewPawn, forPC); }
	void CleanPersistentBuffDatas(AShooterCharacter* theChar, bool bFromInstigatorDeath, bool bFromDisconnect) { NativeCall<void, AShooterCharacter*, bool, bool>(this, "UPrimalPlayerData.CleanPersistentBuffDatas(AShooterCharacter*,bool,bool)", theChar, bFromInstigatorDeath, bFromDisconnect); }
	static void ApplyAssetReferencesToPlayerCharacter(AShooterCharacter* pNewPawn, const FPrimalPlayerCharacterConfigStruct& Config, bool bOnlyIfMissing) { NativeCall<void, AShooterCharacter*, const FPrimalPlayerCharacterConfigStruct&, bool>(nullptr, "UPrimalPlayerData.ApplyAssetReferencesToPlayerCharacter(AShooterCharacter*,FPrimalPlayerCharacterConfigStruct&,bool)", pNewPawn, Config, bOnlyIfMissing); }
	void BPApplyToPlayerCharacter(AShooterPlayerState* ForPlayerState, AShooterCharacter* NewPlayerCharacter) { NativeCall<void, AShooterPlayerState*, AShooterCharacter*>(this, "UPrimalPlayerData.BPApplyToPlayerCharacter(AShooterPlayerState*,AShooterCharacter*)", ForPlayerState, NewPlayerCharacter); }
	void AddSigilCount_Abb(int AdditionalSigils) { NativeCall<void, int>(this, "UPrimalPlayerData.AddSigilCount_Abb(int)", AdditionalSigils); }
	void AddSigilCount_Crimson(int AdditionalSigils) { NativeCall<void, int>(this, "UPrimalPlayerData.AddSigilCount_Crimson(int)", AdditionalSigils); }
	bool SetActivePlayerTitle(AShooterPlayerController* ForPC, int titleIndex) { return NativeCall<bool, AShooterPlayerController*, int>(this, "UPrimalPlayerData.SetActivePlayerTitle(AShooterPlayerController*,int)", ForPC, titleIndex); }
	AShooterCharacter* FindCharacterForPlayer(UWorld* pWorld) { return NativeCall<AShooterCharacter*, UWorld*>(this, "UPrimalPlayerData.FindCharacterForPlayer(UWorld*)", pWorld); }
	bool HasUnlockedAllExplorerNotes() { return NativeCall<bool>(this, "UPrimalPlayerData.HasUnlockedAllExplorerNotes()"); }
	void BPPostLoadFromFile() { NativeCall<void>(this, "UPrimalPlayerData.BPPostLoadFromFile()"); }
	int GetSigilCount_Crimson() { return NativeCall<int>(this, "UPrimalPlayerData.GetSigilCount_Crimson()"); }
	bool HasUnlockedAllBobsTallTalesExplorerNotes(int exp) { return NativeCall<bool, int>(this, "UPrimalPlayerData.HasUnlockedAllBobsTallTalesExplorerNotes(int)", exp); }
};