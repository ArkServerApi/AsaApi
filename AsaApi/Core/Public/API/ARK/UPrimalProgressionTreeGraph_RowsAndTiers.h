#pragma once
#include "BulkForward.h"
#include "UPrimalProgressionTreeGraph.h"

struct UPrimalProgressionTreeGraph_RowsAndTiers : public UPrimalProgressionTreeGraph
{
public:
	UPrimalProgressionTreeGraph_RowsAndTiers() = delete;
	~UPrimalProgressionTreeGraph_RowsAndTiers() = delete;
	UPrimalProgressionTreeGraph_RowsAndTiers(const UPrimalProgressionTreeGraph_RowsAndTiers&) = delete;
	UPrimalProgressionTreeGraph_RowsAndTiers& operator=(const UPrimalProgressionTreeGraph_RowsAndTiers&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeGraph_RowsAndTiers"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeGraph_RowsAndTiers"); }

	UPrimalProgressionTreeRowFeature*& RowTraitField() { return *GetNativePointerField<UPrimalProgressionTreeRowFeature**>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.RowTrait"); }
	UPrimalProgressionTreeTierFeature*& TierTraitField() { return *GetNativePointerField<UPrimalProgressionTreeTierFeature**>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.TierTrait"); }
};
