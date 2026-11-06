#pragma once
#include "BulkForward.h"
#include "UGameInstance.h"

struct UPrimalGameInstance : public UGameInstance
{
public:
	UPrimalGameInstance() = delete;
	~UPrimalGameInstance() = delete;
	UPrimalGameInstance(const UPrimalGameInstance&) = delete;
	UPrimalGameInstance& operator=(const UPrimalGameInstance&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalGameInstance"); }

	void ManualTickWorldTransition(float Delta) { NativeCall<void, float>(this, "UPrimalGameInstance.ManualTickWorldTransition(float)", Delta); }
	void SetupForMapLoad(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UPrimalGameInstance.SetupForMapLoad(UWorld*)", InWorld); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalGameInstance"); }
	void LoadGameMedia() { NativeCall<void>(this, "UPrimalGameInstance.LoadGameMedia()"); }
	void WorldLoaded() { NativeCall<void>(this, "UPrimalGameInstance.WorldLoaded()"); }
};
