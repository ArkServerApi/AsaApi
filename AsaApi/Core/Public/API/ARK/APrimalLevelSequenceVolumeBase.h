#pragma once
#include "BulkForward.h"
#include "ALevelSequenceActor.h"

struct APrimalLevelSequenceVolumeBase : public ALevelSequenceActor
{
public:
	APrimalLevelSequenceVolumeBase() = delete;
	~APrimalLevelSequenceVolumeBase() = delete;
	APrimalLevelSequenceVolumeBase(const APrimalLevelSequenceVolumeBase&) = delete;
	APrimalLevelSequenceVolumeBase& operator=(const APrimalLevelSequenceVolumeBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalLevelSequenceVolumeBase"); }

	float& BlendDistanceField() { return *GetNativePointerField<float*>(this, "APrimalLevelSequenceVolumeBase.BlendDistance"); }
	int& ViewIndexField() { return *GetNativePointerField<int*>(this, "APrimalLevelSequenceVolumeBase.ViewIndex"); }
	bool& bPreviewInEditorViewportField() { return *GetNativePointerField<bool*>(this, "APrimalLevelSequenceVolumeBase.bPreviewInEditorViewport"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalLevelSequenceVolumeBase.Tick(float)", DeltaSeconds); }
	float CalculateWeight(UE::Math::TVector<double>& Point) { return NativeCall<float, UE::Math::TVector<double>&>(this, "APrimalLevelSequenceVolumeBase.CalculateWeight(UE::Math::TVector<double>&)", Point); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "APrimalLevelSequenceVolumeBase.ShouldTickIfViewportsOnly()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalLevelSequenceVolumeBase"); }
};
