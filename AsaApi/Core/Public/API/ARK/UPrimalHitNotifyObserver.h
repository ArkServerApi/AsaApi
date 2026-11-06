#pragma once
#include "BulkForward.h"
#include "UMassObserverProcessor.h"

struct UPrimalHitNotifyObserver : public UMassObserverProcessor
{
public:
	UPrimalHitNotifyObserver() = delete;
	~UPrimalHitNotifyObserver() = delete;
	UPrimalHitNotifyObserver(const UPrimalHitNotifyObserver&) = delete;
	UPrimalHitNotifyObserver& operator=(const UPrimalHitNotifyObserver&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalHitNotifyObserver"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalHitNotifyObserver"); }

	bool& OddsField() { return *GetNativePointerField<bool*>(this, "UPrimalHitNotifyObserver.Odds"); }
	FMassEntityQuery& QueryField() { return *GetNativePointerField<FMassEntityQuery*>(this, "UPrimalHitNotifyObserver.Query"); }
	void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) { NativeCall<void, FMassEntityManager&, FMassExecutionContext&>(this, "UPrimalHitNotifyObserver.Execute(FMassEntityManager&,FMassExecutionContext&)", EntityManager, Context); }
};
