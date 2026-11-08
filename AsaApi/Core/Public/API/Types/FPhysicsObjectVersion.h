#pragma once


namespace FPhysicsObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		PerShapeData = 0x1,
		SerializeGTGeometryParticles = 0x2,
		GroomWithDescription = 0x3,
		GroomWithImportSettings = 0x4,
		TriangleMeshHasVertexIndexMap = 0x5,
		VariableConvexStructureData = 0x6,
		AddCCDEnableFlag = 0x7,
		ChaosClothAddWeightedValue = 0x8,
		ConvexUsesVerticesArray = 0x9,
		ChaosClothAddfictitiousforces = 0xA,
		ChaosClothAddTetherStiffnessWeightMap = 0xB,
		ChaosClothFixLODTransitionMaps = 0xC,
		ChaosConvexUsesHalfEdges = 0xD,
		ChaosConvexHasUniqueEdgeSet = 0xE,
		GeometryCollectionUserDefinedCollisionShapes = 0xF,
		ChaosKinematicTargetRemoveScale = 0x10,
		AddCollisionConstraintFlag = 0x11,
		AddDisabledFlag = 0x12,
		AddChaosMaxLinearAngularSpeed = 0x13,
		GeometryCollectionConvexDefaults = 0x14,
		VersionPlusOne = 0x15,
		LatestVersion = 0x14
	};
}