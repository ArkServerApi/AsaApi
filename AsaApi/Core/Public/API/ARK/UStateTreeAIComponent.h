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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStateTreeAIComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStateTreeAIComponent"); }

};
