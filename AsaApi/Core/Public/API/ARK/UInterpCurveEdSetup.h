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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	int& ActiveTabField() { return *GetNativePointerField<int*>(this, "UInterpCurveEdSetup.ActiveTab"); }
	void PostLoad() { NativeCall<void>(this, "UInterpCurveEdSetup.PostLoad()"); }
};
