#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMeshDeformer : public UObject
{
public:
	UMeshDeformer() = delete;
	~UMeshDeformer() = delete;
	UMeshDeformer(const UMeshDeformer&) = delete;
	UMeshDeformer& operator=(const UMeshDeformer&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UMeshDeformer.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	UMeshDeformerInstanceSettings* CreateSettingsInstance(UMeshComponent* InMeshComponent) { return NativeCall<UMeshDeformerInstanceSettings*, UMeshComponent*>(this, "UMeshDeformer.CreateSettingsInstance(UMeshComponent*)", InMeshComponent); }
	UMeshDeformerInstance* CreateInstance(UMeshComponent* InMeshComponent, UMeshDeformerInstanceSettings* InSettings) { return NativeCall<UMeshDeformerInstance*, UMeshComponent*, UMeshDeformerInstanceSettings*>(this, "UMeshDeformer.CreateInstance(UMeshComponent*,UMeshDeformerInstanceSettings*)", InMeshComponent, InSettings); }
};
