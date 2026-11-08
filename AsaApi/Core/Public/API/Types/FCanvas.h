#pragma once

struct FCanvas
{
	enum EElementType
	{
		ET_Line = 0x0,
		ET_Triangle = 0x1,
		ET_MAX = 0x2,
	};

	enum ECanvasAllowModes
	{
		Allow_Flush = 0x1,
		Allow_DeleteOnRender = 0x2,
	};
};