#pragma once
#include "BulkForward.h"
#include "UProgressionTreeGraph_Milestones.h"

struct UProgressionTreeGraph_Dragontopia : public UProgressionTreeGraph_Milestones
{
public:
	UProgressionTreeGraph_Dragontopia() = delete;
	~UProgressionTreeGraph_Dragontopia() = delete;
	UProgressionTreeGraph_Dragontopia(const UProgressionTreeGraph_Dragontopia&) = delete;
	UProgressionTreeGraph_Dragontopia& operator=(const UProgressionTreeGraph_Dragontopia&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UProgressionTreeGraph_Dragontopia"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UProgressionTreeGraph_Dragontopia"); }

	bool ShouldEnforceMilestoneOrder() { return NativeCall<bool>(this, "UProgressionTreeGraph_Dragontopia.ShouldEnforceMilestoneOrder()"); }
};
