#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UNavigationGraphNodeComponent : public USceneComponent
{
public:
	UNavigationGraphNodeComponent() = delete;
	~UNavigationGraphNodeComponent() = delete;
	UNavigationGraphNodeComponent(const UNavigationGraphNodeComponent&) = delete;
	UNavigationGraphNodeComponent& operator=(const UNavigationGraphNodeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavigationGraphNodeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavigationGraphNodeComponent"); }

	FNavGraphNode& NodeField() { return *GetNativePointerField<FNavGraphNode*>(this, "UNavigationGraphNodeComponent.Node"); }
	void BeginDestroy() { NativeCall<void>(this, "UNavigationGraphNodeComponent.BeginDestroy()"); }
};
