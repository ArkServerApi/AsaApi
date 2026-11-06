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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGUnitTestDummyComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGUnitTestDummyComponent"); }

	int& IntPropertyField() { return *GetNativePointerField<int*>(this, "UPCGUnitTestDummyComponent.IntProperty"); }
};
