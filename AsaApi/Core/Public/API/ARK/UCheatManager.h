#pragma once


struct UCheatManager : AShooterPlayerController
{
	// Fields

	 //TObjectPtr<ADebugCameraController>&DebugCameraControllerRefField() { return *GetNativePointerField<TObjectPtr<ADebugCameraController>*>(this, "UCheatManager.DebugCameraControllerRef"); }
	 //TSubclassOf<ADebugCameraController>&DebugCameraControllerClassField() { return *GetNativePointerField<TSubclassOf<ADebugCameraController>*>(this, "UCheatManager.DebugCameraControllerClass"); }
	float& DebugTraceDistanceField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugTraceDistance"); }
	float& DebugCapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugCapsuleHalfHeight"); }
	float& DebugCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugCapsuleRadius"); }
	float& DebugTraceDrawNormalLengthField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugTraceDrawNormalLength"); }
	//TArray<FDebugTraceInfo,TSizedDefaultAllocator<32> >&DebugTraceInfoListField() { return *GetNativePointerField<TArray<FDebugTraceInfo,TSizedDefaultAllocator<32> >*>(this, "UCheatManager.DebugTraceInfoList"); }
	//TArray<FDebugTraceInfo,TSizedDefaultAllocator<32> >&DebugTracePawnInfoListField() { return *GetNativePointerField<TArray<FDebugTraceInfo,TSizedDefaultAllocator<32> >*>(this, "UCheatManager.DebugTracePawnInfoList"); }
	int& CurrentTraceIndexField() { return *GetNativePointerField<int*>(this, "UCheatManager.CurrentTraceIndex"); }
	int& CurrentTracePawnIndexField() { return *GetNativePointerField<int*>(this, "UCheatManager.CurrentTracePawnIndex"); }
	TArray<TObjectPtr<UCheatManagerExtension>, TSizedDefaultAllocator<32> >& CheatManagerExtensionsField() { return *GetNativePointerField<TArray<TObjectPtr<UCheatManagerExtension>, TSizedDefaultAllocator<32> >*>(this, "UCheatManager.CheatManagerExtensions"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDebugCapsuleSweep() { return { this, "UCheatManager.bDebugCapsuleSweep" }; }
	BitFieldValue<bool, unsigned __int32> bDebugCapsuleTraceComplex() { return { this, "UCheatManager.bDebugCapsuleTraceComplex" }; }
	BitFieldValue<bool, unsigned __int32> bToggleAILogging() { return { this, "UCheatManager.bToggleAILogging" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("UCheatManager"); }
	void ServerToggleAILogging() { NativeCall<void>(this, "UCheatManager.ServerToggleAILogging()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUCheatManager();
	//void UCheatManager(const FObjectInitializer * ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UCheatManager.UCheatManager(FObjectInitializer*)", ObjectInitializer); }
	//void OnPlayerEndPlayed(AActor * Player, EEndPlayReason::Type EndPlayReason) { NativeCall<void, AActor*, EEndPlayReason::Type>(this, "UCheatManager.OnPlayerEndPlayed(AActor*,EEndPlayReason::Type)", Player, EndPlayReason); }
	bool ProcessConsoleExec(const wchar_t* Cmd, FOutputDevice* Ar, UObject* Executor) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UObject*>(this, "UCheatManager.ProcessConsoleExec(wchar_t*,FOutputDevice&,UObject*)", Cmd, Ar, Executor); }
	void FreezeFrame(float delay) { NativeCall<void, float>(this, "UCheatManager.FreezeFrame(float)", delay); }
	void Teleport() { NativeCall<void>(this, "UCheatManager.Teleport()"); }
	void ChangeSize(float F) { NativeCall<void, float>(this, "UCheatManager.ChangeSize(float)", F); }
	void Fly() { NativeCall<void>(this, "UCheatManager.Fly()"); }
	void Walk() { NativeCall<void>(this, "UCheatManager.Walk()"); }
	void Ghost() { NativeCall<void>(this, "UCheatManager.Ghost()"); }
	void God() { NativeCall<void>(this, "UCheatManager.God()"); }
	void Slomo(float NewTimeDilation) { NativeCall<void, float>(this, "UCheatManager.Slomo(float)", NewTimeDilation); }
	void DamageTarget(float DamageAmount) { NativeCall<void, float>(this, "UCheatManager.DamageTarget(float)", DamageAmount); }
	//void DestroyAll(TSubclassOf<AActor> aClass, bool bExactMatch) { NativeCall<void, TSubclassOf<AActor>, bool>(this, "UCheatManager.DestroyAll(TSubclassOf<AActor>,bool)", aClass, bExactMatch); }
	void Summon(const FString* ClassName) { NativeCall<void, const FString*>(this, "UCheatManager.Summon(FString&)", ClassName); }
	void PlayersOnly() { NativeCall<void>(this, "UCheatManager.PlayersOnly()"); }
	void ViewSelf() { NativeCall<void>(this, "UCheatManager.ViewSelf()"); }
	void ViewPlayer(const FString* S) { NativeCall<void, const FString*>(this, "UCheatManager.ViewPlayer(FString&)", S); }
	void ViewActor(FName ActorName) { NativeCall<void, FName>(this, "UCheatManager.ViewActor(FName)", ActorName); }
	//void ViewClass(TSubclassOf<AActor> DesiredClass) { NativeCall<void, TSubclassOf<AActor>>(this, "UCheatManager.ViewClass(TSubclassOf<AActor>)", DesiredClass); }
	void SetLevelStreamingStatus(FName PackageName, bool bShouldBeLoaded, bool bShouldBeVisible) { NativeCall<void, FName, bool, bool>(this, "UCheatManager.SetLevelStreamingStatus(FName,bool,bool)", PackageName, bShouldBeLoaded, bShouldBeVisible); }
	void StreamLevelIn(FName PackageName) { NativeCall<void, FName>(this, "UCheatManager.StreamLevelIn(FName)", PackageName); }
	void OnlyLoadLevel(FName PackageName) { NativeCall<void, FName>(this, "UCheatManager.OnlyLoadLevel(FName)", PackageName); }
	void StreamLevelOut(FName PackageName) { NativeCall<void, FName>(this, "UCheatManager.StreamLevelOut(FName)", PackageName); }
	void ToggleDebugCamera() { NativeCall<void>(this, "UCheatManager.ToggleDebugCamera()"); }
	void EnableDebugCamera() { NativeCall<void>(this, "UCheatManager.EnableDebugCamera()"); }
	void DisableDebugCamera() { NativeCall<void>(this, "UCheatManager.DisableDebugCamera()"); }
	void InitCheatManager() { NativeCall<void>(this, "UCheatManager.InitCheatManager()"); }
	void DebugCapsuleSweep() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweep()"); }
	void DebugCapsuleSweepSize(float HalfHeight, float Radius) { NativeCall<void, float, float>(this, "UCheatManager.DebugCapsuleSweepSize(float,float)", HalfHeight, Radius); }
	//void DebugCapsuleSweepChannel(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "UCheatManager.DebugCapsuleSweepChannel(ECollisionChannel)", Channel); }
	void DebugCapsuleSweepComplex(bool bTraceComplex) { NativeCall<void, bool>(this, "UCheatManager.DebugCapsuleSweepComplex(bool)", bTraceComplex); }
	void DebugCapsuleSweepCapture() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepCapture()"); }
	void DebugCapsuleSweepPawn() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepPawn()"); }
	void DebugCapsuleSweepClear() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepClear()"); }
	void DumpOnlineSessionState() { NativeCall<void>(this, "UCheatManager.DumpOnlineSessionState()"); }
	void DumpPartyState() { NativeCall<void>(this, "UCheatManager.DumpPartyState()"); }
	void DumpChatState() { NativeCall<void>(this, "UCheatManager.DumpChatState()"); }
	void DumpVoiceMutingState() { NativeCall<void>(this, "UCheatManager.DumpVoiceMutingState()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UCheatManager.GetWorld()"); }
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) { NativeCall<void, float, float, float, float, float, float>(this, "UCheatManager.BugItGo(float,float,float,float,float,float)", X, Y, Z, Pitch, Yaw, Roll); }
	void BugItGoString(const FString* TheLocation, const FString* TheRotation) { NativeCall<void, const FString*, const FString*>(this, "UCheatManager.BugItGoString(FString&,FString&)", TheLocation, TheRotation); }
	static void BugItWorker() { NativeCall<void>(nullptr, "UCheatManager.BugItWorker(UE::Math::TVector<double>,UE::Math::TRotator<double>)"); }
	void BugIt(const FString* ScreenShotDescription) { NativeCall<void, const FString*>(this, "UCheatManager.BugIt(FString&)", ScreenShotDescription); }
	static void BugItStringCreator() { NativeCall<void>(nullptr, "UCheatManager.BugItStringCreator(UE::Math::TVector<double>,UE::Math::TRotator<double>,FString&,FString&)"); }
	void FlushLog() { NativeCall<void>(this, "UCheatManager.FlushLog()"); }
	void LogLoc() { NativeCall<void>(this, "UCheatManager.LogLoc()"); }
	void SetMouseSensitivityToDefault() { NativeCall<void>(this, "UCheatManager.SetMouseSensitivityToDefault()"); }
	void InvertMouse() { NativeCall<void>(this, "UCheatManager.InvertMouse()"); }
	static void CheatScript() { NativeCall<void>(nullptr, "UCheatManager.CheatScript(FString)"); }
	AActor* GetTarget(APlayerController* PlayerController, FHitResult* OutHit) { return NativeCall<AActor*, APlayerController*, FHitResult*>(this, "UCheatManager.GetTarget(APlayerController*,FHitResult&)", PlayerController, OutHit); }
	//     void SpawnServerStatReplicator() { NativeCall<void>(this, "UCheatManager.SpawnServerStatReplicator()"); }
	// FUNCTION MISSING: UCheatManager.SpawnServerStatReplicator()
	void DestroyServerStatReplicator() { NativeCall<void>(this, "UCheatManager.DestroyServerStatReplicator()"); }
	void AddCheatManagerExtension(UCheatManagerExtension* CheatObject) { NativeCall<void, UCheatManagerExtension*>(this, "UCheatManager.AddCheatManagerExtension(UCheatManagerExtension*)", CheatObject); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCheatManager"); }
};