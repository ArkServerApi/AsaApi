#pragma once
#include "BulkForward.h"
#include "UShooterGraphNode_AlwaysRelevantBase.h"

struct UShooterGraphNode_ConnectionSpecificAlwaysRelevant : public UShooterGraphNode_AlwaysRelevantBase
{
public:
	UShooterGraphNode_ConnectionSpecificAlwaysRelevant() = delete;
	~UShooterGraphNode_ConnectionSpecificAlwaysRelevant() = delete;
	UShooterGraphNode_ConnectionSpecificAlwaysRelevant(const UShooterGraphNode_ConnectionSpecificAlwaysRelevant&) = delete;
	UShooterGraphNode_ConnectionSpecificAlwaysRelevant& operator=(const UShooterGraphNode_ConnectionSpecificAlwaysRelevant&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
