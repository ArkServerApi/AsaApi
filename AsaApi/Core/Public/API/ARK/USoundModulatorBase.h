#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USoundModulatorBase : public UObject
{
public:
	USoundModulatorBase() = delete;
	~USoundModulatorBase() = delete;
	USoundModulatorBase(const USoundModulatorBase&) = delete;
	USoundModulatorBase& operator=(const USoundModulatorBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundModulatorBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundModulatorBase"); }
};
