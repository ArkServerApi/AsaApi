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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
};
