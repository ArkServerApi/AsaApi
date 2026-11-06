#pragma once


enum class EDecalRenderStage:unsigned char
{
	None = 0x0,
	BeforeBasePass = 0x1,
	BeforeLighting = 0x2,
	Mobile = 0x3,
	MobileBeforeLighting = 0x4,
	Emissive = 0x5,
	AmbientOcclusion = 0x6,
	Num = 0x7
};