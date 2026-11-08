#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UNavAreaBase : public UObject
{
public:
	UNavAreaBase() = delete;
	~UNavAreaBase() = delete;
	UNavAreaBase(const UNavAreaBase&) = delete;
	UNavAreaBase& operator=(const UNavAreaBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavAreaBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavAreaBase"); }
	int& NavAreaPriorityField() { return *GetNativePointerField<int*>(this, "UNavAreaBase.NavAreaPriority"); }
	BitFieldValue<bool, unsigned char> bIsMetaArea() { return { this, "UNavAreaBase.bIsMetaArea"}; }
	bool IsLowArea() { return NativeCall<bool>(this, "UNavAreaBase.IsLowArea()"); }
	bool IsMetaArea() { return NativeCall<bool>(this, "UNavAreaBase.IsMetaArea()"); }
};
