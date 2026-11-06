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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
