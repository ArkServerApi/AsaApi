#pragma once
#include "BulkForward.h"



struct UPrimalWorld : UObject
{
	// Fields

	int& FrameCounterField() { return *GetNativePointerField<int*>(this, "UPrimalWorld.FrameCounter"); }
	int& DinosDestroyedThisFrameField() { return *GetNativePointerField<int*>(this, "UPrimalWorld.DinosDestroyedThisFrame"); }
	FString& CurrentDayTimeField() { return *GetNativePointerField<FString*>(this, "UPrimalWorld.CurrentDayTime"); }
	//TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>*& InternalPrimitiveOctreeField() { return *GetNativePointerField<TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>**>(this, "UPrimalWorld.InternalPrimitiveOctree"); }
	//TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>* [18] & InternalSpecializedPrimitiveOctreeField() { return *GetNativePointerField<TOctree2<UPrimitiveComponent*, FInternalPrimitiveOctreeSemantics>* [18] *>(this, "UPrimalWorld.InternalSpecializedPrimitiveOctree"); }
	//TOctree2<UActorComponent*, FInternalActorCompOctreeSemantics>*& InternalActorComponentOctreeField() { return *GetNativePointerField<TOctree2<UActorComponent*, FInternalActorCompOctreeSemantics>**>(this, "UPrimalWorld.InternalActorComponentOctree"); }
	//TOctree2<FOctreeElementSimple*, FInternalSimpleOctreeSemantics>*& InternalSimpleOctreeField() { return *GetNativePointerField<TOctree2<FOctreeElementSimple*, FInternalSimpleOctreeSemantics>**>(this, "UPrimalWorld.InternalSimpleOctree"); }
	long double& LoadedAtTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.LoadedAtTimeSeconds"); }
	long double& LoadedAtPersistentTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.LoadedAtPersistentTime"); }
	long double& PersistentTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.PersistentTime"); }
	long double& ForceBlockLoadTimeoutField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.ForceBlockLoadTimeout"); }
	unsigned int& StasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisThisFrame"); }
	unsigned int& UnStasisThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.UnStasisThisFrame"); }
	unsigned int& StasisOssilationThisFrameField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisOssilationThisFrame"); }
	unsigned int& StasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisThisFrameMax"); }
	unsigned int& UnStasisThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.UnStasisThisFrameMax"); }
	unsigned int& StasisOssilationThisFrameMaxField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.StasisOssilationThisFrameMax"); }
	float& StasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.StasisThisFrameAvg"); }
	float& UnStasisThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.UnStasisThisFrameAvg"); }
	float& StasisOssilationThisFrameAvgField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.StasisOssilationThisFrameAvg"); }
	float& StasisMaxResetTimerField() { return *GetNativePointerField<float*>(this, "UPrimalWorld.StasisMaxResetTimer"); }
	unsigned int& LastUnstasisCountField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.LastUnstasisCount"); }
	unsigned int& LoadedSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.LoadedSaveIncrementor"); }
	unsigned int& CurrentSaveIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UPrimalWorld.CurrentSaveIncrementor"); }
	TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >& LocalStasisActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimalWorld.LocalStasisActors"); }
	long double& IgnoreForcedLevelAsDistanceStreamingEnabledUntilTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalWorld.IgnoreForcedLevelAsDistanceStreamingEnabledUntilTime"); }
	TArray<TWeakObjectPtr<APostProcessVolume>, TSizedDefaultAllocator<32> >& PreviousPostVolumesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APostProcessVolume>, TSizedDefaultAllocator<32> >*>(this, "UPrimalWorld.PreviousPostVolumes"); }
	//TMap<unsigned int, FProxyMeshContainer*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, FProxyMeshContainer*, 0> >& LinkedProxyMeshesField() { return *GetNativePointerField<TMap<unsigned int, FProxyMeshContainer*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, FProxyMeshContainer*, 0> >*>(this, "UPrimalWorld.LinkedProxyMeshes"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame() { return { this, "UPrimalWorld.bLoadedFromSaveGame" }; }
	BitFieldValue<bool, unsigned __int32> bWorldWasPlayerView() { return { this, "UPrimalWorld.bWorldWasPlayerView" }; }
	BitFieldValue<bool, unsigned __int32> bUseSimpleWorld() { return { this, "UPrimalWorld.bUseSimpleWorld" }; }
	BitFieldValue<bool, unsigned __int32> bBlockAllOnNextLevelStreamingProcess() { return { this, "UPrimalWorld.bBlockAllOnNextLevelStreamingProcess" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWorld"); }
	void ConstructOctree() { NativeCall<void>(this, "UPrimalWorld.ConstructOctree()"); }
	void UpdateInternalOctreeTransform(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UPrimalWorld.UpdateInternalOctreeTransform(UPrimitiveComponent*)", InComponent); }
	void RemoveFromInternalOctree(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UPrimalWorld.RemoveFromInternalOctree(UPrimitiveComponent*)", InComponent); }
	bool OverlapMultiInternalOctree(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* OutPrimitives, const FBoxCenterAndExtent* InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, const FBoxCenterAndExtent*, unsigned int, bool>(this, "UPrimalWorld.OverlapMultiInternalOctree(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&,FBoxCenterAndExtent&,unsignedint,bool)", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }
	int OverlapNumInternalOctree(const FBoxCenterAndExtent* InBounds, unsigned int InSearchMask) { return NativeCall<int, const FBoxCenterAndExtent*, unsigned int>(this, "UPrimalWorld.OverlapNumInternalOctree(FBoxCenterAndExtent&,unsignedint)", InBounds, InSearchMask); }
	void GetPrimitiveOctreeIterator(const UE::Math::TVector<double>* InLocation, float Extents, unsigned int InSearchMask, TFunction<void __cdecl(UPrimitiveComponent*)>* InFunc) { NativeCall<void, const UE::Math::TVector<double>*, float, unsigned int, TFunction<void __cdecl(UPrimitiveComponent*)>*>(this, "UPrimalWorld.GetPrimitiveOctreeIterator(UE::Math::TVector<double>&,float,unsignedint,TFunction<void__cdecl(UPrimitiveComponent*))", InLocation, Extents, InSearchMask, InFunc); }
	void GetPrimitiveOctreeIteratorEarlyOut(const UE::Math::TVector<double>* InLocation, float Extents, unsigned int InSearchMask, TFunction<bool __cdecl(UPrimitiveComponent*)>* InFunc) { NativeCall<void, const UE::Math::TVector<double>*, float, unsigned int, TFunction<bool __cdecl(UPrimitiveComponent*)>*>(this, "UPrimalWorld.GetPrimitiveOctreeIteratorEarlyOut(UE::Math::TVector<double>&,float,unsignedint,TFunction<bool__cdecl(UPrimitiveComponent*))", InLocation, Extents, InSearchMask, InFunc); }
	// 	void DestroyOctree() { NativeCall<void>(this, "UPrimalWorld.DestroyOctree()"); }
	// FUNCTION MISSING: UPrimalWorld.DestroyOctree()
	bool OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*, TSizedDefaultAllocator<32> >* OutPrimitives, const FBoxCenterAndExtent* InBounds, unsigned int InSearchMask, bool bDontClearOutArray) { return NativeCall<bool, TArray<FOctreeElementSimple*, TSizedDefaultAllocator<32> >*, const FBoxCenterAndExtent*, unsigned int, bool>(this, "UPrimalWorld.OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*,TSizedDefaultAllocator<32>>&,FBoxCenterAndExtent&,unsignedint,bool)", OutPrimitives, InBounds, InSearchMask, bDontClearOutArray); }

	bool& bFlushingLevelStreamingField() { return *GetNativePointerField<bool*>(this, "UPrimalWorld.bFlushingLevelStreaming"); }
	int& MaterialQualityAppliedField() { return *GetNativePointerField<int*>(this, "UPrimalWorld.MaterialQualityApplied"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWorld"); }

	FConsoleVariableSinkDelegate& ConsoleVariableSinkDelegateField() { return *GetNativePointerField<FConsoleVariableSinkDelegate*>(this, "UPrimalWorld.ConsoleVariableSinkDelegate"); }
	FConsoleVariableSinkDelegate& MaterialQualityChangedDelegateField() { return *GetNativePointerField<FConsoleVariableSinkDelegate*>(this, "UPrimalWorld.MaterialQualityChangedDelegate"); }
	FConsoleVariableSinkHandle& CVarDelegateHandleField() { return *GetNativePointerField<FConsoleVariableSinkHandle*>(this, "UPrimalWorld.CVarDelegateHandle"); }
	FGlobalMaterialParamOverrides& CombinedOverridesField() { return *GetNativePointerField<FGlobalMaterialParamOverrides*>(this, "UPrimalWorld.CombinedOverrides"); }
	void ConsoleVariableSink() { NativeCall<void>(this, "UPrimalWorld.ConsoleVariableSink()"); }
	void GetParameterCollectionInstances(TArray<UMaterialParameterCollectionInstance*, TSizedDefaultAllocator<32> >& OutParameterCollectionInstances) { NativeCall<void, TArray<UMaterialParameterCollectionInstance*, TSizedDefaultAllocator<32> >&>(this, "UPrimalWorld.GetParameterCollectionInstances(TArray<UMaterialParameterCollectionInstance*,TSizedDefaultAllocator<32>>&)", OutParameterCollectionInstances); }
	void ApplyGlobalMaterialParamOverrides(const FGlobalMaterialParamOverrides& Overrides) { NativeCall<void, const FGlobalMaterialParamOverrides&>(this, "UPrimalWorld.ApplyGlobalMaterialParamOverrides(FGlobalMaterialParamOverrides&)", Overrides); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimalWorld.BeginDestroy()"); }
	FSceneInterface* GetScene() { return NativeCall<FSceneInterface*>(this, "UPrimalWorld.GetScene()"); }
	void UpdateInternalSimpleOctreeTransform(FOctreeElementSimple* InElement) { NativeCall<void, FOctreeElementSimple*>(this, "UPrimalWorld.UpdateInternalSimpleOctreeTransform(FOctreeElementSimple*)", InElement); }
	void PostLoad() { NativeCall<void>(this, "UPrimalWorld.PostLoad()"); }
	void RemoveFromInternalSimpleOctree(FOctreeElementSimple* InElement) { NativeCall<void, FOctreeElementSimple*>(this, "UPrimalWorld.RemoveFromInternalSimpleOctree(FOctreeElementSimple*)", InElement); }
};