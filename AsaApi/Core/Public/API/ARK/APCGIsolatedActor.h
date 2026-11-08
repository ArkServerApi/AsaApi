#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APCGIsolatedActor : public AActor
{
public:
	APCGIsolatedActor() = delete;
	~APCGIsolatedActor() = delete;
	APCGIsolatedActor(const APCGIsolatedActor&) = delete;
	APCGIsolatedActor& operator=(const APCGIsolatedActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGIsolatedActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGIsolatedActor"); }

	FPCGDataCollection& DataField() { return *GetNativePointerField<FPCGDataCollection*>(this, "APCGIsolatedActor.Data"); }
};
