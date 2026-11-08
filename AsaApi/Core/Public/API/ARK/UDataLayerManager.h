#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UDataLayerManager : public UObject
{
public:
	UDataLayerManager() = delete;
	~UDataLayerManager() = delete;
	UDataLayerManager(const UDataLayerManager&) = delete;
	UDataLayerManager& operator=(const UDataLayerManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataLayerManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataLayerManager"); }
	FOnDataLayerInstanceRuntimeStateChanged& OnDataLayerInstanceRuntimeStateChangedField() { return *GetNativePointerField<FOnDataLayerInstanceRuntimeStateChanged*>(this, "UDataLayerManager.OnDataLayerInstanceRuntimeStateChanged"); }
	void DumpDataLayers(FOutputDevice& OutputDevice) { NativeCall<void, FOutputDevice&>(this, "UDataLayerManager.DumpDataLayers(FOutputDevice&)", OutputDevice); }
	void Initialize() { NativeCall<void>(this, "UDataLayerManager.Initialize()"); }
	const UDataLayerInstance* GetDataLayerInstanceFromAsset(const UDataLayerAsset* InDataLayerAsset) { return NativeCall<const UDataLayerInstance*, const UDataLayerAsset*>(this, "UDataLayerManager.GetDataLayerInstanceFromAsset(UDataLayerAsset*)", InDataLayerAsset); }
	void DeInitialize() { NativeCall<void>(this, "UDataLayerManager.DeInitialize()"); }
	TArray<UDataLayerInstance*, TSizedDefaultAllocator<32> >* ConvertArgsToDataLayers(TArray<UDataLayerInstance*, TSizedDefaultAllocator<32> >* result, const TArray<FString, TSizedDefaultAllocator<32> >& InArgs) { return NativeCall<TArray<UDataLayerInstance*, TSizedDefaultAllocator<32> >*, TArray<UDataLayerInstance*, TSizedDefaultAllocator<32> >*, const TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UDataLayerManager.ConvertArgsToDataLayers(TArray<FString,TSizedDefaultAllocator<32>>&)", result, InArgs); }
	const UDataLayerInstance* GetDataLayerInstanceFromName(const FName& InDataLayerInstanceName) { return NativeCall<const UDataLayerInstance*, const FName&>(this, "UDataLayerManager.GetDataLayerInstanceFromName(FName&)", InDataLayerInstanceName); }
	const UDataLayerInstance* GetDataLayerInstanceFromAssetName(const FName& InDataLayerAssetPathName) { return NativeCall<const UDataLayerInstance*, const FName&>(this, "UDataLayerManager.GetDataLayerInstanceFromAssetName(FName&)", InDataLayerAssetPathName); }
	void DrawDataLayersStatus(UCanvas* Canvas, UE::Math::TVector2<double>& Offset) { NativeCall<void, UCanvas*, UE::Math::TVector2<double>&>(this, "UDataLayerManager.DrawDataLayersStatus(UCanvas*,UE::Math::TVector2<double>&)", Canvas, Offset); }
	AWorldDataLayers* GetWorldDataLayers() { return NativeCall<AWorldDataLayers*>(this, "UDataLayerManager.GetWorldDataLayers()"); }
	bool SetDataLayerInstanceRuntimeState(const UDataLayerInstance* InDataLayerInstance, EDataLayerRuntimeState InState, bool bInIsRecursive) { return NativeCall<bool, const UDataLayerInstance*, EDataLayerRuntimeState, bool>(this, "UDataLayerManager.SetDataLayerInstanceRuntimeState(UDataLayerInstance*,EDataLayerRuntimeState,bool)", InDataLayerInstance, InState, bInIsRecursive); }
};
