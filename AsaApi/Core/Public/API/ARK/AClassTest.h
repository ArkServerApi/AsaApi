#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AClassTest : public AActor
{
public:
	AClassTest() = delete;
	~AClassTest() = delete;
	AClassTest(const AClassTest&) = delete;
	AClassTest& operator=(const AClassTest&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AClassTest"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AClassTest"); }

	void BeginPlay() { NativeCall<void>(this, "AClassTest.BeginPlay()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AClassTest.Tick(float)", DeltaTime); }
};
