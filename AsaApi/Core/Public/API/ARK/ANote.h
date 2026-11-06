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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ANote.StaticClass()"); }
};
