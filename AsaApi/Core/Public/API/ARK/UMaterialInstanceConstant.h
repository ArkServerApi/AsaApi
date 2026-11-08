#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UMaterialInstance.h"

struct UMaterialInstanceConstant : public UMaterialInstance
{
public:
	UMaterialInstanceConstant() = delete;
	~UMaterialInstanceConstant() = delete;
	UMaterialInstanceConstant(const UMaterialInstanceConstant&) = delete;
	UMaterialInstanceConstant& operator=(const UMaterialInstanceConstant&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialInstanceConstant"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialInstanceConstant"); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterialInstanceConstant.FinishDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "UMaterialInstanceConstant.PostLoad()"); }
	UPhysicalMaterialMask* GetPhysicalMaterialMask() { return NativeCall<UPhysicalMaterialMask*>(this, "UMaterialInstanceConstant.GetPhysicalMaterialMask()"); }
};
