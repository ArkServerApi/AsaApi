#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ARigidBodyBase : public AActor
{
public:
	ARigidBodyBase() = delete;
	~ARigidBodyBase() = delete;
	ARigidBodyBase(const ARigidBodyBase&) = delete;
	ARigidBodyBase& operator=(const ARigidBodyBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ARigidBodyBase"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ARigidBodyBase"); }
};
