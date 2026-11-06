#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AHexagonVFXActor : public AActor
{
public:
	AHexagonVFXActor() = delete;
	~AHexagonVFXActor() = delete;
	AHexagonVFXActor(const AHexagonVFXActor&) = delete;
	AHexagonVFXActor& operator=(const AHexagonVFXActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHexagonVFXActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHexagonVFXActor"); }

};
