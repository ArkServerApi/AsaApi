#pragma once


enum class EGeometryScriptRemoveHiddenTrianglesMethod:unsigned char
{
	FastWindingNumber = 0x0,
	RaycastOcclusionTest = 0x1
};