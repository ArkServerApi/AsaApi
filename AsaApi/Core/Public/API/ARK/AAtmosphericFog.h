#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AAtmosphericFog : public AInfo
{
public:
	AAtmosphericFog() = delete;
	~AAtmosphericFog() = delete;
	AAtmosphericFog(const AAtmosphericFog&) = delete;
	AAtmosphericFog& operator=(const AAtmosphericFog&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
