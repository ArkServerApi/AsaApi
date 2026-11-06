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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	int& ValueField() { return *GetNativePointerField<int*>(this, "AAutoRTFMTestAnotherActor.Value"); }
};
