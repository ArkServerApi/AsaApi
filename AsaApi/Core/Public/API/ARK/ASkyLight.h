#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ASkyLight : public AInfo
{
public:
	ASkyLight() = delete;
	~ASkyLight() = delete;
	ASkyLight(const ASkyLight&) = delete;
	ASkyLight& operator=(const ASkyLight&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "ASkyLight.bEnabled"}; }
	void OnRep_bEnabled() { NativeCall<void>(this, "ASkyLight.OnRep_bEnabled()"); }
};
