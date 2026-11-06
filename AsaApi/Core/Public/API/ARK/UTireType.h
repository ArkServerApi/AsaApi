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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	float& FrictionScaleField() { return *GetNativePointerField<float*>(this, "UTireType.FrictionScale"); }
};
