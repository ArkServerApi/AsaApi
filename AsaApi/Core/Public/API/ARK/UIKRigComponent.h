#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UIKRigComponent : public UActorComponent
{
public:
	UIKRigComponent() = delete;
	~UIKRigComponent() = delete;
	UIKRigComponent(const UIKRigComponent&) = delete;
	UIKRigComponent& operator=(const UIKRigComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UIKRigComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UIKRigComponent"); }

	FIKRigGoalContainer& GoalContainerField() { return *GetNativePointerField<FIKRigGoalContainer*>(this, "UIKRigComponent.GoalContainer"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UIKRigComponent._getUObject()"); }
};
