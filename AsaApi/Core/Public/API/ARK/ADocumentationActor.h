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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	EDocumentationActorType::Type& LinkTypeField() { return *GetNativePointerField<EDocumentationActorType::Type*>(this, "ADocumentationActor.LinkType"); }
};
