#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASplineActor : public AActor
{
public:
	ASplineActor() = delete;
	~ASplineActor() = delete;
	ASplineActor(const ASplineActor&) = delete;
	ASplineActor& operator=(const ASplineActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	USplineComponent*& SplineComponentField() { return *GetNativePointerField<USplineComponent**>(this, "ASplineActor.SplineComponent"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ASplineActor.StaticClass()"); }
};
