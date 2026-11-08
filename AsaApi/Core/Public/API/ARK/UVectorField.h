#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UVectorField : public UObject
{
public:
	UVectorField() = delete;
	~UVectorField() = delete;
	UVectorField(const UVectorField&) = delete;
	UVectorField& operator=(const UVectorField&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVectorField"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVectorField"); }
	float& IntensityField() { return *GetNativePointerField<float*>(this, "UVectorField.Intensity"); }
	void InitInstance(FVectorFieldInstance* Instance, bool bPreviewInstance) { NativeCall<void, FVectorFieldInstance*, bool>(this, "UVectorField.InitInstance(FVectorFieldInstance*,bool)", Instance, bPreviewInstance); }
};
