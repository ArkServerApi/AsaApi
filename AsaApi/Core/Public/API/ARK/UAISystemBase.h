#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAISystemBase : public UObject
{
public:
	UAISystemBase() = delete;
	~UAISystemBase() = delete;
	UAISystemBase(const UAISystemBase&) = delete;
	UAISystemBase& operator=(const UAISystemBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAISystemBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAISystemBase"); }
	FSoftClassPath& AISystemClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UAISystemBase.AISystemClassName"); }
	FName& AISystemModuleNameField() { return *GetNativePointerField<FName*>(this, "UAISystemBase.AISystemModuleName"); }
	FDelegateHandle& OnMatchStateSetHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UAISystemBase.OnMatchStateSetHandle"); }
	bool& bInstantiateAISystemOnClientField() { return *GetNativePointerField<bool*>(this, "UAISystemBase.bInstantiateAISystemOnClient"); }
	void OnMatchStateSet(FName NewMatchState) { NativeCall<void, FName>(this, "UAISystemBase.OnMatchStateSet(FName)", NewMatchState); }
	void InitializeActorsForPlay(bool bTimeGotReset) { NativeCall<void, bool>(this, "UAISystemBase.InitializeActorsForPlay(bool)", bTimeGotReset); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld* NewWorld) { NativeCall<void, bool, bool, UWorld*>(this, "UAISystemBase.CleanupWorld(bool,bool,UWorld*)", bSessionEnded, bCleanupResources, NewWorld); }
	void StartPlay() { NativeCall<void>(this, "UAISystemBase.StartPlay()"); }
	static FName GetAISystemModuleName() { return NativeCall<FName>(nullptr, "UAISystemBase.GetAISystemModuleName()"); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources) { NativeCall<void, bool, bool>(this, "UAISystemBase.CleanupWorld(bool,bool)", bSessionEnded, bCleanupResources); }
	static bool ShouldInstantiateInNetMode(ENetMode NetMode) { return NativeCall<bool, ENetMode>(nullptr, "UAISystemBase.ShouldInstantiateInNetMode(ENetMode)", NetMode); }
};
