#pragma once
#include "BulkForward.h"
#include "UFieldNodeVector.h"

struct URandomVector : public UFieldNodeVector
{
public:
	URandomVector() = delete;
	~URandomVector() = delete;
	URandomVector(const URandomVector&) = delete;
	URandomVector& operator=(const URandomVector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URandomVector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URandomVector"); }

	float& MagnitudeField() { return *GetNativePointerField<float*>(this, "URandomVector.Magnitude"); }
	FFieldNodeBase* NewEvaluationGraph(TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >& Nodes) { return NativeCall<FFieldNodeBase*, TArray<UFieldNodeBase const*, TSizedDefaultAllocator<32> >&>(this, "URandomVector.NewEvaluationGraph(TArray<UFieldNodeBase*,TSizedDefaultAllocator<32>>&)", Nodes); }
};
