#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPCGUnitTestDummyComponent : public UActorComponent
{
public:
	UPCGUnitTestDummyComponent() = delete;
	~UPCGUnitTestDummyComponent() = delete;
	UPCGUnitTestDummyComponent(const UPCGUnitTestDummyComponent&) = delete;
	UPCGUnitTestDummyComponent& operator=(const UPCGUnitTestDummyComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	int& IntPropertyField() { return *GetNativePointerField<int*>(this, "UPCGUnitTestDummyComponent.IntProperty"); }
};
