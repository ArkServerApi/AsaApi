#pragma once


enum class EHoudiniInputObjectType:unsigned char
{
	Invalid = 0x0,
	Object = 0x1,
	StaticMesh = 0x2,
	SkeletalMesh = 0x3,
	SceneComponent = 0x4,
	StaticMeshComponent = 0x5,
	InstancedStaticMeshComponent = 0x6,
	SplineComponent = 0x7,
	HoudiniSplineComponent = 0x8,
	HoudiniAssetComponent = 0x9,
	Actor = 0xA,
	Landscape = 0xB,
	Brush = 0xC,
	CameraComponent = 0xD,
	DataTable = 0xE,
	HoudiniAssetActor = 0xF,
	FoliageType_InstancedStaticMesh = 0x10,
	GeometryCollection = 0x11,
	GeometryCollectionComponent = 0x12,
	GeometryCollectionActor_Deprecated = 0x13,
	SkeletalMeshComponent = 0x14,
	Blueprint = 0x15
};