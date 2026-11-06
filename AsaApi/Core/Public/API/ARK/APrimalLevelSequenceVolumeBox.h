#pragma once
#include "BulkForward.h"
#include "APrimalLevelSequenceVolumeBase.h"

struct APrimalLevelSequenceVolumeBox : public APrimalLevelSequenceVolumeBase
{
public:
	APrimalLevelSequenceVolumeBox() = delete;
	~APrimalLevelSequenceVolumeBox() = delete;
	APrimalLevelSequenceVolumeBox(const APrimalLevelSequenceVolumeBox&) = delete;
	APrimalLevelSequenceVolumeBox& operator=(const APrimalLevelSequenceVolumeBox&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalLevelSequenceVolumeBox"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalLevelSequenceVolumeBox"); }

	UBoxComponent*& BoxComponentField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalLevelSequenceVolumeBox.BoxComponent"); }
	float CalculateWeight(UE::Math::TVector<double>& Point) { return NativeCall<float, UE::Math::TVector<double>&>(this, "APrimalLevelSequenceVolumeBox.CalculateWeight(UE::Math::TVector<double>&)", Point); }
};
