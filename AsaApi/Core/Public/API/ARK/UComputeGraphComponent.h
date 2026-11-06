#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UComputeGraphComponent : public UActorComponent
{
public:
	UComputeGraphComponent() = delete;
	~UComputeGraphComponent() = delete;
	UComputeGraphComponent(const UComputeGraphComponent&) = delete;
	UComputeGraphComponent& operator=(const UComputeGraphComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UComputeGraphComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UComputeGraphComponent"); }

	FComputeGraphInstance& ComputeGraphInstanceField() { return *GetNativePointerField<FComputeGraphInstance*>(this, "UComputeGraphComponent.ComputeGraphInstance"); }
	UObject* GetBindingObject_Implementation(int InBindingIndex) { return NativeCall<UObject*, int>(this, "UComputeGraphComponent.GetBindingObject_Implementation(int)", InBindingIndex); }
	void OnUnregister() { NativeCall<void>(this, "UComputeGraphComponent.OnUnregister()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UComputeGraphComponent.DestroyRenderState_Concurrent()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UComputeGraphComponent.SendRenderDynamicData_Concurrent()"); }
	void InitializeProvider_Implementation(int InDataInterfaceIndex, UObject* InOutDataProvider) { NativeCall<void, int, UObject*>(this, "UComputeGraphComponent.InitializeProvider_Implementation(int,UObject*)", InDataInterfaceIndex, InOutDataProvider); }
	bool ShouldCreateRenderState() { return NativeCall<bool>(this, "UComputeGraphComponent.ShouldCreateRenderState()"); }
	void InitializeProvider(int InDataInterfaceIndex, UObject* InOutDataProvider) { NativeCall<void, int, UObject*>(this, "UComputeGraphComponent.InitializeProvider(int,UObject*)", InDataInterfaceIndex, InOutDataProvider); }
	void OnRegister() { NativeCall<void>(this, "UComputeGraphComponent.OnRegister()"); }
};
