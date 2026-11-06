#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AInternalToolFrameworkActor : public AActor
{
public:
	AInternalToolFrameworkActor() = delete;
	~AInternalToolFrameworkActor() = delete;
	AInternalToolFrameworkActor(const AInternalToolFrameworkActor&) = delete;
	AInternalToolFrameworkActor& operator=(const AInternalToolFrameworkActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AInternalToolFrameworkActor"); }

	bool& bIsSelectableInEditorField() { return *GetNativePointerField<bool*>(this, "AInternalToolFrameworkActor.bIsSelectableInEditor"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AInternalToolFrameworkActor"); }
};
