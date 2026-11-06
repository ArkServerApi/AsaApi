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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UAnimationSharingStateProcessor.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
