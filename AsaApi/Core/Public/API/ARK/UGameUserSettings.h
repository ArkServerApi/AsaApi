#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UGameUserSettings : public UObject
{
public:
	UGameUserSettings() = delete;
	~UGameUserSettings() = delete;
	UGameUserSettings(const UGameUserSettings&) = delete;
	UGameUserSettings& operator=(const UGameUserSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameUserSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameUserSettings"); }

};
