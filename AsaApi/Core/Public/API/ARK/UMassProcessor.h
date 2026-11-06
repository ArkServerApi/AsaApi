#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UMassProcessor : public UObject
{
public:
	UMassProcessor() = delete;
	~UMassProcessor() = delete;
	UMassProcessor(const UMassProcessor&) = delete;
	UMassProcessor& operator=(const UMassProcessor&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UMassProcessor.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
