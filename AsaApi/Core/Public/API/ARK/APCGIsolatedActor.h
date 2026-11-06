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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FPCGDataCollection& DataField() { return *GetNativePointerField<FPCGDataCollection*>(this, "APCGIsolatedActor.Data"); }
};
