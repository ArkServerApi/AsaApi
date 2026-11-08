#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AAutoRTFMTestActor : public AActor
{
public:
	AAutoRTFMTestActor() = delete;
	~AAutoRTFMTestActor() = delete;
	AAutoRTFMTestActor(const AAutoRTFMTestActor&) = delete;
	AAutoRTFMTestActor& operator=(const AAutoRTFMTestActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AAutoRTFMTestActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAutoRTFMTestActor"); }

	int& ValueField() { return *GetNativePointerField<int*>(this, "AAutoRTFMTestActor.Value"); }
	int& MyPropertyField() { return *GetNativePointerField<int*>(this, "AAutoRTFMTestActor.MyProperty"); }
};
