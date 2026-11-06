#pragma once
#include <cstddef>


struct FStaticConstructObjectParameters
{
	const UClass* Class;
	UObject* Outer;
	FName Name;
	EObjectFlags SetFlags = EObjectFlags::RF_NoFlags;
	EInternalObjectFlags InternalSetFlags = EInternalObjectFlags::None;
	bool bCopyTransientsFromClassDefaults = false;
	bool bAssumeTemplateIsArchetype = false;
	UObject* Template = nullptr;
	FObjectInstancingGraph* InstanceGraph = nullptr;
	UPackage* ExternalPackage = nullptr;
	TFunction<void __cdecl(void)> PropertyInitCallback;
	int SerialNumber = 0;
	void* SubobjectOverrides = nullptr;
};
static_assert(sizeof(FStaticConstructObjectParameters) == 128);
static_assert(alignof(FStaticConstructObjectParameters) == 16);
static_assert(offsetof(FStaticConstructObjectParameters, Class) == 0);
static_assert(offsetof(FStaticConstructObjectParameters, Outer) == 8);
static_assert(offsetof(FStaticConstructObjectParameters, Name) == 16);
static_assert(offsetof(FStaticConstructObjectParameters, SetFlags) == 24);
static_assert(offsetof(FStaticConstructObjectParameters, InternalSetFlags) == 28);
static_assert(offsetof(FStaticConstructObjectParameters, bCopyTransientsFromClassDefaults) == 32);
static_assert(offsetof(FStaticConstructObjectParameters, bAssumeTemplateIsArchetype) == 33);
static_assert(offsetof(FStaticConstructObjectParameters, Template) == 40);
static_assert(offsetof(FStaticConstructObjectParameters, InstanceGraph) == 48);
static_assert(offsetof(FStaticConstructObjectParameters, ExternalPackage) == 56);
static_assert(offsetof(FStaticConstructObjectParameters, PropertyInitCallback) == 64);
static_assert(offsetof(FStaticConstructObjectParameters, SerialNumber) == 112);
static_assert(offsetof(FStaticConstructObjectParameters, SubobjectOverrides) == 120);
