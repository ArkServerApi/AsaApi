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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UAnimInstance.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
