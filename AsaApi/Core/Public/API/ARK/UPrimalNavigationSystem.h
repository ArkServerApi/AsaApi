#pragma once
#include "BulkForward.h"
#include "UNavigationSystemV1.h"

struct UPrimalNavigationSystem : public UNavigationSystemV1
{
public:
	UPrimalNavigationSystem() = delete;
	~UPrimalNavigationSystem() = delete;
	UPrimalNavigationSystem(const UPrimalNavigationSystem&) = delete;
	UPrimalNavigationSystem& operator=(const UPrimalNavigationSystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalNavigationSystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalNavigationSystem"); }

	void UpdateInvokers() { NativeCall<void>(this, "UPrimalNavigationSystem.UpdateInvokers()"); }
	const UClass* GetNavAreaAtLocation(const UE::Math::TVector<double>& Location, const UE::Math::TVector<double>& Extent, AActor* ForActor) { return NativeCall<const UClass*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, AActor*>(this, "UPrimalNavigationSystem.GetNavAreaAtLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*)", Location, Extent, ForActor); }
};
