#pragma once
#include "BulkForward.h"
#include "UStateTreeComponent.h"

struct UStateTreeAIComponent : public UStateTreeComponent
{
public:
	UStateTreeAIComponent() = delete;
	~UStateTreeAIComponent() = delete;
	UStateTreeAIComponent(const UStateTreeAIComponent&) = delete;
	UStateTreeAIComponent& operator=(const UStateTreeAIComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
