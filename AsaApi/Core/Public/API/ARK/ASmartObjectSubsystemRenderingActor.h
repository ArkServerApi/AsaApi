#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASmartObjectSubsystemRenderingActor : public AActor
{
public:
	ASmartObjectSubsystemRenderingActor() = delete;
	~ASmartObjectSubsystemRenderingActor() = delete;
	ASmartObjectSubsystemRenderingActor(const ASmartObjectSubsystemRenderingActor&) = delete;
	ASmartObjectSubsystemRenderingActor& operator=(const ASmartObjectSubsystemRenderingActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASmartObjectSubsystemRenderingActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASmartObjectSubsystemRenderingActor"); }

};
