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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AVectorFieldVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AVectorFieldVolume"); }

};
