#pragma once
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalReplicationDriver : UObject
{
public:
	UPrimalReplicationDriver() = delete;
	~UPrimalReplicationDriver() = delete;
	UPrimalReplicationDriver(const UPrimalReplicationDriver&) = delete;
	UPrimalReplicationDriver& operator=(const UPrimalReplicationDriver&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }



	void SetActiveRepGraphBehaviorFor(AActor* pActor) { NativeCall<void, AActor*>(this, "UPrimalReplicationDriver.SetActiveRepGraphBehaviorFor(AActor*)", pActor); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalReplicationDriver.StaticClass()"); }
};
