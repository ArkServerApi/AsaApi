#pragma once
#include "BulkForward.h"
#include "UMassProcessor.h"

struct UMassObserverProcessor : public UMassProcessor
{
public:
	UMassObserverProcessor() = delete;
	~UMassObserverProcessor() = delete;
	UMassObserverProcessor(const UMassObserverProcessor&) = delete;
	UMassObserverProcessor& operator=(const UMassObserverProcessor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
