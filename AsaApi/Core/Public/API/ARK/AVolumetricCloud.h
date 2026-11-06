#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AVolumetricCloud : public AInfo
{
public:
	AVolumetricCloud() = delete;
	~AVolumetricCloud() = delete;
	AVolumetricCloud(const AVolumetricCloud&) = delete;
	AVolumetricCloud& operator=(const AVolumetricCloud&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AVolumetricCloud"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AVolumetricCloud"); }

};
