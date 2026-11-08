#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AAutoRTFMTestAnotherActor : public AActor
{
public:
	AAutoRTFMTestAnotherActor() = delete;
	~AAutoRTFMTestAnotherActor() = delete;
	AAutoRTFMTestAnotherActor(const AAutoRTFMTestAnotherActor&) = delete;
	AAutoRTFMTestAnotherActor& operator=(const AAutoRTFMTestAnotherActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AAutoRTFMTestAnotherActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAutoRTFMTestAnotherActor"); }

	int& ValueField() { return *GetNativePointerField<int*>(this, "AAutoRTFMTestAnotherActor.Value"); }
};
