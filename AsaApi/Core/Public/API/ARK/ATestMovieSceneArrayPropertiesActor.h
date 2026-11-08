#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ATestMovieSceneArrayPropertiesActor : public AActor
{
public:
	ATestMovieSceneArrayPropertiesActor() = delete;
	~ATestMovieSceneArrayPropertiesActor() = delete;
	ATestMovieSceneArrayPropertiesActor(const ATestMovieSceneArrayPropertiesActor&) = delete;
	ATestMovieSceneArrayPropertiesActor& operator=(const ATestMovieSceneArrayPropertiesActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATestMovieSceneArrayPropertiesActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATestMovieSceneArrayPropertiesActor"); }

	bool& TestBoolField() { return *GetNativePointerField<bool*>(this, "ATestMovieSceneArrayPropertiesActor.TestBool"); }
	int& TestInt32Field() { return *GetNativePointerField<int*>(this, "ATestMovieSceneArrayPropertiesActor.TestInt32"); }
	UE::Math::TVector<double>& TestVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ATestMovieSceneArrayPropertiesActor.TestVector"); }
	TArray<float, TSizedDefaultAllocator<32> >& MultipleFloatsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "ATestMovieSceneArrayPropertiesActor.MultipleFloats"); }
	FTestMovieSceneStruct& SingleStructField() { return *GetNativePointerField<FTestMovieSceneStruct*>(this, "ATestMovieSceneArrayPropertiesActor.SingleStruct"); }
	FInstancedStruct& SingleInstancedStructField() { return *GetNativePointerField<FInstancedStruct*>(this, "ATestMovieSceneArrayPropertiesActor.SingleInstancedStruct"); }
	float& TestSetterFloatField() { return *GetNativePointerField<float*>(this, "ATestMovieSceneArrayPropertiesActor.TestSetterFloat"); }
	int& NumSetTestSetterFloatCallsField() { return *GetNativePointerField<int*>(this, "ATestMovieSceneArrayPropertiesActor.NumSetTestSetterFloatCalls"); }
};
