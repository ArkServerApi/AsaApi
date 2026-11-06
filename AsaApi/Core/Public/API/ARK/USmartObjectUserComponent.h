#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct USmartObjectUserComponent : public UActorComponent
{
public:
	USmartObjectUserComponent() = delete;
	~USmartObjectUserComponent() = delete;
	USmartObjectUserComponent(const USmartObjectUserComponent&) = delete;
	USmartObjectUserComponent& operator=(const USmartObjectUserComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
