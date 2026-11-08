#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UObject.h"

class UModel : public UObject
{
public:
	UModel() = delete;
	~UModel() = delete;
	UModel(const UModel&) = delete;
	UModel& operator=(const UModel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UModel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UModel"); }
	TArray<UE::Math::TVector<float>, TSizedDefaultAllocator<32> >& VectorsField() { return *GetNativePointerField<TArray<UE::Math::TVector<float>, TSizedDefaultAllocator<32> >*>(this, "UModel.Vectors"); }
	TArray<UE::Math::TVector<float>, TSizedDefaultAllocator<32> >& PointsField() { return *GetNativePointerField<TArray<UE::Math::TVector<float>, TSizedDefaultAllocator<32> >*>(this, "UModel.Points"); }
	FModelVertexBuffer& VertexBufferField() { return *GetNativePointerField<FModelVertexBuffer*>(this, "UModel.VertexBuffer"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UModel.ReleaseResourcesFence"); }
	bool& InvalidSurfacesField() { return *GetNativePointerField<bool*>(this, "UModel.InvalidSurfaces"); }
	bool& bOnlyRebuildMaterialIndexBuffersField() { return *GetNativePointerField<bool*>(this, "UModel.bOnlyRebuildMaterialIndexBuffers"); }
	bool& bInvalidForStaticLightingField() { return *GetNativePointerField<bool*>(this, "UModel.bInvalidForStaticLighting"); }
	unsigned int& NumUniqueVerticesField() { return *GetNativePointerField<unsigned int*>(this, "UModel.NumUniqueVertices"); }
	FGuid& LightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UModel.LightingGuid"); }
	bool& RootOutsideField() { return *GetNativePointerField<bool*>(this, "UModel.RootOutside"); }
	bool& LinkedField() { return *GetNativePointerField<bool*>(this, "UModel.Linked"); }
	int& NumSharedSidesField() { return *GetNativePointerField<int*>(this, "UModel.NumSharedSides"); }
	UE::Math::TBoxSphereBounds<double, double>& BoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UModel.Bounds"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UModel.PostDuplicate(bool)", bDuplicateForPIE); }
	void BeginReleaseResources() { NativeCall<void>(this, "UModel.BeginReleaseResources()"); }
	void BeginDestroy() { NativeCall<void>(this, "UModel.BeginDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "UModel.PostLoad()"); }
	void Initialize(ABrush* Owner, bool InRootOutside) { NativeCall<void, ABrush*, bool>(this, "UModel.Initialize(ABrush*,bool)", Owner, InRootOutside); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UModel.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UModel.IsReadyForFinishDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UModel.Serialize(FArchive&)", Ar); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UModel.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	bool IsAsset() { return NativeCall<bool>(this, "UModel.IsAsset()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UModel.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void EmptyModel(int EmptySurfInfo, int EmptyPolys) { NativeCall<void, int, int>(this, "UModel.EmptyModel(int,int)", EmptySurfInfo, EmptyPolys); }
	void UpdateVertices() { NativeCall<void>(this, "UModel.UpdateVertices()"); }
};
