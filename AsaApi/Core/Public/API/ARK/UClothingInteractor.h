#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UClothingInteractor : public UObject
{
public:
	UClothingInteractor() = delete;
	~UClothingInteractor() = delete;
	UClothingInteractor(const UClothingInteractor&) = delete;
	UClothingInteractor& operator=(const UClothingInteractor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UClothingInteractor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UClothingInteractor"); }
	int& ClothingIdField() { return *GetNativePointerField<int*>(this, "UClothingInteractor.ClothingId"); }
	void Sync(IClothingSimulation* Simulation) { NativeCall<void, IClothingSimulation*>(this, "UClothingInteractor.Sync(IClothingSimulation*)", Simulation); }
	void Sync(IClothingSimulationInterface* Simulation) { NativeCall<void, IClothingSimulationInterface*>(this, "UClothingInteractor.Sync(IClothingSimulationInterface*)", Simulation); }
};
