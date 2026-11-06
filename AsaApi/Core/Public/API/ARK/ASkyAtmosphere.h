#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ASkyAtmosphere : public AInfo
{
public:
	ASkyAtmosphere() = delete;
	~ASkyAtmosphere() = delete;
	ASkyAtmosphere(const ASkyAtmosphere&) = delete;
	ASkyAtmosphere& operator=(const ASkyAtmosphere&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
