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
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASplineActor"); }

	USplineComponent*& SplineComponentField() { return *GetNativePointerField<USplineComponent**>(this, "ASplineActor.SplineComponent"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASplineActor"); }
};
