#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UISMPoolComponent : public USceneComponent
{
public:
	UISMPoolComponent() = delete;
	~UISMPoolComponent() = delete;
	UISMPoolComponent(const UISMPoolComponent&) = delete;
	UISMPoolComponent& operator=(const UISMPoolComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UISMPoolComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UISMPoolComponent"); }

	unsigned int& NextMeshGroupIdField() { return *GetNativePointerField<unsigned int*>(this, "UISMPoolComponent.NextMeshGroupId"); }
	FISMPool& PoolField() { return *GetNativePointerField<FISMPool*>(this, "UISMPoolComponent.Pool"); }
	bool& bIsPoolManagementEnabledField() { return *GetNativePointerField<bool*>(this, "UISMPoolComponent.bIsPoolManagementEnabled"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UISMPoolComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void SetTickablePoolManagement(bool bEnablePoolManagement) { NativeCall<void, bool>(this, "UISMPoolComponent.SetTickablePoolManagement(bool)", bEnablePoolManagement); }
	int CreateMeshGroup(bool bAllowPerInstanceRemoval) { return NativeCall<int, bool>(this, "UISMPoolComponent.CreateMeshGroup(bool)", bAllowPerInstanceRemoval); }
	void DestroyMeshGroup(int MeshGroupId) { NativeCall<void, int>(this, "UISMPoolComponent.DestroyMeshGroup(int)", MeshGroupId); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UISMPoolComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
