#pragma once
#include "BulkForward.h"


struct ACustomGameMode : AShooterGameMode
{
	// Fields

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FString& BadWordListURLField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FString& BadWordWhiteListURLField();
	//FAhoCorasickMatcher& BadWordMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "ACustomGameMode.BadWordMatcher"); }
	//FAhoCorasickMatcher& BadWordWhitelistMatcherField() { return *GetNativePointerField<FAhoCorasickMatcher*>(this, "ACustomGameMode.BadWordWhitelistMatcher"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TMap<wchar_t, wchar_t, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<wchar_t, wchar_t, 0> >& CharacterReplacementMapField();

	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACustomGameMode"); }
	bool OnInitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { return NativeCall<bool, const FString*, const FString*, FString*>(this, "ACustomGameMode.OnInitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesACustomGameMode();
	void AdjustDamage(AActor* Victim, float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, AActor*, float*, const FDamageEvent*, AController*, AActor*>(this, "ACustomGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	void HandleLeavingMap() { NativeCall<void>(this, "ACustomGameMode.HandleLeavingMap()"); }
	void KickPlayer(APlayerController* NewPlayer) { NativeCall<void, APlayerController*>(this, "ACustomGameMode.KickPlayer(APlayerController*)", NewPlayer); }
	void InitOptions(FString* Options) { NativeCall<void, FString*>(this, "ACustomGameMode.InitOptions(FString)", Options); }
	FString* DoGameCommand(FString* result, const FString* TheCommand) { return NativeCall<FString*, FString*, const FString*>(this, "ACustomGameMode.DoGameCommand(FString&)", result, TheCommand); }
	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "ACustomGameMode.AllowAddXP(UPrimalCharacterStatusComponent*)", forComp); }
	static void BreakTribeData(const FTribeData* Data, FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<FString, TSizedDefaultAllocator<32> >* MembersPlayerName, TArray<int, TSizedDefaultAllocator<32> >* MembersPlayerDataID, TArray<int, TSizedDefaultAllocator<32> >* TribeAdmins, bool* bSetGovernment, FTribeGovernment* TribeGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >* MembersConfigs) { NativeCall<void, const FTribeData*, FString*, int*, int*, TArray<FString, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, bool*, FTribeGovernment*, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >*>(nullptr, "ACustomGameMode.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,FTribeGovernment&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", Data, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, TribeGovernment, MembersConfigs); }
	static FTribeData* MakeTribeData(FTribeData* result, FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<FString, TSizedDefaultAllocator<32> >* MembersPlayerName, TArray<int, TSizedDefaultAllocator<32> >* MembersPlayerDataID, TArray<int, TSizedDefaultAllocator<32> >* TribeAdmins, bool* bSetGovernment, FTribeGovernment* TribeGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >* MembersConfigs) { return NativeCall<FTribeData*, FTribeData*, FString*, int*, int*, TArray<FString, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, bool*, FTribeGovernment*, TArray<FPrimalPlayerCharacterConfigStructReplicated, TSizedDefaultAllocator<32> >*>(nullptr, "ACustomGameMode.MakeTribeData(FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,FTribeGovernment&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", result, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, TribeGovernment, MembersConfigs); }
	bool AllowAddToTribe(AShooterPlayerState* ForPlayerState, const FTribeData* MyNewTribe) { return NativeCall<bool, AShooterPlayerState*, const FTribeData*>(this, "ACustomGameMode.AllowAddToTribe(AShooterPlayerState*,FTribeData&)", ForPlayerState, MyNewTribe); }
	bool AllowClearTribe(AShooterPlayerState* ForPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "ACustomGameMode.AllowClearTribe(AShooterPlayerState*)", ForPlayerState); }
	bool AllowRenameTribe(AShooterPlayerState* ForPlayerState, const FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString*>(this, "ACustomGameMode.AllowRenameTribe(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	bool AllowModifyStatusValue(UPrimalCharacterStatusComponent* forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent*, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.AllowModifyStatusValue(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float)", forComp, valueType, Amount); }
	void InitGame(const FString* MapName, const FString* Options, FString* ErrorMessage) { NativeCall<void, const FString*, const FString*, FString*>(this, "ACustomGameMode.InitGame(FString&,FString&,FString&)", MapName, Options, ErrorMessage); }
	bool AllowNotifyRemotePlayerDeath(AShooterCharacter* forChar) { return NativeCall<bool, AShooterCharacter*>(this, "ACustomGameMode.AllowNotifyRemotePlayerDeath(AShooterCharacter*)", forChar); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "ACustomGameMode.RemoveTribe(unsigned__int64)", TribeID); }
	void UpdateTribeData(FTribeData* NewTribeData) { NativeCall<void, FTribeData*>(this, "ACustomGameMode.UpdateTribeData(FTribeData)", NewTribeData); }
	bool IsSpawnpointAllowed(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.IsSpawnpointAllowed(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool IsUsedSpawnPointStillSupported(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.IsUsedSpawnPointStillSupported(APlayerStart*,AController*)", SpawnPoint, Player); }
	void InitGameState() { NativeCall<void>(this, "ACustomGameMode.InitGameState()"); }
	bool OnAllowRenameTribe_Implementation(AShooterPlayerState* ForPlayerState, const FString* TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString*>(this, "ACustomGameMode.OnAllowRenameTribe_Implementation(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	void KickPlayersWithoutCharacter(const FString* Reason) { NativeCall<void, const FString*>(this, "ACustomGameMode.KickPlayersWithoutCharacter(FString&)", Reason); }
	//unsigned __int64 AddNewTribe(AShooterPlayerState* PlayerOwner, const FString* TribeName, const FTribeGovernment* TribeGovernment, const FUserCosmeticInfo* UserCosmeticInfo) { return NativeCall<unsigned __int64, AShooterPlayerState*, const FString*, const FTribeGovernment*, const FUserCosmeticInfo*>(this, "ACustomGameMode.AddNewTribe(AShooterPlayerState*,FString&,FTribeGovernment&,FUserCosmeticInfo)", PlayerOwner, TribeName, TribeGovernment, UserCosmeticInfo); }
// 	void RequestBadWordList() { NativeCall<void>(this, "ACustomGameMode.RequestBadWordList()"); }
// FUNCTION MISSING: ACustomGameMode.RequestBadWordList()
	//void HttpGetBadWordListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "ACustomGameMode.HttpGetBadWordListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
	//void HttpGetBadWordWhiteListComplete(TSharedPtr<IHttpRequest, 1>* HttpRequest, TSharedPtr<IHttpResponse, 1>* HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest, 1>*, TSharedPtr<IHttpResponse, 1>*, bool>(this, "ACustomGameMode.HttpGetBadWordWhiteListComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", HttpRequest, HttpResponse, bSucceeded); }
// 	bool FilterBadWords(FString* String, bool bCheckWithoutSpecialChars) { return NativeCall<bool, FString*, bool>(this, "ACustomGameMode.FilterBadWords(FString&,bool)", String, bCheckWithoutSpecialChars); }
// FUNCTION MISSING: ACustomGameMode.FilterBadWords(FString&,bool)

	bool OnAllowClearTribe(AShooterPlayerState* ForPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "ACustomGameMode.OnAllowClearTribe(AShooterPlayerState*)", ForPlayerState); }
	bool OnUpdateTribeData(const FTribeData& NewTribeData) { return NativeCall<bool, const FTribeData&>(this, "ACustomGameMode.OnUpdateTribeData(FTribeData&)", NewTribeData); }
	float OnAdjustDamage(AActor* Victim, float DefaultDamage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, AActor*, float, const FDamageEvent&, AController*, AActor*>(this, "ACustomGameMode.OnAdjustDamage(AActor*,float,FDamageEvent&,AController*,AActor*)", Victim, DefaultDamage, DamageEvent, EventInstigator, DamageCauser); }
	bool OnHandleLeavingMap() { return NativeCall<bool>(this, "ACustomGameMode.OnHandleLeavingMap()"); }
	bool OnAllowAddXP(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "ACustomGameMode.OnAllowAddXP(UPrimalCharacterStatusComponent*)", forComp); }
	bool OnRemoveTribe(int TribeID) { return NativeCall<bool, int>(this, "ACustomGameMode.OnRemoveTribe(int)", TribeID); }
	bool OnAllowNotifyRemotePlayerDeath_Implementation(AShooterCharacter* forChar) { return NativeCall<bool, AShooterCharacter*>(this, "ACustomGameMode.OnAllowNotifyRemotePlayerDeath_Implementation(AShooterCharacter*)", forChar); }
	bool OnInitGameState() { return NativeCall<bool>(this, "ACustomGameMode.OnInitGameState()"); }
	bool OnAllowModifyStatusValue_Implementation(UPrimalCharacterStatusComponent* forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent*, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.OnAllowModifyStatusValue_Implementation(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float)", forComp, valueType, Amount); }
	void BlueprintRemoveTribe(int TribeID) { NativeCall<void, int>(this, "ACustomGameMode.BlueprintRemoveTribe(int)", TribeID); }
	bool OnAllowRenameTribe(AShooterPlayerState* ForPlayerState, const FString& TribeName) { return NativeCall<bool, AShooterPlayerState*, const FString&>(this, "ACustomGameMode.OnAllowRenameTribe(AShooterPlayerState*,FString&)", ForPlayerState, TribeName); }
	bool OnInitOptionEvent(const FString& Options) { return NativeCall<bool, const FString&>(this, "ACustomGameMode.OnInitOptionEvent(FString&)", Options); }
	bool OnIsUsedSpawnPointStillSupported(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.OnIsUsedSpawnPointStillSupported(APlayerStart*,AController*)", SpawnPoint, Player); }
	void CleanUpSotfNotificationManager() { NativeCall<void>(this, "ACustomGameMode.CleanUpSotfNotificationManager()"); }
	bool IsInAllowedToCheatList(APlayerController* NewPlayer) { return NativeCall<bool, APlayerController*>(this, "ACustomGameMode.IsInAllowedToCheatList(APlayerController*)", NewPlayer); }
	bool OnAllowClearTribe_Implementation(AShooterPlayerState* ForPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "ACustomGameMode.OnAllowClearTribe_Implementation(AShooterPlayerState*)", ForPlayerState); }
	bool OnIsSpawnpointAllowed(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.OnIsSpawnpointAllowed(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool OnIsUsedSpawnPointStillSupported_Implementation(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.OnIsUsedSpawnPointStillSupported_Implementation(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool OnAllowNotifyRemotePlayerDeath(AShooterCharacter* forChar) { return NativeCall<bool, AShooterCharacter*>(this, "ACustomGameMode.OnAllowNotifyRemotePlayerDeath(AShooterCharacter*)", forChar); }
	float OnAdjustDamage_Implementation(AActor* Victim, float DefaultDamage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, AActor*, float, const FDamageEvent&, AController*, AActor*>(this, "ACustomGameMode.OnAdjustDamage_Implementation(AActor*,float,FDamageEvent&,AController*,AActor*)", Victim, DefaultDamage, DamageEvent, EventInstigator, DamageCauser); }
	bool OnAllowAddXP_Implementation(UPrimalCharacterStatusComponent* forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent*>(this, "ACustomGameMode.OnAllowAddXP_Implementation(UPrimalCharacterStatusComponent*)", forComp); }
	bool OnIsSpawnpointAllowed_Implementation(APlayerStart* SpawnPoint, AController* Player) { return NativeCall<bool, APlayerStart*, AController*>(this, "ACustomGameMode.OnIsSpawnpointAllowed_Implementation(APlayerStart*,AController*)", SpawnPoint, Player); }
	bool OnAllowAddToTribe_Implementation(AShooterPlayerState* ForPlayerState, const FTribeData& MyNewTribe) { return NativeCall<bool, AShooterPlayerState*, const FTribeData&>(this, "ACustomGameMode.OnAllowAddToTribe_Implementation(AShooterPlayerState*,FTribeData&)", ForPlayerState, MyNewTribe); }
	FString* OnDoGameCommand(FString* result, const FString& TheCommand) { return NativeCall<FString*, FString*, const FString&>(this, "ACustomGameMode.OnDoGameCommand(FString&)", result, TheCommand); }
	bool OnPlayerCanRestart_Implementation(APlayerController* Player) { return NativeCall<bool, APlayerController*>(this, "ACustomGameMode.OnPlayerCanRestart_Implementation(APlayerController*)", Player); }
	bool OnAllowModifyStatusValue(UPrimalCharacterStatusComponent* forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent*, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.OnAllowModifyStatusValue(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float)", forComp, valueType, Amount); }
	bool OnAllowAddToTribe(AShooterPlayerState* ForPlayerState, const FTribeData& MyNewTribe) { return NativeCall<bool, AShooterPlayerState*, const FTribeData&>(this, "ACustomGameMode.OnAllowAddToTribe(AShooterPlayerState*,FTribeData&)", ForPlayerState, MyNewTribe); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACustomGameMode"); }
};