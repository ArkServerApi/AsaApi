#pragma once
#include "BulkForward.h"


struct UShooterCheatManager : UCheatManager
{
	// Fields

	//TArray<TSoftClassPtr<UCheatManagerExtension>, TSizedDefaultAllocator<32> >& CheatManagerExtentionsField() { return *GetNativePointerField<TArray<TSoftClassPtr<UCheatManagerExtension>, TSizedDefaultAllocator<32> >*>(this, "UShooterCheatManager.CheatManagerExtentions"); }
	//TWeakObjectPtr<AActor>& SpectatorTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "UShooterCheatManager.SpectatorTarget"); }
	AShooterPlayerController*& MyPCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "UShooterCheatManager.MyPC"); }
	int& PendingTribeTeamIDField() { return *GetNativePointerField<int*>(this, "UShooterCheatManager.PendingTribeTeamID"); }

	// Bitfields

	// Functions

	void UnlockEmote(const FString* EmoteName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.UnlockEmote(FString&)", EmoteName); }
	static void SpoilItem(const char* pstrMessage) { NativeCall<void, const char*>(nullptr, "UShooterCheatManager.SpoilItem()", pstrMessage); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterCheatManager"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUShooterCheatManager();
	//void UShooterCheatManager(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UShooterCheatManager.UShooterCheatManager(FObjectInitializer*)", ObjectInitializer); }
	void PostInitProperties() { NativeCall<void>(this, "UShooterCheatManager.PostInitProperties()"); }
	void TakeAllStructure() { NativeCall<void>(this, "UShooterCheatManager.TakeAllStructure()"); }
	void TakeAllDino() { NativeCall<void>(this, "UShooterCheatManager.TakeAllDino()"); }
	void TakeTribe(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.TakeTribe(int)", TribeTeamID); }
	void GMBuff() { NativeCall<void>(this, "UShooterCheatManager.GMBuff()"); }
	void GMSummon(const FString* ClassName, int Level) { NativeCall<void, const FString*, int>(this, "UShooterCheatManager.GMSummon(FString&,int)", ClassName, Level); }
	void ClearMyBuffs() { NativeCall<void>(this, "UShooterCheatManager.ClearMyBuffs()"); }
	void ListMyBuffs() { NativeCall<void>(this, "UShooterCheatManager.ListMyBuffs()"); }
	void ListMyTargetBuffs() { NativeCall<void>(this, "UShooterCheatManager.ListMyTargetBuffs()"); }
	FString* ListBuffs(FString* result, APrimalCharacter* target) { return NativeCall<FString*, FString*, APrimalCharacter*>(this, "UShooterCheatManager.ListBuffs(APrimalCharacter&)", result, target); }
	void ListAllPlayerBuffs() { NativeCall<void>(this, "UShooterCheatManager.ListAllPlayerBuffs()"); }
	void DebugCompanionReactions() { NativeCall<void>(this, "UShooterCheatManager.DebugCompanionReactions()"); }
	void DebugCompanionAsyncLoadedFiles() { NativeCall<void>(this, "UShooterCheatManager.DebugCompanionAsyncLoadedFiles()"); }
	void ClearCryoSickness() { NativeCall<void>(this, "UShooterCheatManager.ClearCryoSickness()"); }
	void DoSpectateTarget() { NativeCall<void>(this, "UShooterCheatManager.DoSpectateTarget()"); }
	void Broadcast(const FString* MessageText) { NativeCall<void, const FString*>(this, "UShooterCheatManager.Broadcast(FString&)", MessageText); }
	void ChatLogAppend(const FString* MessageText) { NativeCall<void, const FString*>(this, "UShooterCheatManager.ChatLogAppend(FString&)", MessageText); }
	void AllowPlayerToJoinNoCheck(const FString* SteamId) { NativeCall<void, const FString*>(this, "UShooterCheatManager.AllowPlayerToJoinNoCheck(FString&)", SteamId); }
	void RenameTribe(const FString* TribeName, const FString* NewName) { NativeCall<void, const FString*, const FString*>(this, "UShooterCheatManager.RenameTribe(FString&,FString&)", TribeName, NewName); }
	void RenameTribeID(int TribeID, const FString* NewName) { NativeCall<void, int, const FString*>(this, "UShooterCheatManager.RenameTribeID(int,FString&)", TribeID, NewName); }
	void RenamePlayer(const FString* PlayerName, const FString* NewName) { NativeCall<void, const FString*, const FString*>(this, "UShooterCheatManager.RenamePlayer(FString&,FString&)", PlayerName, NewName); }
	void RenamePlayerId(int PlayerID, const FString* NewName) { NativeCall<void, int, const FString*>(this, "UShooterCheatManager.RenamePlayerId(int,FString&)", PlayerID, NewName); }
	void DestroyActors(const FString* ClassName, bool bExactMatch) { NativeCall<void, const FString*, bool>(this, "UShooterCheatManager.DestroyActors(FString&,bool)", ClassName, bExactMatch); }
	void DestroyWildDinoClasses(const FString* ClassName, bool bExactMatch) { NativeCall<void, const FString*, bool>(this, "UShooterCheatManager.DestroyWildDinoClasses(FString&,bool)", ClassName, bExactMatch); }
	void SetGraphicsQuality(int val) { NativeCall<void, int>(this, "UShooterCheatManager.SetGraphicsQuality(int)", val); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UShooterCheatManager.GetWorld()"); }
	void SaveWorld() { NativeCall<void>(this, "UShooterCheatManager.SaveWorld()"); }
	void StartSaveBackup() { NativeCall<void>(this, "UShooterCheatManager.StartSaveBackup()"); }
	void DoExit() { NativeCall<void>(this, "UShooterCheatManager.DoExit()"); }
	void ListDinos() { NativeCall<void>(this, "UShooterCheatManager.ListDinos()"); }
	void OpenMap(const FString* MapName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.OpenMap(FString&)", MapName); }
	void DoRestartLevel() { NativeCall<void>(this, "UShooterCheatManager.DoRestartLevel()"); }
	void SetGlobalPause(bool bIsPaused) { NativeCall<void, bool>(this, "UShooterCheatManager.SetGlobalPause(bool)", bIsPaused); }
	void CamZoomIn() { NativeCall<void>(this, "UShooterCheatManager.CamZoomIn()"); }
	void CamZoomOut() { NativeCall<void>(this, "UShooterCheatManager.CamZoomOut()"); }
	void OnToggleInGameMenu() { NativeCall<void>(this, "UShooterCheatManager.OnToggleInGameMenu()"); }
	void SetUnstasisRadius(float value) { NativeCall<void, float>(this, "UShooterCheatManager.SetUnstasisRadius(float)", value); }
	void TeleportToNearestDino(float X, float Y, float Z, float scanRange, bool bIgnoreTames, int NearestIncrement) { NativeCall<void, float, float, float, float, bool, int>(this, "UShooterCheatManager.TeleportToNearestDino(float,float,float,float,bool,int)", X, Y, Z, scanRange, bIgnoreTames, NearestIncrement); }
	void GiveResources() { NativeCall<void>(this, "UShooterCheatManager.GiveResources()"); }
	void GiveEngrams() { NativeCall<void>(this, "UShooterCheatManager.GiveEngrams()"); }
	void GiveEngramsTekOnly() { NativeCall<void>(this, "UShooterCheatManager.GiveEngramsTekOnly()"); }
	bool SetCreativeModeOnPawn(AShooterCharacter* Pawn, bool bCreativeMode) { return NativeCall<bool, AShooterCharacter*, bool>(this, "UShooterCheatManager.SetCreativeModeOnPawn(AShooterCharacter*,bool)", Pawn, bCreativeMode); }
	void GiveCreativeMode() { NativeCall<void>(this, "UShooterCheatManager.GiveCreativeMode()"); }
	void GCM() { NativeCall<void>(this, "UShooterCheatManager.GCM()"); }
	void DeepPockets() { NativeCall<void>(this, "UShooterCheatManager.DeepPockets()"); }
	void InfiniteWeight() { NativeCall<void>(this, "UShooterCheatManager.InfiniteWeight()"); }
	void GiveCreativeModeToTarget() { NativeCall<void>(this, "UShooterCheatManager.GiveCreativeModeToTarget()"); }
	void GCMT() { NativeCall<void>(this, "UShooterCheatManager.GCMT()"); }
	void GlobalObjectCount() { NativeCall<void>(this, "UShooterCheatManager.GlobalObjectCount()"); }
	void GiveCreativeModeToPlayer(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.GiveCreativeModeToPlayer(__int64)", PlayerID); }
	void GCMP(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.GCMP(__int64)", PlayerID); }
	void ForceTribes(const FString* PlayerName1, const FString* PlayerName2, const FString* NewTribeName) { NativeCall<void, const FString*, const FString*, const FString*>(this, "UShooterCheatManager.ForceTribes(FString&,FString&,FString&)", PlayerName1, PlayerName2, NewTribeName); }
	void AddExperienceToTarget(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe, EXPType::Type XPType) { NativeCall<void, float, bool, bool, EXPType::Type>(this, "UShooterCheatManager.AddExperienceToTarget(float,bool,bool,EXPType::Type)", HowMuch, fromTribeShare, bPreventSharingWithTribe, XPType); }
	void AddExperience(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe, EXPType::Type XPType) { NativeCall<void, float, bool, bool, EXPType::Type>(this, "UShooterCheatManager.AddExperience(float,bool,bool,EXPType::Type)", HowMuch, fromTribeShare, bPreventSharingWithTribe, XPType); }
	void LevelUp(FName statName, int numLevels) { NativeCall<void, FName, int>(this, "UShooterCheatManager.LevelUp(FName,int)", statName, numLevels); }
	void SetStatOnTarget(FName StatName, float value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.SetStatOnTarget(FName,float)", StatName, value); }
	void LevelUpAOE(FName statName, float Radius, int numLevels) { NativeCall<void, FName, float, int>(this, "UShooterCheatManager.LevelUpAOE(FName,float,int)", statName, Radius, numLevels); }
	void LevelUpTarget(FName StatName, int NumLevels) { NativeCall<void, FName, int>(this, "UShooterCheatManager.LevelUpTarget(FName,int)", StatName, NumLevels); }
	void LevelUpInternal(APrimalCharacter* character, FName statName, int numLevels) { NativeCall<void, APrimalCharacter*, FName, int>(this, "UShooterCheatManager.LevelUpInternal(APrimalCharacter*,FName,int)", character, statName, numLevels); }
	void GiveExpToPlayer(__int64 PlayerID, float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, __int64, float, bool, bool>(this, "UShooterCheatManager.GiveExpToPlayer(__int64,float,bool,bool)", PlayerID, HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void GiveTekEngramsTo(__int64 PlayerID, const FName* blueprintPath) { NativeCall<void, __int64, const FName*>(this, "UShooterCheatManager.GiveTekEngramsTo(__int64,FName&)", PlayerID, blueprintPath); }
	void GiveExpToTarget(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, float, bool, bool>(this, "UShooterCheatManager.GiveExpToTarget(float,bool,bool)", HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void DebugMyTarget() { NativeCall<void>(this, "UShooterCheatManager.DebugMyTarget()"); }
	void DebugMyDinoTarget(bool andDestroyEverythingElseForSomeStupidReason) { NativeCall<void, bool>(this, "UShooterCheatManager.DebugMyDinoTarget(bool)", andDestroyEverythingElseForSomeStupidReason); }
	AActor* GetAimedTargetFromLocation(const UE::Math::TVector<double>* spectatorLocation, const UE::Math::TRotator<double>* rotator, const AActor* ActorToIgnore) { return NativeCall<AActor*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const AActor*>(this, "UShooterCheatManager.GetAimedTargetFromLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*)", spectatorLocation, rotator, ActorToIgnore); }
	void DebugMyTargetPrint(AActor* actor) { NativeCall<void, AActor*>(this, "UShooterCheatManager.DebugMyTargetPrint(AActor*)", actor); }
	void DestroyMyTarget() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget()"); }
	void DestroyMyTarget2() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget2()"); }
	void DestroyMyTarget3() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget3()"); }
	void DestroyMyTarget4() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget4()"); }
	void DestroyAOE(FName Category, float Radius) { NativeCall<void, FName, float>(this, "UShooterCheatManager.DestroyAOE(FName,float)", Category, Radius); }
	void LogStackTrace() { NativeCall<void>(this, "UShooterCheatManager.LogStackTrace()"); }
	void DestroyMyPawn() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyPawn()"); }
	void ToggleFreezeStatusValues() { NativeCall<void>(this, "UShooterCheatManager.ToggleFreezeStatusValues()"); }
	void SetMyTargetSleeping(bool bIsSleeping) { NativeCall<void, bool>(this, "UShooterCheatManager.SetMyTargetSleeping(bool)", bIsSleeping); }
	void SetSleepingAOE(float Radius, bool bIsSleeping) { NativeCall<void, float, bool>(this, "UShooterCheatManager.SetSleepingAOE(float,bool)", Radius, bIsSleeping); }
	void SetTargetDinoColor(int ColorRegion, int ColorID) { NativeCall<void, int, int>(this, "UShooterCheatManager.SetTargetDinoColor(int,int)", ColorRegion, ColorID); }
	void Kill() { NativeCall<void>(this, "UShooterCheatManager.Kill()"); }
	void KillAOETribe(FName Category, float Radius, int TribeID, bool destroyOnly) { NativeCall<void, FName, float, int, bool>(this, "UShooterCheatManager.KillAOETribe(FName,float,int,bool)", Category, Radius, TribeID, destroyOnly); }
	static void ConditionalKillAOETribe() { NativeCall<void>(nullptr, "UShooterCheatManager.ConditionalKillAOETribe(std::function<bool__cdecl(AActor*)>,FName,float,int)"); }
	void KillAOE(FName Category, float Radius) { NativeCall<void, FName, float>(this, "UShooterCheatManager.KillAOE(FName,float)", Category, Radius); }
	void TameAOE(float Radius, float affinity, float effectiveness) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.TameAOE(float,float,float)", Radius, affinity, effectiveness); }
	void Mission(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.Mission(FName,float)", CheatName, Value); }
	void Dino(FName CheatName) { NativeCall<void, FName>(this, "UShooterCheatManager.Dino(FName)", CheatName); }
	void DinoSet(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.DinoSet(FName,float)", CheatName, Value); }
	void SetNetworkTime(float NewTime) { NativeCall<void, float>(this, "UShooterCheatManager.SetNetworkTime(float)", NewTime); }
	void SetDifficultyValue(float Value) { NativeCall<void, float>(this, "UShooterCheatManager.SetDifficultyValue(float)", Value); }
	//TArray<TSubclassOf<AMissionType>, TSizedDefaultAllocator<32> >* FuzzyMissionSearch(//TArray<TSubclassOf<AMissionType>, TSizedDefaultAllocator<32> >* result, const FString* MissionTag) { return NativeCall<//TArray<TSubclassOf<AMissionType>, TSizedDefaultAllocator<32> >*, //TArray<TSubclassOf<AMissionType>, TSizedDefaultAllocator<32> >*, const FString*>(this, "UShooterCheatManager.FuzzyMissionSearch(//TArray<TSubclassOf<AMissionType>,TSizedDefaultAllocator<32>>*,FString&)", result, MissionTag); }
	void StartMission(FName MissionTag) { NativeCall<void, FName>(this, "UShooterCheatManager.StartMission(FName)", MissionTag); }
	void ForceStartMission(FName MissionTag) { NativeCall<void, FName>(this, "UShooterCheatManager.ForceStartMission(FName)", MissionTag); }
	void StartMissionWithMetaData(FName MissionTag) { NativeCall<void, FName>(this, "UShooterCheatManager.StartMissionWithMetaData(FName)", MissionTag); }
	void LeaveMission() { NativeCall<void>(this, "UShooterCheatManager.LeaveMission()"); }
	void CompleteMission() { NativeCall<void>(this, "UShooterCheatManager.CompleteMission()"); }
	void DeactivateMission() { NativeCall<void>(this, "UShooterCheatManager.DeactivateMission()"); }
	void SetActiveMissionDebugFlags(int DebugFlags) { NativeCall<void, int>(this, "UShooterCheatManager.SetActiveMissionDebugFlags(int)", DebugFlags); }
	void ShowActiveMissions() { NativeCall<void>(this, "UShooterCheatManager.ShowActiveMissions()"); }
	void ShowAvailableMissionTags() { NativeCall<void>(this, "UShooterCheatManager.ShowAvailableMissionTags()"); }
	void RequestUpdateActiveMissionTags() { NativeCall<void>(this, "UShooterCheatManager.RequestUpdateActiveMissionTags()"); }
	void KillPlayer(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.KillPlayer(__int64)", PlayerID); }
	void TeleportPlayerIDToMe(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.TeleportPlayerIDToMe(__int64)", PlayerID); }
	void TeleportPlayerNameToMe(const FString* PlayerName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TeleportPlayerNameToMe(FString&)", PlayerName); }
	void TeleportToPlayer(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.TeleportToPlayer(__int64)", PlayerID); }
	void TeleportToPlayerName(const FString* PlayerName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TeleportToPlayerName(FString&)", PlayerName); }
	void TPName(const FString* PlayerName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TPName(FString&)", PlayerName); }
	void DestroyTribePlayers() { NativeCall<void>(this, "UShooterCheatManager.DestroyTribePlayers()"); }
	void DestroyTribeIdPlayers(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdPlayers(int)", TribeTeamID); }
	void DestroyTribeDinos() { NativeCall<void>(this, "UShooterCheatManager.DestroyTribeDinos()"); }
	void DestroyTribeIdDinos(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdDinos(int)", TribeTeamID); }
	void DestroyAllTames() { NativeCall<void>(this, "UShooterCheatManager.DestroyAllTames()"); }
	void DestroyTribeStructures() { NativeCall<void>(this, "UShooterCheatManager.DestroyTribeStructures()"); }
	void DestroyTribeIdStructures(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdStructures(int)", TribeTeamID); }
	void DoDestroyTribeIdStructures() { NativeCall<void>(this, "UShooterCheatManager.DoDestroyTribeIdStructures()"); }
	void DestroyTribeId(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeId(int)", TribeTeamID); }
	void SpectateMyTarget() { NativeCall<void>(this, "UShooterCheatManager.SpectateMyTarget()"); }
	void GetNearestAlliedPlayerOrDino() { NativeCall<void>(this, "UShooterCheatManager.GetNearestAlliedPlayerOrDino()"); }
	void DestroyTribeStructuresLessThan(int TribeTeamID, int Connections, bool includeContainers, bool includeLargeGates) { NativeCall<void, int, int, bool, bool>(this, "UShooterCheatManager.DestroyTribeStructuresLessThan(int,int,bool,bool)", TribeTeamID, Connections, includeContainers, includeLargeGates); }
	static void TribeMessage() { NativeCall<void>(nullptr, "UShooterCheatManager.TribeMessage(int,FString)"); }
	void ForcePlayerToJoinTargetTribe(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.ForcePlayerToJoinTargetTribe(__int64)", PlayerID); }
	void ForcePoop() { NativeCall<void>(this, "UShooterCheatManager.ForcePoop()"); }
	void TacoBell() { NativeCall<void>(this, "UShooterCheatManager.TacoBell()"); }
	void ResetLeaderboards() { NativeCall<void>(this, "UShooterCheatManager.ResetLeaderboards()"); }
	static void ForcePlayerToJoinTribe() { NativeCall<void>(nullptr, "UShooterCheatManager.ForcePlayerToJoinTribe(__int64,FString)"); }
	void ForcePlayerToJoinTribeId(__int64 PlayerID, int TribeTeamID) { NativeCall<void, __int64, int>(this, "UShooterCheatManager.ForcePlayerToJoinTribeId(__int64,int)", PlayerID, TribeTeamID); }
	void JoinTribe(__int64 PlayerID, int TribeTeamID) { NativeCall<void, __int64, int>(this, "UShooterCheatManager.JoinTribe(__int64,int)", PlayerID, TribeTeamID); }
	void DebugCheckDinoPawnsOctree() { NativeCall<void>(this, "UShooterCheatManager.DebugCheckDinoPawnsOctree()"); }
	void SpawnActor(const FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset) { NativeCall<void, const FString*, float, float, float>(this, "UShooterCheatManager.SpawnActor(FString&,float,float,float)", blueprintPath, spawnDistance, spawnYOffset, ZOffset); }
	void SpawnActorBaby(const FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset) { NativeCall<void, const FString*, float, float, float>(this, "UShooterCheatManager.SpawnActorBaby(FString&,float,float,float)", blueprintPath, spawnDistance, spawnYOffset, ZOffset); }
	void SpawnActorTamed(const FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset) { NativeCall<void, const FString*, float, float, float>(this, "UShooterCheatManager.SpawnActorTamed(FString&,float,float,float)", blueprintPath, spawnDistance, spawnYOffset, ZOffset); }
	void SpawnDino(const FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int DinoLevel) { NativeCall<void, const FString*, float, float, float, int>(this, "UShooterCheatManager.SpawnDino(FString&,float,float,float,int)", blueprintPath, spawnDistance, spawnYOffset, ZOffset, DinoLevel); }
	APrimalDinoCharacter* SpawnSetupDinoInternal(const FDinoSetup* DinoSetup, const UE::Math::TRotator<double>* SpawnRot) { return NativeCall<APrimalDinoCharacter*, const FDinoSetup*, const UE::Math::TRotator<double>*>(this, "UShooterCheatManager.SpawnSetupDinoInternal(FDinoSetup&,UE::Math::TRotator<double>&)", DinoSetup, SpawnRot); }
	void SpawnSetupDino(const FString* DinoBlueprintPath, const FString* SaddleBlueprintPath, float SaddleQuality, int DinoLevel, const FString* DinoStats, float SpawnDistance, float YOffset, float ZOffset) { NativeCall<void, const FString*, const FString*, float, int, const FString*, float, float, float>(this, "UShooterCheatManager.SpawnSetupDino(FString&,FString&,float,int,FString&,float,float,float)", DinoBlueprintPath, SaddleBlueprintPath, SaddleQuality, DinoLevel, DinoStats, SpawnDistance, YOffset, ZOffset); }
	void SpawnExactDino(const FString* DinoBlueprintPath, const FString* SaddleBlueprintPath, float SaddleQuality, int BaseLevel, int ExtraLevels, const FString* BaseStats, const FString* AddedStats, const FString* DinoName, char Cloned, char Neutered, const FString* TamedOn, const FString* UploadedFrom, const FString* ImprinterName, const FString* ImprinterUniqueNetId, float ImprintQuality, const FString* Colors, __int64 DinoID, __int64 Exp, float SpawnDistance, float YOffset, float ZOffset) { NativeCall<void, const FString*, const FString*, float, int, int, const FString*, const FString*, const FString*, char, char, const FString*, const FString*, const FString*, const FString*, float, const FString*, __int64, __int64, float, float, float>(this, "UShooterCheatManager.SpawnExactDino(FString&,FString&,float,int,int,FString&,FString&,FString&,signedchar,signedchar,FString&,FString&,FString&,FString&,float,FString&,__int64,__int64,float,float,float)", DinoBlueprintPath, SaddleBlueprintPath, SaddleQuality, BaseLevel, ExtraLevels, BaseStats, AddedStats, DinoName, Cloned, Neutered, TamedOn, UploadedFrom, ImprinterName, ImprinterUniqueNetId, ImprintQuality, Colors, DinoID, Exp, SpawnDistance, YOffset, ZOffset); }
	void DumpDinoStats() { NativeCall<void>(this, "UShooterCheatManager.DumpDinoStats()"); }
	AActor* DoSummon(const FString* ClassName) { return NativeCall<AActor*, const FString*>(this, "UShooterCheatManager.DoSummon(FString&)", ClassName); }
	void Summon(const FString* ClassName) { DoSummon(ClassName); }
	void SummonTamed(const FString* ClassName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.SummonTamed(FString&)", ClassName); }
	void ForceGiveBuff(const FName* BuffBlueprintPath, bool bEnable) { NativeCall<void, const FName*, bool>(this, "UShooterCheatManager.ForceGiveBuff(FName&,bool)", BuffBlueprintPath, bEnable); }
	void SDF(const FName& DinoBlueprintPath, bool bIsTamed, int DinoLevel, bool bLoadIfUnloaded, bool bSkipAddingTamedLevels) { NativeCall<void, const FName&, bool, int, bool, bool>(this, "UShooterCheatManager.SDF(FName&,bool,int,bool,bool)", DinoBlueprintPath, bIsTamed, DinoLevel, bLoadIfUnloaded, bSkipAddingTamedLevels); }
	void SDFBaby(const FName* DinoBlueprintPath, int DinoLevel, int BabyCount, bool bLoadIfUnloaded) { NativeCall<void, const FName*, int, int, bool>(this, "UShooterCheatManager.SDFBaby(FName&,int,int,bool)", DinoBlueprintPath, DinoLevel, BabyCount, bLoadIfUnloaded); }
	void SDFRide(const FName* DinoBlueprintPath, int DinoLevel, bool bLoadIfUnloaded) { NativeCall<void, const FName*, int, bool>(this, "UShooterCheatManager.SDFRide(FName&,int,bool,bool)", DinoBlueprintPath, DinoLevel, bLoadIfUnloaded); }
	void CheatAction(const FString* ActionName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.CheatAction(FString&)", ActionName); }
	void SpawnActorSpread(const FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, const FString*, float, float, float, int, float>(this, "UShooterCheatManager.SpawnActorSpread(FString&,float,float,float,int,float)", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void SpawnActorSpreadTamed(const FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, const FString*, float, float, float, int, float>(this, "UShooterCheatManager.SpawnActorSpreadTamed(FString&,float,float,float,int,float)", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void RainDinosHelper(const TArray<FString, TSizedDefaultAllocator<32> >* InDinoRefs, int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >*, int, float, float>(this, "UShooterCheatManager.RainDinosHelper(TArray<FString,TSizedDefaultAllocator<32>>&,int,float,float)", InDinoRefs, NumberActors, SpreadAmount, ZOffset); }
	void RainCritters(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainCritters(int,float,float)", NumberActors, SpreadAmount, ZOffset); }
	void RainDinos(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainDinos(int,float,float)", NumberActors, SpreadAmount, ZOffset); }
	void RainMonkeys(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainMonkeys(int,float,float)", NumberActors, SpreadAmount, ZOffset); }
	void RainDanger(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainDanger(int,float,float)", NumberActors, SpreadAmount, ZOffset); }
	void Scatter() { NativeCall<void>(this, "UShooterCheatManager.Scatter()"); }
	void LMA() { NativeCall<void>(this, "UShooterCheatManager.LMA()"); }
	void LeaveMeAlone() { NativeCall<void>(this, "UShooterCheatManager.LeaveMeAlone()"); }
	void InfiniteStats() { NativeCall<void>(this, "UShooterCheatManager.InfiniteStats()"); }
	void RespawnPlayer(bool KeepGender) { NativeCall<void, bool>(this, "UShooterCheatManager.RespawnPlayer(bool,int)", KeepGender); }
	void SetInfiniteStats(bool bInfinite) { NativeCall<void, bool>(this, "UShooterCheatManager.SetInfiniteStats(bool)", bInfinite); }
	void GiveInfiniteStatsToTarget() { NativeCall<void>(this, "UShooterCheatManager.GiveInfiniteStatsToTarget()"); }
	void RefillStats() { NativeCall<void>(this, "UShooterCheatManager.RefillStats()"); }
	void ToggleHud() { NativeCall<void>(this, "UShooterCheatManager.ToggleHud()"); }
	static void EnableCheats() { NativeCall<void>(nullptr, "UShooterCheatManager.EnableCheats(FString)"); }
	void ToggleGun() { NativeCall<void>(this, "UShooterCheatManager.ToggleGun()"); }
	void ToggleDamageNumbers() { NativeCall<void>(this, "UShooterCheatManager.ToggleDamageNumbers()"); }
	void ToggleDamageLogging() { NativeCall<void>(this, "UShooterCheatManager.ToggleDamageLogging()"); }
	void SetGodMode(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.SetGodMode(bool)", bEnable); }
	static void BanPlayer() { NativeCall<void>(nullptr, "UShooterCheatManager.BanPlayer(FString,FString)"); }
	static void UnbanPlayer() { NativeCall<void>(nullptr, "UShooterCheatManager.UnbanPlayer(FString)"); }
	void EnableSpectator() { NativeCall<void>(this, "UShooterCheatManager.EnableSpectator(bool)"); }
	void DisableSpectator() { NativeCall<void>(this, "UShooterCheatManager.DisableSpectator()"); }
	static void KickPlayer() { NativeCall<void>(nullptr, "UShooterCheatManager.KickPlayer(FString)"); }
	void Suicide() { NativeCall<void>(this, "UShooterCheatManager.Suicide()"); }
	void ForceTame() { NativeCall<void>(this, "UShooterCheatManager.ForceTame()"); }
	void ForceTameAOE(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.ForceTameAOE(float)", Radius); }
	void SetImprintQuality(float ImprintQuality) { NativeCall<void, float>(this, "UShooterCheatManager.SetImprintQuality(float)", ImprintQuality); }
	void SetTamingEffectivenessModifier(float TamingEffectiveness) { NativeCall<void, float>(this, "UShooterCheatManager.SetTamingEffectivenessModifier(float)", TamingEffectiveness); }
	void StartNearestHorde(FName HordeType, int DifficultyLevel, bool Teleport) { NativeCall<void, FName, int, bool>(this, "UShooterCheatManager.StartNearestHorde(FName,int,bool)", HordeType, DifficultyLevel, Teleport); }
	void ListActiveHordeEvents() { NativeCall<void>(this, "UShooterCheatManager.ListActiveHordeEvents()"); }
	void TeleportToActiveHorde(int EventIndex) { NativeCall<void, int>(this, "UShooterCheatManager.TeleportToActiveHorde(int)", EventIndex); }
	void SetImprintedPlayer(const FString* NewImprinterName, const FString* NewImprinterUniqueNetId) { NativeCall<void, const FString*, const FString*>(this, "UShooterCheatManager.SetImprintedPlayer(FString&,FString&)", NewImprinterName, NewImprinterUniqueNetId); }
	static void TransferImprints() { NativeCall<void>(nullptr, "UShooterCheatManager.TransferImprints(FString&,int,FString)"); }
	void DoTame() { NativeCall<void>(this, "UShooterCheatManager.DoTame()"); }
	void GiveToMe() { NativeCall<void>(this, "UShooterCheatManager.GiveToMe()"); }
	void GiveToMeAOE(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.GiveToMeAOE(float)", Radius); }
	void GiveAllStructure() { NativeCall<void>(this, "UShooterCheatManager.GiveAllStructure()"); }
	void SetTargetPlayerBodyVal(int BodyValIndex, float BodyVal) { NativeCall<void, int, float>(this, "UShooterCheatManager.SetTargetPlayerBodyVal(int,float)", BodyValIndex, BodyVal); }
	void SetTargetPlayerColorVal(int ColorValIndex, float ColorVal) { NativeCall<void, int, float>(this, "UShooterCheatManager.SetTargetPlayerColorVal(int,float)", ColorValIndex, ColorVal); }
	void SetBabyAge(float AgeValue) { NativeCall<void, float>(this, "UShooterCheatManager.SetBabyAge(float)", AgeValue); }
	void SetBabyAgeAOE(float AgeValue, float Radius) { NativeCall<void, float, float>(this, "UShooterCheatManager.SetBabyAgeAOE(float,float)", AgeValue, Radius); }
	void ListPlayers() { NativeCall<void>(this, "UShooterCheatManager.ListPlayers()"); }
	void GetChat() { NativeCall<void>(this, "UShooterCheatManager.GetChat()"); }
	void GetGameLog() { NativeCall<void>(this, "UShooterCheatManager.GetGameLog()"); }
	void EnemyInVisible(bool Invisible) { NativeCall<void, bool>(this, "UShooterCheatManager.EnemyInVisible(bool)", Invisible); }
	void ShowTutorial(int TutorialIndex, bool bForceDisplay) { NativeCall<void, int, bool>(this, "UShooterCheatManager.ShowTutorial(int,bool)", TutorialIndex, bForceDisplay); }
	void HideTutorial(int TutorialInde) { NativeCall<void, int>(this, "UShooterCheatManager.HideTutorial(int)", TutorialInde); }
	void ClearTutorials() { NativeCall<void>(this, "UShooterCheatManager.ClearTutorials()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void TestSteamRefreshItems();
	static void AddItemToAllClustersInventory() { NativeCall<void>(nullptr, "UShooterCheatManager.AddItemToAllClustersInventory(FString,int)"); }
	void GiveItemNum(int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, int, float, bool>(this, "UShooterCheatManager.GiveItemNum(int,int,float,bool)", masterIndexNum, quantityOverride, qualityOverride, bForceBlueprint); }
	void AddTokens(int Quantity) { NativeCall<void, int>(this, "UShooterCheatManager.AddTokens(int)", Quantity); }
	void ForceStartMatch(bool PreventFinishTheMatch, bool UseQuetzalBus) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.ForceStartMatch(bool,bool)", PreventFinishTheMatch, UseQuetzalBus); }
	void FSM(bool PreventFinishTheMatch, bool UseQuetzalBus) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.FSM(bool,bool)", PreventFinishTheMatch, UseQuetzalBus); }
	void GiveItem(const FString* blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, const FString*, int, float, bool>(this, "UShooterCheatManager.GiveItem(FString&,int,float,bool)", blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	static void GiveAllItemsInSet(AShooterPlayerController* Controller, const TArray<FItemCount, TSizedDefaultAllocator<32> >* Items) { NativeCall<void, AShooterPlayerController*, const TArray<FItemCount, TSizedDefaultAllocator<32> >*>(nullptr, "UShooterCheatManager.GiveAllItemsInSet(AShooterPlayerController*,TArray<FItemCount,TSizedDefaultAllocator<32>>&)", Controller, Items); }
	static float QualityNameToFloat(FName QualityName) { return NativeCall<float, FName>(nullptr, "UShooterCheatManager.QualityNameToFloat(FName)", QualityName); }
	void GiveArmorSet(FName Tier, FName QualityName) { NativeCall<void, FName, FName>(this, "UShooterCheatManager.GiveArmorSet(FName,FName)", Tier, QualityName); }
	void GiveWeaponSet(FName Tier, FName QualityName) { NativeCall<void, FName, FName>(this, "UShooterCheatManager.GiveWeaponSet(FName,FName)", Tier, QualityName); }
	void GiveItemSet(FName Tier) { NativeCall<void, FName>(this, "UShooterCheatManager.GiveItemSet(FName)", Tier); }
	void GMComp(int level) { NativeCall<void, int>(this, "UShooterCheatManager.GMComp(int)", level); }
	void GiveDinoSet(FName Tier, int NumDinos) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveDinoSet(FName,int)", Tier, NumDinos); }
	void AddEquipmentDurability(const float durability) { NativeCall<void, const float>(this, "UShooterCheatManager.AddEquipmentDurability(float)", durability); }
	void GFID(const FName* blueprintPath) { NativeCall<void, const FName*>(this, "UShooterCheatManager.GFID(FName&)", blueprintPath); }
	void GFI(const FName* blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, const FName*, int, float, bool>(this, "UShooterCheatManager.GFI(FName&,int,float,bool)", blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveItemToPlayer(int playerID, const FString* blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, const FString*, int, float, bool>(this, "UShooterCheatManager.GiveItemToPlayer(int,FString&,int,float,bool)", playerID, blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveItemNumToPlayer(int playerID, int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, int, int, float, bool>(this, "UShooterCheatManager.GiveItemNumToPlayer(int,int,int,float,bool)", playerID, masterIndexNum, quantityOverride, qualityOverride, bForceBlueprint); }
	void ClearPlayerInventory(int playerID, bool bClearInventory, bool bClearSlotItems, bool bClearEquippedItems) { NativeCall<void, int, bool, bool, bool>(this, "UShooterCheatManager.ClearPlayerInventory(int,bool,bool,bool)", playerID, bClearInventory, bClearSlotItems, bClearEquippedItems); }
	void DoTestingThing() { NativeCall<void>(this, "UShooterCheatManager.DoTestingThing()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void DoHang();
	void SetMessageOfTheDay(const FString* Message, const FString* SetterID) { NativeCall<void, const FString*, const FString*>(this, "UShooterCheatManager.SetMessageOfTheDay(FString&,FString&)", Message, SetterID); }
	void ClearMessageOfTheDay() { NativeCall<void>(this, "UShooterCheatManager.ClearMessageOfTheDay()"); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "UShooterCheatManager.ShowMessageOfTheDay()"); }
	void ReportSpawnManagers() { NativeCall<void>(this, "UShooterCheatManager.ReportSpawnManagers()"); }
	void HibernationReport(const FString* ClassName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.HibernationReport(FString&)", ClassName); }
	void HiWarp(const FString* ClassName, int Index) { NativeCall<void, const FString*, int>(this, "UShooterCheatManager.HiWarp(FString&,int)", ClassName, Index); }
	void ReportLeastSpawnManagers() { NativeCall<void>(this, "UShooterCheatManager.ReportLeastSpawnManagers()"); }
	void DestroyAllEnemies() { NativeCall<void>(this, "UShooterCheatManager.DestroyAllEnemies()"); }
	void DestroyWildDinos() { NativeCall<void>(this, "UShooterCheatManager.DestroyWildDinos()"); }
	void DestroyStructures() { NativeCall<void>(this, "UShooterCheatManager.DestroyStructures()"); }
	void SetPlayerPos(float X, float Y, float Z) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.SetPlayerPos(float,float,float)", X, Y, Z); }
	void PrintActorLocation(const FString* ActorName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.PrintActorLocation(FString&)", ActorName); }
	void TeleportToActorLocation(const FString* ActorName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TeleportToActorLocation(FString&)", ActorName); }
	void TTAL(const FString* ActorName, const int* Index) { NativeCall<void, const FString*, const int*>(this, "UShooterCheatManager.TTAL(FString&,int&)", ActorName, Index); }
	void SPIG(float X, float Y, float Z, float Yaw, float Pitch) { NativeCall<void, float, float, float, float, float>(this, "UShooterCheatManager.SPIG(float,float,float,float,float)", X, Y, Z, Yaw, Pitch); }
	void SPI(float X, float Y, float Z, float Yaw, float Pitch) { NativeCall<void, float, float, float, float, float>(this, "UShooterCheatManager.SPI(float,float,float,float,float)", X, Y, Z, Yaw, Pitch); }
	//     void NextPerfCheck() { NativeCall<void>(this, "UShooterCheatManager.NextPerfCheck()"); }
	// FUNCTION MISSING: UShooterCheatManager.NextPerfCheck()
	//     void SetPerfCheck(int PerfCheckLocation) { NativeCall<void, int>(this, "UShooterCheatManager.SetPerfCheck(int)", PerfCheckLocation); }
	// FUNCTION MISSING: UShooterCheatManager.SetPerfCheck(int)
	static void TP() { NativeCall<void>(nullptr, "UShooterCheatManager.TP(FString)"); }
	void TPCoords(float lat, float lon, float z, int index) { NativeCall<void, float, float, float, int>(this, "UShooterCheatManager.TPCoords(float,float,float,int)", lat, lon, z, index); }
	void ToggleLocation() { NativeCall<void>(this, "UShooterCheatManager.ToggleLocation()"); }
	void DumpConfig() { NativeCall<void>(this, "UShooterCheatManager.DumpConfig()"); }
	void SaveWorldDisableTransfer() { NativeCall<void>(this, "UShooterCheatManager.SaveWorldDisableTransfer()"); }
	void TOD(const FString* timeString) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TOD(FString&)", timeString); }
	void SetTimeOfDay(const FString* timeString) { NativeCall<void, const FString*>(this, "UShooterCheatManager.SetTimeOfDay(FString&)", timeString); }
	void SetDayCycleSpeed(const float speed) { NativeCall<void, const float>(this, "UShooterCheatManager.SetDayCycleSpeed(float)", speed); }
	void SetDay(const int day) { NativeCall<void, const int>(this, "UShooterCheatManager.SetDay(int)", day); }
	void WhatIsMyTarget() { NativeCall<void>(this, "UShooterCheatManager.WhatIsMyTarget()"); }
	void HurtMyTarget(int HowMuch) { NativeCall<void, int>(this, "UShooterCheatManager.HurtMyTarget(int)", HowMuch); }
	void HurtMyAOE(int HowMuch, float Radius) { NativeCall<void, int, float>(this, "UShooterCheatManager.HurtMyAOE(int,float)", HowMuch, Radius); }
	void IsUndermesh(const float debugDrawSeconds) { NativeCall<void, const float>(this, "UShooterCheatManager.IsUndermesh(float)", debugDrawSeconds); }
	void SetDebugMeleeAttacks(bool bDebugMelee, const float drawDuration) { NativeCall<void, bool, const float>(this, "UShooterCheatManager.SetDebugMeleeAttacks(bool,float)", bDebugMelee, drawDuration); }
	void MoveTargetTo(float x, float y, float z) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.MoveTargetTo(float,float,float)", x, y, z); }
	void ServerChatTo(const FString* SteamID, const FString* MessageText) { NativeCall<void, const FString*, const FString*>(this, "UShooterCheatManager.ServerChatTo(FString&,FString&)", SteamID, MessageText); }
	void ServerChatToPlayer(const FString* PlayerName, const FString* MessageText) { NativeCall<void, const FString*, const FString*>(this, "UShooterCheatManager.ServerChatToPlayer(FString&,FString&)", PlayerName, MessageText); }
	void ServerChat(const FString* MessageText) { NativeCall<void, const FString*>(this, "UShooterCheatManager.ServerChat(FString&)", MessageText); }
	void SetChatLogMaxAgeInDays(int NumDays) { NativeCall<void, int>(this, "UShooterCheatManager.SetChatLogMaxAgeInDays(int)", NumDays); }
	void ForceUpdateDynamicConfig() { NativeCall<void>(this, "UShooterCheatManager.ForceUpdateDynamicConfig()"); }
	void DumpAssetProperties(const FString* Asset) { NativeCall<void, const FString*>(this, "UShooterCheatManager.DumpAssetProperties(FString&)", Asset); }
	void ResetLiveTuningOverloads() { NativeCall<void>(this, "UShooterCheatManager.ResetLiveTuningOverloads()"); }
	AShooterPlayerController* FindPlayerControllerFromPlayerID(__int64 PlayerID) { return NativeCall<AShooterPlayerController*, __int64>(this, "UShooterCheatManager.FindPlayerControllerFromPlayerID(__int64)", PlayerID); }
	void GameCommand(const FString* TheCommand) { NativeCall<void, const FString*>(this, "UShooterCheatManager.GameCommand(FString&)", TheCommand); }
	void ScriptCommand(const FString* commandString) { NativeCall<void, const FString*>(this, "UShooterCheatManager.ScriptCommand(FString&)", commandString); }
	void PlayerCommand(const FString* TheCommand) { NativeCall<void, const FString*>(this, "UShooterCheatManager.PlayerCommand(FString&)", TheCommand); }
	void MakeTribeAdmin() { NativeCall<void>(this, "UShooterCheatManager.MakeTribeAdmin()"); }
	void RemoveTribeAdmin() { NativeCall<void>(this, "UShooterCheatManager.RemoveTribeAdmin()"); }
	void MakeTribeFounder() { NativeCall<void>(this, "UShooterCheatManager.MakeTribeFounder()"); }
	void GiveExplorerNote(int NoteIndex) { NativeCall<void, int>(this, "UShooterCheatManager.GiveExplorerNote(int)", NoteIndex); }
	void GiveAllExplorerNotes() { NativeCall<void>(this, "UShooterCheatManager.GiveAllExplorerNotes()"); }
	void VisualizeClass(const FString* ClassIn, int MaxTotal) { NativeCall<void, const FString*, int>(this, "UShooterCheatManager.VisualizeClass(FString&,int)", ClassIn, MaxTotal); }
	void ToggleTracker() { NativeCall<void>(this, "UShooterCheatManager.ToggleTracker()"); }
	void UnlockEngram(const FString* ItemClassName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.UnlockEngram(FString&)", ItemClassName); }
	void SetHeadHairPercent(float thePercent) { NativeCall<void, float>(this, "UShooterCheatManager.SetHeadHairPercent(float)", thePercent); }
	void SetFacialHairPercent(float thePercent) { NativeCall<void, float>(this, "UShooterCheatManager.SetFacialHairPercent(float)", thePercent); }
	void SetHeadHairstyle(int hairStyleIndex) { NativeCall<void, int>(this, "UShooterCheatManager.SetHeadHairstyle(int)", hairStyleIndex); }
	void SetFacialHairstyle(int hairStyleIndex) { NativeCall<void, int>(this, "UShooterCheatManager.SetFacialHairstyle(int)", hairStyleIndex); }
	void PrintMessageOut(const FString* Msg) { NativeCall<void, const FString*>(this, "UShooterCheatManager.PrintMessageOut(FString&)", Msg); }
	void GTIPL(int TribeID) { NativeCall<void, int>(this, "UShooterCheatManager.GTIPL(int)", TribeID); }
	void GetTribeIdPlayerList(int TribeID) { NativeCall<void, int>(this, "UShooterCheatManager.GetTribeIdPlayerList(int)", TribeID); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void GetSteamIDForPlayerID(int PlayerID);
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void GetPlayerIDForSteamID(int SteamID);
	void SetShowAllPlayers(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.SetShowAllPlayers(bool)", bEnable); }
	void SAP() { NativeCall<void>(this, "UShooterCheatManager.SAP()"); }
	void UnlockAllExplorerNotes() { NativeCall<void>(this, "UShooterCheatManager.UnlockAllExplorerNotes()"); }
	void TribeStructureAudit(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.TribeStructureAudit(int)", TribeTeamID); }
	void TribeDinoAudit(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.TribeDinoAudit(int)", TribeTeamID); }
	void psc(const FString* command) { NativeCall<void, const FString*>(this, "UShooterCheatManager.psc(FString&)", command); }
	void DetachChar() { NativeCall<void>(this, "UShooterCheatManager.DetachChar()"); }
	void VerifyTransferInventory() { NativeCall<void>(this, "UShooterCheatManager.VerifyTransferInventory()"); }
	void HatchEgg() { NativeCall<void>(this, "UShooterCheatManager.HatchEgg()"); }
	void DefeatBoss(int playerID, FName bossName, char difficulty) { NativeCall<void, int, FName, char>(this, "UShooterCheatManager.DefeatBoss(int,FName,signedchar)", playerID, bossName, difficulty); }
	void LvlUp(__int64 PlayerID, __int16 Level) { NativeCall<void, __int64, __int16>(this, "UShooterCheatManager.LvlUp(__int64,short)", PlayerID, Level); }
	void LessThan(int TribeTeamID, int Connections, bool includeContainers) { NativeCall<void, int, int, bool>(this, "UShooterCheatManager.LessThan(int,int,bool)", TribeTeamID, Connections, includeContainers); }
	void SetInstantHarvest(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.SetInstantHarvest(bool)", bEnable); }
	void DestroyFoliage(float Radius, const bool PutFoliageResourcesInInventory) { NativeCall<void, float, const bool>(this, "UShooterCheatManager.DestroyFoliage(float,bool)", Radius, PutFoliageResourcesInInventory); }
	void RegrowFoliage(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.RegrowFoliage(float)", Radius); }
	void ToggleLowGravSpin() { NativeCall<void>(this, "UShooterCheatManager.ToggleLowGravSpin()"); }
	void ToggleVolumetricDispatcher() { NativeCall<void>(this, "UShooterCheatManager.ToggleVolumetricDispatcher()"); }
	void InteractWithFluid(float radius, float speed, bool splash, bool ripple) { NativeCall<void, float, float, bool, bool>(this, "UShooterCheatManager.InteractWithFluid(float,float,bool,bool)", radius, speed, splash, ripple); }
	void ToggleVolumetricDispatcherDebug() { NativeCall<void>(this, "UShooterCheatManager.ToggleVolumetricDispatcherDebug()"); }
	void ToggleFoliageInteraction() { NativeCall<void>(this, "UShooterCheatManager.ToggleFoliageInteraction()"); }
	void ToggleFluidInteraction() { NativeCall<void>(this, "UShooterCheatManager.ToggleFluidInteraction()"); }
	void ForceCheckInMesh() { NativeCall<void>(this, "UShooterCheatManager.ForceCheckInMesh()"); }
	void ForceEnableMeshCheckingOnMe(bool bEnableKillChecking, bool bEnableTeleportingChecking) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.ForceEnableMeshCheckingOnMe(bool,bool)", bEnableKillChecking, bEnableTeleportingChecking); }
	void FEMCOM(bool bEnableKillChecking, bool bEnableTeleportingChecking) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.FEMCOM(bool,bool)", bEnableKillChecking, bEnableTeleportingChecking); }
	void SetPlayerLevel(__int64 PlayerID, __int16 Level) { NativeCall<void, __int64, __int16>(this, "UShooterCheatManager.SetPlayerLevel(__int64,short)", PlayerID, Level); }
	static void SendDataDogMetric() { NativeCall<void>(nullptr, "UShooterCheatManager.SendDataDogMetric(FString)"); }
	void MaxAscend(int playerID) { NativeCall<void, int>(this, "UShooterCheatManager.MaxAscend(int)", playerID); }
	void DefeatAllBosses(int playerID) { NativeCall<void, int>(this, "UShooterCheatManager.DefeatAllBosses(int)", playerID); }
	void ReassertColorization() { NativeCall<void>(this, "UShooterCheatManager.ReassertColorization()"); }
	void AddHexagons(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.AddHexagons(float)", HowMuch); }
	void DebugAllowVRMissionTeleport() { NativeCall<void>(this, "UShooterCheatManager.DebugAllowVRMissionTeleport()"); }
	void SetAllAvailableMissionsComplete() { NativeCall<void>(this, "UShooterCheatManager.SetAllAvailableMissionsComplete()"); }
	void DebugToggleHLNAMonologue() { NativeCall<void>(this, "UShooterCheatManager.DebugToggleHLNAMonologue()"); }
	void ToggleClawStepping() { NativeCall<void>(this, "UShooterCheatManager.ToggleClawStepping()"); }
	void God() { NativeCall<void>(this, "UShooterCheatManager.God()"); }
	void DupeLastItem() { NativeCall<void>(this, "UShooterCheatManager.DupeLastItem()"); }
	void ForceCompleteActiveMission(const FString* MissionStateSimValues) { NativeCall<void, const FString*>(this, "UShooterCheatManager.ForceCompleteActiveMission(FString&)", MissionStateSimValues); }
	void PrintDinoStats() { NativeCall<void>(this, "UShooterCheatManager.PrintDinoStats()"); }
	void AddMutations(int StatType, int HowMany) { NativeCall<void, int, int>(this, "UShooterCheatManager.AddMutations(int,int)", StatType, HowMany); }
	void GetEgg(int NumMutationsToAdd) { NativeCall<void, int>(this, "UShooterCheatManager.GetEgg(int)", NumMutationsToAdd); }
	void SpawnEgg() { NativeCall<void>(this, "UShooterCheatManager.SpawnEgg()"); }
	void AddWorldBuff(const FString* WorldBuffIdentifier) { NativeCall<void, const FString*>(this, "UShooterCheatManager.AddWorldBuff(FString&)", WorldBuffIdentifier); }
	void RemoveWorldBuff(const FString* WorldBuffIdentifier) { NativeCall<void, const FString*>(this, "UShooterCheatManager.RemoveWorldBuff(FString&)", WorldBuffIdentifier); }
	void RemoveAllWorldBuffs() { NativeCall<void>(this, "UShooterCheatManager.RemoveAllWorldBuffs()"); }
	void EnableAllMating() { NativeCall<void>(this, "UShooterCheatManager.EnableAllMating()"); }
	void DisableAllMating() { NativeCall<void>(this, "UShooterCheatManager.DisableAllMating()"); }
	void DrawDebugBoxForVolumes(float Duration, int VolumeClassIndex, bool bDebugAllVolumeClasses, bool bDrawSolidBox, float LineThickness) { NativeCall<void, float, int, bool, bool, float>(this, "UShooterCheatManager.DrawDebugBoxForVolumes(float,int,bool,bool,float)", Duration, VolumeClassIndex, bDebugAllVolumeClasses, bDrawSolidBox, LineThickness); }
	void FindMutagenDrops() { NativeCall<void>(this, "UShooterCheatManager.FindMutagenDrops()"); }
	void GoToFirstMutagenDrop() { NativeCall<void>(this, "UShooterCheatManager.GoToFirstMutagenDrop()"); }
	void ForceMutagenSpawn() { NativeCall<void>(this, "UShooterCheatManager.ForceMutagenSpawn()"); }
	void DCMSet(FName Cheat, float Val) { NativeCall<void, FName, float>(this, "UShooterCheatManager.DCMSet(FName,float)", Cheat, Val); }
	void GiveItemSkins(const FString* EquipmentType) { NativeCall<void, const FString*>(this, "UShooterCheatManager.GiveItemSkins(FString&)", EquipmentType); }
	void ForceReturnIsXboxOneBuildOnPC(bool ReturnValue) { NativeCall<void, bool>(this, "UShooterCheatManager.ForceReturnIsXboxOneBuildOnPC(bool)", ReturnValue); }
	void ForceReturnIsPS4BuildOnPC(bool ReturnValue) { NativeCall<void, bool>(this, "UShooterCheatManager.ForceReturnIsPS4BuildOnPC(bool)", ReturnValue); }
	void DumpFallbackSeeds() { NativeCall<void>(this, "UShooterCheatManager.DumpFallbackSeeds()"); }
	void SetMaterialParamaterCollectionByNameAndFloatValue(FName ParamaterName, float ParamaterValue) { NativeCall<void, FName, float>(this, "UShooterCheatManager.SetMaterialParamaterCollectionByNameAndFloatValue(FName,float)", ParamaterName, ParamaterValue); }
	void AddBuffPreventTagToSelf(FName TagName) { NativeCall<void, FName>(this, "UShooterCheatManager.AddBuffPreventTagToSelf(FName)", TagName); }
	void RepairArea(float radius) { NativeCall<void, float>(this, "UShooterCheatManager.RepairArea(float)", radius); }
	void AddChibiExpToPlayer(__int64 PlayerID, float HowMuch) { NativeCall<void, __int64, float>(this, "UShooterCheatManager.AddChibiExpToPlayer(__int64,float)", PlayerID, HowMuch); }
	void AddChibiExp(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.AddChibiExp(float)", HowMuch); }
	void DrainFood(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.DrainFood(float)", HowMuch); }
	void DrainWater(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.DrainWater(float)", HowMuch); }
	void TeleportCreatureToMe(const FString* DinoID) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TeleportCreatureToMe(FString&)", DinoID); }
	void TCTM(const FString* DinoID) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TCTM(FString&)", DinoID); }
	void TeleportToCreature(const FString* DinoID) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TeleportToCreature(FString&)", DinoID); }
	void TTC(const FString* DinoID) { NativeCall<void, const FString*>(this, "UShooterCheatManager.TTC(FString&)", DinoID); }
	void Cryo(const FString* DinoID) { NativeCall<void, const FString*>(this, "UShooterCheatManager.Cryo(FString&)", DinoID); }
	void CryoAOE(float radius) { NativeCall<void, float>(this, "UShooterCheatManager.CryoAOE(float)", radius); }
	void CryoMyTarget() { NativeCall<void>(this, "UShooterCheatManager.CryoMyTarget()"); }
	void ListAllItems() { NativeCall<void>(this, "UShooterCheatManager.ListAllItems()"); }
	void GiveBossItems() { NativeCall<void>(this, "UShooterCheatManager.GiveBossItems()"); }
	void GetAllStructuresNumber() { NativeCall<void>(this, "UShooterCheatManager.GetAllStructuresNumber()"); }
	void GetAllItemsNumber() { NativeCall<void>(this, "UShooterCheatManager.GetAllItemsNumber()"); }
	void GetAllTamesNumber() { NativeCall<void>(this, "UShooterCheatManager.GetAllTamesNumber()"); }
	void GetAllNumbers() { NativeCall<void>(this, "UShooterCheatManager.GetAllNumbers()"); }
	void GiveBossEngrams(int playerID, FName bossName, char difficulty) { NativeCall<void, int, FName, char>(this, "UShooterCheatManager.GiveBossEngrams(int,FName,signedchar)", playerID, bossName, difficulty); }
	void GiveMaxLevel(int playerID) { NativeCall<void, int>(this, "UShooterCheatManager.GiveMaxLevel(int)", playerID); }
	void DragMyTarget() { NativeCall<void>(this, "UShooterCheatManager.DragMyTarget()"); }
	void ShowHibernatingDino(const FString* DinoString) { NativeCall<void, const FString*>(this, "UShooterCheatManager.ShowHibernatingDino(FString&)", DinoString); }
	void GetSpoiledEgg(int NumMutationsToAdd) { NativeCall<void, int>(this, "UShooterCheatManager.GetSpoiledEgg(int)", NumMutationsToAdd); }
	//bool GetDinoAssetData(const FName* DinoBlueprintPath, //TSoftClassPtr<UObject>* OutClass, FTopLevelAssetPath* OutAssetPath) { return NativeCall<bool, const FName*, //TSoftClassPtr<UObject>*, FTopLevelAssetPath*>(this, "UShooterCheatManager.GetDinoAssetData(FName*,//TSoftClassPtr<UObject>*,FTopLevelAssetPath*)", DinoBlueprintPath, OutClass, OutAssetPath); }
	APrimalDinoCharacter* SDFSpawnDino(UClass* AssetClass, bool bIsTamed, int DinoLevel, bool bSkipAddingTamedLevels) { return NativeCall<APrimalDinoCharacter*, UClass*, bool, int, bool>(this, "UShooterCheatManager.SDFSpawnDino(UClass*,bool,int,bool)", AssetClass, bIsTamed, DinoLevel, bSkipAddingTamedLevels); }
	//bool GetItemAssetData(const FString* ItemBlueprintPath, //TSoftClassPtr<UObject>* OutClass, FTopLevelAssetPath* OutAssetPath) { return NativeCall<bool, const FString*, //TSoftClassPtr<UObject>*, FTopLevelAssetPath*>(this, "UShooterCheatManager.GetItemAssetData(FString&,//TSoftClassPtr<UObject>*,FTopLevelAssetPath*)", ItemBlueprintPath, OutClass, OutAssetPath); }
	void SetCameraProfile(FName CameraProfileName) { NativeCall<void, FName>(this, "UShooterCheatManager.SetCameraProfile(FName)", CameraProfileName); }
	void SetVideoReplayEnabled(bool ShouldEnabled) { NativeCall<void, bool>(this, "UShooterCheatManager.SetVideoReplayEnabled(bool)", ShouldEnabled); }
	void SetNumReplaySecondsToStore(int NumSecondsToStore) { NativeCall<void, int>(this, "UShooterCheatManager.SetNumReplaySecondsToStore(int)", NumSecondsToStore); }
	void DoDamagePct(float percentDamage, float speedOfImpact, float impulse) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.DoDamagePct(float,float,float)", percentDamage, speedOfImpact, impulse); }
	void OneHP() { NativeCall<void>(this, "UShooterCheatManager.OneHP()"); }
	void OneHPTarget() { NativeCall<void>(this, "UShooterCheatManager.OneHPTarget()"); }
	void OneHPAOE(FName Category, float Radius, int TribeID) { NativeCall<void, FName, float, int>(this, "UShooterCheatManager.OneHPAOE(FName,float,int)", Category, Radius, TribeID); }
	static void ArkChangeUIPlatform() { NativeCall<void>(nullptr, "UShooterCheatManager.ArkChangeUIPlatform(FString)"); }
	void RunDinoTest(const FName* DinoBlueprintPath, int DinoLevel, float AbilityDelay) { NativeCall<void, const FName*, int, float>(this, "UShooterCheatManager.RunDinoTest(FName&,int,float)", DinoBlueprintPath, DinoLevel, AbilityDelay); }
	void AddDinoTest(const FName* DinoBlueprintPath, int DinoLevel, float AbilityDelay) { NativeCall<void, const FName*, int, float>(this, "UShooterCheatManager.AddDinoTest(FName&,int,float)", DinoBlueprintPath, DinoLevel, AbilityDelay); }
	void RemoveDinoTest(const FName* DinoBlueprintPath) { NativeCall<void, const FName*>(this, "UShooterCheatManager.RemoveDinoTest(FName&)", DinoBlueprintPath); }
	void ClearDinoTest() { NativeCall<void>(this, "UShooterCheatManager.ClearDinoTest()"); }
	void ToggleNavSystem() { NativeCall<void>(this, "UShooterCheatManager.ToggleNavSystem()"); }
	void DebugPathsForTarget() { NativeCall<void>(this, "UShooterCheatManager.DebugPathsForTarget()"); }
	void ShowDebugPingLifetime(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.ShowDebugPingLifetime(bool)", bEnable); }
	void ShowCheatMenu() { NativeCall<void>(this, "UShooterCheatManager.ShowCheatMenu()"); }
	bool BPCheckDenySpawningInThisMap(const FString* PackageName) { return NativeCall<bool, const FString*>(this, "UShooterCheatManager.BPCheckDenySpawningInThisMap(FString&)", PackageName); }
	void AddDeniedSpawnFloatingText() { NativeCall<void>(this, "UShooterCheatManager.AddDeniedSpawnFloatingText()"); }
	void AreAllSublevelsForDataLayerLoaded(const FString* DataLayerName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.AreAllSublevelsForDataLayerLoaded(FString&)", DataLayerName); }
	void GetAllMyTarget(const FString* VariableName) { NativeCall<void, const FString*>(this, "UShooterCheatManager.GetAllMyTarget(FString&)", VariableName); }
	void KillSplitscreenPlayer() { NativeCall<void>(this, "UShooterCheatManager.KillSplitscreenPlayer()"); }
	void PerformGCAndCleanupActors() { NativeCall<void>(this, "UShooterCheatManager.PerformGCAndCleanupActors()"); }
	void ToggleGeneTraits() { NativeCall<void>(this, "UShooterCheatManager.ToggleGeneTraits()"); }

	char& attackIndexField() { return *GetNativePointerField<char*>(this, "UShooterCheatManager.attackIndex"); }
	float& delayField() { return *GetNativePointerField<float*>(this, "UShooterCheatManager.delay"); }
	bool& bIsRCONCheatManagerField() { return *GetNativePointerField<bool*>(this, "UShooterCheatManager.bIsRCONCheatManager"); }

	TWeakObjectPtr<AActor, FWeakObjectPtr>& SpectatorTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UShooterCheatManager.SpectatorTarget"); }
	FTimerHandle& PaintModeTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UShooterCheatManager.PaintModeTimerHandle"); }
	FString& LastPerformanceTracePathField() { return *GetNativePointerField<FString*>(this, "UShooterCheatManager.LastPerformanceTracePath"); }
	void CopyMyTargetToClipboard() { NativeCall<void>(this, "UShooterCheatManager.CopyMyTargetToClipboard()"); }
	void ListAllItemsOfTarget() { NativeCall<void>(this, "UShooterCheatManager.ListAllItemsOfTarget()"); }
	void GetCurrentInventoryCounts() { NativeCall<void>(this, "UShooterCheatManager.GetCurrentInventoryCounts()"); }
	void GetPlatformIDForPlayerID(int PlayerID) { NativeCall<void, int>(this, "UShooterCheatManager.GetPlatformIDForPlayerID(int)", PlayerID); }
	void ToggleSimulateUnderMemoryPressure() { NativeCall<void>(this, "UShooterCheatManager.ToggleSimulateUnderMemoryPressure()"); }
	void ForceUpdateGameplayVolumesDynamicConfig() { NativeCall<void>(this, "UShooterCheatManager.ForceUpdateGameplayVolumesDynamicConfig()"); }
	void GetPlayerIDForPlatformID(int PlatformID) { NativeCall<void, int>(this, "UShooterCheatManager.GetPlayerIDForPlatformID(int)", PlatformID); }
	void AddAOEToDebugHUD(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.AddAOEToDebugHUD(float)", Radius); }
	void NextTrackAllMusic() { NativeCall<void>(this, "UShooterCheatManager.NextTrackAllMusic()"); }
	void RunLevelCheck() { NativeCall<void>(this, "UShooterCheatManager.RunLevelCheck()"); }
	void FillTradeLog(int Count) { NativeCall<void, int>(this, "UShooterCheatManager.FillTradeLog(int)", Count); }
	void ShowDynamicNoBuildVolumes(float debugDrawSeconds) { NativeCall<void, float>(this, "UShooterCheatManager.ShowDynamicNoBuildVolumes(float)", debugDrawSeconds); }
	void ActivateSkill(FName SkillName, bool bPreventCooldown) { NativeCall<void, FName, bool>(this, "UShooterCheatManager.ActivateSkill(FName,bool)", SkillName, bPreventCooldown); }
	void ResetAttackCooldowns() { NativeCall<void>(this, "UShooterCheatManager.ResetAttackCooldowns()"); }
	void GiveAllTreeSkills(FName TreeTag) { NativeCall<void, FName>(this, "UShooterCheatManager.GiveAllTreeSkills(FName)", TreeTag); }
	void ForceDoAttack(int Index) { NativeCall<void, int>(this, "UShooterCheatManager.ForceDoAttack(int)", Index); }
	void StopLoggingSavedMoves() { NativeCall<void>(this, "UShooterCheatManager.StopLoggingSavedMoves()"); }
	void TestPlatformRefreshItems() { NativeCall<void>(this, "UShooterCheatManager.TestPlatformRefreshItems()"); }
	void ResetMilestones() { NativeCall<void>(this, "UShooterCheatManager.ResetMilestones()"); }
	void ListUploadedSurvivorsForTargetPlayer() { NativeCall<void>(this, "UShooterCheatManager.ListUploadedSurvivorsForTargetPlayer()"); }
	void StopBreaking(bool bMakeInvuln, bool bIsAOE) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.StopBreaking(bool,bool)", bMakeInvuln, bIsAOE); }
	void DisablePaintMode() { NativeCall<void>(this, "UShooterCheatManager.DisablePaintMode()"); }
	void AddThreat(int AddedThreat) { NativeCall<void, int>(this, "UShooterCheatManager.AddThreat(int)", AddedThreat); }
	void CloneDino() { NativeCall<void>(this, "UShooterCheatManager.CloneDino()"); }
	void AttackInfoTarget() { NativeCall<void>(this, "UShooterCheatManager.AttackInfoTarget()"); }
	void DownloadFromBackblaze(const FString& FileId) { NativeCall<void, const FString&>(this, "UShooterCheatManager.DownloadFromBackblaze(FString&)", FileId); }
	void DinoAttack(AActor* actor, int attackInfosIndex) { NativeCall<void, AActor*, int>(this, "UShooterCheatManager.DinoAttack(AActor*,int)", actor, attackInfosIndex); }
	void GiveTraitToTarget(FName TraitName, int TraitTier) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveTraitToTarget(FName,int)", TraitName, TraitTier); }
	void EnableTraceChannels(const FString& Channels) { NativeCall<void, const FString&>(this, "UShooterCheatManager.EnableTraceChannels(FString&)", Channels); }
	void GetTribe(int TribeID) { NativeCall<void, int>(this, "UShooterCheatManager.GetTribe(int)", TribeID); }
	void HidePlayer(bool bShouldHide) { NativeCall<void, bool>(this, "UShooterCheatManager.HidePlayer(bool)", bShouldHide); }
	void SpawnShipPerfGrid() { NativeCall<void>(this, "UShooterCheatManager.SpawnShipPerfGrid()"); }
	void SetWindDir(float InWindDir) { NativeCall<void, float>(this, "UShooterCheatManager.SetWindDir(float)", InWindDir); }
	void DrainTargetFood(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.DrainTargetFood(float)", HowMuch); }
	void SetTargetDinoImprintedPlayerToMe(float ImprintQuality) { NativeCall<void, float>(this, "UShooterCheatManager.SetTargetDinoImprintedPlayerToMe(float)", ImprintQuality); }
	void PrintCheatCommandQueue() { NativeCall<void>(this, "UShooterCheatManager.PrintCheatCommandQueue()"); }
	void ResetSparseDataModifications() { NativeCall<void>(this, "UShooterCheatManager.ResetSparseDataModifications()"); }
	void TailWind() { NativeCall<void>(this, "UShooterCheatManager.TailWind()"); }
	void SimulateMemoryPressureRestart() { NativeCall<void>(this, "UShooterCheatManager.SimulateMemoryPressureRestart()"); }
	void QueueAttackAOE(int attackInfosIndex, float Radius, float Delay) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.QueueAttackAOE(int,float,float)", attackInfosIndex, Radius, Delay); }
	void ClearDebugHUD() { NativeCall<void>(this, "UShooterCheatManager.ClearDebugHUD()"); }
	void pgosweep() { NativeCall<void>(this, "UShooterCheatManager.pgosweep()"); }
	void SetTargetRandomColors() { NativeCall<void>(this, "UShooterCheatManager.SetTargetRandomColors()"); }
	void DestroySelectStasisedStructureComponents() { NativeCall<void>(this, "UShooterCheatManager.DestroySelectStasisedStructureComponents()"); }
	void AttackAOE(int attackInfosIndex, float Radius) { NativeCall<void, int, float>(this, "UShooterCheatManager.AttackAOE(int,float)", attackInfosIndex, Radius); }
	void RequestAimedDinoTamedTime() { NativeCall<void>(this, "UShooterCheatManager.RequestAimedDinoTamedTime()"); }
	void SetThreat(int Threat) { NativeCall<void, int>(this, "UShooterCheatManager.SetThreat(int)", Threat); }
	void SpawnShipAtOffset(const FString& blueprintPathShip, float spawnDist, bool bAutoPilotShip, bool bTameShip, bool bForceAnchored, int AdditionalStructures, float spawnYOffset, float ZOffset) { NativeCall<void, const FString&, float, bool, bool, bool, int, float, float>(this, "UShooterCheatManager.SpawnShipAtOffset(FString&,float,bool,bool,bool,int,float,float)", blueprintPathShip, spawnDist, bAutoPilotShip, bTameShip, bForceAnchored, AdditionalStructures, spawnYOffset, ZOffset); }
	void AddThreatAOE(int AddedThreat, float radius) { NativeCall<void, int, float>(this, "UShooterCheatManager.AddThreatAOE(int,float)", AddedThreat, radius); }
	void DisableStructureCollision() { NativeCall<void>(this, "UShooterCheatManager.DisableStructureCollision()"); }
	void GiveShipSkills() { NativeCall<void>(this, "UShooterCheatManager.GiveShipSkills()"); }
	void Slack(const FString& MessageText) { NativeCall<void, const FString&>(this, "UShooterCheatManager.Slack(FString&)", MessageText); }
	void DisableAllTraceChannels() { NativeCall<void>(this, "UShooterCheatManager.DisableAllTraceChannels()"); }
	void VisualizeWorld() { NativeCall<void>(this, "UShooterCheatManager.VisualizeWorld()"); }
	void UnclaimDino() { NativeCall<void>(this, "UShooterCheatManager.UnclaimDino()"); }
	void CreateRequestOrder(const FString& SearchStr1, const FString& SearchStr2, int MinQuantity, int MaxQuantity, int MinPrice, int MaxPrice, int Count) { NativeCall<void, const FString&, const FString&, int, int, int, int, int>(this, "UShooterCheatManager.CreateRequestOrder(FString&,FString&,int,int,int,int,int)", SearchStr1, SearchStr2, MinQuantity, MaxQuantity, MinPrice, MaxPrice, Count); }
	void StopPerformanceRecording() { NativeCall<void>(this, "UShooterCheatManager.StopPerformanceRecording()"); }
	void OwnsDLC(const FString& DLCName) { NativeCall<void, const FString&>(this, "UShooterCheatManager.OwnsDLC(FString&)", DLCName); }
	void GiveShipSkillPoints(int PointsToAdd) { NativeCall<void, int>(this, "UShooterCheatManager.GiveShipSkillPoints(int)", PointsToAdd); }
	void SaveBackup() { NativeCall<void>(this, "UShooterCheatManager.SaveBackup()"); }
	void ProgressMilestone(FName MilestoneName, float MilestonePercent, FName TreeNameOverride) { NativeCall<void, FName, float, FName>(this, "UShooterCheatManager.ProgressMilestone(FName,float,FName)", MilestoneName, MilestonePercent, TreeNameOverride); }
	void ListUploadedSurvivorsForPlayer(const FString& PlayerID) { NativeCall<void, const FString&>(this, "UShooterCheatManager.ListUploadedSurvivorsForPlayer(FString&)", PlayerID); }
	void SpawnShip(const FString& blueprintPathShip, float spawnDist, bool bAutoPilotShip, bool bTameShip, bool bForceAnchored, int AdditionalStructures) { NativeCall<void, const FString&, float, bool, bool, bool, int>(this, "UShooterCheatManager.SpawnShip(FString&,float,bool,bool,bool,int)", blueprintPathShip, spawnDist, bAutoPilotShip, bTameShip, bForceAnchored, AdditionalStructures); }
	void TTATL(const FString& ActorName, const int& Index, int TribeID) { NativeCall<void, const FString&, const int&, int>(this, "UShooterCheatManager.TTATL(FString&,int&,int)", ActorName, Index, TribeID); }
	void GiveActiveShipSkill(FName SkillName, int Slot) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveActiveShipSkill(FName,int)", SkillName, Slot); }
	void ListMySkillCooldowns() { NativeCall<void>(this, "UShooterCheatManager.ListMySkillCooldowns()"); }
	void ShowDynamicAntiMeshExclusionVolumes(float debugDrawSeconds) { NativeCall<void, float>(this, "UShooterCheatManager.ShowDynamicAntiMeshExclusionVolumes(float)", debugDrawSeconds); }
	void UnlockAchievement(const FString& AchievementID) { NativeCall<void, const FString&>(this, "UShooterCheatManager.UnlockAchievement(FString&)", AchievementID); }
	void SpawnStructures(int NumStructures, int StructureIndex) { NativeCall<void, int, int>(this, "UShooterCheatManager.SpawnStructures(int,int)", NumStructures, StructureIndex); }
	void ShowInGameMenu() { NativeCall<void>(this, "UShooterCheatManager.ShowInGameMenu()"); }
	void Attack(int attackInfosIndex) { NativeCall<void, int>(this, "UShooterCheatManager.Attack(int)", attackInfosIndex); }
	void DoStall(float StallSeconds) { NativeCall<void, float>(this, "UShooterCheatManager.DoStall(float)", StallSeconds); }
	void TimeOfDay(const FString& timeString) { NativeCall<void, const FString&>(this, "UShooterCheatManager.TimeOfDay(FString&)", timeString); }
	void ReportTrackedChangelistMgrs() { NativeCall<void>(this, "UShooterCheatManager.ReportTrackedChangelistMgrs()"); }
	void GTIDPL(int TribeID) { NativeCall<void, int>(this, "UShooterCheatManager.GTIDPL(int)", TribeID); }
	void DumpAmbientAudio(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.DumpAmbientAudio(float)", Radius); }
	void RedownloadModsOnServerRestart() { NativeCall<void>(this, "UShooterCheatManager.RedownloadModsOnServerRestart()"); }
	void OwnsPremiumMod(const FString& ModID) { NativeCall<void, const FString&>(this, "UShooterCheatManager.OwnsPremiumMod(FString&)", ModID); }
	void SetStat(FName StatName, float value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.SetStat(FName,float)", StatName, value); }
	void ForceRespecOnAimedPlayer() { NativeCall<void>(this, "UShooterCheatManager.ForceRespecOnAimedPlayer()"); }
	void SetHexagons(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.SetHexagons(float)", HowMuch); }
	void SetWindSpeed(float Speed) { NativeCall<void, float>(this, "UShooterCheatManager.SetWindSpeed(float)", Speed); }
	void SetThreatAOE(int Threat, float radius) { NativeCall<void, int, float>(this, "UShooterCheatManager.SetThreatAOE(int,float)", Threat, radius); }
	void ProgressMilestoneTask(int BranchIndex, int TaskIndex, float Amount, FName TreeName) { NativeCall<void, int, int, float, FName>(this, "UShooterCheatManager.ProgressMilestoneTask(int,int,float,FName)", BranchIndex, TaskIndex, Amount, TreeName); }
	void AddHostileStacks(int StacksToAdd, bool bShareWithTribeMembers, bool bShareWithOfflineMembers) { NativeCall<void, int, bool, bool>(this, "UShooterCheatManager.AddHostileStacks(int,bool,bool)", StacksToAdd, bShareWithTribeMembers, bShareWithOfflineMembers); }
	void SetWindStr(float Strength) { NativeCall<void, float>(this, "UShooterCheatManager.SetWindStr(float)", Strength); }
	void GiveAllExplorerNotesLC() { NativeCall<void>(this, "UShooterCheatManager.GiveAllExplorerNotesLC()"); }
	void GiveSkillPoints(int PointsToAdd) { NativeCall<void, int>(this, "UShooterCheatManager.GiveSkillPoints(int)", PointsToAdd); }
	void TrimMemory() { NativeCall<void>(this, "UShooterCheatManager.TrimMemory()"); }
	void GiveMilestoneWithTask(FName TaskID) { NativeCall<void, FName>(this, "UShooterCheatManager.GiveMilestoneWithTask(FName)", TaskID); }
	void RequestAimedStructurePlaceTime() { NativeCall<void>(this, "UShooterCheatManager.RequestAimedStructurePlaceTime()"); }
	void EnableAllTraceChannels() { NativeCall<void>(this, "UShooterCheatManager.EnableAllTraceChannels()"); }
	void TogglePremiumModOwnershipChecks() { NativeCall<void>(this, "UShooterCheatManager.TogglePremiumModOwnershipChecks()"); }
	void ShowDynamicAntiMeshVolumes(float debugDrawSeconds) { NativeCall<void, float>(this, "UShooterCheatManager.ShowDynamicAntiMeshVolumes(float)", debugDrawSeconds); }
	void DisallowPlayerToJoinNoCheck(const FString& SteamId) { NativeCall<void, const FString&>(this, "UShooterCheatManager.DisallowPlayerToJoinNoCheck(FString&)", SteamId); }
	void ListAllItemsOfActors(TArray<AActor*, TSizedDefaultAllocator<32> >& foundActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "UShooterCheatManager.ListAllItemsOfActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", foundActors); }
	void AddThreatMyTarget(int AddedThreat) { NativeCall<void, int>(this, "UShooterCheatManager.AddThreatMyTarget(int)", AddedThreat); }
	void ListUploadedSurvivorsForPlayerWithClusterID(const FString& ClusterID, const FString& PlayerID) { NativeCall<void, const FString&, const FString&>(this, "UShooterCheatManager.ListUploadedSurvivorsForPlayerWithClusterID(FString&,FString&)", ClusterID, PlayerID); }
	void ListAttacks() { NativeCall<void>(this, "UShooterCheatManager.ListAttacks()"); }
	void SetShipNetworkAndStasisRnageMultiplier(float Multiplier) { NativeCall<void, float>(this, "UShooterCheatManager.SetShipNetworkAndStasisRnageMultiplier(float)", Multiplier); }
	void ListOwnedPremiumMods() { NativeCall<void>(this, "UShooterCheatManager.ListOwnedPremiumMods()"); }
	void ShowWindVelocity() { NativeCall<void>(this, "UShooterCheatManager.ShowWindVelocity()"); }
	void CreateRandomMarkets(int NumMarkets, float SpawnRange, int NumItemsPerMarket, int NumRequestOrdersPerMarket) { NativeCall<void, int, float, int, int>(this, "UShooterCheatManager.CreateRandomMarkets(int,float,int,int)", NumMarkets, SpawnRange, NumItemsPerMarket, NumRequestOrdersPerMarket); }
	void GiveTreeSkillPoints(FName TreeTag, int PointsToAdd) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveTreeSkillPoints(FName,int)", TreeTag, PointsToAdd); }
	void QueueAttack(int attackInfosIndex, float Delay) { NativeCall<void, int, float>(this, "UShooterCheatManager.QueueAttack(int,float)", attackInfosIndex, Delay); }
	void ReleaseTributeDownloadClaims(const FString& PlayerUniqueNetId) { NativeCall<void, const FString&>(this, "UShooterCheatManager.ReleaseTributeDownloadClaims(FString&)", PlayerUniqueNetId); }
	void GetItemIds() { NativeCall<void>(this, "UShooterCheatManager.GetItemIds()"); }
	void ToggleNetworkSmoothing(float SmoothLocationTime, float SmoothRotationTime) { NativeCall<void, float, float>(this, "UShooterCheatManager.ToggleNetworkSmoothing(float,float)", SmoothLocationTime, SmoothRotationTime); }
	void ResetSkillCooldowns() { NativeCall<void>(this, "UShooterCheatManager.ResetSkillCooldowns()"); }
	void GiveShipSkill(FName SkillName, int Rank) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveShipSkill(FName,int)", SkillName, Rank); }
	void ListCurrentMilestoneIDs() { NativeCall<void>(this, "UShooterCheatManager.ListCurrentMilestoneIDs()"); }
	void FoShoDestroyMyTarget() { NativeCall<void>(this, "UShooterCheatManager.FoShoDestroyMyTarget()"); }
	void StartPerformanceRecordingOfChannels(const FString& Channels) { NativeCall<void, const FString&>(this, "UShooterCheatManager.StartPerformanceRecordingOfChannels(FString&)", Channels); }
	void SlackWithURL(const FString& MessageText, const FString& URL) { NativeCall<void, const FString&, const FString&>(this, "UShooterCheatManager.SlackWithURL(FString&,FString&)", MessageText, URL); }
	void DrainStamina(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.DrainStamina(float)", HowMuch); }
	void ForceStuckMilestone(FName TreeName) { NativeCall<void, FName>(this, "UShooterCheatManager.ForceStuckMilestone(FName)", TreeName); }
	void AddTargetToDebugHUD() { NativeCall<void>(this, "UShooterCheatManager.AddTargetToDebugHUD()"); }
	void StartPerformanceRecording() { NativeCall<void>(this, "UShooterCheatManager.StartPerformanceRecording()"); }
	void PauseAllMusic() { NativeCall<void>(this, "UShooterCheatManager.PauseAllMusic()"); }
	void PrintTargetStructureMemoryUsage() { NativeCall<void>(this, "UShooterCheatManager.PrintTargetStructureMemoryUsage()"); }
	void GiveSkill(FName SkillName, int Rank) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveSkill(FName,int)", SkillName, Rank); }
	void ForceRefreshBanCheatList() { NativeCall<void>(this, "UShooterCheatManager.ForceRefreshBanCheatList()"); }
	void PlayAllMusic() { NativeCall<void>(this, "UShooterCheatManager.PlayAllMusic()"); }
	void ToggleFreeCraft() { NativeCall<void>(this, "UShooterCheatManager.ToggleFreeCraft()"); }
	void DebugActors(const FString& ClassName, bool bExactMatch) { NativeCall<void, const FString&, bool>(this, "UShooterCheatManager.DebugActors(FString&,bool)", ClassName, bExactMatch); }
	void TriggerCheatCommandQueue() { NativeCall<void>(this, "UShooterCheatManager.TriggerCheatCommandQueue()"); }
	void ListHordeDinos() { NativeCall<void>(this, "UShooterCheatManager.ListHordeDinos()"); }
	void EnablePaintMode(unsigned char ColorID) { NativeCall<void, unsigned char>(this, "UShooterCheatManager.EnablePaintMode(unsignedchar)", ColorID); }
	void ToggleGameplayDebuggerHUD() { NativeCall<void>(this, "UShooterCheatManager.ToggleGameplayDebuggerHUD()"); }
	void ResetShipSkillCooldowns() { NativeCall<void>(this, "UShooterCheatManager.ResetShipSkillCooldowns()"); }
	void GiveAllSkills() { NativeCall<void>(this, "UShooterCheatManager.GiveAllSkills()"); }
	void IsInUndermeshExclusionZone() { NativeCall<void>(this, "UShooterCheatManager.IsInUndermeshExclusionZone()"); }
	void ResetSkills() { NativeCall<void>(this, "UShooterCheatManager.ResetSkills()"); }
	void QueueDinoAttack(AActor* actor, int attackInfosIndex, float Delay) { NativeCall<void, AActor*, int, float>(this, "UShooterCheatManager.QueueDinoAttack(AActor*,int,float)", actor, attackInfosIndex, Delay); }
	void InfiniteGod(bool bSet) { NativeCall<void, bool>(this, "UShooterCheatManager.InfiniteGod(bool)", bSet); }
	void RemoveAccessories() { NativeCall<void>(this, "UShooterCheatManager.RemoveAccessories()"); }
	void SetThreatMyTarget(int Threat) { NativeCall<void, int>(this, "UShooterCheatManager.SetThreatMyTarget(int)", Threat); }
	void VisualizeWorldGeo() { NativeCall<void>(this, "UShooterCheatManager.VisualizeWorldGeo()"); }
	void SpawnFleetCaptain(int NumBrigs, int NumSloops, float ShipSpacing, float SpawnDistance, bool bMakeFriendly) { NativeCall<void, int, int, float, float, bool>(this, "UShooterCheatManager.SpawnFleetCaptain(int,int,float,float,bool)", NumBrigs, NumSloops, ShipSpacing, SpawnDistance, bMakeFriendly); }
	void SetUIQuickbarScale(float Scale) { NativeCall<void, float>(this, "UShooterCheatManager.SetUIQuickbarScale(float)", Scale); }
	void GFIS(const FName& blueprintPath, float qualityOverride) { NativeCall<void, const FName&, float>(this, "UShooterCheatManager.GFIS(FName&,float)", blueprintPath, qualityOverride); }
	void StartLoggingSavedMoves() { NativeCall<void>(this, "UShooterCheatManager.StartLoggingSavedMoves()"); }
	void SpawnShipPerfGridCustom(const FString& blueprintPathShip, int NumShips, int AdditionalStructures, int ShipsPerRow, float ShipSpacing, float SpawnDistance, bool bForceAnchored) { NativeCall<void, const FString&, int, int, int, float, float, bool>(this, "UShooterCheatManager.SpawnShipPerfGridCustom(FString&,int,int,int,float,float,bool)", blueprintPathShip, NumShips, AdditionalStructures, ShipsPerRow, ShipSpacing, SpawnDistance, bForceAnchored); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterCheatManager"); }
};