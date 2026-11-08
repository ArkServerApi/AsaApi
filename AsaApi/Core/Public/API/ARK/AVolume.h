#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>


struct AVolume : AActor // : ABrush
{
	// Fields

	//TArray<FBoxOptimization, TSizedDefaultAllocator<32> >& BoxOptimizationField() { return *GetNativePointerField<TArray<FBoxOptimization, TSizedDefaultAllocator<32> >*>(this, "AVolume.BoxOptimization"); }

	// Bitfields

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AVolume"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAVolume();
	void PreInitializeComponents() { NativeCall<void>(this, "AVolume.PreInitializeComponents()"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AVolume.PreRegisterAllComponents()"); }
	char EncompassesPoint(UE::Math::TVector<double>* Point, float SphereRadius, float* OutDistanceToPoint, float* MaxDistanceLimit) { return NativeCall<char, UE::Math::TVector<double>*, float, float*, float*>(this, "AVolume.EncompassesPoint(UE::Math::TVector<double>,float,float*,float*)", Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AVolume"); }

	bool& bAllowCollisionComponentWithZeroRadiusField() { return *GetNativePointerField<bool*>(this, "AVolume.bAllowCollisionComponentWithZeroRadius"); }
	bool IsVolumeBrush() { return NativeCall<bool>(this, "AVolume.IsVolumeBrush()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AVolume.Serialize(FArchive&)", Ar); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AVolume.IsLevelBoundsRelevant()"); }
	UE::Math::TBoxSphereBounds<double, double>* GetBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "AVolume.GetBounds()", result); }
	bool IsStaticBrush() { return NativeCall<bool>(this, "AVolume.IsStaticBrush()"); }
};