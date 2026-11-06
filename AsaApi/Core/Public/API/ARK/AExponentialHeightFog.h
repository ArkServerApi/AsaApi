#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AExponentialHeightFog : public AInfo
{
public:
	AExponentialHeightFog() = delete;
	~AExponentialHeightFog() = delete;
	AExponentialHeightFog(const AExponentialHeightFog&) = delete;
	AExponentialHeightFog& operator=(const AExponentialHeightFog&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "AExponentialHeightFog.bEnabled"}; }
	void OnRep_bEnabled() { NativeCall<void>(this, "AExponentialHeightFog.OnRep_bEnabled()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AExponentialHeightFog.PostInitializeComponents()"); }
};
