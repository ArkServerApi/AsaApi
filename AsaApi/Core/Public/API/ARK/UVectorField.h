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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UVectorField.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	float& IntensityField() { return *GetNativePointerField<float*>(this, "UVectorField.Intensity"); }
	void InitInstance(FVectorFieldInstance* Instance, bool bPreviewInstance) { NativeCall<void, FVectorFieldInstance*, bool>(this, "UVectorField.InitInstance(FVectorFieldInstance*,bool)", Instance, bPreviewInstance); }
};
