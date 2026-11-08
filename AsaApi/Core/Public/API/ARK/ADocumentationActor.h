#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADocumentationActor : public AActor
{
public:
	ADocumentationActor() = delete;
	~ADocumentationActor() = delete;
	ADocumentationActor(const ADocumentationActor&) = delete;
	ADocumentationActor& operator=(const ADocumentationActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADocumentationActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADocumentationActor"); }

	EDocumentationActorType::Type& LinkTypeField() { return *GetNativePointerField<EDocumentationActorType::Type*>(this, "ADocumentationActor.LinkType"); }
};
