#pragma once


namespace FExternalPhysicsCustomObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		RemovedConvexHullsFromTriangleMeshImplicitObject = 0x1,
		SerializeParticleBounds = 0x2,
		SerializeEvolutionBV = 0x3,
		SerializeEvolutionGenericAcceleration = 0x4,
		GlobalElementsHaveBounds = 0x5,
		SpatialIdxSerialized = 0x6,
		HeightfieldData = 0x7,
		SerializeMultiStructures = 0x8,
		KinematicTargets = 0x9,
		TrimeshSerializesBV = 0xA,
		SerializeBroadphaseType = 0xB,
		ScaledGeometryIsConcrete = 0xC,
		TrimeshSerializesAABBTree = 0xD,
		SerializeHashResult = 0xE,
		FlushEvolutionInternalAccelerationQueue = 0xF,
		SerializeShapeWorldSpaceBounds = 0x10,
		AddDynamicKinematicSOA = 0x11,
		AddedMaterialManager = 0x12,
		AddTrimeshMaterialIndices = 0x13,
		AddConvexCenterOfMassAndVolume = 0x14,
		KinematicCentersOfMass = 0x15,
		AddShapeCollisionDisable = 0x16,
		HeightfieldImplicitBounds = 0x17,
		AddDampingToRigids = 0x18,
		TBoxReplacedWithTAABB = 0x19,
		SerializePerShapeDataSimulateFlag = 0x1A,
		ImmutableAABBTree = 0x1B,
		TrimeshCanUseSmallIndices = 0x1C,
		UnionObjectsCanAvoidHierarchy = 0x1D,
		CapsulesNoUnionOrAABBs = 0x1E,
		ConvexUsesTPlaneConcrete = 0x1F,
		HeightfieldUsesHeightsDirectly = 0x20,
		TriangleMeshHasFaceIndexMap = 0x21,
		UniquePayloadIdx = 0x22,
		SerializeCollisionTraceType = 0x23,
		ForceRebuildBodySetupIndices = 0x24,
		PhysicsMaterialSleepCounterThreshold = 0x25,
		AddShapeSimAndQueryCollisionEnabled = 0x26,
		RemoveShapeSimAndQueryDuplicateRepresentations = 0x27,
		RemovedAABBTreeFullBounds = 0x28,
		AddOneWayInteraction = 0x29,
		VersionPlusOne = 0x2A,
		LatestVersion = 0x29
	};
}