#pragma once
#include "BulkForward.h"
#include "UGameEngine.h"

struct UShooterEngine : public UGameEngine
{
public:
	UShooterEngine() = delete;
	~UShooterEngine() = delete;
	UShooterEngine(const UShooterEngine&) = delete;
	UShooterEngine& operator=(const UShooterEngine&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterEngine"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterEngine"); }

	FString& LastConnectionErrorStringField() { return *GetNativePointerField<FString*>(this, "UShooterEngine.LastConnectionErrorString"); }
	FString& LastNotInstalledDLCMapNameField() { return *GetNativePointerField<FString*>(this, "UShooterEngine.LastNotInstalledDLCMapName"); }
	UPrimalRichTextBlock*& StartupScreenTextBlockField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UShooterEngine.StartupScreenTextBlock"); }
	EHandshakeInstallState& HandshakeInstallStateField() { return *GetNativePointerField<EHandshakeInstallState*>(this, "UShooterEngine.HandshakeInstallState"); }
	UModBackgroundDownloader*& ModBackgroundDownloaderField() { return *GetNativePointerField<UModBackgroundDownloader**>(this, "UShooterEngine.ModBackgroundDownloader"); }
	bool& bIsCFTryingToConnectField() { return *GetNativePointerField<bool*>(this, "UShooterEngine.bIsCFTryingToConnect"); }
	int& CFRetryCounterField() { return *GetNativePointerField<int*>(this, "UShooterEngine.CFRetryCounter"); }
	bool& bHasInitCFCoreField() { return *GetNativePointerField<bool*>(this, "UShooterEngine.bHasInitCFCore"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& BlockedModsField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterEngine.BlockedMods"); }
	unsigned __int64& MemoryUsageToForceRestartField() { return *GetNativePointerField<unsigned __int64*>(this, "UShooterEngine.MemoryUsageToForceRestart"); }
	unsigned __int64& UnderMemoryPressureOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "UShooterEngine.UnderMemoryPressureOffset"); }
	float& TimeSinceLastCheckForMemoryUsageRestartField() { return *GetNativePointerField<float*>(this, "UShooterEngine.TimeSinceLastCheckForMemoryUsageRestart"); }
	bool& bInitializedMemoryUsageRestartsField() { return *GetNativePointerField<bool*>(this, "UShooterEngine.bInitializedMemoryUsageRestarts"); }
	bool& bServerIsUnderMemoryPressureField() { return *GetNativePointerField<bool*>(this, "UShooterEngine.bServerIsUnderMemoryPressure"); }
	__int64& LastLoadedUserCosmeticIDField() { return *GetNativePointerField<__int64*>(this, "UShooterEngine.LastLoadedUserCosmeticID"); }
	__int64& LastLoadedDynamicCosmeticIDField() { return *GetNativePointerField<__int64*>(this, "UShooterEngine.LastLoadedDynamicCosmeticID"); }
	bool& bLastLoadedCosmeticWasDynamicField() { return *GetNativePointerField<bool*>(this, "UShooterEngine.bLastLoadedCosmeticWasDynamic"); }
	FGuid& GameRunIDField() { return *GetNativePointerField<FGuid*>(this, "UShooterEngine.GameRunID"); }
	FTimerHandle& DLCModInstallTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UShooterEngine.DLCModInstallTimerHandle"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& WaitingToInstallModsField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterEngine.WaitingToInstallMods"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& WaitingToUninstallModsField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterEngine.WaitingToUninstallMods"); }
	int& InstalledModCounterField() { return *GetNativePointerField<int*>(this, "UShooterEngine.InstalledModCounter"); }
	float& TimeSinceLastUpdatingJustInTimeTexturesField() { return *GetNativePointerField<float*>(this, "UShooterEngine.TimeSinceLastUpdatingJustInTimeTextures"); }
	void CheckForCFNetworkFast(bool bRetry) { NativeCall<void, bool>(this, "UShooterEngine.CheckForCFNetworkFast(bool)", bRetry); }
	void RedrawViewports(bool bShouldPresent) { NativeCall<void, bool>(this, "UShooterEngine.RedrawViewports(bool)", bShouldPresent); }
	__int64 GuardedHTTPRequest(const FBlueprintHTTPRequestData& RequestData, UObject* Caller) { return NativeCall<__int64, const FBlueprintHTTPRequestData&, UObject*>(this, "UShooterEngine.GuardedHTTPRequest(FBlueprintHTTPRequestData&,UObject*)", RequestData, Caller); }
	void HandlePurchaseError(const FCFCoreError& Error) { NativeCall<void, const FCFCoreError&>(this, "UShooterEngine.HandlePurchaseError(FCFCoreError&)", Error); }
	void OnGuardedWebSocketMessageSent(const FString& MessageString, __int64 SocketID) { NativeCall<void, const FString&, __int64>(this, "UShooterEngine.OnGuardedWebSocketMessageSent(FString&,__int64)", MessageString, SocketID); }
	static void RunCheatDeleteServerMods() { NativeCall<void>(nullptr, "UShooterEngine.RunCheatDeleteServerMods()"); }
	bool WaitForModsToInstallAndTickEngine() { return NativeCall<bool>(this, "UShooterEngine.WaitForModsToInstallAndTickEngine()"); }
	void OnGuardedWebSocketConnected(__int64 SocketID) { NativeCall<void, __int64>(this, "UShooterEngine.OnGuardedWebSocketConnected(__int64)", SocketID); }
	bool Primal_IsServerUnderMemoryPressure() { return NativeCall<bool>(this, "UShooterEngine.Primal_IsServerUnderMemoryPressure()"); }
	void RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame* PendingNetGameToNotify) { NativeCall<void, UPendingNetGame*>(this, "UShooterEngine.RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame*)", PendingNetGameToNotify); }
	void GuardedWebSocketConnect(const __int64& SocketID, UObject* Caller) { NativeCall<void, const __int64&, UObject*>(this, "UShooterEngine.GuardedWebSocketConnect(__int64&,UObject*)", SocketID, Caller); }
	void HandleOnModUninstalledEvent(const FInstalledMod& InstalledMod) { NativeCall<void, const FInstalledMod&>(this, "UShooterEngine.HandleOnModUninstalledEvent(FInstalledMod&)", InstalledMod); }
	FString* GetSeamlessTransitionMapPath(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterEngine.GetSeamlessTransitionMapPath()", result); }
	static void ProcessAutoConsoleCommands() { NativeCall<void>(nullptr, "UShooterEngine.ProcessAutoConsoleCommands()"); }
	void HandleFinalizePurchaseSuccess() { NativeCall<void>(this, "UShooterEngine.HandleFinalizePurchaseSuccess()"); }
	FString* GetCurrentModPath(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterEngine.GetCurrentModPath()", result); }
	bool CheckDLCModOwnerships(TArray<FString, TSizedDefaultAllocator<32> >& OwnedProductIDs) { return NativeCall<bool, TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UShooterEngine.CheckDLCModOwnerships(TArray<FString,TSizedDefaultAllocator<32>>&)", OwnedProductIDs); }
	static unsigned __int64 DLCToAppID(unsigned __int64 DLC) { return NativeCall<unsigned __int64, unsigned __int64>(nullptr, "UShooterEngine.DLCToAppID(unsigned__int64)", DLC); }
	void ResolveDLCModInstall() { NativeCall<void>(this, "UShooterEngine.ResolveDLCModInstall()"); }
	void LoadCachedPremiumModList() { NativeCall<void>(this, "UShooterEngine.LoadCachedPremiumModList()"); }
	bool UseHighQualityVFX() { return NativeCall<bool>(this, "UShooterEngine.UseHighQualityVFX()"); }
	void ConditionallyRestartServerDueToMemoryUsage(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterEngine.ConditionallyRestartServerDueToMemoryUsage(float)", DeltaSeconds); }
	void UpdateJustInTimeTextures(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterEngine.UpdateJustInTimeTextures(float)", DeltaSeconds); }
	void TickWorldTravel(FWorldContext& WorldContext, float DeltaSeconds) { NativeCall<void, FWorldContext&, float>(this, "UShooterEngine.TickWorldTravel(FWorldContext&,float)", WorldContext, DeltaSeconds); }
	void OnGuardedWebSocketMessageReceived(const FString& Message, __int64 SocketID) { NativeCall<void, const FString&, __int64>(this, "UShooterEngine.OnGuardedWebSocketMessageReceived(FString&,__int64)", Message, SocketID); }
	void PostLoadedMods() { NativeCall<void>(this, "UShooterEngine.PostLoadedMods()"); }
	bool IsNetBlockedMod(const FString& FileName, FString& BlockReason) { return NativeCall<bool, const FString&, FString&>(this, "UShooterEngine.IsNetBlockedMod(FString&,FString&)", FileName, BlockReason); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UShooterEngine.OnConfirmationDialogClosed(bool)", bAccept); }
	static unsigned __int64 GetTotalConversionId() { return NativeCall<unsigned __int64>(nullptr, "UShooterEngine.GetTotalConversionId()"); }
	static bool GetPlatformUserAuthToken(FString& AuthToken, ECFCoreExternalAuthProvider& AuthProvider) { return NativeCall<bool, FString&, ECFCoreExternalAuthProvider&>(nullptr, "UShooterEngine.GetPlatformUserAuthToken(FString&,ECFCoreExternalAuthProvider&)", AuthToken, AuthProvider); }
	void PreExit() { NativeCall<void>(this, "UShooterEngine.PreExit()"); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UShooterEngine.Tick(float,bool)", DeltaSeconds, bIdleMode); }
	void OnGuardedWebSocketConnectionClosed(int StatusCode, const FString& Reason, bool bWasClean, __int64 SocketID) { NativeCall<void, int, const FString&, bool, __int64>(this, "UShooterEngine.OnGuardedWebSocketConnectionClosed(int,FString&,bool,__int64)", StatusCode, Reason, bWasClean, SocketID); }
	void ShowLoadingScreenUI() { NativeCall<void>(this, "UShooterEngine.ShowLoadingScreenUI()"); }
	void SetSparseDataOverrideClass(UClass* OverrideClass) { NativeCall<void, UClass*>(this, "UShooterEngine.SetSparseDataOverrideClass(UClass*)", OverrideClass); }
	static void UpdateCrashReporterDataForSentryService(UWorld* world, APlayerController* playerController, FGuid* gamerunid) { if (!gamerunid) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UWorld *, APlayerController *, FGuid>(nullptr, "UShooterEngine.UpdateCrashReporterDataForSentryService(UWorld*,APlayerController*,FGuid)", world, playerController, *gamerunid); }
	static int DumpVisibleMeshes(UWorld* World, FName Platform, bool bShowInMessageLog, bool logSpam) { return NativeCall<int, UWorld*, FName, bool, bool>(nullptr, "UShooterEngine.DumpVisibleMeshes(UWorld*,FName,bool,bool)", World, Platform, bShowInMessageLog, logSpam); }
	void HandleNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString&>(this, "UShooterEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, NetDriver, FailureType, ErrorString); }
	void RestartServerDueToMemoryUsage(const FString& ErrorMsg) { NativeCall<void, const FString&>(this, "UShooterEngine.RestartServerDueToMemoryUsage(FString&)", ErrorMsg); }
	void GuardedWebSocketSendMessage(const __int64& SocketID, const FString& Message, UObject* Caller) { NativeCall<void, const __int64&, const FString&, UObject*>(this, "UShooterEngine.GuardedWebSocketSendMessage(__int64&,FString&,UObject*)", SocketID, Message, Caller); }
	void CloseAllGuardedWebSockets() { NativeCall<void>(this, "UShooterEngine.CloseAllGuardedWebSockets()"); }
	void LoadMapRedrawViewports() { NativeCall<void>(this, "UShooterEngine.LoadMapRedrawViewports()"); }
	void InitCFCore() { NativeCall<void>(this, "UShooterEngine.InitCFCore()"); }
	bool HasModInstalled(unsigned __int64 ModId) { return NativeCall<bool, unsigned __int64>(this, "UShooterEngine.HasModInstalled(unsigned__int64)", ModId); }
	static bool HasTotalConversion() { return NativeCall<bool>(nullptr, "UShooterEngine.HasTotalConversion()"); }
	__int64 GetLastLoadedCosmeticModID(bool bIncludeDynamic) { return NativeCall<__int64, bool>(this, "UShooterEngine.GetLastLoadedCosmeticModID(bool)", bIncludeDynamic); }
	void CleanDerelictModDirectories() { NativeCall<void>(this, "UShooterEngine.CleanDerelictModDirectories()"); }
	void PreLoadNetGameMap() { NativeCall<void>(this, "UShooterEngine.PreLoadNetGameMap()"); }
	UClass* GetPendingNetGameClass() { return NativeCall<UClass*>(this, "UShooterEngine.GetPendingNetGameClass()"); }
	void HandleOnGeneratePremiumCheckoutUrl(bool& bHandled, FGenPremiumCheckoutUrlRequest& Request) { NativeCall<void, bool&, FGenPremiumCheckoutUrlRequest&>(this, "UShooterEngine.HandleOnGeneratePremiumCheckoutUrl(bool&,FGenPremiumCheckoutUrlRequest&)", bHandled, Request); }
	bool GuardedWebSocketIsConnected(const __int64& SocketID, UObject* Caller) { return NativeCall<bool, const __int64&, UObject*>(this, "UShooterEngine.GuardedWebSocketIsConnected(__int64&,UObject*)", SocketID, Caller); }
	bool CheckModInstallationStatus(FWorldContext& WorldContext) { return NativeCall<bool, FWorldContext&>(this, "UShooterEngine.CheckModInstallationStatus(FWorldContext&)", WorldContext); }
	void OnGuardedWebSocketConnectionError(const FString& ErrorMessage, __int64 SocketID) { NativeCall<void, const FString&, __int64>(this, "UShooterEngine.OnGuardedWebSocketConnectionError(FString&,__int64)", ErrorMessage, SocketID); }
	void Init(IEngineLoop* InEngineLoop) { NativeCall<void, IEngineLoop*>(this, "UShooterEngine.Init(IEngineLoop*)", InEngineLoop); }
	void GuardedWebSocketClose(const __int64& SocketID, UObject* Caller) { NativeCall<void, const __int64&, UObject*>(this, "UShooterEngine.GuardedWebSocketClose(__int64&,UObject*)", SocketID, Caller); }
	static void UploadLastCrashCallstackToSlack(UWorld* World) { NativeCall<void, UWorld*>(nullptr, "UShooterEngine.UploadLastCrashCallstackToSlack(UWorld*)", World); }
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice& Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice&>(this, "UShooterEngine.Exec(UWorld*,wchar_t*,FOutputDevice&)", InWorld, Cmd, Ar); }
};
