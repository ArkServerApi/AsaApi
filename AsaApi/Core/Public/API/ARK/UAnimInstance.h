#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UAnimInstance : public UObject
{
public:
	UAnimInstance() = delete;
	~UAnimInstance() = delete;
	UAnimInstance(const UAnimInstance&) = delete;
	UAnimInstance& operator=(const UAnimInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimInstance"); }

};
