#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASmartObjectTestingActor : public AActor
{
public:
	ASmartObjectTestingActor() = delete;
	~ASmartObjectTestingActor() = delete;
	ASmartObjectTestingActor(const ASmartObjectTestingActor&) = delete;
	ASmartObjectTestingActor& operator=(const ASmartObjectTestingActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASmartObjectTestingActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASmartObjectTestingActor"); }

	bool& bRunTestsEachFrameField() { return *GetNativePointerField<bool*>(this, "ASmartObjectTestingActor.bRunTestsEachFrame"); }
	void RunTests() { NativeCall<void>(this, "ASmartObjectTestingActor.RunTests()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ASmartObjectTestingActor.Tick(float)", DeltaTime); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ASmartObjectTestingActor.ShouldTickIfViewportsOnly()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ASmartObjectTestingActor.PostRegisterAllComponents()"); }
};
