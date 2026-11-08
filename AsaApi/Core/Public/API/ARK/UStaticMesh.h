#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UStreamableRenderAsset.h"

struct UStaticMesh : public UStreamableRenderAsset
{
public:
	UStaticMesh() = delete;
	~UStaticMesh() = delete;
	UStaticMesh(const UStaticMesh&) = delete;
	UStaticMesh& operator=(const UStaticMesh&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStaticMesh"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStaticMesh"); }
	FPerQualityLevelInt& MinQualityLevelLODField() { return *GetNativePointerField<FPerQualityLevelInt*>(this, "UStaticMesh.MinQualityLevelLOD"); }
	FPerPlatformInt& MinLODField() { return *GetNativePointerField<FPerPlatformInt*>(this, "UStaticMesh.MinLOD"); }
	int& ElementToIgnoreForTexFactorField() { return *GetNativePointerField<int*>(this, "UStaticMesh.ElementToIgnoreForTexFactor"); }
	float& LightmapUVDensityField() { return *GetNativePointerField<float*>(this, "UStaticMesh.LightmapUVDensity"); }
	int& LightMapResolutionField() { return *GetNativePointerField<int*>(this, "UStaticMesh.LightMapResolution"); }
	int& LightMapCoordinateIndexField() { return *GetNativePointerField<int*>(this, "UStaticMesh.LightMapCoordinateIndex"); }
	int& MeshPaintTextureCoordinateIndexField() { return *GetNativePointerField<int*>(this, "UStaticMesh.MeshPaintTextureCoordinateIndex"); }
	int& MeshPaintTextureResolutionField() { return *GetNativePointerField<int*>(this, "UStaticMesh.MeshPaintTextureResolution"); }
	float& DistanceFieldSelfShadowBiasField() { return *GetNativePointerField<float*>(this, "UStaticMesh.DistanceFieldSelfShadowBias"); }
	int& LODForCollisionField() { return *GetNativePointerField<int*>(this, "UStaticMesh.LODForCollision"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UStaticMesh.ReleaseResourcesFence"); }
	FGuid& LightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UStaticMesh.LightingGuid"); }
	UE::Math::TVector<double>& PositiveBoundsExtensionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UStaticMesh.PositiveBoundsExtension"); }
	UE::Math::TVector<double>& NegativeBoundsExtensionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UStaticMesh.NegativeBoundsExtension"); }
	UE::Math::TBoxSphereBounds<double, double>& ExtendedBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UStaticMesh.ExtendedBounds"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UStaticMesh.StreamingDistanceMultiplier"); }
	int& FarOverrideLODField() { return *GetNativePointerField<int*>(this, "UStaticMesh.FarOverrideLOD"); }
	FPerPlatformBool& bRemovingLOD0FromCookField() { return *GetNativePointerField<FPerPlatformBool*>(this, "UStaticMesh.bRemovingLOD0FromCook"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UStaticMesh.CustomTag"); }
	BitFieldValue<bool, unsigned char> bGenerateMeshDistanceField() { return { this, "UStaticMesh.bGenerateMeshDistanceField"}; }
	BitFieldValue<bool, unsigned char> bStripComplexCollisionForConsole_DEPRECATED() { return { this, "UStaticMesh.bStripComplexCollisionForConsole_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bHasNavigationData() { return { this, "UStaticMesh.bHasNavigationData"}; }
	BitFieldValue<bool, unsigned char> bSupportUniformlyDistributedSampling() { return { this, "UStaticMesh.bSupportUniformlyDistributedSampling"}; }
	BitFieldValue<bool, unsigned char> bSupportPhysicalMaterialMasks() { return { this, "UStaticMesh.bSupportPhysicalMaterialMasks"}; }
	BitFieldValue<bool, unsigned char> bSupportRayTracing() { return { this, "UStaticMesh.bSupportRayTracing"}; }
	BitFieldValue<bool, unsigned char> bForceIntoHLOD() { return { this, "UStaticMesh.bForceIntoHLOD"}; }
	BitFieldValue<bool, unsigned char> bDoFastBuild() { return { this, "UStaticMesh.bDoFastBuild"}; }
	BitFieldValue<bool, unsigned char> bIsBuiltAtRuntime_DEPRECATED() { return { this, "UStaticMesh.bIsBuiltAtRuntime_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bRenderingResourcesInitialized() { return { this, "UStaticMesh.bRenderingResourcesInitialized"}; }
	BitFieldValue<bool, unsigned char> bAllowCPUAccess() { return { this, "UStaticMesh.bAllowCPUAccess"}; }
	BitFieldValue<bool, unsigned char> bSupportGpuUniformlyDistributedSampling() { return { this, "UStaticMesh.bSupportGpuUniformlyDistributedSampling"}; }
	BitFieldValue<bool, unsigned __int32> bReallyDoesWantLightMapUVs() { return { this, "UStaticMesh.bReallyDoesWantLightMapUVs"}; }
	BitFieldValue<bool, unsigned __int32> bHighQualityDistanceField() { return { this, "UStaticMesh.bHighQualityDistanceField"}; }
	BitFieldValue<bool, unsigned __int32> bCastFarShadow() { return { this, "UStaticMesh.bCastFarShadow"}; }
	BitFieldValue<bool, unsigned __int32> bAllowLODStreaming() { return { this, "UStaticMesh.bAllowLODStreaming"}; }
	BitFieldValue<bool, unsigned __int32> bPreventLODStreamingOnWindows() { return { this, "UStaticMesh.bPreventLODStreamingOnWindows"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreTriReductions() { return { this, "UStaticMesh.bIgnoreTriReductions"}; }
	BitFieldValue<bool, unsigned __int32> bForceAllowMeshStreaming() { return { this, "UStaticMesh.bForceAllowMeshStreaming"}; }
	void CalculateExtendedBounds() { NativeCall<void>(this, "UStaticMesh.CalculateExtendedBounds()"); }
	int GetNumNaniteTriangles() { return NativeCall<int>(this, "UStaticMesh.GetNumNaniteTriangles()"); }
	static UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer) { return NativeCall<UStaticMeshDescription*, UObject*>(nullptr, "UStaticMesh.CreateStaticMeshDescription(UObject*)", Outer); }
	int GetMaterialIndexFromImportedMaterialSlotName(FName ImportedMaterialSlotName) { return NativeCall<int, FName>(this, "UStaticMesh.GetMaterialIndexFromImportedMaterialSlotName(FName)", ImportedMaterialSlotName); }
	void CreateBodySetup() { NativeCall<void>(this, "UStaticMesh.CreateBodySetup()"); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UStaticMesh.CalcCumulativeLODSize(int)", NumLODs); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UStaticMesh.IsPostLoadThreadSafe()"); }
	void RequestUpdateCachedRenderState() { NativeCall<void>(this, "UStaticMesh.RequestUpdateCachedRenderState()"); }
	bool LegacyDecideIfLOD0ShouldExist() { return NativeCall<bool>(this, "UStaticMesh.LegacyDecideIfLOD0ShouldExist()"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UStaticMesh.IsNavigationRelevant()"); }
	int GetNumNaniteVertices() { return NativeCall<int>(this, "UStaticMesh.GetNumNaniteVertices()"); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UStaticMesh.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UStaticMesh.GetMaterial(int)", MaterialIndex); }
	UNavCollisionBase* GetNavCollision() { return NativeCall<UNavCollisionBase*>(this, "UStaticMesh.GetNavCollision()"); }
	UE::Math::TBoxSphereBounds<double, double>* GetBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "UStaticMesh.GetBounds()", result); }
	bool GetPhysicsTriMeshDataCheckComplex(FTriMeshCollisionData* CollisionData, bool bInUseAllTriData, bool bInCheckComplexCollisionMesh) { return NativeCall<bool, FTriMeshCollisionData*, bool, bool>(this, "UStaticMesh.GetPhysicsTriMeshDataCheckComplex(FTriMeshCollisionData*,bool,bool)", CollisionData, bInUseAllTriData, bInCheckComplexCollisionMesh); }
	bool HasPendingRenderResourceInitialization() { return NativeCall<bool>(this, "UStaticMesh.HasPendingRenderResourceInitialization()"); }
	bool HasNaniteFallbackMesh(EShaderPlatform ShaderPlatform) { return NativeCall<bool, EShaderPlatform>(this, "UStaticMesh.HasNaniteFallbackMesh(EShaderPlatform)", ShaderPlatform); }
	bool HasValidNaniteData() { return NativeCall<bool>(this, "UStaticMesh.HasValidNaniteData()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UStaticMesh.Serialize(FArchive&)", Ar); }
	bool DoesMipDataExist(int MipIndex) { return NativeCall<bool, int>(this, "UStaticMesh.DoesMipDataExist(int)", MipIndex); }
	int GetNumTriangles(int LODIndex) { return NativeCall<int, int>(this, "UStaticMesh.GetNumTriangles(int)", LODIndex); }
	void BuildFromMeshDescription(const FMeshDescription& MeshDescription, FStaticMeshLODResources& LODResources) { NativeCall<void, const FMeshDescription&, FStaticMeshLODResources&>(this, "UStaticMesh.BuildFromMeshDescription(FMeshDescription&,FStaticMeshLODResources&)", MeshDescription, LODResources); }
	static void OnLodStrippingQualityLevelChanged(IConsoleVariable* Variable) { NativeCall<void, IConsoleVariable*>(nullptr, "UStaticMesh.OnLodStrippingQualityLevelChanged(IConsoleVariable*)", Variable); }
	void AddSocket(UStaticMeshSocket* Socket) { NativeCall<void, UStaticMeshSocket*>(this, "UStaticMesh.AddSocket(UStaticMeshSocket*)", Socket); }
	void PostInitProperties() { NativeCall<void>(this, "UStaticMesh.PostInitProperties()"); }
	int GetNumVertices(int LODIndex) { return NativeCall<int, int>(this, "UStaticMesh.GetNumVertices(int)", LODIndex); }
	int GetNumTexCoords(int LODIndex) { return NativeCall<int, int>(this, "UStaticMesh.GetNumTexCoords(int)", LODIndex); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UStaticMesh.GetMaterialIndex(FName)", MaterialSlotName); }
	void ReleaseResources() { NativeCall<void>(this, "UStaticMesh.ReleaseResources()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UStaticMesh.IsReadyForFinishDestroy()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UStaticMesh.GetDesc()", result); }
	const FMeshUVChannelInfo* GetUVChannelData(int MaterialIndex) { return NativeCall<const FMeshUVChannelInfo*, int>(this, "UStaticMesh.GetUVChannelData(int)", MaterialIndex); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UStaticMesh.StreamOut(int)", NewMipCount); }
	const FStaticMeshLODResources& GetLODForExport(int LODIndex) { return NativeCall<const FStaticMeshLODResources&, int>(this, "UStaticMesh.GetLODForExport(int)", LODIndex); }
	bool HasValidRenderData(bool bCheckLODForVerts, int LODIndex) { return NativeCall<bool, bool, int>(this, "UStaticMesh.HasValidRenderData(bool,int)", bCheckLODForVerts, LODIndex); }
	int GetNumSections(int InLOD) { return NativeCall<int, int>(this, "UStaticMesh.GetNumSections(int)", InLOD); }
	void RecreateNavCollision() { NativeCall<void>(this, "UStaticMesh.RecreateNavCollision()"); }
	unsigned int GetMipIoFilenameHash(int MipIndex) { return NativeCall<unsigned int, int>(this, "UStaticMesh.GetMipIoFilenameHash(int)", MipIndex); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UStaticMesh.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	UStaticMeshDescription* GetStaticMeshDescription(int LODIndex) { return NativeCall<UStaticMeshDescription*, int>(this, "UStaticMesh.GetStaticMeshDescription(int)", LODIndex); }
	bool CanBeClusterRoot() { return NativeCall<bool>(this, "UStaticMesh.CanBeClusterRoot()"); }
	UStaticMeshSocket* FindSocket(FName InSocketName) { return NativeCall<UStaticMeshSocket*, FName>(this, "UStaticMesh.FindSocket(FName)", InSocketName); }
	int GetMinLODIdx(bool bForceLowestLODIdx) { return NativeCall<int, bool>(this, "UStaticMesh.GetMinLODIdx(bool)", bForceLowestLODIdx); }
	void PostLoad() { NativeCall<void>(this, "UStaticMesh.PostLoad()"); }
	void BeginDestroy() { NativeCall<void>(this, "UStaticMesh.BeginDestroy()"); }
	void MarkAsNotHavingNavigationData() { NativeCall<void>(this, "UStaticMesh.MarkAsNotHavingNavigationData()"); }
	int GetNumLODs() { return NativeCall<int>(this, "UStaticMesh.GetNumLODs()"); }
	void InitResources() { NativeCall<void>(this, "UStaticMesh.InitResources()"); }
};
