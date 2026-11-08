#pragma once


namespace ESTOFNotificationType
{
	enum Type:int
	{
		Death = 0x0,
		TribeEliminated = 0x1,
		MatchVictory = 0x2,
		MatchDraw = 0x3,
		MAX = 0x4
	};
}