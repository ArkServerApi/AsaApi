#pragma once


enum class EMeshRenderAttributeFlags:unsigned char
{
	None = 0x0,
	Positions = 0x1,
	VertexColors = 0x2,
	VertexNormals = 0x4,
	VertexUVs = 0x8,
	SecondaryIndexBuffers = 0x10,
	AllVertexAttribs = 0xF
};