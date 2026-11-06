#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UNavLinkDefinition : public UObject
{
public:
	UNavLinkDefinition() = delete;
	~UNavLinkDefinition() = delete;
	UNavLinkDefinition(const UNavLinkDefinition&) = delete;
	UNavLinkDefinition& operator=(const UNavLinkDefinition&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNavLinkDefinition.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	BitFieldValue<bool, unsigned __int32> bHasInitializedAreaClasses() { return { this, "UNavLinkDefinition.bHasInitializedAreaClasses"}; }
	BitFieldValue<bool, unsigned __int32> bHasDeterminedMetaAreaClass() { return { this, "UNavLinkDefinition.bHasDeterminedMetaAreaClass"}; }
	BitFieldValue<bool, unsigned __int32> bHasMetaAreaClass() { return { this, "UNavLinkDefinition.bHasMetaAreaClass"}; }
	BitFieldValue<bool, unsigned __int32> bHasDeterminedAdjustableLinks() { return { this, "UNavLinkDefinition.bHasDeterminedAdjustableLinks"}; }
	BitFieldValue<bool, unsigned __int32> bHasAdjustableLinks() { return { this, "UNavLinkDefinition.bHasAdjustableLinks"}; }
	void InitializeAreaClass() { NativeCall<void>(this, "UNavLinkDefinition.InitializeAreaClass()"); }
};
