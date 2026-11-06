#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AConstraintsActor : public AActor
{
public:
	AConstraintsActor() = delete;
	~AConstraintsActor() = delete;
	AConstraintsActor(const AConstraintsActor&) = delete;
	AConstraintsActor& operator=(const AConstraintsActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AConstraintsActor.Tick(float)", DeltaTime); }
	void BeginPlay() { NativeCall<void>(this, "AConstraintsActor.BeginPlay()"); }
	void BeginDestroy() { NativeCall<void>(this, "AConstraintsActor.BeginDestroy()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AConstraintsActor.PostRegisterAllComponents()"); }
	void Destroyed() { NativeCall<void>(this, "AConstraintsActor.Destroyed()"); }
};
