#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataLayerInstanceWithAsset.h"

class UExternalDataLayerInstance : public UDataLayerInstanceWithAsset
{
public:
	UExternalDataLayerInstance() = delete;
	~UExternalDataLayerInstance() = delete;
	UExternalDataLayerInstance(const UExternalDataLayerInstance&) = delete;
	UExternalDataLayerInstance& operator=(const UExternalDataLayerInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UExternalDataLayerInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UExternalDataLayerInstance"); }
	bool CanHaveParentDataLayerInstance() { return NativeCall<bool>(this, "UExternalDataLayerInstance.CanHaveParentDataLayerInstance()"); }
	UWorld* GetOuterWorld() { return NativeCall<UWorld*>(this, "UExternalDataLayerInstance.GetOuterWorld()"); }
};
