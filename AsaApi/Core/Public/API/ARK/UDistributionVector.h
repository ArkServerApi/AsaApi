#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDistribution.h"

class UDistributionVector : public UDistribution
{
public:
	UDistributionVector() = delete;
	~UDistributionVector() = delete;
	UDistributionVector(const UDistributionVector&) = delete;
	UDistributionVector& operator=(const UDistributionVector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDistributionVector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDistributionVector"); }
	BitFieldValue<bool, unsigned char> bCanBeBaked() { return { this, "UDistributionVector.bCanBeBaked"}; }
	BitFieldValue<bool, unsigned char> bIsDirty() { return { this, "UDistributionVector.bIsDirty"}; }
	BitFieldValue<bool, unsigned char> bBakedDataSuccesfully() { return { this, "UDistributionVector.bBakedDataSuccesfully"}; }
	UE::Math::TVector<double>* GetVectorValue(UE::Math::TVector<double>* result, float F) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "UDistributionVector.GetVectorValue(float)", result, F); }
	void GetRange(UE::Math::TVector<double>& OutMin, UE::Math::TVector<double>& OutMax) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "UDistributionVector.GetRange(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OutMin, OutMax); }
	unsigned int InitializeRawEntry(float Time, float* Values) { return NativeCall<unsigned int, float, float*>(this, "UDistributionVector.InitializeRawEntry(float,float*)", Time, Values); }
	UE::Math::TVector<double>* GetValue(UE::Math::TVector<double>* result, float F, UObject* Data, int Extreme, FRandomStream* InRandomStream) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, UObject*, int, FRandomStream*>(this, "UDistributionVector.GetValue(float,UObject*,int,FRandomStream*)", result, F, Data, Extreme, InRandomStream); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDistributionVector.Serialize(FArchive&)", Ar); }
	unsigned char GetLockFlag() { return NativeCall<unsigned char>(this, "UDistributionVector.GetLockFlag()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UDistributionVector.NeedsLoadForServer()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UDistributionVector.NeedsLoadForClient()"); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UDistributionVector.NeedsLoadForEditorGame()"); }
	bool CanBeBaked() { return NativeCall<bool>(this, "UDistributionVector.CanBeBaked()"); }
};
