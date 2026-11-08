#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UGameInstance : public UObject
{
public:
	UGameInstance() = delete;
	~UGameInstance() = delete;
	UGameInstance(const UGameInstance&) = delete;
	UGameInstance& operator=(const UGameInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameInstance"); }

};
