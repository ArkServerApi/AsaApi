#pragma once


enum class EIndirectShadowingPrimitiveTypes:int
{
	CapsuleShapes = 0x0,
	MeshDistanceFields = 0x1,
	CapsuleShapesAndMeshDistanceFields = 0x2,
	MAX = 0x3
};