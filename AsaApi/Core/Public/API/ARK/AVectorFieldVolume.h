#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AVectorFieldVolume : public AActor
{
public:
	AVectorFieldVolume() = delete;
	~AVectorFieldVolume() = delete;
	AVectorFieldVolume(const AVectorFieldVolume&) = delete;
	AVectorFieldVolume& operator=(const AVectorFieldVolume&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
