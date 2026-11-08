#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AEngineTestTickActor : public AActor
{
public:
	AEngineTestTickActor() = delete;
	~AEngineTestTickActor() = delete;
	AEngineTestTickActor(const AEngineTestTickActor&) = delete;
	AEngineTestTickActor& operator=(const AEngineTestTickActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AEngineTestTickActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AEngineTestTickActor"); }

	int& TickCountField() { return *GetNativePointerField<int*>(this, "AEngineTestTickActor.TickCount"); }
	int& TickOrderField() { return *GetNativePointerField<int*>(this, "AEngineTestTickActor.TickOrder"); }
	bool& bShouldIncrementTickCountField() { return *GetNativePointerField<bool*>(this, "AEngineTestTickActor.bShouldIncrementTickCount"); }
	bool& bShouldDoMathField() { return *GetNativePointerField<bool*>(this, "AEngineTestTickActor.bShouldDoMath"); }
	float& MathCounterField() { return *GetNativePointerField<float*>(this, "AEngineTestTickActor.MathCounter"); }
	float& MathIncrementField() { return *GetNativePointerField<float*>(this, "AEngineTestTickActor.MathIncrement"); }
	float& MathLimitField() { return *GetNativePointerField<float*>(this, "AEngineTestTickActor.MathLimit"); }
	void ResetState() { NativeCall<void>(this, "AEngineTestTickActor.ResetState()"); }
	void VirtualTick() { NativeCall<void>(this, "AEngineTestTickActor.VirtualTick()"); }
	void DoTick() { NativeCall<void>(this, "AEngineTestTickActor.DoTick()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AEngineTestTickActor.Tick(float)", DeltaSeconds); }
};
