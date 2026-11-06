#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UFXSystemAsset : public UObject
{
public:
	UFXSystemAsset() = delete;
	~UFXSystemAsset() = delete;
	UFXSystemAsset(const UFXSystemAsset&) = delete;
	UFXSystemAsset& operator=(const UFXSystemAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFXSystemAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFXSystemAsset"); }
	unsigned int& MaxPoolSizeField() { return *GetNativePointerField<unsigned int*>(this, "UFXSystemAsset.MaxPoolSize"); }
	unsigned int& PoolPrimeSizeField() { return *GetNativePointerField<unsigned int*>(this, "UFXSystemAsset.PoolPrimeSize"); }
	bool& PSOPrecachingLaunchedField() { return *GetNativePointerField<bool*>(this, "UFXSystemAsset.PSOPrecachingLaunched"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& MaterialPSOPrecacheRequestIDsField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "UFXSystemAsset.MaterialPSOPrecacheRequestIDs"); }
	void PrecacheAssetPSOs() { NativeCall<void>(this, "UFXSystemAsset.PrecacheAssetPSOs()"); }
};
