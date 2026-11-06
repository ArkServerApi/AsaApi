#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMeshDeformerInstanceSettings : public UObject
{
public:
	UMeshDeformerInstanceSettings() = delete;
	~UMeshDeformerInstanceSettings() = delete;
	UMeshDeformerInstanceSettings(const UMeshDeformerInstanceSettings&) = delete;
	UMeshDeformerInstanceSettings& operator=(const UMeshDeformerInstanceSettings&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UMeshDeformerInstanceSettings.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
};
