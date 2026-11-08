#pragma once
#include "BulkForward.h"
#include "ANote.h"

struct APrimalPointNote : public ANote
{
public:
	APrimalPointNote() = delete;
	~APrimalPointNote() = delete;
	APrimalPointNote(const APrimalPointNote&) = delete;
	APrimalPointNote& operator=(const APrimalPointNote&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPointNote"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPointNote"); }
};
