#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UClothingSimulationFactory : public UObject
{
public:
	UClothingSimulationFactory() = delete;
	~UClothingSimulationFactory() = delete;
	UClothingSimulationFactory(const UClothingSimulationFactory&) = delete;
	UClothingSimulationFactory& operator=(const UClothingSimulationFactory&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UClothingSimulationFactory"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UClothingSimulationFactory"); }
	static UClothingSimulationFactory* GetClothingSimulationFactory(const UClothingAssetBase* InAsset) { return NativeCall<UClothingSimulationFactory*, const UClothingAssetBase*>(nullptr, "UClothingSimulationFactory.GetClothingSimulationFactory(UClothingAssetBase*)", InAsset); }
	bool SupportsAsset(UClothingAssetBase* InAsset) { return NativeCall<bool, UClothingAssetBase*>(this, "UClothingSimulationFactory.SupportsAsset(UClothingAssetBase*)", InAsset); }
	bool SupportsAsset(const UClothingAssetBase* InAsset) { return NativeCall<bool, const UClothingAssetBase*>(this, "UClothingSimulationFactory.SupportsAsset(UClothingAssetBase*)", InAsset); }
	UClothingSimulationInteractor* CreateInteractor() { return NativeCall<UClothingSimulationInteractor*>(this, "UClothingSimulationFactory.CreateInteractor()"); }
	const UEnum* GetWeightMapTargetEnum() { return NativeCall<const UEnum*>(this, "UClothingSimulationFactory.GetWeightMapTargetEnum()"); }
	void DestroySimulation(IClothingSimulation* InSimulation) { NativeCall<void, IClothingSimulation*>(this, "UClothingSimulationFactory.DestroySimulation(IClothingSimulation*)", InSimulation); }
	void DestroySimulation(IClothingSimulationInterface* InSimulation) { NativeCall<void, IClothingSimulationInterface*>(this, "UClothingSimulationFactory.DestroySimulation(IClothingSimulationInterface*)", InSimulation); }
};
