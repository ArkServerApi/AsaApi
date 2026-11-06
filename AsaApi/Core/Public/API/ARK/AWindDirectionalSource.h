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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
