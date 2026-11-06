#pragma once
#include "BulkForward.h"
#include "UPrimalProgressionTreeGraph.h"

struct UProgressionTreeGraph_Skills : public UPrimalProgressionTreeGraph
{
public:
	UProgressionTreeGraph_Skills() = delete;
	~UProgressionTreeGraph_Skills() = delete;
	UProgressionTreeGraph_Skills(const UProgressionTreeGraph_Skills&) = delete;
	UProgressionTreeGraph_Skills& operator=(const UProgressionTreeGraph_Skills&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool ArePrerequisitesMetForController_Implementation(FName NodeID, APlayerController* ForPC, UObject* ForSkillProviderObject) { return NativeCall<bool, FName, APlayerController*, UObject*>(this, "UProgressionTreeGraph_Skills.ArePrerequisitesMetForController_Implementation(FName,APlayerController*,UObject*)", NodeID, ForPC, ForSkillProviderObject); }
};
