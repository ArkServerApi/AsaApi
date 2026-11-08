#pragma once


enum class EPCGDataType:unsigned int
{
	None = 0x0,
	Point = 0x2,
	Spline = 0x4,
	LandscapeSpline = 0x8,
	PolyLine = 0xC,
	Landscape = 0x10,
	Texture = 0x20,
	RenderTarget = 0x40,
	BaseTexture = 0x60,
	Surface = 0x70,
	Volume = 0x80,
	Primitive = 0x100,
	Concrete = 0x1FE,
	Composite = 0x200,
	Spatial = 0x3FE,
	Param = 0x8000000,
	Settings = 0x10000000,
	Other = 0x20000000,
	Any = 0x3FFFFFFF
};