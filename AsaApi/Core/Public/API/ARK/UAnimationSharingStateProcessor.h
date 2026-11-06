#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UAnimationSharingStateProcessor : public UObject
{
public:
	UAnimationSharingStateProcessor() = delete;
	~UAnimationSharingStateProcessor() = delete;
	UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&) = delete;
	UAnimationSharingStateProcessor& operator=(const UAnimationSharingStateProcessor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
