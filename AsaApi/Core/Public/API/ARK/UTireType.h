#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataAsset.h"

struct UTireType : public UDataAsset
{
public:
	UTireType() = delete;
	~UTireType() = delete;
	UTireType(const UTireType&) = delete;
	UTireType& operator=(const UTireType&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTireType"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTireType"); }
	float& FrictionScaleField() { return *GetNativePointerField<float*>(this, "UTireType.FrictionScale"); }
};
