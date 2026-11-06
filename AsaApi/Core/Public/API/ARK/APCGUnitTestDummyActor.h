#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APCGUnitTestDummyActor : public AActor
{
public:
	APCGUnitTestDummyActor() = delete;
	~APCGUnitTestDummyActor() = delete;
	APCGUnitTestDummyActor(const APCGUnitTestDummyActor&) = delete;
	APCGUnitTestDummyActor& operator=(const APCGUnitTestDummyActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGUnitTestDummyActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGUnitTestDummyActor"); }

	int& IntPropertyField() { return *GetNativePointerField<int*>(this, "APCGUnitTestDummyActor.IntProperty"); }
	float& FloatPropertyField() { return *GetNativePointerField<float*>(this, "APCGUnitTestDummyActor.FloatProperty"); }
	__int64& Int64PropertyField() { return *GetNativePointerField<__int64*>(this, "APCGUnitTestDummyActor.Int64Property"); }
	double& DoublePropertyField() { return *GetNativePointerField<double*>(this, "APCGUnitTestDummyActor.DoubleProperty"); }
	bool& BoolPropertyField() { return *GetNativePointerField<bool*>(this, "APCGUnitTestDummyActor.BoolProperty"); }
	FName& NamePropertyField() { return *GetNativePointerField<FName*>(this, "APCGUnitTestDummyActor.NameProperty"); }
	FString& StringPropertyField() { return *GetNativePointerField<FString*>(this, "APCGUnitTestDummyActor.StringProperty"); }
	EPCGUnitTestDummyEnum& EnumPropertyField() { return *GetNativePointerField<EPCGUnitTestDummyEnum*>(this, "APCGUnitTestDummyActor.EnumProperty"); }
	UE::Math::TVector<double>& VectorPropertyField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APCGUnitTestDummyActor.VectorProperty"); }
	UE::Math::TRotator<double>& RotatorPropertyField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APCGUnitTestDummyActor.RotatorProperty"); }
	FSoftObjectPath& SoftObjectPathPropertyField() { return *GetNativePointerField<FSoftObjectPath*>(this, "APCGUnitTestDummyActor.SoftObjectPathProperty"); }
	FSoftClassPath& SoftClassPathPropertyField() { return *GetNativePointerField<FSoftClassPath*>(this, "APCGUnitTestDummyActor.SoftClassPathProperty"); }
	UE::Math::TVector2<double>& Vector2PropertyField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APCGUnitTestDummyActor.Vector2Property"); }
	FColor& ColorPropertyField() { return *GetNativePointerField<FColor*>(this, "APCGUnitTestDummyActor.ColorProperty"); }
	FLinearColor& LinearColorPropertyField() { return *GetNativePointerField<FLinearColor*>(this, "APCGUnitTestDummyActor.LinearColorProperty"); }
	FPCGTestMyColorStruct& PCGColorPropertyField() { return *GetNativePointerField<FPCGTestMyColorStruct*>(this, "APCGUnitTestDummyActor.PCGColorProperty"); }
	TArray<int, TSizedDefaultAllocator<32> >& ArrayOfIntsPropertyField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APCGUnitTestDummyActor.ArrayOfIntsProperty"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& ArrayOfVectorsPropertyField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "APCGUnitTestDummyActor.ArrayOfVectorsProperty"); }
	FPCGDummyGetPropertyStruct& DummyStructField() { return *GetNativePointerField<FPCGDummyGetPropertyStruct*>(this, "APCGUnitTestDummyActor.DummyStruct"); }
	TArray<int, TSizedDefaultAllocator<32> >& SetOfIntsPropertyField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APCGUnitTestDummyActor.SetOfIntsProperty"); }
};
