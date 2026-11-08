#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	APrecomputedVisibilityOverrideVolume() = delete;
	~APrecomputedVisibilityOverrideVolume() = delete;
	APrecomputedVisibilityOverrideVolume(const APrecomputedVisibilityOverrideVolume&) = delete;
	APrecomputedVisibilityOverrideVolume& operator=(const APrecomputedVisibilityOverrideVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrecomputedVisibilityOverrideVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrecomputedVisibilityOverrideVolume"); }

	TArray<FName, TSizedDefaultAllocator<32> >& OverrideInvisibleLevelsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrecomputedVisibilityOverrideVolume.OverrideInvisibleLevels"); }
};
