#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPrimalGPUMessageHelpers : public UObject
{
public:
	UPrimalGPUMessageHelpers() = delete;
	~UPrimalGPUMessageHelpers() = delete;
	UPrimalGPUMessageHelpers(const UPrimalGPUMessageHelpers&) = delete;
	UPrimalGPUMessageHelpers& operator=(const UPrimalGPUMessageHelpers&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	static void ConvertSnowTriggerGPUMessage(const TArray<float, TSizedDefaultAllocator<32> >& Data, float& SnowAmount, UE::Math::TVector<double>& Position, UE::Math::TVector<float>& Velocity, float& InnerRadius, float& OuterRadius, float& GroundHeight, float& SnowDepth) { NativeCall<void, const TArray<float, TSizedDefaultAllocator<32> >&, float&, UE::Math::TVector<double>&, UE::Math::TVector<float>&, float&, float&, float&, float&>(nullptr, "UPrimalGPUMessageHelpers.ConvertSnowTriggerGPUMessage(TArray<float,TSizedDefaultAllocator<32>>&,float&,UE::Math::TVector<double>&,UE::Math::TVector<float>&,float&,float&,float&,float&)", Data, SnowAmount, Position, Velocity, InnerRadius, OuterRadius, GroundHeight, SnowDepth); }
};
