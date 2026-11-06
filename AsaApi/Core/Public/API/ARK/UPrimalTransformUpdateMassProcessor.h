#pragma once
#include "BulkForward.h"
#include "UMassProcessor.h"

struct UPrimalTransformUpdateMassProcessor : public UMassProcessor
{
public:
	UPrimalTransformUpdateMassProcessor() = delete;
	~UPrimalTransformUpdateMassProcessor() = delete;
	UPrimalTransformUpdateMassProcessor(const UPrimalTransformUpdateMassProcessor&) = delete;
	UPrimalTransformUpdateMassProcessor& operator=(const UPrimalTransformUpdateMassProcessor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalTransformUpdateMassProcessor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalTransformUpdateMassProcessor"); }

	bool& OddsField() { return *GetNativePointerField<bool*>(this, "UPrimalTransformUpdateMassProcessor.Odds"); }
	FMassEntityQuery& QueryField() { return *GetNativePointerField<FMassEntityQuery*>(this, "UPrimalTransformUpdateMassProcessor.Query"); }
	void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) { NativeCall<void, FMassEntityManager&, FMassExecutionContext&>(this, "UPrimalTransformUpdateMassProcessor.Execute(FMassEntityManager&,FMassExecutionContext&)", EntityManager, Context); }
};
