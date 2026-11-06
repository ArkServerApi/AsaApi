#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AZoneShape : public AActor
{
public:
	AZoneShape() = delete;
	~AZoneShape() = delete;
	AZoneShape(const AZoneShape&) = delete;
	AZoneShape& operator=(const AZoneShape&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AZoneShape"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AZoneShape"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "AZoneShape.IsEditorOnly()"); }
};
