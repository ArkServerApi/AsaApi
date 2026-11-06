#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGenericSmartObject : public AActor
{
public:
	AGenericSmartObject() = delete;
	~AGenericSmartObject() = delete;
	AGenericSmartObject(const AGenericSmartObject&) = delete;
	AGenericSmartObject& operator=(const AGenericSmartObject&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
