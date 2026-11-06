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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UGameInstance.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
