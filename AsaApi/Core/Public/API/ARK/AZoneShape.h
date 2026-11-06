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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsEditorOnly() { return NativeCall<bool>(this, "AZoneShape.IsEditorOnly()"); }
};
