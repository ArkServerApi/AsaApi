#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDistribution.h"

class UDistributionFloat : public UDistribution
{
public:
	UDistributionFloat() = delete;
	~UDistributionFloat() = delete;
	UDistributionFloat(const UDistributionFloat&) = delete;
	UDistributionFloat& operator=(const UDistributionFloat&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDistributionFloat"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDistributionFloat"); }
	BitFieldValue<bool, unsigned char> bCanBeBaked() { return { this, "UDistributionFloat.bCanBeBaked"}; }
	BitFieldValue<bool, unsigned char> bIsDirty() { return { this, "UDistributionFloat.bIsDirty"}; }
	BitFieldValue<bool, unsigned char> bBakedDataSuccesfully() { return { this, "UDistributionFloat.bBakedDataSuccesfully"}; }
	unsigned int InitializeRawEntry(float Time, float* Values) { return NativeCall<unsigned int, float, float*>(this, "UDistributionFloat.InitializeRawEntry(float,float*)", Time, Values); }
	unsigned char GetLockFlag() { return NativeCall<unsigned char>(this, "UDistributionFloat.GetLockFlag()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDistributionFloat.Serialize(FArchive&)", Ar); }
	bool CanBeBaked() { return NativeCall<bool>(this, "UDistributionFloat.CanBeBaked()"); }
	float GetValue(float F, UObject* Data, FRandomStream* InRandomStream) { return NativeCall<float, float, UObject*, FRandomStream*>(this, "UDistributionFloat.GetValue(float,UObject*,FRandomStream*)", F, Data, InRandomStream); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UDistributionFloat.NeedsLoadForServer()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UDistributionFloat.NeedsLoadForClient()"); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UDistributionFloat.NeedsLoadForEditorGame()"); }
	float GetFloatValue(float F) { return NativeCall<float, float>(this, "UDistributionFloat.GetFloatValue(float)", F); }
};
