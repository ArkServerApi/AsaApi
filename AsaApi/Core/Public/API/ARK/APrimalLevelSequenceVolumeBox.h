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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UBoxComponent*& BoxComponentField() { return *GetNativePointerField<UBoxComponent**>(this, "APrimalLevelSequenceVolumeBox.BoxComponent"); }
	float CalculateWeight(UE::Math::TVector<double>& Point) { return NativeCall<float, UE::Math::TVector<double>&>(this, "APrimalLevelSequenceVolumeBox.CalculateWeight(UE::Math::TVector<double>&)", Point); }
};
