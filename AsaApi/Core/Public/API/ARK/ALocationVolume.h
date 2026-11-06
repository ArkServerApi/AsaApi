#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ALocationVolume : public AVolume
{
public:
	ALocationVolume() = delete;
	~ALocationVolume() = delete;
	ALocationVolume(const ALocationVolume&) = delete;
	ALocationVolume& operator=(const ALocationVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALocationVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALocationVolume"); }

	FColor& DebugColorField() { return *GetNativePointerField<FColor*>(this, "ALocationVolume.DebugColor"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "ALocationVolume.IsEditorOnly()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALocationVolume._getUObject()"); }
};
