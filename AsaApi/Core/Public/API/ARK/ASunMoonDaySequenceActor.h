#pragma once
#include "BulkForward.h"
#include "ABaseDaySequenceActor.h"

struct ASunMoonDaySequenceActor : public ABaseDaySequenceActor
{
public:
	ASunMoonDaySequenceActor() = delete;
	~ASunMoonDaySequenceActor() = delete;
	ASunMoonDaySequenceActor(const ASunMoonDaySequenceActor&) = delete;
	ASunMoonDaySequenceActor& operator=(const ASunMoonDaySequenceActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASunMoonDaySequenceActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASunMoonDaySequenceActor"); }

};
