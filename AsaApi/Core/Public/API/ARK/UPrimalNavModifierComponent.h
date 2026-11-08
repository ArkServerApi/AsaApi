#pragma once
#include "BulkForward.h"
#include "UNavModifierComponent.h"

struct UPrimalNavModifierComponent : public UNavModifierComponent
{
public:
	UPrimalNavModifierComponent() = delete;
	~UPrimalNavModifierComponent() = delete;
	UPrimalNavModifierComponent(const UPrimalNavModifierComponent&) = delete;
	UPrimalNavModifierComponent& operator=(const UPrimalNavModifierComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalNavModifierComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalNavModifierComponent"); }

	UE::Math::TVector<double>& FailsafeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalNavModifierComponent.FailsafeLocation"); }
	void SetFailsafeExtentAndLocation(const UE::Math::TVector<double>& InExtent, const UE::Math::TVector<double>& InLocation) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UPrimalNavModifierComponent.SetFailsafeExtentAndLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", InExtent, InLocation); }
	void CalcAndCacheBounds() { NativeCall<void>(this, "UPrimalNavModifierComponent.CalcAndCacheBounds()"); }
	void GetFailsafeExtentAndLocation(UE::Math::TVector<double>& OutExtent, UE::Math::TVector<double>& OutLocation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "UPrimalNavModifierComponent.GetFailsafeExtentAndLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OutExtent, OutLocation); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UPrimalNavModifierComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
};
