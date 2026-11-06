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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalPointNote.StaticClass()"); }
};
