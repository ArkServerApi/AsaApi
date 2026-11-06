#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalWorldBuffCustomImplement : UObject
{
public:
	UPrimalWorldBuffCustomImplement() = delete;
	~UPrimalWorldBuffCustomImplement() = delete;
	UPrimalWorldBuffCustomImplement(const UPrimalWorldBuffCustomImplement&) = delete;
	UPrimalWorldBuffCustomImplement& operator=(const UPrimalWorldBuffCustomImplement&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWorldBuffCustomImplement"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWorldBuffCustomImplement"); }



	void PreDeconstruction() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.PreDeconstruction()"); }
	void PostConstruction_Implementation() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.PostConstruction_Implementation()"); }
	void BuffStackIncreased_Implementation(int newStackCount) { NativeCall<void, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackIncreased_Implementation(int)", newStackCount); }
	void BuffStackDecrease_Implementation(int newStackCount) { NativeCall<void, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackDecrease_Implementation(int)", newStackCount); }
	void UpdateBuffCustomPersistantData_Implementation() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.UpdateBuffCustomPersistantData_Implementation()"); }
	void PreDeconstruction_Implementation() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.PreDeconstruction_Implementation()"); }
	void BuffTimerRefreshed() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.BuffTimerRefreshed()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalWorldBuffCustomImplement.Tick(float)", DeltaSeconds); }
	void BuffStackDecrease(int newStackCount) { NativeCall<void, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackDecrease(int)", newStackCount); }
	UObject* GetOwner() { return NativeCall<UObject*>(this, "UPrimalWorldBuffCustomImplement.GetOwner()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UPrimalWorldBuffCustomImplement.GetWorld()"); }
	void BuffStackIncreased(int newStackCount) { NativeCall<void, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackIncreased(int)", newStackCount); }
	void BuffTimerRefreshed_Implementation() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.BuffTimerRefreshed_Implementation()"); }
	void UpdateBuffCustomPersistantData() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.UpdateBuffCustomPersistantData()"); }
	void Tick_Implementation(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalWorldBuffCustomImplement.Tick_Implementation(float)", DeltaSeconds); }
	void PostConstruction() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.PostConstruction()"); }

	FName& WorldBuffIDField() { return *GetNativePointerField<FName*>(this, "UPrimalWorldBuffCustomImplement.WorldBuffID"); }
};
