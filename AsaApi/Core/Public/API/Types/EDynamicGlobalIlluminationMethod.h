#pragma once


namespace EDynamicGlobalIlluminationMethod
{
	enum Type:int
	{
		None = 0x0,
		Lumen = 0x1,
		ScreenSpace = 0x2,
		RayTraced = 0x3,
		Plugin = 0x4
	};
}