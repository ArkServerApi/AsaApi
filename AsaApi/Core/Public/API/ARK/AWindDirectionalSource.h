#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AWindDirectionalSource : public AInfo
{
public:
	AWindDirectionalSource() = delete;
	~AWindDirectionalSource() = delete;
	AWindDirectionalSource(const AWindDirectionalSource&) = delete;
	AWindDirectionalSource& operator=(const AWindDirectionalSource&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWindDirectionalSource"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWindDirectionalSource"); }

};
