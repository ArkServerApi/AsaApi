#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGeometryCollectionDebugDrawActor : public AActor
{
public:
	AGeometryCollectionDebugDrawActor() = delete;
	~AGeometryCollectionDebugDrawActor() = delete;
	AGeometryCollectionDebugDrawActor(const AGeometryCollectionDebugDrawActor&) = delete;
	AGeometryCollectionDebugDrawActor& operator=(const AGeometryCollectionDebugDrawActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGeometryCollectionDebugDrawActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGeometryCollectionDebugDrawActor"); }

	FGeometryCollectionDebugDrawWarningMessage& WarningMessage_DEPRECATEDField() { return *GetNativePointerField<FGeometryCollectionDebugDrawWarningMessage*>(this, "AGeometryCollectionDebugDrawActor.WarningMessage_DEPRECATED"); }
	FGeometryCollectionDebugDrawActorSelectedRigidBody& SelectedRigidBody_DEPRECATEDField() { return *GetNativePointerField<FGeometryCollectionDebugDrawActorSelectedRigidBody*>(this, "AGeometryCollectionDebugDrawActor.SelectedRigidBody_DEPRECATED"); }
	bool& bDebugDrawWholeCollectionField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bDebugDrawWholeCollection"); }
	bool& bDebugDrawHierarchyField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bDebugDrawHierarchy"); }
	bool& bDebugDrawClusteringField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bDebugDrawClustering"); }
	EGeometryCollectionDebugDrawActorHideGeometry& HideGeometryField() { return *GetNativePointerField<EGeometryCollectionDebugDrawActorHideGeometry*>(this, "AGeometryCollectionDebugDrawActor.HideGeometry"); }
	bool& bShowRigidBodyIdField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyId"); }
	bool& bShowRigidBodyCollisionField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyCollision"); }
	bool& bCollisionAtOriginField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bCollisionAtOrigin"); }
	bool& bShowRigidBodyTransformField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyTransform"); }
	bool& bShowRigidBodyInertiaField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyInertia"); }
	bool& bShowRigidBodyVelocityField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyVelocity"); }
	bool& bShowRigidBodyForceField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyForce"); }
	bool& bShowRigidBodyInfosField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowRigidBodyInfos"); }
	bool& bShowTransformIndexField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowTransformIndex"); }
	bool& bShowTransformField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowTransform"); }
	bool& bShowParentField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowParent"); }
	bool& bShowLevelField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowLevel"); }
	bool& bShowConnectivityEdgesField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowConnectivityEdges"); }
	bool& bShowGeometryIndexField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowGeometryIndex"); }
	bool& bShowGeometryTransformField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowGeometryTransform"); }
	bool& bShowBoundingBoxField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowBoundingBox"); }
	bool& bShowFacesField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowFaces"); }
	bool& bShowFaceIndicesField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowFaceIndices"); }
	bool& bShowFaceNormalsField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowFaceNormals"); }
	bool& bShowSingleFaceField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowSingleFace"); }
	int& SingleFaceIndexField() { return *GetNativePointerField<int*>(this, "AGeometryCollectionDebugDrawActor.SingleFaceIndex"); }
	bool& bShowVerticesField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowVertices"); }
	bool& bShowVertexIndicesField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowVertexIndices"); }
	bool& bShowVertexNormalsField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bShowVertexNormals"); }
	bool& bUseActiveVisualizationField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bUseActiveVisualization"); }
	float& PointThicknessField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.PointThickness"); }
	float& LineThicknessField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.LineThickness"); }
	bool& bTextShadowField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionDebugDrawActor.bTextShadow"); }
	float& TextScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.TextScale"); }
	float& NormalScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.NormalScale"); }
	float& AxisScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.AxisScale"); }
	float& ArrowScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.ArrowScale"); }
	FColor& RigidBodyIdColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyIdColor"); }
	float& RigidBodyTransformScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyTransformScale"); }
	FColor& RigidBodyCollisionColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyCollisionColor"); }
	FColor& RigidBodyInertiaColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyInertiaColor"); }
	FColor& RigidBodyVelocityColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyVelocityColor"); }
	FColor& RigidBodyForceColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyForceColor"); }
	FColor& RigidBodyInfoColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.RigidBodyInfoColor"); }
	FColor& TransformIndexColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.TransformIndexColor"); }
	float& TransformScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.TransformScale"); }
	FColor& LevelColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.LevelColor"); }
	FColor& ParentColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.ParentColor"); }
	float& ConnectivityEdgeThicknessField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.ConnectivityEdgeThickness"); }
	FColor& GeometryIndexColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.GeometryIndexColor"); }
	float& GeometryTransformScaleField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionDebugDrawActor.GeometryTransformScale"); }
	FColor& BoundingBoxColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.BoundingBoxColor"); }
	FColor& FaceColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.FaceColor"); }
	FColor& FaceIndexColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.FaceIndexColor"); }
	FColor& FaceNormalColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.FaceNormalColor"); }
	FColor& SingleFaceColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.SingleFaceColor"); }
	FColor& VertexColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.VertexColor"); }
	FColor& VertexIndexColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.VertexIndexColor"); }
	FColor& VertexNormalColorField() { return *GetNativePointerField<FColor*>(this, "AGeometryCollectionDebugDrawActor.VertexNormalColor"); }
};
