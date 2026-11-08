#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADatasmithImportedSequencesActor : public AActor
{
public:
	ADatasmithImportedSequencesActor() = delete;
	~ADatasmithImportedSequencesActor() = delete;
	ADatasmithImportedSequencesActor(const ADatasmithImportedSequencesActor&) = delete;
	ADatasmithImportedSequencesActor& operator=(const ADatasmithImportedSequencesActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADatasmithImportedSequencesActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADatasmithImportedSequencesActor"); }

};
