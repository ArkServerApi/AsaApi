#pragma once
#include "BulkForward.h"
#include "UShooterGraphNode_AlwaysRelevantBase.h"

struct UShooterGraphNode_TeamSpecificAlwaysRelevant : public UShooterGraphNode_AlwaysRelevantBase
{
public:
	UShooterGraphNode_TeamSpecificAlwaysRelevant() = delete;
	~UShooterGraphNode_TeamSpecificAlwaysRelevant() = delete;
	UShooterGraphNode_TeamSpecificAlwaysRelevant(const UShooterGraphNode_TeamSpecificAlwaysRelevant&) = delete;
	UShooterGraphNode_TeamSpecificAlwaysRelevant& operator=(const UShooterGraphNode_TeamSpecificAlwaysRelevant&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_TeamSpecificAlwaysRelevant"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterGraphNode_TeamSpecificAlwaysRelevant"); }

};
