#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AHeterogeneousVolume : public AInfo
{
public:
	AHeterogeneousVolume() = delete;
	~AHeterogeneousVolume() = delete;
	AHeterogeneousVolume(const AHeterogeneousVolume&) = delete;
	AHeterogeneousVolume& operator=(const AHeterogeneousVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHeterogeneousVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHeterogeneousVolume"); }

};
