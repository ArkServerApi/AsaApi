#pragma once


enum class EMeshEditingMaterialModes:int
{
	ExistingMaterial = 0x0,
	Diffuse = 0x1,
	Grey = 0x2,
	Soft = 0x3,
	Transparent = 0x4,
	TangentNormal = 0x5,
	VertexColor = 0x6,
	CustomImage = 0x7,
	Custom = 0x8
};