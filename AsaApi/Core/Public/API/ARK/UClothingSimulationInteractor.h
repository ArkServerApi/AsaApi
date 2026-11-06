#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UClothingSimulationInteractor : public UObject
{
public:
	UClothingSimulationInteractor() = delete;
	~UClothingSimulationInteractor() = delete;
	UClothingSimulationInteractor(const UClothingSimulationInteractor&) = delete;
	UClothingSimulationInteractor& operator=(const UClothingSimulationInteractor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UClothingSimulationInteractor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UClothingSimulationInteractor"); }
	int& LastNumClothsField() { return *GetNativePointerField<int*>(this, "UClothingSimulationInteractor.LastNumCloths"); }
	int& LastNumKinematicParticlesField() { return *GetNativePointerField<int*>(this, "UClothingSimulationInteractor.LastNumKinematicParticles"); }
	int& LastNumDynamicParticlesField() { return *GetNativePointerField<int*>(this, "UClothingSimulationInteractor.LastNumDynamicParticles"); }
	int& LastNumIterationsField() { return *GetNativePointerField<int*>(this, "UClothingSimulationInteractor.LastNumIterations"); }
	int& LastNumSubstepsField() { return *GetNativePointerField<int*>(this, "UClothingSimulationInteractor.LastNumSubsteps"); }
	float& LastSimulationTimeField() { return *GetNativePointerField<float*>(this, "UClothingSimulationInteractor.LastSimulationTime"); }
	UClothingInteractor* CreateClothingInteractor() { return NativeCall<UClothingInteractor*>(this, "UClothingSimulationInteractor.CreateClothingInteractor()"); }
	void SetAnimDriveSpringStiffness(float InStiffness) { NativeCall<void, float>(this, "UClothingSimulationInteractor.SetAnimDriveSpringStiffness(float)", InStiffness); }
	void CreateClothingInteractor(const UClothingAssetBase* ClothingAsset, int ClothingId) { NativeCall<void, const UClothingAssetBase*, int>(this, "UClothingSimulationInteractor.CreateClothingInteractor(UClothingAssetBase*,int)", ClothingAsset, ClothingId); }
	void DisableGravityOverride() { NativeCall<void>(this, "UClothingSimulationInteractor.DisableGravityOverride()"); }
	void Sync(IClothingSimulation* Simulation, IClothingSimulationContext* __formal) { NativeCall<void, IClothingSimulation*, IClothingSimulationContext*>(this, "UClothingSimulationInteractor.Sync(IClothingSimulation*,IClothingSimulationContext*)", Simulation, __formal); }
	void EnableGravityOverride(const UE::Math::TVector<double>& InVector) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UClothingSimulationInteractor.EnableGravityOverride(UE::Math::TVector<double>&)", InVector); }
	void Sync(IClothingSimulationInterface* Simulation, const IClothingSimulationContext* Context) { NativeCall<void, IClothingSimulationInterface*, const IClothingSimulationContext*>(this, "UClothingSimulationInteractor.Sync(IClothingSimulationInterface*,IClothingSimulationContext*)", Simulation, Context); }
	void PhysicsAssetUpdated() { NativeCall<void>(this, "UClothingSimulationInteractor.PhysicsAssetUpdated()"); }
	void SetNumIterations(int NumIterations) { NativeCall<void, int>(this, "UClothingSimulationInteractor.SetNumIterations(int)", NumIterations); }
	void ClothConfigUpdated() { NativeCall<void>(this, "UClothingSimulationInteractor.ClothConfigUpdated()"); }
	void SetNumSubsteps(int NumSubsteps) { NativeCall<void, int>(this, "UClothingSimulationInteractor.SetNumSubsteps(int)", NumSubsteps); }
	void SetMaxNumIterations(int MaxNumIterations) { NativeCall<void, int>(this, "UClothingSimulationInteractor.SetMaxNumIterations(int)", MaxNumIterations); }
};
