#pragma once


enum class ECollisionShapeType:unsigned char
{
	Sphere = 0x0,
	Plane = 0x1,
	Box = 0x2,
	Capsule = 0x3,
	Convex = 0x4,
	Trimesh = 0x5,
	Heightfield = 0x6,
	None = 0x7
};