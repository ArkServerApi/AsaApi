#pragma once


enum class EMaterialUsage:int
{
	MATUSAGE_SkeletalMesh = 0x0,
	MATUSAGE_ParticleSprites = 0x1,
	MATUSAGE_BeamTrails = 0x2,
	MATUSAGE_MeshParticles = 0x3,
	MATUSAGE_StaticLighting = 0x4,
	MATUSAGE_MorphTargets = 0x5,
	MATUSAGE_SplineMesh = 0x6,
	MATUSAGE_InstancedStaticMeshes = 0x7,
	MATUSAGE_GeometryCollections = 0x8,
	MATUSAGE_Clothing = 0x9,
	MATUSAGE_NiagaraSprites = 0xA,
	MATUSAGE_NiagaraRibbons = 0xB,
	MATUSAGE_NiagaraMeshParticles = 0xC,
	MATUSAGE_GeometryCache = 0xD,
	MATUSAGE_Water = 0xE,
	MATUSAGE_HairStrands = 0xF,
	MATUSAGE_LidarPointCloud = 0x10,
	MATUSAGE_VirtualHeightfieldMesh = 0x11,
	MATUSAGE_Nanite = 0x12,
	MATUSAGE_VolumetricCloud = 0x13,
	MATUSAGE_MAX = 0x14
};