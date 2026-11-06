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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimationSharingStateProcessor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimationSharingStateProcessor"); }

};
