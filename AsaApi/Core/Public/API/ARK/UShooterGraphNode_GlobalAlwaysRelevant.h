#pragma once
#include "BulkForward.h"
#include "UShooterGraphNode_AlwaysRelevantBase.h"

struct UShooterGraphNode_GlobalAlwaysRelevant : public UShooterGraphNode_AlwaysRelevantBase
{
public:
	UShooterGraphNode_GlobalAlwaysRelevant() = delete;
	~UShooterGraphNode_GlobalAlwaysRelevant() = delete;
	UShooterGraphNode_GlobalAlwaysRelevant(const UShooterGraphNode_GlobalAlwaysRelevant&) = delete;
	UShooterGraphNode_GlobalAlwaysRelevant& operator=(const UShooterGraphNode_GlobalAlwaysRelevant&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
