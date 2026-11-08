#pragma once
#include "BulkForward.h"
#include "ADaySequenceActor.h"

struct ABaseDaySequenceActor : public ADaySequenceActor
{
public:
	ABaseDaySequenceActor() = delete;
	~ABaseDaySequenceActor() = delete;
	ABaseDaySequenceActor(const ABaseDaySequenceActor&) = delete;
	ABaseDaySequenceActor& operator=(const ABaseDaySequenceActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABaseDaySequenceActor"); }

	void BeginPlay() { NativeCall<void>(this, "ABaseDaySequenceActor.BeginPlay()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABaseDaySequenceActor"); }
};
