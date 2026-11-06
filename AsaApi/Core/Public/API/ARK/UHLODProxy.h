#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UHLODProxy : public UObject
{
public:
	UHLODProxy() = delete;
	~UHLODProxy() = delete;
	UHLODProxy(const UHLODProxy&) = delete;
	UHLODProxy& operator=(const UHLODProxy&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
};
