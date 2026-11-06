#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANote : public AActor
{
public:
	ANote() = delete;
	~ANote() = delete;
	ANote(const ANote&) = delete;
	ANote& operator=(const ANote&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANote"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ANote"); }
};
