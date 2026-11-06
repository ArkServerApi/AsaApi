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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
