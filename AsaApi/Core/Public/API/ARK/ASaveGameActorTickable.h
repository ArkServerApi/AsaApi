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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void BeginPlay() { NativeCall<void>(this, "ASaveGameActorTickable.BeginPlay()"); }
};
