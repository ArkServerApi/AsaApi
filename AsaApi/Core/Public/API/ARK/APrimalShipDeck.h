#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructure.h"

struct APrimalShipDeck : APrimalStructure
{
public:
	APrimalShipDeck() = delete;
	~APrimalShipDeck() = delete;
	APrimalShipDeck(const APrimalShipDeck&) = delete;
	APrimalShipDeck& operator=(const APrimalShipDeck&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalShipDeck"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalShipDeck"); }



	void BeginPlay() { NativeCall<void>(this, "APrimalShipDeck.BeginPlay()"); }

	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalShipDeck.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
