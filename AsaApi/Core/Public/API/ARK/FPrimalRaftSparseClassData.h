#pragma once
#include "SparseForward.h"
#include "FPrimalDinoCharacterSparseClassData.h"

struct FPrimalRaftSparseClassData : FPrimalDinoCharacterSparseClassData
{
public:
	FPrimalRaftSparseClassData() = delete;
	~FPrimalRaftSparseClassData() = delete;
	FPrimalRaftSparseClassData(const FPrimalRaftSparseClassData&) = delete;
	FPrimalRaftSparseClassData& operator=(const FPrimalRaftSparseClassData&) = delete;

	TSubclassOf<APrimalEmitterSpawnable>& RaftSpawnEffectField() { return *GetNativePointerField<TSubclassOf<APrimalEmitterSpawnable>*>(this, "FPrimalRaftSparseClassData.RaftSpawnEffect"); }
	std::add_const_t<TSubclassOf < APrimalEmitterSpawnable >>& RaftSpawnEffectField() const { return *GetNativePointerField<TSubclassOf < APrimalEmitterSpawnable >*>(this, "FPrimalRaftSparseClassData.RaftSpawnEffect"); }

	float& SimpleBuoyancyZOffsetField() { return *GetNativePointerField<float*>(this, "FPrimalRaftSparseClassData.SimpleBuoyancyZOffset"); }
	std::add_const_t<float>& SimpleBuoyancyZOffsetField() const { return *GetNativePointerField<float*>(this, "FPrimalRaftSparseClassData.SimpleBuoyancyZOffset"); }

	float& SimpleBuoyancyLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalRaftSparseClassData.SimpleBuoyancyLocationInterpSpeed"); }
	std::add_const_t<float>& SimpleBuoyancyLocationInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalRaftSparseClassData.SimpleBuoyancyLocationInterpSpeed"); }

	float& SimpleBuoyancyRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FPrimalRaftSparseClassData.SimpleBuoyancyRotationInterpSpeed"); }
	std::add_const_t<float>& SimpleBuoyancyRotationInterpSpeedField() const { return *GetNativePointerField<float*>(this, "FPrimalRaftSparseClassData.SimpleBuoyancyRotationInterpSpeed"); }
};
