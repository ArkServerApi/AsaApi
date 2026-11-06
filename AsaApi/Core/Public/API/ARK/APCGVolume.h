#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct APCGVolume : public AVolume
{
public:
	APCGVolume() = delete;
	~APCGVolume() = delete;
	APCGVolume(const APCGVolume&) = delete;
	APCGVolume& operator=(const APCGVolume&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
