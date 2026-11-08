#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ALocalSkyLightOverride : public AInfo
{
public:
	ALocalSkyLightOverride() = delete;
	~ALocalSkyLightOverride() = delete;
	ALocalSkyLightOverride(const ALocalSkyLightOverride&) = delete;
	ALocalSkyLightOverride& operator=(const ALocalSkyLightOverride&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALocalSkyLightOverride"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALocalSkyLightOverride"); }

	BitFieldValue<bool, unsigned __int32> bValidateOverlaps() { return { this, "ALocalSkyLightOverride.bValidateOverlaps"}; }
	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "ALocalSkyLightOverride.bEnabled"}; }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ALocalSkyLightOverride.PostRegisterAllComponents()"); }
	void OnRep_bEnabled() { NativeCall<void>(this, "ALocalSkyLightOverride.OnRep_bEnabled()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ALocalSkyLightOverride.PostUnregisterAllComponents()"); }
};
