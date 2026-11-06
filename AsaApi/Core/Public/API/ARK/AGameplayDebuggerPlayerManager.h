#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayDebuggerPlayerManager : public AActor
{
public:
	AGameplayDebuggerPlayerManager() = delete;
	~AGameplayDebuggerPlayerManager() = delete;
	AGameplayDebuggerPlayerManager(const AGameplayDebuggerPlayerManager&) = delete;
	AGameplayDebuggerPlayerManager& operator=(const AGameplayDebuggerPlayerManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayDebuggerPlayerManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayDebuggerPlayerManager"); }

	BitFieldValue<bool, unsigned char> bEditorTimeTick() { return { this, "AGameplayDebuggerPlayerManager.bEditorTimeTick"}; }
	BitFieldValue<bool, unsigned __int32> bHasAuthority() { return { this, "AGameplayDebuggerPlayerManager.bHasAuthority"}; }
	BitFieldValue<bool, unsigned __int32> bIsLocal() { return { this, "AGameplayDebuggerPlayerManager.bIsLocal"}; }
	BitFieldValue<bool, unsigned __int32> bInitialized() { return { this, "AGameplayDebuggerPlayerManager.bInitialized"}; }
	UGameplayDebuggerLocalController* GetLocalController(const APlayerController& OwnerPC) { return NativeCall<UGameplayDebuggerLocalController*, const APlayerController&>(this, "AGameplayDebuggerPlayerManager.GetLocalController(APlayerController&)", OwnerPC); }
	ETickableTickType GetTickableTickType() { return NativeCall<ETickableTickType>(this, "AGameplayDebuggerPlayerManager.GetTickableTickType()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AGameplayDebuggerPlayerManager.Tick(float)", DeltaTime); }
	void PostInitProperties() { NativeCall<void>(this, "AGameplayDebuggerPlayerManager.PostInitProperties()"); }
	void BeginDestroy() { NativeCall<void>(this, "AGameplayDebuggerPlayerManager.BeginDestroy()"); }
	bool IsTickableInEditor() { return NativeCall<bool>(this, "AGameplayDebuggerPlayerManager.IsTickableInEditor()"); }
	void UpdateAuthReplicators() { NativeCall<void>(this, "AGameplayDebuggerPlayerManager.UpdateAuthReplicators()"); }
	void BeginPlay() { NativeCall<void>(this, "AGameplayDebuggerPlayerManager.BeginPlay()"); }
	void OnReplayScrubTeardown(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "AGameplayDebuggerPlayerManager.OnReplayScrubTeardown(UWorld*)", InWorld); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction&>(this, "AGameplayDebuggerPlayerManager.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	UWorld* GetTickableGameObjectWorld() { return NativeCall<UWorld*>(this, "AGameplayDebuggerPlayerManager.GetTickableGameObjectWorld()"); }
	void OnGameModeLogout(AGameModeBase* GameMode, AController* Exiting) { NativeCall<void, AGameModeBase*, AController*>(this, "AGameplayDebuggerPlayerManager.OnGameModeLogout(AGameModeBase*,AController*)", GameMode, Exiting); }
	void EndPlay(EEndPlayReason::Type Reason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayDebuggerPlayerManager.EndPlay(EEndPlayReason::Type)", Reason); }
	bool IsTickable() { return NativeCall<bool>(this, "AGameplayDebuggerPlayerManager.IsTickable()"); }
	static AGameplayDebuggerPlayerManager& GetCurrent(UWorld* World) { return NativeCall<AGameplayDebuggerPlayerManager&, UWorld*>(nullptr, "AGameplayDebuggerPlayerManager.GetCurrent(UWorld*)", World); }
};
