#pragma once


enum class EEditMeshPolygonsToolSelectionMode:int
{
	Faces = 0x0,
	Edges = 0x1,
	Vertices = 0x2,
	Loops = 0x3,
	Rings = 0x4,
	FacesEdgesVertices = 0x5
};