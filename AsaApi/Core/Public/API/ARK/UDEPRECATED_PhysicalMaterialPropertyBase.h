#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UDEPRECATED_PhysicalMaterialPropertyBase : public UObject
{
public:
	UDEPRECATED_PhysicalMaterialPropertyBase() = delete;
	~UDEPRECATED_PhysicalMaterialPropertyBase() = delete;
	UDEPRECATED_PhysicalMaterialPropertyBase(const UDEPRECATED_PhysicalMaterialPropertyBase&) = delete;
	UDEPRECATED_PhysicalMaterialPropertyBase& operator=(const UDEPRECATED_PhysicalMaterialPropertyBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDEPRECATED_PhysicalMaterialPropertyBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDEPRECATED_PhysicalMaterialPropertyBase"); }
	EPhysicalSurface ConvertToSurfaceType() { return NativeCall<EPhysicalSurface>(this, "UDEPRECATED_PhysicalMaterialPropertyBase.ConvertToSurfaceType()"); }
	bool IsAsset() { return NativeCall<bool>(this, "UDEPRECATED_PhysicalMaterialPropertyBase.IsAsset()"); }
};
