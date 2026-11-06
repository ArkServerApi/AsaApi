#pragma once


struct FStaticConstructObjectParameters
{
	const UClass* Class;
	UObject* Outer;
	FName Name;
	EObjectFlags SetFlags;
	EInternalObjectFlags InternalSetFlags;
	bool bCopyTransientsFromClassDefaults;
	bool bAssumeTemplateIsArchetype;
	UObject* Template;
	FObjectInstancingGraph* InstanceGraph;
	UPackage* ExternalPackage;
	TFunction<void __cdecl(void)> PropertyInitCallback;
	void* SubobjectOverrides;
};