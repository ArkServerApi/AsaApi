#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct ULODSyncComponent : public UActorComponent
{
public:
	ULODSyncComponent() = delete;
	~ULODSyncComponent() = delete;
	ULODSyncComponent(const ULODSyncComponent&) = delete;
	ULODSyncComponent& operator=(const ULODSyncComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULODSyncComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULODSyncComponent"); }

	int& NumLODsField() { return *GetNativePointerField<int*>(this, "ULODSyncComponent.NumLODs"); }
	int& ForcedLODField() { return *GetNativePointerField<int*>(this, "ULODSyncComponent.ForcedLOD"); }
	int& MinLODField() { return *GetNativePointerField<int*>(this, "ULODSyncComponent.MinLOD"); }
	int& CurrentLODField() { return *GetNativePointerField<int*>(this, "ULODSyncComponent.CurrentLOD"); }
	int& CurrentNumLODsField() { return *GetNativePointerField<int*>(this, "ULODSyncComponent.CurrentNumLODs"); }
	void OnRegister() { NativeCall<void>(this, "ULODSyncComponent.OnRegister()"); }
	FString* GetLODSyncDebugText(FString* result) { return NativeCall<FString*, FString*>(this, "ULODSyncComponent.GetLODSyncDebugText()", result); }
	void UninitializeSyncComponents() { NativeCall<void>(this, "ULODSyncComponent.UninitializeSyncComponents()"); }
	void OnUnregister() { NativeCall<void>(this, "ULODSyncComponent.OnUnregister()"); }
	void InitializeSyncComponents() { NativeCall<void>(this, "ULODSyncComponent.InitializeSyncComponents()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULODSyncComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateLOD() { NativeCall<void>(this, "ULODSyncComponent.UpdateLOD()"); }
};
