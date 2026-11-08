#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USoundfieldEncodingSettingsBase : public UObject
{
public:
	USoundfieldEncodingSettingsBase() = delete;
	~USoundfieldEncodingSettingsBase() = delete;
	USoundfieldEncodingSettingsBase(const USoundfieldEncodingSettingsBase&) = delete;
	USoundfieldEncodingSettingsBase& operator=(const USoundfieldEncodingSettingsBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundfieldEncodingSettingsBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundfieldEncodingSettingsBase"); }
};
