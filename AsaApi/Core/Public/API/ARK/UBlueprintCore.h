#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UBlueprintCore : public UObject
{
public:
	UBlueprintCore() = delete;
	~UBlueprintCore() = delete;
	UBlueprintCore(const UBlueprintCore&) = delete;
	UBlueprintCore& operator=(const UBlueprintCore&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UBlueprintCore.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	bool& bLegacyNeedToPurgeSkelRefsField() { return *GetNativePointerField<bool*>(this, "UBlueprintCore.bLegacyNeedToPurgeSkelRefs"); }
	FGuid& BlueprintGuidField() { return *GetNativePointerField<FGuid*>(this, "UBlueprintCore.BlueprintGuid"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UBlueprintCore.Serialize(FArchive&)", Ar); }
};
