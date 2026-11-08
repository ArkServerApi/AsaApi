#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AWorldDataLayers : public AInfo
{
public:
	AWorldDataLayers() = delete;
	~AWorldDataLayers() = delete;
	AWorldDataLayers(const AWorldDataLayers&) = delete;
	AWorldDataLayers& operator=(const AWorldDataLayers&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldDataLayers"); }

	FWorldDataLayersEffectiveStates& EffectiveStatesField() { return *GetNativePointerField<FWorldDataLayersEffectiveStates*>(this, "AWorldDataLayers.EffectiveStates"); }
	int& DataLayersStateEpochField() { return *GetNativePointerField<int*>(this, "AWorldDataLayers.DataLayersStateEpoch"); }
	void ResolveEffectiveRuntimeState(const UDataLayerInstance* InDataLayerInstance, bool bInNotifyChange) { NativeCall<void, const UDataLayerInstance*, bool>(this, "AWorldDataLayers.ResolveEffectiveRuntimeState(UDataLayerInstance*,bool)", InDataLayerInstance, bInNotifyChange); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWorldDataLayers._getUObject()"); }
	bool SetDataLayerRuntimeState(const UDataLayerInstance* InDataLayerInstance, EDataLayerRuntimeState InState, bool bInIsRecursive) { return NativeCall<bool, const UDataLayerInstance*, EDataLayerRuntimeState, bool>(this, "AWorldDataLayers.SetDataLayerRuntimeState(UDataLayerInstance*,EDataLayerRuntimeState,bool)", InDataLayerInstance, InState, bInIsRecursive); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AWorldDataLayers.Serialize(FArchive&)", Ar); }
	TArray<UDataLayerInstance const*, TSizedDefaultAllocator<32> >* GetDataLayerInstances(TArray<UDataLayerInstance const*, TSizedDefaultAllocator<32> >* result, const TArray<FName, TSizedDefaultAllocator<32> >& InDataLayerInstanceNames) { return NativeCall<TArray<UDataLayerInstance const*, TSizedDefaultAllocator<32> >*, TArray<UDataLayerInstance const*, TSizedDefaultAllocator<32> >*, const TArray<FName, TSizedDefaultAllocator<32> >&>(this, "AWorldDataLayers.GetDataLayerInstances(TArray<FName,TSizedDefaultAllocator<32>>&)", result, InDataLayerInstanceNames); }
	EDataLayerRuntimeState GetDataLayerRuntimeStateByName(FName InDataLayerName) { return NativeCall<EDataLayerRuntimeState, FName>(this, "AWorldDataLayers.GetDataLayerRuntimeStateByName(FName)", InDataLayerName); }
	const UDataLayerInstance* GetDataLayerInstance(const FName& InDataLayerInstanceName) { return NativeCall<const UDataLayerInstance*, const FName&>(this, "AWorldDataLayers.GetDataLayerInstance(FName&)", InDataLayerInstanceName); }
	const UDataLayerInstance* GetDataLayerInstance(const UDataLayerAsset* InDataLayerAsset) { return NativeCall<const UDataLayerInstance*, const UDataLayerAsset*>(this, "AWorldDataLayers.GetDataLayerInstance(UDataLayerAsset*)", InDataLayerAsset); }
	bool AddExternalDataLayerInstance(UExternalDataLayerInstance* ExternalDataLayerInstance) { return NativeCall<bool, UExternalDataLayerInstance*>(this, "AWorldDataLayers.AddExternalDataLayerInstance(UExternalDataLayerInstance*)", ExternalDataLayerInstance); }
	const UExternalDataLayerInstance* GetRootExternalDataLayerInstance() { return NativeCall<const UExternalDataLayerInstance*>(this, "AWorldDataLayers.GetRootExternalDataLayerInstance()"); }
	void UpdateAccelerationTable(const UDataLayerInstance* DataLayerInstance, bool bIsAdding) { NativeCall<void, const UDataLayerInstance*, bool>(this, "AWorldDataLayers.UpdateAccelerationTable(UDataLayerInstance*,bool)", DataLayerInstance, bIsAdding); }
	bool RemoveExternalDataLayerInstance(UExternalDataLayerInstance* ExternalDataLayerInstance) { return NativeCall<bool, UExternalDataLayerInstance*>(this, "AWorldDataLayers.RemoveExternalDataLayerInstance(UExternalDataLayerInstance*)", ExternalDataLayerInstance); }
	const FWorldDataLayersEffectiveStates& GetEffectiveStates() { return NativeCall<const FWorldDataLayersEffectiveStates&>(this, "AWorldDataLayers.GetEffectiveStates()"); }
	void PostLoad() { NativeCall<void>(this, "AWorldDataLayers.PostLoad()"); }
	void OnDataLayerRuntimeStateChanged_Implementation(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState) { NativeCall<void, const UDataLayerInstance*, EDataLayerRuntimeState>(this, "AWorldDataLayers.OnDataLayerRuntimeStateChanged_Implementation(UDataLayerInstance*,EDataLayerRuntimeState)", InDataLayer, InState); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldDataLayers"); }
};
