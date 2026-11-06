#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class URuntimeHashExternalStreamingObjectBase : public UObject
{
public:
	URuntimeHashExternalStreamingObjectBase() = delete;
	~URuntimeHashExternalStreamingObjectBase() = delete;
	URuntimeHashExternalStreamingObjectBase(const URuntimeHashExternalStreamingObjectBase&) = delete;
	URuntimeHashExternalStreamingObjectBase& operator=(const URuntimeHashExternalStreamingObjectBase&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "URuntimeHashExternalStreamingObjectBase.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	FWorldPartitionRuntimeContainerResolver& ContainerResolverField() { return *GetNativePointerField<FWorldPartitionRuntimeContainerResolver*>(this, "URuntimeHashExternalStreamingObjectBase.ContainerResolver"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "URuntimeHashExternalStreamingObjectBase.GetWorld()"); }
	UWorld* GetOwningWorld() { return NativeCall<UWorld*>(this, "URuntimeHashExternalStreamingObjectBase.GetOwningWorld()"); }
	void OnStreamingObjectLoaded(UWorld* InjectedWorld) { NativeCall<void, UWorld*>(this, "URuntimeHashExternalStreamingObjectBase.OnStreamingObjectLoaded(UWorld*)", InjectedWorld); }
};
