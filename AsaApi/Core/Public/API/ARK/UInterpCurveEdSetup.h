#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UInterpCurveEdSetup : public UObject
{
public:
	UInterpCurveEdSetup() = delete;
	~UInterpCurveEdSetup() = delete;
	UInterpCurveEdSetup(const UInterpCurveEdSetup&) = delete;
	UInterpCurveEdSetup& operator=(const UInterpCurveEdSetup&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInterpCurveEdSetup"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInterpCurveEdSetup"); }
	int& ActiveTabField() { return *GetNativePointerField<int*>(this, "UInterpCurveEdSetup.ActiveTab"); }
	void PostLoad() { NativeCall<void>(this, "UInterpCurveEdSetup.PostLoad()"); }
};
