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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGenericSmartObject"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGenericSmartObject"); }

};
