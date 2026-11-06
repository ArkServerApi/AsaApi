#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct USoundConcurrency : public UObject
{
public:
	USoundConcurrency() = delete;
	~USoundConcurrency() = delete;
	USoundConcurrency(const USoundConcurrency&) = delete;
	USoundConcurrency& operator=(const USoundConcurrency&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FSoundConcurrencySettings& ConcurrencyField() { return *GetNativePointerField<FSoundConcurrencySettings*>(this, "USoundConcurrency.Concurrency"); }
};
