#pragma once


enum class EMeshSelectionToolPrimaryMode:int
{
	Brush = 0x0,
	VolumetricBrush = 0x1,
	AngleFiltered = 0x2,
	Visible = 0x3,
	AllConnected = 0x4,
	AllInGroup = 0x5,
	ByMaterial = 0x6,
	ByMaterialAll = 0x7,
	ByUVIsland = 0x8,
	AllWithinAngle = 0x9
};