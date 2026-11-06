#pragma once


namespace EWorldType
{
	enum Type:int
	{
		None = 0x0,
		Game = 0x1,
		Editor = 0x2,
		PIE = 0x3,
		EditorPreview = 0x4,
		GamePreview = 0x5,
		GameRPC = 0x6,
		Inactive = 0x7
	};
}