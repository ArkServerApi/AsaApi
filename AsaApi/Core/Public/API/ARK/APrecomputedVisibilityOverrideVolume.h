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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	TArray<FName, TSizedDefaultAllocator<32> >& OverrideInvisibleLevelsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrecomputedVisibilityOverrideVolume.OverrideInvisibleLevels"); }
};
