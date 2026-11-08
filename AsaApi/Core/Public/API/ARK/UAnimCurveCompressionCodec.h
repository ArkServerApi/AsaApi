#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAnimCurveCompressionCodec : public UObject
{
public:
	UAnimCurveCompressionCodec() = delete;
	~UAnimCurveCompressionCodec() = delete;
	UAnimCurveCompressionCodec(const UAnimCurveCompressionCodec&) = delete;
	UAnimCurveCompressionCodec& operator=(const UAnimCurveCompressionCodec&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimCurveCompressionCodec"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimCurveCompressionCodec"); }
	UAnimCurveCompressionCodec* GetCodec(const FString& Path) { return NativeCall<UAnimCurveCompressionCodec*, const FString&>(this, "UAnimCurveCompressionCodec.GetCodec(FString&)", Path); }
	float DecompressCurve(const FCompressedAnimSequence& AnimSeq, FName CurveName, float CurrentTime) { return NativeCall<float, const FCompressedAnimSequence&, FName, float>(this, "UAnimCurveCompressionCodec.DecompressCurve(FCompressedAnimSequence&,FName,float)", AnimSeq, CurveName, CurrentTime); }
	void DecompressCurves(const FCompressedAnimSequence& AnimSeq, FBlendedCurve& Curves, float CurrentTime) { NativeCall<void, const FCompressedAnimSequence&, FBlendedCurve&, float>(this, "UAnimCurveCompressionCodec.DecompressCurves(FCompressedAnimSequence&,FBlendedCurve&,float)", AnimSeq, Curves, CurrentTime); }
	bool ValidateCompressedData(UObject* DataOwner, const FCompressedAnimSequence& AnimSeq) { return NativeCall<bool, UObject*, const FCompressedAnimSequence&>(this, "UAnimCurveCompressionCodec.ValidateCompressedData(UObject*,FCompressedAnimSequence&)", DataOwner, AnimSeq); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAnimCurveCompressionCodec.Serialize(FArchive&)", Ar); }
};
