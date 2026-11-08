#pragma once
#include "BulkForward.h"
#include "ASaveGameActor.h"

struct ASaveGameActorTickable : public ASaveGameActor
{
public:
	ASaveGameActorTickable() = delete;
	~ASaveGameActorTickable() = delete;
	ASaveGameActorTickable(const ASaveGameActorTickable&) = delete;
	ASaveGameActorTickable& operator=(const ASaveGameActorTickable&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASaveGameActorTickable"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASaveGameActorTickable"); }

	void BeginPlay() { NativeCall<void>(this, "ASaveGameActorTickable.BeginPlay()"); }
};
